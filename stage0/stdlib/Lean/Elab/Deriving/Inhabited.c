// Lean compiler output
// Module: Lean.Elab.Deriving.Inhabited
// Imports: public import Lean.Elab.Deriving.Basic import Lean.Elab.Deriving.Util
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_isInductiveCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Deriving_mkContext(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecls(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
uint32_t l_Lean_getMaxHeight(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_markMeta(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Level_param___override(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_inlineExpr(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
uint8_t l_Lean_FVarIdMap_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Expr_isFVar___boxed(lean_object*);
extern lean_object* l_Lean_ForEachExprWhere_initCache;
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_mod(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_runST___redArg(lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_inlineExprTrailing(lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Elab_Term_elabTermAndSynthesize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withDeclName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_registerDerivingHandler(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Deriving"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inhabited"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(195, 196, 35, 37, 101, 57, 52, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(101, 188, 179, 164, 47, 207, 0, 158)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "adding local instance "};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__8;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Inhabited"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(164, 88, 86, 106, 191, 136, 33, 185)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "inst"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(170, 188, 240, 205, 110, 63, 170, 91)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8_spec__9_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_isFVar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8_spec__9_spec__10(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__4_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implicitBinder"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__5_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__6_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__6_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__6_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(39, 181, 62, 102, 86, 14, 161, 96)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__6_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__7_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__8_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__9 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__9_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__10;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__11 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__11_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instBinder"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__12_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__13_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__13_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__13_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(198, 219, 89, 171, 221, 95, 22, 227)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__13 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__13_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__14 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__14_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__15 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__15_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__16_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__16_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__16_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__15_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__16 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__16_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__17;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__18 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__18_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__1_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__19 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__19_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__19_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__20 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__20_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__18_value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__20_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__21 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__21_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__22 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__22_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__1;
static const lean_string_object l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__2 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__0_value),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "explicit"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__3_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__2_value),LEAN_SCALAR_PTR_LITERAL(141, 201, 75, 195, 250, 223, 114, 184)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__3 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__5 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__6 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__7_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__6_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__7 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__8 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__9_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__8_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__9 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__10 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__11_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__11_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__10_value),LEAN_SCALAR_PTR_LITERAL(37, 156, 84, 218, 244, 57, 142, 153)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__11 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__11_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__12 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__13_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__13_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__13_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__12_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__13 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__14 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__15_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__15_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__15_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__14_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__15 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__15_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__16 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__17_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__17_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__17_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__16_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 130, 251, 183, 19, 113, 82)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__17 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__17_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__18 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__19_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__19_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__19_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__18_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__19 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__19_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__20 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__20_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__21 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__21_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__22_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__22_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__22_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__21_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__22 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__22_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__23 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__23_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__24 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__24_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__25_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__25_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__25_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__24_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__25 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__25_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__26 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__26_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__27 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__27_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__28 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__28_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__29 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__29_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__30_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__30_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__28_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__30_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__29_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__30 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__30_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "synthesizing Inhabited instance for"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__7___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__13_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__13___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__14___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__0;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "value:"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__14(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__13_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "using structure instance elaborator"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "using constructor `"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__5_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__5_spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__3(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Elab.Deriving.Inhabited"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 99, .m_capacity = 99, .m_length = 98, .m_data = "_private.Lean.Elab.Deriving.Inhabited.0.Lean.Elab.Deriving.mkInhabitedInstanceUsing.mkDefaultValue"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "assertion violation: insts'.size == usedInstIdxs.size\n      "};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__3;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "inhabited instance using"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__5;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "(assuming parameters "};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__6 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__7;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " are inhabited)"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__8 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__9;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__10;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__11;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "default value contains metavariables"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__12 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__12_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__13;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "cannot unify"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__14 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__14_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__15;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "\nand type of constructor"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__16 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__16_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__17;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "structInstDefault"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__18 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__19_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__19_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__19_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__18_value),LEAN_SCALAR_PTR_LITERAL(45, 130, 215, 216, 160, 223, 59, 11)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__19 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__19_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "struct_inst_default%"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__20 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__20_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__0(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__1;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "defined "};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__3;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "error: "};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "failed to generate `Inhabited` instance for `"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInhabitedInstanceHandler___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInhabitedInstanceHandler___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInhabitedInstanceHandler(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInhabitedInstanceHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__0_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Deriving_mkInhabitedInstanceHandler___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__0_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__0_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__1_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__1_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__1_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__2_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__1_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__2_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__2_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__3_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__2_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__3_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__3_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__4_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__3_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__4_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__4_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__5_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__4_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(202, 58, 65, 192, 197, 114, 188, 72)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__5_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__5_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__6_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__5_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(201, 164, 70, 31, 206, 252, 238, 147)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__6_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__6_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__7_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__6_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(140, 194, 148, 125, 144, 72, 62, 221)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__7_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__7_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__8_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__7_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(13, 4, 236, 13, 233, 47, 93, 25)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__8_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__8_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__9_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__8_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 114, 45, 173, 48, 103, 133, 91)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__9_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__9_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__10_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__9_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(181, 110, 74, 211, 44, 224, 59, 89)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__10_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__10_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__11_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__11_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__11_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__12_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__10_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__11_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(92, 17, 103, 136, 133, 202, 5, 190)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__12_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__12_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__13_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__13_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__13_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__14_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__12_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__13_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(213, 134, 54, 140, 94, 30, 17, 110)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__14_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__14_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__15_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__14_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(192, 173, 29, 242, 158, 136, 98, 37)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__15_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__15_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__16_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__15_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(138, 34, 34, 83, 128, 253, 59, 163)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__16_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__16_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__17_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__16_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 201, 103, 246, 90, 145, 218, 30)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__17_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__17_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__18_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__17_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(139, 85, 122, 167, 214, 70, 252, 158)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__18_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__18_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__19_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__18_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1810264634) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(173, 158, 179, 196, 115, 230, 94, 231)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__19_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__19_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__20_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__20_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__20_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__21_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__19_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__20_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(206, 194, 80, 207, 143, 169, 212, 250)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__21_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__21_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__22_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__22_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__22_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__23_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__21_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__22_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(162, 130, 173, 197, 75, 117, 10, 48)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__23_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__23_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__24_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__23_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(59, 196, 71, 140, 178, 60, 124, 70)}};
static const lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__24_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__24_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1___redArg___lam__0(lean_object* v_k_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v_b_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_){
_start:
{
lean_object* v___x_10_; 
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_3_);
lean_inc_ref(v___y_2_);
v___x_10_ = lean_apply_8(v_k_1_, v_b_4_, v___y_2_, v___y_3_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, lean_box(0));
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1___redArg___lam__0___boxed(lean_object* v_k_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v_b_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1___redArg___lam__0(v_k_11_, v___y_12_, v___y_13_, v_b_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_);
lean_dec(v___y_18_);
lean_dec_ref(v___y_17_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_13_);
lean_dec_ref(v___y_12_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1___redArg(lean_object* v_name_21_, uint8_t v_bi_22_, lean_object* v_type_23_, lean_object* v_k_24_, uint8_t v_kind_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_){
_start:
{
lean_object* v___f_33_; lean_object* v___x_34_; 
lean_inc(v___y_27_);
lean_inc_ref(v___y_26_);
v___f_33_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_33_, 0, v_k_24_);
lean_closure_set(v___f_33_, 1, v___y_26_);
lean_closure_set(v___f_33_, 2, v___y_27_);
v___x_34_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_21_, v_bi_22_, v_type_23_, v___f_33_, v_kind_25_, v___y_28_, v___y_29_, v___y_30_, v___y_31_);
if (lean_obj_tag(v___x_34_) == 0)
{
return v___x_34_;
}
else
{
lean_object* v_a_35_; lean_object* v___x_37_; uint8_t v_isShared_38_; uint8_t v_isSharedCheck_42_; 
v_a_35_ = lean_ctor_get(v___x_34_, 0);
v_isSharedCheck_42_ = !lean_is_exclusive(v___x_34_);
if (v_isSharedCheck_42_ == 0)
{
v___x_37_ = v___x_34_;
v_isShared_38_ = v_isSharedCheck_42_;
goto v_resetjp_36_;
}
else
{
lean_inc(v_a_35_);
lean_dec(v___x_34_);
v___x_37_ = lean_box(0);
v_isShared_38_ = v_isSharedCheck_42_;
goto v_resetjp_36_;
}
v_resetjp_36_:
{
lean_object* v___x_40_; 
if (v_isShared_38_ == 0)
{
v___x_40_ = v___x_37_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v_a_35_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1___redArg___boxed(lean_object* v_name_43_, lean_object* v_bi_44_, lean_object* v_type_45_, lean_object* v_k_46_, lean_object* v_kind_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_bi_boxed_55_; uint8_t v_kind_boxed_56_; lean_object* v_res_57_; 
v_bi_boxed_55_ = lean_unbox(v_bi_44_);
v_kind_boxed_56_ = lean_unbox(v_kind_47_);
v_res_57_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1___redArg(v_name_43_, v_bi_boxed_55_, v_type_45_, v_k_46_, v_kind_boxed_56_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1(lean_object* v_00_u03b1_58_, lean_object* v_name_59_, uint8_t v_bi_60_, lean_object* v_type_61_, lean_object* v_k_62_, uint8_t v_kind_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1___redArg(v_name_59_, v_bi_60_, v_type_61_, v_k_62_, v_kind_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1___boxed(lean_object* v_00_u03b1_72_, lean_object* v_name_73_, lean_object* v_bi_74_, lean_object* v_type_75_, lean_object* v_k_76_, lean_object* v_kind_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
uint8_t v_bi_boxed_85_; uint8_t v_kind_boxed_86_; lean_object* v_res_87_; 
v_bi_boxed_85_ = lean_unbox(v_bi_74_);
v_kind_boxed_86_ = lean_unbox(v_kind_77_);
v_res_87_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1(v_00_u03b1_72_, v_name_73_, v_bi_boxed_85_, v_type_75_, v_k_76_, v_kind_boxed_86_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0_spec__0(lean_object* v_msgData_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v___x_94_; lean_object* v_env_95_; lean_object* v___x_96_; lean_object* v_toCold_97_; lean_object* v_mctx_98_; lean_object* v_lctx_99_; lean_object* v_options_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_94_ = lean_st_ref_get(v___y_92_);
v_env_95_ = lean_ctor_get(v___x_94_, 0);
lean_inc_ref(v_env_95_);
lean_dec(v___x_94_);
v___x_96_ = lean_st_ref_get(v___y_90_);
v_toCold_97_ = lean_ctor_get(v___y_91_, 0);
v_mctx_98_ = lean_ctor_get(v___x_96_, 0);
lean_inc_ref(v_mctx_98_);
lean_dec(v___x_96_);
v_lctx_99_ = lean_ctor_get(v___y_89_, 2);
v_options_100_ = lean_ctor_get(v_toCold_97_, 2);
lean_inc_ref(v_options_100_);
lean_inc_ref(v_lctx_99_);
v___x_101_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_101_, 0, v_env_95_);
lean_ctor_set(v___x_101_, 1, v_mctx_98_);
lean_ctor_set(v___x_101_, 2, v_lctx_99_);
lean_ctor_set(v___x_101_, 3, v_options_100_);
v___x_102_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set(v___x_102_, 1, v_msgData_88_);
v___x_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0_spec__0___boxed(lean_object* v_msgData_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0_spec__0(v_msgData_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_);
lean_dec(v___y_108_);
lean_dec_ref(v___y_107_);
lean_dec(v___y_106_);
lean_dec_ref(v___y_105_);
return v_res_110_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_111_; double v___x_112_; 
v___x_111_ = lean_unsigned_to_nat(0u);
v___x_112_ = lean_float_of_nat(v___x_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg(lean_object* v_cls_116_, lean_object* v_msg_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v_ref_123_; lean_object* v___x_124_; lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_169_; 
v_ref_123_ = lean_ctor_get(v___y_120_, 2);
v___x_124_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0_spec__0(v_msg_117_, v___y_118_, v___y_119_, v___y_120_, v___y_121_);
v_a_125_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_169_ == 0)
{
v___x_127_ = v___x_124_;
v_isShared_128_ = v_isSharedCheck_169_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_169_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_129_; lean_object* v_traceState_130_; lean_object* v_env_131_; lean_object* v_nextMacroScope_132_; lean_object* v_ngen_133_; lean_object* v_auxDeclNGen_134_; lean_object* v_cache_135_; lean_object* v_messages_136_; lean_object* v_infoState_137_; lean_object* v_snapshotTasks_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_168_; 
v___x_129_ = lean_st_ref_take(v___y_121_);
v_traceState_130_ = lean_ctor_get(v___x_129_, 4);
v_env_131_ = lean_ctor_get(v___x_129_, 0);
v_nextMacroScope_132_ = lean_ctor_get(v___x_129_, 1);
v_ngen_133_ = lean_ctor_get(v___x_129_, 2);
v_auxDeclNGen_134_ = lean_ctor_get(v___x_129_, 3);
v_cache_135_ = lean_ctor_get(v___x_129_, 5);
v_messages_136_ = lean_ctor_get(v___x_129_, 6);
v_infoState_137_ = lean_ctor_get(v___x_129_, 7);
v_snapshotTasks_138_ = lean_ctor_get(v___x_129_, 8);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_129_);
if (v_isSharedCheck_168_ == 0)
{
v___x_140_ = v___x_129_;
v_isShared_141_ = v_isSharedCheck_168_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_snapshotTasks_138_);
lean_inc(v_infoState_137_);
lean_inc(v_messages_136_);
lean_inc(v_cache_135_);
lean_inc(v_traceState_130_);
lean_inc(v_auxDeclNGen_134_);
lean_inc(v_ngen_133_);
lean_inc(v_nextMacroScope_132_);
lean_inc(v_env_131_);
lean_dec(v___x_129_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_168_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
uint64_t v_tid_142_; lean_object* v_traces_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_167_; 
v_tid_142_ = lean_ctor_get_uint64(v_traceState_130_, sizeof(void*)*1);
v_traces_143_ = lean_ctor_get(v_traceState_130_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v_traceState_130_);
if (v_isSharedCheck_167_ == 0)
{
v___x_145_ = v_traceState_130_;
v_isShared_146_ = v_isSharedCheck_167_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_traces_143_);
lean_dec(v_traceState_130_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_167_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_147_; lean_object* v___x_148_; double v___x_149_; uint8_t v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_147_ = lean_box(0);
v___x_148_ = lean_box(0);
v___x_149_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__0);
v___x_150_ = 0;
v___x_151_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__1));
v___x_152_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_152_, 0, v_cls_116_);
lean_ctor_set(v___x_152_, 1, v___x_148_);
lean_ctor_set(v___x_152_, 2, v___x_151_);
lean_ctor_set_float(v___x_152_, sizeof(void*)*3, v___x_149_);
lean_ctor_set_float(v___x_152_, sizeof(void*)*3 + 8, v___x_149_);
lean_ctor_set_uint8(v___x_152_, sizeof(void*)*3 + 16, v___x_150_);
v___x_153_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__2));
v___x_154_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_154_, 0, v___x_152_);
lean_ctor_set(v___x_154_, 1, v_a_125_);
lean_ctor_set(v___x_154_, 2, v___x_153_);
lean_inc(v_ref_123_);
v___x_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_155_, 0, v_ref_123_);
lean_ctor_set(v___x_155_, 1, v___x_154_);
v___x_156_ = l_Lean_PersistentArray_push___redArg(v_traces_143_, v___x_155_);
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 0, v___x_156_);
v___x_158_ = v___x_145_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v___x_156_);
lean_ctor_set_uint64(v_reuseFailAlloc_166_, sizeof(void*)*1, v_tid_142_);
v___x_158_ = v_reuseFailAlloc_166_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
lean_object* v___x_160_; 
if (v_isShared_141_ == 0)
{
lean_ctor_set(v___x_140_, 4, v___x_158_);
v___x_160_ = v___x_140_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_env_131_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v_nextMacroScope_132_);
lean_ctor_set(v_reuseFailAlloc_165_, 2, v_ngen_133_);
lean_ctor_set(v_reuseFailAlloc_165_, 3, v_auxDeclNGen_134_);
lean_ctor_set(v_reuseFailAlloc_165_, 4, v___x_158_);
lean_ctor_set(v_reuseFailAlloc_165_, 5, v_cache_135_);
lean_ctor_set(v_reuseFailAlloc_165_, 6, v_messages_136_);
lean_ctor_set(v_reuseFailAlloc_165_, 7, v_infoState_137_);
lean_ctor_set(v_reuseFailAlloc_165_, 8, v_snapshotTasks_138_);
v___x_160_ = v_reuseFailAlloc_165_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
lean_object* v___x_161_; lean_object* v___x_163_; 
v___x_161_ = lean_st_ref_put(v___y_121_, v___x_160_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v___x_147_);
v___x_163_ = v___x_127_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v___x_147_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___boxed(lean_object* v_cls_170_, lean_object* v_msg_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg(v_cls_170_, v_msg_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
return v_res_177_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_188_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3));
v___x_189_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__5));
v___x_190_ = l_Lean_Name_append(v___x_189_, v___x_188_);
return v___x_190_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__7));
v___x_193_ = l_Lean_stringToMessageData(v___x_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___boxed(lean_object* v_a_197_, lean_object* v___x_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_k_201_, lean_object* v_tail_202_, lean_object* v_a_203_, lean_object* v_inst_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0(v_a_197_, v___x_198_, v_a_199_, v_a_200_, v_k_201_, v_tail_202_, v_a_203_, v_inst_204_, v___y_205_, v___y_206_, v___y_207_, v___y_208_, v___y_209_, v___y_210_);
lean_dec(v___y_210_);
lean_dec_ref(v___y_209_);
lean_dec(v___y_208_);
lean_dec_ref(v___y_207_);
lean_dec(v___y_206_);
lean_dec_ref(v___y_205_);
lean_dec(v___x_198_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg(lean_object* v_k_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
if (lean_obj_tag(v_a_217_) == 0)
{
lean_object* v___x_228_; 
lean_dec(v_a_218_);
lean_inc(v___y_226_);
lean_inc_ref(v___y_225_);
lean_inc(v___y_224_);
lean_inc_ref(v___y_223_);
lean_inc(v___y_222_);
lean_inc_ref(v___y_221_);
v___x_228_ = lean_apply_9(v_k_216_, v_a_219_, v_a_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_, lean_box(0));
return v___x_228_;
}
else
{
lean_object* v_head_229_; lean_object* v_tail_230_; lean_object* v___y_232_; uint8_t v___y_233_; lean_object* v___y_238_; lean_object* v_a_239_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v_head_229_ = lean_ctor_get(v_a_217_, 0);
lean_inc(v_head_229_);
v_tail_230_ = lean_ctor_get(v_a_217_, 1);
lean_inc(v_tail_230_);
lean_dec_ref_known(v_a_217_, 2);
v___x_242_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__1));
v___x_243_ = lean_unsigned_to_nat(1u);
v___x_244_ = lean_mk_empty_array_with_capacity(v___x_243_);
v___x_245_ = lean_array_push(v___x_244_, v_head_229_);
v___x_246_ = l_Lean_Meta_mkAppM(v___x_242_, v___x_245_, v___y_223_, v___y_224_, v___y_225_, v___y_226_);
if (lean_obj_tag(v___x_246_) == 0)
{
lean_object* v_a_247_; lean_object* v___f_248_; uint8_t v___x_249_; lean_object* v___x_250_; 
v_a_247_ = lean_ctor_get(v___x_246_, 0);
lean_inc_n(v_a_247_, 3);
lean_dec_ref_known(v___x_246_, 1);
lean_inc(v_tail_230_);
lean_inc_ref(v_k_216_);
lean_inc(v_a_220_);
lean_inc_ref(v_a_219_);
lean_inc(v_a_218_);
v___f_248_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___boxed), 15, 7);
lean_closure_set(v___f_248_, 0, v_a_218_);
lean_closure_set(v___f_248_, 1, v___x_243_);
lean_closure_set(v___f_248_, 2, v_a_219_);
lean_closure_set(v___f_248_, 3, v_a_220_);
lean_closure_set(v___f_248_, 4, v_k_216_);
lean_closure_set(v___f_248_, 5, v_tail_230_);
lean_closure_set(v___f_248_, 6, v_a_247_);
v___x_249_ = 0;
v___x_250_ = l_Lean_Meta_check(v_a_247_, v___x_249_, v___y_223_, v___y_224_, v___y_225_, v___y_226_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_object* v___x_251_; lean_object* v___x_252_; 
lean_dec_ref_known(v___x_250_, 1);
v___x_251_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__3));
v___x_252_ = l_Lean_Core_mkFreshUserName(v___x_251_, v___y_225_, v___y_226_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_a_253_; uint8_t v___x_254_; uint8_t v___x_255_; lean_object* v___x_256_; 
v_a_253_ = lean_ctor_get(v___x_252_, 0);
lean_inc(v_a_253_);
lean_dec_ref_known(v___x_252_, 1);
v___x_254_ = 3;
v___x_255_ = 0;
v___x_256_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__1___redArg(v_a_253_, v___x_254_, v_a_247_, v___f_248_, v___x_255_, v___y_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_dec(v_tail_230_);
lean_dec(v_a_220_);
lean_dec_ref(v_a_219_);
lean_dec(v_a_218_);
lean_dec_ref(v_k_216_);
return v___x_256_;
}
else
{
lean_object* v_a_257_; 
v_a_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc(v_a_257_);
v___y_238_ = v___x_256_;
v_a_239_ = v_a_257_;
goto v___jp_237_;
}
}
else
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
lean_dec_ref(v___f_248_);
lean_dec(v_a_247_);
v_a_258_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v___x_252_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_252_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
lean_inc(v_a_258_);
if (v_isShared_261_ == 0)
{
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_258_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
v___y_238_ = v___x_263_;
v_a_239_ = v_a_258_;
goto v___jp_237_;
}
}
}
}
else
{
lean_object* v_a_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_273_; 
lean_dec_ref(v___f_248_);
lean_dec(v_a_247_);
v_a_266_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_273_ == 0)
{
v___x_268_ = v___x_250_;
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_a_266_);
lean_dec(v___x_250_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_271_; 
lean_inc(v_a_266_);
if (v_isShared_269_ == 0)
{
v___x_271_ = v___x_268_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_a_266_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
v___y_238_ = v___x_271_;
v_a_239_ = v_a_266_;
goto v___jp_237_;
}
}
}
}
else
{
lean_object* v_a_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_281_; 
v_a_274_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_281_ == 0)
{
v___x_276_ = v___x_246_;
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_a_274_);
lean_dec(v___x_246_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_279_; 
lean_inc(v_a_274_);
if (v_isShared_277_ == 0)
{
v___x_279_ = v___x_276_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_a_274_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
v___y_238_ = v___x_279_;
v_a_239_ = v_a_274_;
goto v___jp_237_;
}
}
}
v___jp_231_:
{
if (v___y_233_ == 0)
{
lean_object* v___x_234_; lean_object* v___x_235_; 
lean_dec_ref(v___y_232_);
v___x_234_ = lean_unsigned_to_nat(1u);
v___x_235_ = lean_nat_add(v_a_218_, v___x_234_);
lean_dec(v_a_218_);
v_a_217_ = v_tail_230_;
v_a_218_ = v___x_235_;
goto _start;
}
else
{
lean_dec(v_tail_230_);
lean_dec(v_a_220_);
lean_dec_ref(v_a_219_);
lean_dec(v_a_218_);
lean_dec_ref(v_k_216_);
return v___y_232_;
}
}
v___jp_237_:
{
uint8_t v___x_240_; 
v___x_240_ = l_Lean_Exception_isInterrupt(v_a_239_);
if (v___x_240_ == 0)
{
uint8_t v___x_241_; 
v___x_241_ = l_Lean_Exception_isRuntime(v_a_239_);
v___y_232_ = v___y_238_;
v___y_233_ = v___x_241_;
goto v___jp_231_;
}
else
{
lean_dec_ref(v_a_239_);
v___y_232_ = v___y_238_;
v___y_233_ = v___x_240_;
goto v___jp_231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0(lean_object* v_a_282_, lean_object* v___x_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_k_286_, lean_object* v_tail_287_, lean_object* v_a_288_, lean_object* v_inst_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_){
_start:
{
lean_object* v___y_298_; lean_object* v___y_299_; lean_object* v___y_300_; lean_object* v___y_301_; lean_object* v___y_302_; lean_object* v___y_303_; lean_object* v_toCold_309_; lean_object* v_options_310_; uint8_t v_hasTrace_311_; 
v_toCold_309_ = lean_ctor_get(v___y_294_, 0);
v_options_310_ = lean_ctor_get(v_toCold_309_, 2);
v_hasTrace_311_ = lean_ctor_get_uint8(v_options_310_, sizeof(void*)*1);
if (v_hasTrace_311_ == 0)
{
lean_dec_ref(v_a_288_);
v___y_298_ = v___y_290_;
v___y_299_ = v___y_291_;
v___y_300_ = v___y_292_;
v___y_301_ = v___y_293_;
v___y_302_ = v___y_294_;
v___y_303_ = v___y_295_;
goto v___jp_297_;
}
else
{
lean_object* v_inheritedTraceOptions_312_; lean_object* v___x_313_; lean_object* v___x_314_; uint8_t v___x_315_; 
v_inheritedTraceOptions_312_ = lean_ctor_get(v_toCold_309_, 11);
v___x_313_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3));
v___x_314_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6);
v___x_315_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_312_, v_options_310_, v___x_314_);
if (v___x_315_ == 0)
{
lean_dec_ref(v_a_288_);
v___y_298_ = v___y_290_;
v___y_299_ = v___y_291_;
v___y_300_ = v___y_292_;
v___y_301_ = v___y_293_;
v___y_302_ = v___y_294_;
v___y_303_ = v___y_295_;
goto v___jp_297_;
}
else
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_316_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__8, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__8_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__8);
v___x_317_ = l_Lean_MessageData_ofExpr(v_a_288_);
v___x_318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_316_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
v___x_319_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg(v___x_313_, v___x_318_, v___y_292_, v___y_293_, v___y_294_, v___y_295_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_dec_ref_known(v___x_319_, 1);
v___y_298_ = v___y_290_;
v___y_299_ = v___y_291_;
v___y_300_ = v___y_292_;
v___y_301_ = v___y_293_;
v___y_302_ = v___y_294_;
v___y_303_ = v___y_295_;
goto v___jp_297_;
}
else
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_327_; 
lean_dec_ref(v_inst_289_);
lean_dec(v_tail_287_);
lean_dec_ref(v_k_286_);
lean_dec(v_a_285_);
lean_dec_ref(v_a_284_);
lean_dec(v_a_282_);
v_a_320_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_327_ == 0)
{
v___x_322_ = v___x_319_;
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_319_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_320_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
}
}
v___jp_297_:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_304_ = lean_nat_add(v_a_282_, v___x_283_);
lean_inc_ref(v_inst_289_);
v___x_305_ = lean_array_push(v_a_284_, v_inst_289_);
v___x_306_ = l_Lean_Expr_fvarId_x21(v_inst_289_);
lean_dec_ref(v_inst_289_);
v___x_307_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v___x_306_, v_a_282_, v_a_285_);
v___x_308_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg(v_k_286_, v_tail_287_, v___x_304_, v___x_305_, v___x_307_, v___y_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_);
return v___x_308_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___boxed(lean_object* v_k_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg(v_k_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec(v___y_334_);
lean_dec_ref(v___y_333_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux(lean_object* v_00_u03b1_341_, lean_object* v_k_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg(v_k_342_, v_a_343_, v_a_344_, v_a_345_, v_a_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___boxed(lean_object* v_00_u03b1_355_, lean_object* v_k_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux(v_00_u03b1_355_, v_k_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_);
lean_dec(v___y_366_);
lean_dec_ref(v___y_365_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0(lean_object* v_cls_369_, lean_object* v_msg_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg(v_cls_369_, v_msg_370_, v___y_373_, v___y_374_, v___y_375_, v___y_376_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___boxed(lean_object* v_cls_379_, lean_object* v_msg_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0(v_cls_379_, v_msg_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams___redArg(uint8_t v_addHypotheses_391_, lean_object* v_xs_392_, lean_object* v_k_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
if (v_addHypotheses_391_ == 0)
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
lean_dec_ref(v_xs_392_);
v___x_401_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams___redArg___closed__0));
v___x_402_ = lean_box(1);
lean_inc(v___y_399_);
lean_inc_ref(v___y_398_);
lean_inc(v___y_397_);
lean_inc_ref(v___y_396_);
lean_inc(v___y_395_);
lean_inc_ref(v___y_394_);
v___x_403_ = lean_apply_9(v_k_393_, v___x_401_, v___x_402_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, lean_box(0));
return v___x_403_;
}
else
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_404_ = lean_array_to_list(v_xs_392_);
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams___redArg___closed__0));
v___x_407_ = lean_box(1);
v___x_408_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg(v_k_393_, v___x_404_, v___x_405_, v___x_406_, v___x_407_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
return v___x_408_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams___redArg___boxed(lean_object* v_addHypotheses_409_, lean_object* v_xs_410_, lean_object* v_k_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
uint8_t v_addHypotheses_boxed_419_; lean_object* v_res_420_; 
v_addHypotheses_boxed_419_ = lean_unbox(v_addHypotheses_409_);
v_res_420_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams___redArg(v_addHypotheses_boxed_419_, v_xs_410_, v_k_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
lean_dec(v___y_415_);
lean_dec_ref(v___y_414_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams(uint8_t v_addHypotheses_421_, lean_object* v_00_u03b1_422_, lean_object* v_xs_423_, lean_object* v_k_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams___redArg(v_addHypotheses_421_, v_xs_423_, v_k_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams___boxed(lean_object* v_addHypotheses_433_, lean_object* v_00_u03b1_434_, lean_object* v_xs_435_, lean_object* v_k_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
uint8_t v_addHypotheses_boxed_444_; lean_object* v_res_445_; 
v_addHypotheses_boxed_444_ = lean_unbox(v_addHypotheses_433_);
v_res_445_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams(v_addHypotheses_boxed_444_, v_00_u03b1_434_, v_xs_435_, v_k_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
lean_dec(v___y_442_);
lean_dec_ref(v___y_441_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
return v_res_445_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__0___redArg(lean_object* v_k_446_, lean_object* v_t_447_){
_start:
{
if (lean_obj_tag(v_t_447_) == 0)
{
lean_object* v_k_448_; lean_object* v_l_449_; lean_object* v_r_450_; uint8_t v___x_451_; 
v_k_448_ = lean_ctor_get(v_t_447_, 1);
v_l_449_ = lean_ctor_get(v_t_447_, 3);
v_r_450_ = lean_ctor_get(v_t_447_, 4);
v___x_451_ = lean_nat_dec_lt(v_k_446_, v_k_448_);
if (v___x_451_ == 0)
{
uint8_t v___x_452_; 
v___x_452_ = lean_nat_dec_eq(v_k_446_, v_k_448_);
if (v___x_452_ == 0)
{
v_t_447_ = v_r_450_;
goto _start;
}
else
{
return v___x_452_;
}
}
else
{
v_t_447_ = v_l_449_;
goto _start;
}
}
else
{
uint8_t v___x_455_; 
v___x_455_ = 0;
return v___x_455_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__0___redArg___boxed(lean_object* v_k_456_, lean_object* v_t_457_){
_start:
{
uint8_t v_res_458_; lean_object* v_r_459_; 
v_res_458_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__0___redArg(v_k_456_, v_t_457_);
lean_dec(v_t_457_);
lean_dec(v_k_456_);
v_r_459_ = lean_box(v_res_458_);
return v_r_459_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__1___redArg(lean_object* v_k_460_, lean_object* v_v_461_, lean_object* v_t_462_){
_start:
{
if (lean_obj_tag(v_t_462_) == 0)
{
lean_object* v_size_463_; lean_object* v_k_464_; lean_object* v_v_465_; lean_object* v_l_466_; lean_object* v_r_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_748_; 
v_size_463_ = lean_ctor_get(v_t_462_, 0);
v_k_464_ = lean_ctor_get(v_t_462_, 1);
v_v_465_ = lean_ctor_get(v_t_462_, 2);
v_l_466_ = lean_ctor_get(v_t_462_, 3);
v_r_467_ = lean_ctor_get(v_t_462_, 4);
v_isSharedCheck_748_ = !lean_is_exclusive(v_t_462_);
if (v_isSharedCheck_748_ == 0)
{
v___x_469_ = v_t_462_;
v_isShared_470_ = v_isSharedCheck_748_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_r_467_);
lean_inc(v_l_466_);
lean_inc(v_v_465_);
lean_inc(v_k_464_);
lean_inc(v_size_463_);
lean_dec(v_t_462_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_748_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
uint8_t v___x_471_; 
v___x_471_ = lean_nat_dec_lt(v_k_460_, v_k_464_);
if (v___x_471_ == 0)
{
uint8_t v___x_472_; 
v___x_472_ = lean_nat_dec_eq(v_k_460_, v_k_464_);
if (v___x_472_ == 0)
{
lean_object* v_impl_473_; lean_object* v___x_474_; 
lean_dec(v_size_463_);
v_impl_473_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__1___redArg(v_k_460_, v_v_461_, v_r_467_);
v___x_474_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_466_) == 0)
{
lean_object* v_size_475_; lean_object* v_size_476_; lean_object* v_k_477_; lean_object* v_v_478_; lean_object* v_l_479_; lean_object* v_r_480_; lean_object* v___x_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
v_size_475_ = lean_ctor_get(v_l_466_, 0);
v_size_476_ = lean_ctor_get(v_impl_473_, 0);
lean_inc(v_size_476_);
v_k_477_ = lean_ctor_get(v_impl_473_, 1);
lean_inc(v_k_477_);
v_v_478_ = lean_ctor_get(v_impl_473_, 2);
lean_inc(v_v_478_);
v_l_479_ = lean_ctor_get(v_impl_473_, 3);
lean_inc(v_l_479_);
v_r_480_ = lean_ctor_get(v_impl_473_, 4);
lean_inc(v_r_480_);
v___x_481_ = lean_unsigned_to_nat(3u);
v___x_482_ = lean_nat_mul(v___x_481_, v_size_475_);
v___x_483_ = lean_nat_dec_lt(v___x_482_, v_size_476_);
lean_dec(v___x_482_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_487_; 
lean_dec(v_r_480_);
lean_dec(v_l_479_);
lean_dec(v_v_478_);
lean_dec(v_k_477_);
v___x_484_ = lean_nat_add(v___x_474_, v_size_475_);
v___x_485_ = lean_nat_add(v___x_484_, v_size_476_);
lean_dec(v_size_476_);
lean_dec(v___x_484_);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 4, v_impl_473_);
lean_ctor_set(v___x_469_, 0, v___x_485_);
v___x_487_ = v___x_469_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v___x_485_);
lean_ctor_set(v_reuseFailAlloc_488_, 1, v_k_464_);
lean_ctor_set(v_reuseFailAlloc_488_, 2, v_v_465_);
lean_ctor_set(v_reuseFailAlloc_488_, 3, v_l_466_);
lean_ctor_set(v_reuseFailAlloc_488_, 4, v_impl_473_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
else
{
lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_552_; 
v_isSharedCheck_552_ = !lean_is_exclusive(v_impl_473_);
if (v_isSharedCheck_552_ == 0)
{
lean_object* v_unused_553_; lean_object* v_unused_554_; lean_object* v_unused_555_; lean_object* v_unused_556_; lean_object* v_unused_557_; 
v_unused_553_ = lean_ctor_get(v_impl_473_, 4);
lean_dec(v_unused_553_);
v_unused_554_ = lean_ctor_get(v_impl_473_, 3);
lean_dec(v_unused_554_);
v_unused_555_ = lean_ctor_get(v_impl_473_, 2);
lean_dec(v_unused_555_);
v_unused_556_ = lean_ctor_get(v_impl_473_, 1);
lean_dec(v_unused_556_);
v_unused_557_ = lean_ctor_get(v_impl_473_, 0);
lean_dec(v_unused_557_);
v___x_490_ = v_impl_473_;
v_isShared_491_ = v_isSharedCheck_552_;
goto v_resetjp_489_;
}
else
{
lean_dec(v_impl_473_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_552_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v_size_492_; lean_object* v_k_493_; lean_object* v_v_494_; lean_object* v_l_495_; lean_object* v_r_496_; lean_object* v_size_497_; lean_object* v___x_498_; lean_object* v___x_499_; uint8_t v___x_500_; 
v_size_492_ = lean_ctor_get(v_l_479_, 0);
v_k_493_ = lean_ctor_get(v_l_479_, 1);
v_v_494_ = lean_ctor_get(v_l_479_, 2);
v_l_495_ = lean_ctor_get(v_l_479_, 3);
v_r_496_ = lean_ctor_get(v_l_479_, 4);
v_size_497_ = lean_ctor_get(v_r_480_, 0);
v___x_498_ = lean_unsigned_to_nat(2u);
v___x_499_ = lean_nat_mul(v___x_498_, v_size_497_);
v___x_500_ = lean_nat_dec_lt(v_size_492_, v___x_499_);
lean_dec(v___x_499_);
if (v___x_500_ == 0)
{
lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_528_; 
lean_inc(v_r_496_);
lean_inc(v_l_495_);
lean_inc(v_v_494_);
lean_inc(v_k_493_);
v_isSharedCheck_528_ = !lean_is_exclusive(v_l_479_);
if (v_isSharedCheck_528_ == 0)
{
lean_object* v_unused_529_; lean_object* v_unused_530_; lean_object* v_unused_531_; lean_object* v_unused_532_; lean_object* v_unused_533_; 
v_unused_529_ = lean_ctor_get(v_l_479_, 4);
lean_dec(v_unused_529_);
v_unused_530_ = lean_ctor_get(v_l_479_, 3);
lean_dec(v_unused_530_);
v_unused_531_ = lean_ctor_get(v_l_479_, 2);
lean_dec(v_unused_531_);
v_unused_532_ = lean_ctor_get(v_l_479_, 1);
lean_dec(v_unused_532_);
v_unused_533_ = lean_ctor_get(v_l_479_, 0);
lean_dec(v_unused_533_);
v___x_502_ = v_l_479_;
v_isShared_503_ = v_isSharedCheck_528_;
goto v_resetjp_501_;
}
else
{
lean_dec(v_l_479_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_528_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___y_507_; lean_object* v___y_508_; lean_object* v___y_509_; lean_object* v___y_518_; 
v___x_504_ = lean_nat_add(v___x_474_, v_size_475_);
v___x_505_ = lean_nat_add(v___x_504_, v_size_476_);
lean_dec(v_size_476_);
if (lean_obj_tag(v_l_495_) == 0)
{
lean_object* v_size_526_; 
v_size_526_ = lean_ctor_get(v_l_495_, 0);
lean_inc(v_size_526_);
v___y_518_ = v_size_526_;
goto v___jp_517_;
}
else
{
lean_object* v___x_527_; 
v___x_527_ = lean_unsigned_to_nat(0u);
v___y_518_ = v___x_527_;
goto v___jp_517_;
}
v___jp_506_:
{
lean_object* v___x_510_; lean_object* v___x_512_; 
v___x_510_ = lean_nat_add(v___y_507_, v___y_509_);
lean_dec(v___y_509_);
lean_dec(v___y_507_);
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 4, v_r_480_);
lean_ctor_set(v___x_502_, 3, v_r_496_);
lean_ctor_set(v___x_502_, 2, v_v_478_);
lean_ctor_set(v___x_502_, 1, v_k_477_);
lean_ctor_set(v___x_502_, 0, v___x_510_);
v___x_512_ = v___x_502_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v___x_510_);
lean_ctor_set(v_reuseFailAlloc_516_, 1, v_k_477_);
lean_ctor_set(v_reuseFailAlloc_516_, 2, v_v_478_);
lean_ctor_set(v_reuseFailAlloc_516_, 3, v_r_496_);
lean_ctor_set(v_reuseFailAlloc_516_, 4, v_r_480_);
v___x_512_ = v_reuseFailAlloc_516_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
lean_object* v___x_514_; 
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 4, v___x_512_);
lean_ctor_set(v___x_490_, 3, v___y_508_);
lean_ctor_set(v___x_490_, 2, v_v_494_);
lean_ctor_set(v___x_490_, 1, v_k_493_);
lean_ctor_set(v___x_490_, 0, v___x_505_);
v___x_514_ = v___x_490_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v___x_505_);
lean_ctor_set(v_reuseFailAlloc_515_, 1, v_k_493_);
lean_ctor_set(v_reuseFailAlloc_515_, 2, v_v_494_);
lean_ctor_set(v_reuseFailAlloc_515_, 3, v___y_508_);
lean_ctor_set(v_reuseFailAlloc_515_, 4, v___x_512_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
v___jp_517_:
{
lean_object* v___x_519_; lean_object* v___x_521_; 
v___x_519_ = lean_nat_add(v___x_504_, v___y_518_);
lean_dec(v___y_518_);
lean_dec(v___x_504_);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 4, v_l_495_);
lean_ctor_set(v___x_469_, 0, v___x_519_);
v___x_521_ = v___x_469_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_519_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v_k_464_);
lean_ctor_set(v_reuseFailAlloc_525_, 2, v_v_465_);
lean_ctor_set(v_reuseFailAlloc_525_, 3, v_l_466_);
lean_ctor_set(v_reuseFailAlloc_525_, 4, v_l_495_);
v___x_521_ = v_reuseFailAlloc_525_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v___x_522_; 
v___x_522_ = lean_nat_add(v___x_474_, v_size_497_);
if (lean_obj_tag(v_r_496_) == 0)
{
lean_object* v_size_523_; 
v_size_523_ = lean_ctor_get(v_r_496_, 0);
lean_inc(v_size_523_);
v___y_507_ = v___x_522_;
v___y_508_ = v___x_521_;
v___y_509_ = v_size_523_;
goto v___jp_506_;
}
else
{
lean_object* v___x_524_; 
v___x_524_ = lean_unsigned_to_nat(0u);
v___y_507_ = v___x_522_;
v___y_508_ = v___x_521_;
v___y_509_ = v___x_524_;
goto v___jp_506_;
}
}
}
}
}
else
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_538_; 
lean_del_object(v___x_469_);
v___x_534_ = lean_nat_add(v___x_474_, v_size_475_);
v___x_535_ = lean_nat_add(v___x_534_, v_size_476_);
lean_dec(v_size_476_);
v___x_536_ = lean_nat_add(v___x_534_, v_size_492_);
lean_dec(v___x_534_);
lean_inc_ref(v_l_466_);
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 4, v_l_479_);
lean_ctor_set(v___x_490_, 3, v_l_466_);
lean_ctor_set(v___x_490_, 2, v_v_465_);
lean_ctor_set(v___x_490_, 1, v_k_464_);
lean_ctor_set(v___x_490_, 0, v___x_536_);
v___x_538_ = v___x_490_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_551_, 1, v_k_464_);
lean_ctor_set(v_reuseFailAlloc_551_, 2, v_v_465_);
lean_ctor_set(v_reuseFailAlloc_551_, 3, v_l_466_);
lean_ctor_set(v_reuseFailAlloc_551_, 4, v_l_479_);
v___x_538_ = v_reuseFailAlloc_551_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_545_; 
v_isSharedCheck_545_ = !lean_is_exclusive(v_l_466_);
if (v_isSharedCheck_545_ == 0)
{
lean_object* v_unused_546_; lean_object* v_unused_547_; lean_object* v_unused_548_; lean_object* v_unused_549_; lean_object* v_unused_550_; 
v_unused_546_ = lean_ctor_get(v_l_466_, 4);
lean_dec(v_unused_546_);
v_unused_547_ = lean_ctor_get(v_l_466_, 3);
lean_dec(v_unused_547_);
v_unused_548_ = lean_ctor_get(v_l_466_, 2);
lean_dec(v_unused_548_);
v_unused_549_ = lean_ctor_get(v_l_466_, 1);
lean_dec(v_unused_549_);
v_unused_550_ = lean_ctor_get(v_l_466_, 0);
lean_dec(v_unused_550_);
v___x_540_ = v_l_466_;
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
else
{
lean_dec(v_l_466_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_543_; 
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 4, v_r_480_);
lean_ctor_set(v___x_540_, 3, v___x_538_);
lean_ctor_set(v___x_540_, 2, v_v_478_);
lean_ctor_set(v___x_540_, 1, v_k_477_);
lean_ctor_set(v___x_540_, 0, v___x_535_);
v___x_543_ = v___x_540_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_535_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v_k_477_);
lean_ctor_set(v_reuseFailAlloc_544_, 2, v_v_478_);
lean_ctor_set(v_reuseFailAlloc_544_, 3, v___x_538_);
lean_ctor_set(v_reuseFailAlloc_544_, 4, v_r_480_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_558_; 
v_l_558_ = lean_ctor_get(v_impl_473_, 3);
lean_inc(v_l_558_);
if (lean_obj_tag(v_l_558_) == 0)
{
lean_object* v_r_559_; lean_object* v_k_560_; lean_object* v_v_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_584_; 
v_r_559_ = lean_ctor_get(v_impl_473_, 4);
v_k_560_ = lean_ctor_get(v_impl_473_, 1);
v_v_561_ = lean_ctor_get(v_impl_473_, 2);
v_isSharedCheck_584_ = !lean_is_exclusive(v_impl_473_);
if (v_isSharedCheck_584_ == 0)
{
lean_object* v_unused_585_; lean_object* v_unused_586_; 
v_unused_585_ = lean_ctor_get(v_impl_473_, 3);
lean_dec(v_unused_585_);
v_unused_586_ = lean_ctor_get(v_impl_473_, 0);
lean_dec(v_unused_586_);
v___x_563_ = v_impl_473_;
v_isShared_564_ = v_isSharedCheck_584_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_r_559_);
lean_inc(v_v_561_);
lean_inc(v_k_560_);
lean_dec(v_impl_473_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_584_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v_k_565_; lean_object* v_v_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_580_; 
v_k_565_ = lean_ctor_get(v_l_558_, 1);
v_v_566_ = lean_ctor_get(v_l_558_, 2);
v_isSharedCheck_580_ = !lean_is_exclusive(v_l_558_);
if (v_isSharedCheck_580_ == 0)
{
lean_object* v_unused_581_; lean_object* v_unused_582_; lean_object* v_unused_583_; 
v_unused_581_ = lean_ctor_get(v_l_558_, 4);
lean_dec(v_unused_581_);
v_unused_582_ = lean_ctor_get(v_l_558_, 3);
lean_dec(v_unused_582_);
v_unused_583_ = lean_ctor_get(v_l_558_, 0);
lean_dec(v_unused_583_);
v___x_568_ = v_l_558_;
v_isShared_569_ = v_isSharedCheck_580_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_v_566_);
lean_inc(v_k_565_);
lean_dec(v_l_558_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_580_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_570_; lean_object* v___x_572_; 
v___x_570_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_559_, 2);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 4, v_r_559_);
lean_ctor_set(v___x_568_, 3, v_r_559_);
lean_ctor_set(v___x_568_, 2, v_v_465_);
lean_ctor_set(v___x_568_, 1, v_k_464_);
lean_ctor_set(v___x_568_, 0, v___x_474_);
v___x_572_ = v___x_568_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_474_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v_k_464_);
lean_ctor_set(v_reuseFailAlloc_579_, 2, v_v_465_);
lean_ctor_set(v_reuseFailAlloc_579_, 3, v_r_559_);
lean_ctor_set(v_reuseFailAlloc_579_, 4, v_r_559_);
v___x_572_ = v_reuseFailAlloc_579_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
lean_object* v___x_574_; 
lean_inc(v_r_559_);
if (v_isShared_564_ == 0)
{
lean_ctor_set(v___x_563_, 3, v_r_559_);
lean_ctor_set(v___x_563_, 0, v___x_474_);
v___x_574_ = v___x_563_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_474_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_k_560_);
lean_ctor_set(v_reuseFailAlloc_578_, 2, v_v_561_);
lean_ctor_set(v_reuseFailAlloc_578_, 3, v_r_559_);
lean_ctor_set(v_reuseFailAlloc_578_, 4, v_r_559_);
v___x_574_ = v_reuseFailAlloc_578_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_576_; 
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 4, v___x_574_);
lean_ctor_set(v___x_469_, 3, v___x_572_);
lean_ctor_set(v___x_469_, 2, v_v_566_);
lean_ctor_set(v___x_469_, 1, v_k_565_);
lean_ctor_set(v___x_469_, 0, v___x_570_);
v___x_576_ = v___x_469_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v___x_570_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_k_565_);
lean_ctor_set(v_reuseFailAlloc_577_, 2, v_v_566_);
lean_ctor_set(v_reuseFailAlloc_577_, 3, v___x_572_);
lean_ctor_set(v_reuseFailAlloc_577_, 4, v___x_574_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
}
}
}
else
{
lean_object* v_r_587_; 
v_r_587_ = lean_ctor_get(v_impl_473_, 4);
lean_inc(v_r_587_);
if (lean_obj_tag(v_r_587_) == 0)
{
lean_object* v_k_588_; lean_object* v_v_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_600_; 
v_k_588_ = lean_ctor_get(v_impl_473_, 1);
v_v_589_ = lean_ctor_get(v_impl_473_, 2);
v_isSharedCheck_600_ = !lean_is_exclusive(v_impl_473_);
if (v_isSharedCheck_600_ == 0)
{
lean_object* v_unused_601_; lean_object* v_unused_602_; lean_object* v_unused_603_; 
v_unused_601_ = lean_ctor_get(v_impl_473_, 4);
lean_dec(v_unused_601_);
v_unused_602_ = lean_ctor_get(v_impl_473_, 3);
lean_dec(v_unused_602_);
v_unused_603_ = lean_ctor_get(v_impl_473_, 0);
lean_dec(v_unused_603_);
v___x_591_ = v_impl_473_;
v_isShared_592_ = v_isSharedCheck_600_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_v_589_);
lean_inc(v_k_588_);
lean_dec(v_impl_473_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_600_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_593_; lean_object* v___x_595_; 
v___x_593_ = lean_unsigned_to_nat(3u);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 4, v_l_558_);
lean_ctor_set(v___x_591_, 2, v_v_465_);
lean_ctor_set(v___x_591_, 1, v_k_464_);
lean_ctor_set(v___x_591_, 0, v___x_474_);
v___x_595_ = v___x_591_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v___x_474_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v_k_464_);
lean_ctor_set(v_reuseFailAlloc_599_, 2, v_v_465_);
lean_ctor_set(v_reuseFailAlloc_599_, 3, v_l_558_);
lean_ctor_set(v_reuseFailAlloc_599_, 4, v_l_558_);
v___x_595_ = v_reuseFailAlloc_599_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
lean_object* v___x_597_; 
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 4, v_r_587_);
lean_ctor_set(v___x_469_, 3, v___x_595_);
lean_ctor_set(v___x_469_, 2, v_v_589_);
lean_ctor_set(v___x_469_, 1, v_k_588_);
lean_ctor_set(v___x_469_, 0, v___x_593_);
v___x_597_ = v___x_469_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_593_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_k_588_);
lean_ctor_set(v_reuseFailAlloc_598_, 2, v_v_589_);
lean_ctor_set(v_reuseFailAlloc_598_, 3, v___x_595_);
lean_ctor_set(v_reuseFailAlloc_598_, 4, v_r_587_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
}
else
{
lean_object* v___x_604_; lean_object* v___x_606_; 
v___x_604_ = lean_unsigned_to_nat(2u);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 4, v_impl_473_);
lean_ctor_set(v___x_469_, 3, v_r_587_);
lean_ctor_set(v___x_469_, 0, v___x_604_);
v___x_606_ = v___x_469_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_k_464_);
lean_ctor_set(v_reuseFailAlloc_607_, 2, v_v_465_);
lean_ctor_set(v_reuseFailAlloc_607_, 3, v_r_587_);
lean_ctor_set(v_reuseFailAlloc_607_, 4, v_impl_473_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
}
else
{
lean_object* v___x_609_; 
lean_dec(v_v_465_);
lean_dec(v_k_464_);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 2, v_v_461_);
lean_ctor_set(v___x_469_, 1, v_k_460_);
v___x_609_ = v___x_469_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_size_463_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v_k_460_);
lean_ctor_set(v_reuseFailAlloc_610_, 2, v_v_461_);
lean_ctor_set(v_reuseFailAlloc_610_, 3, v_l_466_);
lean_ctor_set(v_reuseFailAlloc_610_, 4, v_r_467_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
}
else
{
lean_object* v_impl_611_; lean_object* v___x_612_; 
lean_dec(v_size_463_);
v_impl_611_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__1___redArg(v_k_460_, v_v_461_, v_l_466_);
v___x_612_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_467_) == 0)
{
lean_object* v_size_613_; lean_object* v_size_614_; lean_object* v_k_615_; lean_object* v_v_616_; lean_object* v_l_617_; lean_object* v_r_618_; lean_object* v___x_619_; lean_object* v___x_620_; uint8_t v___x_621_; 
v_size_613_ = lean_ctor_get(v_r_467_, 0);
v_size_614_ = lean_ctor_get(v_impl_611_, 0);
lean_inc(v_size_614_);
v_k_615_ = lean_ctor_get(v_impl_611_, 1);
lean_inc(v_k_615_);
v_v_616_ = lean_ctor_get(v_impl_611_, 2);
lean_inc(v_v_616_);
v_l_617_ = lean_ctor_get(v_impl_611_, 3);
lean_inc(v_l_617_);
v_r_618_ = lean_ctor_get(v_impl_611_, 4);
lean_inc(v_r_618_);
v___x_619_ = lean_unsigned_to_nat(3u);
v___x_620_ = lean_nat_mul(v___x_619_, v_size_613_);
v___x_621_ = lean_nat_dec_lt(v___x_620_, v_size_614_);
lean_dec(v___x_620_);
if (v___x_621_ == 0)
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_625_; 
lean_dec(v_r_618_);
lean_dec(v_l_617_);
lean_dec(v_v_616_);
lean_dec(v_k_615_);
v___x_622_ = lean_nat_add(v___x_612_, v_size_614_);
lean_dec(v_size_614_);
v___x_623_ = lean_nat_add(v___x_622_, v_size_613_);
lean_dec(v___x_622_);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 3, v_impl_611_);
lean_ctor_set(v___x_469_, 0, v___x_623_);
v___x_625_ = v___x_469_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_623_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_k_464_);
lean_ctor_set(v_reuseFailAlloc_626_, 2, v_v_465_);
lean_ctor_set(v_reuseFailAlloc_626_, 3, v_impl_611_);
lean_ctor_set(v_reuseFailAlloc_626_, 4, v_r_467_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
else
{
lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_692_; 
v_isSharedCheck_692_ = !lean_is_exclusive(v_impl_611_);
if (v_isSharedCheck_692_ == 0)
{
lean_object* v_unused_693_; lean_object* v_unused_694_; lean_object* v_unused_695_; lean_object* v_unused_696_; lean_object* v_unused_697_; 
v_unused_693_ = lean_ctor_get(v_impl_611_, 4);
lean_dec(v_unused_693_);
v_unused_694_ = lean_ctor_get(v_impl_611_, 3);
lean_dec(v_unused_694_);
v_unused_695_ = lean_ctor_get(v_impl_611_, 2);
lean_dec(v_unused_695_);
v_unused_696_ = lean_ctor_get(v_impl_611_, 1);
lean_dec(v_unused_696_);
v_unused_697_ = lean_ctor_get(v_impl_611_, 0);
lean_dec(v_unused_697_);
v___x_628_ = v_impl_611_;
v_isShared_629_ = v_isSharedCheck_692_;
goto v_resetjp_627_;
}
else
{
lean_dec(v_impl_611_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_692_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v_size_630_; lean_object* v_size_631_; lean_object* v_k_632_; lean_object* v_v_633_; lean_object* v_l_634_; lean_object* v_r_635_; lean_object* v___x_636_; lean_object* v___x_637_; uint8_t v___x_638_; 
v_size_630_ = lean_ctor_get(v_l_617_, 0);
v_size_631_ = lean_ctor_get(v_r_618_, 0);
v_k_632_ = lean_ctor_get(v_r_618_, 1);
v_v_633_ = lean_ctor_get(v_r_618_, 2);
v_l_634_ = lean_ctor_get(v_r_618_, 3);
v_r_635_ = lean_ctor_get(v_r_618_, 4);
v___x_636_ = lean_unsigned_to_nat(2u);
v___x_637_ = lean_nat_mul(v___x_636_, v_size_630_);
v___x_638_ = lean_nat_dec_lt(v_size_631_, v___x_637_);
lean_dec(v___x_637_);
if (v___x_638_ == 0)
{
lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_667_; 
lean_inc(v_r_635_);
lean_inc(v_l_634_);
lean_inc(v_v_633_);
lean_inc(v_k_632_);
v_isSharedCheck_667_ = !lean_is_exclusive(v_r_618_);
if (v_isSharedCheck_667_ == 0)
{
lean_object* v_unused_668_; lean_object* v_unused_669_; lean_object* v_unused_670_; lean_object* v_unused_671_; lean_object* v_unused_672_; 
v_unused_668_ = lean_ctor_get(v_r_618_, 4);
lean_dec(v_unused_668_);
v_unused_669_ = lean_ctor_get(v_r_618_, 3);
lean_dec(v_unused_669_);
v_unused_670_ = lean_ctor_get(v_r_618_, 2);
lean_dec(v_unused_670_);
v_unused_671_ = lean_ctor_get(v_r_618_, 1);
lean_dec(v_unused_671_);
v_unused_672_ = lean_ctor_get(v_r_618_, 0);
lean_dec(v_unused_672_);
v___x_640_ = v_r_618_;
v_isShared_641_ = v_isSharedCheck_667_;
goto v_resetjp_639_;
}
else
{
lean_dec(v_r_618_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_667_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___y_645_; lean_object* v___y_646_; lean_object* v___y_647_; lean_object* v___x_655_; lean_object* v___y_657_; 
v___x_642_ = lean_nat_add(v___x_612_, v_size_614_);
lean_dec(v_size_614_);
v___x_643_ = lean_nat_add(v___x_642_, v_size_613_);
lean_dec(v___x_642_);
v___x_655_ = lean_nat_add(v___x_612_, v_size_630_);
if (lean_obj_tag(v_l_634_) == 0)
{
lean_object* v_size_665_; 
v_size_665_ = lean_ctor_get(v_l_634_, 0);
lean_inc(v_size_665_);
v___y_657_ = v_size_665_;
goto v___jp_656_;
}
else
{
lean_object* v___x_666_; 
v___x_666_ = lean_unsigned_to_nat(0u);
v___y_657_ = v___x_666_;
goto v___jp_656_;
}
v___jp_644_:
{
lean_object* v___x_648_; lean_object* v___x_650_; 
v___x_648_ = lean_nat_add(v___y_646_, v___y_647_);
lean_dec(v___y_647_);
lean_dec(v___y_646_);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 4, v_r_467_);
lean_ctor_set(v___x_640_, 3, v_r_635_);
lean_ctor_set(v___x_640_, 2, v_v_465_);
lean_ctor_set(v___x_640_, 1, v_k_464_);
lean_ctor_set(v___x_640_, 0, v___x_648_);
v___x_650_ = v___x_640_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v___x_648_);
lean_ctor_set(v_reuseFailAlloc_654_, 1, v_k_464_);
lean_ctor_set(v_reuseFailAlloc_654_, 2, v_v_465_);
lean_ctor_set(v_reuseFailAlloc_654_, 3, v_r_635_);
lean_ctor_set(v_reuseFailAlloc_654_, 4, v_r_467_);
v___x_650_ = v_reuseFailAlloc_654_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
lean_object* v___x_652_; 
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 4, v___x_650_);
lean_ctor_set(v___x_628_, 3, v___y_645_);
lean_ctor_set(v___x_628_, 2, v_v_633_);
lean_ctor_set(v___x_628_, 1, v_k_632_);
lean_ctor_set(v___x_628_, 0, v___x_643_);
v___x_652_ = v___x_628_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_643_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_k_632_);
lean_ctor_set(v_reuseFailAlloc_653_, 2, v_v_633_);
lean_ctor_set(v_reuseFailAlloc_653_, 3, v___y_645_);
lean_ctor_set(v_reuseFailAlloc_653_, 4, v___x_650_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
v___jp_656_:
{
lean_object* v___x_658_; lean_object* v___x_660_; 
v___x_658_ = lean_nat_add(v___x_655_, v___y_657_);
lean_dec(v___y_657_);
lean_dec(v___x_655_);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 4, v_l_634_);
lean_ctor_set(v___x_469_, 3, v_l_617_);
lean_ctor_set(v___x_469_, 2, v_v_616_);
lean_ctor_set(v___x_469_, 1, v_k_615_);
lean_ctor_set(v___x_469_, 0, v___x_658_);
v___x_660_ = v___x_469_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v___x_658_);
lean_ctor_set(v_reuseFailAlloc_664_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_664_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_664_, 3, v_l_617_);
lean_ctor_set(v_reuseFailAlloc_664_, 4, v_l_634_);
v___x_660_ = v_reuseFailAlloc_664_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
lean_object* v___x_661_; 
v___x_661_ = lean_nat_add(v___x_612_, v_size_613_);
if (lean_obj_tag(v_r_635_) == 0)
{
lean_object* v_size_662_; 
v_size_662_ = lean_ctor_get(v_r_635_, 0);
lean_inc(v_size_662_);
v___y_645_ = v___x_660_;
v___y_646_ = v___x_661_;
v___y_647_ = v_size_662_;
goto v___jp_644_;
}
else
{
lean_object* v___x_663_; 
v___x_663_ = lean_unsigned_to_nat(0u);
v___y_645_ = v___x_660_;
v___y_646_ = v___x_661_;
v___y_647_ = v___x_663_;
goto v___jp_644_;
}
}
}
}
}
else
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_678_; 
lean_del_object(v___x_469_);
v___x_673_ = lean_nat_add(v___x_612_, v_size_614_);
lean_dec(v_size_614_);
v___x_674_ = lean_nat_add(v___x_673_, v_size_613_);
lean_dec(v___x_673_);
v___x_675_ = lean_nat_add(v___x_612_, v_size_613_);
v___x_676_ = lean_nat_add(v___x_675_, v_size_631_);
lean_dec(v___x_675_);
lean_inc_ref(v_r_467_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 4, v_r_467_);
lean_ctor_set(v___x_628_, 3, v_r_618_);
lean_ctor_set(v___x_628_, 2, v_v_465_);
lean_ctor_set(v___x_628_, 1, v_k_464_);
lean_ctor_set(v___x_628_, 0, v___x_676_);
v___x_678_ = v___x_628_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_676_);
lean_ctor_set(v_reuseFailAlloc_691_, 1, v_k_464_);
lean_ctor_set(v_reuseFailAlloc_691_, 2, v_v_465_);
lean_ctor_set(v_reuseFailAlloc_691_, 3, v_r_618_);
lean_ctor_set(v_reuseFailAlloc_691_, 4, v_r_467_);
v___x_678_ = v_reuseFailAlloc_691_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
v_isSharedCheck_685_ = !lean_is_exclusive(v_r_467_);
if (v_isSharedCheck_685_ == 0)
{
lean_object* v_unused_686_; lean_object* v_unused_687_; lean_object* v_unused_688_; lean_object* v_unused_689_; lean_object* v_unused_690_; 
v_unused_686_ = lean_ctor_get(v_r_467_, 4);
lean_dec(v_unused_686_);
v_unused_687_ = lean_ctor_get(v_r_467_, 3);
lean_dec(v_unused_687_);
v_unused_688_ = lean_ctor_get(v_r_467_, 2);
lean_dec(v_unused_688_);
v_unused_689_ = lean_ctor_get(v_r_467_, 1);
lean_dec(v_unused_689_);
v_unused_690_ = lean_ctor_get(v_r_467_, 0);
lean_dec(v_unused_690_);
v___x_680_ = v_r_467_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_dec(v_r_467_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 4, v___x_678_);
lean_ctor_set(v___x_680_, 3, v_l_617_);
lean_ctor_set(v___x_680_, 2, v_v_616_);
lean_ctor_set(v___x_680_, 1, v_k_615_);
lean_ctor_set(v___x_680_, 0, v___x_674_);
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_674_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v_k_615_);
lean_ctor_set(v_reuseFailAlloc_684_, 2, v_v_616_);
lean_ctor_set(v_reuseFailAlloc_684_, 3, v_l_617_);
lean_ctor_set(v_reuseFailAlloc_684_, 4, v___x_678_);
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
}
}
else
{
lean_object* v_l_698_; 
v_l_698_ = lean_ctor_get(v_impl_611_, 3);
lean_inc(v_l_698_);
if (lean_obj_tag(v_l_698_) == 0)
{
lean_object* v_r_699_; lean_object* v_k_700_; lean_object* v_v_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_712_; 
v_r_699_ = lean_ctor_get(v_impl_611_, 4);
v_k_700_ = lean_ctor_get(v_impl_611_, 1);
v_v_701_ = lean_ctor_get(v_impl_611_, 2);
v_isSharedCheck_712_ = !lean_is_exclusive(v_impl_611_);
if (v_isSharedCheck_712_ == 0)
{
lean_object* v_unused_713_; lean_object* v_unused_714_; 
v_unused_713_ = lean_ctor_get(v_impl_611_, 3);
lean_dec(v_unused_713_);
v_unused_714_ = lean_ctor_get(v_impl_611_, 0);
lean_dec(v_unused_714_);
v___x_703_ = v_impl_611_;
v_isShared_704_ = v_isSharedCheck_712_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_r_699_);
lean_inc(v_v_701_);
lean_inc(v_k_700_);
lean_dec(v_impl_611_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_712_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; lean_object* v___x_707_; 
v___x_705_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_699_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 3, v_r_699_);
lean_ctor_set(v___x_703_, 2, v_v_465_);
lean_ctor_set(v___x_703_, 1, v_k_464_);
lean_ctor_set(v___x_703_, 0, v___x_612_);
v___x_707_ = v___x_703_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v___x_612_);
lean_ctor_set(v_reuseFailAlloc_711_, 1, v_k_464_);
lean_ctor_set(v_reuseFailAlloc_711_, 2, v_v_465_);
lean_ctor_set(v_reuseFailAlloc_711_, 3, v_r_699_);
lean_ctor_set(v_reuseFailAlloc_711_, 4, v_r_699_);
v___x_707_ = v_reuseFailAlloc_711_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_709_; 
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 4, v___x_707_);
lean_ctor_set(v___x_469_, 3, v_l_698_);
lean_ctor_set(v___x_469_, 2, v_v_701_);
lean_ctor_set(v___x_469_, 1, v_k_700_);
lean_ctor_set(v___x_469_, 0, v___x_705_);
v___x_709_ = v___x_469_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v___x_705_);
lean_ctor_set(v_reuseFailAlloc_710_, 1, v_k_700_);
lean_ctor_set(v_reuseFailAlloc_710_, 2, v_v_701_);
lean_ctor_set(v_reuseFailAlloc_710_, 3, v_l_698_);
lean_ctor_set(v_reuseFailAlloc_710_, 4, v___x_707_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
else
{
lean_object* v_r_715_; 
v_r_715_ = lean_ctor_get(v_impl_611_, 4);
lean_inc(v_r_715_);
if (lean_obj_tag(v_r_715_) == 0)
{
lean_object* v_k_716_; lean_object* v_v_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_740_; 
v_k_716_ = lean_ctor_get(v_impl_611_, 1);
v_v_717_ = lean_ctor_get(v_impl_611_, 2);
v_isSharedCheck_740_ = !lean_is_exclusive(v_impl_611_);
if (v_isSharedCheck_740_ == 0)
{
lean_object* v_unused_741_; lean_object* v_unused_742_; lean_object* v_unused_743_; 
v_unused_741_ = lean_ctor_get(v_impl_611_, 4);
lean_dec(v_unused_741_);
v_unused_742_ = lean_ctor_get(v_impl_611_, 3);
lean_dec(v_unused_742_);
v_unused_743_ = lean_ctor_get(v_impl_611_, 0);
lean_dec(v_unused_743_);
v___x_719_ = v_impl_611_;
v_isShared_720_ = v_isSharedCheck_740_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_v_717_);
lean_inc(v_k_716_);
lean_dec(v_impl_611_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_740_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v_k_721_; lean_object* v_v_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_736_; 
v_k_721_ = lean_ctor_get(v_r_715_, 1);
v_v_722_ = lean_ctor_get(v_r_715_, 2);
v_isSharedCheck_736_ = !lean_is_exclusive(v_r_715_);
if (v_isSharedCheck_736_ == 0)
{
lean_object* v_unused_737_; lean_object* v_unused_738_; lean_object* v_unused_739_; 
v_unused_737_ = lean_ctor_get(v_r_715_, 4);
lean_dec(v_unused_737_);
v_unused_738_ = lean_ctor_get(v_r_715_, 3);
lean_dec(v_unused_738_);
v_unused_739_ = lean_ctor_get(v_r_715_, 0);
lean_dec(v_unused_739_);
v___x_724_ = v_r_715_;
v_isShared_725_ = v_isSharedCheck_736_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_v_722_);
lean_inc(v_k_721_);
lean_dec(v_r_715_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_736_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_726_; lean_object* v___x_728_; 
v___x_726_ = lean_unsigned_to_nat(3u);
if (v_isShared_725_ == 0)
{
lean_ctor_set(v___x_724_, 4, v_l_698_);
lean_ctor_set(v___x_724_, 3, v_l_698_);
lean_ctor_set(v___x_724_, 2, v_v_717_);
lean_ctor_set(v___x_724_, 1, v_k_716_);
lean_ctor_set(v___x_724_, 0, v___x_612_);
v___x_728_ = v___x_724_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v___x_612_);
lean_ctor_set(v_reuseFailAlloc_735_, 1, v_k_716_);
lean_ctor_set(v_reuseFailAlloc_735_, 2, v_v_717_);
lean_ctor_set(v_reuseFailAlloc_735_, 3, v_l_698_);
lean_ctor_set(v_reuseFailAlloc_735_, 4, v_l_698_);
v___x_728_ = v_reuseFailAlloc_735_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
lean_object* v___x_730_; 
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 4, v_l_698_);
lean_ctor_set(v___x_719_, 2, v_v_465_);
lean_ctor_set(v___x_719_, 1, v_k_464_);
lean_ctor_set(v___x_719_, 0, v___x_612_);
v___x_730_ = v___x_719_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_612_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v_k_464_);
lean_ctor_set(v_reuseFailAlloc_734_, 2, v_v_465_);
lean_ctor_set(v_reuseFailAlloc_734_, 3, v_l_698_);
lean_ctor_set(v_reuseFailAlloc_734_, 4, v_l_698_);
v___x_730_ = v_reuseFailAlloc_734_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
lean_object* v___x_732_; 
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 4, v___x_730_);
lean_ctor_set(v___x_469_, 3, v___x_728_);
lean_ctor_set(v___x_469_, 2, v_v_722_);
lean_ctor_set(v___x_469_, 1, v_k_721_);
lean_ctor_set(v___x_469_, 0, v___x_726_);
v___x_732_ = v___x_469_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v___x_726_);
lean_ctor_set(v_reuseFailAlloc_733_, 1, v_k_721_);
lean_ctor_set(v_reuseFailAlloc_733_, 2, v_v_722_);
lean_ctor_set(v_reuseFailAlloc_733_, 3, v___x_728_);
lean_ctor_set(v_reuseFailAlloc_733_, 4, v___x_730_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
}
}
else
{
lean_object* v___x_744_; lean_object* v___x_746_; 
v___x_744_ = lean_unsigned_to_nat(2u);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 4, v_r_715_);
lean_ctor_set(v___x_469_, 3, v_impl_611_);
lean_ctor_set(v___x_469_, 0, v___x_744_);
v___x_746_ = v___x_469_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_744_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_k_464_);
lean_ctor_set(v_reuseFailAlloc_747_, 2, v_v_465_);
lean_ctor_set(v_reuseFailAlloc_747_, 3, v_impl_611_);
lean_ctor_set(v_reuseFailAlloc_747_, 4, v_r_715_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = lean_unsigned_to_nat(1u);
v___x_750_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
lean_ctor_set(v___x_750_, 1, v_k_460_);
lean_ctor_set(v___x_750_, 2, v_v_461_);
lean_ctor_set(v___x_750_, 3, v_t_462_);
lean_ctor_set(v___x_750_, 4, v_t_462_);
return v___x_750_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__0(lean_object* v_localInst2Index_751_, lean_object* v_e_752_, lean_object* v___y_753_){
_start:
{
lean_object* v_fvarId_755_; lean_object* v___x_756_; 
v_fvarId_755_ = l_Lean_Expr_fvarId_x21(v_e_752_);
v___x_756_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_localInst2Index_751_, v_fvarId_755_);
lean_dec(v_fvarId_755_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v___x_757_; 
v___x_757_ = lean_box(0);
return v___x_757_;
}
else
{
lean_object* v_val_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___y_762_; uint8_t v___x_764_; 
v_val_758_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_val_758_);
lean_dec_ref_known(v___x_756_, 1);
v___x_759_ = lean_st_ref_take(v___y_753_);
v___x_760_ = lean_box(0);
v___x_764_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__0___redArg(v_val_758_, v___x_759_);
if (v___x_764_ == 0)
{
lean_object* v___x_765_; 
v___x_765_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__1___redArg(v_val_758_, v___x_760_, v___x_759_);
v___y_762_ = v___x_765_;
goto v___jp_761_;
}
else
{
lean_dec(v_val_758_);
v___y_762_ = v___x_759_;
goto v___jp_761_;
}
v___jp_761_:
{
lean_object* v___x_763_; 
v___x_763_ = lean_st_ref_put(v___y_753_, v___y_762_);
return v___x_760_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__0___boxed(lean_object* v_localInst2Index_766_, lean_object* v_e_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__0(v_localInst2Index_766_, v_e_767_, v___y_768_);
lean_dec(v___y_768_);
lean_dec_ref(v_e_767_);
lean_dec(v_localInst2Index_766_);
return v_res_770_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_a_771_, lean_object* v_x_772_){
_start:
{
if (lean_obj_tag(v_x_772_) == 0)
{
uint8_t v___x_773_; 
v___x_773_ = 0;
return v___x_773_;
}
else
{
lean_object* v_key_774_; lean_object* v_tail_775_; uint8_t v___x_776_; 
v_key_774_ = lean_ctor_get(v_x_772_, 0);
v_tail_775_ = lean_ctor_get(v_x_772_, 2);
v___x_776_ = lean_expr_eqv(v_key_774_, v_a_771_);
if (v___x_776_ == 0)
{
v_x_772_ = v_tail_775_;
goto _start;
}
else
{
return v___x_776_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_a_778_, lean_object* v_x_779_){
_start:
{
uint8_t v_res_780_; lean_object* v_r_781_; 
v_res_780_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5_spec__6___redArg(v_a_778_, v_x_779_);
lean_dec(v_x_779_);
lean_dec_ref(v_a_778_);
v_r_781_ = lean_box(v_res_780_);
return v_r_781_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5___redArg(lean_object* v_m_782_, lean_object* v_a_783_){
_start:
{
lean_object* v_buckets_784_; lean_object* v___x_785_; uint64_t v___x_786_; uint64_t v___x_787_; uint64_t v___x_788_; uint64_t v_fold_789_; uint64_t v___x_790_; uint64_t v___x_791_; uint64_t v___x_792_; size_t v___x_793_; size_t v___x_794_; size_t v___x_795_; size_t v___x_796_; size_t v___x_797_; lean_object* v___x_798_; uint8_t v___x_799_; 
v_buckets_784_ = lean_ctor_get(v_m_782_, 1);
v___x_785_ = lean_array_get_size(v_buckets_784_);
v___x_786_ = l_Lean_Expr_hash(v_a_783_);
v___x_787_ = 32ULL;
v___x_788_ = lean_uint64_shift_right(v___x_786_, v___x_787_);
v_fold_789_ = lean_uint64_xor(v___x_786_, v___x_788_);
v___x_790_ = 16ULL;
v___x_791_ = lean_uint64_shift_right(v_fold_789_, v___x_790_);
v___x_792_ = lean_uint64_xor(v_fold_789_, v___x_791_);
v___x_793_ = lean_uint64_to_usize(v___x_792_);
v___x_794_ = lean_usize_of_nat(v___x_785_);
v___x_795_ = ((size_t)1ULL);
v___x_796_ = lean_usize_sub(v___x_794_, v___x_795_);
v___x_797_ = lean_usize_land(v___x_793_, v___x_796_);
v___x_798_ = lean_array_uget_borrowed(v_buckets_784_, v___x_797_);
v___x_799_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5_spec__6___redArg(v_a_783_, v___x_798_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5___redArg___boxed(lean_object* v_m_800_, lean_object* v_a_801_){
_start:
{
uint8_t v_res_802_; lean_object* v_r_803_; 
v_res_802_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5___redArg(v_m_800_, v_a_801_);
lean_dec_ref(v_a_801_);
lean_dec_ref(v_m_800_);
v_r_803_ = lean_box(v_res_802_);
return v_r_803_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8_spec__9_spec__10___redArg(lean_object* v_x_804_, lean_object* v_x_805_){
_start:
{
if (lean_obj_tag(v_x_805_) == 0)
{
return v_x_804_;
}
else
{
lean_object* v_key_806_; lean_object* v_value_807_; lean_object* v_tail_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_831_; 
v_key_806_ = lean_ctor_get(v_x_805_, 0);
v_value_807_ = lean_ctor_get(v_x_805_, 1);
v_tail_808_ = lean_ctor_get(v_x_805_, 2);
v_isSharedCheck_831_ = !lean_is_exclusive(v_x_805_);
if (v_isSharedCheck_831_ == 0)
{
v___x_810_ = v_x_805_;
v_isShared_811_ = v_isSharedCheck_831_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_tail_808_);
lean_inc(v_value_807_);
lean_inc(v_key_806_);
lean_dec(v_x_805_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_831_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_812_; uint64_t v___x_813_; uint64_t v___x_814_; uint64_t v___x_815_; uint64_t v_fold_816_; uint64_t v___x_817_; uint64_t v___x_818_; uint64_t v___x_819_; size_t v___x_820_; size_t v___x_821_; size_t v___x_822_; size_t v___x_823_; size_t v___x_824_; lean_object* v___x_825_; lean_object* v___x_827_; 
v___x_812_ = lean_array_get_size(v_x_804_);
v___x_813_ = l_Lean_Expr_hash(v_key_806_);
v___x_814_ = 32ULL;
v___x_815_ = lean_uint64_shift_right(v___x_813_, v___x_814_);
v_fold_816_ = lean_uint64_xor(v___x_813_, v___x_815_);
v___x_817_ = 16ULL;
v___x_818_ = lean_uint64_shift_right(v_fold_816_, v___x_817_);
v___x_819_ = lean_uint64_xor(v_fold_816_, v___x_818_);
v___x_820_ = lean_uint64_to_usize(v___x_819_);
v___x_821_ = lean_usize_of_nat(v___x_812_);
v___x_822_ = ((size_t)1ULL);
v___x_823_ = lean_usize_sub(v___x_821_, v___x_822_);
v___x_824_ = lean_usize_land(v___x_820_, v___x_823_);
v___x_825_ = lean_array_uget_borrowed(v_x_804_, v___x_824_);
lean_inc(v___x_825_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 2, v___x_825_);
v___x_827_ = v___x_810_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_key_806_);
lean_ctor_set(v_reuseFailAlloc_830_, 1, v_value_807_);
lean_ctor_set(v_reuseFailAlloc_830_, 2, v___x_825_);
v___x_827_ = v_reuseFailAlloc_830_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
lean_object* v___x_828_; 
v___x_828_ = lean_array_uset(v_x_804_, v___x_824_, v___x_827_);
v_x_804_ = v___x_828_;
v_x_805_ = v_tail_808_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8_spec__9___redArg(lean_object* v_i_832_, lean_object* v_source_833_, lean_object* v_target_834_){
_start:
{
lean_object* v___x_835_; uint8_t v___x_836_; 
v___x_835_ = lean_array_get_size(v_source_833_);
v___x_836_ = lean_nat_dec_lt(v_i_832_, v___x_835_);
if (v___x_836_ == 0)
{
lean_dec_ref(v_source_833_);
lean_dec(v_i_832_);
return v_target_834_;
}
else
{
lean_object* v_es_837_; lean_object* v___x_838_; lean_object* v_source_839_; lean_object* v_target_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v_es_837_ = lean_array_fget(v_source_833_, v_i_832_);
v___x_838_ = lean_box(0);
v_source_839_ = lean_array_fset(v_source_833_, v_i_832_, v___x_838_);
v_target_840_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8_spec__9_spec__10___redArg(v_target_834_, v_es_837_);
v___x_841_ = lean_unsigned_to_nat(1u);
v___x_842_ = lean_nat_add(v_i_832_, v___x_841_);
lean_dec(v_i_832_);
v_i_832_ = v___x_842_;
v_source_833_ = v_source_839_;
v_target_834_ = v_target_840_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8___redArg(lean_object* v_data_844_){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v_nbuckets_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_845_ = lean_array_get_size(v_data_844_);
v___x_846_ = lean_unsigned_to_nat(2u);
v_nbuckets_847_ = lean_nat_mul(v___x_845_, v___x_846_);
v___x_848_ = lean_unsigned_to_nat(0u);
v___x_849_ = lean_box(0);
v___x_850_ = lean_mk_array(v_nbuckets_847_, v___x_849_);
v___x_851_ = lean_array_propagate_mark(v_data_844_, v___x_850_);
v___x_852_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8_spec__9___redArg(v___x_848_, v_data_844_, v___x_851_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6___redArg(lean_object* v_m_853_, lean_object* v_a_854_, lean_object* v_b_855_){
_start:
{
lean_object* v_size_856_; lean_object* v_buckets_857_; lean_object* v___x_858_; uint64_t v___x_859_; uint64_t v___x_860_; uint64_t v___x_861_; uint64_t v_fold_862_; uint64_t v___x_863_; uint64_t v___x_864_; uint64_t v___x_865_; size_t v___x_866_; size_t v___x_867_; size_t v___x_868_; size_t v___x_869_; size_t v___x_870_; lean_object* v_bkt_871_; uint8_t v___x_872_; 
v_size_856_ = lean_ctor_get(v_m_853_, 0);
v_buckets_857_ = lean_ctor_get(v_m_853_, 1);
v___x_858_ = lean_array_get_size(v_buckets_857_);
v___x_859_ = l_Lean_Expr_hash(v_a_854_);
v___x_860_ = 32ULL;
v___x_861_ = lean_uint64_shift_right(v___x_859_, v___x_860_);
v_fold_862_ = lean_uint64_xor(v___x_859_, v___x_861_);
v___x_863_ = 16ULL;
v___x_864_ = lean_uint64_shift_right(v_fold_862_, v___x_863_);
v___x_865_ = lean_uint64_xor(v_fold_862_, v___x_864_);
v___x_866_ = lean_uint64_to_usize(v___x_865_);
v___x_867_ = lean_usize_of_nat(v___x_858_);
v___x_868_ = ((size_t)1ULL);
v___x_869_ = lean_usize_sub(v___x_867_, v___x_868_);
v___x_870_ = lean_usize_land(v___x_866_, v___x_869_);
v_bkt_871_ = lean_array_uget_borrowed(v_buckets_857_, v___x_870_);
v___x_872_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5_spec__6___redArg(v_a_854_, v_bkt_871_);
if (v___x_872_ == 0)
{
lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_893_; 
lean_inc_ref(v_buckets_857_);
lean_inc(v_size_856_);
v_isSharedCheck_893_ = !lean_is_exclusive(v_m_853_);
if (v_isSharedCheck_893_ == 0)
{
lean_object* v_unused_894_; lean_object* v_unused_895_; 
v_unused_894_ = lean_ctor_get(v_m_853_, 1);
lean_dec(v_unused_894_);
v_unused_895_ = lean_ctor_get(v_m_853_, 0);
lean_dec(v_unused_895_);
v___x_874_ = v_m_853_;
v_isShared_875_ = v_isSharedCheck_893_;
goto v_resetjp_873_;
}
else
{
lean_dec(v_m_853_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_893_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_876_; lean_object* v_size_x27_877_; lean_object* v___x_878_; lean_object* v_buckets_x27_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; uint8_t v___x_885_; 
v___x_876_ = lean_unsigned_to_nat(1u);
v_size_x27_877_ = lean_nat_add(v_size_856_, v___x_876_);
lean_dec(v_size_856_);
lean_inc(v_bkt_871_);
v___x_878_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_878_, 0, v_a_854_);
lean_ctor_set(v___x_878_, 1, v_b_855_);
lean_ctor_set(v___x_878_, 2, v_bkt_871_);
v_buckets_x27_879_ = lean_array_uset(v_buckets_857_, v___x_870_, v___x_878_);
v___x_880_ = lean_unsigned_to_nat(4u);
v___x_881_ = lean_nat_mul(v_size_x27_877_, v___x_880_);
v___x_882_ = lean_unsigned_to_nat(3u);
v___x_883_ = lean_nat_div(v___x_881_, v___x_882_);
lean_dec(v___x_881_);
v___x_884_ = lean_array_get_size(v_buckets_x27_879_);
v___x_885_ = lean_nat_dec_le(v___x_883_, v___x_884_);
lean_dec(v___x_883_);
if (v___x_885_ == 0)
{
lean_object* v_val_886_; lean_object* v___x_888_; 
v_val_886_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8___redArg(v_buckets_x27_879_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 1, v_val_886_);
lean_ctor_set(v___x_874_, 0, v_size_x27_877_);
v___x_888_ = v___x_874_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_size_x27_877_);
lean_ctor_set(v_reuseFailAlloc_889_, 1, v_val_886_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
else
{
lean_object* v___x_891_; 
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 1, v_buckets_x27_879_);
lean_ctor_set(v___x_874_, 0, v_size_x27_877_);
v___x_891_ = v___x_874_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_size_x27_877_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v_buckets_x27_879_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
else
{
lean_dec(v_b_855_);
lean_dec_ref(v_a_854_);
return v_m_853_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4___redArg(lean_object* v_e_896_, lean_object* v___y_897_){
_start:
{
lean_object* v___x_899_; lean_object* v_checked_900_; uint8_t v___x_901_; 
v___x_899_ = lean_st_ref_get(v___y_897_);
v_checked_900_ = lean_ctor_get(v___x_899_, 1);
lean_inc_ref(v_checked_900_);
lean_dec(v___x_899_);
v___x_901_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5___redArg(v_checked_900_, v_e_896_);
lean_dec_ref(v_checked_900_);
if (v___x_901_ == 0)
{
lean_object* v___x_902_; lean_object* v_visited_903_; lean_object* v_checked_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_914_; 
v___x_902_ = lean_st_ref_take(v___y_897_);
v_visited_903_ = lean_ctor_get(v___x_902_, 0);
v_checked_904_ = lean_ctor_get(v___x_902_, 1);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_914_ == 0)
{
v___x_906_ = v___x_902_;
v_isShared_907_ = v_isSharedCheck_914_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_checked_904_);
lean_inc(v_visited_903_);
lean_dec(v___x_902_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_914_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_911_; 
v___x_908_ = lean_box(0);
v___x_909_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6___redArg(v_checked_904_, v_e_896_, v___x_908_);
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 1, v___x_909_);
v___x_911_ = v___x_906_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_visited_903_);
lean_ctor_set(v_reuseFailAlloc_913_, 1, v___x_909_);
v___x_911_ = v_reuseFailAlloc_913_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
lean_object* v___x_912_; 
v___x_912_ = lean_st_ref_put(v___y_897_, v___x_911_);
return v___x_901_;
}
}
}
else
{
lean_dec_ref(v_e_896_);
return v___x_901_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4___redArg___boxed(lean_object* v_e_915_, lean_object* v___y_916_, lean_object* v___y_917_){
_start:
{
uint8_t v_res_918_; lean_object* v_r_919_; 
v_res_918_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4___redArg(v_e_915_, v___y_916_);
lean_dec(v___y_916_);
v_r_919_ = lean_box(v_res_918_);
return v_r_919_;
}
}
LEAN_EXPORT uint8_t l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__3___redArg(lean_object* v_e_920_, lean_object* v___y_921_){
_start:
{
lean_object* v___x_923_; lean_object* v_visited_924_; size_t v___x_925_; size_t v___x_926_; size_t v___x_927_; lean_object* v___x_928_; size_t v___x_929_; uint8_t v___x_930_; 
v___x_923_ = lean_st_ref_get(v___y_921_);
v_visited_924_ = lean_ctor_get(v___x_923_, 0);
lean_inc_ref(v_visited_924_);
lean_dec(v___x_923_);
v___x_925_ = lean_ptr_addr(v_e_920_);
v___x_926_ = ((size_t)8191ULL);
v___x_927_ = lean_usize_mod(v___x_925_, v___x_926_);
v___x_928_ = lean_array_uget(v_visited_924_, v___x_927_);
lean_dec_ref(v_visited_924_);
v___x_929_ = lean_ptr_addr(v___x_928_);
lean_dec(v___x_928_);
v___x_930_ = lean_usize_dec_eq(v___x_929_, v___x_925_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; lean_object* v_visited_932_; lean_object* v_checked_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_942_; 
v___x_931_ = lean_st_ref_take(v___y_921_);
v_visited_932_ = lean_ctor_get(v___x_931_, 0);
v_checked_933_ = lean_ctor_get(v___x_931_, 1);
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_942_ == 0)
{
v___x_935_ = v___x_931_;
v_isShared_936_ = v_isSharedCheck_942_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_checked_933_);
lean_inc(v_visited_932_);
lean_dec(v___x_931_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_942_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_937_; lean_object* v___x_939_; 
v___x_937_ = lean_array_uset(v_visited_932_, v___x_927_, v_e_920_);
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 0, v___x_937_);
v___x_939_ = v___x_935_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v___x_937_);
lean_ctor_set(v_reuseFailAlloc_941_, 1, v_checked_933_);
v___x_939_ = v_reuseFailAlloc_941_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
lean_object* v___x_940_; 
v___x_940_ = lean_st_ref_put(v___y_921_, v___x_939_);
return v___x_930_;
}
}
}
else
{
lean_dec_ref(v_e_920_);
return v___x_930_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__3___redArg___boxed(lean_object* v_e_943_, lean_object* v___y_944_, lean_object* v___y_945_){
_start:
{
uint8_t v_res_946_; lean_object* v_r_947_; 
v_res_946_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__3___redArg(v_e_943_, v___y_944_);
lean_dec(v___y_944_);
v_r_947_ = lean_box(v_res_946_);
return v_r_947_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2___redArg(lean_object* v_p_948_, lean_object* v_f_949_, uint8_t v_stopWhenVisited_950_, lean_object* v_e_951_, lean_object* v___y_952_, lean_object* v___y_953_){
_start:
{
lean_object* v___y_956_; lean_object* v_d_957_; lean_object* v_b_958_; lean_object* v___y_959_; lean_object* v___y_963_; lean_object* v___y_964_; uint8_t v___x_984_; 
lean_inc_ref(v_e_951_);
v___x_984_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__3___redArg(v_e_951_, v___y_952_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; uint8_t v___x_986_; 
lean_inc_ref(v_p_948_);
lean_inc_ref(v_e_951_);
v___x_985_ = lean_apply_1(v_p_948_, v_e_951_);
v___x_986_ = lean_unbox(v___x_985_);
if (v___x_986_ == 0)
{
v___y_963_ = v___y_952_;
v___y_964_ = v___y_953_;
goto v___jp_962_;
}
else
{
uint8_t v___x_987_; 
lean_inc_ref(v_e_951_);
v___x_987_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4___redArg(v_e_951_, v___y_952_);
if (v___x_987_ == 0)
{
lean_object* v___x_988_; 
lean_inc_ref(v_f_949_);
lean_inc(v___y_953_);
lean_inc_ref(v_e_951_);
v___x_988_ = lean_apply_3(v_f_949_, v_e_951_, v___y_953_, lean_box(0));
if (v_stopWhenVisited_950_ == 0)
{
v___y_963_ = v___y_952_;
v___y_964_ = v___y_953_;
goto v___jp_962_;
}
else
{
lean_object* v___x_989_; 
lean_dec_ref(v_e_951_);
lean_dec_ref(v_f_949_);
lean_dec_ref(v_p_948_);
v___x_989_ = lean_box(0);
return v___x_989_;
}
}
else
{
v___y_963_ = v___y_952_;
v___y_964_ = v___y_953_;
goto v___jp_962_;
}
}
}
else
{
lean_object* v___x_990_; 
lean_dec_ref(v_e_951_);
lean_dec_ref(v_f_949_);
lean_dec_ref(v_p_948_);
v___x_990_ = lean_box(0);
return v___x_990_;
}
v___jp_955_:
{
lean_object* v___x_960_; 
lean_inc_ref(v_f_949_);
lean_inc_ref(v_p_948_);
v___x_960_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2___redArg(v_p_948_, v_f_949_, v_stopWhenVisited_950_, v_d_957_, v___y_959_, v___y_956_);
v_e_951_ = v_b_958_;
v___y_952_ = v___y_959_;
v___y_953_ = v___y_956_;
goto _start;
}
v___jp_962_:
{
switch(lean_obj_tag(v_e_951_))
{
case 7:
{
lean_object* v_binderType_965_; lean_object* v_body_966_; 
v_binderType_965_ = lean_ctor_get(v_e_951_, 1);
lean_inc_ref(v_binderType_965_);
v_body_966_ = lean_ctor_get(v_e_951_, 2);
lean_inc_ref(v_body_966_);
lean_dec_ref_known(v_e_951_, 3);
v___y_956_ = v___y_964_;
v_d_957_ = v_binderType_965_;
v_b_958_ = v_body_966_;
v___y_959_ = v___y_963_;
goto v___jp_955_;
}
case 6:
{
lean_object* v_binderType_967_; lean_object* v_body_968_; 
v_binderType_967_ = lean_ctor_get(v_e_951_, 1);
lean_inc_ref(v_binderType_967_);
v_body_968_ = lean_ctor_get(v_e_951_, 2);
lean_inc_ref(v_body_968_);
lean_dec_ref_known(v_e_951_, 3);
v___y_956_ = v___y_964_;
v_d_957_ = v_binderType_967_;
v_b_958_ = v_body_968_;
v___y_959_ = v___y_963_;
goto v___jp_955_;
}
case 8:
{
lean_object* v_type_969_; lean_object* v_value_970_; lean_object* v_body_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v_type_969_ = lean_ctor_get(v_e_951_, 1);
lean_inc_ref(v_type_969_);
v_value_970_ = lean_ctor_get(v_e_951_, 2);
lean_inc_ref(v_value_970_);
v_body_971_ = lean_ctor_get(v_e_951_, 3);
lean_inc_ref(v_body_971_);
lean_dec_ref_known(v_e_951_, 4);
lean_inc_ref_n(v_f_949_, 2);
lean_inc_ref_n(v_p_948_, 2);
v___x_972_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2___redArg(v_p_948_, v_f_949_, v_stopWhenVisited_950_, v_type_969_, v___y_963_, v___y_964_);
v___x_973_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2___redArg(v_p_948_, v_f_949_, v_stopWhenVisited_950_, v_value_970_, v___y_963_, v___y_964_);
v_e_951_ = v_body_971_;
v___y_952_ = v___y_963_;
v___y_953_ = v___y_964_;
goto _start;
}
case 5:
{
lean_object* v_fn_975_; lean_object* v_arg_976_; lean_object* v___x_977_; 
v_fn_975_ = lean_ctor_get(v_e_951_, 0);
lean_inc_ref(v_fn_975_);
v_arg_976_ = lean_ctor_get(v_e_951_, 1);
lean_inc_ref(v_arg_976_);
lean_dec_ref_known(v_e_951_, 2);
lean_inc_ref(v_f_949_);
lean_inc_ref(v_p_948_);
v___x_977_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2___redArg(v_p_948_, v_f_949_, v_stopWhenVisited_950_, v_fn_975_, v___y_963_, v___y_964_);
v_e_951_ = v_arg_976_;
v___y_952_ = v___y_963_;
v___y_953_ = v___y_964_;
goto _start;
}
case 10:
{
lean_object* v_expr_979_; 
v_expr_979_ = lean_ctor_get(v_e_951_, 1);
lean_inc_ref(v_expr_979_);
lean_dec_ref_known(v_e_951_, 2);
v_e_951_ = v_expr_979_;
v___y_952_ = v___y_963_;
v___y_953_ = v___y_964_;
goto _start;
}
case 11:
{
lean_object* v_struct_981_; 
v_struct_981_ = lean_ctor_get(v_e_951_, 2);
lean_inc_ref(v_struct_981_);
lean_dec_ref_known(v_e_951_, 3);
v_e_951_ = v_struct_981_;
v___y_952_ = v___y_963_;
v___y_953_ = v___y_964_;
goto _start;
}
default: 
{
lean_object* v___x_983_; 
lean_dec_ref(v_e_951_);
lean_dec_ref(v_f_949_);
lean_dec_ref(v_p_948_);
v___x_983_ = lean_box(0);
return v___x_983_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2___redArg___boxed(lean_object* v_p_991_, lean_object* v_f_992_, lean_object* v_stopWhenVisited_993_, lean_object* v_e_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_){
_start:
{
uint8_t v_stopWhenVisited_boxed_998_; lean_object* v_res_999_; 
v_stopWhenVisited_boxed_998_ = lean_unbox(v_stopWhenVisited_993_);
v_res_999_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2___redArg(v_p_991_, v_f_992_, v_stopWhenVisited_boxed_998_, v_e_994_, v___y_995_, v___y_996_);
lean_dec(v___y_996_);
lean_dec(v___y_995_);
return v_res_999_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2___redArg(lean_object* v_p_1000_, lean_object* v_f_1001_, lean_object* v_e_1002_, uint8_t v_stopWhenVisited_1003_, lean_object* v___y_1004_){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1006_ = l_Lean_ForEachExprWhere_initCache;
v___x_1007_ = lean_st_mk_ref(v___x_1006_);
v___x_1008_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2___redArg(v_p_1000_, v_f_1001_, v_stopWhenVisited_1003_, v_e_1002_, v___x_1007_, v___y_1004_);
v___x_1009_ = lean_st_ref_get(v___x_1007_);
lean_dec(v___x_1007_);
lean_dec(v___x_1009_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2___redArg___boxed(lean_object* v_p_1010_, lean_object* v_f_1011_, lean_object* v_e_1012_, lean_object* v_stopWhenVisited_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_){
_start:
{
uint8_t v_stopWhenVisited_boxed_1016_; lean_object* v_res_1017_; 
v_stopWhenVisited_boxed_1016_ = lean_unbox(v_stopWhenVisited_1013_);
v_res_1017_ = l_Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2___redArg(v_p_1010_, v_f_1011_, v_e_1012_, v_stopWhenVisited_boxed_1016_, v___y_1014_);
lean_dec(v___y_1014_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__1(lean_object* v_usedInstIdxs_1019_, lean_object* v___f_1020_, lean_object* v_e_1021_, uint8_t v___x_1022_, lean_object* v_x_1023_){
_start:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1025_ = lean_st_mk_ref(v_usedInstIdxs_1019_);
v___x_1026_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__1___closed__0));
v___x_1027_ = l_Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2___redArg(v___x_1026_, v___f_1020_, v_e_1021_, v___x_1022_, v___x_1025_);
v___x_1028_ = lean_st_ref_get(v___x_1025_);
lean_dec(v___x_1025_);
v___x_1029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1027_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
return v___x_1029_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__1___boxed(lean_object* v_usedInstIdxs_1030_, lean_object* v___f_1031_, lean_object* v_e_1032_, lean_object* v___x_1033_, lean_object* v_x_1034_, lean_object* v___y_1035_){
_start:
{
uint8_t v___x_7605__boxed_1036_; lean_object* v_res_1037_; 
v___x_7605__boxed_1036_ = lean_unbox(v___x_1033_);
v_res_1037_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__1(v_usedInstIdxs_1030_, v___f_1031_, v_e_1032_, v___x_7605__boxed_1036_, v_x_1034_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts(lean_object* v_usedInstIdxs_1038_, lean_object* v_localInst2Index_1039_, lean_object* v_e_1040_){
_start:
{
uint8_t v___x_1041_; 
v___x_1041_ = l_Lean_FVarIdMap_isEmpty___redArg(v_localInst2Index_1039_);
if (v___x_1041_ == 0)
{
lean_object* v___f_1042_; lean_object* v___x_1043_; lean_object* v___f_1044_; lean_object* v___x_1045_; lean_object* v_snd_1046_; 
v___f_1042_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1042_, 0, v_localInst2Index_1039_);
v___x_1043_ = lean_box(v___x_1041_);
v___f_1044_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts___lam__1___boxed), 6, 4);
lean_closure_set(v___f_1044_, 0, v_usedInstIdxs_1038_);
lean_closure_set(v___f_1044_, 1, v___f_1042_);
lean_closure_set(v___f_1044_, 2, v_e_1040_);
lean_closure_set(v___f_1044_, 3, v___x_1043_);
v___x_1045_ = l_runST___redArg(v___f_1044_);
v_snd_1046_ = lean_ctor_get(v___x_1045_, 1);
lean_inc(v_snd_1046_);
lean_dec(v___x_1045_);
return v_snd_1046_;
}
else
{
lean_dec_ref(v_e_1040_);
lean_dec(v_localInst2Index_1039_);
return v_usedInstIdxs_1038_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__0(lean_object* v_00_u03b2_1047_, lean_object* v_k_1048_, lean_object* v_t_1049_){
_start:
{
uint8_t v___x_1050_; 
v___x_1050_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__0___redArg(v_k_1048_, v_t_1049_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__0___boxed(lean_object* v_00_u03b2_1051_, lean_object* v_k_1052_, lean_object* v_t_1053_){
_start:
{
uint8_t v_res_1054_; lean_object* v_r_1055_; 
v_res_1054_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__0(v_00_u03b2_1051_, v_k_1052_, v_t_1053_);
lean_dec(v_t_1053_);
lean_dec(v_k_1052_);
v_r_1055_ = lean_box(v_res_1054_);
return v_r_1055_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__1(lean_object* v_00_u03b2_1056_, lean_object* v_k_1057_, lean_object* v_v_1058_, lean_object* v_t_1059_, lean_object* v_hl_1060_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__1___redArg(v_k_1057_, v_v_1058_, v_t_1059_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2(lean_object* v_x_1062_, lean_object* v_p_1063_, lean_object* v_f_1064_, lean_object* v_e_1065_, uint8_t v_stopWhenVisited_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v___x_1069_; 
v___x_1069_ = l_Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2___redArg(v_p_1063_, v_f_1064_, v_e_1065_, v_stopWhenVisited_1066_, v___y_1067_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2___boxed(lean_object* v_x_1070_, lean_object* v_p_1071_, lean_object* v_f_1072_, lean_object* v_e_1073_, lean_object* v_stopWhenVisited_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
uint8_t v_stopWhenVisited_boxed_1077_; lean_object* v_res_1078_; 
v_stopWhenVisited_boxed_1077_ = lean_unbox(v_stopWhenVisited_1074_);
v_res_1078_ = l_Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2(v_x_1070_, v_p_1071_, v_f_1072_, v_e_1073_, v_stopWhenVisited_boxed_1077_, v___y_1075_);
lean_dec(v___y_1075_);
return v_res_1078_;
}
}
LEAN_EXPORT uint8_t l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__3(lean_object* v_x_1079_, lean_object* v_e_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
uint8_t v___x_1084_; 
v___x_1084_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__3___redArg(v_e_1080_, v___y_1081_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__3___boxed(lean_object* v_x_1085_, lean_object* v_e_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
uint8_t v_res_1090_; lean_object* v_r_1091_; 
v_res_1090_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__3(v_x_1085_, v_e_1086_, v___y_1087_, v___y_1088_);
lean_dec(v___y_1088_);
lean_dec(v___y_1087_);
v_r_1091_ = lean_box(v_res_1090_);
return v_r_1091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2(lean_object* v_x_1092_, lean_object* v_p_1093_, lean_object* v_f_1094_, uint8_t v_stopWhenVisited_1095_, lean_object* v_e_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
lean_object* v___x_1100_; 
v___x_1100_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2___redArg(v_p_1093_, v_f_1094_, v_stopWhenVisited_1095_, v_e_1096_, v___y_1097_, v___y_1098_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2___boxed(lean_object* v_x_1101_, lean_object* v_p_1102_, lean_object* v_f_1103_, lean_object* v_stopWhenVisited_1104_, lean_object* v_e_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
uint8_t v_stopWhenVisited_boxed_1109_; lean_object* v_res_1110_; 
v_stopWhenVisited_boxed_1109_ = lean_unbox(v_stopWhenVisited_1104_);
v_res_1110_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2(v_x_1101_, v_p_1102_, v_f_1103_, v_stopWhenVisited_boxed_1109_, v_e_1105_, v___y_1106_, v___y_1107_);
lean_dec(v___y_1107_);
lean_dec(v___y_1106_);
return v_res_1110_;
}
}
LEAN_EXPORT uint8_t l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4(lean_object* v_x_1111_, lean_object* v_e_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_){
_start:
{
uint8_t v___x_1116_; 
v___x_1116_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4___redArg(v_e_1112_, v___y_1113_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4___boxed(lean_object* v_x_1117_, lean_object* v_e_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
uint8_t v_res_1122_; lean_object* v_r_1123_; 
v_res_1122_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4(v_x_1117_, v_e_1118_, v___y_1119_, v___y_1120_);
lean_dec(v___y_1120_);
lean_dec(v___y_1119_);
v_r_1123_ = lean_box(v_res_1122_);
return v_r_1123_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_1124_, lean_object* v_m_1125_, lean_object* v_a_1126_){
_start:
{
uint8_t v___x_1127_; 
v___x_1127_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5___redArg(v_m_1125_, v_a_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5___boxed(lean_object* v_00_u03b2_1128_, lean_object* v_m_1129_, lean_object* v_a_1130_){
_start:
{
uint8_t v_res_1131_; lean_object* v_r_1132_; 
v_res_1131_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5(v_00_u03b2_1128_, v_m_1129_, v_a_1130_);
lean_dec_ref(v_a_1130_);
lean_dec_ref(v_m_1129_);
v_r_1132_ = lean_box(v_res_1131_);
return v_r_1132_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_1133_, lean_object* v_m_1134_, lean_object* v_a_1135_, lean_object* v_b_1136_){
_start:
{
lean_object* v___x_1137_; 
v___x_1137_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6___redArg(v_m_1134_, v_a_1135_, v_b_1136_);
return v___x_1137_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_1138_, lean_object* v_a_1139_, lean_object* v_x_1140_){
_start:
{
uint8_t v___x_1141_; 
v___x_1141_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5_spec__6___redArg(v_a_1139_, v_x_1140_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5_spec__6___boxed(lean_object* v_00_u03b2_1142_, lean_object* v_a_1143_, lean_object* v_x_1144_){
_start:
{
uint8_t v_res_1145_; lean_object* v_r_1146_; 
v_res_1145_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5_spec__6(v_00_u03b2_1142_, v_a_1143_, v_x_1144_);
lean_dec(v_x_1144_);
lean_dec_ref(v_a_1143_);
v_r_1146_ = lean_box(v_res_1145_);
return v_r_1146_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8(lean_object* v_00_u03b2_1147_, lean_object* v_data_1148_){
_start:
{
lean_object* v___x_1149_; 
v___x_1149_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8___redArg(v_data_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8_spec__9(lean_object* v_00_u03b2_1150_, lean_object* v_i_1151_, lean_object* v_source_1152_, lean_object* v_target_1153_){
_start:
{
lean_object* v___x_1154_; 
v___x_1154_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8_spec__9___redArg(v_i_1151_, v_source_1152_, v_target_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8_spec__9_spec__10(lean_object* v_00_u03b2_1155_, lean_object* v_x_1156_, lean_object* v_x_1157_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__6_spec__8_spec__9_spec__10___redArg(v_x_1156_, v_x_1157_);
return v___x_1158_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__10(void){
_start:
{
lean_object* v___x_1175_; 
v___x_1175_ = l_Array_mkArray0___redArg();
return v___x_1175_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__17(void){
_start:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1190_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__0));
v___x_1191_ = l_String_toRawSubstring_x27(v___x_1190_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg(lean_object* v_upperBound_1204_, lean_object* v_usedInstIdxs_1205_, lean_object* v_a_1206_, lean_object* v_b_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_){
_start:
{
lean_object* v_a_1212_; uint8_t v___x_1216_; 
v___x_1216_ = lean_nat_dec_lt(v_a_1206_, v_upperBound_1204_);
if (v___x_1216_ == 0)
{
lean_object* v___x_1217_; 
lean_dec(v_a_1206_);
v___x_1217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1217_, 0, v_b_1207_);
return v___x_1217_;
}
else
{
lean_object* v_fst_1218_; lean_object* v_snd_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1274_; 
v_fst_1218_ = lean_ctor_get(v_b_1207_, 0);
v_snd_1219_ = lean_ctor_get(v_b_1207_, 1);
v_isSharedCheck_1274_ = !lean_is_exclusive(v_b_1207_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1221_ = v_b_1207_;
v_isShared_1222_ = v_isSharedCheck_1274_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_snd_1219_);
lean_inc(v_fst_1218_);
lean_dec(v_b_1207_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1274_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1223_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__1));
v___x_1224_ = l_Lean_Core_mkFreshUserName(v___x_1223_, v___y_1208_, v___y_1209_);
if (lean_obj_tag(v___x_1224_) == 0)
{
lean_object* v_a_1225_; lean_object* v_toCold_1226_; lean_object* v_ref_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; uint8_t v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; uint8_t v___x_1243_; 
v_a_1225_ = lean_ctor_get(v___x_1224_, 0);
lean_inc(v_a_1225_);
lean_dec_ref_known(v___x_1224_, 1);
v_toCold_1226_ = lean_ctor_get(v___y_1208_, 0);
v_ref_1227_ = lean_ctor_get(v___y_1208_, 2);
v___x_1228_ = l_Lean_mkIdent(v_a_1225_);
lean_inc(v___x_1228_);
v___x_1229_ = lean_array_push(v_fst_1218_, v___x_1228_);
v___x_1230_ = 0;
v___x_1231_ = l_Lean_SourceInfo_fromRef(v_ref_1227_, v___x_1230_);
v___x_1232_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__6));
v___x_1233_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__7));
lean_inc_n(v___x_1231_, 5);
v___x_1234_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1231_);
lean_ctor_set(v___x_1234_, 1, v___x_1233_);
v___x_1235_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__9));
v___x_1236_ = l_Lean_Syntax_node1(v___x_1231_, v___x_1235_, v___x_1228_);
v___x_1237_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__10, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__10_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__10);
v___x_1238_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1231_);
lean_ctor_set(v___x_1238_, 1, v___x_1235_);
lean_ctor_set(v___x_1238_, 2, v___x_1237_);
v___x_1239_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__11));
v___x_1240_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1231_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
lean_inc_ref(v___x_1238_);
lean_inc(v___x_1236_);
v___x_1241_ = l_Lean_Syntax_node4(v___x_1231_, v___x_1232_, v___x_1234_, v___x_1236_, v___x_1238_, v___x_1240_);
v___x_1242_ = lean_array_push(v_snd_1219_, v___x_1241_);
v___x_1243_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__0___redArg(v_a_1206_, v_usedInstIdxs_1205_);
if (v___x_1243_ == 0)
{
lean_object* v___x_1245_; 
lean_dec_ref_known(v___x_1238_, 3);
lean_dec(v___x_1236_);
lean_dec(v___x_1231_);
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 1, v___x_1242_);
lean_ctor_set(v___x_1221_, 0, v___x_1229_);
v___x_1245_ = v___x_1221_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v___x_1229_);
lean_ctor_set(v_reuseFailAlloc_1246_, 1, v___x_1242_);
v___x_1245_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
v_a_1212_ = v___x_1245_;
goto v___jp_1211_;
}
}
else
{
lean_object* v_quotContext_1247_; lean_object* v_currMacroScope_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1264_; 
v_quotContext_1247_ = lean_ctor_get(v_toCold_1226_, 8);
v_currMacroScope_1248_ = lean_ctor_get(v_toCold_1226_, 9);
v___x_1249_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__13));
v___x_1250_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__14));
lean_inc_n(v___x_1231_, 4);
v___x_1251_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1231_);
lean_ctor_set(v___x_1251_, 1, v___x_1250_);
v___x_1252_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__16));
v___x_1253_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__17, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__17_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__17);
v___x_1254_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__1));
lean_inc(v_currMacroScope_1248_);
lean_inc(v_quotContext_1247_);
v___x_1255_ = l_Lean_addMacroScope(v_quotContext_1247_, v___x_1254_, v_currMacroScope_1248_);
v___x_1256_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__21));
v___x_1257_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1231_);
lean_ctor_set(v___x_1257_, 1, v___x_1253_);
lean_ctor_set(v___x_1257_, 2, v___x_1255_);
lean_ctor_set(v___x_1257_, 3, v___x_1256_);
v___x_1258_ = l_Lean_Syntax_node2(v___x_1231_, v___x_1252_, v___x_1257_, v___x_1236_);
v___x_1259_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__22));
v___x_1260_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1231_);
lean_ctor_set(v___x_1260_, 1, v___x_1259_);
v___x_1261_ = l_Lean_Syntax_node4(v___x_1231_, v___x_1249_, v___x_1251_, v___x_1238_, v___x_1258_, v___x_1260_);
v___x_1262_ = lean_array_push(v___x_1242_, v___x_1261_);
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 1, v___x_1262_);
lean_ctor_set(v___x_1221_, 0, v___x_1229_);
v___x_1264_ = v___x_1221_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1229_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v___x_1262_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
v_a_1212_ = v___x_1264_;
goto v___jp_1211_;
}
}
}
else
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1273_; 
lean_del_object(v___x_1221_);
lean_dec(v_snd_1219_);
lean_dec(v_fst_1218_);
lean_dec(v_a_1206_);
v_a_1266_ = lean_ctor_get(v___x_1224_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1268_ = v___x_1224_;
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1224_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1266_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
}
v___jp_1211_:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1213_ = lean_unsigned_to_nat(1u);
v___x_1214_ = lean_nat_add(v_a_1206_, v___x_1213_);
lean_dec(v_a_1206_);
v_a_1206_ = v___x_1214_;
v_b_1207_ = v_a_1212_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___boxed(lean_object* v_upperBound_1275_, lean_object* v_usedInstIdxs_1276_, lean_object* v_a_1277_, lean_object* v_b_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_){
_start:
{
lean_object* v_res_1282_; 
v_res_1282_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg(v_upperBound_1275_, v_usedInstIdxs_1276_, v_a_1277_, v_b_1278_, v___y_1279_, v___y_1280_);
lean_dec(v___y_1280_);
lean_dec_ref(v___y_1279_);
lean_dec(v_usedInstIdxs_1276_);
lean_dec(v_upperBound_1275_);
return v_res_1282_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1283_ = lean_box(1);
v___x_1284_ = l_Lean_MessageData_ofFormat(v___x_1283_);
return v___x_1284_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__3(void){
_start:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1288_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__2));
v___x_1289_ = l_Lean_MessageData_ofFormat(v___x_1288_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5(lean_object* v_x_1290_, lean_object* v_x_1291_){
_start:
{
if (lean_obj_tag(v_x_1291_) == 0)
{
return v_x_1290_;
}
else
{
lean_object* v_head_1292_; lean_object* v_tail_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1315_; 
v_head_1292_ = lean_ctor_get(v_x_1291_, 0);
v_tail_1293_ = lean_ctor_get(v_x_1291_, 1);
v_isSharedCheck_1315_ = !lean_is_exclusive(v_x_1291_);
if (v_isSharedCheck_1315_ == 0)
{
v___x_1295_ = v_x_1291_;
v_isShared_1296_ = v_isSharedCheck_1315_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_tail_1293_);
lean_inc(v_head_1292_);
lean_dec(v_x_1291_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1315_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v_before_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1313_; 
v_before_1297_ = lean_ctor_get(v_head_1292_, 0);
v_isSharedCheck_1313_ = !lean_is_exclusive(v_head_1292_);
if (v_isSharedCheck_1313_ == 0)
{
lean_object* v_unused_1314_; 
v_unused_1314_ = lean_ctor_get(v_head_1292_, 1);
lean_dec(v_unused_1314_);
v___x_1299_ = v_head_1292_;
v_isShared_1300_ = v_isSharedCheck_1313_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_before_1297_);
lean_dec(v_head_1292_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1313_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1301_; lean_object* v___x_1303_; 
v___x_1301_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__0);
if (v_isShared_1300_ == 0)
{
lean_ctor_set_tag(v___x_1299_, 7);
lean_ctor_set(v___x_1299_, 1, v___x_1301_);
lean_ctor_set(v___x_1299_, 0, v_x_1290_);
v___x_1303_ = v___x_1299_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_x_1290_);
lean_ctor_set(v_reuseFailAlloc_1312_, 1, v___x_1301_);
v___x_1303_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
lean_object* v___x_1304_; lean_object* v___x_1306_; 
v___x_1304_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__3);
if (v_isShared_1296_ == 0)
{
lean_ctor_set_tag(v___x_1295_, 7);
lean_ctor_set(v___x_1295_, 1, v___x_1304_);
lean_ctor_set(v___x_1295_, 0, v___x_1303_);
v___x_1306_ = v___x_1295_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v___x_1303_);
lean_ctor_set(v_reuseFailAlloc_1311_, 1, v___x_1304_);
v___x_1306_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
v___x_1307_ = l_Lean_MessageData_ofSyntax(v_before_1297_);
v___x_1308_ = l_Lean_indentD(v___x_1307_);
v___x_1309_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1309_, 0, v___x_1306_);
lean_ctor_set(v___x_1309_, 1, v___x_1308_);
v_x_1290_ = v___x_1309_;
v_x_1291_ = v_tail_1293_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4(lean_object* v_opts_1316_, lean_object* v_opt_1317_){
_start:
{
lean_object* v_name_1318_; lean_object* v_defValue_1319_; lean_object* v_map_1320_; lean_object* v___x_1321_; 
v_name_1318_ = lean_ctor_get(v_opt_1317_, 0);
v_defValue_1319_ = lean_ctor_get(v_opt_1317_, 1);
v_map_1320_ = lean_ctor_get(v_opts_1316_, 0);
v___x_1321_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1320_, v_name_1318_);
if (lean_obj_tag(v___x_1321_) == 0)
{
uint8_t v___x_1322_; 
v___x_1322_ = lean_unbox(v_defValue_1319_);
return v___x_1322_;
}
else
{
lean_object* v_val_1323_; 
v_val_1323_ = lean_ctor_get(v___x_1321_, 0);
lean_inc(v_val_1323_);
lean_dec_ref_known(v___x_1321_, 1);
if (lean_obj_tag(v_val_1323_) == 1)
{
uint8_t v_v_1324_; 
v_v_1324_ = lean_ctor_get_uint8(v_val_1323_, 0);
lean_dec_ref_known(v_val_1323_, 0);
return v_v_1324_;
}
else
{
uint8_t v___x_1325_; 
lean_dec(v_val_1323_);
v___x_1325_ = lean_unbox(v_defValue_1319_);
return v___x_1325_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_opts_1326_, lean_object* v_opt_1327_){
_start:
{
uint8_t v_res_1328_; lean_object* v_r_1329_; 
v_res_1328_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4(v_opts_1326_, v_opt_1327_);
lean_dec_ref(v_opt_1327_);
lean_dec_ref(v_opts_1326_);
v_r_1329_ = lean_box(v_res_1328_);
return v_r_1329_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1333_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__1));
v___x_1334_ = l_Lean_MessageData_ofFormat(v___x_1333_);
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg(lean_object* v_msgData_1335_, lean_object* v_macroStack_1336_, lean_object* v___y_1337_){
_start:
{
lean_object* v_toCold_1339_; lean_object* v_options_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
v_toCold_1339_ = lean_ctor_get(v___y_1337_, 0);
v_options_1340_ = lean_ctor_get(v_toCold_1339_, 2);
v___x_1341_ = l_Lean_Elab_pp_macroStack;
v___x_1342_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4(v_options_1340_, v___x_1341_);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; 
lean_dec(v_macroStack_1336_);
v___x_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1343_, 0, v_msgData_1335_);
return v___x_1343_;
}
else
{
if (lean_obj_tag(v_macroStack_1336_) == 0)
{
lean_object* v___x_1344_; 
v___x_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1344_, 0, v_msgData_1335_);
return v___x_1344_;
}
else
{
lean_object* v_head_1345_; lean_object* v_after_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1361_; 
v_head_1345_ = lean_ctor_get(v_macroStack_1336_, 0);
lean_inc(v_head_1345_);
v_after_1346_ = lean_ctor_get(v_head_1345_, 1);
v_isSharedCheck_1361_ = !lean_is_exclusive(v_head_1345_);
if (v_isSharedCheck_1361_ == 0)
{
lean_object* v_unused_1362_; 
v_unused_1362_ = lean_ctor_get(v_head_1345_, 0);
lean_dec(v_unused_1362_);
v___x_1348_ = v_head_1345_;
v_isShared_1349_ = v_isSharedCheck_1361_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_after_1346_);
lean_dec(v_head_1345_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1361_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1350_; lean_object* v___x_1352_; 
v___x_1350_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__0);
if (v_isShared_1349_ == 0)
{
lean_ctor_set_tag(v___x_1348_, 7);
lean_ctor_set(v___x_1348_, 1, v___x_1350_);
lean_ctor_set(v___x_1348_, 0, v_msgData_1335_);
v___x_1352_ = v___x_1348_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v_msgData_1335_);
lean_ctor_set(v_reuseFailAlloc_1360_, 1, v___x_1350_);
v___x_1352_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v_msgData_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; 
v___x_1353_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__2);
v___x_1354_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1352_);
lean_ctor_set(v___x_1354_, 1, v___x_1353_);
v___x_1355_ = l_Lean_MessageData_ofSyntax(v_after_1346_);
v___x_1356_ = l_Lean_indentD(v___x_1355_);
v_msgData_1357_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1357_, 0, v___x_1354_);
lean_ctor_set(v_msgData_1357_, 1, v___x_1356_);
v___x_1358_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5(v_msgData_1357_, v_macroStack_1336_);
v___x_1359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1358_);
return v___x_1359_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_1363_, lean_object* v_macroStack_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
lean_object* v_res_1367_; 
v_res_1367_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg(v_msgData_1363_, v_macroStack_1364_, v___y_1365_);
lean_dec_ref(v___y_1365_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1___redArg(lean_object* v_msg_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
lean_object* v_ref_1376_; lean_object* v_macroStack_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v_a_1380_; lean_object* v___x_1381_; lean_object* v_a_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1390_; 
v_ref_1376_ = lean_ctor_get(v___y_1373_, 2);
v_macroStack_1377_ = lean_ctor_get(v___y_1369_, 1);
v___x_1378_ = l_Lean_Elab_getBetterRef(v_ref_1376_, v_macroStack_1377_);
v___x_1379_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0_spec__0(v_msg_1368_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_);
v_a_1380_ = lean_ctor_get(v___x_1379_, 0);
lean_inc(v_a_1380_);
lean_dec_ref(v___x_1379_);
lean_inc(v_macroStack_1377_);
v___x_1381_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg(v_a_1380_, v_macroStack_1377_, v___y_1373_);
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1384_ = v___x_1381_;
v_isShared_1385_ = v_isSharedCheck_1390_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_a_1382_);
lean_dec(v___x_1381_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1390_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1386_; lean_object* v___x_1388_; 
v___x_1386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1378_);
lean_ctor_set(v___x_1386_, 1, v_a_1382_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set_tag(v___x_1384_, 1);
lean_ctor_set(v___x_1384_, 0, v___x_1386_);
v___x_1388_ = v___x_1384_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v___x_1386_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1___redArg___boxed(lean_object* v_msg_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_){
_start:
{
lean_object* v_res_1399_; 
v_res_1399_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1___redArg(v_msg_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_);
lean_dec(v___y_1397_);
lean_dec_ref(v___y_1396_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
return v_res_1399_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1401_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__0));
v___x_1402_ = l_Lean_stringToMessageData(v___x_1401_);
return v___x_1402_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1404_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__2));
v___x_1405_ = l_Lean_stringToMessageData(v___x_1404_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1(lean_object* v_constName_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_){
_start:
{
lean_object* v___x_1414_; lean_object* v_env_1415_; lean_object* v___x_1416_; 
v___x_1414_ = lean_st_ref_get(v___y_1412_);
v_env_1415_ = lean_ctor_get(v___x_1414_, 0);
lean_inc_ref(v_env_1415_);
lean_dec(v___x_1414_);
lean_inc(v_constName_1406_);
v___x_1416_ = l_Lean_isInductiveCore_x3f(v_env_1415_, v_constName_1406_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v___x_1417_; uint8_t v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; 
v___x_1417_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__1, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__1);
v___x_1418_ = 0;
v___x_1419_ = l_Lean_MessageData_ofConstName(v_constName_1406_, v___x_1418_);
v___x_1420_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1417_);
lean_ctor_set(v___x_1420_, 1, v___x_1419_);
v___x_1421_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__3, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__3_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__3);
v___x_1422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1420_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
v___x_1423_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1___redArg(v___x_1422_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_);
return v___x_1423_;
}
else
{
lean_object* v_val_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1431_; 
lean_dec(v_constName_1406_);
v_val_1424_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1431_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1431_ == 0)
{
v___x_1426_ = v___x_1416_;
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_val_1424_);
lean_dec(v___x_1416_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1429_; 
if (v_isShared_1427_ == 0)
{
lean_ctor_set_tag(v___x_1426_, 0);
v___x_1429_ = v___x_1426_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v_val_1424_);
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
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___boxed(lean_object* v_constName_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_){
_start:
{
lean_object* v_res_1440_; 
v_res_1440_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1(v_constName_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_);
lean_dec(v___y_1438_);
lean_dec_ref(v___y_1437_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__0(size_t v_sz_1441_, size_t v_i_1442_, lean_object* v_bs_1443_){
_start:
{
uint8_t v___x_1444_; 
v___x_1444_ = lean_usize_dec_lt(v_i_1442_, v_sz_1441_);
if (v___x_1444_ == 0)
{
return v_bs_1443_;
}
else
{
lean_object* v_v_1445_; lean_object* v___x_1446_; lean_object* v_bs_x27_1447_; size_t v___x_1448_; size_t v___x_1449_; lean_object* v___x_1450_; 
v_v_1445_ = lean_array_uget(v_bs_1443_, v_i_1442_);
v___x_1446_ = lean_unsigned_to_nat(0u);
v_bs_x27_1447_ = lean_array_uset(v_bs_1443_, v_i_1442_, v___x_1446_);
v___x_1448_ = ((size_t)1ULL);
v___x_1449_ = lean_usize_add(v_i_1442_, v___x_1448_);
v___x_1450_ = lean_array_uset(v_bs_x27_1447_, v_i_1442_, v_v_1445_);
v_i_1442_ = v___x_1449_;
v_bs_1443_ = v___x_1450_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__0___boxed(lean_object* v_sz_1452_, lean_object* v_i_1453_, lean_object* v_bs_1454_){
_start:
{
size_t v_sz_boxed_1455_; size_t v_i_boxed_1456_; lean_object* v_res_1457_; 
v_sz_boxed_1455_ = lean_unbox_usize(v_sz_1452_);
lean_dec(v_sz_1452_);
v_i_boxed_1456_ = lean_unbox_usize(v_i_1453_);
lean_dec(v_i_1453_);
v_res_1457_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__0(v_sz_boxed_1455_, v_i_boxed_1456_, v_bs_1454_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith(lean_object* v_inductiveTypeName_1535_, lean_object* v_instId_1536_, lean_object* v_usedInstIdxs_1537_, lean_object* v_auxFunId_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_){
_start:
{
lean_object* v___x_1546_; 
lean_inc(v_inductiveTypeName_1535_);
v___x_1546_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1(v_inductiveTypeName_1535_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_);
if (lean_obj_tag(v___x_1546_) == 0)
{
lean_object* v_a_1547_; lean_object* v_numParams_1548_; lean_object* v_numIndices_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v_a_1547_ = lean_ctor_get(v___x_1546_, 0);
lean_inc(v_a_1547_);
lean_dec_ref_known(v___x_1546_, 1);
v_numParams_1548_ = lean_ctor_get(v_a_1547_, 1);
lean_inc(v_numParams_1548_);
v_numIndices_1549_ = lean_ctor_get(v_a_1547_, 2);
lean_inc(v_numIndices_1549_);
lean_dec(v_a_1547_);
v___x_1550_ = lean_unsigned_to_nat(0u);
v___x_1551_ = lean_nat_add(v_numParams_1548_, v_numIndices_1549_);
lean_dec(v_numIndices_1549_);
lean_dec(v_numParams_1548_);
v___x_1552_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__1));
v___x_1553_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg(v___x_1551_, v_usedInstIdxs_1537_, v___x_1550_, v___x_1552_, v___y_1543_, v___y_1544_);
lean_dec(v___x_1551_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1631_; 
v_a_1554_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1556_ = v___x_1553_;
v_isShared_1557_ = v_isSharedCheck_1631_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v___x_1553_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1631_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v_fst_1558_; lean_object* v_snd_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1630_; 
v_fst_1558_ = lean_ctor_get(v_a_1554_, 0);
v_snd_1559_ = lean_ctor_get(v_a_1554_, 1);
v_isSharedCheck_1630_ = !lean_is_exclusive(v_a_1554_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1561_ = v_a_1554_;
v_isShared_1562_ = v_isSharedCheck_1630_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_snd_1559_);
lean_inc(v_fst_1558_);
lean_dec(v_a_1554_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1630_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v_toCold_1563_; lean_object* v_ref_1564_; uint8_t v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1571_; 
v_toCold_1563_ = lean_ctor_get(v___y_1543_, 0);
v_ref_1564_ = lean_ctor_get(v___y_1543_, 2);
v___x_1565_ = 0;
v___x_1566_ = l_Lean_SourceInfo_fromRef(v_ref_1564_, v___x_1565_);
v___x_1567_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__16));
v___x_1568_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__3));
v___x_1569_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__4));
lean_inc(v___x_1566_);
if (v_isShared_1562_ == 0)
{
lean_ctor_set_tag(v___x_1561_, 2);
lean_ctor_set(v___x_1561_, 1, v___x_1569_);
lean_ctor_set(v___x_1561_, 0, v___x_1566_);
v___x_1571_ = v___x_1561_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v___x_1566_);
lean_ctor_set(v_reuseFailAlloc_1629_, 1, v___x_1569_);
v___x_1571_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v_quotContext_1574_; lean_object* v_currMacroScope_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; size_t v_sz_1594_; size_t v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1627_; 
v___x_1572_ = l_Lean_mkCIdent(v_inductiveTypeName_1535_);
lean_inc_n(v___x_1566_, 24);
v___x_1573_ = l_Lean_Syntax_node2(v___x_1566_, v___x_1568_, v___x_1571_, v___x_1572_);
v_quotContext_1574_ = lean_ctor_get(v_toCold_1563_, 8);
v_currMacroScope_1575_ = lean_ctor_get(v_toCold_1563_, 9);
v___x_1576_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__9));
v___x_1577_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__10, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__10_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__10);
v___x_1578_ = l_Array_append___redArg(v___x_1577_, v_fst_1558_);
lean_dec(v_fst_1558_);
v___x_1579_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1566_);
lean_ctor_set(v___x_1579_, 1, v___x_1576_);
lean_ctor_set(v___x_1579_, 2, v___x_1578_);
v___x_1580_ = l_Lean_Syntax_node2(v___x_1566_, v___x_1567_, v___x_1573_, v___x_1579_);
v___x_1581_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__7));
v___x_1582_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__9));
v___x_1583_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1566_);
lean_ctor_set(v___x_1583_, 1, v___x_1576_);
lean_ctor_set(v___x_1583_, 2, v___x_1577_);
lean_inc_ref_n(v___x_1583_, 12);
v___x_1584_ = l_Lean_Syntax_node7(v___x_1566_, v___x_1582_, v___x_1583_, v___x_1583_, v___x_1583_, v___x_1583_, v___x_1583_, v___x_1583_, v___x_1583_);
v___x_1585_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__10));
v___x_1586_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__11));
v___x_1587_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__13));
v___x_1588_ = l_Lean_Syntax_node1(v___x_1566_, v___x_1587_, v___x_1583_);
v___x_1589_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1566_);
lean_ctor_set(v___x_1589_, 1, v___x_1585_);
v___x_1590_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__15));
v___x_1591_ = l_Lean_Syntax_node2(v___x_1566_, v___x_1590_, v_instId_1536_, v___x_1583_);
v___x_1592_ = l_Lean_Syntax_node1(v___x_1566_, v___x_1576_, v___x_1591_);
v___x_1593_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__17));
v_sz_1594_ = lean_array_size(v_snd_1559_);
v___x_1595_ = ((size_t)0ULL);
v___x_1596_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__0(v_sz_1594_, v___x_1595_, v_snd_1559_);
v___x_1597_ = l_Array_append___redArg(v___x_1577_, v___x_1596_);
lean_dec_ref(v___x_1596_);
v___x_1598_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1566_);
lean_ctor_set(v___x_1598_, 1, v___x_1576_);
lean_ctor_set(v___x_1598_, 2, v___x_1597_);
v___x_1599_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__19));
v___x_1600_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__20));
v___x_1601_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1566_);
lean_ctor_set(v___x_1601_, 1, v___x_1600_);
v___x_1602_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__17, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__17_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__17);
v___x_1603_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__1));
lean_inc(v_currMacroScope_1575_);
lean_inc(v_quotContext_1574_);
v___x_1604_ = l_Lean_addMacroScope(v_quotContext_1574_, v___x_1603_, v_currMacroScope_1575_);
v___x_1605_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg___closed__21));
v___x_1606_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1566_);
lean_ctor_set(v___x_1606_, 1, v___x_1602_);
lean_ctor_set(v___x_1606_, 2, v___x_1604_);
lean_ctor_set(v___x_1606_, 3, v___x_1605_);
v___x_1607_ = l_Lean_Syntax_node1(v___x_1566_, v___x_1576_, v___x_1580_);
v___x_1608_ = l_Lean_Syntax_node2(v___x_1566_, v___x_1567_, v___x_1606_, v___x_1607_);
v___x_1609_ = l_Lean_Syntax_node2(v___x_1566_, v___x_1599_, v___x_1601_, v___x_1608_);
v___x_1610_ = l_Lean_Syntax_node2(v___x_1566_, v___x_1593_, v___x_1598_, v___x_1609_);
v___x_1611_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__22));
v___x_1612_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__23));
v___x_1613_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1566_);
lean_ctor_set(v___x_1613_, 1, v___x_1612_);
v___x_1614_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__25));
v___x_1615_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__26));
v___x_1616_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1566_);
lean_ctor_set(v___x_1616_, 1, v___x_1615_);
v___x_1617_ = l_Lean_Syntax_node1(v___x_1566_, v___x_1576_, v_auxFunId_1538_);
v___x_1618_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__27));
v___x_1619_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1566_);
lean_ctor_set(v___x_1619_, 1, v___x_1618_);
v___x_1620_ = l_Lean_Syntax_node3(v___x_1566_, v___x_1614_, v___x_1616_, v___x_1617_, v___x_1619_);
v___x_1621_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___closed__30));
v___x_1622_ = l_Lean_Syntax_node2(v___x_1566_, v___x_1621_, v___x_1583_, v___x_1583_);
v___x_1623_ = l_Lean_Syntax_node4(v___x_1566_, v___x_1611_, v___x_1613_, v___x_1620_, v___x_1622_, v___x_1583_);
v___x_1624_ = l_Lean_Syntax_node6(v___x_1566_, v___x_1586_, v___x_1588_, v___x_1589_, v___x_1583_, v___x_1592_, v___x_1610_, v___x_1623_);
v___x_1625_ = l_Lean_Syntax_node2(v___x_1566_, v___x_1581_, v___x_1584_, v___x_1624_);
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 0, v___x_1625_);
v___x_1627_ = v___x_1556_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v___x_1625_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
}
}
else
{
lean_object* v_a_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1639_; 
lean_dec(v_auxFunId_1538_);
lean_dec(v_instId_1536_);
lean_dec(v_inductiveTypeName_1535_);
v_a_1632_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1634_ = v___x_1553_;
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_a_1632_);
lean_dec(v___x_1553_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1637_; 
if (v_isShared_1635_ == 0)
{
v___x_1637_ = v___x_1634_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v_a_1632_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
}
}
else
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1647_; 
lean_dec(v_auxFunId_1538_);
lean_dec(v_instId_1536_);
lean_dec(v_inductiveTypeName_1535_);
v_a_1640_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1642_ = v___x_1546_;
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1546_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1645_; 
if (v_isShared_1643_ == 0)
{
v___x_1645_ = v___x_1642_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1640_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith___boxed(lean_object* v_inductiveTypeName_1648_, lean_object* v_instId_1649_, lean_object* v_usedInstIdxs_1650_, lean_object* v_auxFunId_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith(v_inductiveTypeName_1648_, v_instId_1649_, v_usedInstIdxs_1650_, v_auxFunId_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1656_);
lean_dec(v___y_1655_);
lean_dec_ref(v___y_1654_);
lean_dec(v___y_1653_);
lean_dec_ref(v___y_1652_);
lean_dec(v_usedInstIdxs_1650_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2(lean_object* v_upperBound_1660_, lean_object* v_usedInstIdxs_1661_, lean_object* v_inst_1662_, lean_object* v_R_1663_, lean_object* v_a_1664_, lean_object* v_b_1665_, lean_object* v_c_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
lean_object* v___x_1674_; 
v___x_1674_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___redArg(v_upperBound_1660_, v_usedInstIdxs_1661_, v_a_1664_, v_b_1665_, v___y_1671_, v___y_1672_);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2___boxed(lean_object* v_upperBound_1675_, lean_object* v_usedInstIdxs_1676_, lean_object* v_inst_1677_, lean_object* v_R_1678_, lean_object* v_a_1679_, lean_object* v_b_1680_, lean_object* v_c_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_){
_start:
{
lean_object* v_res_1689_; 
v_res_1689_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__2(v_upperBound_1675_, v_usedInstIdxs_1676_, v_inst_1677_, v_R_1678_, v_a_1679_, v_b_1680_, v_c_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_);
lean_dec(v___y_1687_);
lean_dec_ref(v___y_1686_);
lean_dec(v___y_1685_);
lean_dec_ref(v___y_1684_);
lean_dec(v___y_1683_);
lean_dec_ref(v___y_1682_);
lean_dec(v_usedInstIdxs_1676_);
lean_dec(v_upperBound_1675_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1(lean_object* v_00_u03b1_1690_, lean_object* v_msg_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_){
_start:
{
lean_object* v___x_1699_; 
v___x_1699_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1___redArg(v_msg_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_);
return v___x_1699_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1___boxed(lean_object* v_00_u03b1_1700_, lean_object* v_msg_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_){
_start:
{
lean_object* v_res_1709_; 
v_res_1709_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1(v_00_u03b1_1700_, v_msg_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_, v___y_1707_);
lean_dec(v___y_1707_);
lean_dec_ref(v___y_1706_);
lean_dec(v___y_1705_);
lean_dec_ref(v___y_1704_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
return v_res_1709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2(lean_object* v_msgData_1710_, lean_object* v_macroStack_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_){
_start:
{
lean_object* v___x_1719_; 
v___x_1719_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg(v_msgData_1710_, v_macroStack_1711_, v___y_1716_);
return v___x_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___boxed(lean_object* v_msgData_1720_, lean_object* v_macroStack_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
lean_object* v_res_1729_; 
v_res_1729_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2(v_msgData_1720_, v_macroStack_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_);
lean_dec(v___y_1727_);
lean_dec_ref(v___y_1726_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
lean_dec(v___y_1723_);
lean_dec_ref(v___y_1722_);
return v_res_1729_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1730_ = lean_unsigned_to_nat(32u);
v___x_1731_ = lean_mk_empty_array_with_capacity(v___x_1730_);
v___x_1732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1731_);
return v___x_1732_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; 
v___x_1733_ = ((size_t)5ULL);
v___x_1734_ = lean_unsigned_to_nat(0u);
v___x_1735_ = lean_unsigned_to_nat(32u);
v___x_1736_ = lean_mk_empty_array_with_capacity(v___x_1735_);
v___x_1737_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg___closed__0);
v___x_1738_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1738_, 0, v___x_1737_);
lean_ctor_set(v___x_1738_, 1, v___x_1736_);
lean_ctor_set(v___x_1738_, 2, v___x_1734_);
lean_ctor_set(v___x_1738_, 3, v___x_1734_);
lean_ctor_set_usize(v___x_1738_, 4, v___x_1733_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg(lean_object* v___y_1739_){
_start:
{
lean_object* v___x_1741_; lean_object* v_traceState_1742_; lean_object* v_traces_1743_; lean_object* v___x_1744_; lean_object* v_traceState_1745_; lean_object* v_env_1746_; lean_object* v_nextMacroScope_1747_; lean_object* v_ngen_1748_; lean_object* v_auxDeclNGen_1749_; lean_object* v_cache_1750_; lean_object* v_messages_1751_; lean_object* v_infoState_1752_; lean_object* v_snapshotTasks_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1772_; 
v___x_1741_ = lean_st_ref_get(v___y_1739_);
v_traceState_1742_ = lean_ctor_get(v___x_1741_, 4);
lean_inc_ref(v_traceState_1742_);
lean_dec(v___x_1741_);
v_traces_1743_ = lean_ctor_get(v_traceState_1742_, 0);
lean_inc_ref(v_traces_1743_);
lean_dec_ref(v_traceState_1742_);
v___x_1744_ = lean_st_ref_take(v___y_1739_);
v_traceState_1745_ = lean_ctor_get(v___x_1744_, 4);
v_env_1746_ = lean_ctor_get(v___x_1744_, 0);
v_nextMacroScope_1747_ = lean_ctor_get(v___x_1744_, 1);
v_ngen_1748_ = lean_ctor_get(v___x_1744_, 2);
v_auxDeclNGen_1749_ = lean_ctor_get(v___x_1744_, 3);
v_cache_1750_ = lean_ctor_get(v___x_1744_, 5);
v_messages_1751_ = lean_ctor_get(v___x_1744_, 6);
v_infoState_1752_ = lean_ctor_get(v___x_1744_, 7);
v_snapshotTasks_1753_ = lean_ctor_get(v___x_1744_, 8);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1744_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1755_ = v___x_1744_;
v_isShared_1756_ = v_isSharedCheck_1772_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_snapshotTasks_1753_);
lean_inc(v_infoState_1752_);
lean_inc(v_messages_1751_);
lean_inc(v_cache_1750_);
lean_inc(v_traceState_1745_);
lean_inc(v_auxDeclNGen_1749_);
lean_inc(v_ngen_1748_);
lean_inc(v_nextMacroScope_1747_);
lean_inc(v_env_1746_);
lean_dec(v___x_1744_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1772_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
uint64_t v_tid_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1770_; 
v_tid_1757_ = lean_ctor_get_uint64(v_traceState_1745_, sizeof(void*)*1);
v_isSharedCheck_1770_ = !lean_is_exclusive(v_traceState_1745_);
if (v_isSharedCheck_1770_ == 0)
{
lean_object* v_unused_1771_; 
v_unused_1771_ = lean_ctor_get(v_traceState_1745_, 0);
lean_dec(v_unused_1771_);
v___x_1759_ = v_traceState_1745_;
v_isShared_1760_ = v_isSharedCheck_1770_;
goto v_resetjp_1758_;
}
else
{
lean_dec(v_traceState_1745_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1770_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1761_; lean_object* v___x_1763_; 
v___x_1761_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg___closed__1);
if (v_isShared_1760_ == 0)
{
lean_ctor_set(v___x_1759_, 0, v___x_1761_);
v___x_1763_ = v___x_1759_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v___x_1761_);
lean_ctor_set_uint64(v_reuseFailAlloc_1769_, sizeof(void*)*1, v_tid_1757_);
v___x_1763_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
lean_object* v___x_1765_; 
if (v_isShared_1756_ == 0)
{
lean_ctor_set(v___x_1755_, 4, v___x_1763_);
v___x_1765_ = v___x_1755_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_env_1746_);
lean_ctor_set(v_reuseFailAlloc_1768_, 1, v_nextMacroScope_1747_);
lean_ctor_set(v_reuseFailAlloc_1768_, 2, v_ngen_1748_);
lean_ctor_set(v_reuseFailAlloc_1768_, 3, v_auxDeclNGen_1749_);
lean_ctor_set(v_reuseFailAlloc_1768_, 4, v___x_1763_);
lean_ctor_set(v_reuseFailAlloc_1768_, 5, v_cache_1750_);
lean_ctor_set(v_reuseFailAlloc_1768_, 6, v_messages_1751_);
lean_ctor_set(v_reuseFailAlloc_1768_, 7, v_infoState_1752_);
lean_ctor_set(v_reuseFailAlloc_1768_, 8, v_snapshotTasks_1753_);
v___x_1765_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1766_ = lean_st_ref_put(v___y_1739_, v___x_1765_);
v___x_1767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1767_, 0, v_traces_1743_);
return v___x_1767_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg___boxed(lean_object* v___y_1773_, lean_object* v___y_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg(v___y_1773_);
lean_dec(v___y_1773_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2(lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_){
_start:
{
lean_object* v___x_1783_; 
v___x_1783_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg(v___y_1781_);
return v___x_1783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___boxed(lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2(v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_);
lean_dec(v___y_1789_);
lean_dec_ref(v___y_1788_);
lean_dec(v___y_1787_);
lean_dec_ref(v___y_1786_);
lean_dec(v___y_1785_);
lean_dec_ref(v___y_1784_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4___redArg___lam__0(lean_object* v_x_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_){
_start:
{
lean_object* v___x_1800_; 
lean_inc(v___y_1794_);
lean_inc_ref(v___y_1793_);
v___x_1800_ = lean_apply_7(v_x_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, lean_box(0));
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4___redArg___lam__0___boxed(lean_object* v_x_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4___redArg___lam__0(v_x_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4___redArg(lean_object* v_mvarId_1810_, lean_object* v_x_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v___f_1819_; lean_object* v___x_1820_; 
lean_inc(v___y_1813_);
lean_inc_ref(v___y_1812_);
v___f_1819_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1819_, 0, v_x_1811_);
lean_closure_set(v___f_1819_, 1, v___y_1812_);
lean_closure_set(v___f_1819_, 2, v___y_1813_);
v___x_1820_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1810_, v___f_1819_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
if (lean_obj_tag(v___x_1820_) == 0)
{
return v___x_1820_;
}
else
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1828_; 
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1823_ = v___x_1820_;
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v___x_1820_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1824_ == 0)
{
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1821_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4___redArg___boxed(lean_object* v_mvarId_1829_, lean_object* v_x_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4___redArg(v_mvarId_1829_, v_x_1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec(v___y_1832_);
lean_dec_ref(v___y_1831_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4(lean_object* v_00_u03b1_1839_, lean_object* v_mvarId_1840_, lean_object* v_x_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_){
_start:
{
lean_object* v___x_1849_; 
v___x_1849_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4___redArg(v_mvarId_1840_, v_x_1841_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_);
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4___boxed(lean_object* v_00_u03b1_1850_, lean_object* v_mvarId_1851_, lean_object* v_x_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_){
_start:
{
lean_object* v_res_1860_; 
v_res_1860_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4(v_00_u03b1_1850_, v_mvarId_1851_, v_x_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_);
lean_dec(v___y_1858_);
lean_dec_ref(v___y_1857_);
lean_dec(v___y_1856_);
lean_dec_ref(v___y_1855_);
lean_dec(v___y_1854_);
lean_dec_ref(v___y_1853_);
return v_res_1860_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_1862_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0___closed__0));
v___x_1863_ = l_Lean_stringToMessageData(v___x_1862_);
return v___x_1863_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0(lean_object* v_a_1864_, lean_object* v_x_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_){
_start:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1873_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0___closed__1);
v___x_1874_ = lean_unsigned_to_nat(30u);
v___x_1875_ = l_Lean_inlineExprTrailing(v_a_1864_, v___x_1874_);
v___x_1876_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1876_, 0, v___x_1873_);
lean_ctor_set(v___x_1876_, 1, v___x_1875_);
v___x_1877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1877_, 0, v___x_1876_);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0___boxed(lean_object* v_a_1878_, lean_object* v_x_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_){
_start:
{
lean_object* v_res_1887_; 
v_res_1887_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0(v_a_1878_, v_x_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_);
lean_dec(v___y_1885_);
lean_dec_ref(v___y_1884_);
lean_dec(v___y_1883_);
lean_dec_ref(v___y_1882_);
lean_dec(v___y_1881_);
lean_dec_ref(v___y_1880_);
lean_dec_ref(v_x_1879_);
return v_res_1887_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__7(lean_object* v_e_1888_){
_start:
{
if (lean_obj_tag(v_e_1888_) == 0)
{
uint8_t v___x_1889_; 
v___x_1889_ = 2;
return v___x_1889_;
}
else
{
uint8_t v___x_1890_; 
v___x_1890_ = 0;
return v___x_1890_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__7___boxed(lean_object* v_e_1891_){
_start:
{
uint8_t v_res_1892_; lean_object* v_r_1893_; 
v_res_1892_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__7(v_e_1891_);
lean_dec_ref(v_e_1891_);
v_r_1893_ = lean_box(v_res_1892_);
return v_r_1893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__8(lean_object* v_opts_1894_, lean_object* v_opt_1895_){
_start:
{
lean_object* v_name_1896_; lean_object* v_defValue_1897_; lean_object* v_map_1898_; lean_object* v___x_1899_; 
v_name_1896_ = lean_ctor_get(v_opt_1895_, 0);
v_defValue_1897_ = lean_ctor_get(v_opt_1895_, 1);
v_map_1898_ = lean_ctor_get(v_opts_1894_, 0);
v___x_1899_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1898_, v_name_1896_);
if (lean_obj_tag(v___x_1899_) == 0)
{
lean_inc(v_defValue_1897_);
return v_defValue_1897_;
}
else
{
lean_object* v_val_1900_; 
v_val_1900_ = lean_ctor_get(v___x_1899_, 0);
lean_inc(v_val_1900_);
lean_dec_ref_known(v___x_1899_, 1);
if (lean_obj_tag(v_val_1900_) == 3)
{
lean_object* v_v_1901_; 
v_v_1901_ = lean_ctor_get(v_val_1900_, 0);
lean_inc(v_v_1901_);
lean_dec_ref_known(v_val_1900_, 1);
return v_v_1901_;
}
else
{
lean_dec(v_val_1900_);
lean_inc(v_defValue_1897_);
return v_defValue_1897_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__8___boxed(lean_object* v_opts_1902_, lean_object* v_opt_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__8(v_opts_1902_, v_opt_1903_);
lean_dec_ref(v_opt_1903_);
lean_dec_ref(v_opts_1902_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__6___redArg(lean_object* v_x_1905_){
_start:
{
if (lean_obj_tag(v_x_1905_) == 0)
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1914_; 
v_a_1907_ = lean_ctor_get(v_x_1905_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v_x_1905_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1909_ = v_x_1905_;
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v_x_1905_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1910_ == 0)
{
lean_ctor_set_tag(v___x_1909_, 1);
v___x_1912_ = v___x_1909_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_a_1907_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
else
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1922_; 
v_a_1915_ = lean_ctor_get(v_x_1905_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v_x_1905_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1917_ = v_x_1905_;
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v_x_1905_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1920_; 
if (v_isShared_1918_ == 0)
{
lean_ctor_set_tag(v___x_1917_, 0);
v___x_1920_ = v___x_1917_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(0, 1, 0);
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
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__6___redArg___boxed(lean_object* v_x_1923_, lean_object* v___y_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__6___redArg(v_x_1923_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5_spec__9(size_t v_sz_1926_, size_t v_i_1927_, lean_object* v_bs_1928_){
_start:
{
uint8_t v___x_1929_; 
v___x_1929_ = lean_usize_dec_lt(v_i_1927_, v_sz_1926_);
if (v___x_1929_ == 0)
{
return v_bs_1928_;
}
else
{
lean_object* v_v_1930_; lean_object* v_msg_1931_; lean_object* v___x_1932_; lean_object* v_bs_x27_1933_; size_t v___x_1934_; size_t v___x_1935_; lean_object* v___x_1936_; 
v_v_1930_ = lean_array_uget_borrowed(v_bs_1928_, v_i_1927_);
v_msg_1931_ = lean_ctor_get(v_v_1930_, 1);
lean_inc_ref(v_msg_1931_);
v___x_1932_ = lean_unsigned_to_nat(0u);
v_bs_x27_1933_ = lean_array_uset(v_bs_1928_, v_i_1927_, v___x_1932_);
v___x_1934_ = ((size_t)1ULL);
v___x_1935_ = lean_usize_add(v_i_1927_, v___x_1934_);
v___x_1936_ = lean_array_uset(v_bs_x27_1933_, v_i_1927_, v_msg_1931_);
v_i_1927_ = v___x_1935_;
v_bs_1928_ = v___x_1936_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5_spec__9___boxed(lean_object* v_sz_1938_, lean_object* v_i_1939_, lean_object* v_bs_1940_){
_start:
{
size_t v_sz_boxed_1941_; size_t v_i_boxed_1942_; lean_object* v_res_1943_; 
v_sz_boxed_1941_ = lean_unbox_usize(v_sz_1938_);
lean_dec(v_sz_1938_);
v_i_boxed_1942_ = lean_unbox_usize(v_i_1939_);
lean_dec(v_i_1939_);
v_res_1943_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5_spec__9(v_sz_boxed_1941_, v_i_boxed_1942_, v_bs_1940_);
return v_res_1943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5___redArg(lean_object* v_oldTraces_1944_, lean_object* v_data_1945_, lean_object* v_ref_1946_, lean_object* v_msg_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_){
_start:
{
lean_object* v_toCold_1953_; lean_object* v_currRecDepth_1954_; lean_object* v_ref_1955_; uint8_t v_diag_1956_; uint8_t v_suppressElabErrors_1957_; lean_object* v_ref_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v_traceState_1961_; lean_object* v_traces_1962_; lean_object* v___x_1963_; size_t v_sz_1964_; size_t v___x_1965_; lean_object* v___x_1966_; lean_object* v_msg_1967_; lean_object* v___x_1968_; lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_2006_; 
v_toCold_1953_ = lean_ctor_get(v___y_1950_, 0);
v_currRecDepth_1954_ = lean_ctor_get(v___y_1950_, 1);
v_ref_1955_ = lean_ctor_get(v___y_1950_, 2);
v_diag_1956_ = lean_ctor_get_uint8(v___y_1950_, sizeof(void*)*3);
v_suppressElabErrors_1957_ = lean_ctor_get_uint8(v___y_1950_, sizeof(void*)*3 + 1);
v_ref_1958_ = l_Lean_replaceRef(v_ref_1946_, v_ref_1955_);
lean_inc(v_currRecDepth_1954_);
lean_inc_ref(v_toCold_1953_);
v___x_1959_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1959_, 0, v_toCold_1953_);
lean_ctor_set(v___x_1959_, 1, v_currRecDepth_1954_);
lean_ctor_set(v___x_1959_, 2, v_ref_1958_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3, v_diag_1956_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 1, v_suppressElabErrors_1957_);
v___x_1960_ = lean_st_ref_get(v___y_1951_);
v_traceState_1961_ = lean_ctor_get(v___x_1960_, 4);
lean_inc_ref(v_traceState_1961_);
lean_dec(v___x_1960_);
v_traces_1962_ = lean_ctor_get(v_traceState_1961_, 0);
lean_inc_ref(v_traces_1962_);
lean_dec_ref(v_traceState_1961_);
v___x_1963_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1962_);
lean_dec_ref(v_traces_1962_);
v_sz_1964_ = lean_array_size(v___x_1963_);
v___x_1965_ = ((size_t)0ULL);
v___x_1966_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5_spec__9(v_sz_1964_, v___x_1965_, v___x_1963_);
v_msg_1967_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1967_, 0, v_data_1945_);
lean_ctor_set(v_msg_1967_, 1, v_msg_1947_);
lean_ctor_set(v_msg_1967_, 2, v___x_1966_);
v___x_1968_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0_spec__0(v_msg_1967_, v___y_1948_, v___y_1949_, v___x_1959_, v___y_1951_);
lean_dec_ref_known(v___x_1959_, 3);
v_a_1969_ = lean_ctor_get(v___x_1968_, 0);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_1971_ = v___x_1968_;
v_isShared_1972_ = v_isSharedCheck_2006_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v___x_1968_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_2006_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1973_; lean_object* v_traceState_1974_; lean_object* v_env_1975_; lean_object* v_nextMacroScope_1976_; lean_object* v_ngen_1977_; lean_object* v_auxDeclNGen_1978_; lean_object* v_cache_1979_; lean_object* v_messages_1980_; lean_object* v_infoState_1981_; lean_object* v_snapshotTasks_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_2005_; 
v___x_1973_ = lean_st_ref_take(v___y_1951_);
v_traceState_1974_ = lean_ctor_get(v___x_1973_, 4);
v_env_1975_ = lean_ctor_get(v___x_1973_, 0);
v_nextMacroScope_1976_ = lean_ctor_get(v___x_1973_, 1);
v_ngen_1977_ = lean_ctor_get(v___x_1973_, 2);
v_auxDeclNGen_1978_ = lean_ctor_get(v___x_1973_, 3);
v_cache_1979_ = lean_ctor_get(v___x_1973_, 5);
v_messages_1980_ = lean_ctor_get(v___x_1973_, 6);
v_infoState_1981_ = lean_ctor_get(v___x_1973_, 7);
v_snapshotTasks_1982_ = lean_ctor_get(v___x_1973_, 8);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_1984_ = v___x_1973_;
v_isShared_1985_ = v_isSharedCheck_2005_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_snapshotTasks_1982_);
lean_inc(v_infoState_1981_);
lean_inc(v_messages_1980_);
lean_inc(v_cache_1979_);
lean_inc(v_traceState_1974_);
lean_inc(v_auxDeclNGen_1978_);
lean_inc(v_ngen_1977_);
lean_inc(v_nextMacroScope_1976_);
lean_inc(v_env_1975_);
lean_dec(v___x_1973_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_2005_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
uint64_t v_tid_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_2003_; 
v_tid_1986_ = lean_ctor_get_uint64(v_traceState_1974_, sizeof(void*)*1);
v_isSharedCheck_2003_ = !lean_is_exclusive(v_traceState_1974_);
if (v_isSharedCheck_2003_ == 0)
{
lean_object* v_unused_2004_; 
v_unused_2004_ = lean_ctor_get(v_traceState_1974_, 0);
lean_dec(v_unused_2004_);
v___x_1988_ = v_traceState_1974_;
v_isShared_1989_ = v_isSharedCheck_2003_;
goto v_resetjp_1987_;
}
else
{
lean_dec(v_traceState_1974_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_2003_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1994_; 
v___x_1990_ = lean_box(0);
v___x_1991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1991_, 0, v_ref_1946_);
lean_ctor_set(v___x_1991_, 1, v_a_1969_);
v___x_1992_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1944_, v___x_1991_);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 0, v___x_1992_);
v___x_1994_ = v___x_1988_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v___x_1992_);
lean_ctor_set_uint64(v_reuseFailAlloc_2002_, sizeof(void*)*1, v_tid_1986_);
v___x_1994_ = v_reuseFailAlloc_2002_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
lean_object* v___x_1996_; 
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 4, v___x_1994_);
v___x_1996_ = v___x_1984_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_env_1975_);
lean_ctor_set(v_reuseFailAlloc_2001_, 1, v_nextMacroScope_1976_);
lean_ctor_set(v_reuseFailAlloc_2001_, 2, v_ngen_1977_);
lean_ctor_set(v_reuseFailAlloc_2001_, 3, v_auxDeclNGen_1978_);
lean_ctor_set(v_reuseFailAlloc_2001_, 4, v___x_1994_);
lean_ctor_set(v_reuseFailAlloc_2001_, 5, v_cache_1979_);
lean_ctor_set(v_reuseFailAlloc_2001_, 6, v_messages_1980_);
lean_ctor_set(v_reuseFailAlloc_2001_, 7, v_infoState_1981_);
lean_ctor_set(v_reuseFailAlloc_2001_, 8, v_snapshotTasks_1982_);
v___x_1996_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
lean_object* v___x_1997_; lean_object* v___x_1999_; 
v___x_1997_ = lean_st_ref_put(v___y_1951_, v___x_1996_);
if (v_isShared_1972_ == 0)
{
lean_ctor_set(v___x_1971_, 0, v___x_1990_);
v___x_1999_ = v___x_1971_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v___x_1990_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5___redArg___boxed(lean_object* v_oldTraces_2007_, lean_object* v_data_2008_, lean_object* v_ref_2009_, lean_object* v_msg_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_){
_start:
{
lean_object* v_res_2016_; 
v_res_2016_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5___redArg(v_oldTraces_2007_, v_data_2008_, v_ref_2009_, v_msg_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_);
lean_dec(v___y_2014_);
lean_dec_ref(v___y_2013_);
lean_dec(v___y_2012_);
lean_dec_ref(v___y_2011_);
return v_res_2016_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2018_; lean_object* v___x_2019_; 
v___x_2018_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__0));
v___x_2019_ = l_Lean_stringToMessageData(v___x_2018_);
return v___x_2019_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__2(void){
_start:
{
lean_object* v___x_2020_; double v___x_2021_; 
v___x_2020_ = lean_unsigned_to_nat(1000u);
v___x_2021_ = lean_float_of_nat(v___x_2020_);
return v___x_2021_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3(lean_object* v_cls_2022_, uint8_t v_collapsed_2023_, lean_object* v_tag_2024_, lean_object* v_opts_2025_, uint8_t v_clsEnabled_2026_, lean_object* v_oldTraces_2027_, lean_object* v_msg_2028_, lean_object* v_resStartStop_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_){
_start:
{
lean_object* v_fst_2037_; lean_object* v_snd_2038_; lean_object* v___y_2040_; lean_object* v___y_2041_; lean_object* v_data_2042_; lean_object* v_fst_2045_; lean_object* v_snd_2046_; lean_object* v___x_2047_; uint8_t v___x_2048_; lean_object* v___y_2050_; lean_object* v_a_2051_; uint8_t v___y_2066_; double v___y_2097_; 
v_fst_2037_ = lean_ctor_get(v_resStartStop_2029_, 0);
lean_inc(v_fst_2037_);
v_snd_2038_ = lean_ctor_get(v_resStartStop_2029_, 1);
lean_inc(v_snd_2038_);
lean_dec_ref(v_resStartStop_2029_);
v_fst_2045_ = lean_ctor_get(v_snd_2038_, 0);
lean_inc(v_fst_2045_);
v_snd_2046_ = lean_ctor_get(v_snd_2038_, 1);
lean_inc(v_snd_2046_);
lean_dec(v_snd_2038_);
v___x_2047_ = l_Lean_trace_profiler;
v___x_2048_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4(v_opts_2025_, v___x_2047_);
if (v___x_2048_ == 0)
{
v___y_2066_ = v___x_2048_;
goto v___jp_2065_;
}
else
{
lean_object* v___x_2102_; uint8_t v___x_2103_; 
v___x_2102_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2103_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4(v_opts_2025_, v___x_2102_);
if (v___x_2103_ == 0)
{
lean_object* v___x_2104_; lean_object* v___x_2105_; double v___x_2106_; double v___x_2107_; double v___x_2108_; 
v___x_2104_ = l_Lean_trace_profiler_threshold;
v___x_2105_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__8(v_opts_2025_, v___x_2104_);
v___x_2106_ = lean_float_of_nat(v___x_2105_);
v___x_2107_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__2);
v___x_2108_ = lean_float_div(v___x_2106_, v___x_2107_);
v___y_2097_ = v___x_2108_;
goto v___jp_2096_;
}
else
{
lean_object* v___x_2109_; lean_object* v___x_2110_; double v___x_2111_; 
v___x_2109_ = l_Lean_trace_profiler_threshold;
v___x_2110_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__8(v_opts_2025_, v___x_2109_);
v___x_2111_ = lean_float_of_nat(v___x_2110_);
v___y_2097_ = v___x_2111_;
goto v___jp_2096_;
}
}
v___jp_2039_:
{
lean_object* v___x_2043_; 
lean_inc(v___y_2040_);
v___x_2043_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5___redArg(v_oldTraces_2027_, v_data_2042_, v___y_2040_, v___y_2041_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_);
if (lean_obj_tag(v___x_2043_) == 0)
{
lean_object* v___x_2044_; 
lean_dec_ref_known(v___x_2043_, 1);
v___x_2044_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__6___redArg(v_fst_2037_);
return v___x_2044_;
}
else
{
lean_dec(v_fst_2037_);
return v___x_2043_;
}
}
v___jp_2049_:
{
uint8_t v_result_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; double v___x_2055_; lean_object* v_data_2056_; 
v_result_2052_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__7(v_fst_2037_);
v___x_2053_ = lean_box(v_result_2052_);
v___x_2054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2054_, 0, v___x_2053_);
v___x_2055_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__0);
lean_inc_ref(v_tag_2024_);
lean_inc_ref(v___x_2054_);
lean_inc(v_cls_2022_);
v_data_2056_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2056_, 0, v_cls_2022_);
lean_ctor_set(v_data_2056_, 1, v___x_2054_);
lean_ctor_set(v_data_2056_, 2, v_tag_2024_);
lean_ctor_set_float(v_data_2056_, sizeof(void*)*3, v___x_2055_);
lean_ctor_set_float(v_data_2056_, sizeof(void*)*3 + 8, v___x_2055_);
lean_ctor_set_uint8(v_data_2056_, sizeof(void*)*3 + 16, v_collapsed_2023_);
if (v___x_2048_ == 0)
{
lean_dec_ref_known(v___x_2054_, 1);
lean_dec(v_snd_2046_);
lean_dec(v_fst_2045_);
lean_dec_ref(v_tag_2024_);
lean_dec(v_cls_2022_);
v___y_2040_ = v___y_2050_;
v___y_2041_ = v_a_2051_;
v_data_2042_ = v_data_2056_;
goto v___jp_2039_;
}
else
{
lean_object* v_data_2057_; double v___x_2058_; double v___x_2059_; 
lean_dec_ref_known(v_data_2056_, 3);
v_data_2057_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2057_, 0, v_cls_2022_);
lean_ctor_set(v_data_2057_, 1, v___x_2054_);
lean_ctor_set(v_data_2057_, 2, v_tag_2024_);
v___x_2058_ = lean_unbox_float(v_fst_2045_);
lean_dec(v_fst_2045_);
lean_ctor_set_float(v_data_2057_, sizeof(void*)*3, v___x_2058_);
v___x_2059_ = lean_unbox_float(v_snd_2046_);
lean_dec(v_snd_2046_);
lean_ctor_set_float(v_data_2057_, sizeof(void*)*3 + 8, v___x_2059_);
lean_ctor_set_uint8(v_data_2057_, sizeof(void*)*3 + 16, v_collapsed_2023_);
v___y_2040_ = v___y_2050_;
v___y_2041_ = v_a_2051_;
v_data_2042_ = v_data_2057_;
goto v___jp_2039_;
}
}
v___jp_2060_:
{
lean_object* v_ref_2061_; lean_object* v___x_2062_; 
v_ref_2061_ = lean_ctor_get(v___y_2034_, 2);
lean_inc(v___y_2035_);
lean_inc_ref(v___y_2034_);
lean_inc(v___y_2033_);
lean_inc_ref(v___y_2032_);
lean_inc(v___y_2031_);
lean_inc_ref(v___y_2030_);
lean_inc(v_fst_2037_);
v___x_2062_ = lean_apply_8(v_msg_2028_, v_fst_2037_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_, lean_box(0));
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v_a_2063_; 
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_a_2063_);
lean_dec_ref_known(v___x_2062_, 1);
v___y_2050_ = v_ref_2061_;
v_a_2051_ = v_a_2063_;
goto v___jp_2049_;
}
else
{
lean_object* v___x_2064_; 
lean_dec_ref_known(v___x_2062_, 1);
v___x_2064_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__1);
v___y_2050_ = v_ref_2061_;
v_a_2051_ = v___x_2064_;
goto v___jp_2049_;
}
}
v___jp_2065_:
{
if (v_clsEnabled_2026_ == 0)
{
if (v___y_2066_ == 0)
{
lean_object* v___x_2067_; lean_object* v_traceState_2068_; lean_object* v_env_2069_; lean_object* v_nextMacroScope_2070_; lean_object* v_ngen_2071_; lean_object* v_auxDeclNGen_2072_; lean_object* v_cache_2073_; lean_object* v_messages_2074_; lean_object* v_infoState_2075_; lean_object* v_snapshotTasks_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2095_; 
lean_dec(v_snd_2046_);
lean_dec(v_fst_2045_);
lean_dec_ref(v_msg_2028_);
lean_dec_ref(v_tag_2024_);
lean_dec(v_cls_2022_);
v___x_2067_ = lean_st_ref_take(v___y_2035_);
v_traceState_2068_ = lean_ctor_get(v___x_2067_, 4);
v_env_2069_ = lean_ctor_get(v___x_2067_, 0);
v_nextMacroScope_2070_ = lean_ctor_get(v___x_2067_, 1);
v_ngen_2071_ = lean_ctor_get(v___x_2067_, 2);
v_auxDeclNGen_2072_ = lean_ctor_get(v___x_2067_, 3);
v_cache_2073_ = lean_ctor_get(v___x_2067_, 5);
v_messages_2074_ = lean_ctor_get(v___x_2067_, 6);
v_infoState_2075_ = lean_ctor_get(v___x_2067_, 7);
v_snapshotTasks_2076_ = lean_ctor_get(v___x_2067_, 8);
v_isSharedCheck_2095_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2078_ = v___x_2067_;
v_isShared_2079_ = v_isSharedCheck_2095_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_snapshotTasks_2076_);
lean_inc(v_infoState_2075_);
lean_inc(v_messages_2074_);
lean_inc(v_cache_2073_);
lean_inc(v_traceState_2068_);
lean_inc(v_auxDeclNGen_2072_);
lean_inc(v_ngen_2071_);
lean_inc(v_nextMacroScope_2070_);
lean_inc(v_env_2069_);
lean_dec(v___x_2067_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2095_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
uint64_t v_tid_2080_; lean_object* v_traces_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2094_; 
v_tid_2080_ = lean_ctor_get_uint64(v_traceState_2068_, sizeof(void*)*1);
v_traces_2081_ = lean_ctor_get(v_traceState_2068_, 0);
v_isSharedCheck_2094_ = !lean_is_exclusive(v_traceState_2068_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2083_ = v_traceState_2068_;
v_isShared_2084_ = v_isSharedCheck_2094_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_traces_2081_);
lean_dec(v_traceState_2068_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2094_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2085_; lean_object* v___x_2087_; 
v___x_2085_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2027_, v_traces_2081_);
lean_dec_ref(v_traces_2081_);
if (v_isShared_2084_ == 0)
{
lean_ctor_set(v___x_2083_, 0, v___x_2085_);
v___x_2087_ = v___x_2083_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v___x_2085_);
lean_ctor_set_uint64(v_reuseFailAlloc_2093_, sizeof(void*)*1, v_tid_2080_);
v___x_2087_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
lean_object* v___x_2089_; 
if (v_isShared_2079_ == 0)
{
lean_ctor_set(v___x_2078_, 4, v___x_2087_);
v___x_2089_ = v___x_2078_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_env_2069_);
lean_ctor_set(v_reuseFailAlloc_2092_, 1, v_nextMacroScope_2070_);
lean_ctor_set(v_reuseFailAlloc_2092_, 2, v_ngen_2071_);
lean_ctor_set(v_reuseFailAlloc_2092_, 3, v_auxDeclNGen_2072_);
lean_ctor_set(v_reuseFailAlloc_2092_, 4, v___x_2087_);
lean_ctor_set(v_reuseFailAlloc_2092_, 5, v_cache_2073_);
lean_ctor_set(v_reuseFailAlloc_2092_, 6, v_messages_2074_);
lean_ctor_set(v_reuseFailAlloc_2092_, 7, v_infoState_2075_);
lean_ctor_set(v_reuseFailAlloc_2092_, 8, v_snapshotTasks_2076_);
v___x_2089_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2090_ = lean_st_ref_put(v___y_2035_, v___x_2089_);
v___x_2091_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__6___redArg(v_fst_2037_);
return v___x_2091_;
}
}
}
}
}
else
{
goto v___jp_2060_;
}
}
else
{
goto v___jp_2060_;
}
}
v___jp_2096_:
{
double v___x_2098_; double v___x_2099_; double v___x_2100_; uint8_t v___x_2101_; 
v___x_2098_ = lean_unbox_float(v_snd_2046_);
v___x_2099_ = lean_unbox_float(v_fst_2045_);
v___x_2100_ = lean_float_sub(v___x_2098_, v___x_2099_);
v___x_2101_ = lean_float_decLt(v___y_2097_, v___x_2100_);
v___y_2066_ = v___x_2101_;
goto v___jp_2065_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___boxed(lean_object* v_cls_2112_, lean_object* v_collapsed_2113_, lean_object* v_tag_2114_, lean_object* v_opts_2115_, lean_object* v_clsEnabled_2116_, lean_object* v_oldTraces_2117_, lean_object* v_msg_2118_, lean_object* v_resStartStop_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_){
_start:
{
uint8_t v_collapsed_boxed_2127_; uint8_t v_clsEnabled_boxed_2128_; lean_object* v_res_2129_; 
v_collapsed_boxed_2127_ = lean_unbox(v_collapsed_2113_);
v_clsEnabled_boxed_2128_ = lean_unbox(v_clsEnabled_2116_);
v_res_2129_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3(v_cls_2112_, v_collapsed_boxed_2127_, v_tag_2114_, v_opts_2115_, v_clsEnabled_boxed_2128_, v_oldTraces_2117_, v_msg_2118_, v_resStartStop_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_);
lean_dec(v___y_2125_);
lean_dec_ref(v___y_2124_);
lean_dec(v___y_2123_);
lean_dec_ref(v___y_2122_);
lean_dec(v___y_2121_);
lean_dec_ref(v___y_2120_);
lean_dec_ref(v_opts_2115_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__13_spec__15___redArg(lean_object* v_x_2130_, lean_object* v_x_2131_, lean_object* v_x_2132_, lean_object* v_x_2133_){
_start:
{
lean_object* v_ks_2134_; lean_object* v_vs_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2159_; 
v_ks_2134_ = lean_ctor_get(v_x_2130_, 0);
v_vs_2135_ = lean_ctor_get(v_x_2130_, 1);
v_isSharedCheck_2159_ = !lean_is_exclusive(v_x_2130_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2137_ = v_x_2130_;
v_isShared_2138_ = v_isSharedCheck_2159_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_vs_2135_);
lean_inc(v_ks_2134_);
lean_dec(v_x_2130_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2159_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
lean_object* v___x_2139_; uint8_t v___x_2140_; 
v___x_2139_ = lean_array_get_size(v_ks_2134_);
v___x_2140_ = lean_nat_dec_lt(v_x_2131_, v___x_2139_);
if (v___x_2140_ == 0)
{
lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2144_; 
lean_dec(v_x_2131_);
v___x_2141_ = lean_array_push(v_ks_2134_, v_x_2132_);
v___x_2142_ = lean_array_push(v_vs_2135_, v_x_2133_);
if (v_isShared_2138_ == 0)
{
lean_ctor_set(v___x_2137_, 1, v___x_2142_);
lean_ctor_set(v___x_2137_, 0, v___x_2141_);
v___x_2144_ = v___x_2137_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v___x_2141_);
lean_ctor_set(v_reuseFailAlloc_2145_, 1, v___x_2142_);
v___x_2144_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
return v___x_2144_;
}
}
else
{
lean_object* v_k_x27_2146_; uint8_t v___x_2147_; 
v_k_x27_2146_ = lean_array_fget_borrowed(v_ks_2134_, v_x_2131_);
v___x_2147_ = l_Lean_instBEqMVarId_beq(v_x_2132_, v_k_x27_2146_);
if (v___x_2147_ == 0)
{
lean_object* v___x_2149_; 
if (v_isShared_2138_ == 0)
{
v___x_2149_ = v___x_2137_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_ks_2134_);
lean_ctor_set(v_reuseFailAlloc_2153_, 1, v_vs_2135_);
v___x_2149_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2150_ = lean_unsigned_to_nat(1u);
v___x_2151_ = lean_nat_add(v_x_2131_, v___x_2150_);
lean_dec(v_x_2131_);
v_x_2130_ = v___x_2149_;
v_x_2131_ = v___x_2151_;
goto _start;
}
}
else
{
lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2157_; 
v___x_2154_ = lean_array_fset(v_ks_2134_, v_x_2131_, v_x_2132_);
v___x_2155_ = lean_array_fset(v_vs_2135_, v_x_2131_, v_x_2133_);
lean_dec(v_x_2131_);
if (v_isShared_2138_ == 0)
{
lean_ctor_set(v___x_2137_, 1, v___x_2155_);
lean_ctor_set(v___x_2137_, 0, v___x_2154_);
v___x_2157_ = v___x_2137_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v___x_2154_);
lean_ctor_set(v_reuseFailAlloc_2158_, 1, v___x_2155_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
return v___x_2157_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__13___redArg(lean_object* v_n_2160_, lean_object* v_k_2161_, lean_object* v_v_2162_){
_start:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2163_ = lean_unsigned_to_nat(0u);
v___x_2164_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__13_spec__15___redArg(v_n_2160_, v___x_2163_, v_k_2161_, v_v_2162_);
return v___x_2164_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_2165_; 
v___x_2165_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_2165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___redArg(lean_object* v_x_2166_, size_t v_x_2167_, size_t v_x_2168_, lean_object* v_x_2169_, lean_object* v_x_2170_){
_start:
{
if (lean_obj_tag(v_x_2166_) == 0)
{
lean_object* v_es_2171_; size_t v___x_2172_; size_t v___x_2173_; lean_object* v_j_2174_; lean_object* v___x_2175_; uint8_t v___x_2176_; 
v_es_2171_ = lean_ctor_get(v_x_2166_, 0);
v___x_2172_ = ((size_t)31ULL);
v___x_2173_ = lean_usize_land(v_x_2167_, v___x_2172_);
v_j_2174_ = lean_usize_to_nat(v___x_2173_);
v___x_2175_ = lean_array_get_size(v_es_2171_);
v___x_2176_ = lean_nat_dec_lt(v_j_2174_, v___x_2175_);
if (v___x_2176_ == 0)
{
lean_dec(v_j_2174_);
lean_dec(v_x_2170_);
lean_dec(v_x_2169_);
return v_x_2166_;
}
else
{
lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2215_; 
lean_inc_ref(v_es_2171_);
v_isSharedCheck_2215_ = !lean_is_exclusive(v_x_2166_);
if (v_isSharedCheck_2215_ == 0)
{
lean_object* v_unused_2216_; 
v_unused_2216_ = lean_ctor_get(v_x_2166_, 0);
lean_dec(v_unused_2216_);
v___x_2178_ = v_x_2166_;
v_isShared_2179_ = v_isSharedCheck_2215_;
goto v_resetjp_2177_;
}
else
{
lean_dec(v_x_2166_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2215_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v_v_2180_; lean_object* v___x_2181_; lean_object* v_xs_x27_2182_; lean_object* v___y_2184_; 
v_v_2180_ = lean_array_fget(v_es_2171_, v_j_2174_);
v___x_2181_ = lean_box(0);
v_xs_x27_2182_ = lean_array_fset(v_es_2171_, v_j_2174_, v___x_2181_);
switch(lean_obj_tag(v_v_2180_))
{
case 0:
{
lean_object* v_key_2189_; lean_object* v_val_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2200_; 
v_key_2189_ = lean_ctor_get(v_v_2180_, 0);
v_val_2190_ = lean_ctor_get(v_v_2180_, 1);
v_isSharedCheck_2200_ = !lean_is_exclusive(v_v_2180_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2192_ = v_v_2180_;
v_isShared_2193_ = v_isSharedCheck_2200_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_val_2190_);
lean_inc(v_key_2189_);
lean_dec(v_v_2180_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2200_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
uint8_t v___x_2194_; 
v___x_2194_ = l_Lean_instBEqMVarId_beq(v_x_2169_, v_key_2189_);
if (v___x_2194_ == 0)
{
lean_object* v___x_2195_; lean_object* v___x_2196_; 
lean_del_object(v___x_2192_);
v___x_2195_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2189_, v_val_2190_, v_x_2169_, v_x_2170_);
v___x_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2195_);
v___y_2184_ = v___x_2196_;
goto v___jp_2183_;
}
else
{
lean_object* v___x_2198_; 
lean_dec(v_val_2190_);
lean_dec(v_key_2189_);
if (v_isShared_2193_ == 0)
{
lean_ctor_set(v___x_2192_, 1, v_x_2170_);
lean_ctor_set(v___x_2192_, 0, v_x_2169_);
v___x_2198_ = v___x_2192_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v_x_2169_);
lean_ctor_set(v_reuseFailAlloc_2199_, 1, v_x_2170_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
v___y_2184_ = v___x_2198_;
goto v___jp_2183_;
}
}
}
}
case 1:
{
lean_object* v_node_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2213_; 
v_node_2201_ = lean_ctor_get(v_v_2180_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v_v_2180_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2203_ = v_v_2180_;
v_isShared_2204_ = v_isSharedCheck_2213_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_node_2201_);
lean_dec(v_v_2180_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2213_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
size_t v___x_2205_; size_t v___x_2206_; size_t v___x_2207_; size_t v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2211_; 
v___x_2205_ = ((size_t)5ULL);
v___x_2206_ = lean_usize_shift_right(v_x_2167_, v___x_2205_);
v___x_2207_ = ((size_t)1ULL);
v___x_2208_ = lean_usize_add(v_x_2168_, v___x_2207_);
v___x_2209_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___redArg(v_node_2201_, v___x_2206_, v___x_2208_, v_x_2169_, v_x_2170_);
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 0, v___x_2209_);
v___x_2211_ = v___x_2203_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v___x_2209_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
v___y_2184_ = v___x_2211_;
goto v___jp_2183_;
}
}
}
default: 
{
lean_object* v___x_2214_; 
v___x_2214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2214_, 0, v_x_2169_);
lean_ctor_set(v___x_2214_, 1, v_x_2170_);
v___y_2184_ = v___x_2214_;
goto v___jp_2183_;
}
}
v___jp_2183_:
{
lean_object* v___x_2185_; lean_object* v___x_2187_; 
v___x_2185_ = lean_array_fset(v_xs_x27_2182_, v_j_2174_, v___y_2184_);
lean_dec(v_j_2174_);
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 0, v___x_2185_);
v___x_2187_ = v___x_2178_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v___x_2185_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
}
else
{
lean_object* v_ks_2217_; lean_object* v_vs_2218_; lean_object* v___x_2220_; uint8_t v_isShared_2221_; uint8_t v_isSharedCheck_2236_; 
v_ks_2217_ = lean_ctor_get(v_x_2166_, 0);
v_vs_2218_ = lean_ctor_get(v_x_2166_, 1);
v_isSharedCheck_2236_ = !lean_is_exclusive(v_x_2166_);
if (v_isSharedCheck_2236_ == 0)
{
v___x_2220_ = v_x_2166_;
v_isShared_2221_ = v_isSharedCheck_2236_;
goto v_resetjp_2219_;
}
else
{
lean_inc(v_vs_2218_);
lean_inc(v_ks_2217_);
lean_dec(v_x_2166_);
v___x_2220_ = lean_box(0);
v_isShared_2221_ = v_isSharedCheck_2236_;
goto v_resetjp_2219_;
}
v_resetjp_2219_:
{
lean_object* v___x_2223_; 
if (v_isShared_2221_ == 0)
{
v___x_2223_ = v___x_2220_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v_ks_2217_);
lean_ctor_set(v_reuseFailAlloc_2235_, 1, v_vs_2218_);
v___x_2223_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
lean_object* v_newNode_2224_; size_t v___x_2225_; uint8_t v___x_2226_; 
v_newNode_2224_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__13___redArg(v___x_2223_, v_x_2169_, v_x_2170_);
v___x_2225_ = ((size_t)7ULL);
v___x_2226_ = lean_usize_dec_le(v___x_2225_, v_x_2168_);
if (v___x_2226_ == 0)
{
lean_object* v___x_2227_; lean_object* v___x_2228_; uint8_t v___x_2229_; 
v___x_2227_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2224_);
v___x_2228_ = lean_unsigned_to_nat(4u);
v___x_2229_ = lean_nat_dec_lt(v___x_2227_, v___x_2228_);
lean_dec(v___x_2227_);
if (v___x_2229_ == 0)
{
lean_object* v_ks_2230_; lean_object* v_vs_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v_ks_2230_ = lean_ctor_get(v_newNode_2224_, 0);
lean_inc_ref(v_ks_2230_);
v_vs_2231_ = lean_ctor_get(v_newNode_2224_, 1);
lean_inc_ref(v_vs_2231_);
lean_dec_ref(v_newNode_2224_);
v___x_2232_ = lean_unsigned_to_nat(0u);
v___x_2233_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___redArg___closed__0);
v___x_2234_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__14___redArg(v_x_2168_, v_ks_2230_, v_vs_2231_, v___x_2232_, v___x_2233_);
lean_dec_ref(v_vs_2231_);
lean_dec_ref(v_ks_2230_);
return v___x_2234_;
}
else
{
return v_newNode_2224_;
}
}
else
{
return v_newNode_2224_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__14___redArg(size_t v_depth_2237_, lean_object* v_keys_2238_, lean_object* v_vals_2239_, lean_object* v_i_2240_, lean_object* v_entries_2241_){
_start:
{
lean_object* v___x_2242_; uint8_t v___x_2243_; 
v___x_2242_ = lean_array_get_size(v_keys_2238_);
v___x_2243_ = lean_nat_dec_lt(v_i_2240_, v___x_2242_);
if (v___x_2243_ == 0)
{
lean_dec(v_i_2240_);
return v_entries_2241_;
}
else
{
lean_object* v_k_2244_; lean_object* v_v_2245_; uint64_t v___x_2246_; size_t v_h_2247_; size_t v___x_2248_; lean_object* v___x_2249_; size_t v___x_2250_; size_t v___x_2251_; size_t v___x_2252_; size_t v_h_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
v_k_2244_ = lean_array_fget_borrowed(v_keys_2238_, v_i_2240_);
v_v_2245_ = lean_array_fget_borrowed(v_vals_2239_, v_i_2240_);
v___x_2246_ = l_Lean_instHashableMVarId_hash(v_k_2244_);
v_h_2247_ = lean_uint64_to_usize(v___x_2246_);
v___x_2248_ = ((size_t)5ULL);
v___x_2249_ = lean_unsigned_to_nat(1u);
v___x_2250_ = ((size_t)1ULL);
v___x_2251_ = lean_usize_sub(v_depth_2237_, v___x_2250_);
v___x_2252_ = lean_usize_mul(v___x_2248_, v___x_2251_);
v_h_2253_ = lean_usize_shift_right(v_h_2247_, v___x_2252_);
v___x_2254_ = lean_nat_add(v_i_2240_, v___x_2249_);
lean_dec(v_i_2240_);
lean_inc(v_v_2245_);
lean_inc(v_k_2244_);
v___x_2255_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___redArg(v_entries_2241_, v_h_2253_, v_depth_2237_, v_k_2244_, v_v_2245_);
v_i_2240_ = v___x_2254_;
v_entries_2241_ = v___x_2255_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__14___redArg___boxed(lean_object* v_depth_2257_, lean_object* v_keys_2258_, lean_object* v_vals_2259_, lean_object* v_i_2260_, lean_object* v_entries_2261_){
_start:
{
size_t v_depth_boxed_2262_; lean_object* v_res_2263_; 
v_depth_boxed_2262_ = lean_unbox_usize(v_depth_2257_);
lean_dec(v_depth_2257_);
v_res_2263_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__14___redArg(v_depth_boxed_2262_, v_keys_2258_, v_vals_2259_, v_i_2260_, v_entries_2261_);
lean_dec_ref(v_vals_2259_);
lean_dec_ref(v_keys_2258_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_x_2264_, lean_object* v_x_2265_, lean_object* v_x_2266_, lean_object* v_x_2267_, lean_object* v_x_2268_){
_start:
{
size_t v_x_18494__boxed_2269_; size_t v_x_18495__boxed_2270_; lean_object* v_res_2271_; 
v_x_18494__boxed_2269_ = lean_unbox_usize(v_x_2265_);
lean_dec(v_x_2265_);
v_x_18495__boxed_2270_ = lean_unbox_usize(v_x_2266_);
lean_dec(v_x_2266_);
v_res_2271_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___redArg(v_x_2264_, v_x_18494__boxed_2269_, v_x_18495__boxed_2270_, v_x_2267_, v_x_2268_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2___redArg(lean_object* v_x_2272_, lean_object* v_x_2273_, lean_object* v_x_2274_){
_start:
{
uint64_t v___x_2275_; size_t v___x_2276_; size_t v___x_2277_; lean_object* v___x_2278_; 
v___x_2275_ = l_Lean_instHashableMVarId_hash(v_x_2273_);
v___x_2276_ = lean_uint64_to_usize(v___x_2275_);
v___x_2277_ = ((size_t)1ULL);
v___x_2278_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___redArg(v_x_2272_, v___x_2276_, v___x_2277_, v_x_2273_, v_x_2274_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1___redArg(lean_object* v_mvarId_2279_, lean_object* v_val_2280_, lean_object* v___y_2281_){
_start:
{
lean_object* v___x_2283_; lean_object* v_mctx_2284_; lean_object* v_cache_2285_; lean_object* v_zetaDeltaFVarIds_2286_; lean_object* v_postponed_2287_; lean_object* v_diag_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2317_; 
v___x_2283_ = lean_st_ref_take(v___y_2281_);
v_mctx_2284_ = lean_ctor_get(v___x_2283_, 0);
v_cache_2285_ = lean_ctor_get(v___x_2283_, 1);
v_zetaDeltaFVarIds_2286_ = lean_ctor_get(v___x_2283_, 2);
v_postponed_2287_ = lean_ctor_get(v___x_2283_, 3);
v_diag_2288_ = lean_ctor_get(v___x_2283_, 4);
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2290_ = v___x_2283_;
v_isShared_2291_ = v_isSharedCheck_2317_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_diag_2288_);
lean_inc(v_postponed_2287_);
lean_inc(v_zetaDeltaFVarIds_2286_);
lean_inc(v_cache_2285_);
lean_inc(v_mctx_2284_);
lean_dec(v___x_2283_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2317_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v_depth_2292_; lean_object* v_levelAssignDepth_2293_; lean_object* v_lmvarCounter_2294_; lean_object* v_mvarCounter_2295_; lean_object* v_lDecls_2296_; lean_object* v_decls_2297_; lean_object* v_userNames_2298_; lean_object* v_lAssignment_2299_; lean_object* v_eAssignment_2300_; lean_object* v_dAssignment_2301_; lean_object* v_instanceTypedMVars_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2316_; 
v_depth_2292_ = lean_ctor_get(v_mctx_2284_, 0);
v_levelAssignDepth_2293_ = lean_ctor_get(v_mctx_2284_, 1);
v_lmvarCounter_2294_ = lean_ctor_get(v_mctx_2284_, 2);
v_mvarCounter_2295_ = lean_ctor_get(v_mctx_2284_, 3);
v_lDecls_2296_ = lean_ctor_get(v_mctx_2284_, 4);
v_decls_2297_ = lean_ctor_get(v_mctx_2284_, 5);
v_userNames_2298_ = lean_ctor_get(v_mctx_2284_, 6);
v_lAssignment_2299_ = lean_ctor_get(v_mctx_2284_, 7);
v_eAssignment_2300_ = lean_ctor_get(v_mctx_2284_, 8);
v_dAssignment_2301_ = lean_ctor_get(v_mctx_2284_, 9);
v_instanceTypedMVars_2302_ = lean_ctor_get(v_mctx_2284_, 10);
v_isSharedCheck_2316_ = !lean_is_exclusive(v_mctx_2284_);
if (v_isSharedCheck_2316_ == 0)
{
v___x_2304_ = v_mctx_2284_;
v_isShared_2305_ = v_isSharedCheck_2316_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_instanceTypedMVars_2302_);
lean_inc(v_dAssignment_2301_);
lean_inc(v_eAssignment_2300_);
lean_inc(v_lAssignment_2299_);
lean_inc(v_userNames_2298_);
lean_inc(v_decls_2297_);
lean_inc(v_lDecls_2296_);
lean_inc(v_mvarCounter_2295_);
lean_inc(v_lmvarCounter_2294_);
lean_inc(v_levelAssignDepth_2293_);
lean_inc(v_depth_2292_);
lean_dec(v_mctx_2284_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2316_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2309_; 
v___x_2306_ = lean_box(0);
v___x_2307_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2___redArg(v_eAssignment_2300_, v_mvarId_2279_, v_val_2280_);
if (v_isShared_2305_ == 0)
{
lean_ctor_set(v___x_2304_, 8, v___x_2307_);
v___x_2309_ = v___x_2304_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_depth_2292_);
lean_ctor_set(v_reuseFailAlloc_2315_, 1, v_levelAssignDepth_2293_);
lean_ctor_set(v_reuseFailAlloc_2315_, 2, v_lmvarCounter_2294_);
lean_ctor_set(v_reuseFailAlloc_2315_, 3, v_mvarCounter_2295_);
lean_ctor_set(v_reuseFailAlloc_2315_, 4, v_lDecls_2296_);
lean_ctor_set(v_reuseFailAlloc_2315_, 5, v_decls_2297_);
lean_ctor_set(v_reuseFailAlloc_2315_, 6, v_userNames_2298_);
lean_ctor_set(v_reuseFailAlloc_2315_, 7, v_lAssignment_2299_);
lean_ctor_set(v_reuseFailAlloc_2315_, 8, v___x_2307_);
lean_ctor_set(v_reuseFailAlloc_2315_, 9, v_dAssignment_2301_);
lean_ctor_set(v_reuseFailAlloc_2315_, 10, v_instanceTypedMVars_2302_);
v___x_2309_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
lean_object* v___x_2311_; 
if (v_isShared_2291_ == 0)
{
lean_ctor_set(v___x_2290_, 0, v___x_2309_);
v___x_2311_ = v___x_2290_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v___x_2309_);
lean_ctor_set(v_reuseFailAlloc_2314_, 1, v_cache_2285_);
lean_ctor_set(v_reuseFailAlloc_2314_, 2, v_zetaDeltaFVarIds_2286_);
lean_ctor_set(v_reuseFailAlloc_2314_, 3, v_postponed_2287_);
lean_ctor_set(v_reuseFailAlloc_2314_, 4, v_diag_2288_);
v___x_2311_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2312_ = lean_st_ref_put(v___y_2281_, v___x_2311_);
v___x_2313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2306_);
return v___x_2313_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1___redArg___boxed(lean_object* v_mvarId_2318_, lean_object* v_val_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_){
_start:
{
lean_object* v_res_2322_; 
v_res_2322_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1___redArg(v_mvarId_2318_, v_val_2319_, v___y_2320_);
lean_dec(v___y_2320_);
return v_res_2322_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3_spec__10___redArg(lean_object* v_keys_2323_, lean_object* v_i_2324_, lean_object* v_k_2325_){
_start:
{
lean_object* v___x_2326_; uint8_t v___x_2327_; 
v___x_2326_ = lean_array_get_size(v_keys_2323_);
v___x_2327_ = lean_nat_dec_lt(v_i_2324_, v___x_2326_);
if (v___x_2327_ == 0)
{
lean_dec(v_i_2324_);
return v___x_2327_;
}
else
{
lean_object* v_k_x27_2328_; uint8_t v___x_2329_; 
v_k_x27_2328_ = lean_array_fget_borrowed(v_keys_2323_, v_i_2324_);
v___x_2329_ = l_Lean_instBEqMVarId_beq(v_k_2325_, v_k_x27_2328_);
if (v___x_2329_ == 0)
{
lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2330_ = lean_unsigned_to_nat(1u);
v___x_2331_ = lean_nat_add(v_i_2324_, v___x_2330_);
lean_dec(v_i_2324_);
v_i_2324_ = v___x_2331_;
goto _start;
}
else
{
lean_dec(v_i_2324_);
return v___x_2327_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3_spec__10___redArg___boxed(lean_object* v_keys_2333_, lean_object* v_i_2334_, lean_object* v_k_2335_){
_start:
{
uint8_t v_res_2336_; lean_object* v_r_2337_; 
v_res_2336_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3_spec__10___redArg(v_keys_2333_, v_i_2334_, v_k_2335_);
lean_dec(v_k_2335_);
lean_dec_ref(v_keys_2333_);
v_r_2337_ = lean_box(v_res_2336_);
return v_r_2337_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3___redArg(lean_object* v_x_2338_, size_t v_x_2339_, lean_object* v_x_2340_){
_start:
{
if (lean_obj_tag(v_x_2338_) == 0)
{
lean_object* v_es_2341_; lean_object* v___x_2342_; size_t v___x_2343_; size_t v___x_2344_; lean_object* v_j_2345_; lean_object* v___x_2346_; 
v_es_2341_ = lean_ctor_get(v_x_2338_, 0);
v___x_2342_ = lean_box(2);
v___x_2343_ = ((size_t)31ULL);
v___x_2344_ = lean_usize_land(v_x_2339_, v___x_2343_);
v_j_2345_ = lean_usize_to_nat(v___x_2344_);
v___x_2346_ = lean_array_get_borrowed(v___x_2342_, v_es_2341_, v_j_2345_);
lean_dec(v_j_2345_);
switch(lean_obj_tag(v___x_2346_))
{
case 0:
{
lean_object* v_key_2347_; uint8_t v___x_2348_; 
v_key_2347_ = lean_ctor_get(v___x_2346_, 0);
v___x_2348_ = l_Lean_instBEqMVarId_beq(v_x_2340_, v_key_2347_);
return v___x_2348_;
}
case 1:
{
lean_object* v_node_2349_; size_t v___x_2350_; size_t v___x_2351_; 
v_node_2349_ = lean_ctor_get(v___x_2346_, 0);
v___x_2350_ = ((size_t)5ULL);
v___x_2351_ = lean_usize_shift_right(v_x_2339_, v___x_2350_);
v_x_2338_ = v_node_2349_;
v_x_2339_ = v___x_2351_;
goto _start;
}
default: 
{
uint8_t v___x_2353_; 
v___x_2353_ = 0;
return v___x_2353_;
}
}
}
else
{
lean_object* v_ks_2354_; lean_object* v___x_2355_; uint8_t v___x_2356_; 
v_ks_2354_ = lean_ctor_get(v_x_2338_, 0);
v___x_2355_ = lean_unsigned_to_nat(0u);
v___x_2356_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3_spec__10___redArg(v_ks_2354_, v___x_2355_, v_x_2340_);
return v___x_2356_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_x_2357_, lean_object* v_x_2358_, lean_object* v_x_2359_){
_start:
{
size_t v_x_18716__boxed_2360_; uint8_t v_res_2361_; lean_object* v_r_2362_; 
v_x_18716__boxed_2360_ = lean_unbox_usize(v_x_2358_);
lean_dec(v_x_2358_);
v_res_2361_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3___redArg(v_x_2357_, v_x_18716__boxed_2360_, v_x_2359_);
lean_dec(v_x_2359_);
lean_dec_ref(v_x_2357_);
v_r_2362_ = lean_box(v_res_2361_);
return v_r_2362_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0___redArg(lean_object* v_x_2363_, lean_object* v_x_2364_){
_start:
{
uint64_t v___x_2365_; size_t v___x_2366_; uint8_t v___x_2367_; 
v___x_2365_ = l_Lean_instHashableMVarId_hash(v_x_2364_);
v___x_2366_ = lean_uint64_to_usize(v___x_2365_);
v___x_2367_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3___redArg(v_x_2363_, v___x_2366_, v_x_2364_);
return v___x_2367_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0___redArg___boxed(lean_object* v_x_2368_, lean_object* v_x_2369_){
_start:
{
uint8_t v_res_2370_; lean_object* v_r_2371_; 
v_res_2370_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0___redArg(v_x_2368_, v_x_2369_);
lean_dec(v_x_2369_);
lean_dec_ref(v_x_2368_);
v_r_2371_ = lean_box(v_res_2370_);
return v_r_2371_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0___redArg(lean_object* v_mvarId_2372_, lean_object* v___y_2373_){
_start:
{
lean_object* v___x_2375_; lean_object* v_mctx_2376_; lean_object* v_eAssignment_2377_; uint8_t v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; 
v___x_2375_ = lean_st_ref_get(v___y_2373_);
v_mctx_2376_ = lean_ctor_get(v___x_2375_, 0);
lean_inc_ref(v_mctx_2376_);
lean_dec(v___x_2375_);
v_eAssignment_2377_ = lean_ctor_get(v_mctx_2376_, 8);
lean_inc_ref(v_eAssignment_2377_);
lean_dec_ref(v_mctx_2376_);
v___x_2378_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0___redArg(v_eAssignment_2377_, v_mvarId_2372_);
lean_dec_ref(v_eAssignment_2377_);
v___x_2379_ = lean_box(v___x_2378_);
v___x_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2379_);
return v___x_2380_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0___redArg___boxed(lean_object* v_mvarId_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_){
_start:
{
lean_object* v_res_2384_; 
v_res_2384_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0___redArg(v_mvarId_2381_, v___y_2382_);
lean_dec(v___y_2382_);
lean_dec(v_mvarId_2381_);
return v_res_2384_;
}
}
static double _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2385_; double v___x_2386_; 
v___x_2385_ = lean_unsigned_to_nat(1000000000u);
v___x_2386_ = lean_float_of_nat(v___x_2385_);
return v___x_2386_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__2(void){
_start:
{
lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2388_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__1));
v___x_2389_ = l_Lean_stringToMessageData(v___x_2388_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1(lean_object* v___x_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_){
_start:
{
lean_object* v___x_2398_; 
v___x_2398_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0___redArg(v___x_2390_, v___y_2394_);
if (lean_obj_tag(v___x_2398_) == 0)
{
lean_object* v_a_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2570_; 
v_a_2399_ = lean_ctor_get(v___x_2398_, 0);
v_isSharedCheck_2570_ = !lean_is_exclusive(v___x_2398_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2401_ = v___x_2398_;
v_isShared_2402_ = v_isSharedCheck_2570_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_a_2399_);
lean_dec(v___x_2398_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2570_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
uint8_t v___x_2403_; 
v___x_2403_ = lean_unbox(v_a_2399_);
lean_dec(v_a_2399_);
if (v___x_2403_ == 0)
{
uint8_t v___x_2404_; lean_object* v___x_2405_; 
lean_del_object(v___x_2401_);
v___x_2404_ = 1;
lean_inc(v___x_2390_);
v___x_2405_ = l_Lean_MVarId_getType(v___x_2390_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
if (lean_obj_tag(v___x_2405_) == 0)
{
lean_object* v_toCold_2406_; lean_object* v_options_2407_; uint8_t v_hasTrace_2408_; 
v_toCold_2406_ = lean_ctor_get(v___y_2395_, 0);
v_options_2407_ = lean_ctor_get(v_toCold_2406_, 2);
v_hasTrace_2408_ = lean_ctor_get_uint8(v_options_2407_, sizeof(void*)*1);
if (v_hasTrace_2408_ == 0)
{
lean_object* v_a_2409_; lean_object* v___x_2410_; 
v_a_2409_ = lean_ctor_get(v___x_2405_, 0);
lean_inc(v_a_2409_);
lean_dec_ref_known(v___x_2405_, 1);
v___x_2410_ = l_Lean_Meta_mkDefault(v_a_2409_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
if (lean_obj_tag(v___x_2410_) == 0)
{
lean_object* v_a_2411_; lean_object* v___x_2412_; 
v_a_2411_ = lean_ctor_get(v___x_2410_, 0);
lean_inc(v_a_2411_);
lean_dec_ref_known(v___x_2410_, 1);
v___x_2412_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1___redArg(v___x_2390_, v_a_2411_, v___y_2394_);
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2420_; 
v_isSharedCheck_2420_ = !lean_is_exclusive(v___x_2412_);
if (v_isSharedCheck_2420_ == 0)
{
lean_object* v_unused_2421_; 
v_unused_2421_ = lean_ctor_get(v___x_2412_, 0);
lean_dec(v_unused_2421_);
v___x_2414_ = v___x_2412_;
v_isShared_2415_ = v_isSharedCheck_2420_;
goto v_resetjp_2413_;
}
else
{
lean_dec(v___x_2412_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2420_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
lean_object* v___x_2416_; lean_object* v___x_2418_; 
v___x_2416_ = lean_box(0);
if (v_isShared_2415_ == 0)
{
lean_ctor_set(v___x_2414_, 0, v___x_2416_);
v___x_2418_ = v___x_2414_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v___x_2416_);
v___x_2418_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
return v___x_2418_;
}
}
}
else
{
return v___x_2412_;
}
}
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2429_; 
lean_dec(v___x_2390_);
v_a_2422_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2424_ = v___x_2410_;
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2410_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2427_; 
if (v_isShared_2425_ == 0)
{
v___x_2427_ = v___x_2424_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_a_2422_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
}
else
{
lean_object* v_a_2430_; lean_object* v_inheritedTraceOptions_2431_; lean_object* v___f_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; uint8_t v___x_2436_; lean_object* v___y_2438_; lean_object* v___y_2439_; lean_object* v_a_2440_; lean_object* v___y_2453_; lean_object* v___y_2454_; lean_object* v_a_2455_; lean_object* v___y_2458_; lean_object* v___y_2459_; lean_object* v_a_2460_; lean_object* v___y_2463_; lean_object* v___y_2464_; lean_object* v___y_2465_; lean_object* v___y_2469_; lean_object* v___y_2470_; lean_object* v_a_2471_; lean_object* v___y_2481_; lean_object* v___y_2482_; lean_object* v_a_2483_; lean_object* v___y_2486_; lean_object* v___y_2487_; lean_object* v_a_2488_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2493_; 
v_a_2430_ = lean_ctor_get(v___x_2405_, 0);
lean_inc_n(v_a_2430_, 2);
lean_dec_ref_known(v___x_2405_, 1);
v_inheritedTraceOptions_2431_ = lean_ctor_get(v_toCold_2406_, 11);
v___f_2432_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__0___boxed), 9, 1);
lean_closure_set(v___f_2432_, 0, v_a_2430_);
v___x_2433_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3));
v___x_2434_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__1));
v___x_2435_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6);
v___x_2436_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2431_, v_options_2407_, v___x_2435_);
if (v___x_2436_ == 0)
{
lean_object* v___x_2531_; uint8_t v___x_2532_; 
v___x_2531_ = l_Lean_trace_profiler;
v___x_2532_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4(v_options_2407_, v___x_2531_);
if (v___x_2532_ == 0)
{
lean_object* v___x_2533_; 
lean_dec_ref(v___f_2432_);
v___x_2533_ = l_Lean_Meta_mkDefault(v_a_2430_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_object* v_a_2534_; lean_object* v___x_2535_; 
v_a_2534_ = lean_ctor_get(v___x_2533_, 0);
lean_inc_n(v_a_2534_, 2);
lean_dec_ref_known(v___x_2533_, 1);
v___x_2535_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1___redArg(v___x_2390_, v_a_2534_, v___y_2394_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2548_; 
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2548_ == 0)
{
lean_object* v_unused_2549_; 
v_unused_2549_ = lean_ctor_get(v___x_2535_, 0);
lean_dec(v_unused_2549_);
v___x_2537_ = v___x_2535_;
v_isShared_2538_ = v_isSharedCheck_2548_;
goto v_resetjp_2536_;
}
else
{
lean_dec(v___x_2535_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2548_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
if (v___x_2436_ == 0)
{
lean_object* v___x_2539_; lean_object* v___x_2541_; 
lean_dec(v_a_2534_);
v___x_2539_ = lean_box(0);
if (v_isShared_2538_ == 0)
{
lean_ctor_set(v___x_2537_, 0, v___x_2539_);
v___x_2541_ = v___x_2537_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v___x_2539_);
v___x_2541_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
return v___x_2541_;
}
}
else
{
lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; 
lean_del_object(v___x_2537_);
v___x_2543_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__2);
v___x_2544_ = lean_unsigned_to_nat(30u);
v___x_2545_ = l_Lean_inlineExprTrailing(v_a_2534_, v___x_2544_);
v___x_2546_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2543_);
lean_ctor_set(v___x_2546_, 1, v___x_2545_);
v___x_2547_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg(v___x_2433_, v___x_2546_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
return v___x_2547_;
}
}
}
else
{
lean_dec(v_a_2534_);
return v___x_2535_;
}
}
else
{
lean_object* v_a_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2557_; 
lean_dec(v___x_2390_);
v_a_2550_ = lean_ctor_get(v___x_2533_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2552_ = v___x_2533_;
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v___x_2533_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v___x_2555_; 
if (v_isShared_2553_ == 0)
{
v___x_2555_ = v___x_2552_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v_a_2550_);
v___x_2555_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
return v___x_2555_;
}
}
}
}
else
{
goto v___jp_2496_;
}
}
else
{
goto v___jp_2496_;
}
v___jp_2437_:
{
lean_object* v___x_2441_; double v___x_2442_; double v___x_2443_; double v___x_2444_; double v___x_2445_; double v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2441_ = lean_io_mono_nanos_now();
v___x_2442_ = lean_float_of_nat(v___y_2439_);
v___x_2443_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__0);
v___x_2444_ = lean_float_div(v___x_2442_, v___x_2443_);
v___x_2445_ = lean_float_of_nat(v___x_2441_);
v___x_2446_ = lean_float_div(v___x_2445_, v___x_2443_);
v___x_2447_ = lean_box_float(v___x_2444_);
v___x_2448_ = lean_box_float(v___x_2446_);
v___x_2449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2449_, 0, v___x_2447_);
lean_ctor_set(v___x_2449_, 1, v___x_2448_);
v___x_2450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2450_, 0, v_a_2440_);
lean_ctor_set(v___x_2450_, 1, v___x_2449_);
v___x_2451_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3(v___x_2433_, v___x_2404_, v___x_2434_, v_options_2407_, v___x_2436_, v___y_2438_, v___f_2432_, v___x_2450_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
return v___x_2451_;
}
v___jp_2452_:
{
lean_object* v___x_2456_; 
v___x_2456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2456_, 0, v_a_2455_);
v___y_2438_ = v___y_2453_;
v___y_2439_ = v___y_2454_;
v_a_2440_ = v___x_2456_;
goto v___jp_2437_;
}
v___jp_2457_:
{
lean_object* v___x_2461_; 
v___x_2461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2461_, 0, v_a_2460_);
v___y_2438_ = v___y_2458_;
v___y_2439_ = v___y_2459_;
v_a_2440_ = v___x_2461_;
goto v___jp_2437_;
}
v___jp_2462_:
{
if (lean_obj_tag(v___y_2465_) == 0)
{
lean_object* v_a_2466_; 
v_a_2466_ = lean_ctor_get(v___y_2465_, 0);
lean_inc(v_a_2466_);
lean_dec_ref_known(v___y_2465_, 1);
v___y_2458_ = v___y_2463_;
v___y_2459_ = v___y_2464_;
v_a_2460_ = v_a_2466_;
goto v___jp_2457_;
}
else
{
lean_object* v_a_2467_; 
v_a_2467_ = lean_ctor_get(v___y_2465_, 0);
lean_inc(v_a_2467_);
lean_dec_ref_known(v___y_2465_, 1);
v___y_2453_ = v___y_2463_;
v___y_2454_ = v___y_2464_;
v_a_2455_ = v_a_2467_;
goto v___jp_2452_;
}
}
v___jp_2468_:
{
lean_object* v___x_2472_; double v___x_2473_; double v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; 
v___x_2472_ = lean_io_get_num_heartbeats();
v___x_2473_ = lean_float_of_nat(v___y_2469_);
v___x_2474_ = lean_float_of_nat(v___x_2472_);
v___x_2475_ = lean_box_float(v___x_2473_);
v___x_2476_ = lean_box_float(v___x_2474_);
v___x_2477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2475_);
lean_ctor_set(v___x_2477_, 1, v___x_2476_);
v___x_2478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2478_, 0, v_a_2471_);
lean_ctor_set(v___x_2478_, 1, v___x_2477_);
v___x_2479_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3(v___x_2433_, v___x_2404_, v___x_2434_, v_options_2407_, v___x_2436_, v___y_2470_, v___f_2432_, v___x_2478_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
return v___x_2479_;
}
v___jp_2480_:
{
lean_object* v___x_2484_; 
v___x_2484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2484_, 0, v_a_2483_);
v___y_2469_ = v___y_2481_;
v___y_2470_ = v___y_2482_;
v_a_2471_ = v___x_2484_;
goto v___jp_2468_;
}
v___jp_2485_:
{
lean_object* v___x_2489_; 
v___x_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2489_, 0, v_a_2488_);
v___y_2469_ = v___y_2486_;
v___y_2470_ = v___y_2487_;
v_a_2471_ = v___x_2489_;
goto v___jp_2468_;
}
v___jp_2490_:
{
if (lean_obj_tag(v___y_2493_) == 0)
{
lean_object* v_a_2494_; 
v_a_2494_ = lean_ctor_get(v___y_2493_, 0);
lean_inc(v_a_2494_);
lean_dec_ref_known(v___y_2493_, 1);
v___y_2486_ = v___y_2491_;
v___y_2487_ = v___y_2492_;
v_a_2488_ = v_a_2494_;
goto v___jp_2485_;
}
else
{
lean_object* v_a_2495_; 
v_a_2495_ = lean_ctor_get(v___y_2493_, 0);
lean_inc(v_a_2495_);
lean_dec_ref_known(v___y_2493_, 1);
v___y_2481_ = v___y_2491_;
v___y_2482_ = v___y_2492_;
v_a_2483_ = v_a_2495_;
goto v___jp_2480_;
}
}
v___jp_2496_:
{
lean_object* v___x_2497_; 
v___x_2497_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg(v___y_2396_);
if (lean_obj_tag(v___x_2497_) == 0)
{
lean_object* v_a_2498_; lean_object* v___x_2499_; uint8_t v___x_2500_; 
v_a_2498_ = lean_ctor_get(v___x_2497_, 0);
lean_inc(v_a_2498_);
lean_dec_ref_known(v___x_2497_, 1);
v___x_2499_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2500_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4(v_options_2407_, v___x_2499_);
if (v___x_2500_ == 0)
{
lean_object* v___x_2501_; lean_object* v___x_2502_; 
v___x_2501_ = lean_io_mono_nanos_now();
v___x_2502_ = l_Lean_Meta_mkDefault(v_a_2430_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
if (lean_obj_tag(v___x_2502_) == 0)
{
lean_object* v_a_2503_; lean_object* v___x_2504_; 
v_a_2503_ = lean_ctor_get(v___x_2502_, 0);
lean_inc_n(v_a_2503_, 2);
lean_dec_ref_known(v___x_2502_, 1);
v___x_2504_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1___redArg(v___x_2390_, v_a_2503_, v___y_2394_);
if (lean_obj_tag(v___x_2504_) == 0)
{
lean_dec_ref_known(v___x_2504_, 1);
if (v___x_2436_ == 0)
{
lean_object* v___x_2505_; 
lean_dec(v_a_2503_);
v___x_2505_ = lean_box(0);
v___y_2458_ = v_a_2498_;
v___y_2459_ = v___x_2501_;
v_a_2460_ = v___x_2505_;
goto v___jp_2457_;
}
else
{
lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
v___x_2506_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__2);
v___x_2507_ = lean_unsigned_to_nat(30u);
v___x_2508_ = l_Lean_inlineExprTrailing(v_a_2503_, v___x_2507_);
v___x_2509_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2506_);
lean_ctor_set(v___x_2509_, 1, v___x_2508_);
v___x_2510_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg(v___x_2433_, v___x_2509_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
v___y_2463_ = v_a_2498_;
v___y_2464_ = v___x_2501_;
v___y_2465_ = v___x_2510_;
goto v___jp_2462_;
}
}
else
{
lean_dec(v_a_2503_);
v___y_2463_ = v_a_2498_;
v___y_2464_ = v___x_2501_;
v___y_2465_ = v___x_2504_;
goto v___jp_2462_;
}
}
else
{
lean_object* v_a_2511_; 
lean_dec(v___x_2390_);
v_a_2511_ = lean_ctor_get(v___x_2502_, 0);
lean_inc(v_a_2511_);
lean_dec_ref_known(v___x_2502_, 1);
v___y_2453_ = v_a_2498_;
v___y_2454_ = v___x_2501_;
v_a_2455_ = v_a_2511_;
goto v___jp_2452_;
}
}
else
{
lean_object* v___x_2512_; lean_object* v___x_2513_; 
v___x_2512_ = lean_io_get_num_heartbeats();
v___x_2513_ = l_Lean_Meta_mkDefault(v_a_2430_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
if (lean_obj_tag(v___x_2513_) == 0)
{
lean_object* v_a_2514_; lean_object* v___x_2515_; 
v_a_2514_ = lean_ctor_get(v___x_2513_, 0);
lean_inc_n(v_a_2514_, 2);
lean_dec_ref_known(v___x_2513_, 1);
v___x_2515_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1___redArg(v___x_2390_, v_a_2514_, v___y_2394_);
if (lean_obj_tag(v___x_2515_) == 0)
{
lean_dec_ref_known(v___x_2515_, 1);
if (v___x_2436_ == 0)
{
lean_object* v___x_2516_; 
lean_dec(v_a_2514_);
v___x_2516_ = lean_box(0);
v___y_2486_ = v___x_2512_;
v___y_2487_ = v_a_2498_;
v_a_2488_ = v___x_2516_;
goto v___jp_2485_;
}
else
{
lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2517_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__2);
v___x_2518_ = lean_unsigned_to_nat(30u);
v___x_2519_ = l_Lean_inlineExprTrailing(v_a_2514_, v___x_2518_);
v___x_2520_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2520_, 0, v___x_2517_);
lean_ctor_set(v___x_2520_, 1, v___x_2519_);
v___x_2521_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg(v___x_2433_, v___x_2520_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
v___y_2491_ = v___x_2512_;
v___y_2492_ = v_a_2498_;
v___y_2493_ = v___x_2521_;
goto v___jp_2490_;
}
}
else
{
lean_dec(v_a_2514_);
v___y_2491_ = v___x_2512_;
v___y_2492_ = v_a_2498_;
v___y_2493_ = v___x_2515_;
goto v___jp_2490_;
}
}
else
{
lean_object* v_a_2522_; 
lean_dec(v___x_2390_);
v_a_2522_ = lean_ctor_get(v___x_2513_, 0);
lean_inc(v_a_2522_);
lean_dec_ref_known(v___x_2513_, 1);
v___y_2481_ = v___x_2512_;
v___y_2482_ = v_a_2498_;
v_a_2483_ = v_a_2522_;
goto v___jp_2480_;
}
}
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2530_; 
lean_dec_ref(v___f_2432_);
lean_dec(v_a_2430_);
lean_dec(v___x_2390_);
v_a_2523_ = lean_ctor_get(v___x_2497_, 0);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2497_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2525_ = v___x_2497_;
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_a_2523_);
lean_dec(v___x_2497_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_a_2523_);
v___x_2528_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
return v___x_2528_;
}
}
}
}
}
}
else
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2565_; 
lean_dec(v___x_2390_);
v_a_2558_ = lean_ctor_get(v___x_2405_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v___x_2405_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2560_ = v___x_2405_;
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___x_2405_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2563_; 
if (v_isShared_2561_ == 0)
{
v___x_2563_ = v___x_2560_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v_a_2558_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
return v___x_2563_;
}
}
}
}
else
{
lean_object* v___x_2566_; lean_object* v___x_2568_; 
lean_dec(v___x_2390_);
v___x_2566_ = lean_box(0);
if (v_isShared_2402_ == 0)
{
lean_ctor_set(v___x_2401_, 0, v___x_2566_);
v___x_2568_ = v___x_2401_;
goto v_reusejp_2567_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v___x_2566_);
v___x_2568_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2567_;
}
v_reusejp_2567_:
{
return v___x_2568_;
}
}
}
}
else
{
lean_object* v_a_2571_; lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2578_; 
lean_dec(v___x_2390_);
v_a_2571_ = lean_ctor_get(v___x_2398_, 0);
v_isSharedCheck_2578_ = !lean_is_exclusive(v___x_2398_);
if (v_isSharedCheck_2578_ == 0)
{
v___x_2573_ = v___x_2398_;
v_isShared_2574_ = v_isSharedCheck_2578_;
goto v_resetjp_2572_;
}
else
{
lean_inc(v_a_2571_);
lean_dec(v___x_2398_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2578_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
lean_object* v___x_2576_; 
if (v_isShared_2574_ == 0)
{
v___x_2576_ = v___x_2573_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v_a_2571_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
return v___x_2576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___boxed(lean_object* v___x_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_){
_start:
{
lean_object* v_res_2587_; 
v_res_2587_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1(v___x_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_);
lean_dec(v___y_2585_);
lean_dec_ref(v___y_2584_);
lean_dec(v___y_2583_);
lean_dec_ref(v___y_2582_);
lean_dec(v___y_2581_);
lean_dec_ref(v___y_2580_);
return v_res_2587_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5(lean_object* v_as_2588_, size_t v_i_2589_, size_t v_stop_2590_, lean_object* v_b_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_){
_start:
{
uint8_t v___x_2599_; 
v___x_2599_ = lean_usize_dec_eq(v_i_2589_, v_stop_2590_);
if (v___x_2599_ == 0)
{
lean_object* v___x_2600_; lean_object* v___f_2601_; lean_object* v___x_2602_; 
v___x_2600_ = lean_array_uget_borrowed(v_as_2588_, v_i_2589_);
lean_inc_n(v___x_2600_, 2);
v___f_2601_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___boxed), 8, 1);
lean_closure_set(v___f_2601_, 0, v___x_2600_);
v___x_2602_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__4___redArg(v___x_2600_, v___f_2601_, v___y_2592_, v___y_2593_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_);
if (lean_obj_tag(v___x_2602_) == 0)
{
lean_object* v_a_2603_; size_t v___x_2604_; size_t v___x_2605_; 
v_a_2603_ = lean_ctor_get(v___x_2602_, 0);
lean_inc(v_a_2603_);
lean_dec_ref_known(v___x_2602_, 1);
v___x_2604_ = ((size_t)1ULL);
v___x_2605_ = lean_usize_add(v_i_2589_, v___x_2604_);
v_i_2589_ = v___x_2605_;
v_b_2591_ = v_a_2603_;
goto _start;
}
else
{
return v___x_2602_;
}
}
else
{
lean_object* v___x_2607_; 
v___x_2607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2607_, 0, v_b_2591_);
return v___x_2607_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___boxed(lean_object* v_as_2608_, lean_object* v_i_2609_, lean_object* v_stop_2610_, lean_object* v_b_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_){
_start:
{
size_t v_i_boxed_2619_; size_t v_stop_boxed_2620_; lean_object* v_res_2621_; 
v_i_boxed_2619_ = lean_unbox_usize(v_i_2609_);
lean_dec(v_i_2609_);
v_stop_boxed_2620_ = lean_unbox_usize(v_stop_2610_);
lean_dec(v_stop_2610_);
v_res_2621_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5(v_as_2608_, v_i_boxed_2619_, v_stop_boxed_2620_, v_b_2611_, v___y_2612_, v___y_2613_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_);
lean_dec(v___y_2617_);
lean_dec_ref(v___y_2616_);
lean_dec(v___y_2615_);
lean_dec_ref(v___y_2614_);
lean_dec(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec_ref(v_as_2608_);
return v_res_2621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault(lean_object* v_e_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_){
_start:
{
lean_object* v___x_2630_; 
v___x_2630_ = l_Lean_Meta_getMVarsNoDelayed(v_e_2622_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_);
if (lean_obj_tag(v___x_2630_) == 0)
{
lean_object* v_a_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2652_; 
v_a_2631_ = lean_ctor_get(v___x_2630_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2630_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2633_ = v___x_2630_;
v_isShared_2634_ = v_isSharedCheck_2652_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_a_2631_);
lean_dec(v___x_2630_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2652_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; uint8_t v___x_2638_; 
v___x_2635_ = lean_unsigned_to_nat(0u);
v___x_2636_ = lean_array_get_size(v_a_2631_);
v___x_2637_ = lean_box(0);
v___x_2638_ = lean_nat_dec_lt(v___x_2635_, v___x_2636_);
if (v___x_2638_ == 0)
{
lean_object* v___x_2640_; 
lean_dec(v_a_2631_);
if (v_isShared_2634_ == 0)
{
lean_ctor_set(v___x_2633_, 0, v___x_2637_);
v___x_2640_ = v___x_2633_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v___x_2637_);
v___x_2640_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
return v___x_2640_;
}
}
else
{
uint8_t v___x_2642_; 
v___x_2642_ = lean_nat_dec_le(v___x_2636_, v___x_2636_);
if (v___x_2642_ == 0)
{
if (v___x_2638_ == 0)
{
lean_object* v___x_2644_; 
lean_dec(v_a_2631_);
if (v_isShared_2634_ == 0)
{
lean_ctor_set(v___x_2633_, 0, v___x_2637_);
v___x_2644_ = v___x_2633_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2645_; 
v_reuseFailAlloc_2645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2645_, 0, v___x_2637_);
v___x_2644_ = v_reuseFailAlloc_2645_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
return v___x_2644_;
}
}
else
{
size_t v___x_2646_; size_t v___x_2647_; lean_object* v___x_2648_; 
lean_del_object(v___x_2633_);
v___x_2646_ = ((size_t)0ULL);
v___x_2647_ = lean_usize_of_nat(v___x_2636_);
v___x_2648_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5(v_a_2631_, v___x_2646_, v___x_2647_, v___x_2637_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_);
lean_dec(v_a_2631_);
return v___x_2648_;
}
}
else
{
size_t v___x_2649_; size_t v___x_2650_; lean_object* v___x_2651_; 
lean_del_object(v___x_2633_);
v___x_2649_ = ((size_t)0ULL);
v___x_2650_ = lean_usize_of_nat(v___x_2636_);
v___x_2651_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5(v_a_2631_, v___x_2649_, v___x_2650_, v___x_2637_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_);
lean_dec(v_a_2631_);
return v___x_2651_;
}
}
}
}
else
{
lean_object* v_a_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2660_; 
v_a_2653_ = lean_ctor_get(v___x_2630_, 0);
v_isSharedCheck_2660_ = !lean_is_exclusive(v___x_2630_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2655_ = v___x_2630_;
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_a_2653_);
lean_dec(v___x_2630_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2658_; 
if (v_isShared_2656_ == 0)
{
v___x_2658_ = v___x_2655_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_a_2653_);
v___x_2658_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
return v___x_2658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault___boxed(lean_object* v_e_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_){
_start:
{
lean_object* v_res_2669_; 
v_res_2669_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault(v_e_2661_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_);
lean_dec(v___y_2667_);
lean_dec_ref(v___y_2666_);
lean_dec(v___y_2665_);
lean_dec_ref(v___y_2664_);
lean_dec(v___y_2663_);
lean_dec_ref(v___y_2662_);
return v_res_2669_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0(lean_object* v_mvarId_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_){
_start:
{
lean_object* v___x_2678_; 
v___x_2678_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0___redArg(v_mvarId_2670_, v___y_2674_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0___boxed(lean_object* v_mvarId_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v_res_2687_; 
v_res_2687_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0(v_mvarId_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
lean_dec(v___y_2685_);
lean_dec_ref(v___y_2684_);
lean_dec(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec(v_mvarId_2679_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1(lean_object* v_mvarId_2688_, lean_object* v_val_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_){
_start:
{
lean_object* v___x_2697_; 
v___x_2697_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1___redArg(v_mvarId_2688_, v_val_2689_, v___y_2693_);
return v___x_2697_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1___boxed(lean_object* v_mvarId_2698_, lean_object* v_val_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_){
_start:
{
lean_object* v_res_2707_; 
v_res_2707_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1(v_mvarId_2698_, v_val_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_);
lean_dec(v___y_2705_);
lean_dec_ref(v___y_2704_);
lean_dec(v___y_2703_);
lean_dec_ref(v___y_2702_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__6(lean_object* v_00_u03b1_2708_, lean_object* v_x_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_){
_start:
{
lean_object* v___x_2717_; 
v___x_2717_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__6___redArg(v_x_2709_);
return v___x_2717_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__6___boxed(lean_object* v_00_u03b1_2718_, lean_object* v_x_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__6(v_00_u03b1_2718_, v_x_2719_, v___y_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec_ref(v___y_2722_);
lean_dec(v___y_2721_);
lean_dec_ref(v___y_2720_);
return v_res_2727_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0(lean_object* v_00_u03b2_2728_, lean_object* v_x_2729_, lean_object* v_x_2730_){
_start:
{
uint8_t v___x_2731_; 
v___x_2731_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0___redArg(v_x_2729_, v_x_2730_);
return v___x_2731_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2732_, lean_object* v_x_2733_, lean_object* v_x_2734_){
_start:
{
uint8_t v_res_2735_; lean_object* v_r_2736_; 
v_res_2735_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0(v_00_u03b2_2732_, v_x_2733_, v_x_2734_);
lean_dec(v_x_2734_);
lean_dec_ref(v_x_2733_);
v_r_2736_ = lean_box(v_res_2735_);
return v_r_2736_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2(lean_object* v_00_u03b2_2737_, lean_object* v_x_2738_, lean_object* v_x_2739_, lean_object* v_x_2740_){
_start:
{
lean_object* v___x_2741_; 
v___x_2741_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2___redArg(v_x_2738_, v_x_2739_, v_x_2740_);
return v___x_2741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5(lean_object* v_oldTraces_2742_, lean_object* v_data_2743_, lean_object* v_ref_2744_, lean_object* v_msg_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_){
_start:
{
lean_object* v___x_2753_; 
v___x_2753_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5___redArg(v_oldTraces_2742_, v_data_2743_, v_ref_2744_, v_msg_2745_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_);
return v___x_2753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5___boxed(lean_object* v_oldTraces_2754_, lean_object* v_data_2755_, lean_object* v_ref_2756_, lean_object* v_msg_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5(v_oldTraces_2754_, v_data_2755_, v_ref_2756_, v_msg_2757_, v___y_2758_, v___y_2759_, v___y_2760_, v___y_2761_, v___y_2762_, v___y_2763_);
lean_dec(v___y_2763_);
lean_dec_ref(v___y_2762_);
lean_dec(v___y_2761_);
lean_dec_ref(v___y_2760_);
lean_dec(v___y_2759_);
lean_dec_ref(v___y_2758_);
return v_res_2765_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_2766_, lean_object* v_x_2767_, size_t v_x_2768_, lean_object* v_x_2769_){
_start:
{
uint8_t v___x_2770_; 
v___x_2770_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3___redArg(v_x_2767_, v_x_2768_, v_x_2769_);
return v___x_2770_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_2771_, lean_object* v_x_2772_, lean_object* v_x_2773_, lean_object* v_x_2774_){
_start:
{
size_t v_x_19435__boxed_2775_; uint8_t v_res_2776_; lean_object* v_r_2777_; 
v_x_19435__boxed_2775_ = lean_unbox_usize(v_x_2773_);
lean_dec(v_x_2773_);
v_res_2776_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3(v_00_u03b2_2771_, v_x_2772_, v_x_19435__boxed_2775_, v_x_2774_);
lean_dec(v_x_2774_);
lean_dec_ref(v_x_2772_);
v_r_2777_ = lean_box(v_res_2776_);
return v_r_2777_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6(lean_object* v_00_u03b2_2778_, lean_object* v_x_2779_, size_t v_x_2780_, size_t v_x_2781_, lean_object* v_x_2782_, lean_object* v_x_2783_){
_start:
{
lean_object* v___x_2784_; 
v___x_2784_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___redArg(v_x_2779_, v_x_2780_, v_x_2781_, v_x_2782_, v_x_2783_);
return v___x_2784_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6___boxed(lean_object* v_00_u03b2_2785_, lean_object* v_x_2786_, lean_object* v_x_2787_, lean_object* v_x_2788_, lean_object* v_x_2789_, lean_object* v_x_2790_){
_start:
{
size_t v_x_19446__boxed_2791_; size_t v_x_19447__boxed_2792_; lean_object* v_res_2793_; 
v_x_19446__boxed_2791_ = lean_unbox_usize(v_x_2787_);
lean_dec(v_x_2787_);
v_x_19447__boxed_2792_ = lean_unbox_usize(v_x_2788_);
lean_dec(v_x_2788_);
v_res_2793_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6(v_00_u03b2_2785_, v_x_2786_, v_x_19446__boxed_2791_, v_x_19447__boxed_2792_, v_x_2789_, v_x_2790_);
return v_res_2793_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3_spec__10(lean_object* v_00_u03b2_2794_, lean_object* v_keys_2795_, lean_object* v_vals_2796_, lean_object* v_heq_2797_, lean_object* v_i_2798_, lean_object* v_k_2799_){
_start:
{
uint8_t v___x_2800_; 
v___x_2800_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3_spec__10___redArg(v_keys_2795_, v_i_2798_, v_k_2799_);
return v___x_2800_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3_spec__10___boxed(lean_object* v_00_u03b2_2801_, lean_object* v_keys_2802_, lean_object* v_vals_2803_, lean_object* v_heq_2804_, lean_object* v_i_2805_, lean_object* v_k_2806_){
_start:
{
uint8_t v_res_2807_; lean_object* v_r_2808_; 
v_res_2807_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__0_spec__0_spec__3_spec__10(v_00_u03b2_2801_, v_keys_2802_, v_vals_2803_, v_heq_2804_, v_i_2805_, v_k_2806_);
lean_dec(v_k_2806_);
lean_dec_ref(v_vals_2803_);
lean_dec_ref(v_keys_2802_);
v_r_2808_ = lean_box(v_res_2807_);
return v_r_2808_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__13(lean_object* v_00_u03b2_2809_, lean_object* v_n_2810_, lean_object* v_k_2811_, lean_object* v_v_2812_){
_start:
{
lean_object* v___x_2813_; 
v___x_2813_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__13___redArg(v_n_2810_, v_k_2811_, v_v_2812_);
return v___x_2813_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__14(lean_object* v_00_u03b2_2814_, size_t v_depth_2815_, lean_object* v_keys_2816_, lean_object* v_vals_2817_, lean_object* v_heq_2818_, lean_object* v_i_2819_, lean_object* v_entries_2820_){
_start:
{
lean_object* v___x_2821_; 
v___x_2821_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__14___redArg(v_depth_2815_, v_keys_2816_, v_vals_2817_, v_i_2819_, v_entries_2820_);
return v___x_2821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__14___boxed(lean_object* v_00_u03b2_2822_, lean_object* v_depth_2823_, lean_object* v_keys_2824_, lean_object* v_vals_2825_, lean_object* v_heq_2826_, lean_object* v_i_2827_, lean_object* v_entries_2828_){
_start:
{
size_t v_depth_boxed_2829_; lean_object* v_res_2830_; 
v_depth_boxed_2829_ = lean_unbox_usize(v_depth_2823_);
lean_dec(v_depth_2823_);
v_res_2830_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__14(v_00_u03b2_2822_, v_depth_boxed_2829_, v_keys_2824_, v_vals_2825_, v_heq_2826_, v_i_2827_, v_entries_2828_);
lean_dec_ref(v_vals_2825_);
lean_dec_ref(v_keys_2824_);
return v_res_2830_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__13_spec__15(lean_object* v_00_u03b2_2831_, lean_object* v_x_2832_, lean_object* v_x_2833_, lean_object* v_x_2834_, lean_object* v_x_2835_){
_start:
{
lean_object* v___x_2836_; 
v___x_2836_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__1_spec__2_spec__6_spec__13_spec__15___redArg(v_x_2832_, v_x_2833_, v_x_2834_, v_x_2835_);
return v___x_2836_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__1___redArg(lean_object* v_e_2837_, lean_object* v___y_2838_){
_start:
{
uint8_t v___x_2840_; 
v___x_2840_ = l_Lean_Expr_hasMVar(v_e_2837_);
if (v___x_2840_ == 0)
{
lean_object* v___x_2841_; 
v___x_2841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2841_, 0, v_e_2837_);
return v___x_2841_;
}
else
{
lean_object* v___x_2842_; lean_object* v_mctx_2843_; lean_object* v___x_2844_; lean_object* v_fst_2845_; lean_object* v_snd_2846_; lean_object* v___x_2847_; lean_object* v_cache_2848_; lean_object* v_zetaDeltaFVarIds_2849_; lean_object* v_postponed_2850_; lean_object* v_diag_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2860_; 
v___x_2842_ = lean_st_ref_get(v___y_2838_);
v_mctx_2843_ = lean_ctor_get(v___x_2842_, 0);
lean_inc_ref(v_mctx_2843_);
lean_dec(v___x_2842_);
v___x_2844_ = l_Lean_instantiateMVarsCore(v_mctx_2843_, v_e_2837_);
v_fst_2845_ = lean_ctor_get(v___x_2844_, 0);
lean_inc(v_fst_2845_);
v_snd_2846_ = lean_ctor_get(v___x_2844_, 1);
lean_inc(v_snd_2846_);
lean_dec_ref(v___x_2844_);
v___x_2847_ = lean_st_ref_take(v___y_2838_);
v_cache_2848_ = lean_ctor_get(v___x_2847_, 1);
v_zetaDeltaFVarIds_2849_ = lean_ctor_get(v___x_2847_, 2);
v_postponed_2850_ = lean_ctor_get(v___x_2847_, 3);
v_diag_2851_ = lean_ctor_get(v___x_2847_, 4);
v_isSharedCheck_2860_ = !lean_is_exclusive(v___x_2847_);
if (v_isSharedCheck_2860_ == 0)
{
lean_object* v_unused_2861_; 
v_unused_2861_ = lean_ctor_get(v___x_2847_, 0);
lean_dec(v_unused_2861_);
v___x_2853_ = v___x_2847_;
v_isShared_2854_ = v_isSharedCheck_2860_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_diag_2851_);
lean_inc(v_postponed_2850_);
lean_inc(v_zetaDeltaFVarIds_2849_);
lean_inc(v_cache_2848_);
lean_dec(v___x_2847_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2860_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2856_; 
if (v_isShared_2854_ == 0)
{
lean_ctor_set(v___x_2853_, 0, v_snd_2846_);
v___x_2856_ = v___x_2853_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v_snd_2846_);
lean_ctor_set(v_reuseFailAlloc_2859_, 1, v_cache_2848_);
lean_ctor_set(v_reuseFailAlloc_2859_, 2, v_zetaDeltaFVarIds_2849_);
lean_ctor_set(v_reuseFailAlloc_2859_, 3, v_postponed_2850_);
lean_ctor_set(v_reuseFailAlloc_2859_, 4, v_diag_2851_);
v___x_2856_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2857_ = lean_st_ref_put(v___y_2838_, v___x_2856_);
v___x_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2858_, 0, v_fst_2845_);
return v___x_2858_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__1___redArg___boxed(lean_object* v_e_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_){
_start:
{
lean_object* v_res_2865_; 
v_res_2865_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__1___redArg(v_e_2862_, v___y_2863_);
lean_dec(v___y_2863_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__1(lean_object* v_e_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_){
_start:
{
lean_object* v___x_2874_; 
v___x_2874_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__1___redArg(v_e_2866_, v___y_2870_);
return v___x_2874_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__1___boxed(lean_object* v_e_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__1(v_e_2875_, v___y_2876_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec_ref(v___y_2878_);
lean_dec(v___y_2877_);
lean_dec_ref(v___y_2876_);
return v_res_2883_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__2___closed__0(void){
_start:
{
lean_object* v___x_2884_; 
v___x_2884_ = l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
return v___x_2884_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__2(lean_object* v_msg_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_){
_start:
{
lean_object* v___x_2893_; lean_object* v___x_22084__overap_2894_; lean_object* v___x_2895_; 
v___x_2893_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__2___closed__0, &l_panic___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__2___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__2___closed__0);
v___x_22084__overap_2894_ = lean_panic_fn_borrowed(v___x_2893_, v_msg_2885_);
lean_inc(v___y_2891_);
lean_inc_ref(v___y_2890_);
lean_inc(v___y_2889_);
lean_inc_ref(v___y_2888_);
lean_inc(v___y_2887_);
lean_inc_ref(v___y_2886_);
v___x_2895_ = lean_apply_7(v___x_22084__overap_2894_, v___y_2886_, v___y_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_, lean_box(0));
return v___x_2895_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__2___boxed(lean_object* v_msg_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_){
_start:
{
lean_object* v_res_2904_; 
v_res_2904_ = l_panic___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__2(v_msg_2896_, v___y_2897_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_);
lean_dec(v___y_2902_);
lean_dec_ref(v___y_2901_);
lean_dec(v___y_2900_);
lean_dec_ref(v___y_2899_);
lean_dec(v___y_2898_);
lean_dec_ref(v___y_2897_);
return v_res_2904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__6___redArg(lean_object* v_a_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_){
_start:
{
lean_object* v___x_2913_; 
v___x_2913_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_);
return v___x_2913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__6___redArg___boxed(lean_object* v_a_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_){
_start:
{
lean_object* v_res_2922_; 
v_res_2922_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__6___redArg(v_a_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_);
lean_dec(v___y_2920_);
lean_dec_ref(v___y_2919_);
lean_dec(v___y_2918_);
lean_dec_ref(v___y_2917_);
lean_dec(v___y_2916_);
lean_dec_ref(v___y_2915_);
return v_res_2922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__6(lean_object* v_00_u03b1_2923_, lean_object* v_a_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_){
_start:
{
lean_object* v___x_2932_; 
v___x_2932_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_2924_, v___y_2925_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_);
return v___x_2932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__6___boxed(lean_object* v_00_u03b1_2933_, lean_object* v_a_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_){
_start:
{
lean_object* v_res_2942_; 
v_res_2942_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__6(v_00_u03b1_2933_, v_a_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_);
lean_dec(v___y_2940_);
lean_dec_ref(v___y_2939_);
lean_dec(v___y_2938_);
lean_dec_ref(v___y_2937_);
lean_dec(v___y_2936_);
lean_dec_ref(v___y_2935_);
return v_res_2942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8___redArg___lam__0(lean_object* v_k_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v_b_2946_, lean_object* v_c_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_){
_start:
{
lean_object* v___x_2953_; 
lean_inc(v___y_2951_);
lean_inc_ref(v___y_2950_);
lean_inc(v___y_2949_);
lean_inc_ref(v___y_2948_);
lean_inc(v___y_2945_);
lean_inc_ref(v___y_2944_);
v___x_2953_ = lean_apply_9(v_k_2943_, v_b_2946_, v_c_2947_, v___y_2944_, v___y_2945_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_, lean_box(0));
return v___x_2953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8___redArg___lam__0___boxed(lean_object* v_k_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v_b_2957_, lean_object* v_c_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_){
_start:
{
lean_object* v_res_2964_; 
v_res_2964_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8___redArg___lam__0(v_k_2954_, v___y_2955_, v___y_2956_, v_b_2957_, v_c_2958_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_);
lean_dec(v___y_2962_);
lean_dec_ref(v___y_2961_);
lean_dec(v___y_2960_);
lean_dec_ref(v___y_2959_);
lean_dec(v___y_2956_);
lean_dec_ref(v___y_2955_);
return v_res_2964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8___redArg(lean_object* v_type_2965_, lean_object* v_k_2966_, uint8_t v_cleanupAnnotations_2967_, uint8_t v_whnfType_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_){
_start:
{
lean_object* v___f_2976_; lean_object* v___x_2977_; 
lean_inc(v___y_2970_);
lean_inc_ref(v___y_2969_);
v___f_2976_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_2976_, 0, v_k_2966_);
lean_closure_set(v___f_2976_, 1, v___y_2969_);
lean_closure_set(v___f_2976_, 2, v___y_2970_);
v___x_2977_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_2965_, v___f_2976_, v_cleanupAnnotations_2967_, v_whnfType_2968_, v___y_2971_, v___y_2972_, v___y_2973_, v___y_2974_);
if (lean_obj_tag(v___x_2977_) == 0)
{
return v___x_2977_;
}
else
{
lean_object* v_a_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2985_; 
v_a_2978_ = lean_ctor_get(v___x_2977_, 0);
v_isSharedCheck_2985_ = !lean_is_exclusive(v___x_2977_);
if (v_isSharedCheck_2985_ == 0)
{
v___x_2980_ = v___x_2977_;
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_a_2978_);
lean_dec(v___x_2977_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2983_; 
if (v_isShared_2981_ == 0)
{
v___x_2983_ = v___x_2980_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v_a_2978_);
v___x_2983_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
return v___x_2983_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8___redArg___boxed(lean_object* v_type_2986_, lean_object* v_k_2987_, lean_object* v_cleanupAnnotations_2988_, lean_object* v_whnfType_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2997_; uint8_t v_whnfType_boxed_2998_; lean_object* v_res_2999_; 
v_cleanupAnnotations_boxed_2997_ = lean_unbox(v_cleanupAnnotations_2988_);
v_whnfType_boxed_2998_ = lean_unbox(v_whnfType_2989_);
v_res_2999_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8___redArg(v_type_2986_, v_k_2987_, v_cleanupAnnotations_boxed_2997_, v_whnfType_boxed_2998_, v___y_2990_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_);
lean_dec(v___y_2995_);
lean_dec_ref(v___y_2994_);
lean_dec(v___y_2993_);
lean_dec_ref(v___y_2992_);
lean_dec(v___y_2991_);
lean_dec_ref(v___y_2990_);
return v_res_2999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8(lean_object* v_00_u03b1_3000_, lean_object* v_type_3001_, lean_object* v_k_3002_, uint8_t v_cleanupAnnotations_3003_, uint8_t v_whnfType_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_){
_start:
{
lean_object* v___x_3012_; 
v___x_3012_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8___redArg(v_type_3001_, v_k_3002_, v_cleanupAnnotations_3003_, v_whnfType_3004_, v___y_3005_, v___y_3006_, v___y_3007_, v___y_3008_, v___y_3009_, v___y_3010_);
return v___x_3012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8___boxed(lean_object* v_00_u03b1_3013_, lean_object* v_type_3014_, lean_object* v_k_3015_, lean_object* v_cleanupAnnotations_3016_, lean_object* v_whnfType_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3025_; uint8_t v_whnfType_boxed_3026_; lean_object* v_res_3027_; 
v_cleanupAnnotations_boxed_3025_ = lean_unbox(v_cleanupAnnotations_3016_);
v_whnfType_boxed_3026_ = lean_unbox(v_whnfType_3017_);
v_res_3027_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8(v_00_u03b1_3013_, v_type_3014_, v_k_3015_, v_cleanupAnnotations_boxed_3025_, v_whnfType_boxed_3026_, v___y_3018_, v___y_3019_, v___y_3020_, v___y_3021_, v___y_3022_, v___y_3023_);
lean_dec(v___y_3023_);
lean_dec_ref(v___y_3022_);
lean_dec(v___y_3021_);
lean_dec_ref(v___y_3020_);
lean_dec(v___y_3019_);
lean_dec_ref(v___y_3018_);
return v_res_3027_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3029_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0___closed__0));
v___x_3030_ = l_Lean_stringToMessageData(v___x_3029_);
return v___x_3030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0(lean_object* v_x_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_){
_start:
{
lean_object* v___x_3039_; lean_object* v___x_3040_; 
v___x_3039_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0___closed__1, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0___closed__1_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0___closed__1);
v___x_3040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3040_, 0, v___x_3039_);
return v___x_3040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0___boxed(lean_object* v_x_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_){
_start:
{
lean_object* v_res_3049_; 
v_res_3049_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__0(v_x_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_);
lean_dec(v___y_3047_);
lean_dec_ref(v___y_3046_);
lean_dec(v___y_3045_);
lean_dec_ref(v___y_3044_);
lean_dec(v___y_3043_);
lean_dec_ref(v___y_3042_);
lean_dec_ref(v_x_3041_);
return v_res_3049_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__1(lean_object* v___x_3050_, lean_object* v_fst_3051_, lean_object* v_____r_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_){
_start:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3060_ = l_Lean_mkAppN(v___x_3050_, v_fst_3051_);
v___x_3061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3061_, 0, v___x_3060_);
return v___x_3061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__1___boxed(lean_object* v___x_3062_, lean_object* v_fst_3063_, lean_object* v_____r_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_){
_start:
{
lean_object* v_res_3072_; 
v_res_3072_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__1(v___x_3062_, v_fst_3063_, v_____r_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_);
lean_dec(v___y_3070_);
lean_dec_ref(v___y_3069_);
lean_dec(v___y_3068_);
lean_dec_ref(v___y_3067_);
lean_dec(v___y_3066_);
lean_dec_ref(v___y_3065_);
lean_dec_ref(v_fst_3063_);
return v_res_3072_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2___closed__1(void){
_start:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3074_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2___closed__0));
v___x_3075_ = l_Lean_stringToMessageData(v___x_3074_);
return v___x_3075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2(lean_object* v_ctorName_3076_, uint8_t v___x_3077_, lean_object* v_x_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_){
_start:
{
lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; 
v___x_3086_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2___closed__1, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2___closed__1_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2___closed__1);
v___x_3087_ = l_Lean_MessageData_ofConstName(v_ctorName_3076_, v___x_3077_);
v___x_3088_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3088_, 0, v___x_3086_);
lean_ctor_set(v___x_3088_, 1, v___x_3087_);
v___x_3089_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__1, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__1);
v___x_3090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3088_);
lean_ctor_set(v___x_3090_, 1, v___x_3089_);
v___x_3091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3090_);
return v___x_3091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2___boxed(lean_object* v_ctorName_3092_, lean_object* v___x_3093_, lean_object* v_x_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_){
_start:
{
uint8_t v___x_27189__boxed_3102_; lean_object* v_res_3103_; 
v___x_27189__boxed_3102_ = lean_unbox(v___x_3093_);
v_res_3103_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2(v_ctorName_3092_, v___x_27189__boxed_3102_, v_x_3094_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_, v___y_3099_, v___y_3100_);
lean_dec(v___y_3100_);
lean_dec_ref(v___y_3099_);
lean_dec(v___y_3098_);
lean_dec_ref(v___y_3097_);
lean_dec(v___y_3096_);
lean_dec_ref(v___y_3095_);
lean_dec_ref(v_x_3094_);
return v_res_3103_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__5_spec__5(lean_object* v_e_3104_){
_start:
{
if (lean_obj_tag(v_e_3104_) == 0)
{
uint8_t v___x_3105_; 
v___x_3105_ = 2;
return v___x_3105_;
}
else
{
lean_object* v_a_3106_; uint8_t v___x_3107_; 
v_a_3106_ = lean_ctor_get(v_e_3104_, 0);
v___x_3107_ = l_Lean_Expr_hasSyntheticSorry(v_a_3106_);
if (v___x_3107_ == 0)
{
uint8_t v___x_3108_; 
v___x_3108_ = 0;
return v___x_3108_;
}
else
{
uint8_t v___x_3109_; 
v___x_3109_ = 1;
return v___x_3109_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__5_spec__5___boxed(lean_object* v_e_3110_){
_start:
{
uint8_t v_res_3111_; lean_object* v_r_3112_; 
v_res_3111_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__5_spec__5(v_e_3110_);
lean_dec_ref(v_e_3110_);
v_r_3112_ = lean_box(v_res_3111_);
return v_r_3112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__5(lean_object* v_cls_3113_, uint8_t v_collapsed_3114_, lean_object* v_tag_3115_, lean_object* v_opts_3116_, uint8_t v_clsEnabled_3117_, lean_object* v_oldTraces_3118_, lean_object* v_msg_3119_, lean_object* v_resStartStop_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_){
_start:
{
lean_object* v_fst_3128_; lean_object* v_snd_3129_; lean_object* v___y_3131_; lean_object* v___y_3132_; lean_object* v_data_3133_; lean_object* v_fst_3144_; lean_object* v_snd_3145_; lean_object* v___x_3146_; uint8_t v___x_3147_; lean_object* v___y_3149_; lean_object* v_a_3150_; uint8_t v___y_3165_; double v___y_3196_; 
v_fst_3128_ = lean_ctor_get(v_resStartStop_3120_, 0);
lean_inc(v_fst_3128_);
v_snd_3129_ = lean_ctor_get(v_resStartStop_3120_, 1);
lean_inc(v_snd_3129_);
lean_dec_ref(v_resStartStop_3120_);
v_fst_3144_ = lean_ctor_get(v_snd_3129_, 0);
lean_inc(v_fst_3144_);
v_snd_3145_ = lean_ctor_get(v_snd_3129_, 1);
lean_inc(v_snd_3145_);
lean_dec(v_snd_3129_);
v___x_3146_ = l_Lean_trace_profiler;
v___x_3147_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4(v_opts_3116_, v___x_3146_);
if (v___x_3147_ == 0)
{
v___y_3165_ = v___x_3147_;
goto v___jp_3164_;
}
else
{
lean_object* v___x_3201_; uint8_t v___x_3202_; 
v___x_3201_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3202_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4(v_opts_3116_, v___x_3201_);
if (v___x_3202_ == 0)
{
lean_object* v___x_3203_; lean_object* v___x_3204_; double v___x_3205_; double v___x_3206_; double v___x_3207_; 
v___x_3203_ = l_Lean_trace_profiler_threshold;
v___x_3204_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__8(v_opts_3116_, v___x_3203_);
v___x_3205_ = lean_float_of_nat(v___x_3204_);
v___x_3206_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__2);
v___x_3207_ = lean_float_div(v___x_3205_, v___x_3206_);
v___y_3196_ = v___x_3207_;
goto v___jp_3195_;
}
else
{
lean_object* v___x_3208_; lean_object* v___x_3209_; double v___x_3210_; 
v___x_3208_ = l_Lean_trace_profiler_threshold;
v___x_3209_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__8(v_opts_3116_, v___x_3208_);
v___x_3210_ = lean_float_of_nat(v___x_3209_);
v___y_3196_ = v___x_3210_;
goto v___jp_3195_;
}
}
v___jp_3130_:
{
lean_object* v___x_3134_; 
lean_inc(v___y_3132_);
v___x_3134_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__5___redArg(v_oldTraces_3118_, v_data_3133_, v___y_3132_, v___y_3131_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_);
if (lean_obj_tag(v___x_3134_) == 0)
{
lean_object* v___x_3135_; 
lean_dec_ref_known(v___x_3134_, 1);
v___x_3135_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__6___redArg(v_fst_3128_);
return v___x_3135_;
}
else
{
lean_object* v_a_3136_; lean_object* v___x_3138_; uint8_t v_isShared_3139_; uint8_t v_isSharedCheck_3143_; 
lean_dec(v_fst_3128_);
v_a_3136_ = lean_ctor_get(v___x_3134_, 0);
v_isSharedCheck_3143_ = !lean_is_exclusive(v___x_3134_);
if (v_isSharedCheck_3143_ == 0)
{
v___x_3138_ = v___x_3134_;
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
else
{
lean_inc(v_a_3136_);
lean_dec(v___x_3134_);
v___x_3138_ = lean_box(0);
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
v_resetjp_3137_:
{
lean_object* v___x_3141_; 
if (v_isShared_3139_ == 0)
{
v___x_3141_ = v___x_3138_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v_a_3136_);
v___x_3141_ = v_reuseFailAlloc_3142_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
return v___x_3141_;
}
}
}
}
v___jp_3148_:
{
uint8_t v_result_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; double v___x_3154_; lean_object* v_data_3155_; 
v_result_3151_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__5_spec__5(v_fst_3128_);
v___x_3152_ = lean_box(v_result_3151_);
v___x_3153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3153_, 0, v___x_3152_);
v___x_3154_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__0);
lean_inc_ref(v_tag_3115_);
lean_inc_ref(v___x_3153_);
lean_inc(v_cls_3113_);
v_data_3155_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3155_, 0, v_cls_3113_);
lean_ctor_set(v_data_3155_, 1, v___x_3153_);
lean_ctor_set(v_data_3155_, 2, v_tag_3115_);
lean_ctor_set_float(v_data_3155_, sizeof(void*)*3, v___x_3154_);
lean_ctor_set_float(v_data_3155_, sizeof(void*)*3 + 8, v___x_3154_);
lean_ctor_set_uint8(v_data_3155_, sizeof(void*)*3 + 16, v_collapsed_3114_);
if (v___x_3147_ == 0)
{
lean_dec_ref_known(v___x_3153_, 1);
lean_dec(v_snd_3145_);
lean_dec(v_fst_3144_);
lean_dec_ref(v_tag_3115_);
lean_dec(v_cls_3113_);
v___y_3131_ = v_a_3150_;
v___y_3132_ = v___y_3149_;
v_data_3133_ = v_data_3155_;
goto v___jp_3130_;
}
else
{
lean_object* v_data_3156_; double v___x_3157_; double v___x_3158_; 
lean_dec_ref_known(v_data_3155_, 3);
v_data_3156_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3156_, 0, v_cls_3113_);
lean_ctor_set(v_data_3156_, 1, v___x_3153_);
lean_ctor_set(v_data_3156_, 2, v_tag_3115_);
v___x_3157_ = lean_unbox_float(v_fst_3144_);
lean_dec(v_fst_3144_);
lean_ctor_set_float(v_data_3156_, sizeof(void*)*3, v___x_3157_);
v___x_3158_ = lean_unbox_float(v_snd_3145_);
lean_dec(v_snd_3145_);
lean_ctor_set_float(v_data_3156_, sizeof(void*)*3 + 8, v___x_3158_);
lean_ctor_set_uint8(v_data_3156_, sizeof(void*)*3 + 16, v_collapsed_3114_);
v___y_3131_ = v_a_3150_;
v___y_3132_ = v___y_3149_;
v_data_3133_ = v_data_3156_;
goto v___jp_3130_;
}
}
v___jp_3159_:
{
lean_object* v_ref_3160_; lean_object* v___x_3161_; 
v_ref_3160_ = lean_ctor_get(v___y_3125_, 2);
lean_inc(v___y_3126_);
lean_inc_ref(v___y_3125_);
lean_inc(v___y_3124_);
lean_inc_ref(v___y_3123_);
lean_inc(v___y_3122_);
lean_inc_ref(v___y_3121_);
lean_inc(v_fst_3128_);
v___x_3161_ = lean_apply_8(v_msg_3119_, v_fst_3128_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_, lean_box(0));
if (lean_obj_tag(v___x_3161_) == 0)
{
lean_object* v_a_3162_; 
v_a_3162_ = lean_ctor_get(v___x_3161_, 0);
lean_inc(v_a_3162_);
lean_dec_ref_known(v___x_3161_, 1);
v___y_3149_ = v_ref_3160_;
v_a_3150_ = v_a_3162_;
goto v___jp_3148_;
}
else
{
lean_object* v___x_3163_; 
lean_dec_ref_known(v___x_3161_, 1);
v___x_3163_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3___closed__1);
v___y_3149_ = v_ref_3160_;
v_a_3150_ = v___x_3163_;
goto v___jp_3148_;
}
}
v___jp_3164_:
{
if (v_clsEnabled_3117_ == 0)
{
if (v___y_3165_ == 0)
{
lean_object* v___x_3166_; lean_object* v_traceState_3167_; lean_object* v_env_3168_; lean_object* v_nextMacroScope_3169_; lean_object* v_ngen_3170_; lean_object* v_auxDeclNGen_3171_; lean_object* v_cache_3172_; lean_object* v_messages_3173_; lean_object* v_infoState_3174_; lean_object* v_snapshotTasks_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3194_; 
lean_dec(v_snd_3145_);
lean_dec(v_fst_3144_);
lean_dec_ref(v_msg_3119_);
lean_dec_ref(v_tag_3115_);
lean_dec(v_cls_3113_);
v___x_3166_ = lean_st_ref_take(v___y_3126_);
v_traceState_3167_ = lean_ctor_get(v___x_3166_, 4);
v_env_3168_ = lean_ctor_get(v___x_3166_, 0);
v_nextMacroScope_3169_ = lean_ctor_get(v___x_3166_, 1);
v_ngen_3170_ = lean_ctor_get(v___x_3166_, 2);
v_auxDeclNGen_3171_ = lean_ctor_get(v___x_3166_, 3);
v_cache_3172_ = lean_ctor_get(v___x_3166_, 5);
v_messages_3173_ = lean_ctor_get(v___x_3166_, 6);
v_infoState_3174_ = lean_ctor_get(v___x_3166_, 7);
v_snapshotTasks_3175_ = lean_ctor_get(v___x_3166_, 8);
v_isSharedCheck_3194_ = !lean_is_exclusive(v___x_3166_);
if (v_isSharedCheck_3194_ == 0)
{
v___x_3177_ = v___x_3166_;
v_isShared_3178_ = v_isSharedCheck_3194_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_snapshotTasks_3175_);
lean_inc(v_infoState_3174_);
lean_inc(v_messages_3173_);
lean_inc(v_cache_3172_);
lean_inc(v_traceState_3167_);
lean_inc(v_auxDeclNGen_3171_);
lean_inc(v_ngen_3170_);
lean_inc(v_nextMacroScope_3169_);
lean_inc(v_env_3168_);
lean_dec(v___x_3166_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3194_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
uint64_t v_tid_3179_; lean_object* v_traces_3180_; lean_object* v___x_3182_; uint8_t v_isShared_3183_; uint8_t v_isSharedCheck_3193_; 
v_tid_3179_ = lean_ctor_get_uint64(v_traceState_3167_, sizeof(void*)*1);
v_traces_3180_ = lean_ctor_get(v_traceState_3167_, 0);
v_isSharedCheck_3193_ = !lean_is_exclusive(v_traceState_3167_);
if (v_isSharedCheck_3193_ == 0)
{
v___x_3182_ = v_traceState_3167_;
v_isShared_3183_ = v_isSharedCheck_3193_;
goto v_resetjp_3181_;
}
else
{
lean_inc(v_traces_3180_);
lean_dec(v_traceState_3167_);
v___x_3182_ = lean_box(0);
v_isShared_3183_ = v_isSharedCheck_3193_;
goto v_resetjp_3181_;
}
v_resetjp_3181_:
{
lean_object* v___x_3184_; lean_object* v___x_3186_; 
v___x_3184_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_3118_, v_traces_3180_);
lean_dec_ref(v_traces_3180_);
if (v_isShared_3183_ == 0)
{
lean_ctor_set(v___x_3182_, 0, v___x_3184_);
v___x_3186_ = v___x_3182_;
goto v_reusejp_3185_;
}
else
{
lean_object* v_reuseFailAlloc_3192_; 
v_reuseFailAlloc_3192_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3192_, 0, v___x_3184_);
lean_ctor_set_uint64(v_reuseFailAlloc_3192_, sizeof(void*)*1, v_tid_3179_);
v___x_3186_ = v_reuseFailAlloc_3192_;
goto v_reusejp_3185_;
}
v_reusejp_3185_:
{
lean_object* v___x_3188_; 
if (v_isShared_3178_ == 0)
{
lean_ctor_set(v___x_3177_, 4, v___x_3186_);
v___x_3188_ = v___x_3177_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3191_; 
v_reuseFailAlloc_3191_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3191_, 0, v_env_3168_);
lean_ctor_set(v_reuseFailAlloc_3191_, 1, v_nextMacroScope_3169_);
lean_ctor_set(v_reuseFailAlloc_3191_, 2, v_ngen_3170_);
lean_ctor_set(v_reuseFailAlloc_3191_, 3, v_auxDeclNGen_3171_);
lean_ctor_set(v_reuseFailAlloc_3191_, 4, v___x_3186_);
lean_ctor_set(v_reuseFailAlloc_3191_, 5, v_cache_3172_);
lean_ctor_set(v_reuseFailAlloc_3191_, 6, v_messages_3173_);
lean_ctor_set(v_reuseFailAlloc_3191_, 7, v_infoState_3174_);
lean_ctor_set(v_reuseFailAlloc_3191_, 8, v_snapshotTasks_3175_);
v___x_3188_ = v_reuseFailAlloc_3191_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
lean_object* v___x_3189_; lean_object* v___x_3190_; 
v___x_3189_ = lean_st_ref_put(v___y_3126_, v___x_3188_);
v___x_3190_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__3_spec__6___redArg(v_fst_3128_);
return v___x_3190_;
}
}
}
}
}
else
{
goto v___jp_3159_;
}
}
else
{
goto v___jp_3159_;
}
}
v___jp_3195_:
{
double v___x_3197_; double v___x_3198_; double v___x_3199_; uint8_t v___x_3200_; 
v___x_3197_ = lean_unbox_float(v_snd_3145_);
v___x_3198_ = lean_unbox_float(v_fst_3144_);
v___x_3199_ = lean_float_sub(v___x_3197_, v___x_3198_);
v___x_3200_ = lean_float_decLt(v___y_3196_, v___x_3199_);
v___y_3165_ = v___x_3200_;
goto v___jp_3164_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__5___boxed(lean_object* v_cls_3211_, lean_object* v_collapsed_3212_, lean_object* v_tag_3213_, lean_object* v_opts_3214_, lean_object* v_clsEnabled_3215_, lean_object* v_oldTraces_3216_, lean_object* v_msg_3217_, lean_object* v_resStartStop_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_){
_start:
{
uint8_t v_collapsed_boxed_3226_; uint8_t v_clsEnabled_boxed_3227_; lean_object* v_res_3228_; 
v_collapsed_boxed_3226_ = lean_unbox(v_collapsed_3212_);
v_clsEnabled_boxed_3227_ = lean_unbox(v_clsEnabled_3215_);
v_res_3228_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__5(v_cls_3211_, v_collapsed_boxed_3226_, v_tag_3213_, v_opts_3214_, v_clsEnabled_boxed_3227_, v_oldTraces_3216_, v_msg_3217_, v_resStartStop_3218_, v___y_3219_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_);
lean_dec(v___y_3224_);
lean_dec_ref(v___y_3223_);
lean_dec(v___y_3222_);
lean_dec_ref(v___y_3221_);
lean_dec(v___y_3220_);
lean_dec_ref(v___y_3219_);
lean_dec_ref(v_opts_3214_);
return v_res_3228_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__4(lean_object* v___x_3229_, lean_object* v_as_3230_, size_t v_i_3231_, size_t v_stop_3232_, lean_object* v_b_3233_){
_start:
{
lean_object* v___y_3235_; uint8_t v___x_3239_; 
v___x_3239_ = lean_usize_dec_eq(v_i_3231_, v_stop_3232_);
if (v___x_3239_ == 0)
{
lean_object* v___x_3240_; uint8_t v___x_3241_; 
v___x_3240_ = lean_array_uget_borrowed(v_as_3230_, v_i_3231_);
v___x_3241_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts_spec__2_spec__2_spec__4_spec__5___redArg(v___x_3229_, v___x_3240_);
if (v___x_3241_ == 0)
{
v___y_3235_ = v_b_3233_;
goto v___jp_3234_;
}
else
{
lean_object* v___x_3242_; 
lean_inc(v___x_3240_);
v___x_3242_ = lean_array_push(v_b_3233_, v___x_3240_);
v___y_3235_ = v___x_3242_;
goto v___jp_3234_;
}
}
else
{
return v_b_3233_;
}
v___jp_3234_:
{
size_t v___x_3236_; size_t v___x_3237_; 
v___x_3236_ = ((size_t)1ULL);
v___x_3237_ = lean_usize_add(v_i_3231_, v___x_3236_);
v_i_3231_ = v___x_3237_;
v_b_3233_ = v___y_3235_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__4___boxed(lean_object* v___x_3243_, lean_object* v_as_3244_, lean_object* v_i_3245_, lean_object* v_stop_3246_, lean_object* v_b_3247_){
_start:
{
size_t v_i_boxed_3248_; size_t v_stop_boxed_3249_; lean_object* v_res_3250_; 
v_i_boxed_3248_ = lean_unbox_usize(v_i_3245_);
lean_dec(v_i_3245_);
v_stop_boxed_3249_ = lean_unbox_usize(v_stop_3246_);
lean_dec(v_stop_3246_);
v_res_3250_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__4(v___x_3243_, v_as_3244_, v_i_boxed_3248_, v_stop_boxed_3249_, v_b_3247_);
lean_dec_ref(v_as_3244_);
lean_dec_ref(v___x_3243_);
return v_res_3250_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__3(lean_object* v_a_3251_, lean_object* v_a_3252_){
_start:
{
if (lean_obj_tag(v_a_3251_) == 0)
{
lean_object* v___x_3253_; 
v___x_3253_ = l_List_reverse___redArg(v_a_3252_);
return v___x_3253_;
}
else
{
lean_object* v_head_3254_; lean_object* v_tail_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3264_; 
v_head_3254_ = lean_ctor_get(v_a_3251_, 0);
v_tail_3255_ = lean_ctor_get(v_a_3251_, 1);
v_isSharedCheck_3264_ = !lean_is_exclusive(v_a_3251_);
if (v_isSharedCheck_3264_ == 0)
{
v___x_3257_ = v_a_3251_;
v_isShared_3258_ = v_isSharedCheck_3264_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_tail_3255_);
lean_inc(v_head_3254_);
lean_dec(v_a_3251_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3264_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
lean_object* v___x_3259_; lean_object* v___x_3261_; 
v___x_3259_ = l_Lean_MessageData_ofExpr(v_head_3254_);
if (v_isShared_3258_ == 0)
{
lean_ctor_set(v___x_3257_, 1, v_a_3252_);
lean_ctor_set(v___x_3257_, 0, v___x_3259_);
v___x_3261_ = v___x_3257_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3263_; 
v_reuseFailAlloc_3263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3263_, 0, v___x_3259_);
lean_ctor_set(v_reuseFailAlloc_3263_, 1, v_a_3252_);
v___x_3261_ = v_reuseFailAlloc_3263_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
v_a_3251_ = v_tail_3255_;
v_a_3252_ = v___x_3261_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__3(void){
_start:
{
lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; 
v___x_3268_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__2));
v___x_3269_ = lean_unsigned_to_nat(6u);
v___x_3270_ = lean_unsigned_to_nat(108u);
v___x_3271_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__1));
v___x_3272_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__0));
v___x_3273_ = l_mkPanicMessageWithDecl(v___x_3272_, v___x_3271_, v___x_3270_, v___x_3269_, v___x_3268_);
return v___x_3273_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__5(void){
_start:
{
lean_object* v___x_3275_; lean_object* v___x_3276_; 
v___x_3275_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__4));
v___x_3276_ = l_Lean_stringToMessageData(v___x_3275_);
return v___x_3276_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__7(void){
_start:
{
lean_object* v___x_3278_; lean_object* v___x_3279_; 
v___x_3278_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__6));
v___x_3279_ = l_Lean_stringToMessageData(v___x_3278_);
return v___x_3279_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__9(void){
_start:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; 
v___x_3281_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__8));
v___x_3282_ = l_Lean_stringToMessageData(v___x_3281_);
return v___x_3282_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__10(void){
_start:
{
lean_object* v___x_3283_; lean_object* v___x_3284_; 
v___x_3283_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__1));
v___x_3284_ = l_Lean_stringToMessageData(v___x_3283_);
return v___x_3284_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__11(void){
_start:
{
lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; 
v___x_3285_ = lean_box(0);
v___x_3286_ = lean_unsigned_to_nat(16u);
v___x_3287_ = lean_mk_array(v___x_3286_, v___x_3285_);
return v___x_3287_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__13(void){
_start:
{
lean_object* v___x_3289_; lean_object* v___x_3290_; 
v___x_3289_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__12));
v___x_3290_ = l_Lean_stringToMessageData(v___x_3289_);
return v___x_3290_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__15(void){
_start:
{
lean_object* v___x_3292_; lean_object* v___x_3293_; 
v___x_3292_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__14));
v___x_3293_ = l_Lean_stringToMessageData(v___x_3292_);
return v___x_3293_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__17(void){
_start:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; 
v___x_3295_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__16));
v___x_3296_ = l_Lean_stringToMessageData(v___x_3295_);
return v___x_3296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6(lean_object* v_inductiveTypeName_3304_, lean_object* v_us_3305_, lean_object* v_xs_3306_, lean_object* v___x_3307_, lean_object* v_ctorName_3308_, lean_object* v___x_3309_, lean_object* v___f_3310_, lean_object* v_insts_3311_, lean_object* v_localInst2Index_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_){
_start:
{
lean_object* v___x_3320_; lean_object* v_type_3321_; lean_object* v___y_3323_; lean_object* v___y_3324_; uint8_t v___y_3325_; lean_object* v___y_3326_; lean_object* v___y_3327_; lean_object* v___y_3328_; lean_object* v___y_3329_; lean_object* v___y_3330_; lean_object* v___y_3364_; lean_object* v___y_3365_; lean_object* v___y_3366_; lean_object* v___y_3367_; lean_object* v___y_3368_; lean_object* v___y_3369_; lean_object* v___y_3370_; lean_object* v___y_3371_; lean_object* v___y_3372_; uint8_t v___y_3373_; lean_object* v___y_3374_; lean_object* v___y_3386_; lean_object* v___y_3387_; lean_object* v___y_3388_; lean_object* v___y_3389_; lean_object* v___y_3390_; lean_object* v___y_3391_; lean_object* v___y_3392_; lean_object* v___y_3393_; lean_object* v___y_3394_; lean_object* v___y_3395_; lean_object* v___y_3396_; lean_object* v___y_3422_; lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v___y_3427_; lean_object* v___y_3428_; lean_object* v___y_3429_; lean_object* v___y_3435_; lean_object* v___y_3436_; lean_object* v___y_3437_; lean_object* v___y_3438_; lean_object* v___y_3439_; lean_object* v___y_3440_; lean_object* v___y_3441_; lean_object* v_val_3459_; lean_object* v___y_3486_; lean_object* v___y_3497_; lean_object* v___x_3507_; lean_object* v_env_3508_; uint8_t v___x_3509_; uint8_t v___x_3510_; 
lean_inc(v_us_3305_);
lean_inc(v_inductiveTypeName_3304_);
v___x_3320_ = l_Lean_Expr_const___override(v_inductiveTypeName_3304_, v_us_3305_);
v_type_3321_ = l_Lean_mkAppN(v___x_3320_, v_xs_3306_);
v___x_3507_ = lean_st_ref_get(v___y_3318_);
v_env_3508_ = lean_ctor_get(v___x_3507_, 0);
lean_inc_ref(v_env_3508_);
lean_dec(v___x_3507_);
v___x_3509_ = l_Lean_isStructure(v_env_3508_, v_inductiveTypeName_3304_);
v___x_3510_ = 1;
if (v___x_3509_ == 0)
{
lean_object* v_toCold_3511_; lean_object* v_options_3512_; lean_object* v_inheritedTraceOptions_3513_; uint8_t v_hasTrace_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; 
lean_dec_ref(v___f_3310_);
v_toCold_3511_ = lean_ctor_get(v___y_3317_, 0);
v_options_3512_ = lean_ctor_get(v_toCold_3511_, 2);
v_inheritedTraceOptions_3513_ = lean_ctor_get(v_toCold_3511_, 11);
v_hasTrace_3514_ = lean_ctor_get_uint8(v_options_3512_, sizeof(void*)*1);
lean_inc(v_ctorName_3308_);
v___x_3515_ = l_Lean_Expr_const___override(v_ctorName_3308_, v_us_3305_);
v___x_3516_ = l_Lean_mkAppN(v___x_3515_, v___x_3309_);
if (v_hasTrace_3514_ == 0)
{
lean_object* v___x_3517_; 
lean_dec(v_ctorName_3308_);
lean_inc(v___y_3318_);
lean_inc_ref(v___y_3317_);
lean_inc(v___y_3316_);
lean_inc_ref(v___y_3315_);
lean_inc_ref(v___x_3516_);
v___x_3517_ = lean_infer_type(v___x_3516_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3517_) == 0)
{
lean_object* v_a_3518_; lean_object* v___x_3519_; uint8_t v___x_3520_; lean_object* v___x_3521_; 
v_a_3518_ = lean_ctor_get(v___x_3517_, 0);
lean_inc(v_a_3518_);
lean_dec_ref_known(v___x_3517_, 1);
v___x_3519_ = lean_box(0);
v___x_3520_ = 0;
v___x_3521_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_3518_, v___x_3519_, v___x_3520_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3521_) == 0)
{
lean_object* v_a_3522_; lean_object* v_snd_3523_; lean_object* v_fst_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3567_; 
v_a_3522_ = lean_ctor_get(v___x_3521_, 0);
lean_inc(v_a_3522_);
lean_dec_ref_known(v___x_3521_, 1);
v_snd_3523_ = lean_ctor_get(v_a_3522_, 1);
v_fst_3524_ = lean_ctor_get(v_a_3522_, 0);
v_isSharedCheck_3567_ = !lean_is_exclusive(v_a_3522_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3526_ = v_a_3522_;
v_isShared_3527_ = v_isSharedCheck_3567_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_snd_3523_);
lean_inc(v_fst_3524_);
lean_dec(v_a_3522_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3567_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
lean_object* v_snd_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3565_; 
v_snd_3528_ = lean_ctor_get(v_snd_3523_, 1);
v_isSharedCheck_3565_ = !lean_is_exclusive(v_snd_3523_);
if (v_isSharedCheck_3565_ == 0)
{
lean_object* v_unused_3566_; 
v_unused_3566_ = lean_ctor_get(v_snd_3523_, 0);
lean_dec(v_unused_3566_);
v___x_3530_ = v_snd_3523_;
v_isShared_3531_ = v_isSharedCheck_3565_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_snd_3528_);
lean_dec(v_snd_3523_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3565_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3532_; 
lean_inc(v_snd_3528_);
lean_inc_ref(v_type_3321_);
v___x_3532_ = l_Lean_Meta_isExprDefEq(v_type_3321_, v_snd_3528_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3532_) == 0)
{
lean_object* v_a_3533_; uint8_t v___x_3534_; 
v_a_3533_ = lean_ctor_get(v___x_3532_, 0);
lean_inc(v_a_3533_);
lean_dec_ref_known(v___x_3532_, 1);
v___x_3534_ = lean_unbox(v_a_3533_);
lean_dec(v_a_3533_);
if (v___x_3534_ == 0)
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3538_; 
lean_dec(v_fst_3524_);
lean_dec_ref(v___x_3516_);
lean_dec(v_localInst2Index_3312_);
lean_dec(v___x_3307_);
lean_dec_ref(v_xs_3306_);
v___x_3535_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__15, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__15_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__15);
v___x_3536_ = l_Lean_indentExpr(v_type_3321_);
if (v_isShared_3531_ == 0)
{
lean_ctor_set_tag(v___x_3530_, 7);
lean_ctor_set(v___x_3530_, 1, v___x_3536_);
lean_ctor_set(v___x_3530_, 0, v___x_3535_);
v___x_3538_ = v___x_3530_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3554_; 
v_reuseFailAlloc_3554_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3554_, 0, v___x_3535_);
lean_ctor_set(v_reuseFailAlloc_3554_, 1, v___x_3536_);
v___x_3538_ = v_reuseFailAlloc_3554_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
lean_object* v___x_3539_; lean_object* v___x_3541_; 
v___x_3539_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__17, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__17_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__17);
if (v_isShared_3527_ == 0)
{
lean_ctor_set_tag(v___x_3526_, 7);
lean_ctor_set(v___x_3526_, 1, v___x_3539_);
lean_ctor_set(v___x_3526_, 0, v___x_3538_);
v___x_3541_ = v___x_3526_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3553_; 
v_reuseFailAlloc_3553_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3553_, 0, v___x_3538_);
lean_ctor_set(v_reuseFailAlloc_3553_, 1, v___x_3539_);
v___x_3541_ = v_reuseFailAlloc_3553_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v_a_3545_; lean_object* v___x_3547_; uint8_t v_isShared_3548_; uint8_t v_isSharedCheck_3552_; 
v___x_3542_ = l_Lean_indentExpr(v_snd_3528_);
v___x_3543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3543_, 0, v___x_3541_);
lean_ctor_set(v___x_3543_, 1, v___x_3542_);
v___x_3544_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1___redArg(v___x_3543_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
v_a_3545_ = lean_ctor_get(v___x_3544_, 0);
v_isSharedCheck_3552_ = !lean_is_exclusive(v___x_3544_);
if (v_isSharedCheck_3552_ == 0)
{
v___x_3547_ = v___x_3544_;
v_isShared_3548_ = v_isSharedCheck_3552_;
goto v_resetjp_3546_;
}
else
{
lean_inc(v_a_3545_);
lean_dec(v___x_3544_);
v___x_3547_ = lean_box(0);
v_isShared_3548_ = v_isSharedCheck_3552_;
goto v_resetjp_3546_;
}
v_resetjp_3546_:
{
lean_object* v___x_3550_; 
if (v_isShared_3548_ == 0)
{
v___x_3550_ = v___x_3547_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v_a_3545_);
v___x_3550_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
return v___x_3550_;
}
}
}
}
}
else
{
lean_object* v___x_3555_; lean_object* v___x_3556_; 
lean_del_object(v___x_3530_);
lean_dec(v_snd_3528_);
lean_del_object(v___x_3526_);
v___x_3555_ = lean_box(0);
v___x_3556_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__1(v___x_3516_, v_fst_3524_, v___x_3555_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
lean_dec(v_fst_3524_);
v___y_3497_ = v___x_3556_;
goto v___jp_3496_;
}
}
else
{
lean_object* v_a_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3564_; 
lean_del_object(v___x_3530_);
lean_dec(v_snd_3528_);
lean_del_object(v___x_3526_);
lean_dec(v_fst_3524_);
lean_dec_ref(v___x_3516_);
lean_dec_ref(v_type_3321_);
lean_dec(v_localInst2Index_3312_);
lean_dec(v___x_3307_);
lean_dec_ref(v_xs_3306_);
v_a_3557_ = lean_ctor_get(v___x_3532_, 0);
v_isSharedCheck_3564_ = !lean_is_exclusive(v___x_3532_);
if (v_isSharedCheck_3564_ == 0)
{
v___x_3559_ = v___x_3532_;
v_isShared_3560_ = v_isSharedCheck_3564_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_a_3557_);
lean_dec(v___x_3532_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3564_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v___x_3562_; 
if (v_isShared_3560_ == 0)
{
v___x_3562_ = v___x_3559_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3563_; 
v_reuseFailAlloc_3563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3563_, 0, v_a_3557_);
v___x_3562_ = v_reuseFailAlloc_3563_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
return v___x_3562_;
}
}
}
}
}
}
else
{
lean_object* v_a_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3575_; 
lean_dec_ref(v___x_3516_);
lean_dec_ref(v_type_3321_);
lean_dec(v_localInst2Index_3312_);
lean_dec(v___x_3307_);
lean_dec_ref(v_xs_3306_);
v_a_3568_ = lean_ctor_get(v___x_3521_, 0);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3521_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3570_ = v___x_3521_;
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_a_3568_);
lean_dec(v___x_3521_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3573_; 
if (v_isShared_3571_ == 0)
{
v___x_3573_ = v___x_3570_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v_a_3568_);
v___x_3573_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
return v___x_3573_;
}
}
}
}
else
{
lean_dec_ref(v___x_3516_);
v___y_3497_ = v___x_3517_;
goto v___jp_3496_;
}
}
else
{
lean_object* v___x_3576_; lean_object* v___f_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; uint8_t v___x_3581_; lean_object* v___y_3583_; lean_object* v___y_3584_; lean_object* v_a_3585_; lean_object* v___y_3598_; lean_object* v___y_3599_; lean_object* v_a_3600_; lean_object* v___y_3603_; lean_object* v___y_3604_; lean_object* v___y_3605_; lean_object* v___y_3616_; lean_object* v___y_3617_; lean_object* v_a_3618_; lean_object* v___y_3628_; lean_object* v___y_3629_; lean_object* v_a_3630_; lean_object* v___y_3633_; lean_object* v___y_3634_; lean_object* v___y_3635_; 
v___x_3576_ = lean_box(v___x_3509_);
v___f_3577_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__2___boxed), 10, 2);
lean_closure_set(v___f_3577_, 0, v_ctorName_3308_);
lean_closure_set(v___f_3577_, 1, v___x_3576_);
v___x_3578_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3));
v___x_3579_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__1));
v___x_3580_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6);
v___x_3581_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3513_, v_options_3512_, v___x_3580_);
if (v___x_3581_ == 0)
{
lean_object* v___x_3728_; uint8_t v___x_3729_; 
v___x_3728_ = l_Lean_trace_profiler;
v___x_3729_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4(v_options_3512_, v___x_3728_);
if (v___x_3729_ == 0)
{
lean_object* v___x_3730_; 
lean_dec_ref(v___f_3577_);
lean_inc(v___y_3318_);
lean_inc_ref(v___y_3317_);
lean_inc(v___y_3316_);
lean_inc_ref(v___y_3315_);
lean_inc_ref(v___x_3516_);
v___x_3730_ = lean_infer_type(v___x_3516_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3730_) == 0)
{
lean_object* v_a_3731_; lean_object* v___x_3732_; uint8_t v___x_3733_; lean_object* v___x_3734_; 
v_a_3731_ = lean_ctor_get(v___x_3730_, 0);
lean_inc(v_a_3731_);
lean_dec_ref_known(v___x_3730_, 1);
v___x_3732_ = lean_box(0);
v___x_3733_ = 0;
v___x_3734_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_3731_, v___x_3732_, v___x_3733_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3734_) == 0)
{
lean_object* v_a_3735_; lean_object* v_snd_3736_; lean_object* v_fst_3737_; lean_object* v___x_3739_; uint8_t v_isShared_3740_; uint8_t v_isSharedCheck_3780_; 
v_a_3735_ = lean_ctor_get(v___x_3734_, 0);
lean_inc(v_a_3735_);
lean_dec_ref_known(v___x_3734_, 1);
v_snd_3736_ = lean_ctor_get(v_a_3735_, 1);
v_fst_3737_ = lean_ctor_get(v_a_3735_, 0);
v_isSharedCheck_3780_ = !lean_is_exclusive(v_a_3735_);
if (v_isSharedCheck_3780_ == 0)
{
v___x_3739_ = v_a_3735_;
v_isShared_3740_ = v_isSharedCheck_3780_;
goto v_resetjp_3738_;
}
else
{
lean_inc(v_snd_3736_);
lean_inc(v_fst_3737_);
lean_dec(v_a_3735_);
v___x_3739_ = lean_box(0);
v_isShared_3740_ = v_isSharedCheck_3780_;
goto v_resetjp_3738_;
}
v_resetjp_3738_:
{
lean_object* v_snd_3741_; lean_object* v___x_3743_; uint8_t v_isShared_3744_; uint8_t v_isSharedCheck_3778_; 
v_snd_3741_ = lean_ctor_get(v_snd_3736_, 1);
v_isSharedCheck_3778_ = !lean_is_exclusive(v_snd_3736_);
if (v_isSharedCheck_3778_ == 0)
{
lean_object* v_unused_3779_; 
v_unused_3779_ = lean_ctor_get(v_snd_3736_, 0);
lean_dec(v_unused_3779_);
v___x_3743_ = v_snd_3736_;
v_isShared_3744_ = v_isSharedCheck_3778_;
goto v_resetjp_3742_;
}
else
{
lean_inc(v_snd_3741_);
lean_dec(v_snd_3736_);
v___x_3743_ = lean_box(0);
v_isShared_3744_ = v_isSharedCheck_3778_;
goto v_resetjp_3742_;
}
v_resetjp_3742_:
{
lean_object* v___x_3745_; 
lean_inc(v_snd_3741_);
lean_inc_ref(v_type_3321_);
v___x_3745_ = l_Lean_Meta_isExprDefEq(v_type_3321_, v_snd_3741_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3745_) == 0)
{
lean_object* v_a_3746_; uint8_t v___x_3747_; 
v_a_3746_ = lean_ctor_get(v___x_3745_, 0);
lean_inc(v_a_3746_);
lean_dec_ref_known(v___x_3745_, 1);
v___x_3747_ = lean_unbox(v_a_3746_);
lean_dec(v_a_3746_);
if (v___x_3747_ == 0)
{
lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3751_; 
lean_dec(v_fst_3737_);
lean_dec_ref(v___x_3516_);
lean_dec(v_localInst2Index_3312_);
lean_dec(v___x_3307_);
lean_dec_ref(v_xs_3306_);
v___x_3748_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__15, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__15_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__15);
v___x_3749_ = l_Lean_indentExpr(v_type_3321_);
if (v_isShared_3744_ == 0)
{
lean_ctor_set_tag(v___x_3743_, 7);
lean_ctor_set(v___x_3743_, 1, v___x_3749_);
lean_ctor_set(v___x_3743_, 0, v___x_3748_);
v___x_3751_ = v___x_3743_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3767_; 
v_reuseFailAlloc_3767_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3767_, 0, v___x_3748_);
lean_ctor_set(v_reuseFailAlloc_3767_, 1, v___x_3749_);
v___x_3751_ = v_reuseFailAlloc_3767_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
lean_object* v___x_3752_; lean_object* v___x_3754_; 
v___x_3752_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__17, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__17_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__17);
if (v_isShared_3740_ == 0)
{
lean_ctor_set_tag(v___x_3739_, 7);
lean_ctor_set(v___x_3739_, 1, v___x_3752_);
lean_ctor_set(v___x_3739_, 0, v___x_3751_);
v___x_3754_ = v___x_3739_;
goto v_reusejp_3753_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v___x_3751_);
lean_ctor_set(v_reuseFailAlloc_3766_, 1, v___x_3752_);
v___x_3754_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3753_;
}
v_reusejp_3753_:
{
lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v_a_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3765_; 
v___x_3755_ = l_Lean_indentExpr(v_snd_3741_);
v___x_3756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3756_, 0, v___x_3754_);
lean_ctor_set(v___x_3756_, 1, v___x_3755_);
v___x_3757_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1___redArg(v___x_3756_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
v_a_3758_ = lean_ctor_get(v___x_3757_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v___x_3757_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3760_ = v___x_3757_;
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_a_3758_);
lean_dec(v___x_3757_);
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
}
else
{
lean_object* v___x_3768_; lean_object* v___x_3769_; 
lean_del_object(v___x_3743_);
lean_dec(v_snd_3741_);
lean_del_object(v___x_3739_);
v___x_3768_ = lean_box(0);
v___x_3769_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__1(v___x_3516_, v_fst_3737_, v___x_3768_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
lean_dec(v_fst_3737_);
v___y_3497_ = v___x_3769_;
goto v___jp_3496_;
}
}
else
{
lean_object* v_a_3770_; lean_object* v___x_3772_; uint8_t v_isShared_3773_; uint8_t v_isSharedCheck_3777_; 
lean_del_object(v___x_3743_);
lean_dec(v_snd_3741_);
lean_del_object(v___x_3739_);
lean_dec(v_fst_3737_);
lean_dec_ref(v___x_3516_);
lean_dec_ref(v_type_3321_);
lean_dec(v_localInst2Index_3312_);
lean_dec(v___x_3307_);
lean_dec_ref(v_xs_3306_);
v_a_3770_ = lean_ctor_get(v___x_3745_, 0);
v_isSharedCheck_3777_ = !lean_is_exclusive(v___x_3745_);
if (v_isSharedCheck_3777_ == 0)
{
v___x_3772_ = v___x_3745_;
v_isShared_3773_ = v_isSharedCheck_3777_;
goto v_resetjp_3771_;
}
else
{
lean_inc(v_a_3770_);
lean_dec(v___x_3745_);
v___x_3772_ = lean_box(0);
v_isShared_3773_ = v_isSharedCheck_3777_;
goto v_resetjp_3771_;
}
v_resetjp_3771_:
{
lean_object* v___x_3775_; 
if (v_isShared_3773_ == 0)
{
v___x_3775_ = v___x_3772_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3776_; 
v_reuseFailAlloc_3776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3776_, 0, v_a_3770_);
v___x_3775_ = v_reuseFailAlloc_3776_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
return v___x_3775_;
}
}
}
}
}
}
else
{
lean_object* v_a_3781_; lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3788_; 
lean_dec_ref(v___x_3516_);
lean_dec_ref(v_type_3321_);
lean_dec(v_localInst2Index_3312_);
lean_dec(v___x_3307_);
lean_dec_ref(v_xs_3306_);
v_a_3781_ = lean_ctor_get(v___x_3734_, 0);
v_isSharedCheck_3788_ = !lean_is_exclusive(v___x_3734_);
if (v_isSharedCheck_3788_ == 0)
{
v___x_3783_ = v___x_3734_;
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
else
{
lean_inc(v_a_3781_);
lean_dec(v___x_3734_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
lean_object* v___x_3786_; 
if (v_isShared_3784_ == 0)
{
v___x_3786_ = v___x_3783_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v_a_3781_);
v___x_3786_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
return v___x_3786_;
}
}
}
}
else
{
lean_dec_ref(v___x_3516_);
v___y_3497_ = v___x_3730_;
goto v___jp_3496_;
}
}
else
{
goto v___jp_3645_;
}
}
else
{
goto v___jp_3645_;
}
v___jp_3582_:
{
lean_object* v___x_3586_; double v___x_3587_; double v___x_3588_; double v___x_3589_; double v___x_3590_; double v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; 
v___x_3586_ = lean_io_mono_nanos_now();
v___x_3587_ = lean_float_of_nat(v___y_3584_);
v___x_3588_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__0);
v___x_3589_ = lean_float_div(v___x_3587_, v___x_3588_);
v___x_3590_ = lean_float_of_nat(v___x_3586_);
v___x_3591_ = lean_float_div(v___x_3590_, v___x_3588_);
v___x_3592_ = lean_box_float(v___x_3589_);
v___x_3593_ = lean_box_float(v___x_3591_);
v___x_3594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3594_, 0, v___x_3592_);
lean_ctor_set(v___x_3594_, 1, v___x_3593_);
v___x_3595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3595_, 0, v_a_3585_);
lean_ctor_set(v___x_3595_, 1, v___x_3594_);
v___x_3596_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__5(v___x_3578_, v___x_3510_, v___x_3579_, v_options_3512_, v___x_3581_, v___y_3583_, v___f_3577_, v___x_3595_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
v___y_3497_ = v___x_3596_;
goto v___jp_3496_;
}
v___jp_3597_:
{
lean_object* v___x_3601_; 
v___x_3601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3601_, 0, v_a_3600_);
v___y_3583_ = v___y_3598_;
v___y_3584_ = v___y_3599_;
v_a_3585_ = v___x_3601_;
goto v___jp_3582_;
}
v___jp_3602_:
{
if (lean_obj_tag(v___y_3605_) == 0)
{
lean_object* v_a_3606_; lean_object* v___x_3608_; uint8_t v_isShared_3609_; uint8_t v_isSharedCheck_3613_; 
v_a_3606_ = lean_ctor_get(v___y_3605_, 0);
v_isSharedCheck_3613_ = !lean_is_exclusive(v___y_3605_);
if (v_isSharedCheck_3613_ == 0)
{
v___x_3608_ = v___y_3605_;
v_isShared_3609_ = v_isSharedCheck_3613_;
goto v_resetjp_3607_;
}
else
{
lean_inc(v_a_3606_);
lean_dec(v___y_3605_);
v___x_3608_ = lean_box(0);
v_isShared_3609_ = v_isSharedCheck_3613_;
goto v_resetjp_3607_;
}
v_resetjp_3607_:
{
lean_object* v___x_3611_; 
if (v_isShared_3609_ == 0)
{
lean_ctor_set_tag(v___x_3608_, 1);
v___x_3611_ = v___x_3608_;
goto v_reusejp_3610_;
}
else
{
lean_object* v_reuseFailAlloc_3612_; 
v_reuseFailAlloc_3612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3612_, 0, v_a_3606_);
v___x_3611_ = v_reuseFailAlloc_3612_;
goto v_reusejp_3610_;
}
v_reusejp_3610_:
{
v___y_3583_ = v___y_3603_;
v___y_3584_ = v___y_3604_;
v_a_3585_ = v___x_3611_;
goto v___jp_3582_;
}
}
}
else
{
lean_object* v_a_3614_; 
v_a_3614_ = lean_ctor_get(v___y_3605_, 0);
lean_inc(v_a_3614_);
lean_dec_ref_known(v___y_3605_, 1);
v___y_3598_ = v___y_3603_;
v___y_3599_ = v___y_3604_;
v_a_3600_ = v_a_3614_;
goto v___jp_3597_;
}
}
v___jp_3615_:
{
lean_object* v___x_3619_; double v___x_3620_; double v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; 
v___x_3619_ = lean_io_get_num_heartbeats();
v___x_3620_ = lean_float_of_nat(v___y_3617_);
v___x_3621_ = lean_float_of_nat(v___x_3619_);
v___x_3622_ = lean_box_float(v___x_3620_);
v___x_3623_ = lean_box_float(v___x_3621_);
v___x_3624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3622_);
lean_ctor_set(v___x_3624_, 1, v___x_3623_);
v___x_3625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3625_, 0, v_a_3618_);
lean_ctor_set(v___x_3625_, 1, v___x_3624_);
v___x_3626_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__5(v___x_3578_, v___x_3510_, v___x_3579_, v_options_3512_, v___x_3581_, v___y_3616_, v___f_3577_, v___x_3625_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
v___y_3497_ = v___x_3626_;
goto v___jp_3496_;
}
v___jp_3627_:
{
lean_object* v___x_3631_; 
v___x_3631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3631_, 0, v_a_3630_);
v___y_3616_ = v___y_3628_;
v___y_3617_ = v___y_3629_;
v_a_3618_ = v___x_3631_;
goto v___jp_3615_;
}
v___jp_3632_:
{
if (lean_obj_tag(v___y_3635_) == 0)
{
lean_object* v_a_3636_; lean_object* v___x_3638_; uint8_t v_isShared_3639_; uint8_t v_isSharedCheck_3643_; 
v_a_3636_ = lean_ctor_get(v___y_3635_, 0);
v_isSharedCheck_3643_ = !lean_is_exclusive(v___y_3635_);
if (v_isSharedCheck_3643_ == 0)
{
v___x_3638_ = v___y_3635_;
v_isShared_3639_ = v_isSharedCheck_3643_;
goto v_resetjp_3637_;
}
else
{
lean_inc(v_a_3636_);
lean_dec(v___y_3635_);
v___x_3638_ = lean_box(0);
v_isShared_3639_ = v_isSharedCheck_3643_;
goto v_resetjp_3637_;
}
v_resetjp_3637_:
{
lean_object* v___x_3641_; 
if (v_isShared_3639_ == 0)
{
lean_ctor_set_tag(v___x_3638_, 1);
v___x_3641_ = v___x_3638_;
goto v_reusejp_3640_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v_a_3636_);
v___x_3641_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3640_;
}
v_reusejp_3640_:
{
v___y_3616_ = v___y_3633_;
v___y_3617_ = v___y_3634_;
v_a_3618_ = v___x_3641_;
goto v___jp_3615_;
}
}
}
else
{
lean_object* v_a_3644_; 
v_a_3644_ = lean_ctor_get(v___y_3635_, 0);
lean_inc(v_a_3644_);
lean_dec_ref_known(v___y_3635_, 1);
v___y_3628_ = v___y_3633_;
v___y_3629_ = v___y_3634_;
v_a_3630_ = v_a_3644_;
goto v___jp_3627_;
}
}
v___jp_3645_:
{
lean_object* v___x_3646_; lean_object* v_a_3647_; lean_object* v___x_3648_; uint8_t v___x_3649_; 
v___x_3646_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg(v___y_3318_);
v_a_3647_ = lean_ctor_get(v___x_3646_, 0);
lean_inc(v_a_3647_);
lean_dec_ref(v___x_3646_);
v___x_3648_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3649_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4(v_options_3512_, v___x_3648_);
if (v___x_3649_ == 0)
{
lean_object* v___x_3650_; lean_object* v___x_3651_; 
v___x_3650_ = lean_io_mono_nanos_now();
lean_inc(v___y_3318_);
lean_inc_ref(v___y_3317_);
lean_inc(v___y_3316_);
lean_inc_ref(v___y_3315_);
lean_inc_ref(v___x_3516_);
v___x_3651_ = lean_infer_type(v___x_3516_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3651_) == 0)
{
lean_object* v_a_3652_; lean_object* v___x_3653_; uint8_t v___x_3654_; lean_object* v___x_3655_; 
v_a_3652_ = lean_ctor_get(v___x_3651_, 0);
lean_inc(v_a_3652_);
lean_dec_ref_known(v___x_3651_, 1);
v___x_3653_ = lean_box(0);
v___x_3654_ = 0;
v___x_3655_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_3652_, v___x_3653_, v___x_3654_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3655_) == 0)
{
lean_object* v_a_3656_; lean_object* v_snd_3657_; lean_object* v_fst_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3687_; 
v_a_3656_ = lean_ctor_get(v___x_3655_, 0);
lean_inc(v_a_3656_);
lean_dec_ref_known(v___x_3655_, 1);
v_snd_3657_ = lean_ctor_get(v_a_3656_, 1);
v_fst_3658_ = lean_ctor_get(v_a_3656_, 0);
v_isSharedCheck_3687_ = !lean_is_exclusive(v_a_3656_);
if (v_isSharedCheck_3687_ == 0)
{
v___x_3660_ = v_a_3656_;
v_isShared_3661_ = v_isSharedCheck_3687_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_snd_3657_);
lean_inc(v_fst_3658_);
lean_dec(v_a_3656_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3687_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v_snd_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3685_; 
v_snd_3662_ = lean_ctor_get(v_snd_3657_, 1);
v_isSharedCheck_3685_ = !lean_is_exclusive(v_snd_3657_);
if (v_isSharedCheck_3685_ == 0)
{
lean_object* v_unused_3686_; 
v_unused_3686_ = lean_ctor_get(v_snd_3657_, 0);
lean_dec(v_unused_3686_);
v___x_3664_ = v_snd_3657_;
v_isShared_3665_ = v_isSharedCheck_3685_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_snd_3662_);
lean_dec(v_snd_3657_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3685_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
lean_object* v___x_3666_; 
lean_inc(v_snd_3662_);
lean_inc_ref(v_type_3321_);
v___x_3666_ = l_Lean_Meta_isExprDefEq(v_type_3321_, v_snd_3662_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3666_) == 0)
{
lean_object* v_a_3667_; uint8_t v___x_3668_; 
v_a_3667_ = lean_ctor_get(v___x_3666_, 0);
lean_inc(v_a_3667_);
lean_dec_ref_known(v___x_3666_, 1);
v___x_3668_ = lean_unbox(v_a_3667_);
lean_dec(v_a_3667_);
if (v___x_3668_ == 0)
{
lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3672_; 
lean_dec(v_fst_3658_);
lean_dec_ref(v___x_3516_);
v___x_3669_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__15, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__15_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__15);
lean_inc_ref(v_type_3321_);
v___x_3670_ = l_Lean_indentExpr(v_type_3321_);
if (v_isShared_3665_ == 0)
{
lean_ctor_set_tag(v___x_3664_, 7);
lean_ctor_set(v___x_3664_, 1, v___x_3670_);
lean_ctor_set(v___x_3664_, 0, v___x_3669_);
v___x_3672_ = v___x_3664_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v___x_3669_);
lean_ctor_set(v_reuseFailAlloc_3681_, 1, v___x_3670_);
v___x_3672_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
lean_object* v___x_3673_; lean_object* v___x_3675_; 
v___x_3673_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__17, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__17_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__17);
if (v_isShared_3661_ == 0)
{
lean_ctor_set_tag(v___x_3660_, 7);
lean_ctor_set(v___x_3660_, 1, v___x_3673_);
lean_ctor_set(v___x_3660_, 0, v___x_3672_);
v___x_3675_ = v___x_3660_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v___x_3672_);
lean_ctor_set(v_reuseFailAlloc_3680_, 1, v___x_3673_);
v___x_3675_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v_a_3679_; 
v___x_3676_ = l_Lean_indentExpr(v_snd_3662_);
v___x_3677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3677_, 0, v___x_3675_);
lean_ctor_set(v___x_3677_, 1, v___x_3676_);
v___x_3678_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1___redArg(v___x_3677_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
v_a_3679_ = lean_ctor_get(v___x_3678_, 0);
lean_inc(v_a_3679_);
lean_dec_ref(v___x_3678_);
v___y_3598_ = v_a_3647_;
v___y_3599_ = v___x_3650_;
v_a_3600_ = v_a_3679_;
goto v___jp_3597_;
}
}
}
else
{
lean_object* v___x_3682_; lean_object* v___x_3683_; 
lean_del_object(v___x_3664_);
lean_dec(v_snd_3662_);
lean_del_object(v___x_3660_);
v___x_3682_ = lean_box(0);
v___x_3683_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__1(v___x_3516_, v_fst_3658_, v___x_3682_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
lean_dec(v_fst_3658_);
v___y_3603_ = v_a_3647_;
v___y_3604_ = v___x_3650_;
v___y_3605_ = v___x_3683_;
goto v___jp_3602_;
}
}
else
{
lean_object* v_a_3684_; 
lean_del_object(v___x_3664_);
lean_dec(v_snd_3662_);
lean_del_object(v___x_3660_);
lean_dec(v_fst_3658_);
lean_dec_ref(v___x_3516_);
v_a_3684_ = lean_ctor_get(v___x_3666_, 0);
lean_inc(v_a_3684_);
lean_dec_ref_known(v___x_3666_, 1);
v___y_3598_ = v_a_3647_;
v___y_3599_ = v___x_3650_;
v_a_3600_ = v_a_3684_;
goto v___jp_3597_;
}
}
}
}
else
{
lean_object* v_a_3688_; 
lean_dec_ref(v___x_3516_);
v_a_3688_ = lean_ctor_get(v___x_3655_, 0);
lean_inc(v_a_3688_);
lean_dec_ref_known(v___x_3655_, 1);
v___y_3598_ = v_a_3647_;
v___y_3599_ = v___x_3650_;
v_a_3600_ = v_a_3688_;
goto v___jp_3597_;
}
}
else
{
lean_dec_ref(v___x_3516_);
v___y_3603_ = v_a_3647_;
v___y_3604_ = v___x_3650_;
v___y_3605_ = v___x_3651_;
goto v___jp_3602_;
}
}
else
{
lean_object* v___x_3689_; lean_object* v___x_3690_; 
v___x_3689_ = lean_io_get_num_heartbeats();
lean_inc(v___y_3318_);
lean_inc_ref(v___y_3317_);
lean_inc(v___y_3316_);
lean_inc_ref(v___y_3315_);
lean_inc_ref(v___x_3516_);
v___x_3690_ = lean_infer_type(v___x_3516_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3690_) == 0)
{
lean_object* v_a_3691_; lean_object* v___x_3692_; uint8_t v___x_3693_; lean_object* v___x_3694_; 
v_a_3691_ = lean_ctor_get(v___x_3690_, 0);
lean_inc(v_a_3691_);
lean_dec_ref_known(v___x_3690_, 1);
v___x_3692_ = lean_box(0);
v___x_3693_ = 0;
v___x_3694_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_3691_, v___x_3692_, v___x_3693_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3694_) == 0)
{
lean_object* v_a_3695_; lean_object* v_snd_3696_; lean_object* v_fst_3697_; lean_object* v___x_3699_; uint8_t v_isShared_3700_; uint8_t v_isSharedCheck_3726_; 
v_a_3695_ = lean_ctor_get(v___x_3694_, 0);
lean_inc(v_a_3695_);
lean_dec_ref_known(v___x_3694_, 1);
v_snd_3696_ = lean_ctor_get(v_a_3695_, 1);
v_fst_3697_ = lean_ctor_get(v_a_3695_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v_a_3695_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3699_ = v_a_3695_;
v_isShared_3700_ = v_isSharedCheck_3726_;
goto v_resetjp_3698_;
}
else
{
lean_inc(v_snd_3696_);
lean_inc(v_fst_3697_);
lean_dec(v_a_3695_);
v___x_3699_ = lean_box(0);
v_isShared_3700_ = v_isSharedCheck_3726_;
goto v_resetjp_3698_;
}
v_resetjp_3698_:
{
lean_object* v_snd_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3724_; 
v_snd_3701_ = lean_ctor_get(v_snd_3696_, 1);
v_isSharedCheck_3724_ = !lean_is_exclusive(v_snd_3696_);
if (v_isSharedCheck_3724_ == 0)
{
lean_object* v_unused_3725_; 
v_unused_3725_ = lean_ctor_get(v_snd_3696_, 0);
lean_dec(v_unused_3725_);
v___x_3703_ = v_snd_3696_;
v_isShared_3704_ = v_isSharedCheck_3724_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_snd_3701_);
lean_dec(v_snd_3696_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3724_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3705_; 
lean_inc(v_snd_3701_);
lean_inc_ref(v_type_3321_);
v___x_3705_ = l_Lean_Meta_isExprDefEq(v_type_3321_, v_snd_3701_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3705_) == 0)
{
lean_object* v_a_3706_; uint8_t v___x_3707_; 
v_a_3706_ = lean_ctor_get(v___x_3705_, 0);
lean_inc(v_a_3706_);
lean_dec_ref_known(v___x_3705_, 1);
v___x_3707_ = lean_unbox(v_a_3706_);
lean_dec(v_a_3706_);
if (v___x_3707_ == 0)
{
lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3711_; 
lean_dec(v_fst_3697_);
lean_dec_ref(v___x_3516_);
v___x_3708_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__15, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__15_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__15);
lean_inc_ref(v_type_3321_);
v___x_3709_ = l_Lean_indentExpr(v_type_3321_);
if (v_isShared_3704_ == 0)
{
lean_ctor_set_tag(v___x_3703_, 7);
lean_ctor_set(v___x_3703_, 1, v___x_3709_);
lean_ctor_set(v___x_3703_, 0, v___x_3708_);
v___x_3711_ = v___x_3703_;
goto v_reusejp_3710_;
}
else
{
lean_object* v_reuseFailAlloc_3720_; 
v_reuseFailAlloc_3720_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3720_, 0, v___x_3708_);
lean_ctor_set(v_reuseFailAlloc_3720_, 1, v___x_3709_);
v___x_3711_ = v_reuseFailAlloc_3720_;
goto v_reusejp_3710_;
}
v_reusejp_3710_:
{
lean_object* v___x_3712_; lean_object* v___x_3714_; 
v___x_3712_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__17, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__17_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__17);
if (v_isShared_3700_ == 0)
{
lean_ctor_set_tag(v___x_3699_, 7);
lean_ctor_set(v___x_3699_, 1, v___x_3712_);
lean_ctor_set(v___x_3699_, 0, v___x_3711_);
v___x_3714_ = v___x_3699_;
goto v_reusejp_3713_;
}
else
{
lean_object* v_reuseFailAlloc_3719_; 
v_reuseFailAlloc_3719_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3719_, 0, v___x_3711_);
lean_ctor_set(v_reuseFailAlloc_3719_, 1, v___x_3712_);
v___x_3714_ = v_reuseFailAlloc_3719_;
goto v_reusejp_3713_;
}
v_reusejp_3713_:
{
lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v_a_3718_; 
v___x_3715_ = l_Lean_indentExpr(v_snd_3701_);
v___x_3716_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3716_, 0, v___x_3714_);
lean_ctor_set(v___x_3716_, 1, v___x_3715_);
v___x_3717_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1___redArg(v___x_3716_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
v_a_3718_ = lean_ctor_get(v___x_3717_, 0);
lean_inc(v_a_3718_);
lean_dec_ref(v___x_3717_);
v___y_3628_ = v_a_3647_;
v___y_3629_ = v___x_3689_;
v_a_3630_ = v_a_3718_;
goto v___jp_3627_;
}
}
}
else
{
lean_object* v___x_3721_; lean_object* v___x_3722_; 
lean_del_object(v___x_3703_);
lean_dec(v_snd_3701_);
lean_del_object(v___x_3699_);
v___x_3721_ = lean_box(0);
v___x_3722_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__1(v___x_3516_, v_fst_3697_, v___x_3721_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
lean_dec(v_fst_3697_);
v___y_3633_ = v_a_3647_;
v___y_3634_ = v___x_3689_;
v___y_3635_ = v___x_3722_;
goto v___jp_3632_;
}
}
else
{
lean_object* v_a_3723_; 
lean_del_object(v___x_3703_);
lean_dec(v_snd_3701_);
lean_del_object(v___x_3699_);
lean_dec(v_fst_3697_);
lean_dec_ref(v___x_3516_);
v_a_3723_ = lean_ctor_get(v___x_3705_, 0);
lean_inc(v_a_3723_);
lean_dec_ref_known(v___x_3705_, 1);
v___y_3628_ = v_a_3647_;
v___y_3629_ = v___x_3689_;
v_a_3630_ = v_a_3723_;
goto v___jp_3627_;
}
}
}
}
else
{
lean_object* v_a_3727_; 
lean_dec_ref(v___x_3516_);
v_a_3727_ = lean_ctor_get(v___x_3694_, 0);
lean_inc(v_a_3727_);
lean_dec_ref_known(v___x_3694_, 1);
v___y_3628_ = v_a_3647_;
v___y_3629_ = v___x_3689_;
v_a_3630_ = v_a_3727_;
goto v___jp_3627_;
}
}
else
{
lean_dec_ref(v___x_3516_);
v___y_3633_ = v_a_3647_;
v___y_3634_ = v___x_3689_;
v___y_3635_ = v___x_3690_;
goto v___jp_3632_;
}
}
}
}
}
else
{
lean_object* v_toCold_3789_; lean_object* v_options_3790_; uint8_t v_hasTrace_3791_; 
lean_dec(v_ctorName_3308_);
lean_dec(v_us_3305_);
v_toCold_3789_ = lean_ctor_get(v___y_3317_, 0);
v_options_3790_ = lean_ctor_get(v_toCold_3789_, 2);
v_hasTrace_3791_ = lean_ctor_get_uint8(v_options_3790_, sizeof(void*)*1);
if (v_hasTrace_3791_ == 0)
{
lean_object* v_ref_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; 
lean_dec_ref(v___f_3310_);
v_ref_3792_ = lean_ctor_get(v___y_3317_, 2);
v___x_3793_ = l_Lean_SourceInfo_fromRef(v_ref_3792_, v_hasTrace_3791_);
v___x_3794_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__19));
v___x_3795_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__20));
lean_inc(v___x_3793_);
v___x_3796_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3796_, 0, v___x_3793_);
lean_ctor_set(v___x_3796_, 1, v___x_3795_);
v___x_3797_ = l_Lean_Syntax_node1(v___x_3793_, v___x_3794_, v___x_3796_);
lean_inc_ref(v_type_3321_);
v___x_3798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3798_, 0, v_type_3321_);
v___x_3799_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermAndSynthesize___boxed), 9, 2);
lean_closure_set(v___x_3799_, 0, v___x_3797_);
lean_closure_set(v___x_3799_, 1, v___x_3798_);
v___x_3800_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___x_3799_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
v___y_3486_ = v___x_3800_;
goto v___jp_3485_;
}
else
{
lean_object* v_ref_3801_; lean_object* v_inheritedTraceOptions_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; uint8_t v___x_3806_; lean_object* v___y_3808_; lean_object* v___y_3809_; lean_object* v_a_3810_; lean_object* v___y_3823_; lean_object* v___y_3824_; lean_object* v_a_3825_; 
v_ref_3801_ = lean_ctor_get(v___y_3317_, 2);
v_inheritedTraceOptions_3802_ = lean_ctor_get(v_toCold_3789_, 11);
v___x_3803_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3));
v___x_3804_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg___closed__1));
v___x_3805_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6);
v___x_3806_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3802_, v_options_3790_, v___x_3805_);
if (v___x_3806_ == 0)
{
lean_object* v___x_3898_; uint8_t v___x_3899_; 
v___x_3898_ = l_Lean_trace_profiler;
v___x_3899_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4(v_options_3790_, v___x_3898_);
if (v___x_3899_ == 0)
{
lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; 
lean_dec_ref(v___f_3310_);
v___x_3900_ = l_Lean_SourceInfo_fromRef(v_ref_3801_, v___x_3899_);
v___x_3901_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__19));
v___x_3902_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__20));
lean_inc(v___x_3900_);
v___x_3903_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3903_, 0, v___x_3900_);
lean_ctor_set(v___x_3903_, 1, v___x_3902_);
v___x_3904_ = l_Lean_Syntax_node1(v___x_3900_, v___x_3901_, v___x_3903_);
lean_inc_ref(v_type_3321_);
v___x_3905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3905_, 0, v_type_3321_);
v___x_3906_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermAndSynthesize___boxed), 9, 2);
lean_closure_set(v___x_3906_, 0, v___x_3904_);
lean_closure_set(v___x_3906_, 1, v___x_3905_);
v___x_3907_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___x_3906_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
v___y_3486_ = v___x_3907_;
goto v___jp_3485_;
}
else
{
goto v___jp_3834_;
}
}
else
{
goto v___jp_3834_;
}
v___jp_3807_:
{
lean_object* v___x_3811_; double v___x_3812_; double v___x_3813_; double v___x_3814_; double v___x_3815_; double v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; 
v___x_3811_ = lean_io_mono_nanos_now();
v___x_3812_ = lean_float_of_nat(v___y_3808_);
v___x_3813_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__5___lam__1___closed__0);
v___x_3814_ = lean_float_div(v___x_3812_, v___x_3813_);
v___x_3815_ = lean_float_of_nat(v___x_3811_);
v___x_3816_ = lean_float_div(v___x_3815_, v___x_3813_);
v___x_3817_ = lean_box_float(v___x_3814_);
v___x_3818_ = lean_box_float(v___x_3816_);
v___x_3819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3819_, 0, v___x_3817_);
lean_ctor_set(v___x_3819_, 1, v___x_3818_);
v___x_3820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3820_, 0, v_a_3810_);
lean_ctor_set(v___x_3820_, 1, v___x_3819_);
v___x_3821_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__5(v___x_3803_, v___x_3510_, v___x_3804_, v_options_3790_, v___x_3806_, v___y_3809_, v___f_3310_, v___x_3820_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
v___y_3486_ = v___x_3821_;
goto v___jp_3485_;
}
v___jp_3822_:
{
lean_object* v___x_3826_; double v___x_3827_; double v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; 
v___x_3826_ = lean_io_get_num_heartbeats();
v___x_3827_ = lean_float_of_nat(v___y_3823_);
v___x_3828_ = lean_float_of_nat(v___x_3826_);
v___x_3829_ = lean_box_float(v___x_3827_);
v___x_3830_ = lean_box_float(v___x_3828_);
v___x_3831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3831_, 0, v___x_3829_);
lean_ctor_set(v___x_3831_, 1, v___x_3830_);
v___x_3832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3832_, 0, v_a_3825_);
lean_ctor_set(v___x_3832_, 1, v___x_3831_);
v___x_3833_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__5(v___x_3803_, v___x_3510_, v___x_3804_, v_options_3790_, v___x_3806_, v___y_3824_, v___f_3310_, v___x_3832_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
v___y_3486_ = v___x_3833_;
goto v___jp_3485_;
}
v___jp_3834_:
{
lean_object* v___x_3835_; lean_object* v_a_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3897_; 
v___x_3835_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault_spec__2___redArg(v___y_3318_);
v_a_3836_ = lean_ctor_get(v___x_3835_, 0);
v_isSharedCheck_3897_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3897_ == 0)
{
v___x_3838_ = v___x_3835_;
v_isShared_3839_ = v_isSharedCheck_3897_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_a_3836_);
lean_dec(v___x_3835_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3897_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3840_; uint8_t v___x_3841_; 
v___x_3840_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3841_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4(v_options_3790_, v___x_3840_);
if (v___x_3841_ == 0)
{
lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3849_; 
v___x_3842_ = lean_io_mono_nanos_now();
v___x_3843_ = l_Lean_SourceInfo_fromRef(v_ref_3801_, v___x_3841_);
v___x_3844_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__19));
v___x_3845_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__20));
lean_inc(v___x_3843_);
v___x_3846_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3843_);
lean_ctor_set(v___x_3846_, 1, v___x_3845_);
v___x_3847_ = l_Lean_Syntax_node1(v___x_3843_, v___x_3844_, v___x_3846_);
lean_inc_ref(v_type_3321_);
if (v_isShared_3839_ == 0)
{
lean_ctor_set_tag(v___x_3838_, 1);
lean_ctor_set(v___x_3838_, 0, v_type_3321_);
v___x_3849_ = v___x_3838_;
goto v_reusejp_3848_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_type_3321_);
v___x_3849_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3848_;
}
v_reusejp_3848_:
{
lean_object* v___x_3850_; lean_object* v___x_3851_; 
v___x_3850_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermAndSynthesize___boxed), 9, 2);
lean_closure_set(v___x_3850_, 0, v___x_3847_);
lean_closure_set(v___x_3850_, 1, v___x_3849_);
v___x_3851_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___x_3850_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3851_) == 0)
{
lean_object* v_a_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3859_; 
v_a_3852_ = lean_ctor_get(v___x_3851_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3851_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3854_ = v___x_3851_;
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
else
{
lean_inc(v_a_3852_);
lean_dec(v___x_3851_);
v___x_3854_ = lean_box(0);
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
v_resetjp_3853_:
{
lean_object* v___x_3857_; 
if (v_isShared_3855_ == 0)
{
lean_ctor_set_tag(v___x_3854_, 1);
v___x_3857_ = v___x_3854_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_a_3852_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
v___y_3808_ = v___x_3842_;
v___y_3809_ = v_a_3836_;
v_a_3810_ = v___x_3857_;
goto v___jp_3807_;
}
}
}
else
{
lean_object* v_a_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3867_; 
v_a_3860_ = lean_ctor_get(v___x_3851_, 0);
v_isSharedCheck_3867_ = !lean_is_exclusive(v___x_3851_);
if (v_isSharedCheck_3867_ == 0)
{
v___x_3862_ = v___x_3851_;
v_isShared_3863_ = v_isSharedCheck_3867_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_a_3860_);
lean_dec(v___x_3851_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3867_;
goto v_resetjp_3861_;
}
v_resetjp_3861_:
{
lean_object* v___x_3865_; 
if (v_isShared_3863_ == 0)
{
lean_ctor_set_tag(v___x_3862_, 0);
v___x_3865_ = v___x_3862_;
goto v_reusejp_3864_;
}
else
{
lean_object* v_reuseFailAlloc_3866_; 
v_reuseFailAlloc_3866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3866_, 0, v_a_3860_);
v___x_3865_ = v_reuseFailAlloc_3866_;
goto v_reusejp_3864_;
}
v_reusejp_3864_:
{
v___y_3808_ = v___x_3842_;
v___y_3809_ = v_a_3836_;
v_a_3810_ = v___x_3865_;
goto v___jp_3807_;
}
}
}
}
}
else
{
lean_object* v___x_3869_; uint8_t v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3877_; 
v___x_3869_ = lean_io_get_num_heartbeats();
v___x_3870_ = 0;
v___x_3871_ = l_Lean_SourceInfo_fromRef(v_ref_3801_, v___x_3870_);
v___x_3872_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__19));
v___x_3873_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__20));
lean_inc(v___x_3871_);
v___x_3874_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3874_, 0, v___x_3871_);
lean_ctor_set(v___x_3874_, 1, v___x_3873_);
v___x_3875_ = l_Lean_Syntax_node1(v___x_3871_, v___x_3872_, v___x_3874_);
lean_inc_ref(v_type_3321_);
if (v_isShared_3839_ == 0)
{
lean_ctor_set_tag(v___x_3838_, 1);
lean_ctor_set(v___x_3838_, 0, v_type_3321_);
v___x_3877_ = v___x_3838_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v_type_3321_);
v___x_3877_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
lean_object* v___x_3878_; lean_object* v___x_3879_; 
v___x_3878_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermAndSynthesize___boxed), 9, 2);
lean_closure_set(v___x_3878_, 0, v___x_3875_);
lean_closure_set(v___x_3878_, 1, v___x_3877_);
v___x_3879_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___x_3878_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3879_) == 0)
{
lean_object* v_a_3880_; lean_object* v___x_3882_; uint8_t v_isShared_3883_; uint8_t v_isSharedCheck_3887_; 
v_a_3880_ = lean_ctor_get(v___x_3879_, 0);
v_isSharedCheck_3887_ = !lean_is_exclusive(v___x_3879_);
if (v_isSharedCheck_3887_ == 0)
{
v___x_3882_ = v___x_3879_;
v_isShared_3883_ = v_isSharedCheck_3887_;
goto v_resetjp_3881_;
}
else
{
lean_inc(v_a_3880_);
lean_dec(v___x_3879_);
v___x_3882_ = lean_box(0);
v_isShared_3883_ = v_isSharedCheck_3887_;
goto v_resetjp_3881_;
}
v_resetjp_3881_:
{
lean_object* v___x_3885_; 
if (v_isShared_3883_ == 0)
{
lean_ctor_set_tag(v___x_3882_, 1);
v___x_3885_ = v___x_3882_;
goto v_reusejp_3884_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v_a_3880_);
v___x_3885_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3884_;
}
v_reusejp_3884_:
{
v___y_3823_ = v___x_3869_;
v___y_3824_ = v_a_3836_;
v_a_3825_ = v___x_3885_;
goto v___jp_3822_;
}
}
}
else
{
lean_object* v_a_3888_; lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_3895_; 
v_a_3888_ = lean_ctor_get(v___x_3879_, 0);
v_isSharedCheck_3895_ = !lean_is_exclusive(v___x_3879_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3890_ = v___x_3879_;
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
else
{
lean_inc(v_a_3888_);
lean_dec(v___x_3879_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
lean_object* v___x_3893_; 
if (v_isShared_3891_ == 0)
{
lean_ctor_set_tag(v___x_3890_, 0);
v___x_3893_ = v___x_3890_;
goto v_reusejp_3892_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v_a_3888_);
v___x_3893_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3892_;
}
v_reusejp_3892_:
{
v___y_3823_ = v___x_3869_;
v___y_3824_ = v_a_3836_;
v_a_3825_ = v___x_3893_;
goto v___jp_3822_;
}
}
}
}
}
}
}
}
}
v___jp_3322_:
{
lean_object* v___x_3331_; uint8_t v___x_3332_; uint8_t v___x_3333_; lean_object* v___x_3334_; 
v___x_3331_ = l_Array_append___redArg(v_xs_3306_, v___y_3326_);
lean_dec_ref(v___y_3326_);
v___x_3332_ = 0;
v___x_3333_ = 1;
v___x_3334_ = l_Lean_Meta_mkForallFVars(v___x_3331_, v_type_3321_, v___x_3332_, v___y_3325_, v___y_3325_, v___x_3333_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_);
if (lean_obj_tag(v___x_3334_) == 0)
{
lean_object* v_a_3335_; lean_object* v___x_3336_; 
v_a_3335_ = lean_ctor_get(v___x_3334_, 0);
lean_inc(v_a_3335_);
lean_dec_ref_known(v___x_3334_, 1);
v___x_3336_ = l_Lean_Meta_mkLambdaFVars(v___x_3331_, v___y_3323_, v___x_3332_, v___y_3325_, v___x_3332_, v___y_3325_, v___x_3333_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_);
lean_dec_ref(v___x_3331_);
if (lean_obj_tag(v___x_3336_) == 0)
{
lean_object* v_a_3337_; lean_object* v___x_3339_; uint8_t v_isShared_3340_; uint8_t v_isSharedCheck_3346_; 
v_a_3337_ = lean_ctor_get(v___x_3336_, 0);
v_isSharedCheck_3346_ = !lean_is_exclusive(v___x_3336_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3339_ = v___x_3336_;
v_isShared_3340_ = v_isSharedCheck_3346_;
goto v_resetjp_3338_;
}
else
{
lean_inc(v_a_3337_);
lean_dec(v___x_3336_);
v___x_3339_ = lean_box(0);
v_isShared_3340_ = v_isSharedCheck_3346_;
goto v_resetjp_3338_;
}
v_resetjp_3338_:
{
lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3344_; 
v___x_3341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3341_, 0, v_a_3337_);
lean_ctor_set(v___x_3341_, 1, v___y_3324_);
v___x_3342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3342_, 0, v_a_3335_);
lean_ctor_set(v___x_3342_, 1, v___x_3341_);
if (v_isShared_3340_ == 0)
{
lean_ctor_set(v___x_3339_, 0, v___x_3342_);
v___x_3344_ = v___x_3339_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3345_; 
v_reuseFailAlloc_3345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3345_, 0, v___x_3342_);
v___x_3344_ = v_reuseFailAlloc_3345_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
return v___x_3344_;
}
}
}
else
{
lean_object* v_a_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3354_; 
lean_dec(v_a_3335_);
lean_dec(v___y_3324_);
v_a_3347_ = lean_ctor_get(v___x_3336_, 0);
v_isSharedCheck_3354_ = !lean_is_exclusive(v___x_3336_);
if (v_isSharedCheck_3354_ == 0)
{
v___x_3349_ = v___x_3336_;
v_isShared_3350_ = v_isSharedCheck_3354_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_a_3347_);
lean_dec(v___x_3336_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3354_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3352_; 
if (v_isShared_3350_ == 0)
{
v___x_3352_ = v___x_3349_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v_a_3347_);
v___x_3352_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
return v___x_3352_;
}
}
}
}
else
{
lean_object* v_a_3355_; lean_object* v___x_3357_; uint8_t v_isShared_3358_; uint8_t v_isSharedCheck_3362_; 
lean_dec_ref(v___x_3331_);
lean_dec(v___y_3324_);
lean_dec_ref(v___y_3323_);
v_a_3355_ = lean_ctor_get(v___x_3334_, 0);
v_isSharedCheck_3362_ = !lean_is_exclusive(v___x_3334_);
if (v_isSharedCheck_3362_ == 0)
{
v___x_3357_ = v___x_3334_;
v_isShared_3358_ = v_isSharedCheck_3362_;
goto v_resetjp_3356_;
}
else
{
lean_inc(v_a_3355_);
lean_dec(v___x_3334_);
v___x_3357_ = lean_box(0);
v_isShared_3358_ = v_isSharedCheck_3362_;
goto v_resetjp_3356_;
}
v_resetjp_3356_:
{
lean_object* v___x_3360_; 
if (v_isShared_3358_ == 0)
{
v___x_3360_ = v___x_3357_;
goto v_reusejp_3359_;
}
else
{
lean_object* v_reuseFailAlloc_3361_; 
v_reuseFailAlloc_3361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3361_, 0, v_a_3355_);
v___x_3360_ = v_reuseFailAlloc_3361_;
goto v_reusejp_3359_;
}
v_reusejp_3359_:
{
return v___x_3360_;
}
}
}
}
v___jp_3363_:
{
lean_object* v___x_3375_; lean_object* v___x_3376_; 
v___x_3375_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3375_, 0, v___y_3369_);
lean_ctor_set(v___x_3375_, 1, v___y_3374_);
lean_inc(v___y_3365_);
v___x_3376_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg(v___y_3365_, v___x_3375_, v___y_3364_, v___y_3366_, v___y_3371_, v___y_3367_);
if (lean_obj_tag(v___x_3376_) == 0)
{
lean_dec_ref_known(v___x_3376_, 1);
v___y_3323_ = v___y_3368_;
v___y_3324_ = v___y_3370_;
v___y_3325_ = v___y_3373_;
v___y_3326_ = v___y_3372_;
v___y_3327_ = v___y_3364_;
v___y_3328_ = v___y_3366_;
v___y_3329_ = v___y_3371_;
v___y_3330_ = v___y_3367_;
goto v___jp_3322_;
}
else
{
lean_object* v_a_3377_; lean_object* v___x_3379_; uint8_t v_isShared_3380_; uint8_t v_isSharedCheck_3384_; 
lean_dec_ref(v___y_3372_);
lean_dec(v___y_3370_);
lean_dec_ref(v___y_3368_);
lean_dec_ref(v_type_3321_);
lean_dec_ref(v_xs_3306_);
v_a_3377_ = lean_ctor_get(v___x_3376_, 0);
v_isSharedCheck_3384_ = !lean_is_exclusive(v___x_3376_);
if (v_isSharedCheck_3384_ == 0)
{
v___x_3379_ = v___x_3376_;
v_isShared_3380_ = v_isSharedCheck_3384_;
goto v_resetjp_3378_;
}
else
{
lean_inc(v_a_3377_);
lean_dec(v___x_3376_);
v___x_3379_ = lean_box(0);
v_isShared_3380_ = v_isSharedCheck_3384_;
goto v_resetjp_3378_;
}
v_resetjp_3378_:
{
lean_object* v___x_3382_; 
if (v_isShared_3380_ == 0)
{
v___x_3382_ = v___x_3379_;
goto v_reusejp_3381_;
}
else
{
lean_object* v_reuseFailAlloc_3383_; 
v_reuseFailAlloc_3383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3383_, 0, v_a_3377_);
v___x_3382_ = v_reuseFailAlloc_3383_;
goto v_reusejp_3381_;
}
v_reusejp_3381_:
{
return v___x_3382_;
}
}
}
}
v___jp_3385_:
{
uint8_t v___x_3397_; 
v___x_3397_ = lean_nat_dec_eq(v___y_3387_, v___y_3396_);
lean_dec(v___y_3396_);
if (v___x_3397_ == 0)
{
lean_object* v___x_3398_; lean_object* v___x_3399_; 
lean_dec_ref(v___y_3394_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
lean_dec(v___y_3387_);
lean_dec_ref(v_type_3321_);
lean_dec(v___x_3307_);
lean_dec_ref(v_xs_3306_);
v___x_3398_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__3, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__3_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__3);
v___x_3399_ = l_panic___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__2(v___x_3398_, v___y_3395_, v___y_3389_, v___y_3386_, v___y_3388_, v___y_3393_, v___y_3390_);
return v___x_3399_;
}
else
{
lean_object* v_toCold_3400_; lean_object* v_options_3401_; uint8_t v_hasTrace_3402_; 
v_toCold_3400_ = lean_ctor_get(v___y_3393_, 0);
v_options_3401_ = lean_ctor_get(v_toCold_3400_, 2);
v_hasTrace_3402_ = lean_ctor_get_uint8(v_options_3401_, sizeof(void*)*1);
if (v_hasTrace_3402_ == 0)
{
lean_dec(v___y_3387_);
lean_dec(v___x_3307_);
v___y_3323_ = v___y_3391_;
v___y_3324_ = v___y_3392_;
v___y_3325_ = v___x_3397_;
v___y_3326_ = v___y_3394_;
v___y_3327_ = v___y_3386_;
v___y_3328_ = v___y_3388_;
v___y_3329_ = v___y_3393_;
v___y_3330_ = v___y_3390_;
goto v___jp_3322_;
}
else
{
lean_object* v_inheritedTraceOptions_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; uint8_t v___x_3406_; 
v_inheritedTraceOptions_3403_ = lean_ctor_get(v_toCold_3400_, 11);
v___x_3404_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3));
v___x_3405_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6);
v___x_3406_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3403_, v_options_3401_, v___x_3405_);
if (v___x_3406_ == 0)
{
lean_dec(v___y_3387_);
lean_dec(v___x_3307_);
v___y_3323_ = v___y_3391_;
v___y_3324_ = v___y_3392_;
v___y_3325_ = v___x_3397_;
v___y_3326_ = v___y_3394_;
v___y_3327_ = v___y_3386_;
v___y_3328_ = v___y_3388_;
v___y_3329_ = v___y_3393_;
v___y_3330_ = v___y_3390_;
goto v___jp_3322_;
}
else
{
lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; uint8_t v___x_3411_; 
v___x_3407_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__5, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__5_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__5);
v___x_3408_ = lean_unsigned_to_nat(30u);
lean_inc_ref(v___y_3391_);
v___x_3409_ = l_Lean_inlineExpr(v___y_3391_, v___x_3408_);
v___x_3410_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3410_, 0, v___x_3407_);
lean_ctor_set(v___x_3410_, 1, v___x_3409_);
v___x_3411_ = lean_nat_dec_eq(v___y_3387_, v___x_3307_);
lean_dec(v___x_3307_);
lean_dec(v___y_3387_);
if (v___x_3411_ == 0)
{
lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; 
v___x_3412_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__7, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__7_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__7);
lean_inc_ref(v___y_3394_);
v___x_3413_ = lean_array_to_list(v___y_3394_);
v___x_3414_ = lean_box(0);
v___x_3415_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__3(v___x_3413_, v___x_3414_);
v___x_3416_ = l_Lean_MessageData_ofList(v___x_3415_);
v___x_3417_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3417_, 0, v___x_3412_);
lean_ctor_set(v___x_3417_, 1, v___x_3416_);
v___x_3418_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__9, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__9_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__9);
v___x_3419_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3419_, 0, v___x_3417_);
lean_ctor_set(v___x_3419_, 1, v___x_3418_);
v___y_3364_ = v___y_3386_;
v___y_3365_ = v___x_3404_;
v___y_3366_ = v___y_3388_;
v___y_3367_ = v___y_3390_;
v___y_3368_ = v___y_3391_;
v___y_3369_ = v___x_3410_;
v___y_3370_ = v___y_3392_;
v___y_3371_ = v___y_3393_;
v___y_3372_ = v___y_3394_;
v___y_3373_ = v___x_3397_;
v___y_3374_ = v___x_3419_;
goto v___jp_3363_;
}
else
{
lean_object* v___x_3420_; 
v___x_3420_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__10, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__10_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__10);
v___y_3364_ = v___y_3386_;
v___y_3365_ = v___x_3404_;
v___y_3366_ = v___y_3388_;
v___y_3367_ = v___y_3390_;
v___y_3368_ = v___y_3391_;
v___y_3369_ = v___x_3410_;
v___y_3370_ = v___y_3392_;
v___y_3371_ = v___y_3393_;
v___y_3372_ = v___y_3394_;
v___y_3373_ = v___x_3397_;
v___y_3374_ = v___x_3420_;
goto v___jp_3363_;
}
}
}
}
}
v___jp_3421_:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; 
v___x_3430_ = lean_box(1);
lean_inc_ref(v___y_3426_);
v___x_3431_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_collectUsedLocalsInsts(v___x_3430_, v_localInst2Index_3312_, v___y_3426_);
v___x_3432_ = lean_array_get_size(v___y_3429_);
if (lean_obj_tag(v___x_3431_) == 0)
{
lean_object* v_size_3433_; 
v_size_3433_ = lean_ctor_get(v___x_3431_, 0);
lean_inc(v_size_3433_);
v___y_3386_ = v___y_3422_;
v___y_3387_ = v___x_3432_;
v___y_3388_ = v___y_3424_;
v___y_3389_ = v___y_3423_;
v___y_3390_ = v___y_3425_;
v___y_3391_ = v___y_3426_;
v___y_3392_ = v___x_3431_;
v___y_3393_ = v___y_3427_;
v___y_3394_ = v___y_3429_;
v___y_3395_ = v___y_3428_;
v___y_3396_ = v_size_3433_;
goto v___jp_3385_;
}
else
{
lean_inc(v___x_3307_);
v___y_3386_ = v___y_3422_;
v___y_3387_ = v___x_3432_;
v___y_3388_ = v___y_3424_;
v___y_3389_ = v___y_3423_;
v___y_3390_ = v___y_3425_;
v___y_3391_ = v___y_3426_;
v___y_3392_ = v___x_3431_;
v___y_3393_ = v___y_3427_;
v___y_3394_ = v___y_3429_;
v___y_3395_ = v___y_3428_;
v___y_3396_ = v___x_3307_;
goto v___jp_3385_;
}
}
v___jp_3434_:
{
lean_object* v___x_3442_; lean_object* v___x_3443_; uint8_t v___x_3444_; 
v___x_3442_ = lean_array_get_size(v_insts_3311_);
v___x_3443_ = lean_mk_empty_array_with_capacity(v___x_3307_);
v___x_3444_ = lean_nat_dec_lt(v___x_3307_, v___x_3442_);
if (v___x_3444_ == 0)
{
v___y_3422_ = v___y_3438_;
v___y_3423_ = v___y_3437_;
v___y_3424_ = v___y_3439_;
v___y_3425_ = v___y_3441_;
v___y_3426_ = v___y_3435_;
v___y_3427_ = v___y_3440_;
v___y_3428_ = v___y_3436_;
v___y_3429_ = v___x_3443_;
goto v___jp_3421_;
}
else
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v_visitedExpr_3450_; uint8_t v___x_3451_; 
v___x_3445_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__11, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__11_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__11);
lean_inc(v___x_3307_);
v___x_3446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3307_);
lean_ctor_set(v___x_3446_, 1, v___x_3445_);
v___x_3447_ = lean_box(1);
lean_inc_ref(v___x_3443_);
v___x_3448_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3446_);
lean_ctor_set(v___x_3448_, 1, v___x_3447_);
lean_ctor_set(v___x_3448_, 2, v___x_3443_);
lean_inc_ref(v___y_3435_);
v___x_3449_ = l_Lean_collectFVars(v___x_3448_, v___y_3435_);
v_visitedExpr_3450_ = lean_ctor_get(v___x_3449_, 0);
lean_inc_ref(v_visitedExpr_3450_);
lean_dec_ref(v___x_3449_);
v___x_3451_ = lean_nat_dec_le(v___x_3442_, v___x_3442_);
if (v___x_3451_ == 0)
{
if (v___x_3444_ == 0)
{
lean_dec_ref(v_visitedExpr_3450_);
v___y_3422_ = v___y_3438_;
v___y_3423_ = v___y_3437_;
v___y_3424_ = v___y_3439_;
v___y_3425_ = v___y_3441_;
v___y_3426_ = v___y_3435_;
v___y_3427_ = v___y_3440_;
v___y_3428_ = v___y_3436_;
v___y_3429_ = v___x_3443_;
goto v___jp_3421_;
}
else
{
size_t v___x_3452_; size_t v___x_3453_; lean_object* v___x_3454_; 
v___x_3452_ = ((size_t)0ULL);
v___x_3453_ = lean_usize_of_nat(v___x_3442_);
v___x_3454_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__4(v_visitedExpr_3450_, v_insts_3311_, v___x_3452_, v___x_3453_, v___x_3443_);
lean_dec_ref(v_visitedExpr_3450_);
v___y_3422_ = v___y_3438_;
v___y_3423_ = v___y_3437_;
v___y_3424_ = v___y_3439_;
v___y_3425_ = v___y_3441_;
v___y_3426_ = v___y_3435_;
v___y_3427_ = v___y_3440_;
v___y_3428_ = v___y_3436_;
v___y_3429_ = v___x_3454_;
goto v___jp_3421_;
}
}
else
{
size_t v___x_3455_; size_t v___x_3456_; lean_object* v___x_3457_; 
v___x_3455_ = ((size_t)0ULL);
v___x_3456_ = lean_usize_of_nat(v___x_3442_);
v___x_3457_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__4(v_visitedExpr_3450_, v_insts_3311_, v___x_3455_, v___x_3456_, v___x_3443_);
lean_dec_ref(v_visitedExpr_3450_);
v___y_3422_ = v___y_3438_;
v___y_3423_ = v___y_3437_;
v___y_3424_ = v___y_3439_;
v___y_3425_ = v___y_3441_;
v___y_3426_ = v___y_3435_;
v___y_3427_ = v___y_3440_;
v___y_3428_ = v___y_3436_;
v___y_3429_ = v___x_3457_;
goto v___jp_3421_;
}
}
}
v___jp_3458_:
{
lean_object* v___x_3460_; 
lean_inc_ref(v_val_3459_);
v___x_3460_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_solveMVarsWithDefault(v_val_3459_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
if (lean_obj_tag(v___x_3460_) == 0)
{
lean_object* v___x_3461_; lean_object* v_a_3462_; uint8_t v___x_3463_; 
lean_dec_ref_known(v___x_3460_, 1);
v___x_3461_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__1___redArg(v_val_3459_, v___y_3316_);
v_a_3462_ = lean_ctor_get(v___x_3461_, 0);
lean_inc(v_a_3462_);
lean_dec_ref(v___x_3461_);
v___x_3463_ = l_Lean_Expr_hasMVar(v_a_3462_);
if (v___x_3463_ == 0)
{
v___y_3435_ = v_a_3462_;
v___y_3436_ = v___y_3313_;
v___y_3437_ = v___y_3314_;
v___y_3438_ = v___y_3315_;
v___y_3439_ = v___y_3316_;
v___y_3440_ = v___y_3317_;
v___y_3441_ = v___y_3318_;
goto v___jp_3434_;
}
else
{
lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v_a_3469_; lean_object* v___x_3471_; uint8_t v_isShared_3472_; uint8_t v_isSharedCheck_3476_; 
lean_dec_ref(v_type_3321_);
lean_dec(v_localInst2Index_3312_);
lean_dec(v___x_3307_);
lean_dec_ref(v_xs_3306_);
v___x_3464_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__13, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__13_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___closed__13);
v___x_3465_ = lean_unsigned_to_nat(30u);
v___x_3466_ = l_Lean_inlineExprTrailing(v_a_3462_, v___x_3465_);
v___x_3467_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3467_, 0, v___x_3464_);
lean_ctor_set(v___x_3467_, 1, v___x_3466_);
v___x_3468_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1___redArg(v___x_3467_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
v_a_3469_ = lean_ctor_get(v___x_3468_, 0);
v_isSharedCheck_3476_ = !lean_is_exclusive(v___x_3468_);
if (v_isSharedCheck_3476_ == 0)
{
v___x_3471_ = v___x_3468_;
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
else
{
lean_inc(v_a_3469_);
lean_dec(v___x_3468_);
v___x_3471_ = lean_box(0);
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
v_resetjp_3470_:
{
lean_object* v___x_3474_; 
if (v_isShared_3472_ == 0)
{
v___x_3474_ = v___x_3471_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3475_; 
v_reuseFailAlloc_3475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3475_, 0, v_a_3469_);
v___x_3474_ = v_reuseFailAlloc_3475_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
return v___x_3474_;
}
}
}
}
else
{
lean_object* v_a_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3484_; 
lean_dec_ref(v_val_3459_);
lean_dec_ref(v_type_3321_);
lean_dec(v_localInst2Index_3312_);
lean_dec(v___x_3307_);
lean_dec_ref(v_xs_3306_);
v_a_3477_ = lean_ctor_get(v___x_3460_, 0);
v_isSharedCheck_3484_ = !lean_is_exclusive(v___x_3460_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3479_ = v___x_3460_;
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_a_3477_);
lean_dec(v___x_3460_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v___x_3482_; 
if (v_isShared_3480_ == 0)
{
v___x_3482_ = v___x_3479_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v_a_3477_);
v___x_3482_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
return v___x_3482_;
}
}
}
}
v___jp_3485_:
{
if (lean_obj_tag(v___y_3486_) == 0)
{
lean_object* v_a_3487_; 
v_a_3487_ = lean_ctor_get(v___y_3486_, 0);
lean_inc(v_a_3487_);
lean_dec_ref_known(v___y_3486_, 1);
v_val_3459_ = v_a_3487_;
goto v___jp_3458_;
}
else
{
lean_object* v_a_3488_; lean_object* v___x_3490_; uint8_t v_isShared_3491_; uint8_t v_isSharedCheck_3495_; 
lean_dec_ref(v_type_3321_);
lean_dec(v_localInst2Index_3312_);
lean_dec(v___x_3307_);
lean_dec_ref(v_xs_3306_);
v_a_3488_ = lean_ctor_get(v___y_3486_, 0);
v_isSharedCheck_3495_ = !lean_is_exclusive(v___y_3486_);
if (v_isSharedCheck_3495_ == 0)
{
v___x_3490_ = v___y_3486_;
v_isShared_3491_ = v_isSharedCheck_3495_;
goto v_resetjp_3489_;
}
else
{
lean_inc(v_a_3488_);
lean_dec(v___y_3486_);
v___x_3490_ = lean_box(0);
v_isShared_3491_ = v_isSharedCheck_3495_;
goto v_resetjp_3489_;
}
v_resetjp_3489_:
{
lean_object* v___x_3493_; 
if (v_isShared_3491_ == 0)
{
v___x_3493_ = v___x_3490_;
goto v_reusejp_3492_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v_a_3488_);
v___x_3493_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3492_;
}
v_reusejp_3492_:
{
return v___x_3493_;
}
}
}
}
v___jp_3496_:
{
if (lean_obj_tag(v___y_3497_) == 0)
{
lean_object* v_a_3498_; 
v_a_3498_ = lean_ctor_get(v___y_3497_, 0);
lean_inc(v_a_3498_);
lean_dec_ref_known(v___y_3497_, 1);
v_val_3459_ = v_a_3498_;
goto v___jp_3458_;
}
else
{
lean_object* v_a_3499_; lean_object* v___x_3501_; uint8_t v_isShared_3502_; uint8_t v_isSharedCheck_3506_; 
lean_dec_ref(v_type_3321_);
lean_dec(v_localInst2Index_3312_);
lean_dec(v___x_3307_);
lean_dec_ref(v_xs_3306_);
v_a_3499_ = lean_ctor_get(v___y_3497_, 0);
v_isSharedCheck_3506_ = !lean_is_exclusive(v___y_3497_);
if (v_isSharedCheck_3506_ == 0)
{
v___x_3501_ = v___y_3497_;
v_isShared_3502_ = v_isSharedCheck_3506_;
goto v_resetjp_3500_;
}
else
{
lean_inc(v_a_3499_);
lean_dec(v___y_3497_);
v___x_3501_ = lean_box(0);
v_isShared_3502_ = v_isSharedCheck_3506_;
goto v_resetjp_3500_;
}
v_resetjp_3500_:
{
lean_object* v___x_3504_; 
if (v_isShared_3502_ == 0)
{
v___x_3504_ = v___x_3501_;
goto v_reusejp_3503_;
}
else
{
lean_object* v_reuseFailAlloc_3505_; 
v_reuseFailAlloc_3505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3505_, 0, v_a_3499_);
v___x_3504_ = v_reuseFailAlloc_3505_;
goto v_reusejp_3503_;
}
v_reusejp_3503_:
{
return v___x_3504_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___boxed(lean_object* v_inductiveTypeName_3908_, lean_object* v_us_3909_, lean_object* v_xs_3910_, lean_object* v___x_3911_, lean_object* v_ctorName_3912_, lean_object* v___x_3913_, lean_object* v___f_3914_, lean_object* v_insts_3915_, lean_object* v_localInst2Index_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_){
_start:
{
lean_object* v_res_3924_; 
v_res_3924_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6(v_inductiveTypeName_3908_, v_us_3909_, v_xs_3910_, v___x_3911_, v_ctorName_3912_, v___x_3913_, v___f_3914_, v_insts_3915_, v_localInst2Index_3916_, v___y_3917_, v___y_3918_, v___y_3919_, v___y_3920_, v___y_3921_, v___y_3922_);
lean_dec(v___y_3922_);
lean_dec_ref(v___y_3921_);
lean_dec(v___y_3920_);
lean_dec_ref(v___y_3919_);
lean_dec(v___y_3918_);
lean_dec_ref(v___y_3917_);
lean_dec_ref(v_insts_3915_);
lean_dec_ref(v___x_3913_);
return v_res_3924_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__8(size_t v_sz_3925_, size_t v_i_3926_, lean_object* v_bs_3927_){
_start:
{
uint8_t v___x_3928_; 
v___x_3928_ = lean_usize_dec_lt(v_i_3926_, v_sz_3925_);
if (v___x_3928_ == 0)
{
return v_bs_3927_;
}
else
{
lean_object* v_v_3929_; lean_object* v___x_3930_; lean_object* v_bs_x27_3931_; lean_object* v___x_3932_; uint8_t v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; size_t v___x_3936_; size_t v___x_3937_; lean_object* v___x_3938_; 
v_v_3929_ = lean_array_uget(v_bs_3927_, v_i_3926_);
v___x_3930_ = lean_unsigned_to_nat(0u);
v_bs_x27_3931_ = lean_array_uset(v_bs_3927_, v_i_3926_, v___x_3930_);
v___x_3932_ = l_Lean_Expr_fvarId_x21(v_v_3929_);
lean_dec(v_v_3929_);
v___x_3933_ = 1;
v___x_3934_ = lean_box(v___x_3933_);
v___x_3935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3935_, 0, v___x_3932_);
lean_ctor_set(v___x_3935_, 1, v___x_3934_);
v___x_3936_ = ((size_t)1ULL);
v___x_3937_ = lean_usize_add(v_i_3926_, v___x_3936_);
v___x_3938_ = lean_array_uset(v_bs_x27_3931_, v_i_3926_, v___x_3935_);
v_i_3926_ = v___x_3937_;
v_bs_3927_ = v___x_3938_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__8___boxed(lean_object* v_sz_3940_, lean_object* v_i_3941_, lean_object* v_bs_3942_){
_start:
{
size_t v_sz_boxed_3943_; size_t v_i_boxed_3944_; lean_object* v_res_3945_; 
v_sz_boxed_3943_ = lean_unbox_usize(v_sz_3940_);
lean_dec(v_sz_3940_);
v_i_boxed_3944_ = lean_unbox_usize(v_i_3941_);
lean_dec(v_i_3941_);
v_res_3945_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__8(v_sz_boxed_3943_, v_i_boxed_3944_, v_bs_3942_);
return v_res_3945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9___redArg___lam__0(lean_object* v_k_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_){
_start:
{
lean_object* v___x_3954_; 
lean_inc(v___y_3948_);
lean_inc_ref(v___y_3947_);
v___x_3954_ = lean_apply_7(v_k_3946_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, lean_box(0));
return v___x_3954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9___redArg___lam__0___boxed(lean_object* v_k_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_){
_start:
{
lean_object* v_res_3963_; 
v_res_3963_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9___redArg___lam__0(v_k_3955_, v___y_3956_, v___y_3957_, v___y_3958_, v___y_3959_, v___y_3960_, v___y_3961_);
lean_dec(v___y_3957_);
lean_dec_ref(v___y_3956_);
return v_res_3963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9___redArg(lean_object* v_bs_3964_, lean_object* v_k_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_){
_start:
{
lean_object* v___f_3973_; lean_object* v___x_3974_; 
lean_inc(v___y_3967_);
lean_inc_ref(v___y_3966_);
v___f_3973_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_3973_, 0, v_k_3965_);
lean_closure_set(v___f_3973_, 1, v___y_3966_);
lean_closure_set(v___f_3973_, 2, v___y_3967_);
v___x_3974_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_box(0), v_bs_3964_, v___f_3973_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_);
if (lean_obj_tag(v___x_3974_) == 0)
{
return v___x_3974_;
}
else
{
lean_object* v_a_3975_; lean_object* v___x_3977_; uint8_t v_isShared_3978_; uint8_t v_isSharedCheck_3982_; 
v_a_3975_ = lean_ctor_get(v___x_3974_, 0);
v_isSharedCheck_3982_ = !lean_is_exclusive(v___x_3974_);
if (v_isSharedCheck_3982_ == 0)
{
v___x_3977_ = v___x_3974_;
v_isShared_3978_ = v_isSharedCheck_3982_;
goto v_resetjp_3976_;
}
else
{
lean_inc(v_a_3975_);
lean_dec(v___x_3974_);
v___x_3977_ = lean_box(0);
v_isShared_3978_ = v_isSharedCheck_3982_;
goto v_resetjp_3976_;
}
v_resetjp_3976_:
{
lean_object* v___x_3980_; 
if (v_isShared_3978_ == 0)
{
v___x_3980_ = v___x_3977_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3981_; 
v_reuseFailAlloc_3981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3981_, 0, v_a_3975_);
v___x_3980_ = v_reuseFailAlloc_3981_;
goto v_reusejp_3979_;
}
v_reusejp_3979_:
{
return v___x_3980_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9___redArg___boxed(lean_object* v_bs_3983_, lean_object* v_k_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_){
_start:
{
lean_object* v_res_3992_; 
v_res_3992_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9___redArg(v_bs_3983_, v_k_3984_, v___y_3985_, v___y_3986_, v___y_3987_, v___y_3988_, v___y_3989_, v___y_3990_);
lean_dec(v___y_3990_);
lean_dec_ref(v___y_3989_);
lean_dec(v___y_3988_);
lean_dec_ref(v___y_3987_);
lean_dec(v___y_3986_);
lean_dec_ref(v___y_3985_);
lean_dec_ref(v_bs_3983_);
return v_res_3992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7___redArg(lean_object* v_bs_3993_, lean_object* v_k_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_){
_start:
{
size_t v_sz_4002_; size_t v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
v_sz_4002_ = lean_array_size(v_bs_3993_);
v___x_4003_ = ((size_t)0ULL);
v___x_4004_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__8(v_sz_4002_, v___x_4003_, v_bs_3993_);
v___x_4005_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9___redArg(v___x_4004_, v_k_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_);
lean_dec_ref(v___x_4004_);
return v___x_4005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7___redArg___boxed(lean_object* v_bs_4006_, lean_object* v_k_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_){
_start:
{
lean_object* v_res_4015_; 
v_res_4015_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7___redArg(v_bs_4006_, v_k_4007_, v___y_4008_, v___y_4009_, v___y_4010_, v___y_4011_, v___y_4012_, v___y_4013_);
lean_dec(v___y_4013_);
lean_dec_ref(v___y_4012_);
lean_dec(v___y_4011_);
lean_dec_ref(v___y_4010_);
lean_dec(v___y_4009_);
lean_dec_ref(v___y_4008_);
return v_res_4015_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__3(lean_object* v_numParams_4016_, lean_object* v_inductiveTypeName_4017_, lean_object* v_us_4018_, lean_object* v_ctorName_4019_, lean_object* v___f_4020_, uint8_t v_addHypotheses_4021_, lean_object* v_xs_4022_, lean_object* v_x_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_){
_start:
{
lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___f_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; 
v___x_4031_ = lean_unsigned_to_nat(0u);
lean_inc_ref_n(v_xs_4022_, 2);
v___x_4032_ = l_Array_toSubarray___redArg(v_xs_4022_, v___x_4031_, v_numParams_4016_);
v___x_4033_ = l_Subarray_copy___redArg(v___x_4032_);
lean_inc_ref(v___x_4033_);
v___f_4034_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__6___boxed), 16, 7);
lean_closure_set(v___f_4034_, 0, v_inductiveTypeName_4017_);
lean_closure_set(v___f_4034_, 1, v_us_4018_);
lean_closure_set(v___f_4034_, 2, v_xs_4022_);
lean_closure_set(v___f_4034_, 3, v___x_4031_);
lean_closure_set(v___f_4034_, 4, v_ctorName_4019_);
lean_closure_set(v___f_4034_, 5, v___x_4033_);
lean_closure_set(v___f_4034_, 6, v___f_4020_);
v___x_4035_ = lean_box(v_addHypotheses_4021_);
v___x_4036_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParams___boxed), 11, 4);
lean_closure_set(v___x_4036_, 0, v___x_4035_);
lean_closure_set(v___x_4036_, 1, lean_box(0));
lean_closure_set(v___x_4036_, 2, v___x_4033_);
lean_closure_set(v___x_4036_, 3, v___f_4034_);
v___x_4037_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7___redArg(v_xs_4022_, v___x_4036_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_);
return v___x_4037_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__3___boxed(lean_object* v_numParams_4038_, lean_object* v_inductiveTypeName_4039_, lean_object* v_us_4040_, lean_object* v_ctorName_4041_, lean_object* v___f_4042_, lean_object* v_addHypotheses_4043_, lean_object* v_xs_4044_, lean_object* v_x_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_){
_start:
{
uint8_t v_addHypotheses_boxed_4053_; lean_object* v_res_4054_; 
v_addHypotheses_boxed_4053_ = lean_unbox(v_addHypotheses_4043_);
v_res_4054_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__3(v_numParams_4038_, v_inductiveTypeName_4039_, v_us_4040_, v_ctorName_4041_, v___f_4042_, v_addHypotheses_boxed_4053_, v_xs_4044_, v_x_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_, v___y_4050_, v___y_4051_);
lean_dec(v___y_4051_);
lean_dec_ref(v___y_4050_);
lean_dec(v___y_4049_);
lean_dec_ref(v___y_4048_);
lean_dec(v___y_4047_);
lean_dec_ref(v___y_4046_);
lean_dec_ref(v_x_4045_);
return v_res_4054_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__0(lean_object* v_a_4055_, lean_object* v_a_4056_){
_start:
{
if (lean_obj_tag(v_a_4055_) == 0)
{
lean_object* v___x_4057_; 
v___x_4057_ = l_List_reverse___redArg(v_a_4056_);
return v___x_4057_;
}
else
{
lean_object* v_head_4058_; lean_object* v_tail_4059_; lean_object* v___x_4061_; uint8_t v_isShared_4062_; uint8_t v_isSharedCheck_4068_; 
v_head_4058_ = lean_ctor_get(v_a_4055_, 0);
v_tail_4059_ = lean_ctor_get(v_a_4055_, 1);
v_isSharedCheck_4068_ = !lean_is_exclusive(v_a_4055_);
if (v_isSharedCheck_4068_ == 0)
{
v___x_4061_ = v_a_4055_;
v_isShared_4062_ = v_isSharedCheck_4068_;
goto v_resetjp_4060_;
}
else
{
lean_inc(v_tail_4059_);
lean_inc(v_head_4058_);
lean_dec(v_a_4055_);
v___x_4061_ = lean_box(0);
v_isShared_4062_ = v_isSharedCheck_4068_;
goto v_resetjp_4060_;
}
v_resetjp_4060_:
{
lean_object* v___x_4063_; lean_object* v___x_4065_; 
v___x_4063_ = l_Lean_Level_param___override(v_head_4058_);
if (v_isShared_4062_ == 0)
{
lean_ctor_set(v___x_4061_, 1, v_a_4056_);
lean_ctor_set(v___x_4061_, 0, v___x_4063_);
v___x_4065_ = v___x_4061_;
goto v_reusejp_4064_;
}
else
{
lean_object* v_reuseFailAlloc_4067_; 
v_reuseFailAlloc_4067_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4067_, 0, v___x_4063_);
lean_ctor_set(v_reuseFailAlloc_4067_, 1, v_a_4056_);
v___x_4065_ = v_reuseFailAlloc_4067_;
goto v_reusejp_4064_;
}
v_reusejp_4064_:
{
v_a_4055_ = v_tail_4059_;
v_a_4056_ = v___x_4065_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue(lean_object* v_inductiveTypeName_4070_, lean_object* v_ctorName_4071_, uint8_t v_addHypotheses_4072_, lean_object* v_indVal_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_){
_start:
{
lean_object* v_toConstantVal_4081_; lean_object* v_numParams_4082_; lean_object* v_levelParams_4083_; lean_object* v_type_4084_; lean_object* v___f_4085_; lean_object* v___x_4086_; lean_object* v_us_4087_; lean_object* v___x_4088_; lean_object* v___f_4089_; uint8_t v___x_4090_; lean_object* v___x_4091_; 
v_toConstantVal_4081_ = lean_ctor_get(v_indVal_4073_, 0);
lean_inc_ref(v_toConstantVal_4081_);
v_numParams_4082_ = lean_ctor_get(v_indVal_4073_, 1);
lean_inc(v_numParams_4082_);
lean_dec_ref(v_indVal_4073_);
v_levelParams_4083_ = lean_ctor_get(v_toConstantVal_4081_, 1);
lean_inc(v_levelParams_4083_);
v_type_4084_ = lean_ctor_get(v_toConstantVal_4081_, 2);
lean_inc_ref(v_type_4084_);
lean_dec_ref(v_toConstantVal_4081_);
v___f_4085_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___closed__0));
v___x_4086_ = lean_box(0);
v_us_4087_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__0(v_levelParams_4083_, v___x_4086_);
v___x_4088_ = lean_box(v_addHypotheses_4072_);
v___f_4089_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___lam__3___boxed), 15, 6);
lean_closure_set(v___f_4089_, 0, v_numParams_4082_);
lean_closure_set(v___f_4089_, 1, v_inductiveTypeName_4070_);
lean_closure_set(v___f_4089_, 2, v_us_4087_);
lean_closure_set(v___f_4089_, 3, v_ctorName_4071_);
lean_closure_set(v___f_4089_, 4, v___f_4085_);
lean_closure_set(v___f_4089_, 5, v___x_4088_);
v___x_4090_ = 0;
v___x_4091_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__8___redArg(v_type_4084_, v___f_4089_, v___x_4090_, v___x_4090_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_, v___y_4078_, v___y_4079_);
return v___x_4091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___boxed(lean_object* v_inductiveTypeName_4092_, lean_object* v_ctorName_4093_, lean_object* v_addHypotheses_4094_, lean_object* v_indVal_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_){
_start:
{
uint8_t v_addHypotheses_boxed_4103_; lean_object* v_res_4104_; 
v_addHypotheses_boxed_4103_ = lean_unbox(v_addHypotheses_4094_);
v_res_4104_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue(v_inductiveTypeName_4092_, v_ctorName_4093_, v_addHypotheses_boxed_4103_, v_indVal_4095_, v___y_4096_, v___y_4097_, v___y_4098_, v___y_4099_, v___y_4100_, v___y_4101_);
lean_dec(v___y_4101_);
lean_dec_ref(v___y_4100_);
lean_dec(v___y_4099_);
lean_dec_ref(v___y_4098_);
lean_dec(v___y_4097_);
lean_dec_ref(v___y_4096_);
return v_res_4104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9(lean_object* v_00_u03b1_4105_, lean_object* v_bs_4106_, lean_object* v_k_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_){
_start:
{
lean_object* v___x_4115_; 
v___x_4115_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9___redArg(v_bs_4106_, v_k_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
return v___x_4115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9___boxed(lean_object* v_00_u03b1_4116_, lean_object* v_bs_4117_, lean_object* v_k_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_){
_start:
{
lean_object* v_res_4126_; 
v_res_4126_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7_spec__9(v_00_u03b1_4116_, v_bs_4117_, v_k_4118_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_);
lean_dec(v___y_4124_);
lean_dec_ref(v___y_4123_);
lean_dec(v___y_4122_);
lean_dec_ref(v___y_4121_);
lean_dec(v___y_4120_);
lean_dec_ref(v___y_4119_);
lean_dec_ref(v_bs_4117_);
return v_res_4126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7(lean_object* v_00_u03b1_4127_, lean_object* v_bs_4128_, lean_object* v_k_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_){
_start:
{
lean_object* v___x_4137_; 
v___x_4137_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7___redArg(v_bs_4128_, v_k_4129_, v___y_4130_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_);
return v___x_4137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7___boxed(lean_object* v_00_u03b1_4138_, lean_object* v_bs_4139_, lean_object* v_k_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_){
_start:
{
lean_object* v_res_4148_; 
v_res_4148_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue_spec__7(v_00_u03b1_4138_, v_bs_4139_, v_k_4140_, v___y_4141_, v___y_4142_, v___y_4143_, v___y_4144_, v___y_4145_, v___y_4146_);
lean_dec(v___y_4146_);
lean_dec_ref(v___y_4145_);
lean_dec(v___y_4144_);
lean_dec_ref(v___y_4143_);
lean_dec(v___y_4142_);
lean_dec_ref(v___y_4141_);
return v_res_4148_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__0___redArg(lean_object* v_name_4149_, lean_object* v_levelParams_4150_, lean_object* v_type_4151_, lean_object* v_value_4152_, lean_object* v_hints_4153_, lean_object* v___y_4154_){
_start:
{
lean_object* v___x_4156_; uint8_t v___y_4158_; uint8_t v___y_4165_; lean_object* v_env_4168_; uint8_t v___x_4169_; 
v___x_4156_ = lean_st_ref_get(v___y_4154_);
v_env_4168_ = lean_ctor_get(v___x_4156_, 0);
lean_inc_ref_n(v_env_4168_, 2);
lean_dec(v___x_4156_);
v___x_4169_ = l_Lean_Environment_hasUnsafe(v_env_4168_, v_type_4151_);
if (v___x_4169_ == 0)
{
uint8_t v___x_4170_; 
v___x_4170_ = l_Lean_Environment_hasUnsafe(v_env_4168_, v_value_4152_);
v___y_4165_ = v___x_4170_;
goto v___jp_4164_;
}
else
{
lean_dec_ref(v_env_4168_);
v___y_4165_ = v___x_4169_;
goto v___jp_4164_;
}
v___jp_4157_:
{
lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; 
lean_inc(v_name_4149_);
v___x_4159_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4159_, 0, v_name_4149_);
lean_ctor_set(v___x_4159_, 1, v_levelParams_4150_);
lean_ctor_set(v___x_4159_, 2, v_type_4151_);
v___x_4160_ = lean_box(0);
v___x_4161_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4161_, 0, v_name_4149_);
lean_ctor_set(v___x_4161_, 1, v___x_4160_);
v___x_4162_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_4162_, 0, v___x_4159_);
lean_ctor_set(v___x_4162_, 1, v_value_4152_);
lean_ctor_set(v___x_4162_, 2, v_hints_4153_);
lean_ctor_set(v___x_4162_, 3, v___x_4161_);
lean_ctor_set_uint8(v___x_4162_, sizeof(void*)*4, v___y_4158_);
v___x_4163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4163_, 0, v___x_4162_);
return v___x_4163_;
}
v___jp_4164_:
{
if (v___y_4165_ == 0)
{
uint8_t v___x_4166_; 
v___x_4166_ = 1;
v___y_4158_ = v___x_4166_;
goto v___jp_4157_;
}
else
{
uint8_t v___x_4167_; 
v___x_4167_ = 0;
v___y_4158_ = v___x_4167_;
goto v___jp_4157_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__0___redArg___boxed(lean_object* v_name_4171_, lean_object* v_levelParams_4172_, lean_object* v_type_4173_, lean_object* v_value_4174_, lean_object* v_hints_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_){
_start:
{
lean_object* v_res_4178_; 
v_res_4178_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__0___redArg(v_name_4171_, v_levelParams_4172_, v_type_4173_, v_value_4174_, v_hints_4175_, v___y_4176_);
lean_dec(v___y_4176_);
return v_res_4178_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__0(lean_object* v_name_4179_, lean_object* v_levelParams_4180_, lean_object* v_type_4181_, lean_object* v_value_4182_, lean_object* v_hints_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_){
_start:
{
lean_object* v___x_4191_; 
v___x_4191_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__0___redArg(v_name_4179_, v_levelParams_4180_, v_type_4181_, v_value_4182_, v_hints_4183_, v___y_4189_);
return v___x_4191_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__0___boxed(lean_object* v_name_4192_, lean_object* v_levelParams_4193_, lean_object* v_type_4194_, lean_object* v_value_4195_, lean_object* v_hints_4196_, lean_object* v___y_4197_, lean_object* v___y_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_){
_start:
{
lean_object* v_res_4204_; 
v_res_4204_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__0(v_name_4192_, v_levelParams_4193_, v_type_4194_, v_value_4195_, v_hints_4196_, v___y_4197_, v___y_4198_, v___y_4199_, v___y_4200_, v___y_4201_, v___y_4202_);
lean_dec(v___y_4202_);
lean_dec_ref(v___y_4201_);
lean_dec(v___y_4200_);
lean_dec_ref(v___y_4199_);
lean_dec(v___y_4198_);
lean_dec_ref(v___y_4197_);
return v_res_4204_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___lam__0(lean_object* v___y_4205_, uint8_t v_isExporting_4206_, lean_object* v___x_4207_, lean_object* v___y_4208_, lean_object* v___x_4209_, lean_object* v_a_x3f_4210_){
_start:
{
lean_object* v___x_4212_; lean_object* v_env_4213_; lean_object* v_nextMacroScope_4214_; lean_object* v_ngen_4215_; lean_object* v_auxDeclNGen_4216_; lean_object* v_traceState_4217_; lean_object* v_messages_4218_; lean_object* v_infoState_4219_; lean_object* v_snapshotTasks_4220_; lean_object* v___x_4222_; uint8_t v_isShared_4223_; uint8_t v_isSharedCheck_4245_; 
v___x_4212_ = lean_st_ref_take(v___y_4205_);
v_env_4213_ = lean_ctor_get(v___x_4212_, 0);
v_nextMacroScope_4214_ = lean_ctor_get(v___x_4212_, 1);
v_ngen_4215_ = lean_ctor_get(v___x_4212_, 2);
v_auxDeclNGen_4216_ = lean_ctor_get(v___x_4212_, 3);
v_traceState_4217_ = lean_ctor_get(v___x_4212_, 4);
v_messages_4218_ = lean_ctor_get(v___x_4212_, 6);
v_infoState_4219_ = lean_ctor_get(v___x_4212_, 7);
v_snapshotTasks_4220_ = lean_ctor_get(v___x_4212_, 8);
v_isSharedCheck_4245_ = !lean_is_exclusive(v___x_4212_);
if (v_isSharedCheck_4245_ == 0)
{
lean_object* v_unused_4246_; 
v_unused_4246_ = lean_ctor_get(v___x_4212_, 5);
lean_dec(v_unused_4246_);
v___x_4222_ = v___x_4212_;
v_isShared_4223_ = v_isSharedCheck_4245_;
goto v_resetjp_4221_;
}
else
{
lean_inc(v_snapshotTasks_4220_);
lean_inc(v_infoState_4219_);
lean_inc(v_messages_4218_);
lean_inc(v_traceState_4217_);
lean_inc(v_auxDeclNGen_4216_);
lean_inc(v_ngen_4215_);
lean_inc(v_nextMacroScope_4214_);
lean_inc(v_env_4213_);
lean_dec(v___x_4212_);
v___x_4222_ = lean_box(0);
v_isShared_4223_ = v_isSharedCheck_4245_;
goto v_resetjp_4221_;
}
v_resetjp_4221_:
{
lean_object* v___x_4224_; lean_object* v___x_4226_; 
v___x_4224_ = l_Lean_Environment_setExporting(v_env_4213_, v_isExporting_4206_);
if (v_isShared_4223_ == 0)
{
lean_ctor_set(v___x_4222_, 5, v___x_4207_);
lean_ctor_set(v___x_4222_, 0, v___x_4224_);
v___x_4226_ = v___x_4222_;
goto v_reusejp_4225_;
}
else
{
lean_object* v_reuseFailAlloc_4244_; 
v_reuseFailAlloc_4244_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4244_, 0, v___x_4224_);
lean_ctor_set(v_reuseFailAlloc_4244_, 1, v_nextMacroScope_4214_);
lean_ctor_set(v_reuseFailAlloc_4244_, 2, v_ngen_4215_);
lean_ctor_set(v_reuseFailAlloc_4244_, 3, v_auxDeclNGen_4216_);
lean_ctor_set(v_reuseFailAlloc_4244_, 4, v_traceState_4217_);
lean_ctor_set(v_reuseFailAlloc_4244_, 5, v___x_4207_);
lean_ctor_set(v_reuseFailAlloc_4244_, 6, v_messages_4218_);
lean_ctor_set(v_reuseFailAlloc_4244_, 7, v_infoState_4219_);
lean_ctor_set(v_reuseFailAlloc_4244_, 8, v_snapshotTasks_4220_);
v___x_4226_ = v_reuseFailAlloc_4244_;
goto v_reusejp_4225_;
}
v_reusejp_4225_:
{
lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v_mctx_4229_; lean_object* v_zetaDeltaFVarIds_4230_; lean_object* v_postponed_4231_; lean_object* v_diag_4232_; lean_object* v___x_4234_; uint8_t v_isShared_4235_; uint8_t v_isSharedCheck_4242_; 
v___x_4227_ = lean_st_ref_put(v___y_4205_, v___x_4226_);
v___x_4228_ = lean_st_ref_take(v___y_4208_);
v_mctx_4229_ = lean_ctor_get(v___x_4228_, 0);
v_zetaDeltaFVarIds_4230_ = lean_ctor_get(v___x_4228_, 2);
v_postponed_4231_ = lean_ctor_get(v___x_4228_, 3);
v_diag_4232_ = lean_ctor_get(v___x_4228_, 4);
v_isSharedCheck_4242_ = !lean_is_exclusive(v___x_4228_);
if (v_isSharedCheck_4242_ == 0)
{
lean_object* v_unused_4243_; 
v_unused_4243_ = lean_ctor_get(v___x_4228_, 1);
lean_dec(v_unused_4243_);
v___x_4234_ = v___x_4228_;
v_isShared_4235_ = v_isSharedCheck_4242_;
goto v_resetjp_4233_;
}
else
{
lean_inc(v_diag_4232_);
lean_inc(v_postponed_4231_);
lean_inc(v_zetaDeltaFVarIds_4230_);
lean_inc(v_mctx_4229_);
lean_dec(v___x_4228_);
v___x_4234_ = lean_box(0);
v_isShared_4235_ = v_isSharedCheck_4242_;
goto v_resetjp_4233_;
}
v_resetjp_4233_:
{
lean_object* v___x_4236_; lean_object* v___x_4238_; 
v___x_4236_ = lean_box(0);
if (v_isShared_4235_ == 0)
{
lean_ctor_set(v___x_4234_, 1, v___x_4209_);
v___x_4238_ = v___x_4234_;
goto v_reusejp_4237_;
}
else
{
lean_object* v_reuseFailAlloc_4241_; 
v_reuseFailAlloc_4241_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4241_, 0, v_mctx_4229_);
lean_ctor_set(v_reuseFailAlloc_4241_, 1, v___x_4209_);
lean_ctor_set(v_reuseFailAlloc_4241_, 2, v_zetaDeltaFVarIds_4230_);
lean_ctor_set(v_reuseFailAlloc_4241_, 3, v_postponed_4231_);
lean_ctor_set(v_reuseFailAlloc_4241_, 4, v_diag_4232_);
v___x_4238_ = v_reuseFailAlloc_4241_;
goto v_reusejp_4237_;
}
v_reusejp_4237_:
{
lean_object* v___x_4239_; lean_object* v___x_4240_; 
v___x_4239_ = lean_st_ref_put(v___y_4208_, v___x_4238_);
v___x_4240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4236_);
return v___x_4240_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___lam__0___boxed(lean_object* v___y_4247_, lean_object* v_isExporting_4248_, lean_object* v___x_4249_, lean_object* v___y_4250_, lean_object* v___x_4251_, lean_object* v_a_x3f_4252_, lean_object* v___y_4253_){
_start:
{
uint8_t v_isExporting_boxed_4254_; lean_object* v_res_4255_; 
v_isExporting_boxed_4254_ = lean_unbox(v_isExporting_4248_);
v_res_4255_ = l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___lam__0(v___y_4247_, v_isExporting_boxed_4254_, v___x_4249_, v___y_4250_, v___x_4251_, v_a_x3f_4252_);
lean_dec(v_a_x3f_4252_);
lean_dec(v___y_4250_);
lean_dec(v___y_4247_);
return v_res_4255_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_4256_; 
v___x_4256_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_4256_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_4257_; lean_object* v___x_4258_; 
v___x_4257_ = lean_obj_once(&l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__0, &l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__0_once, _init_l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__0);
v___x_4258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4258_, 0, v___x_4257_);
return v___x_4258_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_4259_; lean_object* v___x_4260_; 
v___x_4259_ = lean_obj_once(&l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__1, &l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__1_once, _init_l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__1);
v___x_4260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4260_, 0, v___x_4259_);
lean_ctor_set(v___x_4260_, 1, v___x_4259_);
return v___x_4260_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_4261_; lean_object* v___x_4262_; 
v___x_4261_ = lean_obj_once(&l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__1, &l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__1_once, _init_l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__1);
v___x_4262_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4262_, 0, v___x_4261_);
lean_ctor_set(v___x_4262_, 1, v___x_4261_);
lean_ctor_set(v___x_4262_, 2, v___x_4261_);
lean_ctor_set(v___x_4262_, 3, v___x_4261_);
lean_ctor_set(v___x_4262_, 4, v___x_4261_);
lean_ctor_set(v___x_4262_, 5, v___x_4261_);
return v___x_4262_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg(lean_object* v_x_4263_, uint8_t v_isExporting_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_){
_start:
{
lean_object* v___x_4272_; lean_object* v_env_4273_; lean_object* v___x_4274_; uint8_t v_isModule_4275_; 
v___x_4272_ = lean_st_ref_get(v___y_4270_);
v_env_4273_ = lean_ctor_get(v___x_4272_, 0);
lean_inc_ref(v_env_4273_);
lean_dec(v___x_4272_);
v___x_4274_ = l_Lean_Environment_header(v_env_4273_);
v_isModule_4275_ = lean_ctor_get_uint8(v___x_4274_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4274_);
if (v_isModule_4275_ == 0)
{
lean_object* v___x_4276_; 
lean_dec_ref(v_env_4273_);
lean_inc(v___y_4270_);
lean_inc_ref(v___y_4269_);
lean_inc(v___y_4268_);
lean_inc_ref(v___y_4267_);
lean_inc(v___y_4266_);
lean_inc_ref(v___y_4265_);
v___x_4276_ = lean_apply_7(v_x_4263_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, lean_box(0));
return v___x_4276_;
}
else
{
uint8_t v_isExporting_4277_; 
v_isExporting_4277_ = lean_ctor_get_uint8(v_env_4273_, sizeof(void*)*8);
lean_dec_ref(v_env_4273_);
if (v_isExporting_4264_ == 0)
{
if (v_isExporting_4277_ == 0)
{
lean_object* v___x_4343_; 
lean_inc(v___y_4270_);
lean_inc_ref(v___y_4269_);
lean_inc(v___y_4268_);
lean_inc_ref(v___y_4267_);
lean_inc(v___y_4266_);
lean_inc_ref(v___y_4265_);
v___x_4343_ = lean_apply_7(v_x_4263_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, lean_box(0));
return v___x_4343_;
}
else
{
goto v___jp_4278_;
}
}
else
{
if (v_isExporting_4277_ == 0)
{
goto v___jp_4278_;
}
else
{
lean_object* v___x_4344_; 
lean_inc(v___y_4270_);
lean_inc_ref(v___y_4269_);
lean_inc(v___y_4268_);
lean_inc_ref(v___y_4267_);
lean_inc(v___y_4266_);
lean_inc_ref(v___y_4265_);
v___x_4344_ = lean_apply_7(v_x_4263_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, lean_box(0));
return v___x_4344_;
}
}
v___jp_4278_:
{
lean_object* v___x_4279_; lean_object* v_env_4280_; lean_object* v_nextMacroScope_4281_; lean_object* v_ngen_4282_; lean_object* v_auxDeclNGen_4283_; lean_object* v_traceState_4284_; lean_object* v_messages_4285_; lean_object* v_infoState_4286_; lean_object* v_snapshotTasks_4287_; lean_object* v___x_4289_; uint8_t v_isShared_4290_; uint8_t v_isSharedCheck_4341_; 
v___x_4279_ = lean_st_ref_take(v___y_4270_);
v_env_4280_ = lean_ctor_get(v___x_4279_, 0);
v_nextMacroScope_4281_ = lean_ctor_get(v___x_4279_, 1);
v_ngen_4282_ = lean_ctor_get(v___x_4279_, 2);
v_auxDeclNGen_4283_ = lean_ctor_get(v___x_4279_, 3);
v_traceState_4284_ = lean_ctor_get(v___x_4279_, 4);
v_messages_4285_ = lean_ctor_get(v___x_4279_, 6);
v_infoState_4286_ = lean_ctor_get(v___x_4279_, 7);
v_snapshotTasks_4287_ = lean_ctor_get(v___x_4279_, 8);
v_isSharedCheck_4341_ = !lean_is_exclusive(v___x_4279_);
if (v_isSharedCheck_4341_ == 0)
{
lean_object* v_unused_4342_; 
v_unused_4342_ = lean_ctor_get(v___x_4279_, 5);
lean_dec(v_unused_4342_);
v___x_4289_ = v___x_4279_;
v_isShared_4290_ = v_isSharedCheck_4341_;
goto v_resetjp_4288_;
}
else
{
lean_inc(v_snapshotTasks_4287_);
lean_inc(v_infoState_4286_);
lean_inc(v_messages_4285_);
lean_inc(v_traceState_4284_);
lean_inc(v_auxDeclNGen_4283_);
lean_inc(v_ngen_4282_);
lean_inc(v_nextMacroScope_4281_);
lean_inc(v_env_4280_);
lean_dec(v___x_4279_);
v___x_4289_ = lean_box(0);
v_isShared_4290_ = v_isSharedCheck_4341_;
goto v_resetjp_4288_;
}
v_resetjp_4288_:
{
lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4294_; 
v___x_4291_ = l_Lean_Environment_setExporting(v_env_4280_, v_isExporting_4264_);
v___x_4292_ = lean_obj_once(&l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__2, &l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__2_once, _init_l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__2);
if (v_isShared_4290_ == 0)
{
lean_ctor_set(v___x_4289_, 5, v___x_4292_);
lean_ctor_set(v___x_4289_, 0, v___x_4291_);
v___x_4294_ = v___x_4289_;
goto v_reusejp_4293_;
}
else
{
lean_object* v_reuseFailAlloc_4340_; 
v_reuseFailAlloc_4340_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4340_, 0, v___x_4291_);
lean_ctor_set(v_reuseFailAlloc_4340_, 1, v_nextMacroScope_4281_);
lean_ctor_set(v_reuseFailAlloc_4340_, 2, v_ngen_4282_);
lean_ctor_set(v_reuseFailAlloc_4340_, 3, v_auxDeclNGen_4283_);
lean_ctor_set(v_reuseFailAlloc_4340_, 4, v_traceState_4284_);
lean_ctor_set(v_reuseFailAlloc_4340_, 5, v___x_4292_);
lean_ctor_set(v_reuseFailAlloc_4340_, 6, v_messages_4285_);
lean_ctor_set(v_reuseFailAlloc_4340_, 7, v_infoState_4286_);
lean_ctor_set(v_reuseFailAlloc_4340_, 8, v_snapshotTasks_4287_);
v___x_4294_ = v_reuseFailAlloc_4340_;
goto v_reusejp_4293_;
}
v_reusejp_4293_:
{
lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v_mctx_4297_; lean_object* v_zetaDeltaFVarIds_4298_; lean_object* v_postponed_4299_; lean_object* v_diag_4300_; lean_object* v___x_4302_; uint8_t v_isShared_4303_; uint8_t v_isSharedCheck_4338_; 
v___x_4295_ = lean_st_ref_put(v___y_4270_, v___x_4294_);
v___x_4296_ = lean_st_ref_take(v___y_4268_);
v_mctx_4297_ = lean_ctor_get(v___x_4296_, 0);
v_zetaDeltaFVarIds_4298_ = lean_ctor_get(v___x_4296_, 2);
v_postponed_4299_ = lean_ctor_get(v___x_4296_, 3);
v_diag_4300_ = lean_ctor_get(v___x_4296_, 4);
v_isSharedCheck_4338_ = !lean_is_exclusive(v___x_4296_);
if (v_isSharedCheck_4338_ == 0)
{
lean_object* v_unused_4339_; 
v_unused_4339_ = lean_ctor_get(v___x_4296_, 1);
lean_dec(v_unused_4339_);
v___x_4302_ = v___x_4296_;
v_isShared_4303_ = v_isSharedCheck_4338_;
goto v_resetjp_4301_;
}
else
{
lean_inc(v_diag_4300_);
lean_inc(v_postponed_4299_);
lean_inc(v_zetaDeltaFVarIds_4298_);
lean_inc(v_mctx_4297_);
lean_dec(v___x_4296_);
v___x_4302_ = lean_box(0);
v_isShared_4303_ = v_isSharedCheck_4338_;
goto v_resetjp_4301_;
}
v_resetjp_4301_:
{
lean_object* v___x_4304_; lean_object* v___x_4306_; 
v___x_4304_ = lean_obj_once(&l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__3, &l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__3_once, _init_l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__3);
if (v_isShared_4303_ == 0)
{
lean_ctor_set(v___x_4302_, 1, v___x_4304_);
v___x_4306_ = v___x_4302_;
goto v_reusejp_4305_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v_mctx_4297_);
lean_ctor_set(v_reuseFailAlloc_4337_, 1, v___x_4304_);
lean_ctor_set(v_reuseFailAlloc_4337_, 2, v_zetaDeltaFVarIds_4298_);
lean_ctor_set(v_reuseFailAlloc_4337_, 3, v_postponed_4299_);
lean_ctor_set(v_reuseFailAlloc_4337_, 4, v_diag_4300_);
v___x_4306_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4305_;
}
v_reusejp_4305_:
{
lean_object* v___x_4307_; lean_object* v___x_4308_; 
v___x_4307_ = lean_st_ref_put(v___y_4268_, v___x_4306_);
lean_inc(v___y_4270_);
lean_inc_ref(v___y_4269_);
lean_inc(v___y_4268_);
lean_inc_ref(v___y_4267_);
lean_inc(v___y_4266_);
lean_inc_ref(v___y_4265_);
v___x_4308_ = lean_apply_7(v_x_4263_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, lean_box(0));
if (lean_obj_tag(v___x_4308_) == 0)
{
lean_object* v_a_4309_; lean_object* v___x_4311_; uint8_t v_isShared_4312_; uint8_t v_isSharedCheck_4325_; 
v_a_4309_ = lean_ctor_get(v___x_4308_, 0);
v_isSharedCheck_4325_ = !lean_is_exclusive(v___x_4308_);
if (v_isSharedCheck_4325_ == 0)
{
v___x_4311_ = v___x_4308_;
v_isShared_4312_ = v_isSharedCheck_4325_;
goto v_resetjp_4310_;
}
else
{
lean_inc(v_a_4309_);
lean_dec(v___x_4308_);
v___x_4311_ = lean_box(0);
v_isShared_4312_ = v_isSharedCheck_4325_;
goto v_resetjp_4310_;
}
v_resetjp_4310_:
{
lean_object* v___x_4314_; 
lean_inc(v_a_4309_);
if (v_isShared_4312_ == 0)
{
lean_ctor_set_tag(v___x_4311_, 1);
v___x_4314_ = v___x_4311_;
goto v_reusejp_4313_;
}
else
{
lean_object* v_reuseFailAlloc_4324_; 
v_reuseFailAlloc_4324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4324_, 0, v_a_4309_);
v___x_4314_ = v_reuseFailAlloc_4324_;
goto v_reusejp_4313_;
}
v_reusejp_4313_:
{
lean_object* v___x_4315_; lean_object* v___x_4317_; uint8_t v_isShared_4318_; uint8_t v_isSharedCheck_4322_; 
v___x_4315_ = l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___lam__0(v___y_4270_, v_isExporting_4277_, v___x_4292_, v___y_4268_, v___x_4304_, v___x_4314_);
lean_dec_ref(v___x_4314_);
v_isSharedCheck_4322_ = !lean_is_exclusive(v___x_4315_);
if (v_isSharedCheck_4322_ == 0)
{
lean_object* v_unused_4323_; 
v_unused_4323_ = lean_ctor_get(v___x_4315_, 0);
lean_dec(v_unused_4323_);
v___x_4317_ = v___x_4315_;
v_isShared_4318_ = v_isSharedCheck_4322_;
goto v_resetjp_4316_;
}
else
{
lean_dec(v___x_4315_);
v___x_4317_ = lean_box(0);
v_isShared_4318_ = v_isSharedCheck_4322_;
goto v_resetjp_4316_;
}
v_resetjp_4316_:
{
lean_object* v___x_4320_; 
if (v_isShared_4318_ == 0)
{
lean_ctor_set(v___x_4317_, 0, v_a_4309_);
v___x_4320_ = v___x_4317_;
goto v_reusejp_4319_;
}
else
{
lean_object* v_reuseFailAlloc_4321_; 
v_reuseFailAlloc_4321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4321_, 0, v_a_4309_);
v___x_4320_ = v_reuseFailAlloc_4321_;
goto v_reusejp_4319_;
}
v_reusejp_4319_:
{
return v___x_4320_;
}
}
}
}
}
else
{
lean_object* v_a_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4330_; uint8_t v_isShared_4331_; uint8_t v_isSharedCheck_4335_; 
v_a_4326_ = lean_ctor_get(v___x_4308_, 0);
lean_inc(v_a_4326_);
lean_dec_ref_known(v___x_4308_, 1);
v___x_4327_ = lean_box(0);
v___x_4328_ = l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___lam__0(v___y_4270_, v_isExporting_4277_, v___x_4292_, v___y_4268_, v___x_4304_, v___x_4327_);
v_isSharedCheck_4335_ = !lean_is_exclusive(v___x_4328_);
if (v_isSharedCheck_4335_ == 0)
{
lean_object* v_unused_4336_; 
v_unused_4336_ = lean_ctor_get(v___x_4328_, 0);
lean_dec(v_unused_4336_);
v___x_4330_ = v___x_4328_;
v_isShared_4331_ = v_isSharedCheck_4335_;
goto v_resetjp_4329_;
}
else
{
lean_dec(v___x_4328_);
v___x_4330_ = lean_box(0);
v_isShared_4331_ = v_isSharedCheck_4335_;
goto v_resetjp_4329_;
}
v_resetjp_4329_:
{
lean_object* v___x_4333_; 
if (v_isShared_4331_ == 0)
{
lean_ctor_set_tag(v___x_4330_, 1);
lean_ctor_set(v___x_4330_, 0, v_a_4326_);
v___x_4333_ = v___x_4330_;
goto v_reusejp_4332_;
}
else
{
lean_object* v_reuseFailAlloc_4334_; 
v_reuseFailAlloc_4334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4334_, 0, v_a_4326_);
v___x_4333_ = v_reuseFailAlloc_4334_;
goto v_reusejp_4332_;
}
v_reusejp_4332_:
{
return v___x_4333_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___boxed(lean_object* v_x_4345_, lean_object* v_isExporting_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_){
_start:
{
uint8_t v_isExporting_boxed_4354_; lean_object* v_res_4355_; 
v_isExporting_boxed_4354_ = lean_unbox(v_isExporting_4346_);
v_res_4355_ = l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg(v_x_4345_, v_isExporting_boxed_4354_, v___y_4347_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_, v___y_4352_);
lean_dec(v___y_4352_);
lean_dec_ref(v___y_4351_);
lean_dec(v___y_4350_);
lean_dec_ref(v___y_4349_);
lean_dec(v___y_4348_);
lean_dec_ref(v___y_4347_);
return v_res_4355_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1(lean_object* v_00_u03b1_4356_, lean_object* v_x_4357_, uint8_t v_isExporting_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_){
_start:
{
lean_object* v___x_4366_; 
v___x_4366_ = l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg(v_x_4357_, v_isExporting_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_, v___y_4364_);
return v___x_4366_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___boxed(lean_object* v_00_u03b1_4367_, lean_object* v_x_4368_, lean_object* v_isExporting_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_){
_start:
{
uint8_t v_isExporting_boxed_4377_; lean_object* v_res_4378_; 
v_isExporting_boxed_4377_ = lean_unbox(v_isExporting_4369_);
v_res_4378_ = l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1(v_00_u03b1_4367_, v_x_4368_, v_isExporting_boxed_4377_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_);
lean_dec(v___y_4375_);
lean_dec_ref(v___y_4374_);
lean_dec(v___y_4373_);
lean_dec_ref(v___y_4372_);
lean_dec(v___y_4371_);
lean_dec_ref(v___y_4370_);
return v_res_4378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__0(lean_object* v_____r_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_){
_start:
{
lean_object* v___x_4389_; lean_object* v___x_4390_; 
v___x_4389_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__0___closed__0));
v___x_4390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4390_, 0, v___x_4389_);
return v___x_4390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__0___boxed(lean_object* v_____r_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_){
_start:
{
lean_object* v_res_4399_; 
v_res_4399_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__0(v_____r_4391_, v___y_4392_, v___y_4393_, v___y_4394_, v___y_4395_, v___y_4396_, v___y_4397_);
lean_dec(v___y_4397_);
lean_dec_ref(v___y_4396_);
lean_dec(v___y_4395_);
lean_dec_ref(v___y_4394_);
lean_dec(v___y_4393_);
lean_dec_ref(v___y_4392_);
return v_res_4399_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__1(void){
_start:
{
lean_object* v___x_4401_; lean_object* v___x_4402_; 
v___x_4401_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__0));
v___x_4402_ = l_Lean_stringToMessageData(v___x_4401_);
return v___x_4402_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__3(void){
_start:
{
lean_object* v___x_4404_; lean_object* v___x_4405_; 
v___x_4404_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__2));
v___x_4405_ = l_Lean_stringToMessageData(v___x_4404_);
return v___x_4405_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__5(void){
_start:
{
lean_object* v___x_4407_; lean_object* v___x_4408_; 
v___x_4407_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__4));
v___x_4408_ = l_Lean_stringToMessageData(v___x_4407_);
return v___x_4408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1(lean_object* v___x_4409_, lean_object* v___x_4410_, lean_object* v_inductiveTypeName_4411_, uint8_t v___x_4412_, lean_object* v___x_4413_, lean_object* v___f_4414_, lean_object* v_ctorName_4415_, uint8_t v_addHypotheses_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_){
_start:
{
lean_object* v___y_4425_; lean_object* v___x_4428_; 
lean_inc(v_inductiveTypeName_4411_);
v___x_4428_ = l_Lean_Elab_Deriving_mkContext(v___x_4409_, v___x_4410_, v_inductiveTypeName_4411_, v___x_4412_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
if (lean_obj_tag(v___x_4428_) == 0)
{
lean_object* v_toCold_4429_; lean_object* v_a_4430_; lean_object* v_options_4431_; lean_object* v_currNamespace_4432_; lean_object* v_inheritedTraceOptions_4433_; lean_object* v_instName_4434_; lean_object* v_auxFunNames_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___y_4440_; lean_object* v___y_4441_; lean_object* v___y_4442_; lean_object* v___y_4443_; lean_object* v___y_4444_; lean_object* v___y_4445_; lean_object* v___y_4446_; lean_object* v___y_4447_; lean_object* v___y_4481_; lean_object* v___y_4482_; lean_object* v___y_4483_; lean_object* v___y_4484_; lean_object* v___y_4485_; lean_object* v___y_4486_; uint8_t v___y_4487_; lean_object* v___y_4488_; lean_object* v___y_4489_; uint8_t v___y_4490_; uint8_t v___y_4529_; lean_object* v___y_4530_; lean_object* v___y_4531_; lean_object* v___y_4532_; lean_object* v___y_4533_; lean_object* v___y_4534_; lean_object* v___y_4535_; lean_object* v___y_4536_; lean_object* v___x_4544_; 
v_toCold_4429_ = lean_ctor_get(v___y_4421_, 0);
v_a_4430_ = lean_ctor_get(v___x_4428_, 0);
lean_inc(v_a_4430_);
lean_dec_ref_known(v___x_4428_, 1);
v_options_4431_ = lean_ctor_get(v_toCold_4429_, 2);
v_currNamespace_4432_ = lean_ctor_get(v_toCold_4429_, 4);
v_inheritedTraceOptions_4433_ = lean_ctor_get(v_toCold_4429_, 11);
v_instName_4434_ = lean_ctor_get(v_a_4430_, 0);
lean_inc(v_instName_4434_);
v_auxFunNames_4435_ = lean_ctor_get(v_a_4430_, 2);
lean_inc_ref(v_auxFunNames_4435_);
lean_dec(v_a_4430_);
v___x_4436_ = lean_unsigned_to_nat(0u);
v___x_4437_ = lean_array_get(v___x_4413_, v_auxFunNames_4435_, v___x_4436_);
lean_dec_ref(v_auxFunNames_4435_);
lean_inc(v_currNamespace_4432_);
v___x_4438_ = l_Lean_Name_append(v_currNamespace_4432_, v___x_4437_);
lean_inc(v_inductiveTypeName_4411_);
v___x_4544_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1(v_inductiveTypeName_4411_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
if (lean_obj_tag(v___x_4544_) == 0)
{
lean_object* v_a_4545_; lean_object* v_a_4547_; lean_object* v___y_4618_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; 
v_a_4545_ = lean_ctor_get(v___x_4544_, 0);
lean_inc_n(v_a_4545_, 2);
lean_dec_ref_known(v___x_4544_, 1);
v___x_4640_ = lean_box(v_addHypotheses_4416_);
lean_inc(v_inductiveTypeName_4411_);
v___x_4641_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkDefaultValue___boxed), 11, 4);
lean_closure_set(v___x_4641_, 0, v_inductiveTypeName_4411_);
lean_closure_set(v___x_4641_, 1, v_ctorName_4415_);
lean_closure_set(v___x_4641_, 2, v___x_4640_);
lean_closure_set(v___x_4641_, 3, v_a_4545_);
lean_inc(v___x_4438_);
v___x_4642_ = l_Lean_Elab_Term_withDeclName___redArg(v___x_4438_, v___x_4641_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
if (lean_obj_tag(v___x_4642_) == 0)
{
lean_object* v_a_4643_; 
lean_dec_ref(v___f_4414_);
v_a_4643_ = lean_ctor_get(v___x_4642_, 0);
lean_inc(v_a_4643_);
lean_dec_ref_known(v___x_4642_, 1);
v_a_4547_ = v_a_4643_;
goto v___jp_4546_;
}
else
{
lean_object* v_a_4644_; lean_object* v___x_4646_; uint8_t v_isShared_4647_; uint8_t v_isSharedCheck_4673_; 
v_a_4644_ = lean_ctor_get(v___x_4642_, 0);
v_isSharedCheck_4673_ = !lean_is_exclusive(v___x_4642_);
if (v_isSharedCheck_4673_ == 0)
{
v___x_4646_ = v___x_4642_;
v_isShared_4647_ = v_isSharedCheck_4673_;
goto v_resetjp_4645_;
}
else
{
lean_inc(v_a_4644_);
lean_dec(v___x_4642_);
v___x_4646_ = lean_box(0);
v_isShared_4647_ = v_isSharedCheck_4673_;
goto v_resetjp_4645_;
}
v_resetjp_4645_:
{
uint8_t v___y_4649_; uint8_t v___x_4671_; 
v___x_4671_ = l_Lean_Exception_isInterrupt(v_a_4644_);
if (v___x_4671_ == 0)
{
uint8_t v___x_4672_; 
lean_inc(v_a_4644_);
v___x_4672_ = l_Lean_Exception_isRuntime(v_a_4644_);
v___y_4649_ = v___x_4672_;
goto v___jp_4648_;
}
else
{
v___y_4649_ = v___x_4671_;
goto v___jp_4648_;
}
v___jp_4648_:
{
if (v___y_4649_ == 0)
{
uint8_t v_hasTrace_4650_; 
lean_del_object(v___x_4646_);
v_hasTrace_4650_ = lean_ctor_get_uint8(v_options_4431_, sizeof(void*)*1);
if (v_hasTrace_4650_ == 0)
{
lean_dec(v_a_4644_);
goto v___jp_4637_;
}
else
{
lean_object* v___x_4651_; lean_object* v___x_4652_; uint8_t v___x_4653_; 
v___x_4651_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3));
v___x_4652_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6);
v___x_4653_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4433_, v_options_4431_, v___x_4652_);
if (v___x_4653_ == 0)
{
lean_dec(v_a_4644_);
goto v___jp_4637_;
}
else
{
lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; 
v___x_4654_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__5, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__5_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__5);
v___x_4655_ = l_Lean_Exception_toMessageData(v_a_4644_);
v___x_4656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4656_, 0, v___x_4654_);
lean_ctor_set(v___x_4656_, 1, v___x_4655_);
v___x_4657_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg(v___x_4651_, v___x_4656_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
if (lean_obj_tag(v___x_4657_) == 0)
{
lean_object* v_a_4658_; lean_object* v___x_4659_; 
v_a_4658_ = lean_ctor_get(v___x_4657_, 0);
lean_inc(v_a_4658_);
lean_dec_ref_known(v___x_4657_, 1);
lean_inc(v___y_4422_);
lean_inc_ref(v___y_4421_);
lean_inc(v___y_4420_);
lean_inc_ref(v___y_4419_);
lean_inc(v___y_4418_);
lean_inc_ref(v___y_4417_);
v___x_4659_ = lean_apply_8(v___f_4414_, v_a_4658_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_, lean_box(0));
v___y_4618_ = v___x_4659_;
goto v___jp_4617_;
}
else
{
lean_object* v_a_4660_; lean_object* v___x_4662_; uint8_t v_isShared_4663_; uint8_t v_isSharedCheck_4667_; 
lean_dec(v_a_4545_);
lean_dec(v___x_4438_);
lean_dec(v_instName_4434_);
lean_dec(v___y_4422_);
lean_dec_ref(v___y_4421_);
lean_dec(v___y_4420_);
lean_dec_ref(v___y_4419_);
lean_dec(v___y_4418_);
lean_dec_ref(v___y_4417_);
lean_dec_ref(v___f_4414_);
lean_dec(v_inductiveTypeName_4411_);
v_a_4660_ = lean_ctor_get(v___x_4657_, 0);
v_isSharedCheck_4667_ = !lean_is_exclusive(v___x_4657_);
if (v_isSharedCheck_4667_ == 0)
{
v___x_4662_ = v___x_4657_;
v_isShared_4663_ = v_isSharedCheck_4667_;
goto v_resetjp_4661_;
}
else
{
lean_inc(v_a_4660_);
lean_dec(v___x_4657_);
v___x_4662_ = lean_box(0);
v_isShared_4663_ = v_isSharedCheck_4667_;
goto v_resetjp_4661_;
}
v_resetjp_4661_:
{
lean_object* v___x_4665_; 
if (v_isShared_4663_ == 0)
{
v___x_4665_ = v___x_4662_;
goto v_reusejp_4664_;
}
else
{
lean_object* v_reuseFailAlloc_4666_; 
v_reuseFailAlloc_4666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4666_, 0, v_a_4660_);
v___x_4665_ = v_reuseFailAlloc_4666_;
goto v_reusejp_4664_;
}
v_reusejp_4664_:
{
return v___x_4665_;
}
}
}
}
}
}
else
{
lean_object* v___x_4669_; 
lean_dec(v_a_4545_);
lean_dec(v___x_4438_);
lean_dec(v_instName_4434_);
lean_dec(v___y_4422_);
lean_dec_ref(v___y_4421_);
lean_dec(v___y_4420_);
lean_dec_ref(v___y_4419_);
lean_dec(v___y_4418_);
lean_dec_ref(v___y_4417_);
lean_dec_ref(v___f_4414_);
lean_dec(v_inductiveTypeName_4411_);
if (v_isShared_4647_ == 0)
{
v___x_4669_ = v___x_4646_;
goto v_reusejp_4668_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v_a_4644_);
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
v___jp_4546_:
{
lean_object* v_snd_4548_; lean_object* v_fst_4549_; lean_object* v_fst_4550_; lean_object* v_snd_4551_; lean_object* v___x_4552_; lean_object* v_toConstantVal_4553_; lean_object* v_env_4554_; lean_object* v_levelParams_4555_; uint32_t v___x_4556_; uint32_t v___x_4557_; uint32_t v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v_a_4561_; lean_object* v___x_4563_; uint8_t v_isShared_4564_; uint8_t v_isSharedCheck_4616_; 
v_snd_4548_ = lean_ctor_get(v_a_4547_, 1);
lean_inc(v_snd_4548_);
v_fst_4549_ = lean_ctor_get(v_a_4547_, 0);
lean_inc(v_fst_4549_);
lean_dec_ref(v_a_4547_);
v_fst_4550_ = lean_ctor_get(v_snd_4548_, 0);
lean_inc_n(v_fst_4550_, 2);
v_snd_4551_ = lean_ctor_get(v_snd_4548_, 1);
lean_inc(v_snd_4551_);
lean_dec(v_snd_4548_);
v___x_4552_ = lean_st_ref_get(v___y_4422_);
v_toConstantVal_4553_ = lean_ctor_get(v_a_4545_, 0);
lean_inc_ref(v_toConstantVal_4553_);
lean_dec(v_a_4545_);
v_env_4554_ = lean_ctor_get(v___x_4552_, 0);
lean_inc_ref(v_env_4554_);
lean_dec(v___x_4552_);
v_levelParams_4555_ = lean_ctor_get(v_toConstantVal_4553_, 1);
lean_inc(v_levelParams_4555_);
lean_dec_ref(v_toConstantVal_4553_);
v___x_4556_ = l_Lean_getMaxHeight(v_env_4554_, v_fst_4550_);
v___x_4557_ = 1;
v___x_4558_ = lean_uint32_add(v___x_4556_, v___x_4557_);
v___x_4559_ = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(v___x_4559_, 0, v___x_4558_);
lean_inc(v___x_4438_);
v___x_4560_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__0___redArg(v___x_4438_, v_levelParams_4555_, v_fst_4549_, v_fst_4550_, v___x_4559_, v___y_4422_);
v_a_4561_ = lean_ctor_get(v___x_4560_, 0);
v_isSharedCheck_4616_ = !lean_is_exclusive(v___x_4560_);
if (v_isSharedCheck_4616_ == 0)
{
v___x_4563_ = v___x_4560_;
v_isShared_4564_ = v_isSharedCheck_4616_;
goto v_resetjp_4562_;
}
else
{
lean_inc(v_a_4561_);
lean_dec(v___x_4560_);
v___x_4563_ = lean_box(0);
v_isShared_4564_ = v_isSharedCheck_4616_;
goto v_resetjp_4562_;
}
v_resetjp_4562_:
{
lean_object* v___x_4566_; 
if (v_isShared_4564_ == 0)
{
lean_ctor_set_tag(v___x_4563_, 1);
v___x_4566_ = v___x_4563_;
goto v_reusejp_4565_;
}
else
{
lean_object* v_reuseFailAlloc_4615_; 
v_reuseFailAlloc_4615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4615_, 0, v_a_4561_);
v___x_4566_ = v_reuseFailAlloc_4615_;
goto v_reusejp_4565_;
}
v_reusejp_4565_:
{
uint8_t v___x_4567_; lean_object* v___x_4568_; 
v___x_4567_ = 0;
v___x_4568_ = l_Lean_addDecl(v___x_4566_, v___x_4567_, v___y_4421_, v___y_4422_);
if (lean_obj_tag(v___x_4568_) == 0)
{
lean_object* v___x_4569_; lean_object* v_env_4570_; uint8_t v___x_4571_; 
lean_dec_ref_known(v___x_4568_, 1);
v___x_4569_ = lean_st_ref_get(v___y_4422_);
v_env_4570_ = lean_ctor_get(v___x_4569_, 0);
lean_inc_ref(v_env_4570_);
lean_dec(v___x_4569_);
lean_inc(v_inductiveTypeName_4411_);
v___x_4571_ = l_Lean_isMarkedMeta(v_env_4570_, v_inductiveTypeName_4411_);
if (v___x_4571_ == 0)
{
v___y_4529_ = v___x_4567_;
v___y_4530_ = v_snd_4551_;
v___y_4531_ = v___y_4417_;
v___y_4532_ = v___y_4418_;
v___y_4533_ = v___y_4419_;
v___y_4534_ = v___y_4420_;
v___y_4535_ = v___y_4421_;
v___y_4536_ = v___y_4422_;
goto v___jp_4528_;
}
else
{
lean_object* v___x_4572_; lean_object* v_env_4573_; lean_object* v_nextMacroScope_4574_; lean_object* v_ngen_4575_; lean_object* v_auxDeclNGen_4576_; lean_object* v_traceState_4577_; lean_object* v_messages_4578_; lean_object* v_infoState_4579_; lean_object* v_snapshotTasks_4580_; lean_object* v___x_4582_; uint8_t v_isShared_4583_; uint8_t v_isSharedCheck_4605_; 
v___x_4572_ = lean_st_ref_take(v___y_4422_);
v_env_4573_ = lean_ctor_get(v___x_4572_, 0);
v_nextMacroScope_4574_ = lean_ctor_get(v___x_4572_, 1);
v_ngen_4575_ = lean_ctor_get(v___x_4572_, 2);
v_auxDeclNGen_4576_ = lean_ctor_get(v___x_4572_, 3);
v_traceState_4577_ = lean_ctor_get(v___x_4572_, 4);
v_messages_4578_ = lean_ctor_get(v___x_4572_, 6);
v_infoState_4579_ = lean_ctor_get(v___x_4572_, 7);
v_snapshotTasks_4580_ = lean_ctor_get(v___x_4572_, 8);
v_isSharedCheck_4605_ = !lean_is_exclusive(v___x_4572_);
if (v_isSharedCheck_4605_ == 0)
{
lean_object* v_unused_4606_; 
v_unused_4606_ = lean_ctor_get(v___x_4572_, 5);
lean_dec(v_unused_4606_);
v___x_4582_ = v___x_4572_;
v_isShared_4583_ = v_isSharedCheck_4605_;
goto v_resetjp_4581_;
}
else
{
lean_inc(v_snapshotTasks_4580_);
lean_inc(v_infoState_4579_);
lean_inc(v_messages_4578_);
lean_inc(v_traceState_4577_);
lean_inc(v_auxDeclNGen_4576_);
lean_inc(v_ngen_4575_);
lean_inc(v_nextMacroScope_4574_);
lean_inc(v_env_4573_);
lean_dec(v___x_4572_);
v___x_4582_ = lean_box(0);
v_isShared_4583_ = v_isSharedCheck_4605_;
goto v_resetjp_4581_;
}
v_resetjp_4581_:
{
lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4587_; 
lean_inc(v___x_4438_);
v___x_4584_ = l_Lean_markMeta(v_env_4573_, v___x_4438_);
v___x_4585_ = lean_obj_once(&l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__2, &l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__2_once, _init_l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__2);
if (v_isShared_4583_ == 0)
{
lean_ctor_set(v___x_4582_, 5, v___x_4585_);
lean_ctor_set(v___x_4582_, 0, v___x_4584_);
v___x_4587_ = v___x_4582_;
goto v_reusejp_4586_;
}
else
{
lean_object* v_reuseFailAlloc_4604_; 
v_reuseFailAlloc_4604_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4604_, 0, v___x_4584_);
lean_ctor_set(v_reuseFailAlloc_4604_, 1, v_nextMacroScope_4574_);
lean_ctor_set(v_reuseFailAlloc_4604_, 2, v_ngen_4575_);
lean_ctor_set(v_reuseFailAlloc_4604_, 3, v_auxDeclNGen_4576_);
lean_ctor_set(v_reuseFailAlloc_4604_, 4, v_traceState_4577_);
lean_ctor_set(v_reuseFailAlloc_4604_, 5, v___x_4585_);
lean_ctor_set(v_reuseFailAlloc_4604_, 6, v_messages_4578_);
lean_ctor_set(v_reuseFailAlloc_4604_, 7, v_infoState_4579_);
lean_ctor_set(v_reuseFailAlloc_4604_, 8, v_snapshotTasks_4580_);
v___x_4587_ = v_reuseFailAlloc_4604_;
goto v_reusejp_4586_;
}
v_reusejp_4586_:
{
lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v_mctx_4590_; lean_object* v_zetaDeltaFVarIds_4591_; lean_object* v_postponed_4592_; lean_object* v_diag_4593_; lean_object* v___x_4595_; uint8_t v_isShared_4596_; uint8_t v_isSharedCheck_4602_; 
v___x_4588_ = lean_st_ref_put(v___y_4422_, v___x_4587_);
v___x_4589_ = lean_st_ref_take(v___y_4420_);
v_mctx_4590_ = lean_ctor_get(v___x_4589_, 0);
v_zetaDeltaFVarIds_4591_ = lean_ctor_get(v___x_4589_, 2);
v_postponed_4592_ = lean_ctor_get(v___x_4589_, 3);
v_diag_4593_ = lean_ctor_get(v___x_4589_, 4);
v_isSharedCheck_4602_ = !lean_is_exclusive(v___x_4589_);
if (v_isSharedCheck_4602_ == 0)
{
lean_object* v_unused_4603_; 
v_unused_4603_ = lean_ctor_get(v___x_4589_, 1);
lean_dec(v_unused_4603_);
v___x_4595_ = v___x_4589_;
v_isShared_4596_ = v_isSharedCheck_4602_;
goto v_resetjp_4594_;
}
else
{
lean_inc(v_diag_4593_);
lean_inc(v_postponed_4592_);
lean_inc(v_zetaDeltaFVarIds_4591_);
lean_inc(v_mctx_4590_);
lean_dec(v___x_4589_);
v___x_4595_ = lean_box(0);
v_isShared_4596_ = v_isSharedCheck_4602_;
goto v_resetjp_4594_;
}
v_resetjp_4594_:
{
lean_object* v___x_4597_; lean_object* v___x_4599_; 
v___x_4597_ = lean_obj_once(&l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__3, &l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__3_once, _init_l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__3);
if (v_isShared_4596_ == 0)
{
lean_ctor_set(v___x_4595_, 1, v___x_4597_);
v___x_4599_ = v___x_4595_;
goto v_reusejp_4598_;
}
else
{
lean_object* v_reuseFailAlloc_4601_; 
v_reuseFailAlloc_4601_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4601_, 0, v_mctx_4590_);
lean_ctor_set(v_reuseFailAlloc_4601_, 1, v___x_4597_);
lean_ctor_set(v_reuseFailAlloc_4601_, 2, v_zetaDeltaFVarIds_4591_);
lean_ctor_set(v_reuseFailAlloc_4601_, 3, v_postponed_4592_);
lean_ctor_set(v_reuseFailAlloc_4601_, 4, v_diag_4593_);
v___x_4599_ = v_reuseFailAlloc_4601_;
goto v_reusejp_4598_;
}
v_reusejp_4598_:
{
lean_object* v___x_4600_; 
v___x_4600_ = lean_st_ref_put(v___y_4420_, v___x_4599_);
v___y_4529_ = v___x_4567_;
v___y_4530_ = v_snd_4551_;
v___y_4531_ = v___y_4417_;
v___y_4532_ = v___y_4418_;
v___y_4533_ = v___y_4419_;
v___y_4534_ = v___y_4420_;
v___y_4535_ = v___y_4421_;
v___y_4536_ = v___y_4422_;
goto v___jp_4528_;
}
}
}
}
}
}
else
{
lean_object* v_a_4607_; lean_object* v___x_4609_; uint8_t v_isShared_4610_; uint8_t v_isSharedCheck_4614_; 
lean_dec(v_snd_4551_);
lean_dec(v___x_4438_);
lean_dec(v_instName_4434_);
lean_dec(v___y_4422_);
lean_dec_ref(v___y_4421_);
lean_dec(v___y_4420_);
lean_dec_ref(v___y_4419_);
lean_dec(v___y_4418_);
lean_dec_ref(v___y_4417_);
lean_dec(v_inductiveTypeName_4411_);
v_a_4607_ = lean_ctor_get(v___x_4568_, 0);
v_isSharedCheck_4614_ = !lean_is_exclusive(v___x_4568_);
if (v_isSharedCheck_4614_ == 0)
{
v___x_4609_ = v___x_4568_;
v_isShared_4610_ = v_isSharedCheck_4614_;
goto v_resetjp_4608_;
}
else
{
lean_inc(v_a_4607_);
lean_dec(v___x_4568_);
v___x_4609_ = lean_box(0);
v_isShared_4610_ = v_isSharedCheck_4614_;
goto v_resetjp_4608_;
}
v_resetjp_4608_:
{
lean_object* v___x_4612_; 
if (v_isShared_4610_ == 0)
{
v___x_4612_ = v___x_4609_;
goto v_reusejp_4611_;
}
else
{
lean_object* v_reuseFailAlloc_4613_; 
v_reuseFailAlloc_4613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4613_, 0, v_a_4607_);
v___x_4612_ = v_reuseFailAlloc_4613_;
goto v_reusejp_4611_;
}
v_reusejp_4611_:
{
return v___x_4612_;
}
}
}
}
}
}
v___jp_4617_:
{
if (lean_obj_tag(v___y_4618_) == 0)
{
lean_object* v_a_4619_; lean_object* v___x_4621_; uint8_t v_isShared_4622_; uint8_t v_isSharedCheck_4628_; 
v_a_4619_ = lean_ctor_get(v___y_4618_, 0);
v_isSharedCheck_4628_ = !lean_is_exclusive(v___y_4618_);
if (v_isSharedCheck_4628_ == 0)
{
v___x_4621_ = v___y_4618_;
v_isShared_4622_ = v_isSharedCheck_4628_;
goto v_resetjp_4620_;
}
else
{
lean_inc(v_a_4619_);
lean_dec(v___y_4618_);
v___x_4621_ = lean_box(0);
v_isShared_4622_ = v_isSharedCheck_4628_;
goto v_resetjp_4620_;
}
v_resetjp_4620_:
{
if (lean_obj_tag(v_a_4619_) == 0)
{
lean_object* v_a_4623_; lean_object* v___x_4625_; 
lean_dec(v_a_4545_);
lean_dec(v___x_4438_);
lean_dec(v_instName_4434_);
lean_dec(v___y_4422_);
lean_dec_ref(v___y_4421_);
lean_dec(v___y_4420_);
lean_dec_ref(v___y_4419_);
lean_dec(v___y_4418_);
lean_dec_ref(v___y_4417_);
lean_dec(v_inductiveTypeName_4411_);
v_a_4623_ = lean_ctor_get(v_a_4619_, 0);
lean_inc(v_a_4623_);
lean_dec_ref_known(v_a_4619_, 1);
if (v_isShared_4622_ == 0)
{
lean_ctor_set(v___x_4621_, 0, v_a_4623_);
v___x_4625_ = v___x_4621_;
goto v_reusejp_4624_;
}
else
{
lean_object* v_reuseFailAlloc_4626_; 
v_reuseFailAlloc_4626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4626_, 0, v_a_4623_);
v___x_4625_ = v_reuseFailAlloc_4626_;
goto v_reusejp_4624_;
}
v_reusejp_4624_:
{
return v___x_4625_;
}
}
else
{
lean_object* v_a_4627_; 
lean_del_object(v___x_4621_);
v_a_4627_ = lean_ctor_get(v_a_4619_, 0);
lean_inc(v_a_4627_);
lean_dec_ref_known(v_a_4619_, 1);
v_a_4547_ = v_a_4627_;
goto v___jp_4546_;
}
}
}
else
{
lean_object* v_a_4629_; lean_object* v___x_4631_; uint8_t v_isShared_4632_; uint8_t v_isSharedCheck_4636_; 
lean_dec(v_a_4545_);
lean_dec(v___x_4438_);
lean_dec(v_instName_4434_);
lean_dec(v___y_4422_);
lean_dec_ref(v___y_4421_);
lean_dec(v___y_4420_);
lean_dec_ref(v___y_4419_);
lean_dec(v___y_4418_);
lean_dec_ref(v___y_4417_);
lean_dec(v_inductiveTypeName_4411_);
v_a_4629_ = lean_ctor_get(v___y_4618_, 0);
v_isSharedCheck_4636_ = !lean_is_exclusive(v___y_4618_);
if (v_isSharedCheck_4636_ == 0)
{
v___x_4631_ = v___y_4618_;
v_isShared_4632_ = v_isSharedCheck_4636_;
goto v_resetjp_4630_;
}
else
{
lean_inc(v_a_4629_);
lean_dec(v___y_4618_);
v___x_4631_ = lean_box(0);
v_isShared_4632_ = v_isSharedCheck_4636_;
goto v_resetjp_4630_;
}
v_resetjp_4630_:
{
lean_object* v___x_4634_; 
if (v_isShared_4632_ == 0)
{
v___x_4634_ = v___x_4631_;
goto v_reusejp_4633_;
}
else
{
lean_object* v_reuseFailAlloc_4635_; 
v_reuseFailAlloc_4635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4635_, 0, v_a_4629_);
v___x_4634_ = v_reuseFailAlloc_4635_;
goto v_reusejp_4633_;
}
v_reusejp_4633_:
{
return v___x_4634_;
}
}
}
}
v___jp_4637_:
{
lean_object* v___x_4638_; lean_object* v___x_4639_; 
v___x_4638_ = lean_box(0);
lean_inc(v___y_4422_);
lean_inc_ref(v___y_4421_);
lean_inc(v___y_4420_);
lean_inc_ref(v___y_4419_);
lean_inc(v___y_4418_);
lean_inc_ref(v___y_4417_);
v___x_4639_ = lean_apply_8(v___f_4414_, v___x_4638_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_, lean_box(0));
v___y_4618_ = v___x_4639_;
goto v___jp_4617_;
}
}
else
{
lean_object* v_a_4674_; lean_object* v___x_4676_; uint8_t v_isShared_4677_; uint8_t v_isSharedCheck_4681_; 
lean_dec(v___x_4438_);
lean_dec(v_instName_4434_);
lean_dec(v___y_4422_);
lean_dec_ref(v___y_4421_);
lean_dec(v___y_4420_);
lean_dec_ref(v___y_4419_);
lean_dec(v___y_4418_);
lean_dec_ref(v___y_4417_);
lean_dec(v_ctorName_4415_);
lean_dec_ref(v___f_4414_);
lean_dec(v_inductiveTypeName_4411_);
v_a_4674_ = lean_ctor_get(v___x_4544_, 0);
v_isSharedCheck_4681_ = !lean_is_exclusive(v___x_4544_);
if (v_isSharedCheck_4681_ == 0)
{
v___x_4676_ = v___x_4544_;
v_isShared_4677_ = v_isSharedCheck_4681_;
goto v_resetjp_4675_;
}
else
{
lean_inc(v_a_4674_);
lean_dec(v___x_4544_);
v___x_4676_ = lean_box(0);
v_isShared_4677_ = v_isSharedCheck_4681_;
goto v_resetjp_4675_;
}
v_resetjp_4675_:
{
lean_object* v___x_4679_; 
if (v_isShared_4677_ == 0)
{
v___x_4679_ = v___x_4676_;
goto v_reusejp_4678_;
}
else
{
lean_object* v_reuseFailAlloc_4680_; 
v_reuseFailAlloc_4680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4680_, 0, v_a_4674_);
v___x_4679_ = v_reuseFailAlloc_4680_;
goto v_reusejp_4678_;
}
v_reusejp_4678_:
{
return v___x_4679_;
}
}
}
v___jp_4439_:
{
lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; 
v___x_4448_ = l_Lean_mkIdent(v_instName_4434_);
v___x_4449_ = l_Lean_mkCIdent(v___x_4438_);
v___x_4450_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith(v_inductiveTypeName_4411_, v___x_4448_, v___y_4441_, v___x_4449_, v___y_4442_, v___y_4443_, v___y_4444_, v___y_4445_, v___y_4446_, v___y_4447_);
lean_dec(v___y_4443_);
lean_dec_ref(v___y_4442_);
lean_dec(v___y_4441_);
if (lean_obj_tag(v___x_4450_) == 0)
{
lean_object* v_toCold_4451_; lean_object* v_options_4452_; uint8_t v_hasTrace_4453_; 
v_toCold_4451_ = lean_ctor_get(v___y_4446_, 0);
v_options_4452_ = lean_ctor_get(v_toCold_4451_, 2);
v_hasTrace_4453_ = lean_ctor_get_uint8(v_options_4452_, sizeof(void*)*1);
if (v_hasTrace_4453_ == 0)
{
lean_object* v_a_4454_; 
lean_dec(v___y_4447_);
lean_dec_ref(v___y_4446_);
lean_dec(v___y_4445_);
lean_dec_ref(v___y_4444_);
lean_dec(v___y_4440_);
v_a_4454_ = lean_ctor_get(v___x_4450_, 0);
lean_inc(v_a_4454_);
lean_dec_ref_known(v___x_4450_, 1);
v___y_4425_ = v_a_4454_;
goto v___jp_4424_;
}
else
{
lean_object* v_a_4455_; lean_object* v_inheritedTraceOptions_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; uint8_t v___x_4459_; 
v_a_4455_ = lean_ctor_get(v___x_4450_, 0);
lean_inc(v_a_4455_);
lean_dec_ref_known(v___x_4450_, 1);
v_inheritedTraceOptions_4456_ = lean_ctor_get(v_toCold_4451_, 11);
v___x_4457_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__5));
lean_inc(v___y_4440_);
v___x_4458_ = l_Lean_Name_append(v___x_4457_, v___y_4440_);
v___x_4459_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4456_, v_options_4452_, v___x_4458_);
lean_dec(v___x_4458_);
if (v___x_4459_ == 0)
{
lean_dec(v___y_4447_);
lean_dec_ref(v___y_4446_);
lean_dec(v___y_4445_);
lean_dec_ref(v___y_4444_);
lean_dec(v___y_4440_);
v___y_4425_ = v_a_4455_;
goto v___jp_4424_;
}
else
{
lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; 
v___x_4460_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__1, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__1_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__1);
lean_inc(v_a_4455_);
v___x_4461_ = l_Lean_MessageData_ofSyntax(v_a_4455_);
v___x_4462_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4462_, 0, v___x_4460_);
lean_ctor_set(v___x_4462_, 1, v___x_4461_);
v___x_4463_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg(v___y_4440_, v___x_4462_, v___y_4444_, v___y_4445_, v___y_4446_, v___y_4447_);
lean_dec(v___y_4447_);
lean_dec_ref(v___y_4446_);
lean_dec(v___y_4445_);
lean_dec_ref(v___y_4444_);
if (lean_obj_tag(v___x_4463_) == 0)
{
lean_dec_ref_known(v___x_4463_, 1);
v___y_4425_ = v_a_4455_;
goto v___jp_4424_;
}
else
{
lean_object* v_a_4464_; lean_object* v___x_4466_; uint8_t v_isShared_4467_; uint8_t v_isSharedCheck_4471_; 
lean_dec(v_a_4455_);
v_a_4464_ = lean_ctor_get(v___x_4463_, 0);
v_isSharedCheck_4471_ = !lean_is_exclusive(v___x_4463_);
if (v_isSharedCheck_4471_ == 0)
{
v___x_4466_ = v___x_4463_;
v_isShared_4467_ = v_isSharedCheck_4471_;
goto v_resetjp_4465_;
}
else
{
lean_inc(v_a_4464_);
lean_dec(v___x_4463_);
v___x_4466_ = lean_box(0);
v_isShared_4467_ = v_isSharedCheck_4471_;
goto v_resetjp_4465_;
}
v_resetjp_4465_:
{
lean_object* v___x_4469_; 
if (v_isShared_4467_ == 0)
{
v___x_4469_ = v___x_4466_;
goto v_reusejp_4468_;
}
else
{
lean_object* v_reuseFailAlloc_4470_; 
v_reuseFailAlloc_4470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4470_, 0, v_a_4464_);
v___x_4469_ = v_reuseFailAlloc_4470_;
goto v_reusejp_4468_;
}
v_reusejp_4468_:
{
return v___x_4469_;
}
}
}
}
}
}
else
{
lean_object* v_a_4472_; lean_object* v___x_4474_; uint8_t v_isShared_4475_; uint8_t v_isSharedCheck_4479_; 
lean_dec(v___y_4447_);
lean_dec_ref(v___y_4446_);
lean_dec(v___y_4445_);
lean_dec_ref(v___y_4444_);
lean_dec(v___y_4440_);
v_a_4472_ = lean_ctor_get(v___x_4450_, 0);
v_isSharedCheck_4479_ = !lean_is_exclusive(v___x_4450_);
if (v_isSharedCheck_4479_ == 0)
{
v___x_4474_ = v___x_4450_;
v_isShared_4475_ = v_isSharedCheck_4479_;
goto v_resetjp_4473_;
}
else
{
lean_inc(v_a_4472_);
lean_dec(v___x_4450_);
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
v___jp_4480_:
{
lean_object* v___x_4491_; 
v___x_4491_ = l_Lean_compileDecls(v___y_4486_, v___y_4490_, v___y_4485_, v___y_4483_);
if (lean_obj_tag(v___x_4491_) == 0)
{
lean_object* v___x_4492_; 
lean_dec_ref_known(v___x_4491_, 1);
lean_inc(v___x_4438_);
v___x_4492_ = l_Lean_enableRealizationsForConst(v___x_4438_, v___y_4485_, v___y_4483_);
if (lean_obj_tag(v___x_4492_) == 0)
{
lean_object* v_toCold_4493_; lean_object* v_options_4494_; lean_object* v_inheritedTraceOptions_4495_; uint8_t v_hasTrace_4496_; lean_object* v___x_4497_; 
lean_dec_ref_known(v___x_4492_, 1);
v_toCold_4493_ = lean_ctor_get(v___y_4485_, 0);
v_options_4494_ = lean_ctor_get(v_toCold_4493_, 2);
v_inheritedTraceOptions_4495_ = lean_ctor_get(v_toCold_4493_, 11);
v_hasTrace_4496_ = lean_ctor_get_uint8(v_options_4494_, sizeof(void*)*1);
v___x_4497_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3));
if (v_hasTrace_4496_ == 0)
{
v___y_4440_ = v___x_4497_;
v___y_4441_ = v___y_4489_;
v___y_4442_ = v___y_4488_;
v___y_4443_ = v___y_4484_;
v___y_4444_ = v___y_4482_;
v___y_4445_ = v___y_4481_;
v___y_4446_ = v___y_4485_;
v___y_4447_ = v___y_4483_;
goto v___jp_4439_;
}
else
{
lean_object* v___x_4498_; uint8_t v___x_4499_; 
v___x_4498_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__6);
v___x_4499_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4495_, v_options_4494_, v___x_4498_);
if (v___x_4499_ == 0)
{
v___y_4440_ = v___x_4497_;
v___y_4441_ = v___y_4489_;
v___y_4442_ = v___y_4488_;
v___y_4443_ = v___y_4484_;
v___y_4444_ = v___y_4482_;
v___y_4445_ = v___y_4481_;
v___y_4446_ = v___y_4485_;
v___y_4447_ = v___y_4483_;
goto v___jp_4439_;
}
else
{
lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; 
v___x_4500_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__3, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__3_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___closed__3);
lean_inc(v___x_4438_);
v___x_4501_ = l_Lean_MessageData_ofConstName(v___x_4438_, v___y_4487_);
v___x_4502_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4502_, 0, v___x_4500_);
lean_ctor_set(v___x_4502_, 1, v___x_4501_);
v___x_4503_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux_spec__0___redArg(v___x_4497_, v___x_4502_, v___y_4482_, v___y_4481_, v___y_4485_, v___y_4483_);
if (lean_obj_tag(v___x_4503_) == 0)
{
lean_dec_ref_known(v___x_4503_, 1);
v___y_4440_ = v___x_4497_;
v___y_4441_ = v___y_4489_;
v___y_4442_ = v___y_4488_;
v___y_4443_ = v___y_4484_;
v___y_4444_ = v___y_4482_;
v___y_4445_ = v___y_4481_;
v___y_4446_ = v___y_4485_;
v___y_4447_ = v___y_4483_;
goto v___jp_4439_;
}
else
{
lean_object* v_a_4504_; lean_object* v___x_4506_; uint8_t v_isShared_4507_; uint8_t v_isSharedCheck_4511_; 
lean_dec(v___y_4489_);
lean_dec_ref(v___y_4488_);
lean_dec_ref(v___y_4485_);
lean_dec(v___y_4484_);
lean_dec(v___y_4483_);
lean_dec_ref(v___y_4482_);
lean_dec(v___y_4481_);
lean_dec(v___x_4438_);
lean_dec(v_instName_4434_);
lean_dec(v_inductiveTypeName_4411_);
v_a_4504_ = lean_ctor_get(v___x_4503_, 0);
v_isSharedCheck_4511_ = !lean_is_exclusive(v___x_4503_);
if (v_isSharedCheck_4511_ == 0)
{
v___x_4506_ = v___x_4503_;
v_isShared_4507_ = v_isSharedCheck_4511_;
goto v_resetjp_4505_;
}
else
{
lean_inc(v_a_4504_);
lean_dec(v___x_4503_);
v___x_4506_ = lean_box(0);
v_isShared_4507_ = v_isSharedCheck_4511_;
goto v_resetjp_4505_;
}
v_resetjp_4505_:
{
lean_object* v___x_4509_; 
if (v_isShared_4507_ == 0)
{
v___x_4509_ = v___x_4506_;
goto v_reusejp_4508_;
}
else
{
lean_object* v_reuseFailAlloc_4510_; 
v_reuseFailAlloc_4510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4510_, 0, v_a_4504_);
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
}
}
else
{
lean_object* v_a_4512_; lean_object* v___x_4514_; uint8_t v_isShared_4515_; uint8_t v_isSharedCheck_4519_; 
lean_dec(v___y_4489_);
lean_dec_ref(v___y_4488_);
lean_dec_ref(v___y_4485_);
lean_dec(v___y_4484_);
lean_dec(v___y_4483_);
lean_dec_ref(v___y_4482_);
lean_dec(v___y_4481_);
lean_dec(v___x_4438_);
lean_dec(v_instName_4434_);
lean_dec(v_inductiveTypeName_4411_);
v_a_4512_ = lean_ctor_get(v___x_4492_, 0);
v_isSharedCheck_4519_ = !lean_is_exclusive(v___x_4492_);
if (v_isSharedCheck_4519_ == 0)
{
v___x_4514_ = v___x_4492_;
v_isShared_4515_ = v_isSharedCheck_4519_;
goto v_resetjp_4513_;
}
else
{
lean_inc(v_a_4512_);
lean_dec(v___x_4492_);
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
lean_dec(v___y_4489_);
lean_dec_ref(v___y_4488_);
lean_dec_ref(v___y_4485_);
lean_dec(v___y_4484_);
lean_dec(v___y_4483_);
lean_dec_ref(v___y_4482_);
lean_dec(v___y_4481_);
lean_dec(v___x_4438_);
lean_dec(v_instName_4434_);
lean_dec(v_inductiveTypeName_4411_);
v_a_4520_ = lean_ctor_get(v___x_4491_, 0);
v_isSharedCheck_4527_ = !lean_is_exclusive(v___x_4491_);
if (v_isSharedCheck_4527_ == 0)
{
v___x_4522_ = v___x_4491_;
v_isShared_4523_ = v_isSharedCheck_4527_;
goto v_resetjp_4521_;
}
else
{
lean_inc(v_a_4520_);
lean_dec(v___x_4491_);
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
v___jp_4528_:
{
lean_object* v___x_4537_; lean_object* v_env_4538_; uint8_t v_isNoncomputableSection_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; 
v___x_4537_ = lean_st_ref_get(v___y_4536_);
v_env_4538_ = lean_ctor_get(v___x_4537_, 0);
lean_inc_ref(v_env_4538_);
lean_dec(v___x_4537_);
v_isNoncomputableSection_4539_ = lean_ctor_get_uint8(v___y_4531_, sizeof(void*)*8 + 4);
v___x_4540_ = lean_unsigned_to_nat(1u);
v___x_4541_ = lean_mk_empty_array_with_capacity(v___x_4540_);
lean_inc(v___x_4438_);
v___x_4542_ = lean_array_push(v___x_4541_, v___x_4438_);
if (v_isNoncomputableSection_4539_ == 0)
{
lean_dec_ref(v_env_4538_);
v___y_4481_ = v___y_4534_;
v___y_4482_ = v___y_4533_;
v___y_4483_ = v___y_4536_;
v___y_4484_ = v___y_4532_;
v___y_4485_ = v___y_4535_;
v___y_4486_ = v___x_4542_;
v___y_4487_ = v___y_4529_;
v___y_4488_ = v___y_4531_;
v___y_4489_ = v___y_4530_;
v___y_4490_ = v___x_4412_;
goto v___jp_4480_;
}
else
{
uint8_t v___x_4543_; 
lean_inc(v___x_4438_);
v___x_4543_ = l_Lean_isMarkedMeta(v_env_4538_, v___x_4438_);
v___y_4481_ = v___y_4534_;
v___y_4482_ = v___y_4533_;
v___y_4483_ = v___y_4536_;
v___y_4484_ = v___y_4532_;
v___y_4485_ = v___y_4535_;
v___y_4486_ = v___x_4542_;
v___y_4487_ = v___y_4529_;
v___y_4488_ = v___y_4531_;
v___y_4489_ = v___y_4530_;
v___y_4490_ = v___x_4543_;
goto v___jp_4480_;
}
}
}
else
{
lean_object* v_a_4682_; lean_object* v___x_4684_; uint8_t v_isShared_4685_; uint8_t v_isSharedCheck_4689_; 
lean_dec(v___y_4422_);
lean_dec_ref(v___y_4421_);
lean_dec(v___y_4420_);
lean_dec_ref(v___y_4419_);
lean_dec(v___y_4418_);
lean_dec_ref(v___y_4417_);
lean_dec(v_ctorName_4415_);
lean_dec_ref(v___f_4414_);
lean_dec(v_inductiveTypeName_4411_);
v_a_4682_ = lean_ctor_get(v___x_4428_, 0);
v_isSharedCheck_4689_ = !lean_is_exclusive(v___x_4428_);
if (v_isSharedCheck_4689_ == 0)
{
v___x_4684_ = v___x_4428_;
v_isShared_4685_ = v_isSharedCheck_4689_;
goto v_resetjp_4683_;
}
else
{
lean_inc(v_a_4682_);
lean_dec(v___x_4428_);
v___x_4684_ = lean_box(0);
v_isShared_4685_ = v_isSharedCheck_4689_;
goto v_resetjp_4683_;
}
v_resetjp_4683_:
{
lean_object* v___x_4687_; 
if (v_isShared_4685_ == 0)
{
v___x_4687_ = v___x_4684_;
goto v_reusejp_4686_;
}
else
{
lean_object* v_reuseFailAlloc_4688_; 
v_reuseFailAlloc_4688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4688_, 0, v_a_4682_);
v___x_4687_ = v_reuseFailAlloc_4688_;
goto v_reusejp_4686_;
}
v_reusejp_4686_:
{
return v___x_4687_;
}
}
}
v___jp_4424_:
{
lean_object* v___x_4426_; lean_object* v___x_4427_; 
v___x_4426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4426_, 0, v___y_4425_);
v___x_4427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4427_, 0, v___x_4426_);
return v___x_4427_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___boxed(lean_object* v___x_4690_, lean_object* v___x_4691_, lean_object* v_inductiveTypeName_4692_, lean_object* v___x_4693_, lean_object* v___x_4694_, lean_object* v___f_4695_, lean_object* v_ctorName_4696_, lean_object* v_addHypotheses_4697_, lean_object* v___y_4698_, lean_object* v___y_4699_, lean_object* v___y_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_){
_start:
{
uint8_t v___x_17966__boxed_4705_; uint8_t v_addHypotheses_boxed_4706_; lean_object* v_res_4707_; 
v___x_17966__boxed_4705_ = lean_unbox(v___x_4693_);
v_addHypotheses_boxed_4706_ = lean_unbox(v_addHypotheses_4697_);
v_res_4707_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1(v___x_4690_, v___x_4691_, v_inductiveTypeName_4692_, v___x_17966__boxed_4705_, v___x_4694_, v___f_4695_, v_ctorName_4696_, v_addHypotheses_boxed_4706_, v___y_4698_, v___y_4699_, v___y_4700_, v___y_4701_, v___y_4702_, v___y_4703_);
lean_dec(v___x_4694_);
return v_res_4707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f(lean_object* v_inductiveTypeName_4710_, lean_object* v_ctorName_4711_, uint8_t v_addHypotheses_4712_, lean_object* v___y_4713_, lean_object* v___y_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_){
_start:
{
lean_object* v___f_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; uint8_t v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___f_4727_; uint8_t v___x_4728_; 
v___f_4720_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___closed__0));
v___x_4721_ = lean_box(0);
v___x_4722_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__1));
v___x_4723_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___closed__1));
v___x_4724_ = 1;
v___x_4725_ = lean_box(v___x_4724_);
v___x_4726_ = lean_box(v_addHypotheses_4712_);
lean_inc(v_ctorName_4711_);
v___f_4727_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___lam__1___boxed), 15, 8);
lean_closure_set(v___f_4727_, 0, v___x_4722_);
lean_closure_set(v___f_4727_, 1, v___x_4723_);
lean_closure_set(v___f_4727_, 2, v_inductiveTypeName_4710_);
lean_closure_set(v___f_4727_, 3, v___x_4725_);
lean_closure_set(v___f_4727_, 4, v___x_4721_);
lean_closure_set(v___f_4727_, 5, v___f_4720_);
lean_closure_set(v___f_4727_, 6, v_ctorName_4711_);
lean_closure_set(v___f_4727_, 7, v___x_4726_);
v___x_4728_ = l_Lean_isPrivateName(v_ctorName_4711_);
lean_dec(v_ctorName_4711_);
if (v___x_4728_ == 0)
{
lean_object* v___x_4729_; 
v___x_4729_ = l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg(v___f_4727_, v___x_4724_, v___y_4713_, v___y_4714_, v___y_4715_, v___y_4716_, v___y_4717_, v___y_4718_);
return v___x_4729_;
}
else
{
uint8_t v___x_4730_; lean_object* v___x_4731_; 
v___x_4730_ = 0;
v___x_4731_ = l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg(v___f_4727_, v___x_4730_, v___y_4713_, v___y_4714_, v___y_4715_, v___y_4716_, v___y_4717_, v___y_4718_);
return v___x_4731_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___boxed(lean_object* v_inductiveTypeName_4732_, lean_object* v_ctorName_4733_, lean_object* v_addHypotheses_4734_, lean_object* v___y_4735_, lean_object* v___y_4736_, lean_object* v___y_4737_, lean_object* v___y_4738_, lean_object* v___y_4739_, lean_object* v___y_4740_, lean_object* v___y_4741_){
_start:
{
uint8_t v_addHypotheses_boxed_4742_; lean_object* v_res_4743_; 
v_addHypotheses_boxed_4742_ = lean_unbox(v_addHypotheses_4734_);
v_res_4743_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f(v_inductiveTypeName_4732_, v_ctorName_4733_, v_addHypotheses_boxed_4742_, v___y_4735_, v___y_4736_, v___y_4737_, v___y_4738_, v___y_4739_, v___y_4740_);
lean_dec(v___y_4740_);
lean_dec_ref(v___y_4739_);
lean_dec(v___y_4738_);
lean_dec_ref(v___y_4737_);
lean_dec(v___y_4736_);
lean_dec_ref(v___y_4735_);
return v_res_4743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing(lean_object* v_inductiveTypeName_4744_, lean_object* v_ctorName_4745_, uint8_t v_addHypotheses_4746_, lean_object* v___y_4747_, lean_object* v___y_4748_){
_start:
{
lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; 
v___x_4750_ = lean_box(v_addHypotheses_4746_);
v___x_4751_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f___boxed), 10, 3);
lean_closure_set(v___x_4751_, 0, v_inductiveTypeName_4744_);
lean_closure_set(v___x_4751_, 1, v_ctorName_4745_);
lean_closure_set(v___x_4751_, 2, v___x_4750_);
v___x_4752_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_4751_, v___y_4747_, v___y_4748_);
if (lean_obj_tag(v___x_4752_) == 0)
{
lean_object* v_a_4753_; lean_object* v___x_4755_; uint8_t v_isShared_4756_; uint8_t v_isSharedCheck_4782_; 
v_a_4753_ = lean_ctor_get(v___x_4752_, 0);
v_isSharedCheck_4782_ = !lean_is_exclusive(v___x_4752_);
if (v_isSharedCheck_4782_ == 0)
{
v___x_4755_ = v___x_4752_;
v_isShared_4756_ = v_isSharedCheck_4782_;
goto v_resetjp_4754_;
}
else
{
lean_inc(v_a_4753_);
lean_dec(v___x_4752_);
v___x_4755_ = lean_box(0);
v_isShared_4756_ = v_isSharedCheck_4782_;
goto v_resetjp_4754_;
}
v_resetjp_4754_:
{
if (lean_obj_tag(v_a_4753_) == 0)
{
uint8_t v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4760_; 
v___x_4757_ = 0;
v___x_4758_ = lean_box(v___x_4757_);
if (v_isShared_4756_ == 0)
{
lean_ctor_set(v___x_4755_, 0, v___x_4758_);
v___x_4760_ = v___x_4755_;
goto v_reusejp_4759_;
}
else
{
lean_object* v_reuseFailAlloc_4761_; 
v_reuseFailAlloc_4761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4761_, 0, v___x_4758_);
v___x_4760_ = v_reuseFailAlloc_4761_;
goto v_reusejp_4759_;
}
v_reusejp_4759_:
{
return v___x_4760_;
}
}
else
{
lean_object* v_val_4762_; lean_object* v___x_4763_; 
lean_del_object(v___x_4755_);
v_val_4762_ = lean_ctor_get(v_a_4753_, 0);
lean_inc(v_val_4762_);
lean_dec_ref_known(v_a_4753_, 1);
v___x_4763_ = l_Lean_Elab_Command_elabCommand(v_val_4762_, v___y_4747_, v___y_4748_);
if (lean_obj_tag(v___x_4763_) == 0)
{
lean_object* v___x_4765_; uint8_t v_isShared_4766_; uint8_t v_isSharedCheck_4772_; 
v_isSharedCheck_4772_ = !lean_is_exclusive(v___x_4763_);
if (v_isSharedCheck_4772_ == 0)
{
lean_object* v_unused_4773_; 
v_unused_4773_ = lean_ctor_get(v___x_4763_, 0);
lean_dec(v_unused_4773_);
v___x_4765_ = v___x_4763_;
v_isShared_4766_ = v_isSharedCheck_4772_;
goto v_resetjp_4764_;
}
else
{
lean_dec(v___x_4763_);
v___x_4765_ = lean_box(0);
v_isShared_4766_ = v_isSharedCheck_4772_;
goto v_resetjp_4764_;
}
v_resetjp_4764_:
{
uint8_t v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4770_; 
v___x_4767_ = 1;
v___x_4768_ = lean_box(v___x_4767_);
if (v_isShared_4766_ == 0)
{
lean_ctor_set(v___x_4765_, 0, v___x_4768_);
v___x_4770_ = v___x_4765_;
goto v_reusejp_4769_;
}
else
{
lean_object* v_reuseFailAlloc_4771_; 
v_reuseFailAlloc_4771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4771_, 0, v___x_4768_);
v___x_4770_ = v_reuseFailAlloc_4771_;
goto v_reusejp_4769_;
}
v_reusejp_4769_:
{
return v___x_4770_;
}
}
}
else
{
lean_object* v_a_4774_; lean_object* v___x_4776_; uint8_t v_isShared_4777_; uint8_t v_isSharedCheck_4781_; 
v_a_4774_ = lean_ctor_get(v___x_4763_, 0);
v_isSharedCheck_4781_ = !lean_is_exclusive(v___x_4763_);
if (v_isSharedCheck_4781_ == 0)
{
v___x_4776_ = v___x_4763_;
v_isShared_4777_ = v_isSharedCheck_4781_;
goto v_resetjp_4775_;
}
else
{
lean_inc(v_a_4774_);
lean_dec(v___x_4763_);
v___x_4776_ = lean_box(0);
v_isShared_4777_ = v_isSharedCheck_4781_;
goto v_resetjp_4775_;
}
v_resetjp_4775_:
{
lean_object* v___x_4779_; 
if (v_isShared_4777_ == 0)
{
v___x_4779_ = v___x_4776_;
goto v_reusejp_4778_;
}
else
{
lean_object* v_reuseFailAlloc_4780_; 
v_reuseFailAlloc_4780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4780_, 0, v_a_4774_);
v___x_4779_ = v_reuseFailAlloc_4780_;
goto v_reusejp_4778_;
}
v_reusejp_4778_:
{
return v___x_4779_;
}
}
}
}
}
}
else
{
lean_object* v_a_4783_; lean_object* v___x_4785_; uint8_t v_isShared_4786_; uint8_t v_isSharedCheck_4790_; 
v_a_4783_ = lean_ctor_get(v___x_4752_, 0);
v_isSharedCheck_4790_ = !lean_is_exclusive(v___x_4752_);
if (v_isSharedCheck_4790_ == 0)
{
v___x_4785_ = v___x_4752_;
v_isShared_4786_ = v_isSharedCheck_4790_;
goto v_resetjp_4784_;
}
else
{
lean_inc(v_a_4783_);
lean_dec(v___x_4752_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing___boxed(lean_object* v_inductiveTypeName_4791_, lean_object* v_ctorName_4792_, lean_object* v_addHypotheses_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_, lean_object* v___y_4796_){
_start:
{
uint8_t v_addHypotheses_boxed_4797_; lean_object* v_res_4798_; 
v_addHypotheses_boxed_4797_ = lean_unbox(v_addHypotheses_4793_);
v_res_4798_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing(v_inductiveTypeName_4791_, v_ctorName_4792_, v_addHypotheses_boxed_4797_, v___y_4794_, v___y_4795_);
lean_dec(v___y_4795_);
lean_dec_ref(v___y_4794_);
return v_res_4798_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1___redArg(lean_object* v_declName_4802_, uint8_t v_addHypotheses_4803_, lean_object* v_as_x27_4804_, lean_object* v_b_4805_, lean_object* v___y_4806_, lean_object* v___y_4807_){
_start:
{
if (lean_obj_tag(v_as_x27_4804_) == 0)
{
lean_object* v___x_4809_; 
lean_dec(v_declName_4802_);
v___x_4809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4809_, 0, v_b_4805_);
return v___x_4809_;
}
else
{
lean_object* v_head_4810_; lean_object* v_tail_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; 
lean_dec_ref(v_b_4805_);
v_head_4810_ = lean_ctor_get(v_as_x27_4804_, 0);
v_tail_4811_ = lean_ctor_get(v_as_x27_4804_, 1);
v___x_4812_ = lean_box(0);
v___x_4813_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1___redArg___closed__0));
lean_inc(v_head_4810_);
lean_inc(v_declName_4802_);
v___x_4814_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing(v_declName_4802_, v_head_4810_, v_addHypotheses_4803_, v___y_4806_, v___y_4807_);
if (lean_obj_tag(v___x_4814_) == 0)
{
lean_object* v_a_4815_; lean_object* v___x_4817_; uint8_t v_isShared_4818_; uint8_t v_isSharedCheck_4826_; 
v_a_4815_ = lean_ctor_get(v___x_4814_, 0);
v_isSharedCheck_4826_ = !lean_is_exclusive(v___x_4814_);
if (v_isSharedCheck_4826_ == 0)
{
v___x_4817_ = v___x_4814_;
v_isShared_4818_ = v_isSharedCheck_4826_;
goto v_resetjp_4816_;
}
else
{
lean_inc(v_a_4815_);
lean_dec(v___x_4814_);
v___x_4817_ = lean_box(0);
v_isShared_4818_ = v_isSharedCheck_4826_;
goto v_resetjp_4816_;
}
v_resetjp_4816_:
{
uint8_t v___x_4819_; 
v___x_4819_ = lean_unbox(v_a_4815_);
if (v___x_4819_ == 0)
{
lean_del_object(v___x_4817_);
lean_dec(v_a_4815_);
v_as_x27_4804_ = v_tail_4811_;
v_b_4805_ = v___x_4813_;
goto _start;
}
else
{
lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4824_; 
lean_dec(v_declName_4802_);
v___x_4821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4821_, 0, v_a_4815_);
v___x_4822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4822_, 0, v___x_4821_);
lean_ctor_set(v___x_4822_, 1, v___x_4812_);
if (v_isShared_4818_ == 0)
{
lean_ctor_set(v___x_4817_, 0, v___x_4822_);
v___x_4824_ = v___x_4817_;
goto v_reusejp_4823_;
}
else
{
lean_object* v_reuseFailAlloc_4825_; 
v_reuseFailAlloc_4825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4825_, 0, v___x_4822_);
v___x_4824_ = v_reuseFailAlloc_4825_;
goto v_reusejp_4823_;
}
v_reusejp_4823_:
{
return v___x_4824_;
}
}
}
}
else
{
lean_object* v_a_4827_; lean_object* v___x_4829_; uint8_t v_isShared_4830_; uint8_t v_isSharedCheck_4834_; 
lean_dec(v_declName_4802_);
v_a_4827_ = lean_ctor_get(v___x_4814_, 0);
v_isSharedCheck_4834_ = !lean_is_exclusive(v___x_4814_);
if (v_isSharedCheck_4834_ == 0)
{
v___x_4829_ = v___x_4814_;
v_isShared_4830_ = v_isSharedCheck_4834_;
goto v_resetjp_4828_;
}
else
{
lean_inc(v_a_4827_);
lean_dec(v___x_4814_);
v___x_4829_ = lean_box(0);
v_isShared_4830_ = v_isSharedCheck_4834_;
goto v_resetjp_4828_;
}
v_resetjp_4828_:
{
lean_object* v___x_4832_; 
if (v_isShared_4830_ == 0)
{
v___x_4832_ = v___x_4829_;
goto v_reusejp_4831_;
}
else
{
lean_object* v_reuseFailAlloc_4833_; 
v_reuseFailAlloc_4833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4833_, 0, v_a_4827_);
v___x_4832_ = v_reuseFailAlloc_4833_;
goto v_reusejp_4831_;
}
v_reusejp_4831_:
{
return v___x_4832_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1___redArg___boxed(lean_object* v_declName_4835_, lean_object* v_addHypotheses_4836_, lean_object* v_as_x27_4837_, lean_object* v_b_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_, lean_object* v___y_4841_){
_start:
{
uint8_t v_addHypotheses_boxed_4842_; lean_object* v_res_4843_; 
v_addHypotheses_boxed_4842_ = lean_unbox(v_addHypotheses_4836_);
v_res_4843_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1___redArg(v_declName_4835_, v_addHypotheses_boxed_4842_, v_as_x27_4837_, v_b_4838_, v___y_4839_, v___y_4840_);
lean_dec(v___y_4840_);
lean_dec_ref(v___y_4839_);
lean_dec(v_as_x27_4837_);
return v_res_4843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__0(lean_object* v_a_4844_, lean_object* v_declName_4845_, uint8_t v_addHypotheses_4846_, lean_object* v___y_4847_, lean_object* v___y_4848_){
_start:
{
lean_object* v_ctors_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; 
v_ctors_4850_ = lean_ctor_get(v_a_4844_, 4);
v___x_4851_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1___redArg___closed__0));
v___x_4852_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1___redArg(v_declName_4845_, v_addHypotheses_4846_, v_ctors_4850_, v___x_4851_, v___y_4847_, v___y_4848_);
if (lean_obj_tag(v___x_4852_) == 0)
{
lean_object* v_a_4853_; lean_object* v___x_4855_; uint8_t v_isShared_4856_; uint8_t v_isSharedCheck_4867_; 
v_a_4853_ = lean_ctor_get(v___x_4852_, 0);
v_isSharedCheck_4867_ = !lean_is_exclusive(v___x_4852_);
if (v_isSharedCheck_4867_ == 0)
{
v___x_4855_ = v___x_4852_;
v_isShared_4856_ = v_isSharedCheck_4867_;
goto v_resetjp_4854_;
}
else
{
lean_inc(v_a_4853_);
lean_dec(v___x_4852_);
v___x_4855_ = lean_box(0);
v_isShared_4856_ = v_isSharedCheck_4867_;
goto v_resetjp_4854_;
}
v_resetjp_4854_:
{
lean_object* v_fst_4857_; 
v_fst_4857_ = lean_ctor_get(v_a_4853_, 0);
lean_inc(v_fst_4857_);
lean_dec(v_a_4853_);
if (lean_obj_tag(v_fst_4857_) == 0)
{
uint8_t v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4861_; 
v___x_4858_ = 0;
v___x_4859_ = lean_box(v___x_4858_);
if (v_isShared_4856_ == 0)
{
lean_ctor_set(v___x_4855_, 0, v___x_4859_);
v___x_4861_ = v___x_4855_;
goto v_reusejp_4860_;
}
else
{
lean_object* v_reuseFailAlloc_4862_; 
v_reuseFailAlloc_4862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4862_, 0, v___x_4859_);
v___x_4861_ = v_reuseFailAlloc_4862_;
goto v_reusejp_4860_;
}
v_reusejp_4860_:
{
return v___x_4861_;
}
}
else
{
lean_object* v_val_4863_; lean_object* v___x_4865_; 
v_val_4863_ = lean_ctor_get(v_fst_4857_, 0);
lean_inc(v_val_4863_);
lean_dec_ref_known(v_fst_4857_, 1);
if (v_isShared_4856_ == 0)
{
lean_ctor_set(v___x_4855_, 0, v_val_4863_);
v___x_4865_ = v___x_4855_;
goto v_reusejp_4864_;
}
else
{
lean_object* v_reuseFailAlloc_4866_; 
v_reuseFailAlloc_4866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4866_, 0, v_val_4863_);
v___x_4865_ = v_reuseFailAlloc_4866_;
goto v_reusejp_4864_;
}
v_reusejp_4864_:
{
return v___x_4865_;
}
}
}
}
else
{
lean_object* v_a_4868_; lean_object* v___x_4870_; uint8_t v_isShared_4871_; uint8_t v_isSharedCheck_4875_; 
v_a_4868_ = lean_ctor_get(v___x_4852_, 0);
v_isSharedCheck_4875_ = !lean_is_exclusive(v___x_4852_);
if (v_isSharedCheck_4875_ == 0)
{
v___x_4870_ = v___x_4852_;
v_isShared_4871_ = v_isSharedCheck_4875_;
goto v_resetjp_4869_;
}
else
{
lean_inc(v_a_4868_);
lean_dec(v___x_4852_);
v___x_4870_ = lean_box(0);
v_isShared_4871_ = v_isSharedCheck_4875_;
goto v_resetjp_4869_;
}
v_resetjp_4869_:
{
lean_object* v___x_4873_; 
if (v_isShared_4871_ == 0)
{
v___x_4873_ = v___x_4870_;
goto v_reusejp_4872_;
}
else
{
lean_object* v_reuseFailAlloc_4874_; 
v_reuseFailAlloc_4874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4874_, 0, v_a_4868_);
v___x_4873_ = v_reuseFailAlloc_4874_;
goto v_reusejp_4872_;
}
v_reusejp_4872_:
{
return v___x_4873_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__0___boxed(lean_object* v_a_4876_, lean_object* v_declName_4877_, lean_object* v_addHypotheses_4878_, lean_object* v___y_4879_, lean_object* v___y_4880_, lean_object* v___y_4881_){
_start:
{
uint8_t v_addHypotheses_boxed_4882_; lean_object* v_res_4883_; 
v_addHypotheses_boxed_4882_ = lean_unbox(v_addHypotheses_4878_);
v_res_4883_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__0(v_a_4876_, v_declName_4877_, v_addHypotheses_boxed_4882_, v___y_4879_, v___y_4880_);
lean_dec(v___y_4880_);
lean_dec_ref(v___y_4879_);
lean_dec_ref(v_a_4876_);
return v_res_4883_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_4884_; lean_object* v___x_4885_; 
v___x_4884_ = lean_obj_once(&l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__0, &l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__0_once, _init_l_Lean_withExporting___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmd_x3f_spec__1___redArg___closed__0);
v___x_4885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4885_, 0, v___x_4884_);
return v___x_4885_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; 
v___x_4886_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__0);
v___x_4887_ = lean_unsigned_to_nat(0u);
v___x_4888_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_4888_, 0, v___x_4887_);
lean_ctor_set(v___x_4888_, 1, v___x_4887_);
lean_ctor_set(v___x_4888_, 2, v___x_4887_);
lean_ctor_set(v___x_4888_, 3, v___x_4887_);
lean_ctor_set(v___x_4888_, 4, v___x_4886_);
lean_ctor_set(v___x_4888_, 5, v___x_4886_);
lean_ctor_set(v___x_4888_, 6, v___x_4886_);
lean_ctor_set(v___x_4888_, 7, v___x_4886_);
lean_ctor_set(v___x_4888_, 8, v___x_4886_);
lean_ctor_set(v___x_4888_, 9, v___x_4886_);
lean_ctor_set(v___x_4888_, 10, v___x_4886_);
return v___x_4888_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; 
v___x_4889_ = lean_unsigned_to_nat(32u);
v___x_4890_ = lean_mk_empty_array_with_capacity(v___x_4889_);
v___x_4891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4891_, 0, v___x_4890_);
return v___x_4891_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__3(void){
_start:
{
size_t v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; 
v___x_4892_ = ((size_t)5ULL);
v___x_4893_ = lean_unsigned_to_nat(0u);
v___x_4894_ = lean_unsigned_to_nat(32u);
v___x_4895_ = lean_mk_empty_array_with_capacity(v___x_4894_);
v___x_4896_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__2);
v___x_4897_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4897_, 0, v___x_4896_);
lean_ctor_set(v___x_4897_, 1, v___x_4895_);
lean_ctor_set(v___x_4897_, 2, v___x_4893_);
lean_ctor_set(v___x_4897_, 3, v___x_4893_);
lean_ctor_set_usize(v___x_4897_, 4, v___x_4892_);
return v___x_4897_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; 
v___x_4898_ = lean_box(1);
v___x_4899_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__3);
v___x_4900_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__0);
v___x_4901_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4901_, 0, v___x_4900_);
lean_ctor_set(v___x_4901_, 1, v___x_4899_);
lean_ctor_set(v___x_4901_, 2, v___x_4898_);
return v___x_4901_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg(lean_object* v_msgData_4902_, lean_object* v___y_4903_){
_start:
{
lean_object* v___x_4905_; lean_object* v_env_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v_scopes_4909_; lean_object* v___x_4910_; lean_object* v_opts_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; 
v___x_4905_ = lean_st_ref_get(v___y_4903_);
v_env_4906_ = lean_ctor_get(v___x_4905_, 0);
lean_inc_ref(v_env_4906_);
lean_dec(v___x_4905_);
v___x_4907_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4908_ = lean_st_ref_get(v___y_4903_);
v_scopes_4909_ = lean_ctor_get(v___x_4908_, 2);
lean_inc(v_scopes_4909_);
lean_dec(v___x_4908_);
v___x_4910_ = l_List_head_x21___redArg(v___x_4907_, v_scopes_4909_);
lean_dec(v_scopes_4909_);
v_opts_4911_ = lean_ctor_get(v___x_4910_, 1);
lean_inc_ref(v_opts_4911_);
lean_dec(v___x_4910_);
v___x_4912_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__1);
v___x_4913_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___closed__4);
v___x_4914_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4914_, 0, v_env_4906_);
lean_ctor_set(v___x_4914_, 1, v___x_4912_);
lean_ctor_set(v___x_4914_, 2, v___x_4913_);
lean_ctor_set(v___x_4914_, 3, v_opts_4911_);
v___x_4915_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4915_, 0, v___x_4914_);
lean_ctor_set(v___x_4915_, 1, v_msgData_4902_);
v___x_4916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4916_, 0, v___x_4915_);
return v___x_4916_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg___boxed(lean_object* v_msgData_4917_, lean_object* v___y_4918_, lean_object* v___y_4919_){
_start:
{
lean_object* v_res_4920_; 
v_res_4920_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg(v_msgData_4917_, v___y_4918_);
lean_dec(v___y_4918_);
return v_res_4920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__3___redArg(lean_object* v_msgData_4921_, lean_object* v_macroStack_4922_, lean_object* v___y_4923_){
_start:
{
lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v_scopes_4927_; lean_object* v___x_4928_; lean_object* v_opts_4929_; lean_object* v___x_4930_; uint8_t v___x_4931_; 
v___x_4925_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4926_ = lean_st_ref_get(v___y_4923_);
v_scopes_4927_ = lean_ctor_get(v___x_4926_, 2);
lean_inc(v_scopes_4927_);
lean_dec(v___x_4926_);
v___x_4928_ = l_List_head_x21___redArg(v___x_4925_, v_scopes_4927_);
lean_dec(v_scopes_4927_);
v_opts_4929_ = lean_ctor_get(v___x_4928_, 1);
lean_inc_ref(v_opts_4929_);
lean_dec(v___x_4928_);
v___x_4930_ = l_Lean_Elab_pp_macroStack;
v___x_4931_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__4(v_opts_4929_, v___x_4930_);
lean_dec_ref(v_opts_4929_);
if (v___x_4931_ == 0)
{
lean_object* v___x_4932_; 
lean_dec(v_macroStack_4922_);
v___x_4932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4932_, 0, v_msgData_4921_);
return v___x_4932_;
}
else
{
if (lean_obj_tag(v_macroStack_4922_) == 0)
{
lean_object* v___x_4933_; 
v___x_4933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4933_, 0, v_msgData_4921_);
return v___x_4933_;
}
else
{
lean_object* v_head_4934_; lean_object* v_after_4935_; lean_object* v___x_4937_; uint8_t v_isShared_4938_; uint8_t v_isSharedCheck_4950_; 
v_head_4934_ = lean_ctor_get(v_macroStack_4922_, 0);
lean_inc(v_head_4934_);
v_after_4935_ = lean_ctor_get(v_head_4934_, 1);
v_isSharedCheck_4950_ = !lean_is_exclusive(v_head_4934_);
if (v_isSharedCheck_4950_ == 0)
{
lean_object* v_unused_4951_; 
v_unused_4951_ = lean_ctor_get(v_head_4934_, 0);
lean_dec(v_unused_4951_);
v___x_4937_ = v_head_4934_;
v_isShared_4938_ = v_isSharedCheck_4950_;
goto v_resetjp_4936_;
}
else
{
lean_inc(v_after_4935_);
lean_dec(v_head_4934_);
v___x_4937_ = lean_box(0);
v_isShared_4938_ = v_isSharedCheck_4950_;
goto v_resetjp_4936_;
}
v_resetjp_4936_:
{
lean_object* v___x_4939_; lean_object* v___x_4941_; 
v___x_4939_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5___closed__0);
if (v_isShared_4938_ == 0)
{
lean_ctor_set_tag(v___x_4937_, 7);
lean_ctor_set(v___x_4937_, 1, v___x_4939_);
lean_ctor_set(v___x_4937_, 0, v_msgData_4921_);
v___x_4941_ = v___x_4937_;
goto v_reusejp_4940_;
}
else
{
lean_object* v_reuseFailAlloc_4949_; 
v_reuseFailAlloc_4949_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4949_, 0, v_msgData_4921_);
lean_ctor_set(v_reuseFailAlloc_4949_, 1, v___x_4939_);
v___x_4941_ = v_reuseFailAlloc_4949_;
goto v_reusejp_4940_;
}
v_reusejp_4940_:
{
lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v_msgData_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; 
v___x_4942_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2___redArg___closed__2);
v___x_4943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4943_, 0, v___x_4941_);
lean_ctor_set(v___x_4943_, 1, v___x_4942_);
v___x_4944_ = l_Lean_MessageData_ofSyntax(v_after_4935_);
v___x_4945_ = l_Lean_indentD(v___x_4944_);
v_msgData_4946_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_4946_, 0, v___x_4943_);
lean_ctor_set(v_msgData_4946_, 1, v___x_4945_);
v___x_4947_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1_spec__1_spec__2_spec__5(v_msgData_4946_, v_macroStack_4922_);
v___x_4948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4948_, 0, v___x_4947_);
return v___x_4948_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__3___redArg___boxed(lean_object* v_msgData_4952_, lean_object* v_macroStack_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_){
_start:
{
lean_object* v_res_4956_; 
v_res_4956_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__3___redArg(v_msgData_4952_, v_macroStack_4953_, v___y_4954_);
lean_dec(v___y_4954_);
return v_res_4956_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2___redArg(lean_object* v_msg_4957_, lean_object* v___y_4958_, lean_object* v___y_4959_){
_start:
{
lean_object* v___x_4961_; 
v___x_4961_ = l_Lean_Elab_Command_getRef___redArg(v___y_4958_);
if (lean_obj_tag(v___x_4961_) == 0)
{
lean_object* v_a_4962_; lean_object* v_macroStack_4963_; lean_object* v___x_4964_; lean_object* v___x_4965_; lean_object* v_a_4966_; lean_object* v___x_4967_; lean_object* v_a_4968_; lean_object* v___x_4970_; uint8_t v_isShared_4971_; uint8_t v_isSharedCheck_4976_; 
v_a_4962_ = lean_ctor_get(v___x_4961_, 0);
lean_inc(v_a_4962_);
lean_dec_ref_known(v___x_4961_, 1);
v_macroStack_4963_ = lean_ctor_get(v___y_4958_, 4);
v___x_4964_ = l_Lean_Elab_getBetterRef(v_a_4962_, v_macroStack_4963_);
lean_dec(v_a_4962_);
v___x_4965_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg(v_msg_4957_, v___y_4959_);
v_a_4966_ = lean_ctor_get(v___x_4965_, 0);
lean_inc(v_a_4966_);
lean_dec_ref(v___x_4965_);
lean_inc(v_macroStack_4963_);
v___x_4967_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__3___redArg(v_a_4966_, v_macroStack_4963_, v___y_4959_);
v_a_4968_ = lean_ctor_get(v___x_4967_, 0);
v_isSharedCheck_4976_ = !lean_is_exclusive(v___x_4967_);
if (v_isSharedCheck_4976_ == 0)
{
v___x_4970_ = v___x_4967_;
v_isShared_4971_ = v_isSharedCheck_4976_;
goto v_resetjp_4969_;
}
else
{
lean_inc(v_a_4968_);
lean_dec(v___x_4967_);
v___x_4970_ = lean_box(0);
v_isShared_4971_ = v_isSharedCheck_4976_;
goto v_resetjp_4969_;
}
v_resetjp_4969_:
{
lean_object* v___x_4972_; lean_object* v___x_4974_; 
v___x_4972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4972_, 0, v___x_4964_);
lean_ctor_set(v___x_4972_, 1, v_a_4968_);
if (v_isShared_4971_ == 0)
{
lean_ctor_set_tag(v___x_4970_, 1);
lean_ctor_set(v___x_4970_, 0, v___x_4972_);
v___x_4974_ = v___x_4970_;
goto v_reusejp_4973_;
}
else
{
lean_object* v_reuseFailAlloc_4975_; 
v_reuseFailAlloc_4975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4975_, 0, v___x_4972_);
v___x_4974_ = v_reuseFailAlloc_4975_;
goto v_reusejp_4973_;
}
v_reusejp_4973_:
{
return v___x_4974_;
}
}
}
else
{
lean_object* v_a_4977_; lean_object* v___x_4979_; uint8_t v_isShared_4980_; uint8_t v_isSharedCheck_4984_; 
lean_dec_ref(v_msg_4957_);
v_a_4977_ = lean_ctor_get(v___x_4961_, 0);
v_isSharedCheck_4984_ = !lean_is_exclusive(v___x_4961_);
if (v_isSharedCheck_4984_ == 0)
{
v___x_4979_ = v___x_4961_;
v_isShared_4980_ = v_isSharedCheck_4984_;
goto v_resetjp_4978_;
}
else
{
lean_inc(v_a_4977_);
lean_dec(v___x_4961_);
v___x_4979_ = lean_box(0);
v_isShared_4980_ = v_isSharedCheck_4984_;
goto v_resetjp_4978_;
}
v_resetjp_4978_:
{
lean_object* v___x_4982_; 
if (v_isShared_4980_ == 0)
{
v___x_4982_ = v___x_4979_;
goto v_reusejp_4981_;
}
else
{
lean_object* v_reuseFailAlloc_4983_; 
v_reuseFailAlloc_4983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4983_, 0, v_a_4977_);
v___x_4982_ = v_reuseFailAlloc_4983_;
goto v_reusejp_4981_;
}
v_reusejp_4981_:
{
return v___x_4982_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2___redArg___boxed(lean_object* v_msg_4985_, lean_object* v___y_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_){
_start:
{
lean_object* v_res_4989_; 
v_res_4989_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2___redArg(v_msg_4985_, v___y_4986_, v___y_4987_);
lean_dec(v___y_4987_);
lean_dec_ref(v___y_4986_);
return v_res_4989_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__0(lean_object* v_constName_4990_, lean_object* v___y_4991_, lean_object* v___y_4992_){
_start:
{
lean_object* v___x_4994_; lean_object* v_env_4995_; lean_object* v___x_4996_; 
v___x_4994_ = lean_st_ref_get(v___y_4992_);
v_env_4995_ = lean_ctor_get(v___x_4994_, 0);
lean_inc_ref(v_env_4995_);
lean_dec(v___x_4994_);
lean_inc(v_constName_4990_);
v___x_4996_ = l_Lean_isInductiveCore_x3f(v_env_4995_, v_constName_4990_);
if (lean_obj_tag(v___x_4996_) == 0)
{
lean_object* v___x_4997_; uint8_t v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; lean_object* v___x_5001_; lean_object* v___x_5002_; lean_object* v___x_5003_; 
v___x_4997_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__1, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__1);
v___x_4998_ = 0;
v___x_4999_ = l_Lean_MessageData_ofConstName(v_constName_4990_, v___x_4998_);
v___x_5000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5000_, 0, v___x_4997_);
lean_ctor_set(v___x_5000_, 1, v___x_4999_);
v___x_5001_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__3, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__3_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__3);
v___x_5002_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5002_, 0, v___x_5000_);
lean_ctor_set(v___x_5002_, 1, v___x_5001_);
v___x_5003_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2___redArg(v___x_5002_, v___y_4991_, v___y_4992_);
return v___x_5003_;
}
else
{
lean_object* v_val_5004_; lean_object* v___x_5006_; uint8_t v_isShared_5007_; uint8_t v_isSharedCheck_5011_; 
lean_dec(v_constName_4990_);
v_val_5004_ = lean_ctor_get(v___x_4996_, 0);
v_isSharedCheck_5011_ = !lean_is_exclusive(v___x_4996_);
if (v_isSharedCheck_5011_ == 0)
{
v___x_5006_ = v___x_4996_;
v_isShared_5007_ = v_isSharedCheck_5011_;
goto v_resetjp_5005_;
}
else
{
lean_inc(v_val_5004_);
lean_dec(v___x_4996_);
v___x_5006_ = lean_box(0);
v_isShared_5007_ = v_isSharedCheck_5011_;
goto v_resetjp_5005_;
}
v_resetjp_5005_:
{
lean_object* v___x_5009_; 
if (v_isShared_5007_ == 0)
{
lean_ctor_set_tag(v___x_5006_, 0);
v___x_5009_ = v___x_5006_;
goto v_reusejp_5008_;
}
else
{
lean_object* v_reuseFailAlloc_5010_; 
v_reuseFailAlloc_5010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5010_, 0, v_val_5004_);
v___x_5009_ = v_reuseFailAlloc_5010_;
goto v_reusejp_5008_;
}
v_reusejp_5008_:
{
return v___x_5009_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__0___boxed(lean_object* v_constName_5012_, lean_object* v___y_5013_, lean_object* v___y_5014_, lean_object* v___y_5015_){
_start:
{
lean_object* v_res_5016_; 
v_res_5016_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__0(v_constName_5012_, v___y_5013_, v___y_5014_);
lean_dec(v___y_5014_);
lean_dec_ref(v___y_5013_);
return v_res_5016_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1___closed__1(void){
_start:
{
lean_object* v___x_5018_; lean_object* v___x_5019_; 
v___x_5018_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1___closed__0));
v___x_5019_ = l_Lean_stringToMessageData(v___x_5018_);
return v___x_5019_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1(lean_object* v_declName_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_){
_start:
{
lean_object* v___x_5027_; 
lean_inc(v_declName_5020_);
v___x_5027_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__0(v_declName_5020_, v___y_5021_, v___y_5022_);
if (lean_obj_tag(v___x_5027_) == 0)
{
lean_object* v_a_5028_; uint8_t v___x_5029_; lean_object* v___x_5030_; 
v_a_5028_ = lean_ctor_get(v___x_5027_, 0);
lean_inc(v_a_5028_);
lean_dec_ref_known(v___x_5027_, 1);
v___x_5029_ = 0;
lean_inc(v_declName_5020_);
v___x_5030_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__0(v_a_5028_, v_declName_5020_, v___x_5029_, v___y_5021_, v___y_5022_);
if (lean_obj_tag(v___x_5030_) == 0)
{
lean_object* v_a_5031_; uint8_t v___x_5032_; 
v_a_5031_ = lean_ctor_get(v___x_5030_, 0);
lean_inc(v_a_5031_);
lean_dec_ref_known(v___x_5030_, 1);
v___x_5032_ = lean_unbox(v_a_5031_);
lean_dec(v_a_5031_);
if (v___x_5032_ == 0)
{
uint8_t v___x_5033_; lean_object* v___x_5034_; 
v___x_5033_ = 1;
lean_inc(v_declName_5020_);
v___x_5034_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__0(v_a_5028_, v_declName_5020_, v___x_5033_, v___y_5021_, v___y_5022_);
lean_dec(v_a_5028_);
if (lean_obj_tag(v___x_5034_) == 0)
{
lean_object* v_a_5035_; uint8_t v___x_5036_; 
v_a_5035_ = lean_ctor_get(v___x_5034_, 0);
lean_inc(v_a_5035_);
lean_dec_ref_known(v___x_5034_, 1);
v___x_5036_ = lean_unbox(v_a_5035_);
lean_dec(v_a_5035_);
if (v___x_5036_ == 0)
{
lean_object* v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; 
v___x_5037_ = lean_obj_once(&l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1___closed__1, &l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1___closed__1_once, _init_l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1___closed__1);
v___x_5038_ = l_Lean_MessageData_ofConstName(v_declName_5020_, v___x_5029_);
v___x_5039_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5039_, 0, v___x_5037_);
lean_ctor_set(v___x_5039_, 1, v___x_5038_);
v___x_5040_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__1, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_mkInstanceCmdWith_spec__1___closed__1);
v___x_5041_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5041_, 0, v___x_5039_);
lean_ctor_set(v___x_5041_, 1, v___x_5040_);
v___x_5042_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2___redArg(v___x_5041_, v___y_5021_, v___y_5022_);
return v___x_5042_;
}
else
{
lean_dec(v_declName_5020_);
goto v___jp_5024_;
}
}
else
{
lean_object* v_a_5043_; lean_object* v___x_5045_; uint8_t v_isShared_5046_; uint8_t v_isSharedCheck_5050_; 
lean_dec(v_declName_5020_);
v_a_5043_ = lean_ctor_get(v___x_5034_, 0);
v_isSharedCheck_5050_ = !lean_is_exclusive(v___x_5034_);
if (v_isSharedCheck_5050_ == 0)
{
v___x_5045_ = v___x_5034_;
v_isShared_5046_ = v_isSharedCheck_5050_;
goto v_resetjp_5044_;
}
else
{
lean_inc(v_a_5043_);
lean_dec(v___x_5034_);
v___x_5045_ = lean_box(0);
v_isShared_5046_ = v_isSharedCheck_5050_;
goto v_resetjp_5044_;
}
v_resetjp_5044_:
{
lean_object* v___x_5048_; 
if (v_isShared_5046_ == 0)
{
v___x_5048_ = v___x_5045_;
goto v_reusejp_5047_;
}
else
{
lean_object* v_reuseFailAlloc_5049_; 
v_reuseFailAlloc_5049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5049_, 0, v_a_5043_);
v___x_5048_ = v_reuseFailAlloc_5049_;
goto v_reusejp_5047_;
}
v_reusejp_5047_:
{
return v___x_5048_;
}
}
}
}
else
{
lean_dec(v_a_5028_);
lean_dec(v_declName_5020_);
goto v___jp_5024_;
}
}
else
{
lean_object* v_a_5051_; lean_object* v___x_5053_; uint8_t v_isShared_5054_; uint8_t v_isSharedCheck_5058_; 
lean_dec(v_a_5028_);
lean_dec(v_declName_5020_);
v_a_5051_ = lean_ctor_get(v___x_5030_, 0);
v_isSharedCheck_5058_ = !lean_is_exclusive(v___x_5030_);
if (v_isSharedCheck_5058_ == 0)
{
v___x_5053_ = v___x_5030_;
v_isShared_5054_ = v_isSharedCheck_5058_;
goto v_resetjp_5052_;
}
else
{
lean_inc(v_a_5051_);
lean_dec(v___x_5030_);
v___x_5053_ = lean_box(0);
v_isShared_5054_ = v_isSharedCheck_5058_;
goto v_resetjp_5052_;
}
v_resetjp_5052_:
{
lean_object* v___x_5056_; 
if (v_isShared_5054_ == 0)
{
v___x_5056_ = v___x_5053_;
goto v_reusejp_5055_;
}
else
{
lean_object* v_reuseFailAlloc_5057_; 
v_reuseFailAlloc_5057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5057_, 0, v_a_5051_);
v___x_5056_ = v_reuseFailAlloc_5057_;
goto v_reusejp_5055_;
}
v_reusejp_5055_:
{
return v___x_5056_;
}
}
}
}
else
{
lean_object* v_a_5059_; lean_object* v___x_5061_; uint8_t v_isShared_5062_; uint8_t v_isSharedCheck_5066_; 
lean_dec(v_declName_5020_);
v_a_5059_ = lean_ctor_get(v___x_5027_, 0);
v_isSharedCheck_5066_ = !lean_is_exclusive(v___x_5027_);
if (v_isSharedCheck_5066_ == 0)
{
v___x_5061_ = v___x_5027_;
v_isShared_5062_ = v_isSharedCheck_5066_;
goto v_resetjp_5060_;
}
else
{
lean_inc(v_a_5059_);
lean_dec(v___x_5027_);
v___x_5061_ = lean_box(0);
v_isShared_5062_ = v_isSharedCheck_5066_;
goto v_resetjp_5060_;
}
v_resetjp_5060_:
{
lean_object* v___x_5064_; 
if (v_isShared_5062_ == 0)
{
v___x_5064_ = v___x_5061_;
goto v_reusejp_5063_;
}
else
{
lean_object* v_reuseFailAlloc_5065_; 
v_reuseFailAlloc_5065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5065_, 0, v_a_5059_);
v___x_5064_ = v_reuseFailAlloc_5065_;
goto v_reusejp_5063_;
}
v_reusejp_5063_:
{
return v___x_5064_;
}
}
}
v___jp_5024_:
{
lean_object* v___x_5025_; lean_object* v___x_5026_; 
v___x_5025_ = lean_box(0);
v___x_5026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5026_, 0, v___x_5025_);
return v___x_5026_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1___boxed(lean_object* v_declName_5067_, lean_object* v___y_5068_, lean_object* v___y_5069_, lean_object* v___y_5070_){
_start:
{
lean_object* v_res_5071_; 
v_res_5071_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1(v_declName_5067_, v___y_5068_, v___y_5069_);
lean_dec(v___y_5069_);
lean_dec_ref(v___y_5068_);
return v_res_5071_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance(lean_object* v_declName_5072_, lean_object* v___y_5073_, lean_object* v___y_5074_){
_start:
{
lean_object* v___f_5076_; lean_object* v___x_5077_; 
lean_inc(v_declName_5072_);
v___f_5076_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___lam__1___boxed), 4, 1);
lean_closure_set(v___f_5076_, 0, v_declName_5072_);
v___x_5077_ = l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(v_declName_5072_, v___f_5076_, v___y_5073_, v___y_5074_);
return v___x_5077_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance___boxed(lean_object* v_declName_5078_, lean_object* v___y_5079_, lean_object* v___y_5080_, lean_object* v___y_5081_){
_start:
{
lean_object* v_res_5082_; 
v_res_5082_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance(v_declName_5078_, v___y_5079_, v___y_5080_);
lean_dec(v___y_5080_);
lean_dec_ref(v___y_5079_);
return v_res_5082_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1(lean_object* v_declName_5083_, uint8_t v_addHypotheses_5084_, lean_object* v_as_5085_, lean_object* v_as_x27_5086_, lean_object* v_b_5087_, lean_object* v_a_5088_, lean_object* v___y_5089_, lean_object* v___y_5090_){
_start:
{
lean_object* v___x_5092_; 
v___x_5092_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1___redArg(v_declName_5083_, v_addHypotheses_5084_, v_as_x27_5086_, v_b_5087_, v___y_5089_, v___y_5090_);
return v___x_5092_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1___boxed(lean_object* v_declName_5093_, lean_object* v_addHypotheses_5094_, lean_object* v_as_5095_, lean_object* v_as_x27_5096_, lean_object* v_b_5097_, lean_object* v_a_5098_, lean_object* v___y_5099_, lean_object* v___y_5100_, lean_object* v___y_5101_){
_start:
{
uint8_t v_addHypotheses_boxed_5102_; lean_object* v_res_5103_; 
v_addHypotheses_boxed_5102_ = lean_unbox(v_addHypotheses_5094_);
v_res_5103_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__1(v_declName_5093_, v_addHypotheses_boxed_5102_, v_as_5095_, v_as_x27_5096_, v_b_5097_, v_a_5098_, v___y_5099_, v___y_5100_);
lean_dec(v___y_5100_);
lean_dec_ref(v___y_5099_);
lean_dec(v_as_x27_5096_);
lean_dec(v_as_5095_);
return v_res_5103_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2(lean_object* v_msgData_5104_, lean_object* v___y_5105_, lean_object* v___y_5106_){
_start:
{
lean_object* v___x_5108_; 
v___x_5108_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___redArg(v_msgData_5104_, v___y_5106_);
return v___x_5108_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2___boxed(lean_object* v_msgData_5109_, lean_object* v___y_5110_, lean_object* v___y_5111_, lean_object* v___y_5112_){
_start:
{
lean_object* v_res_5113_; 
v_res_5113_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__2(v_msgData_5109_, v___y_5110_, v___y_5111_);
lean_dec(v___y_5111_);
lean_dec_ref(v___y_5110_);
return v_res_5113_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2(lean_object* v_00_u03b1_5114_, lean_object* v_msg_5115_, lean_object* v___y_5116_, lean_object* v___y_5117_){
_start:
{
lean_object* v___x_5119_; 
v___x_5119_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2___redArg(v_msg_5115_, v___y_5116_, v___y_5117_);
return v___x_5119_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2___boxed(lean_object* v_00_u03b1_5120_, lean_object* v_msg_5121_, lean_object* v___y_5122_, lean_object* v___y_5123_, lean_object* v___y_5124_){
_start:
{
lean_object* v_res_5125_; 
v_res_5125_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2(v_00_u03b1_5120_, v_msg_5121_, v___y_5122_, v___y_5123_);
lean_dec(v___y_5123_);
lean_dec_ref(v___y_5122_);
return v_res_5125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__3(lean_object* v_msgData_5126_, lean_object* v_macroStack_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_){
_start:
{
lean_object* v___x_5131_; 
v___x_5131_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__3___redArg(v_msgData_5126_, v_macroStack_5127_, v___y_5129_);
return v___x_5131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__3___boxed(lean_object* v_msgData_5132_, lean_object* v_macroStack_5133_, lean_object* v___y_5134_, lean_object* v___y_5135_, lean_object* v___y_5136_){
_start:
{
lean_object* v_res_5137_; 
v_res_5137_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance_spec__2_spec__3(v_msgData_5132_, v_macroStack_5133_, v___y_5134_, v___y_5135_);
lean_dec(v___y_5135_);
lean_dec_ref(v___y_5134_);
return v_res_5137_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__0___redArg(lean_object* v_declName_5138_, lean_object* v___y_5139_){
_start:
{
lean_object* v___x_5141_; lean_object* v_env_5142_; uint8_t v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; 
v___x_5141_ = lean_st_ref_get(v___y_5139_);
v_env_5142_ = lean_ctor_get(v___x_5141_, 0);
lean_inc_ref(v_env_5142_);
lean_dec(v___x_5141_);
v___x_5143_ = l_Lean_isInductiveCore(v_env_5142_, v_declName_5138_);
v___x_5144_ = lean_box(v___x_5143_);
v___x_5145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5145_, 0, v___x_5144_);
return v___x_5145_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__0___redArg___boxed(lean_object* v_declName_5146_, lean_object* v___y_5147_, lean_object* v___y_5148_){
_start:
{
lean_object* v_res_5149_; 
v_res_5149_ = l_Lean_isInductive___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__0___redArg(v_declName_5146_, v___y_5147_);
lean_dec(v___y_5147_);
return v_res_5149_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__0(lean_object* v_declName_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_){
_start:
{
lean_object* v___x_5154_; 
v___x_5154_ = l_Lean_isInductive___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__0___redArg(v_declName_5150_, v___y_5152_);
return v___x_5154_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__0___boxed(lean_object* v_declName_5155_, lean_object* v___y_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_){
_start:
{
lean_object* v_res_5159_; 
v_res_5159_ = l_Lean_isInductive___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__0(v_declName_5155_, v___y_5156_, v___y_5157_);
lean_dec(v___y_5157_);
lean_dec_ref(v___y_5156_);
return v_res_5159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInhabitedInstanceHandler___lam__0(uint8_t v_____do__lift_5160_, lean_object* v___y_5161_, lean_object* v___y_5162_){
_start:
{
if (v_____do__lift_5160_ == 0)
{
uint8_t v___x_5164_; lean_object* v___x_5165_; lean_object* v___x_5166_; 
v___x_5164_ = 1;
v___x_5165_ = lean_box(v___x_5164_);
v___x_5166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5166_, 0, v___x_5165_);
return v___x_5166_;
}
else
{
uint8_t v___x_5167_; lean_object* v___x_5168_; lean_object* v___x_5169_; 
v___x_5167_ = 0;
v___x_5168_ = lean_box(v___x_5167_);
v___x_5169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5169_, 0, v___x_5168_);
return v___x_5169_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInhabitedInstanceHandler___lam__0___boxed(lean_object* v_____do__lift_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_, lean_object* v___y_5173_){
_start:
{
uint8_t v_____do__lift_2096__boxed_5174_; lean_object* v_res_5175_; 
v_____do__lift_2096__boxed_5174_ = lean_unbox(v_____do__lift_5170_);
v_res_5175_ = l_Lean_Elab_Deriving_mkInhabitedInstanceHandler___lam__0(v_____do__lift_2096__boxed_5174_, v___y_5171_, v___y_5172_);
lean_dec(v___y_5172_);
lean_dec_ref(v___y_5171_);
return v_res_5175_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__2(lean_object* v_as_5176_, size_t v_i_5177_, size_t v_stop_5178_, lean_object* v___y_5179_, lean_object* v___y_5180_){
_start:
{
uint8_t v___x_5186_; 
v___x_5186_ = lean_usize_dec_eq(v_i_5177_, v_stop_5178_);
if (v___x_5186_ == 0)
{
uint8_t v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; 
v___x_5187_ = 1;
v___x_5188_ = lean_array_uget_borrowed(v_as_5176_, v_i_5177_);
lean_inc(v___x_5188_);
v___x_5189_ = l_Lean_isInductive___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__0___redArg(v___x_5188_, v___y_5180_);
if (lean_obj_tag(v___x_5189_) == 0)
{
lean_object* v_a_5190_; lean_object* v___x_5192_; uint8_t v_isShared_5193_; uint8_t v_isSharedCheck_5199_; 
v_a_5190_ = lean_ctor_get(v___x_5189_, 0);
v_isSharedCheck_5199_ = !lean_is_exclusive(v___x_5189_);
if (v_isSharedCheck_5199_ == 0)
{
v___x_5192_ = v___x_5189_;
v_isShared_5193_ = v_isSharedCheck_5199_;
goto v_resetjp_5191_;
}
else
{
lean_inc(v_a_5190_);
lean_dec(v___x_5189_);
v___x_5192_ = lean_box(0);
v_isShared_5193_ = v_isSharedCheck_5199_;
goto v_resetjp_5191_;
}
v_resetjp_5191_:
{
uint8_t v___x_5194_; 
v___x_5194_ = lean_unbox(v_a_5190_);
lean_dec(v_a_5190_);
if (v___x_5194_ == 0)
{
lean_object* v___x_5195_; lean_object* v___x_5197_; 
v___x_5195_ = lean_box(v___x_5187_);
if (v_isShared_5193_ == 0)
{
lean_ctor_set(v___x_5192_, 0, v___x_5195_);
v___x_5197_ = v___x_5192_;
goto v_reusejp_5196_;
}
else
{
lean_object* v_reuseFailAlloc_5198_; 
v_reuseFailAlloc_5198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5198_, 0, v___x_5195_);
v___x_5197_ = v_reuseFailAlloc_5198_;
goto v_reusejp_5196_;
}
v_reusejp_5196_:
{
return v___x_5197_;
}
}
else
{
lean_del_object(v___x_5192_);
goto v___jp_5182_;
}
}
}
else
{
if (lean_obj_tag(v___x_5189_) == 0)
{
lean_object* v_a_5200_; lean_object* v___x_5202_; uint8_t v_isShared_5203_; uint8_t v_isSharedCheck_5209_; 
v_a_5200_ = lean_ctor_get(v___x_5189_, 0);
v_isSharedCheck_5209_ = !lean_is_exclusive(v___x_5189_);
if (v_isSharedCheck_5209_ == 0)
{
v___x_5202_ = v___x_5189_;
v_isShared_5203_ = v_isSharedCheck_5209_;
goto v_resetjp_5201_;
}
else
{
lean_inc(v_a_5200_);
lean_dec(v___x_5189_);
v___x_5202_ = lean_box(0);
v_isShared_5203_ = v_isSharedCheck_5209_;
goto v_resetjp_5201_;
}
v_resetjp_5201_:
{
uint8_t v___x_5204_; 
v___x_5204_ = lean_unbox(v_a_5200_);
lean_dec(v_a_5200_);
if (v___x_5204_ == 0)
{
lean_del_object(v___x_5202_);
goto v___jp_5182_;
}
else
{
lean_object* v___x_5205_; lean_object* v___x_5207_; 
v___x_5205_ = lean_box(v___x_5187_);
if (v_isShared_5203_ == 0)
{
lean_ctor_set_tag(v___x_5202_, 0);
lean_ctor_set(v___x_5202_, 0, v___x_5205_);
v___x_5207_ = v___x_5202_;
goto v_reusejp_5206_;
}
else
{
lean_object* v_reuseFailAlloc_5208_; 
v_reuseFailAlloc_5208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5208_, 0, v___x_5205_);
v___x_5207_ = v_reuseFailAlloc_5208_;
goto v_reusejp_5206_;
}
v_reusejp_5206_:
{
return v___x_5207_;
}
}
}
}
else
{
return v___x_5189_;
}
}
}
else
{
uint8_t v___x_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; 
v___x_5210_ = 0;
v___x_5211_ = lean_box(v___x_5210_);
v___x_5212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5212_, 0, v___x_5211_);
return v___x_5212_;
}
v___jp_5182_:
{
size_t v___x_5183_; size_t v___x_5184_; 
v___x_5183_ = ((size_t)1ULL);
v___x_5184_ = lean_usize_add(v_i_5177_, v___x_5183_);
v_i_5177_ = v___x_5184_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__2___boxed(lean_object* v_as_5213_, lean_object* v_i_5214_, lean_object* v_stop_5215_, lean_object* v___y_5216_, lean_object* v___y_5217_, lean_object* v___y_5218_){
_start:
{
size_t v_i_boxed_5219_; size_t v_stop_boxed_5220_; lean_object* v_res_5221_; 
v_i_boxed_5219_ = lean_unbox_usize(v_i_5214_);
lean_dec(v_i_5214_);
v_stop_boxed_5220_ = lean_unbox_usize(v_stop_5215_);
lean_dec(v_stop_5215_);
v_res_5221_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__2(v_as_5213_, v_i_boxed_5219_, v_stop_boxed_5220_, v___y_5216_, v___y_5217_);
lean_dec(v___y_5217_);
lean_dec_ref(v___y_5216_);
lean_dec_ref(v_as_5213_);
return v_res_5221_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__1(lean_object* v_as_5222_, size_t v_i_5223_, size_t v_stop_5224_, lean_object* v_b_5225_, lean_object* v___y_5226_, lean_object* v___y_5227_){
_start:
{
uint8_t v___x_5229_; 
v___x_5229_ = lean_usize_dec_eq(v_i_5223_, v_stop_5224_);
if (v___x_5229_ == 0)
{
lean_object* v___x_5230_; lean_object* v___x_5231_; 
v___x_5230_ = lean_array_uget_borrowed(v_as_5222_, v_i_5223_);
lean_inc(v___x_5230_);
v___x_5231_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstance(v___x_5230_, v___y_5226_, v___y_5227_);
if (lean_obj_tag(v___x_5231_) == 0)
{
lean_object* v_a_5232_; size_t v___x_5233_; size_t v___x_5234_; 
v_a_5232_ = lean_ctor_get(v___x_5231_, 0);
lean_inc(v_a_5232_);
lean_dec_ref_known(v___x_5231_, 1);
v___x_5233_ = ((size_t)1ULL);
v___x_5234_ = lean_usize_add(v_i_5223_, v___x_5233_);
v_i_5223_ = v___x_5234_;
v_b_5225_ = v_a_5232_;
goto _start;
}
else
{
return v___x_5231_;
}
}
else
{
lean_object* v___x_5236_; 
v___x_5236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5236_, 0, v_b_5225_);
return v___x_5236_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__1___boxed(lean_object* v_as_5237_, lean_object* v_i_5238_, lean_object* v_stop_5239_, lean_object* v_b_5240_, lean_object* v___y_5241_, lean_object* v___y_5242_, lean_object* v___y_5243_){
_start:
{
size_t v_i_boxed_5244_; size_t v_stop_boxed_5245_; lean_object* v_res_5246_; 
v_i_boxed_5244_ = lean_unbox_usize(v_i_5238_);
lean_dec(v_i_5238_);
v_stop_boxed_5245_ = lean_unbox_usize(v_stop_5239_);
lean_dec(v_stop_5239_);
v_res_5246_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__1(v_as_5237_, v_i_boxed_5244_, v_stop_boxed_5245_, v_b_5240_, v___y_5241_, v___y_5242_);
lean_dec(v___y_5242_);
lean_dec_ref(v___y_5241_);
lean_dec_ref(v_as_5237_);
return v_res_5246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInhabitedInstanceHandler(lean_object* v_declNames_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_){
_start:
{
uint8_t v___y_5252_; lean_object* v___y_5253_; lean_object* v___x_5271_; lean_object* v___x_5272_; lean_object* v___y_5289_; uint8_t v___x_5292_; 
v___x_5271_ = lean_unsigned_to_nat(0u);
v___x_5272_ = lean_array_get_size(v_declNames_5247_);
v___x_5292_ = lean_nat_dec_lt(v___x_5271_, v___x_5272_);
if (v___x_5292_ == 0)
{
lean_object* v___x_5293_; 
v___x_5293_ = l_Lean_Elab_Deriving_mkInhabitedInstanceHandler___lam__0(v___x_5292_, v___y_5248_, v___y_5249_);
v___y_5289_ = v___x_5293_;
goto v___jp_5288_;
}
else
{
if (v___x_5292_ == 0)
{
goto v___jp_5273_;
}
else
{
size_t v___x_5294_; size_t v___x_5295_; lean_object* v___x_5296_; 
v___x_5294_ = ((size_t)0ULL);
v___x_5295_ = lean_usize_of_nat(v___x_5272_);
v___x_5296_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__2(v_declNames_5247_, v___x_5294_, v___x_5295_, v___y_5248_, v___y_5249_);
if (lean_obj_tag(v___x_5296_) == 0)
{
lean_object* v_a_5297_; uint8_t v___x_5298_; lean_object* v___x_5299_; 
v_a_5297_ = lean_ctor_get(v___x_5296_, 0);
lean_inc(v_a_5297_);
lean_dec_ref_known(v___x_5296_, 1);
v___x_5298_ = lean_unbox(v_a_5297_);
lean_dec(v_a_5297_);
v___x_5299_ = l_Lean_Elab_Deriving_mkInhabitedInstanceHandler___lam__0(v___x_5298_, v___y_5248_, v___y_5249_);
v___y_5289_ = v___x_5299_;
goto v___jp_5288_;
}
else
{
v___y_5289_ = v___x_5296_;
goto v___jp_5288_;
}
}
}
v___jp_5251_:
{
if (lean_obj_tag(v___y_5253_) == 0)
{
lean_object* v___x_5255_; uint8_t v_isShared_5256_; uint8_t v_isSharedCheck_5261_; 
v_isSharedCheck_5261_ = !lean_is_exclusive(v___y_5253_);
if (v_isSharedCheck_5261_ == 0)
{
lean_object* v_unused_5262_; 
v_unused_5262_ = lean_ctor_get(v___y_5253_, 0);
lean_dec(v_unused_5262_);
v___x_5255_ = v___y_5253_;
v_isShared_5256_ = v_isSharedCheck_5261_;
goto v_resetjp_5254_;
}
else
{
lean_dec(v___y_5253_);
v___x_5255_ = lean_box(0);
v_isShared_5256_ = v_isSharedCheck_5261_;
goto v_resetjp_5254_;
}
v_resetjp_5254_:
{
lean_object* v___x_5257_; lean_object* v___x_5259_; 
v___x_5257_ = lean_box(v___y_5252_);
if (v_isShared_5256_ == 0)
{
lean_ctor_set(v___x_5255_, 0, v___x_5257_);
v___x_5259_ = v___x_5255_;
goto v_reusejp_5258_;
}
else
{
lean_object* v_reuseFailAlloc_5260_; 
v_reuseFailAlloc_5260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5260_, 0, v___x_5257_);
v___x_5259_ = v_reuseFailAlloc_5260_;
goto v_reusejp_5258_;
}
v_reusejp_5258_:
{
return v___x_5259_;
}
}
}
else
{
lean_object* v_a_5263_; lean_object* v___x_5265_; uint8_t v_isShared_5266_; uint8_t v_isSharedCheck_5270_; 
v_a_5263_ = lean_ctor_get(v___y_5253_, 0);
v_isSharedCheck_5270_ = !lean_is_exclusive(v___y_5253_);
if (v_isSharedCheck_5270_ == 0)
{
v___x_5265_ = v___y_5253_;
v_isShared_5266_ = v_isSharedCheck_5270_;
goto v_resetjp_5264_;
}
else
{
lean_inc(v_a_5263_);
lean_dec(v___y_5253_);
v___x_5265_ = lean_box(0);
v_isShared_5266_ = v_isSharedCheck_5270_;
goto v_resetjp_5264_;
}
v_resetjp_5264_:
{
lean_object* v___x_5268_; 
if (v_isShared_5266_ == 0)
{
v___x_5268_ = v___x_5265_;
goto v_reusejp_5267_;
}
else
{
lean_object* v_reuseFailAlloc_5269_; 
v_reuseFailAlloc_5269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5269_, 0, v_a_5263_);
v___x_5268_ = v_reuseFailAlloc_5269_;
goto v_reusejp_5267_;
}
v_reusejp_5267_:
{
return v___x_5268_;
}
}
}
}
v___jp_5273_:
{
uint8_t v___x_5274_; uint8_t v___x_5275_; 
v___x_5274_ = 1;
v___x_5275_ = lean_nat_dec_lt(v___x_5271_, v___x_5272_);
if (v___x_5275_ == 0)
{
lean_object* v___x_5276_; lean_object* v___x_5277_; 
v___x_5276_ = lean_box(v___x_5274_);
v___x_5277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5277_, 0, v___x_5276_);
return v___x_5277_;
}
else
{
lean_object* v___x_5278_; uint8_t v___x_5279_; 
v___x_5278_ = lean_box(0);
v___x_5279_ = lean_nat_dec_le(v___x_5272_, v___x_5272_);
if (v___x_5279_ == 0)
{
if (v___x_5275_ == 0)
{
lean_object* v___x_5280_; lean_object* v___x_5281_; 
v___x_5280_ = lean_box(v___x_5274_);
v___x_5281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5281_, 0, v___x_5280_);
return v___x_5281_;
}
else
{
size_t v___x_5282_; size_t v___x_5283_; lean_object* v___x_5284_; 
v___x_5282_ = ((size_t)0ULL);
v___x_5283_ = lean_usize_of_nat(v___x_5272_);
v___x_5284_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__1(v_declNames_5247_, v___x_5282_, v___x_5283_, v___x_5278_, v___y_5248_, v___y_5249_);
v___y_5252_ = v___x_5274_;
v___y_5253_ = v___x_5284_;
goto v___jp_5251_;
}
}
else
{
size_t v___x_5285_; size_t v___x_5286_; lean_object* v___x_5287_; 
v___x_5285_ = ((size_t)0ULL);
v___x_5286_ = lean_usize_of_nat(v___x_5272_);
v___x_5287_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_mkInhabitedInstanceHandler_spec__1(v_declNames_5247_, v___x_5285_, v___x_5286_, v___x_5278_, v___y_5248_, v___y_5249_);
v___y_5252_ = v___x_5274_;
v___y_5253_ = v___x_5287_;
goto v___jp_5251_;
}
}
}
v___jp_5288_:
{
if (lean_obj_tag(v___y_5289_) == 0)
{
lean_object* v_a_5290_; uint8_t v___x_5291_; 
v_a_5290_ = lean_ctor_get(v___y_5289_, 0);
v___x_5291_ = lean_unbox(v_a_5290_);
if (v___x_5291_ == 0)
{
return v___y_5289_;
}
else
{
lean_dec_ref_known(v___y_5289_, 1);
goto v___jp_5273_;
}
}
else
{
return v___y_5289_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInhabitedInstanceHandler___boxed(lean_object* v_declNames_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_, lean_object* v___y_5303_){
_start:
{
lean_object* v_res_5304_; 
v_res_5304_ = l_Lean_Elab_Deriving_mkInhabitedInstanceHandler(v_declNames_5300_, v___y_5301_, v___y_5302_);
lean_dec(v___y_5302_);
lean_dec_ref(v___y_5301_);
lean_dec_ref(v_declNames_5300_);
return v_res_5304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; 
v___x_5369_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___closed__1));
v___x_5370_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__0_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_));
v___x_5371_ = l_Lean_Elab_registerDerivingHandler(v___x_5369_, v___x_5370_);
if (lean_obj_tag(v___x_5371_) == 0)
{
lean_object* v___x_5372_; uint8_t v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; 
lean_dec_ref_known(v___x_5371_, 1);
v___x_5372_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_mkInhabitedInstanceUsing_addLocalInstancesForParamsAux___redArg___lam__0___closed__3));
v___x_5373_ = 0;
v___x_5374_ = ((lean_object*)(l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn___closed__24_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_));
v___x_5375_ = l_Lean_registerTraceClass(v___x_5372_, v___x_5373_, v___x_5374_);
return v___x_5375_;
}
else
{
return v___x_5371_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2____boxed(lean_object* v___y_5376_){
_start:
{
lean_object* v_res_5377_; 
v_res_5377_ = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_();
return v_res_5377_;
}
}
lean_object* runtime_initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Deriving_Util(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Deriving_Inhabited(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Deriving_Inhabited_0__Lean_Elab_Deriving_initFn_00___x40_Lean_Elab_Deriving_Inhabited_1810264634____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Deriving_Inhabited(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Deriving_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Deriving_Inhabited(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_Inhabited(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Deriving_Inhabited(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Deriving_Inhabited(builtin);
}
#ifdef __cplusplus
}
#endif
