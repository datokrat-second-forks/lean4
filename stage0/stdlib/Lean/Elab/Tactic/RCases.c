// Lean compiler output
// Module: Lean.Elab.Tactic.RCases
// Imports: public import Lean.Elab.Tactic.ElabTerm import Lean.Elab.Tactic.Induction import Lean.Meta.Tactic.Replace import Init.Omega import Lean.Elab.Binders import Lean.Meta.Tactic.Generalize
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
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Syntax_instRepr_repr(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg(lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkTargetView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureHasType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_exprToSyntax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_MVarId_generalize(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_tryClearMany(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_FVarSubst_apply(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addTermInfo_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_append(lean_object*, lean_object*);
lean_object* l_List_zipWith___at___00List_zip_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_getFVarsToGeneralize(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getElimInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_ElimApp_mkElimApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_ElimApp_setMotiveArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_intro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_substEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceLocalDeclDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_paren(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_bracket(lean_object*, lean_object*, lean_object*);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__0_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__0_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__0_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__1_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "unusedRCasesPattern"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__1_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__1_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__2_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__0_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__2_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__2_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__1_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(241, 110, 176, 132, 250, 17, 111, 167)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__2_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__2_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__3_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "enable the 'unused rcases pattern' linter"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__3_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__3_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__4_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__3_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__4_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__4_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__6_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__6_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__6_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__8_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "RCases"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__8_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__8_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__9_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__9_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__9_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__6_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__9_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__9_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__9_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__9_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__8_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(110, 201, 5, 192, 82, 140, 48, 247)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__9_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__9_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__0_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(147, 223, 250, 211, 237, 138, 169, 175)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__9_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__9_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__1_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(20, 239, 52, 188, 35, 247, 154, 203)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__9_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__9_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_linter_unusedRCasesPattern;
static lean_once_cell_t l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0;
static const lean_string_object l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rcasesPat"};
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "one"};
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 181, 165, 225, 136, 177, 169, 19)}};
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__4_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(186, 152, 172, 228, 11, 240, 156, 168)}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "rcasesPatMed"};
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 13, 65, 195, 228, 27, 47, 149)}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "rcasesPatLo"};
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(133, 222, 245, 138, 122, 92, 170, 214)}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rintroPat"};
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 93, 179, 129, 121, 199, 215, 253)}};
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 214, 202, 122, 59, 249, 35, 61)}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_paren_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_paren_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_one_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_one_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_clear_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_clear_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_explicit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_explicit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_typed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_typed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_tuple_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_tuple_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_alts_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_alts_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Elab.Tactic.RCases.RCasesPatt.paren"};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__0_value)}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4;
static const lean_string_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lean.Elab.Tactic.RCases.RCasesPatt.one"};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Elab.Tactic.RCases.RCasesPatt.clear"};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__8_value)}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Elab.Tactic.RCases.RCasesPatt.explicit"};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__11_value)}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__13_value;
static const lean_string_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Elab.Tactic.RCases.RCasesPatt.typed"};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__14_value)}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__16_value;
static const lean_string_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Elab.Tactic.RCases.RCasesPatt.tuple"};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__17_value)}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__18_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__19_value;
static const lean_string_object l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__1_value;
static const lean_string_object l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__3 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__3_value;
static const lean_ctor_object l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__3_value)}};
static const lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__4 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__4_value;
static const lean_ctor_object l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__5 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__7;
static lean_once_cell_t l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__8;
static const lean_ctor_object l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__9 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__9_value;
static const lean_string_object l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__6 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__6_value;
static const lean_ctor_object l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__6_value)}};
static const lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__10 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Elab.Tactic.RCases.RCasesPatt.alts"};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__20_value)}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__21_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__22_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_RCases_instReprRCasesPatt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt = (const lean_object*)&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__0_value),LEAN_SCALAR_PTR_LITERAL(168, 60, 211, 188, 58, 220, 100, 184)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__2_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_name_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_name_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_name_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_name_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_name_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_ref(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_ref___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_asTuple(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_asAlts(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_typed_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_typed_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_tuple_x27(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_alts_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_tuple_u2081Core(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_tuple_u2081(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_alts_u2081Core(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_alts_u2081(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_parenAbove(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_parenAbove___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__2;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__4;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__6;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__9;
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__8;
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__10;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__11_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt_spec__1(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " | "};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__12_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__13_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Tactic `rcases` failed: `"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "` is not a free variable"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12___closed__0 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12___closed__0_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12___closed__0_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12___closed__1_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12___closed__2;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__11___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "` is not an inductive datatype"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__10_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__11___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__4___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__0;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Elab.Tactic.RCases"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "_private.Lean.Elab.Tactic.RCases.0.Lean.Elab.Tactic.RCases.rcasesCore"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__0;
static const lean_array_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Quot"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ind"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__3_value),LEAN_SCALAR_PTR_LITERAL(150, 213, 121, 152, 109, 27, 137, 60)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__6___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__6___boxed(lean_object**);
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Tactic `rcases` failed: scrutinee"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__11(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__10_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___lam__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___boxed__const__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ignore"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 181, 165, 225, 136, 177, 169, 19)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(163, 25, 234, 135, 235, 67, 128, 26)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "clear"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 181, 165, 225, 136, 177, 169, 19)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__2_value),LEAN_SCALAR_PTR_LITERAL(106, 140, 213, 205, 205, 202, 106, 99)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "explicit"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 181, 165, 225, 136, 177, 169, 19)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__5_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__4_value),LEAN_SCALAR_PTR_LITERAL(176, 12, 240, 143, 52, 56, 179, 56)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__7_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 181, 165, 225, 136, 177, 169, 19)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__7_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__6_value),LEAN_SCALAR_PTR_LITERAL(50, 241, 13, 230, 132, 227, 26, 91)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__9_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 181, 165, 225, 136, 177, 169, 19)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__9_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__8_value),LEAN_SCALAR_PTR_LITERAL(201, 230, 23, 208, 164, 113, 201, 132)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__10_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar___closed__0_value;
static const lean_array_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Tactic_RCases_rcases_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Tactic_RCases_rcases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_RCases_rcases___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_RCases_rcases___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_RCases_rcases___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rcases___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rcases___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_RCases_rcases_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_RCases_rcases_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rcases___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rcases___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rcases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rcases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0___closed__0_value)} };
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "binder"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 93, 179, 129, 121, 199, 215, 253)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(201, 86, 105, 110, 83, 1, 132, 81)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_expandRIntroPats(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_RCases_expandRIntroPats_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_RCases_expandRIntroPats_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_expandRIntroPats___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue_loop___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rintro___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rintro___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rintro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rintro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__1___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rcases"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 76, 101, 33, 30, 11, 121, 59)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__1_value),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__6_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__3_value),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(133, 58, 227, 168, 195, 28, 19, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__4_value),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__8_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(122, 52, 29, 174, 40, 151, 224, 90)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(27, 179, 90, 171, 127, 72, 101, 110)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__6_value),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(38, 117, 212, 174, 24, 179, 108, 47)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__7_value),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__6_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(84, 219, 0, 232, 118, 1, 211, 207)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__8_value),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(1, 24, 171, 126, 91, 218, 61, 233)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__9_value),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__8_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(78, 47, 146, 235, 255, 63, 27, 133)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "evalRCases"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__10_value),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(68, 30, 19, 113, 199, 28, 14, 204)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "obtain"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__0_value),LEAN_SCALAR_PTR_LITERAL(11, 177, 143, 165, 56, 37, 104, 113)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "this"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__2_value),LEAN_SCALAR_PTR_LITERAL(38, 116, 214, 236, 212, 160, 188, 150)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 140, .m_capacity = 140, .m_length = 131, .m_data = "`obtain` requires either an expected type or a value.\nusage: `obtain ⟨patt⟩\? : type (:= val)\?` or `obtain ⟨patt⟩\? (: type)\? := val`"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "evalObtain"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__10_value),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 145, 236, 142, 97, 1, 16, 15)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rintro"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__5_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__7_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(170, 254, 242, 235, 94, 162, 254, 146)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "evalRIntro"};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__10_value),((lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(113, 67, 34, 189, 79, 70, 53, 44)}};
static const lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_57_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__2_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_));
v___x_58_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__4_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_));
v___x_59_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn___closed__9_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_));
v___x_60_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4__spec__0(v___x_57_, v___x_58_, v___x_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4____boxed(lean_object* v___y_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_();
return v_res_62_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0(void){
_start:
{
uint8_t v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = 0;
v___x_64_ = lean_box(0);
v___x_65_ = l_Lean_SourceInfo_fromRef(v___x_64_, v___x_63_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0(lean_object* v_stx_75_){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_76_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0, &l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0);
v___x_77_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__4));
v___x_78_ = l_Lean_Syntax_node1(v___x_76_, v___x_77_, v_stx_75_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0(lean_object* v_stx_90_){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_91_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0, &l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0);
v___x_92_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__1));
v___x_93_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__3));
v___x_94_ = l_Lean_Syntax_node1(v___x_91_, v___x_93_, v_stx_90_);
v___x_95_ = l_Lean_Syntax_node1(v___x_91_, v___x_92_, v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__2(void){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Array_mkArray0___redArg();
return v___x_104_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__3(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_105_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__2, &l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__2);
v___x_106_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__3));
v___x_107_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0, &l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0);
v___x_108_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set(v___x_108_, 1, v___x_106_);
lean_ctor_set(v___x_108_, 2, v___x_105_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0(lean_object* v_stx_109_){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_110_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0, &l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0);
v___x_111_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__1));
v___x_112_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__3, &l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__3);
v___x_113_ = l_Lean_Syntax_node2(v___x_110_, v___x_111_, v_stx_109_, v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0(lean_object* v_stx_123_){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_124_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0, &l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__0);
v___x_125_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1));
v___x_126_ = l_Lean_Syntax_node1(v___x_124_, v___x_125_, v_stx_123_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorIdx(lean_object* v_x_129_){
_start:
{
switch(lean_obj_tag(v_x_129_))
{
case 0:
{
lean_object* v___x_130_; 
v___x_130_ = lean_unsigned_to_nat(0u);
return v___x_130_;
}
case 1:
{
lean_object* v___x_131_; 
v___x_131_ = lean_unsigned_to_nat(1u);
return v___x_131_;
}
case 2:
{
lean_object* v___x_132_; 
v___x_132_ = lean_unsigned_to_nat(2u);
return v___x_132_;
}
case 3:
{
lean_object* v___x_133_; 
v___x_133_ = lean_unsigned_to_nat(3u);
return v___x_133_;
}
case 4:
{
lean_object* v___x_134_; 
v___x_134_ = lean_unsigned_to_nat(4u);
return v___x_134_;
}
case 5:
{
lean_object* v___x_135_; 
v___x_135_ = lean_unsigned_to_nat(5u);
return v___x_135_;
}
default: 
{
lean_object* v___x_136_; 
v___x_136_ = lean_unsigned_to_nat(6u);
return v___x_136_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorIdx___boxed(lean_object* v_x_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorIdx(v_x_137_);
lean_dec_ref(v_x_137_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(lean_object* v_t_139_, lean_object* v_k_140_){
_start:
{
switch(lean_obj_tag(v_t_139_))
{
case 0:
{
lean_object* v_ref_141_; lean_object* v_a_142_; lean_object* v___x_143_; 
v_ref_141_ = lean_ctor_get(v_t_139_, 0);
lean_inc(v_ref_141_);
v_a_142_ = lean_ctor_get(v_t_139_, 1);
lean_inc_ref(v_a_142_);
lean_dec_ref_known(v_t_139_, 2);
v___x_143_ = lean_apply_2(v_k_140_, v_ref_141_, v_a_142_);
return v___x_143_;
}
case 2:
{
lean_object* v_ref_144_; lean_object* v___x_145_; 
v_ref_144_ = lean_ctor_get(v_t_139_, 0);
lean_inc(v_ref_144_);
lean_dec_ref_known(v_t_139_, 1);
v___x_145_ = lean_apply_1(v_k_140_, v_ref_144_);
return v___x_145_;
}
case 3:
{
lean_object* v_ref_146_; lean_object* v_a_147_; lean_object* v___x_148_; 
v_ref_146_ = lean_ctor_get(v_t_139_, 0);
lean_inc(v_ref_146_);
v_a_147_ = lean_ctor_get(v_t_139_, 1);
lean_inc_ref(v_a_147_);
lean_dec_ref_known(v_t_139_, 2);
v___x_148_ = lean_apply_2(v_k_140_, v_ref_146_, v_a_147_);
return v___x_148_;
}
case 4:
{
lean_object* v_ref_149_; lean_object* v_a_150_; lean_object* v_a_151_; lean_object* v___x_152_; 
v_ref_149_ = lean_ctor_get(v_t_139_, 0);
lean_inc(v_ref_149_);
v_a_150_ = lean_ctor_get(v_t_139_, 1);
lean_inc_ref(v_a_150_);
v_a_151_ = lean_ctor_get(v_t_139_, 2);
lean_inc(v_a_151_);
lean_dec_ref_known(v_t_139_, 3);
v___x_152_ = lean_apply_3(v_k_140_, v_ref_149_, v_a_150_, v_a_151_);
return v___x_152_;
}
default: 
{
lean_object* v_ref_153_; lean_object* v_a_154_; lean_object* v___x_155_; 
v_ref_153_ = lean_ctor_get(v_t_139_, 0);
lean_inc(v_ref_153_);
v_a_154_ = lean_ctor_get(v_t_139_, 1);
lean_inc(v_a_154_);
lean_dec_ref(v_t_139_);
v___x_155_ = lean_apply_2(v_k_140_, v_ref_153_, v_a_154_);
return v___x_155_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim(lean_object* v_motive__1_156_, lean_object* v_ctorIdx_157_, lean_object* v_t_158_, lean_object* v_h_159_, lean_object* v_k_160_){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(v_t_158_, v_k_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___boxed(lean_object* v_motive__1_162_, lean_object* v_ctorIdx_163_, lean_object* v_t_164_, lean_object* v_h_165_, lean_object* v_k_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim(v_motive__1_162_, v_ctorIdx_163_, v_t_164_, v_h_165_, v_k_166_);
lean_dec(v_ctorIdx_163_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_paren_elim___redArg(lean_object* v_t_168_, lean_object* v_paren_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(v_t_168_, v_paren_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_paren_elim(lean_object* v_motive__1_171_, lean_object* v_t_172_, lean_object* v_h_173_, lean_object* v_paren_174_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(v_t_172_, v_paren_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_one_elim___redArg(lean_object* v_t_176_, lean_object* v_one_177_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(v_t_176_, v_one_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_one_elim(lean_object* v_motive__1_179_, lean_object* v_t_180_, lean_object* v_h_181_, lean_object* v_one_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(v_t_180_, v_one_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_clear_elim___redArg(lean_object* v_t_184_, lean_object* v_clear_185_){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(v_t_184_, v_clear_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_clear_elim(lean_object* v_motive__1_187_, lean_object* v_t_188_, lean_object* v_h_189_, lean_object* v_clear_190_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(v_t_188_, v_clear_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_explicit_elim___redArg(lean_object* v_t_192_, lean_object* v_explicit_193_){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(v_t_192_, v_explicit_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_explicit_elim(lean_object* v_motive__1_195_, lean_object* v_t_196_, lean_object* v_h_197_, lean_object* v_explicit_198_){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(v_t_196_, v_explicit_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_typed_elim___redArg(lean_object* v_t_200_, lean_object* v_typed_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(v_t_200_, v_typed_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_typed_elim(lean_object* v_motive__1_203_, lean_object* v_t_204_, lean_object* v_h_205_, lean_object* v_typed_206_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(v_t_204_, v_typed_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_tuple_elim___redArg(lean_object* v_t_208_, lean_object* v_tuple_209_){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(v_t_208_, v_tuple_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_tuple_elim(lean_object* v_motive__1_211_, lean_object* v_t_212_, lean_object* v_h_213_, lean_object* v_tuple_214_){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(v_t_212_, v_tuple_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_alts_elim___redArg(lean_object* v_t_216_, lean_object* v_alts_217_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(v_t_216_, v_alts_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_RCasesPatt_alts_elim(lean_object* v_motive__1_219_, lean_object* v_t_220_, lean_object* v_h_221_, lean_object* v_alts_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = l_Lean_Elab_Tactic_RCases_RCasesPatt_ctorElim___redArg(v_t_220_, v_alts_222_);
return v___x_223_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = lean_unsigned_to_nat(2u);
v___x_231_ = lean_nat_to_int(v___x_230_);
return v___x_231_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = lean_unsigned_to_nat(1u);
v___x_233_ = lean_nat_to_int(v___x_232_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0_spec__0_spec__1_spec__3(lean_object* v_x_273_, lean_object* v_x_274_, lean_object* v_x_275_){
_start:
{
if (lean_obj_tag(v_x_275_) == 0)
{
lean_dec(v_x_273_);
return v_x_274_;
}
else
{
lean_object* v_head_276_; lean_object* v_tail_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_288_; 
v_head_276_ = lean_ctor_get(v_x_275_, 0);
v_tail_277_ = lean_ctor_get(v_x_275_, 1);
v_isSharedCheck_288_ = !lean_is_exclusive(v_x_275_);
if (v_isSharedCheck_288_ == 0)
{
v___x_279_ = v_x_275_;
v_isShared_280_ = v_isSharedCheck_288_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_tail_277_);
lean_inc(v_head_276_);
lean_dec(v_x_275_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_288_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
lean_inc(v_x_273_);
if (v_isShared_280_ == 0)
{
lean_ctor_set_tag(v___x_279_, 5);
lean_ctor_set(v___x_279_, 1, v_x_273_);
lean_ctor_set(v___x_279_, 0, v_x_274_);
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_x_274_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_x_273_);
v___x_282_ = v_reuseFailAlloc_287_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_283_ = lean_unsigned_to_nat(0u);
v___x_284_ = l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr(v_head_276_, v___x_283_);
v___x_285_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_282_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v_x_274_ = v___x_285_;
v_x_275_ = v_tail_277_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0_spec__0_spec__1(lean_object* v_x_289_, lean_object* v_x_290_, lean_object* v_x_291_){
_start:
{
if (lean_obj_tag(v_x_291_) == 0)
{
lean_dec(v_x_289_);
return v_x_290_;
}
else
{
lean_object* v_head_292_; lean_object* v_tail_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_304_; 
v_head_292_ = lean_ctor_get(v_x_291_, 0);
v_tail_293_ = lean_ctor_get(v_x_291_, 1);
v_isSharedCheck_304_ = !lean_is_exclusive(v_x_291_);
if (v_isSharedCheck_304_ == 0)
{
v___x_295_ = v_x_291_;
v_isShared_296_ = v_isSharedCheck_304_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_tail_293_);
lean_inc(v_head_292_);
lean_dec(v_x_291_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_304_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v___x_298_; 
lean_inc(v_x_289_);
if (v_isShared_296_ == 0)
{
lean_ctor_set_tag(v___x_295_, 5);
lean_ctor_set(v___x_295_, 1, v_x_289_);
lean_ctor_set(v___x_295_, 0, v_x_290_);
v___x_298_ = v___x_295_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_x_290_);
lean_ctor_set(v_reuseFailAlloc_303_, 1, v_x_289_);
v___x_298_ = v_reuseFailAlloc_303_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_299_ = lean_unsigned_to_nat(0u);
v___x_300_ = l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr(v_head_292_, v___x_299_);
v___x_301_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_301_, 0, v___x_298_);
lean_ctor_set(v___x_301_, 1, v___x_300_);
v___x_302_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0_spec__0_spec__1_spec__3(v_x_289_, v___x_301_, v_tail_293_);
return v___x_302_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0_spec__0(lean_object* v_x_305_, lean_object* v_x_306_){
_start:
{
if (lean_obj_tag(v_x_305_) == 0)
{
lean_object* v___x_307_; 
lean_dec(v_x_306_);
v___x_307_ = lean_box(0);
return v___x_307_;
}
else
{
lean_object* v_tail_308_; 
v_tail_308_ = lean_ctor_get(v_x_305_, 1);
if (lean_obj_tag(v_tail_308_) == 0)
{
lean_object* v_head_309_; lean_object* v___x_310_; 
lean_dec(v_x_306_);
v_head_309_ = lean_ctor_get(v_x_305_, 0);
lean_inc(v_head_309_);
lean_dec_ref_known(v_x_305_, 2);
v___x_310_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0_spec__0___lam__0(v_head_309_);
return v___x_310_;
}
else
{
lean_object* v_head_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
lean_inc(v_tail_308_);
v_head_311_ = lean_ctor_get(v_x_305_, 0);
lean_inc(v_head_311_);
lean_dec_ref_known(v_x_305_, 2);
v___x_312_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0_spec__0___lam__0(v_head_311_);
v___x_313_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0_spec__0_spec__1(v_x_306_, v___x_312_, v_tail_308_);
return v___x_313_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = ((lean_object*)(l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__2));
v___x_316_ = lean_string_length(v___x_315_);
return v___x_316_;
}
}
static lean_object* _init_l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = lean_obj_once(&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__7, &l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__7_once, _init_l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__7);
v___x_318_ = lean_nat_to_int(v___x_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg(lean_object* v_a_324_){
_start:
{
if (lean_obj_tag(v_a_324_) == 0)
{
lean_object* v___x_325_; 
v___x_325_ = ((lean_object*)(l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__1));
return v___x_325_;
}
else
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; uint8_t v___x_334_; lean_object* v___x_335_; 
v___x_326_ = ((lean_object*)(l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__5));
v___x_327_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0_spec__0(v_a_324_, v___x_326_);
v___x_328_ = lean_obj_once(&l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__8, &l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__8_once, _init_l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__8);
v___x_329_ = ((lean_object*)(l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__9));
v___x_330_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
lean_ctor_set(v___x_330_, 1, v___x_327_);
v___x_331_ = ((lean_object*)(l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__10));
v___x_332_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_332_, 0, v___x_330_);
lean_ctor_set(v___x_332_, 1, v___x_331_);
v___x_333_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_328_);
lean_ctor_set(v___x_333_, 1, v___x_332_);
v___x_334_ = 0;
v___x_335_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_335_, 0, v___x_333_);
lean_ctor_set_uint8(v___x_335_, sizeof(void*)*1, v___x_334_);
return v___x_335_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr(lean_object* v_x_342_, lean_object* v_prec_343_){
_start:
{
switch(lean_obj_tag(v_x_342_))
{
case 0:
{
lean_object* v_ref_344_; lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_368_; 
v_ref_344_ = lean_ctor_get(v_x_342_, 0);
v_a_345_ = lean_ctor_get(v_x_342_, 1);
v_isSharedCheck_368_ = !lean_is_exclusive(v_x_342_);
if (v_isSharedCheck_368_ == 0)
{
v___x_347_ = v_x_342_;
v_isShared_348_ = v_isSharedCheck_368_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_inc(v_ref_344_);
lean_dec(v_x_342_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_368_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_349_; lean_object* v___y_351_; uint8_t v___x_365_; 
v___x_349_ = lean_unsigned_to_nat(1024u);
v___x_365_ = lean_nat_dec_le(v___x_349_, v_prec_343_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; 
v___x_366_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3, &l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3_once, _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3);
v___y_351_ = v___x_366_;
goto v___jp_350_;
}
else
{
lean_object* v___x_367_; 
v___x_367_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4, &l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4_once, _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4);
v___y_351_ = v___x_367_;
goto v___jp_350_;
}
v___jp_350_:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_356_; 
v___x_352_ = lean_box(1);
v___x_353_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__2));
v___x_354_ = l_Lean_Syntax_instRepr_repr(v_ref_344_, v___x_349_);
if (v_isShared_348_ == 0)
{
lean_ctor_set_tag(v___x_347_, 5);
lean_ctor_set(v___x_347_, 1, v___x_354_);
lean_ctor_set(v___x_347_, 0, v___x_353_);
v___x_356_ = v___x_347_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_353_);
lean_ctor_set(v_reuseFailAlloc_364_, 1, v___x_354_);
v___x_356_ = v_reuseFailAlloc_364_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; uint8_t v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_357_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
lean_ctor_set(v___x_357_, 1, v___x_352_);
v___x_358_ = l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr(v_a_345_, v___x_349_);
v___x_359_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_359_, 0, v___x_357_);
lean_ctor_set(v___x_359_, 1, v___x_358_);
lean_inc(v___y_351_);
v___x_360_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_360_, 0, v___y_351_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
v___x_361_ = 0;
v___x_362_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_362_, 0, v___x_360_);
lean_ctor_set_uint8(v___x_362_, sizeof(void*)*1, v___x_361_);
v___x_363_ = l_Repr_addAppParen(v___x_362_, v_prec_343_);
return v___x_363_;
}
}
}
}
case 1:
{
lean_object* v_ref_369_; lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_394_; 
v_ref_369_ = lean_ctor_get(v_x_342_, 0);
v_a_370_ = lean_ctor_get(v_x_342_, 1);
v_isSharedCheck_394_ = !lean_is_exclusive(v_x_342_);
if (v_isSharedCheck_394_ == 0)
{
v___x_372_ = v_x_342_;
v_isShared_373_ = v_isSharedCheck_394_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_inc(v_ref_369_);
lean_dec(v_x_342_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_394_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___y_375_; lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_390_ = lean_unsigned_to_nat(1024u);
v___x_391_ = lean_nat_dec_le(v___x_390_, v_prec_343_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; 
v___x_392_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3, &l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3_once, _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3);
v___y_375_ = v___x_392_;
goto v___jp_374_;
}
else
{
lean_object* v___x_393_; 
v___x_393_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4, &l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4_once, _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4);
v___y_375_ = v___x_393_;
goto v___jp_374_;
}
v___jp_374_:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_381_; 
v___x_376_ = lean_box(1);
v___x_377_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__7));
v___x_378_ = lean_unsigned_to_nat(1024u);
v___x_379_ = l_Lean_Syntax_instRepr_repr(v_ref_369_, v___x_378_);
if (v_isShared_373_ == 0)
{
lean_ctor_set_tag(v___x_372_, 5);
lean_ctor_set(v___x_372_, 1, v___x_379_);
lean_ctor_set(v___x_372_, 0, v___x_377_);
v___x_381_ = v___x_372_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_377_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v___x_379_);
v___x_381_ = v_reuseFailAlloc_389_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; uint8_t v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_382_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
lean_ctor_set(v___x_382_, 1, v___x_376_);
v___x_383_ = l_Lean_Name_reprPrec(v_a_370_, v___x_378_);
v___x_384_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_382_);
lean_ctor_set(v___x_384_, 1, v___x_383_);
lean_inc(v___y_375_);
v___x_385_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_385_, 0, v___y_375_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
v___x_386_ = 0;
v___x_387_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_387_, 0, v___x_385_);
lean_ctor_set_uint8(v___x_387_, sizeof(void*)*1, v___x_386_);
v___x_388_ = l_Repr_addAppParen(v___x_387_, v_prec_343_);
return v___x_388_;
}
}
}
}
case 2:
{
lean_object* v_ref_395_; lean_object* v___y_397_; lean_object* v___x_406_; uint8_t v___x_407_; 
v_ref_395_ = lean_ctor_get(v_x_342_, 0);
lean_inc(v_ref_395_);
lean_dec_ref_known(v_x_342_, 1);
v___x_406_ = lean_unsigned_to_nat(1024u);
v___x_407_ = lean_nat_dec_le(v___x_406_, v_prec_343_);
if (v___x_407_ == 0)
{
lean_object* v___x_408_; 
v___x_408_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3, &l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3_once, _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3);
v___y_397_ = v___x_408_;
goto v___jp_396_;
}
else
{
lean_object* v___x_409_; 
v___x_409_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4, &l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4_once, _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4);
v___y_397_ = v___x_409_;
goto v___jp_396_;
}
v___jp_396_:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; uint8_t v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_398_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__10));
v___x_399_ = lean_unsigned_to_nat(1024u);
v___x_400_ = l_Lean_Syntax_instRepr_repr(v_ref_395_, v___x_399_);
v___x_401_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_398_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
lean_inc(v___y_397_);
v___x_402_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_402_, 0, v___y_397_);
lean_ctor_set(v___x_402_, 1, v___x_401_);
v___x_403_ = 0;
v___x_404_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_404_, 0, v___x_402_);
lean_ctor_set_uint8(v___x_404_, sizeof(void*)*1, v___x_403_);
v___x_405_ = l_Repr_addAppParen(v___x_404_, v_prec_343_);
return v___x_405_;
}
}
case 3:
{
lean_object* v_ref_410_; lean_object* v_a_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_434_; 
v_ref_410_ = lean_ctor_get(v_x_342_, 0);
v_a_411_ = lean_ctor_get(v_x_342_, 1);
v_isSharedCheck_434_ = !lean_is_exclusive(v_x_342_);
if (v_isSharedCheck_434_ == 0)
{
v___x_413_ = v_x_342_;
v_isShared_414_ = v_isSharedCheck_434_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_a_411_);
lean_inc(v_ref_410_);
lean_dec(v_x_342_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_434_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v___x_415_; lean_object* v___y_417_; uint8_t v___x_431_; 
v___x_415_ = lean_unsigned_to_nat(1024u);
v___x_431_ = lean_nat_dec_le(v___x_415_, v_prec_343_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; 
v___x_432_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3, &l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3_once, _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3);
v___y_417_ = v___x_432_;
goto v___jp_416_;
}
else
{
lean_object* v___x_433_; 
v___x_433_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4, &l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4_once, _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4);
v___y_417_ = v___x_433_;
goto v___jp_416_;
}
v___jp_416_:
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_422_; 
v___x_418_ = lean_box(1);
v___x_419_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__13));
v___x_420_ = l_Lean_Syntax_instRepr_repr(v_ref_410_, v___x_415_);
if (v_isShared_414_ == 0)
{
lean_ctor_set_tag(v___x_413_, 5);
lean_ctor_set(v___x_413_, 1, v___x_420_);
lean_ctor_set(v___x_413_, 0, v___x_419_);
v___x_422_ = v___x_413_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_419_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v___x_420_);
v___x_422_ = v_reuseFailAlloc_430_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; uint8_t v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_423_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_422_);
lean_ctor_set(v___x_423_, 1, v___x_418_);
v___x_424_ = l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr(v_a_411_, v___x_415_);
v___x_425_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_425_, 0, v___x_423_);
lean_ctor_set(v___x_425_, 1, v___x_424_);
lean_inc(v___y_417_);
v___x_426_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_426_, 0, v___y_417_);
lean_ctor_set(v___x_426_, 1, v___x_425_);
v___x_427_ = 0;
v___x_428_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_428_, 0, v___x_426_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*1, v___x_427_);
v___x_429_ = l_Repr_addAppParen(v___x_428_, v_prec_343_);
return v___x_429_;
}
}
}
}
case 4:
{
lean_object* v_ref_435_; lean_object* v_a_436_; lean_object* v_a_437_; lean_object* v___x_438_; lean_object* v___y_440_; uint8_t v___x_455_; 
v_ref_435_ = lean_ctor_get(v_x_342_, 0);
lean_inc(v_ref_435_);
v_a_436_ = lean_ctor_get(v_x_342_, 1);
lean_inc_ref(v_a_436_);
v_a_437_ = lean_ctor_get(v_x_342_, 2);
lean_inc(v_a_437_);
lean_dec_ref_known(v_x_342_, 3);
v___x_438_ = lean_unsigned_to_nat(1024u);
v___x_455_ = lean_nat_dec_le(v___x_438_, v_prec_343_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; 
v___x_456_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3, &l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3_once, _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3);
v___y_440_ = v___x_456_;
goto v___jp_439_;
}
else
{
lean_object* v___x_457_; 
v___x_457_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4, &l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4_once, _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4);
v___y_440_ = v___x_457_;
goto v___jp_439_;
}
v___jp_439_:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; uint8_t v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_441_ = lean_box(1);
v___x_442_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__16));
v___x_443_ = l_Lean_Syntax_instRepr_repr(v_ref_435_, v___x_438_);
v___x_444_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_442_);
lean_ctor_set(v___x_444_, 1, v___x_443_);
v___x_445_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_445_, 0, v___x_444_);
lean_ctor_set(v___x_445_, 1, v___x_441_);
v___x_446_ = l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr(v_a_436_, v___x_438_);
v___x_447_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_447_, 0, v___x_445_);
lean_ctor_set(v___x_447_, 1, v___x_446_);
v___x_448_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
lean_ctor_set(v___x_448_, 1, v___x_441_);
v___x_449_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_a_437_);
v___x_450_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_448_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
lean_inc(v___y_440_);
v___x_451_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_451_, 0, v___y_440_);
lean_ctor_set(v___x_451_, 1, v___x_450_);
v___x_452_ = 0;
v___x_453_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_453_, 0, v___x_451_);
lean_ctor_set_uint8(v___x_453_, sizeof(void*)*1, v___x_452_);
v___x_454_ = l_Repr_addAppParen(v___x_453_, v_prec_343_);
return v___x_454_;
}
}
case 5:
{
lean_object* v_ref_458_; lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_483_; 
v_ref_458_ = lean_ctor_get(v_x_342_, 0);
v_a_459_ = lean_ctor_get(v_x_342_, 1);
v_isSharedCheck_483_ = !lean_is_exclusive(v_x_342_);
if (v_isSharedCheck_483_ == 0)
{
v___x_461_ = v_x_342_;
v_isShared_462_ = v_isSharedCheck_483_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_inc(v_ref_458_);
lean_dec(v_x_342_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_483_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___y_464_; lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_479_ = lean_unsigned_to_nat(1024u);
v___x_480_ = lean_nat_dec_le(v___x_479_, v_prec_343_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; 
v___x_481_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3, &l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3_once, _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3);
v___y_464_ = v___x_481_;
goto v___jp_463_;
}
else
{
lean_object* v___x_482_; 
v___x_482_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4, &l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4_once, _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4);
v___y_464_ = v___x_482_;
goto v___jp_463_;
}
v___jp_463_:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_470_; 
v___x_465_ = lean_box(1);
v___x_466_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__19));
v___x_467_ = lean_unsigned_to_nat(1024u);
v___x_468_ = l_Lean_Syntax_instRepr_repr(v_ref_458_, v___x_467_);
if (v_isShared_462_ == 0)
{
lean_ctor_set(v___x_461_, 1, v___x_468_);
lean_ctor_set(v___x_461_, 0, v___x_466_);
v___x_470_ = v___x_461_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v___x_466_);
lean_ctor_set(v_reuseFailAlloc_478_, 1, v___x_468_);
v___x_470_ = v_reuseFailAlloc_478_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_471_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
lean_ctor_set(v___x_471_, 1, v___x_465_);
v___x_472_ = l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg(v_a_459_);
v___x_473_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_471_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
lean_inc(v___y_464_);
v___x_474_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_474_, 0, v___y_464_);
lean_ctor_set(v___x_474_, 1, v___x_473_);
v___x_475_ = 0;
v___x_476_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_476_, 0, v___x_474_);
lean_ctor_set_uint8(v___x_476_, sizeof(void*)*1, v___x_475_);
v___x_477_ = l_Repr_addAppParen(v___x_476_, v_prec_343_);
return v___x_477_;
}
}
}
}
default: 
{
lean_object* v_ref_484_; lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_509_; 
v_ref_484_ = lean_ctor_get(v_x_342_, 0);
v_a_485_ = lean_ctor_get(v_x_342_, 1);
v_isSharedCheck_509_ = !lean_is_exclusive(v_x_342_);
if (v_isSharedCheck_509_ == 0)
{
v___x_487_ = v_x_342_;
v_isShared_488_ = v_isSharedCheck_509_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_inc(v_ref_484_);
lean_dec(v_x_342_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_509_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___y_490_; lean_object* v___x_505_; uint8_t v___x_506_; 
v___x_505_ = lean_unsigned_to_nat(1024u);
v___x_506_ = lean_nat_dec_le(v___x_505_, v_prec_343_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; 
v___x_507_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3, &l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3_once, _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__3);
v___y_490_ = v___x_507_;
goto v___jp_489_;
}
else
{
lean_object* v___x_508_; 
v___x_508_ = lean_obj_once(&l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4, &l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4_once, _init_l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__4);
v___y_490_ = v___x_508_;
goto v___jp_489_;
}
v___jp_489_:
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_496_; 
v___x_491_ = lean_box(1);
v___x_492_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___closed__22));
v___x_493_ = lean_unsigned_to_nat(1024u);
v___x_494_ = l_Lean_Syntax_instRepr_repr(v_ref_484_, v___x_493_);
if (v_isShared_488_ == 0)
{
lean_ctor_set_tag(v___x_487_, 5);
lean_ctor_set(v___x_487_, 1, v___x_494_);
lean_ctor_set(v___x_487_, 0, v___x_492_);
v___x_496_ = v___x_487_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v___x_492_);
lean_ctor_set(v_reuseFailAlloc_504_, 1, v___x_494_);
v___x_496_ = v_reuseFailAlloc_504_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; uint8_t v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_497_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
lean_ctor_set(v___x_497_, 1, v___x_491_);
v___x_498_ = l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg(v_a_485_);
v___x_499_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_497_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
lean_inc(v___y_490_);
v___x_500_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_500_, 0, v___y_490_);
lean_ctor_set(v___x_500_, 1, v___x_499_);
v___x_501_ = 0;
v___x_502_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_502_, 0, v___x_500_);
lean_ctor_set_uint8(v___x_502_, sizeof(void*)*1, v___x_501_);
v___x_503_ = l_Repr_addAppParen(v___x_502_, v_prec_343_);
return v___x_503_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0_spec__0___lam__0(lean_object* v___y_510_){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = lean_unsigned_to_nat(0u);
v___x_512_ = l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr(v___y_510_, v___x_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr___boxed(lean_object* v_x_513_, lean_object* v_prec_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr(v_x_513_, v_prec_514_);
lean_dec(v_prec_514_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0_spec__1(lean_object* v_a_516_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = lean_nat_to_int(v_a_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0(lean_object* v_a_518_, lean_object* v_n_519_){
_start:
{
lean_object* v___x_520_; 
v___x_520_ = l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg(v_a_518_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___boxed(lean_object* v_a_521_, lean_object* v_n_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0(v_a_521_, v_n_522_);
lean_dec(v_n_522_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_name_x3f(lean_object* v_x_534_){
_start:
{
switch(lean_obj_tag(v_x_534_))
{
case 1:
{
lean_object* v_a_535_; 
v_a_535_ = lean_ctor_get(v_x_534_, 1);
if (lean_obj_tag(v_a_535_) == 1)
{
lean_object* v_pre_536_; 
v_pre_536_ = lean_ctor_get(v_a_535_, 0);
if (lean_obj_tag(v_pre_536_) == 0)
{
lean_object* v_str_537_; lean_object* v___x_538_; uint8_t v___x_539_; 
v_str_537_ = lean_ctor_get(v_a_535_, 1);
v___x_538_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__0));
v___x_539_ = lean_string_dec_eq(v_str_537_, v___x_538_);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; uint8_t v___x_541_; 
v___x_540_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_name_x3f___closed__0));
v___x_541_ = lean_string_dec_eq(v_str_537_, v___x_540_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; 
lean_inc_ref(v_a_535_);
v___x_542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_542_, 0, v_a_535_);
return v___x_542_;
}
else
{
lean_object* v___x_543_; 
v___x_543_ = lean_box(0);
return v___x_543_;
}
}
else
{
lean_object* v___x_544_; 
v___x_544_ = lean_box(0);
return v___x_544_;
}
}
else
{
lean_object* v___x_545_; 
lean_inc_ref(v_a_535_);
v___x_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_545_, 0, v_a_535_);
return v___x_545_;
}
}
else
{
lean_object* v___x_546_; 
lean_inc(v_a_535_);
v___x_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_546_, 0, v_a_535_);
return v___x_546_;
}
}
case 0:
{
lean_object* v_a_547_; 
v_a_547_ = lean_ctor_get(v_x_534_, 1);
v_x_534_ = v_a_547_;
goto _start;
}
case 4:
{
lean_object* v_a_549_; 
v_a_549_ = lean_ctor_get(v_x_534_, 1);
v_x_534_ = v_a_549_;
goto _start;
}
case 6:
{
lean_object* v_a_551_; 
v_a_551_ = lean_ctor_get(v_x_534_, 1);
if (lean_obj_tag(v_a_551_) == 1)
{
lean_object* v_tail_552_; 
v_tail_552_ = lean_ctor_get(v_a_551_, 1);
if (lean_obj_tag(v_tail_552_) == 0)
{
lean_object* v_head_553_; 
v_head_553_ = lean_ctor_get(v_a_551_, 0);
v_x_534_ = v_head_553_;
goto _start;
}
else
{
lean_object* v___x_555_; 
v___x_555_ = lean_box(0);
return v___x_555_;
}
}
else
{
lean_object* v___x_556_; 
v___x_556_ = lean_box(0);
return v___x_556_;
}
}
default: 
{
lean_object* v___x_557_; 
v___x_557_ = lean_box(0);
return v___x_557_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_name_x3f___boxed(lean_object* v_x_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_name_x3f(v_x_558_);
lean_dec_ref(v_x_558_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_ref(lean_object* v_x_560_){
_start:
{
lean_object* v_ref_561_; 
v_ref_561_ = lean_ctor_get(v_x_560_, 0);
lean_inc(v_ref_561_);
return v_ref_561_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_ref___boxed(lean_object* v_x_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_ref(v_x_562_);
lean_dec_ref(v_x_562_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_asTuple(lean_object* v_x_564_){
_start:
{
switch(lean_obj_tag(v_x_564_))
{
case 0:
{
lean_object* v_a_565_; 
v_a_565_ = lean_ctor_get(v_x_564_, 1);
lean_inc_ref(v_a_565_);
lean_dec_ref_known(v_x_564_, 2);
v_x_564_ = v_a_565_;
goto _start;
}
case 3:
{
lean_object* v_a_567_; lean_object* v___x_568_; lean_object* v_snd_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_578_; 
v_a_567_ = lean_ctor_get(v_x_564_, 1);
lean_inc_ref(v_a_567_);
lean_dec_ref_known(v_x_564_, 2);
v___x_568_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_asTuple(v_a_567_);
v_snd_569_ = lean_ctor_get(v___x_568_, 1);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_578_ == 0)
{
lean_object* v_unused_579_; 
v_unused_579_ = lean_ctor_get(v___x_568_, 0);
lean_dec(v_unused_579_);
v___x_571_ = v___x_568_;
v_isShared_572_ = v_isSharedCheck_578_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_snd_569_);
lean_dec(v___x_568_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_578_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
uint8_t v___x_573_; lean_object* v___x_574_; lean_object* v___x_576_; 
v___x_573_ = 1;
v___x_574_ = lean_box(v___x_573_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 0, v___x_574_);
v___x_576_ = v___x_571_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v___x_574_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_snd_569_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
case 5:
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_589_; 
v_a_580_ = lean_ctor_get(v_x_564_, 1);
v_isSharedCheck_589_ = !lean_is_exclusive(v_x_564_);
if (v_isSharedCheck_589_ == 0)
{
lean_object* v_unused_590_; 
v_unused_590_ = lean_ctor_get(v_x_564_, 0);
lean_dec(v_unused_590_);
v___x_582_ = v_x_564_;
v_isShared_583_ = v_isSharedCheck_589_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v_x_564_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_589_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
uint8_t v___x_584_; lean_object* v___x_585_; lean_object* v___x_587_; 
v___x_584_ = 0;
v___x_585_ = lean_box(v___x_584_);
if (v_isShared_583_ == 0)
{
lean_ctor_set_tag(v___x_582_, 0);
lean_ctor_set(v___x_582_, 0, v___x_585_);
v___x_587_ = v___x_582_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_585_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_a_580_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
default: 
{
uint8_t v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_591_ = 0;
v___x_592_ = lean_box(0);
v___x_593_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_593_, 0, v_x_564_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___x_594_ = lean_box(v___x_591_);
v___x_595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
lean_ctor_set(v___x_595_, 1, v___x_593_);
return v___x_595_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_asAlts(lean_object* v_x_596_){
_start:
{
switch(lean_obj_tag(v_x_596_))
{
case 0:
{
lean_object* v_a_597_; 
v_a_597_ = lean_ctor_get(v_x_596_, 1);
lean_inc_ref(v_a_597_);
lean_dec_ref_known(v_x_596_, 2);
v_x_596_ = v_a_597_;
goto _start;
}
case 6:
{
lean_object* v_a_599_; 
v_a_599_ = lean_ctor_get(v_x_596_, 1);
lean_inc(v_a_599_);
lean_dec_ref_known(v_x_596_, 2);
return v_a_599_;
}
default: 
{
lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_600_ = lean_box(0);
v___x_601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_601_, 0, v_x_596_);
lean_ctor_set(v___x_601_, 1, v___x_600_);
return v___x_601_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_typed_x3f(lean_object* v_ref_602_, lean_object* v_x_603_, lean_object* v_x_604_){
_start:
{
if (lean_obj_tag(v_x_604_) == 0)
{
lean_dec(v_ref_602_);
return v_x_603_;
}
else
{
lean_object* v_val_605_; lean_object* v___x_606_; 
v_val_605_ = lean_ctor_get(v_x_604_, 0);
lean_inc(v_val_605_);
v___x_606_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v___x_606_, 0, v_ref_602_);
lean_ctor_set(v___x_606_, 1, v_x_603_);
lean_ctor_set(v___x_606_, 2, v_val_605_);
return v___x_606_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_typed_x3f___boxed(lean_object* v_ref_607_, lean_object* v_x_608_, lean_object* v_x_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_typed_x3f(v_ref_607_, v_x_608_, v_x_609_);
lean_dec(v_x_609_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_tuple_x27(lean_object* v_x_611_){
_start:
{
lean_object* v_ps_613_; 
if (lean_obj_tag(v_x_611_) == 1)
{
lean_object* v_tail_640_; 
v_tail_640_ = lean_ctor_get(v_x_611_, 1);
if (lean_obj_tag(v_tail_640_) == 0)
{
lean_object* v_head_641_; 
v_head_641_ = lean_ctor_get(v_x_611_, 0);
lean_inc(v_head_641_);
lean_dec_ref_known(v_x_611_, 2);
return v_head_641_;
}
else
{
v_ps_613_ = v_x_611_;
goto v___jp_612_;
}
}
else
{
v_ps_613_ = v_x_611_;
goto v___jp_612_;
}
v___jp_612_:
{
lean_object* v___x_614_; 
v___x_614_ = l_List_head_x3f___redArg(v_ps_613_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_615_ = lean_box(0);
v___x_616_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_616_, 0, v___x_615_);
lean_ctor_set(v___x_616_, 1, v_ps_613_);
return v___x_616_;
}
else
{
lean_object* v_val_617_; 
v_val_617_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_val_617_);
lean_dec_ref_known(v___x_614_, 1);
switch(lean_obj_tag(v_val_617_))
{
case 2:
{
lean_object* v_ref_618_; lean_object* v___x_619_; 
v_ref_618_ = lean_ctor_get(v_val_617_, 0);
lean_inc(v_ref_618_);
lean_dec_ref_known(v_val_617_, 1);
v___x_619_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_619_, 0, v_ref_618_);
lean_ctor_set(v___x_619_, 1, v_ps_613_);
return v___x_619_;
}
case 4:
{
lean_object* v_ref_620_; lean_object* v___x_621_; 
v_ref_620_ = lean_ctor_get(v_val_617_, 0);
lean_inc(v_ref_620_);
lean_dec_ref_known(v_val_617_, 3);
v___x_621_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_621_, 0, v_ref_620_);
lean_ctor_set(v___x_621_, 1, v_ps_613_);
return v___x_621_;
}
case 5:
{
lean_object* v_ref_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_629_; 
v_ref_622_ = lean_ctor_get(v_val_617_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v_val_617_);
if (v_isSharedCheck_629_ == 0)
{
lean_object* v_unused_630_; 
v_unused_630_ = lean_ctor_get(v_val_617_, 1);
lean_dec(v_unused_630_);
v___x_624_ = v_val_617_;
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_ref_622_);
lean_dec(v_val_617_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_627_; 
if (v_isShared_625_ == 0)
{
lean_ctor_set(v___x_624_, 1, v_ps_613_);
v___x_627_ = v___x_624_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_ref_622_);
lean_ctor_set(v_reuseFailAlloc_628_, 1, v_ps_613_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
}
default: 
{
lean_object* v_ref_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_638_; 
v_ref_631_ = lean_ctor_get(v_val_617_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v_val_617_);
if (v_isSharedCheck_638_ == 0)
{
lean_object* v_unused_639_; 
v_unused_639_ = lean_ctor_get(v_val_617_, 1);
lean_dec(v_unused_639_);
v___x_633_ = v_val_617_;
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_ref_631_);
lean_dec(v_val_617_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_636_; 
if (v_isShared_634_ == 0)
{
lean_ctor_set_tag(v___x_633_, 5);
lean_ctor_set(v___x_633_, 1, v_ps_613_);
v___x_636_ = v___x_633_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_ref_631_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v_ps_613_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_alts_x27(lean_object* v_ref_642_, lean_object* v_x_643_){
_start:
{
if (lean_obj_tag(v_x_643_) == 1)
{
lean_object* v_tail_644_; 
v_tail_644_ = lean_ctor_get(v_x_643_, 1);
if (lean_obj_tag(v_tail_644_) == 0)
{
lean_object* v_head_645_; 
lean_dec(v_ref_642_);
v_head_645_ = lean_ctor_get(v_x_643_, 0);
lean_inc(v_head_645_);
lean_dec_ref_known(v_x_643_, 2);
return v_head_645_;
}
else
{
lean_object* v___x_646_; 
v___x_646_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_646_, 0, v_ref_642_);
lean_ctor_set(v___x_646_, 1, v_x_643_);
return v___x_646_;
}
}
else
{
lean_object* v___x_647_; 
v___x_647_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_647_, 0, v_ref_642_);
lean_ctor_set(v___x_647_, 1, v_x_643_);
return v___x_647_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_tuple_u2081Core(lean_object* v_x_648_){
_start:
{
if (lean_obj_tag(v_x_648_) == 0)
{
return v_x_648_;
}
else
{
lean_object* v_head_649_; lean_object* v_tail_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_670_; 
v_head_649_ = lean_ctor_get(v_x_648_, 0);
v_tail_650_ = lean_ctor_get(v_x_648_, 1);
v_isSharedCheck_670_ = !lean_is_exclusive(v_x_648_);
if (v_isSharedCheck_670_ == 0)
{
v___x_652_ = v_x_648_;
v_isShared_653_ = v_isSharedCheck_670_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_tail_650_);
lean_inc(v_head_649_);
lean_dec(v_x_648_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_670_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
if (lean_obj_tag(v_head_649_) == 5)
{
lean_object* v_a_659_; 
v_a_659_ = lean_ctor_get(v_head_649_, 1);
if (lean_obj_tag(v_a_659_) == 0)
{
if (lean_obj_tag(v_tail_650_) == 0)
{
lean_object* v_ref_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_668_; 
lean_del_object(v___x_652_);
v_ref_660_ = lean_ctor_get(v_head_649_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v_head_649_);
if (v_isSharedCheck_668_ == 0)
{
lean_object* v_unused_669_; 
v_unused_669_ = lean_ctor_get(v_head_649_, 1);
lean_dec(v_unused_669_);
v___x_662_ = v_head_649_;
v_isShared_663_ = v_isSharedCheck_668_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_ref_660_);
lean_dec(v_head_649_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_668_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_665_; 
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 1, v_tail_650_);
v___x_665_ = v___x_662_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_ref_660_);
lean_ctor_set(v_reuseFailAlloc_667_, 1, v_tail_650_);
v___x_665_ = v_reuseFailAlloc_667_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
lean_object* v___x_666_; 
v___x_666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
lean_ctor_set(v___x_666_, 1, v_tail_650_);
return v___x_666_;
}
}
}
else
{
goto v___jp_654_;
}
}
else
{
if (lean_obj_tag(v_tail_650_) == 0)
{
lean_inc(v_a_659_);
lean_dec_ref_known(v_head_649_, 2);
lean_del_object(v___x_652_);
return v_a_659_;
}
else
{
goto v___jp_654_;
}
}
}
else
{
goto v___jp_654_;
}
v___jp_654_:
{
lean_object* v___x_655_; lean_object* v___x_657_; 
v___x_655_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_tuple_u2081Core(v_tail_650_);
if (v_isShared_653_ == 0)
{
lean_ctor_set(v___x_652_, 1, v___x_655_);
v___x_657_ = v___x_652_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_head_649_);
lean_ctor_set(v_reuseFailAlloc_658_, 1, v___x_655_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_tuple_u2081(lean_object* v_x_671_){
_start:
{
lean_object* v___y_673_; lean_object* v___y_674_; 
if (lean_obj_tag(v_x_671_) == 0)
{
lean_object* v___x_677_; 
v___x_677_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__2));
return v___x_677_;
}
else
{
lean_object* v_head_678_; lean_object* v_tail_679_; lean_object* v___x_680_; lean_object* v_ps_682_; 
v_head_678_ = lean_ctor_get(v_x_671_, 0);
v_tail_679_ = lean_ctor_get(v_x_671_, 1);
v___x_680_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited));
if (lean_obj_tag(v_head_678_) == 1)
{
if (lean_obj_tag(v_tail_679_) == 0)
{
lean_inc_ref(v_head_678_);
lean_dec_ref_known(v_x_671_, 2);
return v_head_678_;
}
else
{
v_ps_682_ = v_x_671_;
goto v___jp_681_;
}
}
else
{
v_ps_682_ = v_x_671_;
goto v___jp_681_;
}
v___jp_681_:
{
lean_object* v___x_683_; lean_object* v_ref_684_; 
v___x_683_ = l_List_head_x21___redArg(v___x_680_, v_ps_682_);
v_ref_684_ = lean_ctor_get(v___x_683_, 0);
lean_inc(v_ref_684_);
lean_dec(v___x_683_);
v___y_673_ = v_ps_682_;
v___y_674_ = v_ref_684_;
goto v___jp_672_;
}
}
v___jp_672_:
{
lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_675_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_tuple_u2081Core(v___y_673_);
v___x_676_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_676_, 0, v___y_674_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
return v___x_676_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_alts_u2081Core(lean_object* v_x_685_){
_start:
{
if (lean_obj_tag(v_x_685_) == 0)
{
lean_object* v___x_686_; 
v___x_686_ = lean_box(0);
return v___x_686_;
}
else
{
lean_object* v_head_687_; lean_object* v_tail_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_701_; 
v_head_687_ = lean_ctor_get(v_x_685_, 0);
v_tail_688_ = lean_ctor_get(v_x_685_, 1);
v_isSharedCheck_701_ = !lean_is_exclusive(v_x_685_);
if (v_isSharedCheck_701_ == 0)
{
v___x_690_ = v_x_685_;
v_isShared_691_ = v_isSharedCheck_701_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_tail_688_);
lean_inc(v_head_687_);
lean_dec(v_x_685_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_701_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
if (lean_obj_tag(v_head_687_) == 1)
{
lean_object* v_head_698_; 
v_head_698_ = lean_ctor_get(v_head_687_, 0);
if (lean_obj_tag(v_head_698_) == 6)
{
lean_object* v_tail_699_; 
v_tail_699_ = lean_ctor_get(v_head_687_, 1);
if (lean_obj_tag(v_tail_699_) == 0)
{
if (lean_obj_tag(v_tail_688_) == 0)
{
lean_object* v_a_700_; 
lean_inc_ref(v_head_698_);
lean_dec_ref_known(v_head_687_, 2);
lean_del_object(v___x_690_);
v_a_700_ = lean_ctor_get(v_head_698_, 1);
lean_inc(v_a_700_);
lean_dec_ref_known(v_head_698_, 2);
return v_a_700_;
}
else
{
goto v___jp_692_;
}
}
else
{
goto v___jp_692_;
}
}
else
{
goto v___jp_692_;
}
}
else
{
goto v___jp_692_;
}
v___jp_692_:
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_696_; 
v___x_693_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_tuple_u2081(v_head_687_);
v___x_694_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_alts_u2081Core(v_tail_688_);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 1, v___x_694_);
lean_ctor_set(v___x_690_, 0, v___x_693_);
v___x_696_ = v___x_690_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v___x_693_);
lean_ctor_set(v_reuseFailAlloc_697_, 1, v___x_694_);
v___x_696_ = v_reuseFailAlloc_697_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
return v___x_696_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_alts_u2081(lean_object* v_ref_702_, lean_object* v_x_703_){
_start:
{
lean_object* v_ps_705_; 
if (lean_obj_tag(v_x_703_) == 1)
{
lean_object* v_head_708_; 
v_head_708_ = lean_ctor_get(v_x_703_, 0);
if (lean_obj_tag(v_head_708_) == 0)
{
lean_object* v_tail_709_; 
v_tail_709_ = lean_ctor_get(v_x_703_, 1);
if (lean_obj_tag(v_tail_709_) == 0)
{
lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_717_; 
lean_inc(v_head_708_);
lean_dec(v_ref_702_);
v_isSharedCheck_717_ = !lean_is_exclusive(v_x_703_);
if (v_isSharedCheck_717_ == 0)
{
lean_object* v_unused_718_; lean_object* v_unused_719_; 
v_unused_718_ = lean_ctor_get(v_x_703_, 1);
lean_dec(v_unused_718_);
v_unused_719_ = lean_ctor_get(v_x_703_, 0);
lean_dec(v_unused_719_);
v___x_711_ = v_x_703_;
v_isShared_712_ = v_isSharedCheck_717_;
goto v_resetjp_710_;
}
else
{
lean_dec(v_x_703_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_717_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_713_ = lean_box(0);
if (v_isShared_712_ == 0)
{
lean_ctor_set_tag(v___x_711_, 5);
lean_ctor_set(v___x_711_, 1, v_head_708_);
lean_ctor_set(v___x_711_, 0, v___x_713_);
v___x_715_ = v___x_711_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_716_, 1, v_head_708_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
else
{
v_ps_705_ = v_x_703_;
goto v___jp_704_;
}
}
else
{
lean_object* v_head_720_; 
v_head_720_ = lean_ctor_get(v_head_708_, 0);
lean_inc(v_head_720_);
if (lean_obj_tag(v_head_720_) == 6)
{
lean_object* v_tail_721_; 
v_tail_721_ = lean_ctor_get(v_head_708_, 1);
if (lean_obj_tag(v_tail_721_) == 0)
{
lean_object* v_tail_722_; 
v_tail_722_ = lean_ctor_get(v_x_703_, 1);
if (lean_obj_tag(v_tail_722_) == 0)
{
lean_object* v_ref_723_; lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_731_; 
lean_dec_ref_known(v_x_703_, 2);
lean_dec(v_ref_702_);
v_ref_723_ = lean_ctor_get(v_head_720_, 0);
v_a_724_ = lean_ctor_get(v_head_720_, 1);
v_isSharedCheck_731_ = !lean_is_exclusive(v_head_720_);
if (v_isSharedCheck_731_ == 0)
{
v___x_726_ = v_head_720_;
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_inc(v_ref_723_);
lean_dec(v_head_720_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_729_; 
if (v_isShared_727_ == 0)
{
lean_ctor_set_tag(v___x_726_, 5);
v___x_729_ = v___x_726_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_ref_723_);
lean_ctor_set(v_reuseFailAlloc_730_, 1, v_a_724_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
else
{
lean_dec_ref_known(v_head_720_, 2);
v_ps_705_ = v_x_703_;
goto v___jp_704_;
}
}
else
{
lean_dec_ref_known(v_head_720_, 2);
v_ps_705_ = v_x_703_;
goto v___jp_704_;
}
}
else
{
lean_dec(v_head_720_);
v_ps_705_ = v_x_703_;
goto v___jp_704_;
}
}
}
else
{
v_ps_705_ = v_x_703_;
goto v___jp_704_;
}
v___jp_704_:
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_alts_u2081Core(v_ps_705_);
v___x_707_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_alts_x27(v_ref_702_, v___x_706_);
return v___x_707_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_parenAbove(lean_object* v_tgt_732_, lean_object* v_p_733_, lean_object* v_m_734_){
_start:
{
uint8_t v___x_735_; 
v___x_735_ = lean_nat_dec_lt(v_tgt_732_, v_p_733_);
if (v___x_735_ == 0)
{
return v_m_734_;
}
else
{
lean_object* v___x_736_; 
v___x_736_ = l_Lean_MessageData_paren(v_m_734_);
return v___x_736_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_parenAbove___boxed(lean_object* v_tgt_737_, lean_object* v_p_738_, lean_object* v_m_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_parenAbove(v_tgt_737_, v_p_738_, v_m_739_);
lean_dec(v_p_738_);
lean_dec(v_tgt_737_);
return v_res_740_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__2(void){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__1));
v___x_745_ = l_Lean_MessageData_ofFormat(v___x_744_);
return v___x_745_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__4(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_747_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__3));
v___x_748_ = l_Lean_stringToMessageData(v___x_747_);
return v___x_748_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__6(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__5));
v___x_751_ = l_Lean_stringToMessageData(v___x_750_);
return v___x_751_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__9(void){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_753_ = lean_box(1);
v___x_754_ = l_Lean_MessageData_ofFormat(v___x_753_);
return v___x_754_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__8(void){
_start:
{
lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_755_ = ((lean_object*)(l_List_repr___at___00Lean_Elab_Tactic_RCases_instReprRCasesPatt_repr_spec__0___redArg___closed__4));
v___x_756_ = l_Lean_MessageData_ofFormat(v___x_755_);
return v___x_756_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__10(void){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_757_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__9, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__9_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__9);
v___x_758_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__8, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__8_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__8);
v___x_759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
lean_ctor_set(v___x_759_, 1, v___x_757_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt_spec__1(lean_object* v_a_761_, lean_object* v_a_762_){
_start:
{
if (lean_obj_tag(v_a_761_) == 0)
{
lean_object* v___x_763_; 
v___x_763_ = l_List_reverse___redArg(v_a_762_);
return v___x_763_;
}
else
{
lean_object* v_head_764_; lean_object* v_tail_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_775_; 
v_head_764_ = lean_ctor_get(v_a_761_, 0);
v_tail_765_ = lean_ctor_get(v_a_761_, 1);
v_isSharedCheck_775_ = !lean_is_exclusive(v_a_761_);
if (v_isSharedCheck_775_ == 0)
{
v___x_767_ = v_a_761_;
v_isShared_768_ = v_isSharedCheck_775_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_tail_765_);
lean_inc(v_head_764_);
lean_dec(v_a_761_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_775_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_772_; 
v___x_769_ = lean_unsigned_to_nat(2u);
v___x_770_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt(v___x_769_, v_head_764_);
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 1, v_a_762_);
lean_ctor_set(v___x_767_, 0, v___x_770_);
v___x_772_ = v___x_767_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v___x_770_);
lean_ctor_set(v_reuseFailAlloc_774_, 1, v_a_762_);
v___x_772_ = v_reuseFailAlloc_774_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
v_a_761_ = v_tail_765_;
v_a_762_ = v___x_772_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__14(void){
_start:
{
lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_779_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__13));
v___x_780_ = l_Lean_MessageData_ofFormat(v___x_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt(lean_object* v_a_781_, lean_object* v_a_782_){
_start:
{
switch(lean_obj_tag(v_a_782_))
{
case 0:
{
lean_object* v_a_783_; 
v_a_783_ = lean_ctor_get(v_a_782_, 1);
lean_inc_ref(v_a_783_);
lean_dec_ref_known(v_a_782_, 2);
v_a_782_ = v_a_783_;
goto _start;
}
case 1:
{
lean_object* v_a_785_; lean_object* v___x_786_; 
v_a_785_ = lean_ctor_get(v_a_782_, 1);
lean_inc(v_a_785_);
lean_dec_ref_known(v_a_782_, 2);
v___x_786_ = l_Lean_MessageData_ofName(v_a_785_);
return v___x_786_;
}
case 2:
{
lean_object* v___x_787_; 
lean_dec_ref_known(v_a_782_, 1);
v___x_787_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__2, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__2_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__2);
return v___x_787_;
}
case 3:
{
lean_object* v_a_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_798_; 
v_a_788_ = lean_ctor_get(v_a_782_, 1);
v_isSharedCheck_798_ = !lean_is_exclusive(v_a_782_);
if (v_isSharedCheck_798_ == 0)
{
lean_object* v_unused_799_; 
v_unused_799_ = lean_ctor_get(v_a_782_, 0);
lean_dec(v_unused_799_);
v___x_790_ = v_a_782_;
v_isShared_791_ = v_isSharedCheck_798_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_a_788_);
lean_dec(v_a_782_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_798_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_796_; 
v___x_792_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__4, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__4_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__4);
v___x_793_ = lean_unsigned_to_nat(2u);
v___x_794_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt(v___x_793_, v_a_788_);
if (v_isShared_791_ == 0)
{
lean_ctor_set_tag(v___x_790_, 7);
lean_ctor_set(v___x_790_, 1, v___x_794_);
lean_ctor_set(v___x_790_, 0, v___x_792_);
v___x_796_ = v___x_790_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v___x_792_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v___x_794_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
case 4:
{
lean_object* v_a_800_; lean_object* v_a_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v_a_800_ = lean_ctor_get(v_a_782_, 1);
lean_inc_ref(v_a_800_);
v_a_801_ = lean_ctor_get(v_a_782_, 2);
lean_inc(v_a_801_);
lean_dec_ref_known(v_a_782_, 3);
v___x_802_ = lean_unsigned_to_nat(0u);
v___x_803_ = lean_unsigned_to_nat(1u);
v___x_804_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt(v___x_803_, v_a_800_);
v___x_805_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__6, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__6_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__6);
v___x_806_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_806_, 0, v___x_804_);
lean_ctor_set(v___x_806_, 1, v___x_805_);
v___x_807_ = l_Lean_MessageData_ofSyntax(v_a_801_);
v___x_808_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_808_, 0, v___x_806_);
lean_ctor_set(v___x_808_, 1, v___x_807_);
v___x_809_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_parenAbove(v___x_802_, v_a_781_, v___x_808_);
return v___x_809_;
}
case 5:
{
lean_object* v_a_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v_a_810_ = lean_ctor_get(v_a_782_, 1);
lean_inc(v_a_810_);
lean_dec_ref_known(v_a_782_, 2);
v___x_811_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__7));
v___x_812_ = lean_box(0);
v___x_813_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt_spec__0(v_a_810_, v___x_812_);
v___x_814_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__10, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__10_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__10);
v___x_815_ = l_Lean_MessageData_joinSep(v___x_813_, v___x_814_);
v___x_816_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__11));
v___x_817_ = l_Lean_MessageData_bracket(v___x_811_, v___x_815_, v___x_816_);
return v___x_817_;
}
default: 
{
lean_object* v_a_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
v_a_818_ = lean_ctor_get(v_a_782_, 1);
lean_inc(v_a_818_);
lean_dec_ref_known(v_a_782_, 2);
v___x_819_ = lean_unsigned_to_nat(1u);
v___x_820_ = lean_box(0);
v___x_821_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt_spec__1(v_a_818_, v___x_820_);
v___x_822_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__14, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__14_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__14);
v___x_823_ = l_Lean_MessageData_joinSep(v___x_821_, v___x_822_);
v___x_824_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_parenAbove(v___x_819_, v_a_781_, v___x_823_);
return v___x_824_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt_spec__0(lean_object* v_a_825_, lean_object* v_a_826_){
_start:
{
if (lean_obj_tag(v_a_825_) == 0)
{
lean_object* v___x_827_; 
v___x_827_ = l_List_reverse___redArg(v_a_826_);
return v___x_827_;
}
else
{
lean_object* v_head_828_; lean_object* v_tail_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_839_; 
v_head_828_ = lean_ctor_get(v_a_825_, 0);
v_tail_829_ = lean_ctor_get(v_a_825_, 1);
v_isSharedCheck_839_ = !lean_is_exclusive(v_a_825_);
if (v_isSharedCheck_839_ == 0)
{
v___x_831_ = v_a_825_;
v_isShared_832_ = v_isSharedCheck_839_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_tail_829_);
lean_inc(v_head_828_);
lean_dec(v_a_825_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_839_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_836_; 
v___x_833_ = lean_unsigned_to_nat(0u);
v___x_834_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt(v___x_833_, v_head_828_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 1, v_a_826_);
lean_ctor_set(v___x_831_, 0, v___x_834_);
v___x_836_ = v___x_831_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_834_);
lean_ctor_set(v_reuseFailAlloc_838_, 1, v_a_826_);
v___x_836_ = v_reuseFailAlloc_838_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
v_a_825_ = v_tail_829_;
v_a_826_ = v___x_836_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___boxed(lean_object* v_a_840_, lean_object* v_a_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt(v_a_840_, v_a_841_);
lean_dec(v_a_840_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor(lean_object* v_ref_851_, lean_object* v_info_852_, uint8_t v_explicit_853_, lean_object* v_idx_854_, lean_object* v_ps_855_){
_start:
{
lean_object* v___y_857_; lean_object* v___y_862_; lean_object* v___y_863_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___y_870_; lean_object* v___y_871_; lean_object* v___y_872_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v___x_889_; uint8_t v___x_908_; 
v___x_889_ = lean_array_get_size(v_info_852_);
v___x_908_ = lean_nat_dec_lt(v_idx_854_, v___x_889_);
if (v___x_908_ == 0)
{
lean_object* v___x_909_; 
lean_dec(v_ps_855_);
lean_dec(v_ref_851_);
v___x_909_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor___closed__1));
return v___x_909_;
}
else
{
if (v_explicit_853_ == 0)
{
lean_object* v___x_910_; uint8_t v_binderInfo_911_; uint8_t v___x_912_; uint8_t v___x_913_; 
v___x_910_ = lean_array_fget_borrowed(v_info_852_, v_idx_854_);
v_binderInfo_911_ = lean_ctor_get_uint8(v___x_910_, sizeof(void*)*1);
v___x_912_ = 0;
v___x_913_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_911_, v___x_912_);
if (v___x_913_ == 0)
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v_fst_917_; lean_object* v_snd_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_929_; 
v___x_914_ = lean_unsigned_to_nat(1u);
v___x_915_ = lean_nat_add(v_idx_854_, v___x_914_);
v___x_916_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor(v_ref_851_, v_info_852_, v_explicit_853_, v___x_915_, v_ps_855_);
lean_dec(v___x_915_);
v_fst_917_ = lean_ctor_get(v___x_916_, 0);
v_snd_918_ = lean_ctor_get(v___x_916_, 1);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_929_ == 0)
{
v___x_920_ = v___x_916_;
v_isShared_921_ = v_isSharedCheck_929_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_snd_918_);
lean_inc(v_fst_917_);
lean_dec(v___x_916_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_929_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_927_; 
v___x_922_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__1));
v___x_923_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_922_);
lean_ctor_set(v___x_923_, 1, v_fst_917_);
v___x_924_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__2));
v___x_925_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_925_, 0, v___x_924_);
lean_ctor_set(v___x_925_, 1, v_snd_918_);
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 1, v___x_925_);
lean_ctor_set(v___x_920_, 0, v___x_923_);
v___x_927_ = v___x_920_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_923_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v___x_925_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
else
{
goto v___jp_890_;
}
}
else
{
goto v___jp_890_;
}
}
v___jp_856_:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_858_ = lean_box(0);
v___x_859_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_859_, 0, v___y_857_);
lean_ctor_set(v___x_859_, 1, v___x_858_);
v___x_860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_860_, 0, v___x_859_);
lean_ctor_set(v___x_860_, 1, v_ps_855_);
return v___x_860_;
}
v___jp_861_:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_866_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_866_, 0, v___y_865_);
lean_ctor_set(v___x_866_, 1, v___y_864_);
v___x_867_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_867_, 0, v___y_863_);
lean_ctor_set(v___x_867_, 1, v___y_862_);
v___x_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_866_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
return v___x_868_;
}
v___jp_869_:
{
lean_object* v___x_873_; lean_object* v_fst_874_; lean_object* v_snd_875_; lean_object* v___x_876_; 
v___x_873_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor(v_ref_851_, v_info_852_, v_explicit_853_, v___y_871_, v___y_872_);
lean_dec(v___y_871_);
v_fst_874_ = lean_ctor_get(v___x_873_, 0);
lean_inc(v_fst_874_);
v_snd_875_ = lean_ctor_get(v___x_873_, 1);
lean_inc(v_snd_875_);
lean_dec_ref(v___x_873_);
v___x_876_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_name_x3f(v___y_870_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v___x_877_; 
v___x_877_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__1));
v___y_862_ = v_snd_875_;
v___y_863_ = v___y_870_;
v___y_864_ = v_fst_874_;
v___y_865_ = v___x_877_;
goto v___jp_861_;
}
else
{
lean_object* v_val_878_; 
v_val_878_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_val_878_);
lean_dec_ref_known(v___x_876_, 1);
v___y_862_ = v_snd_875_;
v___y_863_ = v___y_870_;
v___y_864_ = v_fst_874_;
v___y_865_ = v_val_878_;
goto v___jp_861_;
}
}
v___jp_879_:
{
if (lean_obj_tag(v_ps_855_) == 0)
{
v___y_870_ = v___y_881_;
v___y_871_ = v___y_880_;
v___y_872_ = v_ps_855_;
goto v___jp_869_;
}
else
{
lean_object* v_tail_882_; 
v_tail_882_ = lean_ctor_get(v_ps_855_, 1);
lean_inc(v_tail_882_);
lean_dec_ref_known(v_ps_855_, 2);
v___y_870_ = v___y_881_;
v___y_871_ = v___y_880_;
v___y_872_ = v_tail_882_;
goto v___jp_869_;
}
}
v___jp_883_:
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_886_ = lean_box(0);
v___x_887_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_887_, 0, v___y_885_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
lean_inc(v___y_884_);
v___x_888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_888_, 0, v___y_884_);
lean_ctor_set(v___x_888_, 1, v___x_887_);
return v___x_888_;
}
v___jp_890_:
{
lean_object* v___x_891_; lean_object* v___x_892_; uint8_t v___x_893_; 
v___x_891_ = lean_unsigned_to_nat(1u);
v___x_892_ = lean_nat_add(v_idx_854_, v___x_891_);
v___x_893_ = lean_nat_dec_lt(v___x_892_, v___x_889_);
if (v___x_893_ == 0)
{
lean_dec(v___x_892_);
if (lean_obj_tag(v_ps_855_) == 0)
{
lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
lean_dec(v_ref_851_);
v___x_894_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor___closed__0));
v___x_895_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__2));
v___x_896_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_896_, 0, v___x_895_);
lean_ctor_set(v___x_896_, 1, v_ps_855_);
v___x_897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_897_, 0, v___x_894_);
lean_ctor_set(v___x_897_, 1, v___x_896_);
return v___x_897_;
}
else
{
lean_object* v_tail_898_; 
v_tail_898_ = lean_ctor_get(v_ps_855_, 1);
if (lean_obj_tag(v_tail_898_) == 0)
{
lean_object* v_head_899_; lean_object* v___x_900_; 
lean_dec(v_ref_851_);
v_head_899_ = lean_ctor_get(v_ps_855_, 0);
v___x_900_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_name_x3f(v_head_899_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v___x_901_; 
v___x_901_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__1));
v___y_857_ = v___x_901_;
goto v___jp_856_;
}
else
{
lean_object* v_val_902_; 
v_val_902_ = lean_ctor_get(v___x_900_, 0);
lean_inc(v_val_902_);
lean_dec_ref_known(v___x_900_, 1);
v___y_857_ = v_val_902_;
goto v___jp_856_;
}
}
else
{
lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_903_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor___closed__0));
lean_inc(v_ref_851_);
v___x_904_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_904_, 0, v_ref_851_);
lean_ctor_set(v___x_904_, 1, v_ps_855_);
if (v_explicit_853_ == 0)
{
lean_dec(v_ref_851_);
v___y_884_ = v___x_903_;
v___y_885_ = v___x_904_;
goto v___jp_883_;
}
else
{
lean_object* v___x_905_; 
v___x_905_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_905_, 0, v_ref_851_);
lean_ctor_set(v___x_905_, 1, v___x_904_);
v___y_884_ = v___x_903_;
v___y_885_ = v___x_905_;
goto v___jp_883_;
}
}
}
}
else
{
if (lean_obj_tag(v_ps_855_) == 0)
{
lean_object* v___x_906_; 
v___x_906_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__2));
v___y_880_ = v___x_892_;
v___y_881_ = v___x_906_;
goto v___jp_879_;
}
else
{
lean_object* v_head_907_; 
v_head_907_ = lean_ctor_get(v_ps_855_, 0);
lean_inc(v_head_907_);
v___y_880_ = v___x_892_;
v___y_881_ = v_head_907_;
goto v___jp_879_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor___boxed(lean_object* v_ref_930_, lean_object* v_info_931_, lean_object* v_explicit_932_, lean_object* v_idx_933_, lean_object* v_ps_934_){
_start:
{
uint8_t v_explicit_boxed_935_; lean_object* v_res_936_; 
v_explicit_boxed_935_ = lean_unbox(v_explicit_932_);
v_res_936_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor(v_ref_930_, v_info_931_, v_explicit_boxed_935_, v_idx_933_, v_ps_934_);
lean_dec(v_idx_933_);
lean_dec_ref(v_info_931_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor_match__1_splitter___redArg(lean_object* v_x_937_, lean_object* v_h__1_938_){
_start:
{
lean_object* v_fst_939_; lean_object* v_snd_940_; lean_object* v___x_941_; 
v_fst_939_ = lean_ctor_get(v_x_937_, 0);
lean_inc(v_fst_939_);
v_snd_940_ = lean_ctor_get(v_x_937_, 1);
lean_inc(v_snd_940_);
lean_dec_ref(v_x_937_);
v___x_941_ = lean_apply_2(v_h__1_938_, v_fst_939_, v_snd_940_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor_match__1_splitter(lean_object* v_motive_942_, lean_object* v_x_943_, lean_object* v_h__1_944_){
_start:
{
lean_object* v_fst_945_; lean_object* v_snd_946_; lean_object* v___x_947_; 
v_fst_945_ = lean_ctor_get(v_x_943_, 0);
lean_inc(v_fst_945_);
v_snd_946_ = lean_ctor_get(v_x_943_, 1);
lean_inc(v_snd_946_);
lean_dec_ref(v_x_943_);
v___x_947_ = lean_apply_2(v_h__1_944_, v_fst_945_, v_snd_946_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor_match__3_splitter___redArg(lean_object* v_ps_948_, lean_object* v_h__1_949_, lean_object* v_h__2_950_, lean_object* v_h__3_951_){
_start:
{
if (lean_obj_tag(v_ps_948_) == 0)
{
lean_object* v___x_952_; lean_object* v___x_953_; 
lean_dec(v_h__3_951_);
lean_dec(v_h__2_950_);
v___x_952_ = lean_box(0);
v___x_953_ = lean_apply_1(v_h__1_949_, v___x_952_);
return v___x_953_;
}
else
{
lean_object* v_tail_954_; 
lean_dec(v_h__1_949_);
v_tail_954_ = lean_ctor_get(v_ps_948_, 1);
if (lean_obj_tag(v_tail_954_) == 0)
{
lean_object* v_head_955_; lean_object* v___x_956_; 
lean_dec(v_h__3_951_);
v_head_955_ = lean_ctor_get(v_ps_948_, 0);
lean_inc(v_head_955_);
lean_dec_ref_known(v_ps_948_, 2);
v___x_956_ = lean_apply_1(v_h__2_950_, v_head_955_);
return v___x_956_;
}
else
{
lean_object* v___x_957_; 
lean_dec(v_h__2_950_);
v___x_957_ = lean_apply_3(v_h__3_951_, v_ps_948_, lean_box(0), lean_box(0));
return v___x_957_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor_match__3_splitter(lean_object* v_motive_958_, lean_object* v_ps_959_, lean_object* v_h__1_960_, lean_object* v_h__2_961_, lean_object* v_h__3_962_){
_start:
{
if (lean_obj_tag(v_ps_959_) == 0)
{
lean_object* v___x_963_; lean_object* v___x_964_; 
lean_dec(v_h__3_962_);
lean_dec(v_h__2_961_);
v___x_963_ = lean_box(0);
v___x_964_ = lean_apply_1(v_h__1_960_, v___x_963_);
return v___x_964_;
}
else
{
lean_object* v_tail_965_; 
lean_dec(v_h__1_960_);
v_tail_965_ = lean_ctor_get(v_ps_959_, 1);
if (lean_obj_tag(v_tail_965_) == 0)
{
lean_object* v_head_966_; lean_object* v___x_967_; 
lean_dec(v_h__3_962_);
v_head_966_ = lean_ctor_get(v_ps_959_, 0);
lean_inc(v_head_966_);
lean_dec_ref_known(v_ps_959_, 2);
v___x_967_ = lean_apply_1(v_h__2_961_, v_head_966_);
return v___x_967_;
}
else
{
lean_object* v___x_968_; 
lean_dec(v_h__2_961_);
v___x_968_ = lean_apply_3(v_h__3_962_, v_ps_959_, lean_box(0), lean_box(0));
return v___x_968_;
}
}
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_969_; 
v___x_969_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_969_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__0);
v___x_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
return v___x_971_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_972_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_973_ = lean_unsigned_to_nat(0u);
v___x_974_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_974_, 0, v___x_973_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
lean_ctor_set(v___x_974_, 2, v___x_973_);
lean_ctor_set(v___x_974_, 3, v___x_973_);
lean_ctor_set(v___x_974_, 4, v___x_972_);
lean_ctor_set(v___x_974_, 5, v___x_972_);
lean_ctor_set(v___x_974_, 6, v___x_972_);
lean_ctor_set(v___x_974_, 7, v___x_972_);
lean_ctor_set(v___x_974_, 8, v___x_972_);
lean_ctor_set(v___x_974_, 9, v___x_972_);
lean_ctor_set(v___x_974_, 10, v___x_972_);
return v___x_974_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_975_ = lean_unsigned_to_nat(32u);
v___x_976_ = lean_mk_empty_array_with_capacity(v___x_975_);
v___x_977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_977_, 0, v___x_976_);
return v___x_977_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__4(void){
_start:
{
size_t v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_978_ = ((size_t)5ULL);
v___x_979_ = lean_unsigned_to_nat(0u);
v___x_980_ = lean_unsigned_to_nat(32u);
v___x_981_ = lean_mk_empty_array_with_capacity(v___x_980_);
v___x_982_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_983_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_983_, 0, v___x_982_);
lean_ctor_set(v___x_983_, 1, v___x_981_);
lean_ctor_set(v___x_983_, 2, v___x_979_);
lean_ctor_set(v___x_983_, 3, v___x_979_);
lean_ctor_set_usize(v___x_983_, 4, v___x_978_);
return v___x_983_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_984_ = lean_box(1);
v___x_985_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__4);
v___x_986_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_987_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
lean_ctor_set(v___x_987_, 1, v___x_985_);
lean_ctor_set(v___x_987_, 2, v___x_984_);
return v___x_987_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__7(void){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__6));
v___x_990_ = l_Lean_stringToMessageData(v___x_989_);
return v___x_990_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__9(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__8));
v___x_993_ = l_Lean_stringToMessageData(v___x_992_);
return v___x_993_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__11(void){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__10));
v___x_996_ = l_Lean_stringToMessageData(v___x_995_);
return v___x_996_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__13(void){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_998_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__12));
v___x_999_ = l_Lean_stringToMessageData(v___x_998_);
return v___x_999_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__15(void){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1001_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__14));
v___x_1002_ = l_Lean_stringToMessageData(v___x_1001_);
return v___x_1002_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__17(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__16));
v___x_1005_ = l_Lean_stringToMessageData(v___x_1004_);
return v___x_1005_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__19(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__18));
v___x_1008_ = l_Lean_stringToMessageData(v___x_1007_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_msg_1009_, lean_object* v_declHint_1010_, lean_object* v___y_1011_){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v_env_1015_; uint8_t v___x_1016_; 
v___x_1013_ = lean_box(0);
v___x_1014_ = lean_st_ref_get(v___y_1011_);
v_env_1015_ = lean_ctor_get(v___x_1014_, 0);
lean_inc_ref(v_env_1015_);
lean_dec(v___x_1014_);
v___x_1016_ = l_Lean_Name_isAnonymous(v_declHint_1010_);
if (v___x_1016_ == 0)
{
uint8_t v_isExporting_1017_; 
v_isExporting_1017_ = lean_ctor_get_uint8(v_env_1015_, sizeof(void*)*8);
if (v_isExporting_1017_ == 0)
{
lean_object* v___x_1018_; 
lean_dec_ref(v_env_1015_);
lean_dec(v_declHint_1010_);
v___x_1018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1018_, 0, v_msg_1009_);
return v___x_1018_;
}
else
{
lean_object* v___x_1019_; uint8_t v___x_1020_; 
lean_inc_ref(v_env_1015_);
v___x_1019_ = l_Lean_Environment_setExporting(v_env_1015_, v___x_1016_);
lean_inc(v_declHint_1010_);
lean_inc_ref(v___x_1019_);
v___x_1020_ = l_Lean_Environment_contains(v___x_1019_, v_declHint_1010_, v_isExporting_1017_);
if (v___x_1020_ == 0)
{
lean_object* v___x_1021_; 
lean_dec_ref(v___x_1019_);
lean_dec_ref(v_env_1015_);
lean_dec(v_declHint_1010_);
v___x_1021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1021_, 0, v_msg_1009_);
return v___x_1021_;
}
else
{
lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v_c_1027_; lean_object* v___x_1028_; 
v___x_1022_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__2);
v___x_1023_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__5);
v___x_1024_ = l_Lean_Options_empty;
v___x_1025_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1019_);
lean_ctor_set(v___x_1025_, 1, v___x_1022_);
lean_ctor_set(v___x_1025_, 2, v___x_1023_);
lean_ctor_set(v___x_1025_, 3, v___x_1024_);
lean_inc(v_declHint_1010_);
v___x_1026_ = l_Lean_MessageData_ofConstName(v_declHint_1010_, v___x_1016_);
v_c_1027_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1027_, 0, v___x_1025_);
lean_ctor_set(v_c_1027_, 1, v___x_1026_);
v___x_1028_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1015_, v_declHint_1010_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
lean_dec_ref(v_env_1015_);
lean_dec(v_declHint_1010_);
v___x_1029_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__7);
v___x_1030_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1029_);
lean_ctor_set(v___x_1030_, 1, v_c_1027_);
v___x_1031_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__9);
v___x_1032_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1030_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
v___x_1033_ = l_Lean_MessageData_note(v___x_1032_);
v___x_1034_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1034_, 0, v_msg_1009_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
v___x_1035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1034_);
return v___x_1035_;
}
else
{
lean_object* v_val_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1070_; 
v_val_1036_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1038_ = v___x_1028_;
v_isShared_1039_ = v_isSharedCheck_1070_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_val_1036_);
lean_dec(v___x_1028_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1070_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v_mod_1042_; uint8_t v___x_1043_; 
v___x_1040_ = l_Lean_Environment_header(v_env_1015_);
lean_dec_ref(v_env_1015_);
v___x_1041_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1040_);
v_mod_1042_ = lean_array_get(v___x_1013_, v___x_1041_, v_val_1036_);
lean_dec(v_val_1036_);
lean_dec_ref(v___x_1041_);
v___x_1043_ = l_Lean_isPrivateName(v_declHint_1010_);
lean_dec(v_declHint_1010_);
if (v___x_1043_ == 0)
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1055_; 
v___x_1044_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__11);
v___x_1045_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1044_);
lean_ctor_set(v___x_1045_, 1, v_c_1027_);
v___x_1046_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__13);
v___x_1047_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1045_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
v___x_1048_ = l_Lean_MessageData_ofName(v_mod_1042_);
v___x_1049_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1047_);
lean_ctor_set(v___x_1049_, 1, v___x_1048_);
v___x_1050_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__15);
v___x_1051_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1049_);
lean_ctor_set(v___x_1051_, 1, v___x_1050_);
v___x_1052_ = l_Lean_MessageData_note(v___x_1051_);
v___x_1053_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1053_, 0, v_msg_1009_);
lean_ctor_set(v___x_1053_, 1, v___x_1052_);
if (v_isShared_1039_ == 0)
{
lean_ctor_set_tag(v___x_1038_, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1053_);
v___x_1055_ = v___x_1038_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v___x_1053_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
else
{
lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1068_; 
v___x_1057_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__7);
v___x_1058_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
lean_ctor_set(v___x_1058_, 1, v_c_1027_);
v___x_1059_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__17);
v___x_1060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1058_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
v___x_1061_ = l_Lean_MessageData_ofName(v_mod_1042_);
v___x_1062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1060_);
lean_ctor_set(v___x_1062_, 1, v___x_1061_);
v___x_1063_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___closed__19);
v___x_1064_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1062_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
v___x_1065_ = l_Lean_MessageData_note(v___x_1064_);
v___x_1066_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1066_, 0, v_msg_1009_);
lean_ctor_set(v___x_1066_, 1, v___x_1065_);
if (v_isShared_1039_ == 0)
{
lean_ctor_set_tag(v___x_1038_, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1066_);
v___x_1068_ = v___x_1038_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v___x_1066_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1071_; 
lean_dec_ref(v_env_1015_);
lean_dec(v_declHint_1010_);
v___x_1071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1071_, 0, v_msg_1009_);
return v___x_1071_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_msg_1072_, lean_object* v_declHint_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg(v_msg_1072_, v_declHint_1073_, v___y_1074_);
lean_dec(v___y_1074_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5(lean_object* v_msg_1077_, lean_object* v_declHint_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
lean_object* v___x_1084_; lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1094_; 
v___x_1084_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg(v_msg_1077_, v_declHint_1078_, v___y_1082_);
v_a_1085_ = lean_ctor_get(v___x_1084_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1084_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1087_ = v___x_1084_;
v_isShared_1088_ = v_isSharedCheck_1094_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___x_1084_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1094_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1092_; 
v___x_1089_ = l_Lean_unknownIdentifierMessageTag;
v___x_1090_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
lean_ctor_set(v___x_1090_, 1, v_a_1085_);
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 0, v___x_1090_);
v___x_1092_ = v___x_1087_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v___x_1090_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5___boxed(lean_object* v_msg_1095_, lean_object* v_declHint_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5(v_msg_1095_, v_declHint_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8_spec__9(lean_object* v_msgData_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_){
_start:
{
lean_object* v___x_1109_; lean_object* v_env_1110_; lean_object* v___x_1111_; lean_object* v_toCold_1112_; lean_object* v_mctx_1113_; lean_object* v_lctx_1114_; lean_object* v_options_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1109_ = lean_st_ref_get(v___y_1107_);
v_env_1110_ = lean_ctor_get(v___x_1109_, 0);
lean_inc_ref(v_env_1110_);
lean_dec(v___x_1109_);
v___x_1111_ = lean_st_ref_get(v___y_1105_);
v_toCold_1112_ = lean_ctor_get(v___y_1106_, 0);
v_mctx_1113_ = lean_ctor_get(v___x_1111_, 0);
lean_inc_ref(v_mctx_1113_);
lean_dec(v___x_1111_);
v_lctx_1114_ = lean_ctor_get(v___y_1104_, 2);
v_options_1115_ = lean_ctor_get(v_toCold_1112_, 2);
lean_inc_ref(v_options_1115_);
lean_inc_ref(v_lctx_1114_);
v___x_1116_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1116_, 0, v_env_1110_);
lean_ctor_set(v___x_1116_, 1, v_mctx_1113_);
lean_ctor_set(v___x_1116_, 2, v_lctx_1114_);
lean_ctor_set(v___x_1116_, 3, v_options_1115_);
v___x_1117_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1117_, 0, v___x_1116_);
lean_ctor_set(v___x_1117_, 1, v_msgData_1103_);
v___x_1118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8_spec__9___boxed(lean_object* v_msgData_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8_spec__9(v_msgData_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
lean_dec(v___y_1121_);
lean_dec_ref(v___y_1120_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8___redArg(lean_object* v_msg_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v_ref_1132_; lean_object* v___x_1133_; lean_object* v_a_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1142_; 
v_ref_1132_ = lean_ctor_get(v___y_1129_, 2);
v___x_1133_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8_spec__9(v_msg_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_);
v_a_1134_ = lean_ctor_get(v___x_1133_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1136_ = v___x_1133_;
v_isShared_1137_ = v_isSharedCheck_1142_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_a_1134_);
lean_dec(v___x_1133_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1142_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1138_; lean_object* v___x_1140_; 
lean_inc(v_ref_1132_);
v___x_1138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1138_, 0, v_ref_1132_);
lean_ctor_set(v___x_1138_, 1, v_a_1134_);
if (v_isShared_1137_ == 0)
{
lean_ctor_set_tag(v___x_1136_, 1);
lean_ctor_set(v___x_1136_, 0, v___x_1138_);
v___x_1140_ = v___x_1136_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v___x_1138_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8___redArg___boxed(lean_object* v_msg_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8___redArg(v_msg_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_);
lean_dec(v___y_1147_);
lean_dec_ref(v___y_1146_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(lean_object* v_ref_1150_, lean_object* v_msg_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_){
_start:
{
lean_object* v_toCold_1157_; lean_object* v_currRecDepth_1158_; lean_object* v_ref_1159_; uint8_t v_diag_1160_; uint8_t v_suppressElabErrors_1161_; lean_object* v_ref_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
v_toCold_1157_ = lean_ctor_get(v___y_1154_, 0);
v_currRecDepth_1158_ = lean_ctor_get(v___y_1154_, 1);
v_ref_1159_ = lean_ctor_get(v___y_1154_, 2);
v_diag_1160_ = lean_ctor_get_uint8(v___y_1154_, sizeof(void*)*3);
v_suppressElabErrors_1161_ = lean_ctor_get_uint8(v___y_1154_, sizeof(void*)*3 + 1);
v_ref_1162_ = l_Lean_replaceRef(v_ref_1150_, v_ref_1159_);
lean_inc(v_currRecDepth_1158_);
lean_inc_ref(v_toCold_1157_);
v___x_1163_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1163_, 0, v_toCold_1157_);
lean_ctor_set(v___x_1163_, 1, v_currRecDepth_1158_);
lean_ctor_set(v___x_1163_, 2, v_ref_1162_);
lean_ctor_set_uint8(v___x_1163_, sizeof(void*)*3, v_diag_1160_);
lean_ctor_set_uint8(v___x_1163_, sizeof(void*)*3 + 1, v_suppressElabErrors_1161_);
v___x_1164_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8___redArg(v_msg_1151_, v___y_1152_, v___y_1153_, v___x_1163_, v___y_1155_);
lean_dec_ref_known(v___x_1163_, 3);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_ref_1165_, lean_object* v_msg_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(v_ref_1165_, v_msg_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_);
lean_dec(v___y_1170_);
lean_dec_ref(v___y_1169_);
lean_dec(v___y_1168_);
lean_dec_ref(v___y_1167_);
lean_dec(v_ref_1165_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_ref_1173_, lean_object* v_msg_1174_, lean_object* v_declHint_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v___x_1181_; lean_object* v_a_1182_; lean_object* v___x_1183_; 
v___x_1181_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5(v_msg_1174_, v_declHint_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_);
v_a_1182_ = lean_ctor_get(v___x_1181_, 0);
lean_inc(v_a_1182_);
lean_dec_ref(v___x_1181_);
v___x_1183_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(v_ref_1173_, v_a_1182_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_ref_1184_, lean_object* v_msg_1185_, lean_object* v_declHint_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1184_, v_msg_1185_, v_declHint_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
lean_dec(v_ref_1184_);
return v_res_1192_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__0));
v___x_1195_ = l_Lean_stringToMessageData(v___x_1194_);
return v___x_1195_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__2));
v___x_1198_ = l_Lean_stringToMessageData(v___x_1197_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_ref_1199_, lean_object* v_constName_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v___x_1206_; uint8_t v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1206_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__1);
v___x_1207_ = 0;
lean_inc(v_constName_1200_);
v___x_1208_ = l_Lean_MessageData_ofConstName(v_constName_1200_, v___x_1207_);
v___x_1209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1206_);
lean_ctor_set(v___x_1209_, 1, v___x_1208_);
v___x_1210_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___closed__3);
v___x_1211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1209_);
lean_ctor_set(v___x_1211_, 1, v___x_1210_);
v___x_1212_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1199_, v___x_1211_, v_constName_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_ref_1213_, lean_object* v_constName_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_){
_start:
{
lean_object* v_res_1220_; 
v_res_1220_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1213_, v_constName_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
lean_dec(v_ref_1213_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1___redArg(lean_object* v_constName_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v_ref_1227_; lean_object* v___x_1228_; 
v_ref_1227_ = lean_ctor_get(v___y_1224_, 2);
v___x_1228_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1227_, v_constName_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_);
return v___x_1228_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_constName_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1___redArg(v_constName_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
lean_dec(v___y_1233_);
lean_dec_ref(v___y_1232_);
lean_dec(v___y_1231_);
lean_dec_ref(v___y_1230_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0(lean_object* v_constName_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v___x_1242_; lean_object* v_env_1243_; uint8_t v___x_1244_; lean_object* v___x_1245_; 
v___x_1242_ = lean_st_ref_get(v___y_1240_);
v_env_1243_ = lean_ctor_get(v___x_1242_, 0);
lean_inc_ref(v_env_1243_);
lean_dec(v___x_1242_);
v___x_1244_ = 0;
lean_inc(v_constName_1236_);
v___x_1245_ = l_Lean_Environment_findConstVal_x3f(v_env_1243_, v_constName_1236_, v___x_1244_);
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v___x_1246_; 
v___x_1246_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1___redArg(v_constName_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_);
return v___x_1246_;
}
else
{
lean_object* v_val_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
lean_dec(v_constName_1236_);
v_val_1247_ = lean_ctor_get(v___x_1245_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1245_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1245_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_val_1247_);
lean_dec(v___x_1245_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
lean_ctor_set_tag(v___x_1249_, 0);
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_val_1247_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0___boxed(lean_object* v_constName_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0(v_constName_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_);
lean_dec(v___y_1259_);
lean_dec_ref(v___y_1258_);
lean_dec(v___y_1257_);
lean_dec_ref(v___y_1256_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__1(lean_object* v_a_1262_, lean_object* v_a_1263_){
_start:
{
if (lean_obj_tag(v_a_1262_) == 0)
{
lean_object* v___x_1264_; 
v___x_1264_ = l_List_reverse___redArg(v_a_1263_);
return v___x_1264_;
}
else
{
lean_object* v_head_1265_; lean_object* v_tail_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1275_; 
v_head_1265_ = lean_ctor_get(v_a_1262_, 0);
v_tail_1266_ = lean_ctor_get(v_a_1262_, 1);
v_isSharedCheck_1275_ = !lean_is_exclusive(v_a_1262_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1268_ = v_a_1262_;
v_isShared_1269_ = v_isSharedCheck_1275_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_tail_1266_);
lean_inc(v_head_1265_);
lean_dec(v_a_1262_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1275_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1270_; lean_object* v___x_1272_; 
v___x_1270_ = l_Lean_mkLevelParam(v_head_1265_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 1, v_a_1263_);
lean_ctor_set(v___x_1268_, 0, v___x_1270_);
v___x_1272_ = v___x_1268_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v___x_1270_);
lean_ctor_set(v_reuseFailAlloc_1274_, 1, v_a_1263_);
v___x_1272_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
v_a_1262_ = v_tail_1266_;
v_a_1263_ = v___x_1272_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0(lean_object* v_constName_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v___x_1282_; 
lean_inc(v_constName_1276_);
v___x_1282_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0(v_constName_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1294_; 
v_a_1283_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1285_ = v___x_1282_;
v_isShared_1286_ = v_isSharedCheck_1294_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1282_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1294_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v_levelParams_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1292_; 
v_levelParams_1287_ = lean_ctor_get(v_a_1283_, 1);
lean_inc(v_levelParams_1287_);
lean_dec(v_a_1283_);
v___x_1288_ = lean_box(0);
v___x_1289_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__1(v_levelParams_1287_, v___x_1288_);
v___x_1290_ = l_Lean_mkConst(v_constName_1276_, v___x_1289_);
if (v_isShared_1286_ == 0)
{
lean_ctor_set(v___x_1285_, 0, v___x_1290_);
v___x_1292_ = v___x_1285_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v___x_1290_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
else
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1302_; 
lean_dec(v_constName_1276_);
v_a_1295_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1297_ = v___x_1282_;
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1282_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0___boxed(lean_object* v_constName_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_){
_start:
{
lean_object* v_res_1309_; 
v_res_1309_ = l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0(v_constName_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
lean_dec(v___y_1305_);
lean_dec_ref(v___y_1304_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors(lean_object* v_ref_1310_, lean_object* v_params_1311_, lean_object* v_altVarNames_1312_, lean_object* v_x_1313_, lean_object* v_x_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_){
_start:
{
if (lean_obj_tag(v_x_1313_) == 0)
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
lean_dec(v_x_1314_);
lean_dec(v_ref_1310_);
v___x_1320_ = lean_box(0);
v___x_1321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1321_, 0, v_altVarNames_1312_);
lean_ctor_set(v___x_1321_, 1, v___x_1320_);
v___x_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1321_);
return v___x_1322_;
}
else
{
lean_object* v_head_1323_; lean_object* v_tail_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1430_; 
v_head_1323_ = lean_ctor_get(v_x_1313_, 0);
v_tail_1324_ = lean_ctor_get(v_x_1313_, 1);
v_isSharedCheck_1430_ = !lean_is_exclusive(v_x_1313_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1326_ = v_x_1313_;
v_isShared_1327_ = v_isSharedCheck_1430_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_tail_1324_);
lean_inc(v_head_1323_);
lean_dec(v_x_1313_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1430_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1328_; 
lean_inc(v_head_1323_);
v___x_1328_ = l_Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0(v_head_1323_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1329_);
lean_dec_ref_known(v___x_1328_, 1);
v___x_1330_ = lean_box(0);
v___x_1331_ = l_Lean_Meta_getFunInfo(v_a_1329_, v___x_1330_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_object* v_a_1332_; lean_object* v_paramInfo_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1412_; 
v_a_1332_ = lean_ctor_get(v___x_1331_, 0);
lean_inc(v_a_1332_);
lean_dec_ref_known(v___x_1331_, 1);
v_paramInfo_1333_ = lean_ctor_get(v_a_1332_, 0);
v_isSharedCheck_1412_ = !lean_is_exclusive(v_a_1332_);
if (v_isSharedCheck_1412_ == 0)
{
lean_object* v_unused_1413_; 
v_unused_1413_ = lean_ctor_get(v_a_1332_, 1);
lean_dec(v_unused_1413_);
v___x_1335_ = v_a_1332_;
v_isShared_1336_ = v_isSharedCheck_1412_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_paramInfo_1333_);
lean_dec(v_a_1332_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1412_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___y_1338_; uint8_t v___y_1339_; lean_object* v___y_1340_; lean_object* v___y_1341_; lean_object* v___y_1377_; uint8_t v_fst_1378_; lean_object* v_snd_1379_; lean_object* v_snd_1380_; lean_object* v___y_1383_; lean_object* v___y_1384_; lean_object* v___y_1390_; lean_object* v___y_1391_; lean_object* v___y_1392_; lean_object* v___y_1407_; 
if (lean_obj_tag(v_x_1314_) == 0)
{
lean_object* v___x_1410_; 
v___x_1410_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__2));
v___y_1407_ = v___x_1410_;
goto v___jp_1406_;
}
else
{
lean_object* v_head_1411_; 
v_head_1411_ = lean_ctor_get(v_x_1314_, 0);
lean_inc(v_head_1411_);
v___y_1407_ = v_head_1411_;
goto v___jp_1406_;
}
v___jp_1337_:
{
lean_object* v___x_1342_; lean_object* v_fst_1343_; lean_object* v_snd_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1375_; 
v___x_1342_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor(v___y_1341_, v_paramInfo_1333_, v___y_1339_, v_params_1311_, v___y_1340_);
lean_dec_ref(v_paramInfo_1333_);
v_fst_1343_ = lean_ctor_get(v___x_1342_, 0);
v_snd_1344_ = lean_ctor_get(v___x_1342_, 1);
v_isSharedCheck_1375_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1346_ = v___x_1342_;
v_isShared_1347_ = v_isSharedCheck_1375_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_snd_1344_);
lean_inc(v_fst_1343_);
lean_dec(v___x_1342_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1375_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
uint8_t v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___x_1348_ = 1;
v___x_1349_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1349_, 0, v_fst_1343_);
lean_ctor_set_uint8(v___x_1349_, sizeof(void*)*1, v___x_1348_);
v___x_1350_ = lean_array_push(v_altVarNames_1312_, v___x_1349_);
v___x_1351_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors(v_ref_1310_, v_params_1311_, v___x_1350_, v_tail_1324_, v___y_1338_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_);
if (lean_obj_tag(v___x_1351_) == 0)
{
lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1374_; 
v_a_1352_ = lean_ctor_get(v___x_1351_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1351_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1354_ = v___x_1351_;
v_isShared_1355_ = v_isSharedCheck_1374_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_dec(v___x_1351_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1374_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v_fst_1356_; lean_object* v_snd_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1373_; 
v_fst_1356_ = lean_ctor_get(v_a_1352_, 0);
v_snd_1357_ = lean_ctor_get(v_a_1352_, 1);
v_isSharedCheck_1373_ = !lean_is_exclusive(v_a_1352_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1359_ = v_a_1352_;
v_isShared_1360_ = v_isSharedCheck_1373_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_snd_1357_);
lean_inc(v_fst_1356_);
lean_dec(v_a_1352_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1373_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1362_; 
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 1, v_snd_1344_);
lean_ctor_set(v___x_1359_, 0, v_head_1323_);
v___x_1362_ = v___x_1359_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_head_1323_);
lean_ctor_set(v_reuseFailAlloc_1372_, 1, v_snd_1344_);
v___x_1362_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
lean_object* v___x_1364_; 
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 1, v_snd_1357_);
lean_ctor_set(v___x_1326_, 0, v___x_1362_);
v___x_1364_ = v___x_1326_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v___x_1362_);
lean_ctor_set(v_reuseFailAlloc_1371_, 1, v_snd_1357_);
v___x_1364_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
lean_object* v___x_1366_; 
if (v_isShared_1347_ == 0)
{
lean_ctor_set(v___x_1346_, 1, v___x_1364_);
lean_ctor_set(v___x_1346_, 0, v_fst_1356_);
v___x_1366_ = v___x_1346_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_fst_1356_);
lean_ctor_set(v_reuseFailAlloc_1370_, 1, v___x_1364_);
v___x_1366_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
lean_object* v___x_1368_; 
if (v_isShared_1355_ == 0)
{
lean_ctor_set(v___x_1354_, 0, v___x_1366_);
v___x_1368_ = v___x_1354_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v___x_1366_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1346_);
lean_dec(v_snd_1344_);
lean_del_object(v___x_1326_);
lean_dec(v_head_1323_);
return v___x_1351_;
}
}
}
v___jp_1376_:
{
lean_object* v_ref_1381_; 
v_ref_1381_ = lean_ctor_get(v___y_1377_, 0);
lean_inc(v_ref_1381_);
lean_dec_ref(v___y_1377_);
v___y_1338_ = v_snd_1380_;
v___y_1339_ = v_fst_1378_;
v___y_1340_ = v_snd_1379_;
v___y_1341_ = v_ref_1381_;
goto v___jp_1337_;
}
v___jp_1382_:
{
lean_object* v___x_1385_; lean_object* v_fst_1386_; lean_object* v_snd_1387_; uint8_t v___x_1388_; 
lean_inc_ref(v___y_1384_);
v___x_1385_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_asTuple(v___y_1384_);
v_fst_1386_ = lean_ctor_get(v___x_1385_, 0);
lean_inc(v_fst_1386_);
v_snd_1387_ = lean_ctor_get(v___x_1385_, 1);
lean_inc(v_snd_1387_);
lean_dec_ref(v___x_1385_);
v___x_1388_ = lean_unbox(v_fst_1386_);
lean_dec(v_fst_1386_);
v___y_1377_ = v___y_1384_;
v_fst_1378_ = v___x_1388_;
v_snd_1379_ = v_snd_1387_;
v_snd_1380_ = v___y_1383_;
goto v___jp_1376_;
}
v___jp_1389_:
{
if (lean_obj_tag(v_tail_1324_) == 0)
{
if (lean_obj_tag(v___y_1392_) == 1)
{
lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1403_; 
v_isSharedCheck_1403_ = !lean_is_exclusive(v___y_1392_);
if (v_isSharedCheck_1403_ == 0)
{
lean_object* v_unused_1404_; lean_object* v_unused_1405_; 
v_unused_1404_ = lean_ctor_get(v___y_1392_, 1);
lean_dec(v_unused_1404_);
v_unused_1405_ = lean_ctor_get(v___y_1392_, 0);
lean_dec(v_unused_1405_);
v___x_1394_ = v___y_1392_;
v_isShared_1395_ = v_isSharedCheck_1403_;
goto v_resetjp_1393_;
}
else
{
lean_dec(v___y_1392_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1403_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
uint8_t v___x_1396_; lean_object* v___x_1398_; 
v___x_1396_ = 0;
lean_inc(v_ref_1310_);
if (v_isShared_1336_ == 0)
{
lean_ctor_set_tag(v___x_1335_, 6);
lean_ctor_set(v___x_1335_, 1, v_x_1314_);
lean_ctor_set(v___x_1335_, 0, v_ref_1310_);
v___x_1398_ = v___x_1335_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_ref_1310_);
lean_ctor_set(v_reuseFailAlloc_1402_, 1, v_x_1314_);
v___x_1398_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
lean_object* v___x_1400_; 
lean_inc(v___y_1390_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 1, v___y_1390_);
lean_ctor_set(v___x_1394_, 0, v___x_1398_);
v___x_1400_ = v___x_1394_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v___x_1398_);
lean_ctor_set(v_reuseFailAlloc_1401_, 1, v___y_1390_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
v___y_1377_ = v___y_1391_;
v_fst_1378_ = v___x_1396_;
v_snd_1379_ = v___x_1400_;
v_snd_1380_ = v___y_1390_;
goto v___jp_1376_;
}
}
}
}
else
{
lean_dec(v___y_1390_);
lean_del_object(v___x_1335_);
lean_dec(v_x_1314_);
v___y_1383_ = v___y_1392_;
v___y_1384_ = v___y_1391_;
goto v___jp_1382_;
}
}
else
{
lean_dec(v___y_1390_);
lean_del_object(v___x_1335_);
lean_dec(v_x_1314_);
v___y_1383_ = v___y_1392_;
v___y_1384_ = v___y_1391_;
goto v___jp_1382_;
}
}
v___jp_1406_:
{
lean_object* v___x_1408_; 
v___x_1408_ = lean_box(0);
if (lean_obj_tag(v_x_1314_) == 0)
{
v___y_1390_ = v___x_1408_;
v___y_1391_ = v___y_1407_;
v___y_1392_ = v___x_1408_;
goto v___jp_1389_;
}
else
{
lean_object* v_tail_1409_; 
v_tail_1409_ = lean_ctor_get(v_x_1314_, 1);
lean_inc(v_tail_1409_);
v___y_1390_ = v___x_1408_;
v___y_1391_ = v___y_1407_;
v___y_1392_ = v_tail_1409_;
goto v___jp_1389_;
}
}
}
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_del_object(v___x_1326_);
lean_dec(v_tail_1324_);
lean_dec(v_head_1323_);
lean_dec(v_x_1314_);
lean_dec_ref(v_altVarNames_1312_);
lean_dec(v_ref_1310_);
v_a_1414_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1331_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1331_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1414_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
}
else
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1429_; 
lean_del_object(v___x_1326_);
lean_dec(v_tail_1324_);
lean_dec(v_head_1323_);
lean_dec(v_x_1314_);
lean_dec_ref(v_altVarNames_1312_);
lean_dec(v_ref_1310_);
v_a_1422_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1424_ = v___x_1328_;
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1328_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors___boxed(lean_object* v_ref_1431_, lean_object* v_params_1432_, lean_object* v_altVarNames_1433_, lean_object* v_x_1434_, lean_object* v_x_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors(v_ref_1431_, v_params_1432_, v_altVarNames_1433_, v_x_1434_, v_x_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
lean_dec(v_params_1432_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1442_, lean_object* v_constName_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
lean_object* v___x_1449_; 
v___x_1449_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1___redArg(v_constName_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1450_, lean_object* v_constName_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1(v_00_u03b1_1450_, v_constName_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_1458_, lean_object* v_ref_1459_, lean_object* v_constName_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v___x_1466_; 
v___x_1466_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1459_, v_constName_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1467_, lean_object* v_ref_1468_, lean_object* v_constName_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_1467_, v_ref_1468_, v_constName_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_);
lean_dec(v___y_1473_);
lean_dec_ref(v___y_1472_);
lean_dec(v___y_1471_);
lean_dec_ref(v___y_1470_);
lean_dec(v_ref_1468_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b1_1476_, lean_object* v_ref_1477_, lean_object* v_msg_1478_, lean_object* v_declHint_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_){
_start:
{
lean_object* v___x_1485_; 
v___x_1485_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1477_, v_msg_1478_, v_declHint_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b1_1486_, lean_object* v_ref_1487_, lean_object* v_msg_1488_, lean_object* v_declHint_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_){
_start:
{
lean_object* v_res_1495_; 
v_res_1495_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4(v_00_u03b1_1486_, v_ref_1487_, v_msg_1488_, v_declHint_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_);
lean_dec(v___y_1493_);
lean_dec_ref(v___y_1492_);
lean_dec(v___y_1491_);
lean_dec_ref(v___y_1490_);
lean_dec(v_ref_1487_);
return v_res_1495_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6(lean_object* v_msg_1496_, lean_object* v_declHint_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
lean_object* v___x_1503_; 
v___x_1503_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___redArg(v_msg_1496_, v_declHint_1497_, v___y_1501_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6___boxed(lean_object* v_msg_1504_, lean_object* v_declHint_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__5_spec__6(v_msg_1504_, v_declHint_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_);
lean_dec(v___y_1509_);
lean_dec_ref(v___y_1508_);
lean_dec(v___y_1507_);
lean_dec_ref(v___y_1506_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6(lean_object* v_00_u03b1_1512_, lean_object* v_ref_1513_, lean_object* v_msg_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_){
_start:
{
lean_object* v___x_1520_; 
v___x_1520_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(v_ref_1513_, v_msg_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___boxed(lean_object* v_00_u03b1_1521_, lean_object* v_ref_1522_, lean_object* v_msg_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_){
_start:
{
lean_object* v_res_1529_; 
v_res_1529_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6(v_00_u03b1_1521_, v_ref_1522_, v_msg_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
lean_dec(v___y_1525_);
lean_dec_ref(v___y_1524_);
lean_dec(v_ref_1522_);
return v_res_1529_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8(lean_object* v_00_u03b1_1530_, lean_object* v_msg_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v___x_1537_; 
v___x_1537_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8___redArg(v_msg_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8___boxed(lean_object* v_00_u03b1_1538_, lean_object* v_msg_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8(v_00_u03b1_1538_, v_msg_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_);
lean_dec(v___y_1543_);
lean_dec_ref(v___y_1542_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__1(lean_object* v_e_1546_, lean_object* v_cont_1547_, lean_object* v_g_1548_, lean_object* v_fs_1549_, lean_object* v_clears_1550_, lean_object* v_a_1551_, lean_object* v_ref_1552_, lean_object* v_a_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_){
_start:
{
uint8_t v___x_1561_; 
v___x_1561_ = l_Lean_Expr_isFVar(v_e_1546_);
if (v___x_1561_ == 0)
{
lean_object* v___x_1562_; 
lean_dec(v_ref_1552_);
lean_dec_ref(v_e_1546_);
lean_inc(v___y_1559_);
lean_inc_ref(v___y_1558_);
lean_inc(v___y_1557_);
lean_inc_ref(v___y_1556_);
lean_inc(v___y_1555_);
lean_inc_ref(v___y_1554_);
v___x_1562_ = lean_apply_11(v_cont_1547_, v_g_1548_, v_fs_1549_, v_clears_1550_, v_a_1551_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, lean_box(0));
return v___x_1562_;
}
else
{
lean_object* v___x_1563_; 
v___x_1563_ = l_Lean_Elab_Term_addLocalVarInfo(v_ref_1552_, v_e_1546_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_);
if (lean_obj_tag(v___x_1563_) == 0)
{
lean_object* v___x_1564_; 
lean_dec_ref_known(v___x_1563_, 1);
lean_inc(v___y_1559_);
lean_inc_ref(v___y_1558_);
lean_inc(v___y_1557_);
lean_inc_ref(v___y_1556_);
lean_inc(v___y_1555_);
lean_inc_ref(v___y_1554_);
v___x_1564_ = lean_apply_11(v_cont_1547_, v_g_1548_, v_fs_1549_, v_clears_1550_, v_a_1551_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, lean_box(0));
return v___x_1564_;
}
else
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1572_; 
lean_dec(v_a_1551_);
lean_dec_ref(v_clears_1550_);
lean_dec(v_fs_1549_);
lean_dec(v_g_1548_);
lean_dec_ref(v_cont_1547_);
v_a_1565_ = lean_ctor_get(v___x_1563_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1563_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1567_ = v___x_1563_;
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1563_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1570_; 
if (v_isShared_1568_ == 0)
{
v___x_1570_ = v___x_1567_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1565_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__1___boxed(lean_object* v_e_1573_, lean_object* v_cont_1574_, lean_object* v_g_1575_, lean_object* v_fs_1576_, lean_object* v_clears_1577_, lean_object* v_a_1578_, lean_object* v_ref_1579_, lean_object* v_a_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_){
_start:
{
lean_object* v_res_1588_; 
v_res_1588_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__1(v_e_1573_, v_cont_1574_, v_g_1575_, v_fs_1576_, v_clears_1577_, v_a_1578_, v_ref_1579_, v_a_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_);
lean_dec(v___y_1586_);
lean_dec_ref(v___y_1585_);
lean_dec(v___y_1584_);
lean_dec_ref(v___y_1583_);
lean_dec(v___y_1582_);
lean_dec_ref(v___y_1581_);
lean_dec(v_a_1580_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg___lam__0(lean_object* v_x_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_){
_start:
{
lean_object* v___x_1597_; 
lean_inc(v___y_1591_);
lean_inc_ref(v___y_1590_);
v___x_1597_ = lean_apply_7(v_x_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, lean_box(0));
return v___x_1597_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg___lam__0___boxed(lean_object* v_x_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
lean_object* v_res_1606_; 
v_res_1606_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg___lam__0(v_x_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_);
lean_dec(v___y_1600_);
lean_dec_ref(v___y_1599_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg(lean_object* v_mvarId_1607_, lean_object* v_x_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
lean_object* v___f_1616_; lean_object* v___x_1617_; 
lean_inc(v___y_1610_);
lean_inc_ref(v___y_1609_);
v___f_1616_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1616_, 0, v_x_1608_);
lean_closure_set(v___f_1616_, 1, v___y_1609_);
lean_closure_set(v___f_1616_, 2, v___y_1610_);
v___x_1617_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1607_, v___f_1616_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_1617_) == 0)
{
return v___x_1617_;
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1625_; 
v_a_1618_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1620_ = v___x_1617_;
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1617_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1623_; 
if (v_isShared_1621_ == 0)
{
v___x_1623_ = v___x_1620_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_a_1618_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
return v___x_1623_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg___boxed(lean_object* v_mvarId_1626_, lean_object* v_x_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg(v_mvarId_1626_, v_x_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_);
lean_dec(v___y_1633_);
lean_dec_ref(v___y_1632_);
lean_dec(v___y_1631_);
lean_dec_ref(v___y_1630_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
return v_res_1635_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1637_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__0));
v___x_1638_ = l_Lean_stringToMessageData(v___x_1637_);
return v___x_1638_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1640_; lean_object* v___x_1641_; 
v___x_1640_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__2));
v___x_1641_ = l_Lean_stringToMessageData(v___x_1640_);
return v___x_1641_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0(lean_object* v_x_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_){
_start:
{
if (lean_obj_tag(v_x_1642_) == 1)
{
lean_object* v_fvarId_1648_; lean_object* v___x_1649_; 
v_fvarId_1648_ = lean_ctor_get(v_x_1642_, 0);
lean_inc(v_fvarId_1648_);
lean_dec_ref_known(v_x_1642_, 1);
v___x_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1649_, 0, v_fvarId_1648_);
return v___x_1649_;
}
else
{
lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1650_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__1, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__1);
v___x_1651_ = l_Lean_MessageData_ofExpr(v_x_1642_);
v___x_1652_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1650_);
lean_ctor_set(v___x_1652_, 1, v___x_1651_);
v___x_1653_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__3, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__3_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__3);
v___x_1654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1652_);
lean_ctor_set(v___x_1654_, 1, v___x_1653_);
v___x_1655_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8___redArg(v___x_1654_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
return v___x_1655_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___boxed(lean_object* v_x_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_){
_start:
{
lean_object* v_res_1662_; 
v_res_1662_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0(v_x_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
lean_dec(v___y_1658_);
lean_dec_ref(v___y_1657_);
return v_res_1662_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12___closed__2(void){
_start:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1666_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12___closed__1));
v___x_1667_ = l_Lean_MessageData_ofFormat(v___x_1666_);
return v___x_1667_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12(lean_object* v_x_1668_, lean_object* v_x_1669_){
_start:
{
if (lean_obj_tag(v_x_1669_) == 0)
{
return v_x_1668_;
}
else
{
lean_object* v_head_1670_; lean_object* v_tail_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1693_; 
v_head_1670_ = lean_ctor_get(v_x_1669_, 0);
v_tail_1671_ = lean_ctor_get(v_x_1669_, 1);
v_isSharedCheck_1693_ = !lean_is_exclusive(v_x_1669_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1673_ = v_x_1669_;
v_isShared_1674_ = v_isSharedCheck_1693_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_tail_1671_);
lean_inc(v_head_1670_);
lean_dec(v_x_1669_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1693_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v_before_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1691_; 
v_before_1675_ = lean_ctor_get(v_head_1670_, 0);
v_isSharedCheck_1691_ = !lean_is_exclusive(v_head_1670_);
if (v_isSharedCheck_1691_ == 0)
{
lean_object* v_unused_1692_; 
v_unused_1692_ = lean_ctor_get(v_head_1670_, 1);
lean_dec(v_unused_1692_);
v___x_1677_ = v_head_1670_;
v_isShared_1678_ = v_isSharedCheck_1691_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_before_1675_);
lean_dec(v_head_1670_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1691_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1679_; lean_object* v___x_1681_; 
v___x_1679_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__9, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__9_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__9);
if (v_isShared_1678_ == 0)
{
lean_ctor_set_tag(v___x_1677_, 7);
lean_ctor_set(v___x_1677_, 1, v___x_1679_);
lean_ctor_set(v___x_1677_, 0, v_x_1668_);
v___x_1681_ = v___x_1677_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v_x_1668_);
lean_ctor_set(v_reuseFailAlloc_1690_, 1, v___x_1679_);
v___x_1681_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
lean_object* v___x_1682_; lean_object* v___x_1684_; 
v___x_1682_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12___closed__2, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12___closed__2_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12___closed__2);
if (v_isShared_1674_ == 0)
{
lean_ctor_set_tag(v___x_1673_, 7);
lean_ctor_set(v___x_1673_, 1, v___x_1682_);
lean_ctor_set(v___x_1673_, 0, v___x_1681_);
v___x_1684_ = v___x_1673_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v___x_1681_);
lean_ctor_set(v_reuseFailAlloc_1689_, 1, v___x_1682_);
v___x_1684_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1685_ = l_Lean_MessageData_ofSyntax(v_before_1675_);
v___x_1686_ = l_Lean_indentD(v___x_1685_);
v___x_1687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1684_);
lean_ctor_set(v___x_1687_, 1, v___x_1686_);
v_x_1668_ = v___x_1687_;
v_x_1669_ = v_tail_1671_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__11(lean_object* v_opts_1694_, lean_object* v_opt_1695_){
_start:
{
lean_object* v_name_1696_; lean_object* v_defValue_1697_; lean_object* v_map_1698_; lean_object* v___x_1699_; 
v_name_1696_ = lean_ctor_get(v_opt_1695_, 0);
v_defValue_1697_ = lean_ctor_get(v_opt_1695_, 1);
v_map_1698_ = lean_ctor_get(v_opts_1694_, 0);
v___x_1699_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1698_, v_name_1696_);
if (lean_obj_tag(v___x_1699_) == 0)
{
uint8_t v___x_1700_; 
v___x_1700_ = lean_unbox(v_defValue_1697_);
return v___x_1700_;
}
else
{
lean_object* v_val_1701_; 
v_val_1701_ = lean_ctor_get(v___x_1699_, 0);
lean_inc(v_val_1701_);
lean_dec_ref_known(v___x_1699_, 1);
if (lean_obj_tag(v_val_1701_) == 1)
{
uint8_t v_v_1702_; 
v_v_1702_ = lean_ctor_get_uint8(v_val_1701_, 0);
lean_dec_ref_known(v_val_1701_, 0);
return v_v_1702_;
}
else
{
uint8_t v___x_1703_; 
lean_dec(v_val_1701_);
v___x_1703_ = lean_unbox(v_defValue_1697_);
return v___x_1703_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__11___boxed(lean_object* v_opts_1704_, lean_object* v_opt_1705_){
_start:
{
uint8_t v_res_1706_; lean_object* v_r_1707_; 
v_res_1706_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__11(v_opts_1704_, v_opt_1705_);
lean_dec_ref(v_opt_1705_);
lean_dec_ref(v_opts_1704_);
v_r_1707_ = lean_box(v_res_1706_);
return v_r_1707_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1711_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___closed__1));
v___x_1712_ = l_Lean_MessageData_ofFormat(v___x_1711_);
return v___x_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg(lean_object* v_msgData_1713_, lean_object* v_macroStack_1714_, lean_object* v___y_1715_){
_start:
{
lean_object* v_toCold_1717_; lean_object* v_options_1718_; lean_object* v___x_1719_; uint8_t v___x_1720_; 
v_toCold_1717_ = lean_ctor_get(v___y_1715_, 0);
v_options_1718_ = lean_ctor_get(v_toCold_1717_, 2);
v___x_1719_ = l_Lean_Elab_pp_macroStack;
v___x_1720_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__11(v_options_1718_, v___x_1719_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; 
lean_dec(v_macroStack_1714_);
v___x_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1721_, 0, v_msgData_1713_);
return v___x_1721_;
}
else
{
if (lean_obj_tag(v_macroStack_1714_) == 0)
{
lean_object* v___x_1722_; 
v___x_1722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1722_, 0, v_msgData_1713_);
return v___x_1722_;
}
else
{
lean_object* v_head_1723_; lean_object* v_after_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1739_; 
v_head_1723_ = lean_ctor_get(v_macroStack_1714_, 0);
lean_inc(v_head_1723_);
v_after_1724_ = lean_ctor_get(v_head_1723_, 1);
v_isSharedCheck_1739_ = !lean_is_exclusive(v_head_1723_);
if (v_isSharedCheck_1739_ == 0)
{
lean_object* v_unused_1740_; 
v_unused_1740_ = lean_ctor_get(v_head_1723_, 0);
lean_dec(v_unused_1740_);
v___x_1726_ = v_head_1723_;
v_isShared_1727_ = v_isSharedCheck_1739_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_after_1724_);
lean_dec(v_head_1723_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1739_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v___x_1728_; lean_object* v___x_1730_; 
v___x_1728_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__9, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__9_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instToMessageData_fmt___closed__9);
if (v_isShared_1727_ == 0)
{
lean_ctor_set_tag(v___x_1726_, 7);
lean_ctor_set(v___x_1726_, 1, v___x_1728_);
lean_ctor_set(v___x_1726_, 0, v_msgData_1713_);
v___x_1730_ = v___x_1726_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_msgData_1713_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v___x_1728_);
v___x_1730_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v_msgData_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1731_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___closed__2);
v___x_1732_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1730_);
lean_ctor_set(v___x_1732_, 1, v___x_1731_);
v___x_1733_ = l_Lean_MessageData_ofSyntax(v_after_1724_);
v___x_1734_ = l_Lean_indentD(v___x_1733_);
v_msgData_1735_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1735_, 0, v___x_1732_);
lean_ctor_set(v_msgData_1735_, 1, v___x_1734_);
v___x_1736_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9_spec__12(v_msgData_1735_, v_macroStack_1714_);
v___x_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1737_, 0, v___x_1736_);
return v___x_1737_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg___boxed(lean_object* v_msgData_1741_, lean_object* v_macroStack_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
lean_object* v_res_1745_; 
v_res_1745_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg(v_msgData_1741_, v_macroStack_1742_, v___y_1743_);
lean_dec_ref(v___y_1743_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8___redArg(lean_object* v_msg_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_){
_start:
{
lean_object* v_ref_1754_; lean_object* v_macroStack_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v_a_1758_; lean_object* v___x_1759_; lean_object* v_a_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1768_; 
v_ref_1754_ = lean_ctor_get(v___y_1751_, 2);
v_macroStack_1755_ = lean_ctor_get(v___y_1747_, 1);
v___x_1756_ = l_Lean_Elab_getBetterRef(v_ref_1754_, v_macroStack_1755_);
v___x_1757_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8_spec__9(v_msg_1746_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_);
v_a_1758_ = lean_ctor_get(v___x_1757_, 0);
lean_inc(v_a_1758_);
lean_dec_ref(v___x_1757_);
lean_inc(v_macroStack_1755_);
v___x_1759_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg(v_a_1758_, v_macroStack_1755_, v___y_1751_);
v_a_1760_ = lean_ctor_get(v___x_1759_, 0);
v_isSharedCheck_1768_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1762_ = v___x_1759_;
v_isShared_1763_ = v_isSharedCheck_1768_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_a_1760_);
lean_dec(v___x_1759_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1768_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___x_1764_; lean_object* v___x_1766_; 
v___x_1764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1756_);
lean_ctor_set(v___x_1764_, 1, v_a_1760_);
if (v_isShared_1763_ == 0)
{
lean_ctor_set_tag(v___x_1762_, 1);
lean_ctor_set(v___x_1762_, 0, v___x_1764_);
v___x_1766_ = v___x_1762_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1764_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8___redArg___boxed(lean_object* v_msg_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8___redArg(v_msg_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_);
lean_dec(v___y_1775_);
lean_dec_ref(v___y_1774_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec(v___y_1771_);
lean_dec_ref(v___y_1770_);
return v_res_1777_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1779_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__0));
v___x_1780_ = l_Lean_stringToMessageData(v___x_1779_);
return v___x_1780_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_1782_; lean_object* v___x_1783_; 
v___x_1782_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__2));
v___x_1783_ = l_Lean_stringToMessageData(v___x_1782_);
return v___x_1783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5(lean_object* v_e_1784_, lean_object* v_a_1785_, lean_object* v_00_u03b1_1786_, lean_object* v_x_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_){
_start:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1795_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__1, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__0___closed__1);
v___x_1796_ = l_Lean_MessageData_ofExpr(v_e_1784_);
v___x_1797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1795_);
lean_ctor_set(v___x_1797_, 1, v___x_1796_);
v___x_1798_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__1, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__1_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__1);
v___x_1799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1797_);
lean_ctor_set(v___x_1799_, 1, v___x_1798_);
v___x_1800_ = l_Lean_MessageData_ofExpr(v_a_1785_);
v___x_1801_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1799_);
lean_ctor_set(v___x_1801_, 1, v___x_1800_);
v___x_1802_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__3, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__3_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___closed__3);
v___x_1803_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1803_, 0, v___x_1801_);
lean_ctor_set(v___x_1803_, 1, v___x_1802_);
v___x_1804_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8___redArg(v___x_1803_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_);
return v___x_1804_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5___boxed(lean_object* v_e_1805_, lean_object* v_a_1806_, lean_object* v_00_u03b1_1807_, lean_object* v_x_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_){
_start:
{
lean_object* v_res_1816_; 
v_res_1816_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5(v_e_1805_, v_a_1806_, v_00_u03b1_1807_, v_x_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
lean_dec(v___y_1814_);
lean_dec_ref(v___y_1813_);
lean_dec(v___y_1812_);
lean_dec_ref(v___y_1811_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
return v_res_1816_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align_spec__0(lean_object* v_x_1817_, lean_object* v_x_1818_){
_start:
{
if (lean_obj_tag(v_x_1817_) == 0)
{
if (lean_obj_tag(v_x_1818_) == 0)
{
uint8_t v___x_1819_; 
v___x_1819_ = 1;
return v___x_1819_;
}
else
{
uint8_t v___x_1820_; 
v___x_1820_ = 0;
return v___x_1820_;
}
}
else
{
if (lean_obj_tag(v_x_1818_) == 0)
{
uint8_t v___x_1821_; 
v___x_1821_ = 0;
return v___x_1821_;
}
else
{
lean_object* v_val_1822_; lean_object* v_val_1823_; uint8_t v___x_1824_; 
v_val_1822_ = lean_ctor_get(v_x_1817_, 0);
v_val_1823_ = lean_ctor_get(v_x_1818_, 0);
v___x_1824_ = lean_name_eq(v_val_1822_, v_val_1823_);
return v___x_1824_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align_spec__0___boxed(lean_object* v_x_1825_, lean_object* v_x_1826_){
_start:
{
uint8_t v_res_1827_; lean_object* v_r_1828_; 
v_res_1827_ = l_Option_instBEq_beq___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align_spec__0(v_x_1825_, v_x_1826_);
lean_dec(v_x_1826_);
lean_dec(v_x_1825_);
v_r_1828_ = lean_box(v_res_1827_);
return v_r_1828_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__10_spec__13___redArg(lean_object* v_x_1829_, lean_object* v_x_1830_, lean_object* v_x_1831_, lean_object* v_x_1832_){
_start:
{
lean_object* v_ks_1833_; lean_object* v_vs_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1858_; 
v_ks_1833_ = lean_ctor_get(v_x_1829_, 0);
v_vs_1834_ = lean_ctor_get(v_x_1829_, 1);
v_isSharedCheck_1858_ = !lean_is_exclusive(v_x_1829_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1836_ = v_x_1829_;
v_isShared_1837_ = v_isSharedCheck_1858_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_vs_1834_);
lean_inc(v_ks_1833_);
lean_dec(v_x_1829_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1858_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1838_; uint8_t v___x_1839_; 
v___x_1838_ = lean_array_get_size(v_ks_1833_);
v___x_1839_ = lean_nat_dec_lt(v_x_1830_, v___x_1838_);
if (v___x_1839_ == 0)
{
lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1843_; 
lean_dec(v_x_1830_);
v___x_1840_ = lean_array_push(v_ks_1833_, v_x_1831_);
v___x_1841_ = lean_array_push(v_vs_1834_, v_x_1832_);
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 1, v___x_1841_);
lean_ctor_set(v___x_1836_, 0, v___x_1840_);
v___x_1843_ = v___x_1836_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v___x_1840_);
lean_ctor_set(v_reuseFailAlloc_1844_, 1, v___x_1841_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
return v___x_1843_;
}
}
else
{
lean_object* v_k_x27_1845_; uint8_t v___x_1846_; 
v_k_x27_1845_ = lean_array_fget_borrowed(v_ks_1833_, v_x_1830_);
v___x_1846_ = l_Lean_instBEqMVarId_beq(v_x_1831_, v_k_x27_1845_);
if (v___x_1846_ == 0)
{
lean_object* v___x_1848_; 
if (v_isShared_1837_ == 0)
{
v___x_1848_ = v___x_1836_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_ks_1833_);
lean_ctor_set(v_reuseFailAlloc_1852_, 1, v_vs_1834_);
v___x_1848_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1849_ = lean_unsigned_to_nat(1u);
v___x_1850_ = lean_nat_add(v_x_1830_, v___x_1849_);
lean_dec(v_x_1830_);
v_x_1829_ = v___x_1848_;
v_x_1830_ = v___x_1850_;
goto _start;
}
}
else
{
lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1856_; 
v___x_1853_ = lean_array_fset(v_ks_1833_, v_x_1830_, v_x_1831_);
v___x_1854_ = lean_array_fset(v_vs_1834_, v_x_1830_, v_x_1832_);
lean_dec(v_x_1830_);
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 1, v___x_1854_);
lean_ctor_set(v___x_1836_, 0, v___x_1853_);
v___x_1856_ = v___x_1836_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v___x_1853_);
lean_ctor_set(v_reuseFailAlloc_1857_, 1, v___x_1854_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__10___redArg(lean_object* v_n_1859_, lean_object* v_k_1860_, lean_object* v_v_1861_){
_start:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_1862_ = lean_unsigned_to_nat(0u);
v___x_1863_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__10_spec__13___redArg(v_n_1859_, v___x_1862_, v_k_1860_, v_v_1861_);
return v___x_1863_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_1864_; 
v___x_1864_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___redArg(lean_object* v_x_1865_, size_t v_x_1866_, size_t v_x_1867_, lean_object* v_x_1868_, lean_object* v_x_1869_){
_start:
{
if (lean_obj_tag(v_x_1865_) == 0)
{
lean_object* v_es_1870_; size_t v___x_1871_; size_t v___x_1872_; lean_object* v_j_1873_; lean_object* v___x_1874_; uint8_t v___x_1875_; 
v_es_1870_ = lean_ctor_get(v_x_1865_, 0);
v___x_1871_ = ((size_t)31ULL);
v___x_1872_ = lean_usize_land(v_x_1866_, v___x_1871_);
v_j_1873_ = lean_usize_to_nat(v___x_1872_);
v___x_1874_ = lean_array_get_size(v_es_1870_);
v___x_1875_ = lean_nat_dec_lt(v_j_1873_, v___x_1874_);
if (v___x_1875_ == 0)
{
lean_dec(v_j_1873_);
lean_dec(v_x_1869_);
lean_dec(v_x_1868_);
return v_x_1865_;
}
else
{
lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1914_; 
lean_inc_ref(v_es_1870_);
v_isSharedCheck_1914_ = !lean_is_exclusive(v_x_1865_);
if (v_isSharedCheck_1914_ == 0)
{
lean_object* v_unused_1915_; 
v_unused_1915_ = lean_ctor_get(v_x_1865_, 0);
lean_dec(v_unused_1915_);
v___x_1877_ = v_x_1865_;
v_isShared_1878_ = v_isSharedCheck_1914_;
goto v_resetjp_1876_;
}
else
{
lean_dec(v_x_1865_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1914_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v_v_1879_; lean_object* v___x_1880_; lean_object* v_xs_x27_1881_; lean_object* v___y_1883_; 
v_v_1879_ = lean_array_fget(v_es_1870_, v_j_1873_);
v___x_1880_ = lean_box(0);
v_xs_x27_1881_ = lean_array_fset(v_es_1870_, v_j_1873_, v___x_1880_);
switch(lean_obj_tag(v_v_1879_))
{
case 0:
{
lean_object* v_key_1888_; lean_object* v_val_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1899_; 
v_key_1888_ = lean_ctor_get(v_v_1879_, 0);
v_val_1889_ = lean_ctor_get(v_v_1879_, 1);
v_isSharedCheck_1899_ = !lean_is_exclusive(v_v_1879_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1891_ = v_v_1879_;
v_isShared_1892_ = v_isSharedCheck_1899_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_val_1889_);
lean_inc(v_key_1888_);
lean_dec(v_v_1879_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1899_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
uint8_t v___x_1893_; 
v___x_1893_ = l_Lean_instBEqMVarId_beq(v_x_1868_, v_key_1888_);
if (v___x_1893_ == 0)
{
lean_object* v___x_1894_; lean_object* v___x_1895_; 
lean_del_object(v___x_1891_);
v___x_1894_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1888_, v_val_1889_, v_x_1868_, v_x_1869_);
v___x_1895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1894_);
v___y_1883_ = v___x_1895_;
goto v___jp_1882_;
}
else
{
lean_object* v___x_1897_; 
lean_dec(v_val_1889_);
lean_dec(v_key_1888_);
if (v_isShared_1892_ == 0)
{
lean_ctor_set(v___x_1891_, 1, v_x_1869_);
lean_ctor_set(v___x_1891_, 0, v_x_1868_);
v___x_1897_ = v___x_1891_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_x_1868_);
lean_ctor_set(v_reuseFailAlloc_1898_, 1, v_x_1869_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
v___y_1883_ = v___x_1897_;
goto v___jp_1882_;
}
}
}
}
case 1:
{
lean_object* v_node_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1912_; 
v_node_1900_ = lean_ctor_get(v_v_1879_, 0);
v_isSharedCheck_1912_ = !lean_is_exclusive(v_v_1879_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1902_ = v_v_1879_;
v_isShared_1903_ = v_isSharedCheck_1912_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_node_1900_);
lean_dec(v_v_1879_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1912_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
size_t v___x_1904_; size_t v___x_1905_; size_t v___x_1906_; size_t v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1910_; 
v___x_1904_ = ((size_t)5ULL);
v___x_1905_ = lean_usize_shift_right(v_x_1866_, v___x_1904_);
v___x_1906_ = ((size_t)1ULL);
v___x_1907_ = lean_usize_add(v_x_1867_, v___x_1906_);
v___x_1908_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___redArg(v_node_1900_, v___x_1905_, v___x_1907_, v_x_1868_, v_x_1869_);
if (v_isShared_1903_ == 0)
{
lean_ctor_set(v___x_1902_, 0, v___x_1908_);
v___x_1910_ = v___x_1902_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v___x_1908_);
v___x_1910_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
v___y_1883_ = v___x_1910_;
goto v___jp_1882_;
}
}
}
default: 
{
lean_object* v___x_1913_; 
v___x_1913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1913_, 0, v_x_1868_);
lean_ctor_set(v___x_1913_, 1, v_x_1869_);
v___y_1883_ = v___x_1913_;
goto v___jp_1882_;
}
}
v___jp_1882_:
{
lean_object* v___x_1884_; lean_object* v___x_1886_; 
v___x_1884_ = lean_array_fset(v_xs_x27_1881_, v_j_1873_, v___y_1883_);
lean_dec(v_j_1873_);
if (v_isShared_1878_ == 0)
{
lean_ctor_set(v___x_1877_, 0, v___x_1884_);
v___x_1886_ = v___x_1877_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v___x_1884_);
v___x_1886_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
return v___x_1886_;
}
}
}
}
}
else
{
lean_object* v_ks_1916_; lean_object* v_vs_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1935_; 
v_ks_1916_ = lean_ctor_get(v_x_1865_, 0);
v_vs_1917_ = lean_ctor_get(v_x_1865_, 1);
v_isSharedCheck_1935_ = !lean_is_exclusive(v_x_1865_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1919_ = v_x_1865_;
v_isShared_1920_ = v_isSharedCheck_1935_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_vs_1917_);
lean_inc(v_ks_1916_);
lean_dec(v_x_1865_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1935_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1922_; 
if (v_isShared_1920_ == 0)
{
v___x_1922_ = v___x_1919_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_ks_1916_);
lean_ctor_set(v_reuseFailAlloc_1934_, 1, v_vs_1917_);
v___x_1922_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
lean_object* v_newNode_1923_; size_t v___x_1924_; uint8_t v___x_1925_; 
v_newNode_1923_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__10___redArg(v___x_1922_, v_x_1868_, v_x_1869_);
v___x_1924_ = ((size_t)7ULL);
v___x_1925_ = lean_usize_dec_le(v___x_1924_, v_x_1867_);
if (v___x_1925_ == 0)
{
lean_object* v___x_1926_; lean_object* v___x_1927_; uint8_t v___x_1928_; 
v___x_1926_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1923_);
v___x_1927_ = lean_unsigned_to_nat(4u);
v___x_1928_ = lean_nat_dec_lt(v___x_1926_, v___x_1927_);
lean_dec(v___x_1926_);
if (v___x_1928_ == 0)
{
lean_object* v_ks_1929_; lean_object* v_vs_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; 
v_ks_1929_ = lean_ctor_get(v_newNode_1923_, 0);
lean_inc_ref(v_ks_1929_);
v_vs_1930_ = lean_ctor_get(v_newNode_1923_, 1);
lean_inc_ref(v_vs_1930_);
lean_dec_ref(v_newNode_1923_);
v___x_1931_ = lean_unsigned_to_nat(0u);
v___x_1932_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___redArg___closed__0);
v___x_1933_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__11___redArg(v_x_1867_, v_ks_1929_, v_vs_1930_, v___x_1931_, v___x_1932_);
lean_dec_ref(v_vs_1930_);
lean_dec_ref(v_ks_1929_);
return v___x_1933_;
}
else
{
return v_newNode_1923_;
}
}
else
{
return v_newNode_1923_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__11___redArg(size_t v_depth_1936_, lean_object* v_keys_1937_, lean_object* v_vals_1938_, lean_object* v_i_1939_, lean_object* v_entries_1940_){
_start:
{
lean_object* v___x_1941_; uint8_t v___x_1942_; 
v___x_1941_ = lean_array_get_size(v_keys_1937_);
v___x_1942_ = lean_nat_dec_lt(v_i_1939_, v___x_1941_);
if (v___x_1942_ == 0)
{
lean_dec(v_i_1939_);
return v_entries_1940_;
}
else
{
lean_object* v_k_1943_; lean_object* v_v_1944_; uint64_t v___x_1945_; size_t v_h_1946_; size_t v___x_1947_; lean_object* v___x_1948_; size_t v___x_1949_; size_t v___x_1950_; size_t v___x_1951_; size_t v_h_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; 
v_k_1943_ = lean_array_fget_borrowed(v_keys_1937_, v_i_1939_);
v_v_1944_ = lean_array_fget_borrowed(v_vals_1938_, v_i_1939_);
v___x_1945_ = l_Lean_instHashableMVarId_hash(v_k_1943_);
v_h_1946_ = lean_uint64_to_usize(v___x_1945_);
v___x_1947_ = ((size_t)5ULL);
v___x_1948_ = lean_unsigned_to_nat(1u);
v___x_1949_ = ((size_t)1ULL);
v___x_1950_ = lean_usize_sub(v_depth_1936_, v___x_1949_);
v___x_1951_ = lean_usize_mul(v___x_1947_, v___x_1950_);
v_h_1952_ = lean_usize_shift_right(v_h_1946_, v___x_1951_);
v___x_1953_ = lean_nat_add(v_i_1939_, v___x_1948_);
lean_dec(v_i_1939_);
lean_inc(v_v_1944_);
lean_inc(v_k_1943_);
v___x_1954_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___redArg(v_entries_1940_, v_h_1952_, v_depth_1936_, v_k_1943_, v_v_1944_);
v_i_1939_ = v___x_1953_;
v_entries_1940_ = v___x_1954_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__11___redArg___boxed(lean_object* v_depth_1956_, lean_object* v_keys_1957_, lean_object* v_vals_1958_, lean_object* v_i_1959_, lean_object* v_entries_1960_){
_start:
{
size_t v_depth_boxed_1961_; lean_object* v_res_1962_; 
v_depth_boxed_1961_ = lean_unbox_usize(v_depth_1956_);
lean_dec(v_depth_1956_);
v_res_1962_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__11___redArg(v_depth_boxed_1961_, v_keys_1957_, v_vals_1958_, v_i_1959_, v_entries_1960_);
lean_dec_ref(v_vals_1958_);
lean_dec_ref(v_keys_1957_);
return v_res_1962_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___redArg___boxed(lean_object* v_x_1963_, lean_object* v_x_1964_, lean_object* v_x_1965_, lean_object* v_x_1966_, lean_object* v_x_1967_){
_start:
{
size_t v_x_20460__boxed_1968_; size_t v_x_20461__boxed_1969_; lean_object* v_res_1970_; 
v_x_20460__boxed_1968_ = lean_unbox_usize(v_x_1964_);
lean_dec(v_x_1964_);
v_x_20461__boxed_1969_ = lean_unbox_usize(v_x_1965_);
lean_dec(v_x_1965_);
v_res_1970_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___redArg(v_x_1963_, v_x_20460__boxed_1968_, v_x_20461__boxed_1969_, v_x_1966_, v_x_1967_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5___redArg(lean_object* v_x_1971_, lean_object* v_x_1972_, lean_object* v_x_1973_){
_start:
{
uint64_t v___x_1974_; size_t v___x_1975_; size_t v___x_1976_; lean_object* v___x_1977_; 
v___x_1974_ = l_Lean_instHashableMVarId_hash(v_x_1972_);
v___x_1975_ = lean_uint64_to_usize(v___x_1974_);
v___x_1976_ = ((size_t)1ULL);
v___x_1977_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___redArg(v_x_1971_, v___x_1975_, v___x_1976_, v_x_1972_, v_x_1973_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5___redArg(lean_object* v_mvarId_1978_, lean_object* v_val_1979_, lean_object* v___y_1980_){
_start:
{
lean_object* v___x_1982_; lean_object* v_mctx_1983_; lean_object* v_cache_1984_; lean_object* v_zetaDeltaFVarIds_1985_; lean_object* v_postponed_1986_; lean_object* v_diag_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_2016_; 
v___x_1982_ = lean_st_ref_take(v___y_1980_);
v_mctx_1983_ = lean_ctor_get(v___x_1982_, 0);
v_cache_1984_ = lean_ctor_get(v___x_1982_, 1);
v_zetaDeltaFVarIds_1985_ = lean_ctor_get(v___x_1982_, 2);
v_postponed_1986_ = lean_ctor_get(v___x_1982_, 3);
v_diag_1987_ = lean_ctor_get(v___x_1982_, 4);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_1982_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_1989_ = v___x_1982_;
v_isShared_1990_ = v_isSharedCheck_2016_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_diag_1987_);
lean_inc(v_postponed_1986_);
lean_inc(v_zetaDeltaFVarIds_1985_);
lean_inc(v_cache_1984_);
lean_inc(v_mctx_1983_);
lean_dec(v___x_1982_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_2016_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v_depth_1991_; lean_object* v_levelAssignDepth_1992_; lean_object* v_lmvarCounter_1993_; lean_object* v_mvarCounter_1994_; lean_object* v_lDecls_1995_; lean_object* v_decls_1996_; lean_object* v_userNames_1997_; lean_object* v_lAssignment_1998_; lean_object* v_eAssignment_1999_; lean_object* v_dAssignment_2000_; lean_object* v_instanceTypedMVars_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2015_; 
v_depth_1991_ = lean_ctor_get(v_mctx_1983_, 0);
v_levelAssignDepth_1992_ = lean_ctor_get(v_mctx_1983_, 1);
v_lmvarCounter_1993_ = lean_ctor_get(v_mctx_1983_, 2);
v_mvarCounter_1994_ = lean_ctor_get(v_mctx_1983_, 3);
v_lDecls_1995_ = lean_ctor_get(v_mctx_1983_, 4);
v_decls_1996_ = lean_ctor_get(v_mctx_1983_, 5);
v_userNames_1997_ = lean_ctor_get(v_mctx_1983_, 6);
v_lAssignment_1998_ = lean_ctor_get(v_mctx_1983_, 7);
v_eAssignment_1999_ = lean_ctor_get(v_mctx_1983_, 8);
v_dAssignment_2000_ = lean_ctor_get(v_mctx_1983_, 9);
v_instanceTypedMVars_2001_ = lean_ctor_get(v_mctx_1983_, 10);
v_isSharedCheck_2015_ = !lean_is_exclusive(v_mctx_1983_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2003_ = v_mctx_1983_;
v_isShared_2004_ = v_isSharedCheck_2015_;
goto v_resetjp_2002_;
}
else
{
lean_inc(v_instanceTypedMVars_2001_);
lean_inc(v_dAssignment_2000_);
lean_inc(v_eAssignment_1999_);
lean_inc(v_lAssignment_1998_);
lean_inc(v_userNames_1997_);
lean_inc(v_decls_1996_);
lean_inc(v_lDecls_1995_);
lean_inc(v_mvarCounter_1994_);
lean_inc(v_lmvarCounter_1993_);
lean_inc(v_levelAssignDepth_1992_);
lean_inc(v_depth_1991_);
lean_dec(v_mctx_1983_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2015_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2008_; 
v___x_2005_ = lean_box(0);
v___x_2006_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5___redArg(v_eAssignment_1999_, v_mvarId_1978_, v_val_1979_);
if (v_isShared_2004_ == 0)
{
lean_ctor_set(v___x_2003_, 8, v___x_2006_);
v___x_2008_ = v___x_2003_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_depth_1991_);
lean_ctor_set(v_reuseFailAlloc_2014_, 1, v_levelAssignDepth_1992_);
lean_ctor_set(v_reuseFailAlloc_2014_, 2, v_lmvarCounter_1993_);
lean_ctor_set(v_reuseFailAlloc_2014_, 3, v_mvarCounter_1994_);
lean_ctor_set(v_reuseFailAlloc_2014_, 4, v_lDecls_1995_);
lean_ctor_set(v_reuseFailAlloc_2014_, 5, v_decls_1996_);
lean_ctor_set(v_reuseFailAlloc_2014_, 6, v_userNames_1997_);
lean_ctor_set(v_reuseFailAlloc_2014_, 7, v_lAssignment_1998_);
lean_ctor_set(v_reuseFailAlloc_2014_, 8, v___x_2006_);
lean_ctor_set(v_reuseFailAlloc_2014_, 9, v_dAssignment_2000_);
lean_ctor_set(v_reuseFailAlloc_2014_, 10, v_instanceTypedMVars_2001_);
v___x_2008_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
lean_object* v___x_2010_; 
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 0, v___x_2008_);
v___x_2010_ = v___x_1989_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v___x_2008_);
lean_ctor_set(v_reuseFailAlloc_2013_, 1, v_cache_1984_);
lean_ctor_set(v_reuseFailAlloc_2013_, 2, v_zetaDeltaFVarIds_1985_);
lean_ctor_set(v_reuseFailAlloc_2013_, 3, v_postponed_1986_);
lean_ctor_set(v_reuseFailAlloc_2013_, 4, v_diag_1987_);
v___x_2010_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2011_ = lean_st_ref_put(v___y_1980_, v___x_2010_);
v___x_2012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2012_, 0, v___x_2005_);
return v___x_2012_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5___redArg___boxed(lean_object* v_mvarId_2017_, lean_object* v_val_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_){
_start:
{
lean_object* v_res_2021_; 
v_res_2021_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5___redArg(v_mvarId_2017_, v_val_2018_, v___y_2019_);
lean_dec(v___y_2019_);
return v_res_2021_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__4___closed__0(void){
_start:
{
lean_object* v___x_2022_; 
v___x_2022_ = l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
return v___x_2022_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__4(lean_object* v_msg_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_){
_start:
{
lean_object* v___x_2031_; lean_object* v___x_16600__overap_2032_; lean_object* v___x_2033_; 
v___x_2031_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__4___closed__0, &l_panic___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__4___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__4___closed__0);
v___x_16600__overap_2032_ = lean_panic_fn_borrowed(v___x_2031_, v_msg_2023_);
lean_inc(v___y_2029_);
lean_inc_ref(v___y_2028_);
lean_inc(v___y_2027_);
lean_inc_ref(v___y_2026_);
lean_inc(v___y_2025_);
lean_inc_ref(v___y_2024_);
v___x_2033_ = lean_apply_7(v___x_16600__overap_2032_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_, lean_box(0));
return v___x_2033_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__4___boxed(lean_object* v_msg_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l_panic___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__4(v_msg_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_);
lean_dec(v___y_2040_);
lean_dec_ref(v___y_2039_);
lean_dec(v___y_2038_);
lean_dec_ref(v___y_2037_);
lean_dec(v___y_2036_);
lean_dec_ref(v___y_2035_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__6(lean_object* v_as_2043_, size_t v_i_2044_, size_t v_stop_2045_, lean_object* v_b_2046_){
_start:
{
uint8_t v___x_2047_; 
v___x_2047_ = lean_usize_dec_eq(v_i_2044_, v_stop_2045_);
if (v___x_2047_ == 0)
{
lean_object* v___x_2048_; lean_object* v_fst_2049_; lean_object* v_snd_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; size_t v___x_2053_; size_t v___x_2054_; 
v___x_2048_ = lean_array_uget_borrowed(v_as_2043_, v_i_2044_);
v_fst_2049_ = lean_ctor_get(v___x_2048_, 0);
v_snd_2050_ = lean_ctor_get(v___x_2048_, 1);
lean_inc(v_snd_2050_);
v___x_2051_ = l_Lean_mkFVar(v_snd_2050_);
lean_inc(v_fst_2049_);
v___x_2052_ = l_Lean_Meta_FVarSubst_insert(v_b_2046_, v_fst_2049_, v___x_2051_);
v___x_2053_ = ((size_t)1ULL);
v___x_2054_ = lean_usize_add(v_i_2044_, v___x_2053_);
v_i_2044_ = v___x_2054_;
v_b_2046_ = v___x_2052_;
goto _start;
}
else
{
return v_b_2046_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__6___boxed(lean_object* v_as_2056_, lean_object* v_i_2057_, lean_object* v_stop_2058_, lean_object* v_b_2059_){
_start:
{
size_t v_i_boxed_2060_; size_t v_stop_boxed_2061_; lean_object* v_res_2062_; 
v_i_boxed_2060_ = lean_unbox_usize(v_i_2057_);
lean_dec(v_i_2057_);
v_stop_boxed_2061_ = lean_unbox_usize(v_stop_2058_);
lean_dec(v_stop_2058_);
v_res_2062_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__6(v_as_2056_, v_i_boxed_2060_, v_stop_boxed_2061_, v_b_2059_);
lean_dec_ref(v_as_2056_);
return v_res_2062_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__0(void){
_start:
{
lean_object* v___x_2063_; lean_object* v_dummy_2064_; 
v___x_2063_ = lean_box(0);
v_dummy_2064_ = l_Lean_Expr_sort___override(v___x_2063_);
return v_dummy_2064_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__4(void){
_start:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2068_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__3));
v___x_2069_ = lean_unsigned_to_nat(62u);
v___x_2070_ = lean_unsigned_to_nat(323u);
v___x_2071_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__2));
v___x_2072_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__1));
v___x_2073_ = l_mkPanicMessageWithDecl(v___x_2072_, v___x_2071_, v___x_2070_, v___x_2069_, v___x_2068_);
return v___x_2073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3(lean_object* v___x_2074_, lean_object* v___x_2075_, lean_object* v_snd_2076_, lean_object* v___x_2077_, lean_object* v___x_2078_, lean_object* v___x_2079_, lean_object* v_e_2080_, lean_object* v___x_2081_, lean_object* v_head_2082_, lean_object* v_fst_2083_, lean_object* v_tail_2084_, uint8_t v___x_2085_, lean_object* v_snd_2086_, lean_object* v___x_2087_, lean_object* v_fs_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_){
_start:
{
lean_object* v___x_2096_; 
v___x_2096_ = l_Lean_Meta_getElimInfo(v___x_2074_, v___x_2075_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v_a_2097_; lean_object* v___x_2098_; 
v_a_2097_ = lean_ctor_get(v___x_2096_, 0);
lean_inc(v_a_2097_);
lean_dec_ref_known(v___x_2096_, 1);
lean_inc(v_snd_2076_);
v___x_2098_ = l_Lean_MVarId_getTag(v_snd_2076_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
if (lean_obj_tag(v___x_2098_) == 0)
{
lean_object* v_a_2099_; lean_object* v___x_2100_; 
v_a_2099_ = lean_ctor_get(v___x_2098_, 0);
lean_inc(v_a_2099_);
lean_dec_ref_known(v___x_2098_, 1);
lean_inc(v_a_2097_);
v___x_2100_ = l_Lean_Elab_Tactic_ElimApp_mkElimApp(v_a_2097_, v___x_2077_, v_a_2099_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v_a_2101_; lean_object* v_elimApp_2102_; lean_object* v_alts_2103_; lean_object* v_motivePos_2104_; lean_object* v_nargs_2105_; lean_object* v_dummy_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
lean_inc(v_a_2101_);
lean_dec_ref_known(v___x_2100_, 1);
v_elimApp_2102_ = lean_ctor_get(v_a_2101_, 0);
lean_inc_ref_n(v_elimApp_2102_, 2);
v_alts_2103_ = lean_ctor_get(v_a_2101_, 3);
lean_inc_ref(v_alts_2103_);
lean_dec(v_a_2101_);
v_motivePos_2104_ = lean_ctor_get(v_a_2097_, 2);
lean_inc(v_motivePos_2104_);
lean_dec(v_a_2097_);
v_nargs_2105_ = l_Lean_Expr_getAppNumArgs(v_elimApp_2102_);
v_dummy_2106_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__0, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__0);
lean_inc(v_nargs_2105_);
v___x_2107_ = lean_mk_array(v_nargs_2105_, v_dummy_2106_);
v___x_2108_ = lean_nat_sub(v_nargs_2105_, v___x_2078_);
lean_dec(v_nargs_2105_);
v___x_2109_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_elimApp_2102_, v___x_2107_, v___x_2108_);
v___x_2110_ = lean_array_get(v___x_2079_, v___x_2109_, v_motivePos_2104_);
lean_dec(v_motivePos_2104_);
lean_dec_ref(v___x_2109_);
v___x_2111_ = l_Lean_Expr_mvarId_x21(v___x_2110_);
lean_dec(v___x_2110_);
v___x_2112_ = l_Lean_Expr_fvarId_x21(v_e_2080_);
v___x_2113_ = lean_mk_empty_array_with_capacity(v___x_2078_);
lean_inc_ref(v___x_2113_);
v___x_2114_ = lean_array_push(v___x_2113_, v___x_2112_);
v___x_2115_ = lean_mk_empty_array_with_capacity(v___x_2081_);
lean_inc(v_snd_2076_);
v___x_2116_ = l_Lean_Elab_Tactic_ElimApp_setMotiveArg(v_snd_2076_, v___x_2111_, v___x_2114_, v___x_2115_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v___x_2117_; 
lean_dec_ref_known(v___x_2116_, 1);
v___x_2117_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5___redArg(v_snd_2076_, v_elimApp_2102_, v___y_2092_);
if (lean_obj_tag(v___x_2117_) == 0)
{
lean_object* v___x_2118_; uint8_t v___x_2119_; 
lean_dec_ref_known(v___x_2117_, 1);
v___x_2118_ = lean_array_get_size(v_alts_2103_);
v___x_2119_ = lean_nat_dec_eq(v___x_2118_, v___x_2078_);
if (v___x_2119_ == 0)
{
lean_object* v___x_2120_; lean_object* v___x_2121_; 
lean_dec_ref(v___x_2113_);
lean_dec_ref(v_alts_2103_);
lean_dec(v_fs_2088_);
lean_dec_ref(v___x_2087_);
lean_dec(v_snd_2086_);
lean_dec(v_tail_2084_);
lean_dec(v_head_2082_);
v___x_2120_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__4, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__4);
v___x_2121_ = l_panic___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__4(v___x_2120_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
return v___x_2121_;
}
else
{
lean_object* v___x_2122_; lean_object* v_name_2123_; lean_object* v_mvarId_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2196_; 
v___x_2122_ = lean_array_fget(v_alts_2103_, v___x_2081_);
lean_dec_ref(v_alts_2103_);
v_name_2123_ = lean_ctor_get(v___x_2122_, 0);
v_mvarId_2124_ = lean_ctor_get(v___x_2122_, 2);
v_isSharedCheck_2196_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2196_ == 0)
{
lean_object* v_unused_2197_; 
v_unused_2197_ = lean_ctor_get(v___x_2122_, 1);
lean_dec(v_unused_2197_);
v___x_2126_ = v___x_2122_;
v_isShared_2127_ = v_isSharedCheck_2196_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_mvarId_2124_);
lean_inc(v_name_2123_);
lean_dec(v___x_2122_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2196_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2128_; 
v___x_2128_ = l_Lean_MVarId_intro(v_mvarId_2124_, v_head_2082_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
if (lean_obj_tag(v___x_2128_) == 0)
{
lean_object* v_a_2129_; lean_object* v_fst_2130_; lean_object* v_snd_2131_; lean_object* v___x_2133_; uint8_t v_isShared_2134_; uint8_t v_isSharedCheck_2187_; 
v_a_2129_ = lean_ctor_get(v___x_2128_, 0);
lean_inc(v_a_2129_);
lean_dec_ref_known(v___x_2128_, 1);
v_fst_2130_ = lean_ctor_get(v_a_2129_, 0);
v_snd_2131_ = lean_ctor_get(v_a_2129_, 1);
v_isSharedCheck_2187_ = !lean_is_exclusive(v_a_2129_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2133_ = v_a_2129_;
v_isShared_2134_ = v_isSharedCheck_2187_;
goto v_resetjp_2132_;
}
else
{
lean_inc(v_snd_2131_);
lean_inc(v_fst_2130_);
lean_dec(v_a_2129_);
v___x_2133_ = lean_box(0);
v_isShared_2134_ = v_isSharedCheck_2187_;
goto v_resetjp_2132_;
}
v_resetjp_2132_:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2135_ = lean_array_get_size(v_fst_2083_);
v___x_2136_ = l_Lean_Meta_introNCore(v_snd_2131_, v___x_2135_, v_tail_2084_, v___x_2085_, v___x_2119_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2178_; 
v_a_2137_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2139_ = v___x_2136_;
v_isShared_2140_ = v_isSharedCheck_2178_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2136_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2178_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v_fst_2141_; lean_object* v_snd_2142_; lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2177_; 
v_fst_2141_ = lean_ctor_get(v_a_2137_, 0);
v_snd_2142_ = lean_ctor_get(v_a_2137_, 1);
v_isSharedCheck_2177_ = !lean_is_exclusive(v_a_2137_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2144_ = v_a_2137_;
v_isShared_2145_ = v_isSharedCheck_2177_;
goto v_resetjp_2143_;
}
else
{
lean_inc(v_snd_2142_);
lean_inc(v_fst_2141_);
lean_dec(v_a_2137_);
v___x_2144_ = lean_box(0);
v_isShared_2145_ = v_isSharedCheck_2177_;
goto v_resetjp_2143_;
}
v_resetjp_2143_:
{
lean_object* v___y_2147_; lean_object* v___x_2167_; lean_object* v___x_2168_; uint8_t v___x_2169_; 
v___x_2167_ = l_Array_zip___redArg(v_fst_2083_, v_fst_2141_);
lean_dec(v_fst_2141_);
v___x_2168_ = lean_array_get_size(v___x_2167_);
v___x_2169_ = lean_nat_dec_lt(v___x_2081_, v___x_2168_);
if (v___x_2169_ == 0)
{
lean_dec_ref(v___x_2167_);
v___y_2147_ = v_fs_2088_;
goto v___jp_2146_;
}
else
{
uint8_t v___x_2170_; 
v___x_2170_ = lean_nat_dec_le(v___x_2168_, v___x_2168_);
if (v___x_2170_ == 0)
{
if (v___x_2169_ == 0)
{
lean_dec_ref(v___x_2167_);
v___y_2147_ = v_fs_2088_;
goto v___jp_2146_;
}
else
{
size_t v___x_2171_; size_t v___x_2172_; lean_object* v___x_2173_; 
v___x_2171_ = ((size_t)0ULL);
v___x_2172_ = lean_usize_of_nat(v___x_2168_);
v___x_2173_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__6(v___x_2167_, v___x_2171_, v___x_2172_, v_fs_2088_);
lean_dec_ref(v___x_2167_);
v___y_2147_ = v___x_2173_;
goto v___jp_2146_;
}
}
else
{
size_t v___x_2174_; size_t v___x_2175_; lean_object* v___x_2176_; 
v___x_2174_ = ((size_t)0ULL);
v___x_2175_ = lean_usize_of_nat(v___x_2168_);
v___x_2176_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__6(v___x_2167_, v___x_2174_, v___x_2175_, v_fs_2088_);
lean_dec_ref(v___x_2167_);
v___y_2147_ = v___x_2176_;
goto v___jp_2146_;
}
}
v___jp_2146_:
{
lean_object* v___x_2149_; 
lean_inc(v_name_2123_);
if (v_isShared_2145_ == 0)
{
lean_ctor_set(v___x_2144_, 1, v_snd_2086_);
lean_ctor_set(v___x_2144_, 0, v_name_2123_);
v___x_2149_ = v___x_2144_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v_name_2123_);
lean_ctor_set(v_reuseFailAlloc_2166_, 1, v_snd_2086_);
v___x_2149_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2155_; 
v___x_2150_ = lean_box(0);
v___x_2151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2149_);
lean_ctor_set(v___x_2151_, 1, v___x_2150_);
v___x_2152_ = l_Lean_mkFVar(v_fst_2130_);
v___x_2153_ = lean_array_push(v___x_2087_, v___x_2152_);
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 2, v___y_2147_);
lean_ctor_set(v___x_2126_, 1, v___x_2153_);
lean_ctor_set(v___x_2126_, 0, v_snd_2142_);
v___x_2155_ = v___x_2126_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_snd_2142_);
lean_ctor_set(v_reuseFailAlloc_2165_, 1, v___x_2153_);
lean_ctor_set(v_reuseFailAlloc_2165_, 2, v___y_2147_);
v___x_2155_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2160_; 
v___x_2156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2156_, 0, v_name_2123_);
v___x_2157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2157_, 0, v___x_2155_);
lean_ctor_set(v___x_2157_, 1, v___x_2156_);
v___x_2158_ = lean_array_push(v___x_2113_, v___x_2157_);
if (v_isShared_2134_ == 0)
{
lean_ctor_set(v___x_2133_, 1, v___x_2158_);
lean_ctor_set(v___x_2133_, 0, v___x_2151_);
v___x_2160_ = v___x_2133_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v___x_2151_);
lean_ctor_set(v_reuseFailAlloc_2164_, 1, v___x_2158_);
v___x_2160_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
lean_object* v___x_2162_; 
if (v_isShared_2140_ == 0)
{
lean_ctor_set(v___x_2139_, 0, v___x_2160_);
v___x_2162_ = v___x_2139_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v___x_2160_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
return v___x_2162_;
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
lean_object* v_a_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2186_; 
lean_del_object(v___x_2133_);
lean_dec(v_fst_2130_);
lean_del_object(v___x_2126_);
lean_dec(v_name_2123_);
lean_dec_ref(v___x_2113_);
lean_dec(v_fs_2088_);
lean_dec_ref(v___x_2087_);
lean_dec(v_snd_2086_);
v_a_2179_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2186_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2186_ == 0)
{
v___x_2181_ = v___x_2136_;
v_isShared_2182_ = v_isSharedCheck_2186_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_a_2179_);
lean_dec(v___x_2136_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2186_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v___x_2184_; 
if (v_isShared_2182_ == 0)
{
v___x_2184_ = v___x_2181_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_a_2179_);
v___x_2184_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
return v___x_2184_;
}
}
}
}
}
else
{
lean_object* v_a_2188_; lean_object* v___x_2190_; uint8_t v_isShared_2191_; uint8_t v_isSharedCheck_2195_; 
lean_del_object(v___x_2126_);
lean_dec(v_name_2123_);
lean_dec_ref(v___x_2113_);
lean_dec(v_fs_2088_);
lean_dec_ref(v___x_2087_);
lean_dec(v_snd_2086_);
lean_dec(v_tail_2084_);
v_a_2188_ = lean_ctor_get(v___x_2128_, 0);
v_isSharedCheck_2195_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2190_ = v___x_2128_;
v_isShared_2191_ = v_isSharedCheck_2195_;
goto v_resetjp_2189_;
}
else
{
lean_inc(v_a_2188_);
lean_dec(v___x_2128_);
v___x_2190_ = lean_box(0);
v_isShared_2191_ = v_isSharedCheck_2195_;
goto v_resetjp_2189_;
}
v_resetjp_2189_:
{
lean_object* v___x_2193_; 
if (v_isShared_2191_ == 0)
{
v___x_2193_ = v___x_2190_;
goto v_reusejp_2192_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v_a_2188_);
v___x_2193_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2192_;
}
v_reusejp_2192_:
{
return v___x_2193_;
}
}
}
}
}
}
else
{
lean_object* v_a_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2205_; 
lean_dec_ref(v___x_2113_);
lean_dec_ref(v_alts_2103_);
lean_dec(v_fs_2088_);
lean_dec_ref(v___x_2087_);
lean_dec(v_snd_2086_);
lean_dec(v_tail_2084_);
lean_dec(v_head_2082_);
v_a_2198_ = lean_ctor_get(v___x_2117_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2200_ = v___x_2117_;
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_a_2198_);
lean_dec(v___x_2117_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2203_; 
if (v_isShared_2201_ == 0)
{
v___x_2203_ = v___x_2200_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_a_2198_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
}
}
else
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
lean_dec_ref(v___x_2113_);
lean_dec_ref(v_alts_2103_);
lean_dec_ref(v_elimApp_2102_);
lean_dec(v_fs_2088_);
lean_dec_ref(v___x_2087_);
lean_dec(v_snd_2086_);
lean_dec(v_tail_2084_);
lean_dec(v_head_2082_);
lean_dec(v_snd_2076_);
v_a_2206_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2116_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2116_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2206_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
}
else
{
lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2221_; 
lean_dec(v_a_2097_);
lean_dec(v_fs_2088_);
lean_dec_ref(v___x_2087_);
lean_dec(v_snd_2086_);
lean_dec(v_tail_2084_);
lean_dec(v_head_2082_);
lean_dec(v_snd_2076_);
v_a_2214_ = lean_ctor_get(v___x_2100_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2216_ = v___x_2100_;
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2100_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2219_; 
if (v_isShared_2217_ == 0)
{
v___x_2219_ = v___x_2216_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_a_2214_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
}
else
{
lean_object* v_a_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2229_; 
lean_dec(v_a_2097_);
lean_dec(v_fs_2088_);
lean_dec_ref(v___x_2087_);
lean_dec(v_snd_2086_);
lean_dec(v_tail_2084_);
lean_dec(v_head_2082_);
lean_dec_ref(v___x_2077_);
lean_dec(v_snd_2076_);
v_a_2222_ = lean_ctor_get(v___x_2098_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2098_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2224_ = v___x_2098_;
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_a_2222_);
lean_dec(v___x_2098_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2227_; 
if (v_isShared_2225_ == 0)
{
v___x_2227_ = v___x_2224_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_a_2222_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
}
}
else
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2237_; 
lean_dec(v_fs_2088_);
lean_dec_ref(v___x_2087_);
lean_dec(v_snd_2086_);
lean_dec(v_tail_2084_);
lean_dec(v_head_2082_);
lean_dec_ref(v___x_2077_);
lean_dec(v_snd_2076_);
v_a_2230_ = lean_ctor_get(v___x_2096_, 0);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2096_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2232_ = v___x_2096_;
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2096_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2235_; 
if (v_isShared_2233_ == 0)
{
v___x_2235_ = v___x_2232_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_a_2230_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___boxed(lean_object** _args){
lean_object* v___x_2238_ = _args[0];
lean_object* v___x_2239_ = _args[1];
lean_object* v_snd_2240_ = _args[2];
lean_object* v___x_2241_ = _args[3];
lean_object* v___x_2242_ = _args[4];
lean_object* v___x_2243_ = _args[5];
lean_object* v_e_2244_ = _args[6];
lean_object* v___x_2245_ = _args[7];
lean_object* v_head_2246_ = _args[8];
lean_object* v_fst_2247_ = _args[9];
lean_object* v_tail_2248_ = _args[10];
lean_object* v___x_2249_ = _args[11];
lean_object* v_snd_2250_ = _args[12];
lean_object* v___x_2251_ = _args[13];
lean_object* v_fs_2252_ = _args[14];
lean_object* v___y_2253_ = _args[15];
lean_object* v___y_2254_ = _args[16];
lean_object* v___y_2255_ = _args[17];
lean_object* v___y_2256_ = _args[18];
lean_object* v___y_2257_ = _args[19];
lean_object* v___y_2258_ = _args[20];
lean_object* v___y_2259_ = _args[21];
_start:
{
uint8_t v___x_20745__boxed_2260_; lean_object* v_res_2261_; 
v___x_20745__boxed_2260_ = lean_unbox(v___x_2249_);
v_res_2261_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3(v___x_2238_, v___x_2239_, v_snd_2240_, v___x_2241_, v___x_2242_, v___x_2243_, v_e_2244_, v___x_2245_, v_head_2246_, v_fst_2247_, v_tail_2248_, v___x_20745__boxed_2260_, v_snd_2250_, v___x_2251_, v_fs_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_);
lean_dec(v___y_2258_);
lean_dec_ref(v___y_2257_);
lean_dec(v___y_2256_);
lean_dec_ref(v___y_2255_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec_ref(v_fst_2247_);
lean_dec(v___x_2245_);
lean_dec_ref(v_e_2244_);
lean_dec_ref(v___x_2243_);
lean_dec(v___x_2242_);
return v_res_2261_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__0(void){
_start:
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2262_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__3));
v___x_2263_ = lean_unsigned_to_nat(76u);
v___x_2264_ = lean_unsigned_to_nat(315u);
v___x_2265_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__2));
v___x_2266_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___closed__1));
v___x_2267_ = l_mkPanicMessageWithDecl(v___x_2266_, v___x_2265_, v___x_2264_, v___x_2263_, v___x_2262_);
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4(uint8_t v___x_2275_, lean_object* v_e_2276_, lean_object* v_g_2277_, lean_object* v___x_2278_, lean_object* v_fs_2279_, lean_object* v_pat_2280_, lean_object* v_____r_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_){
_start:
{
uint8_t v___y_2293_; lean_object* v___y_2294_; lean_object* v___y_2295_; lean_object* v___y_2338_; lean_object* v___x_2344_; 
v___x_2344_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_asAlts(v_pat_2280_);
if (lean_obj_tag(v___x_2344_) == 0)
{
lean_object* v___x_2345_; 
v___x_2345_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__2));
v___y_2338_ = v___x_2345_;
goto v___jp_2337_;
}
else
{
lean_object* v_head_2346_; 
v_head_2346_ = lean_ctor_get(v___x_2344_, 0);
lean_inc(v_head_2346_);
lean_dec_ref_known(v___x_2344_, 2);
v___y_2338_ = v_head_2346_;
goto v___jp_2337_;
}
v___jp_2289_:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; 
v___x_2290_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__0, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__0_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__0);
v___x_2291_ = l_panic___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__4(v___x_2290_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_);
return v___x_2291_;
}
v___jp_2292_:
{
uint8_t v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v_fst_2304_; 
v___x_2296_ = 0;
v___x_2297_ = lean_unsigned_to_nat(0u);
v___x_2298_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__1));
v___x_2299_ = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(v___x_2299_, 0, v___x_2298_);
lean_ctor_set_uint8(v___x_2299_, sizeof(void*)*1, v___x_2296_);
lean_ctor_set_uint8(v___x_2299_, sizeof(void*)*1 + 1, v___x_2275_);
lean_ctor_set_uint8(v___x_2299_, sizeof(void*)*1 + 2, v___x_2275_);
lean_ctor_set_uint8(v___x_2299_, sizeof(void*)*1 + 3, v___x_2275_);
lean_ctor_set_uint8(v___x_2299_, sizeof(void*)*1 + 4, v___x_2275_);
lean_ctor_set_uint8(v___x_2299_, sizeof(void*)*1 + 5, v___x_2275_);
lean_ctor_set_uint8(v___x_2299_, sizeof(void*)*1 + 6, v___x_2275_);
v___x_2300_ = lean_unsigned_to_nat(1u);
v___x_2301_ = lean_mk_empty_array_with_capacity(v___x_2300_);
lean_inc_ref(v___x_2301_);
v___x_2302_ = lean_array_push(v___x_2301_, v___x_2299_);
v___x_2303_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor(v___y_2295_, v___x_2302_, v___y_2293_, v___x_2297_, v___y_2294_);
lean_dec_ref(v___x_2302_);
v_fst_2304_ = lean_ctor_get(v___x_2303_, 0);
lean_inc(v_fst_2304_);
if (lean_obj_tag(v_fst_2304_) == 1)
{
lean_object* v_tail_2305_; 
v_tail_2305_ = lean_ctor_get(v_fst_2304_, 1);
lean_inc(v_tail_2305_);
if (lean_obj_tag(v_tail_2305_) == 0)
{
lean_object* v_snd_2306_; lean_object* v_head_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; 
v_snd_2306_ = lean_ctor_get(v___x_2303_, 1);
lean_inc(v_snd_2306_);
lean_dec_ref(v___x_2303_);
v_head_2307_ = lean_ctor_get(v_fst_2304_, 0);
lean_inc(v_head_2307_);
lean_dec_ref_known(v_fst_2304_, 2);
lean_inc_ref(v_e_2276_);
lean_inc_ref(v___x_2301_);
v___x_2308_ = lean_array_push(v___x_2301_, v_e_2276_);
v___x_2309_ = lean_box(1);
v___x_2310_ = l_Lean_Meta_getFVarsToGeneralize(v___x_2308_, v___x_2309_, v___x_2275_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_);
if (lean_obj_tag(v___x_2310_) == 0)
{
lean_object* v_a_2311_; lean_object* v___x_2312_; 
v_a_2311_ = lean_ctor_get(v___x_2310_, 0);
lean_inc(v_a_2311_);
lean_dec_ref_known(v___x_2310_, 1);
v___x_2312_ = l_Lean_MVarId_revert(v_g_2277_, v_a_2311_, v___x_2275_, v___x_2275_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_);
if (lean_obj_tag(v___x_2312_) == 0)
{
lean_object* v_a_2313_; lean_object* v_fst_2314_; lean_object* v_snd_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___f_2319_; lean_object* v___x_2320_; 
v_a_2313_ = lean_ctor_get(v___x_2312_, 0);
lean_inc(v_a_2313_);
lean_dec_ref_known(v___x_2312_, 1);
v_fst_2314_ = lean_ctor_get(v_a_2313_, 0);
lean_inc(v_fst_2314_);
v_snd_2315_ = lean_ctor_get(v_a_2313_, 1);
lean_inc_n(v_snd_2315_, 2);
lean_dec(v_a_2313_);
v___x_2316_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__4));
v___x_2317_ = lean_box(0);
v___x_2318_ = lean_box(v___x_2275_);
v___f_2319_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__3___boxed), 22, 15);
lean_closure_set(v___f_2319_, 0, v___x_2316_);
lean_closure_set(v___f_2319_, 1, v___x_2317_);
lean_closure_set(v___f_2319_, 2, v_snd_2315_);
lean_closure_set(v___f_2319_, 3, v___x_2308_);
lean_closure_set(v___f_2319_, 4, v___x_2300_);
lean_closure_set(v___f_2319_, 5, v___x_2278_);
lean_closure_set(v___f_2319_, 6, v_e_2276_);
lean_closure_set(v___f_2319_, 7, v___x_2297_);
lean_closure_set(v___f_2319_, 8, v_head_2307_);
lean_closure_set(v___f_2319_, 9, v_fst_2314_);
lean_closure_set(v___f_2319_, 10, v_tail_2305_);
lean_closure_set(v___f_2319_, 11, v___x_2318_);
lean_closure_set(v___f_2319_, 12, v_snd_2306_);
lean_closure_set(v___f_2319_, 13, v___x_2301_);
lean_closure_set(v___f_2319_, 14, v_fs_2279_);
v___x_2320_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg(v_snd_2315_, v___f_2319_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_);
return v___x_2320_;
}
else
{
lean_object* v_a_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2328_; 
lean_dec_ref(v___x_2308_);
lean_dec(v_head_2307_);
lean_dec(v_snd_2306_);
lean_dec_ref(v___x_2301_);
lean_dec(v_fs_2279_);
lean_dec_ref(v___x_2278_);
lean_dec_ref(v_e_2276_);
v_a_2321_ = lean_ctor_get(v___x_2312_, 0);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___x_2312_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2323_ = v___x_2312_;
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_a_2321_);
lean_dec(v___x_2312_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
lean_object* v___x_2326_; 
if (v_isShared_2324_ == 0)
{
v___x_2326_ = v___x_2323_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v_a_2321_);
v___x_2326_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
return v___x_2326_;
}
}
}
}
else
{
lean_object* v_a_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2336_; 
lean_dec_ref(v___x_2308_);
lean_dec(v_head_2307_);
lean_dec(v_snd_2306_);
lean_dec_ref(v___x_2301_);
lean_dec(v_fs_2279_);
lean_dec_ref(v___x_2278_);
lean_dec(v_g_2277_);
lean_dec_ref(v_e_2276_);
v_a_2329_ = lean_ctor_get(v___x_2310_, 0);
v_isSharedCheck_2336_ = !lean_is_exclusive(v___x_2310_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2331_ = v___x_2310_;
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_a_2329_);
lean_dec(v___x_2310_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2334_; 
if (v_isShared_2332_ == 0)
{
v___x_2334_ = v___x_2331_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_a_2329_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
}
}
else
{
lean_dec_ref_known(v_fst_2304_, 2);
lean_dec(v_tail_2305_);
lean_dec_ref(v___x_2303_);
lean_dec_ref(v___x_2301_);
lean_dec(v_fs_2279_);
lean_dec_ref(v___x_2278_);
lean_dec(v_g_2277_);
lean_dec_ref(v_e_2276_);
goto v___jp_2289_;
}
}
else
{
lean_dec(v_fst_2304_);
lean_dec_ref(v___x_2303_);
lean_dec_ref(v___x_2301_);
lean_dec(v_fs_2279_);
lean_dec_ref(v___x_2278_);
lean_dec(v_g_2277_);
lean_dec_ref(v_e_2276_);
goto v___jp_2289_;
}
}
v___jp_2337_:
{
lean_object* v___x_2339_; lean_object* v_fst_2340_; lean_object* v_snd_2341_; lean_object* v_ref_2342_; uint8_t v___x_2343_; 
lean_inc_ref(v___y_2338_);
v___x_2339_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_asTuple(v___y_2338_);
v_fst_2340_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_fst_2340_);
v_snd_2341_ = lean_ctor_get(v___x_2339_, 1);
lean_inc(v_snd_2341_);
lean_dec_ref(v___x_2339_);
v_ref_2342_ = lean_ctor_get(v___y_2338_, 0);
lean_inc(v_ref_2342_);
lean_dec_ref(v___y_2338_);
v___x_2343_ = lean_unbox(v_fst_2340_);
lean_dec(v_fst_2340_);
v___y_2293_ = v___x_2343_;
v___y_2294_ = v_snd_2341_;
v___y_2295_ = v_ref_2342_;
goto v___jp_2292_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___boxed(lean_object* v___x_2347_, lean_object* v_e_2348_, lean_object* v_g_2349_, lean_object* v___x_2350_, lean_object* v_fs_2351_, lean_object* v_pat_2352_, lean_object* v_____r_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_){
_start:
{
uint8_t v___x_21117__boxed_2361_; lean_object* v_res_2362_; 
v___x_21117__boxed_2361_ = lean_unbox(v___x_2347_);
v_res_2362_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4(v___x_21117__boxed_2361_, v_e_2348_, v_g_2349_, v___x_2350_, v_fs_2351_, v_pat_2352_, v_____r_2353_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_);
lean_dec(v___y_2359_);
lean_dec_ref(v___y_2358_);
lean_dec(v___y_2357_);
lean_dec_ref(v___y_2356_);
lean_dec(v___y_2355_);
lean_dec_ref(v___y_2354_);
return v_res_2362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___redArg___lam__0___boxed(lean_object* v_tail_2363_, lean_object* v_cont_2364_, lean_object* v_g_2365_, lean_object* v_fs_2366_, lean_object* v_clears_2367_, lean_object* v_a_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_){
_start:
{
lean_object* v_res_2376_; 
v_res_2376_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___redArg___lam__0(v_tail_2363_, v_cont_2364_, v_g_2365_, v_fs_2366_, v_clears_2367_, v_a_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_);
lean_dec(v___y_2374_);
lean_dec_ref(v___y_2373_);
lean_dec(v___y_2372_);
lean_dec_ref(v___y_2371_);
lean_dec(v___y_2370_);
lean_dec_ref(v___y_2369_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__2(lean_object* v_e_2378_, lean_object* v_g_2379_, lean_object* v_fs_2380_, lean_object* v_clears_2381_, lean_object* v_a_2382_, lean_object* v_cont_2383_, lean_object* v_ref_2384_, lean_object* v_p_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_){
_start:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; uint8_t v___x_2397_; lean_object* v___x_2398_; 
v___x_2393_ = lean_box(0);
lean_inc_ref(v_e_2378_);
v___x_2394_ = l_Lean_Expr_mdata___override(v___x_2393_, v_e_2378_);
v___x_2395_ = lean_box(0);
v___x_2396_ = lean_box(0);
v___x_2397_ = 0;
v___x_2398_ = l_Lean_Elab_Term_addTermInfo_x27(v_ref_2384_, v___x_2394_, v___x_2395_, v___x_2395_, v___x_2396_, v___x_2397_, v___x_2397_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_);
if (lean_obj_tag(v___x_2398_) == 0)
{
lean_object* v___x_2399_; 
lean_dec_ref_known(v___x_2398_, 1);
v___x_2399_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg(v_g_2379_, v_fs_2380_, v_clears_2381_, v_e_2378_, v_a_2382_, v_p_2385_, v_cont_2383_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_);
lean_dec_ref(v_e_2378_);
return v___x_2399_;
}
else
{
lean_object* v_a_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2407_; 
lean_dec_ref(v_p_2385_);
lean_dec_ref(v_cont_2383_);
lean_dec(v_a_2382_);
lean_dec_ref(v_clears_2381_);
lean_dec(v_fs_2380_);
lean_dec(v_g_2379_);
lean_dec_ref(v_e_2378_);
v_a_2400_ = lean_ctor_get(v___x_2398_, 0);
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2398_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2402_ = v___x_2398_;
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_a_2400_);
lean_dec(v___x_2398_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2405_; 
if (v_isShared_2403_ == 0)
{
v___x_2405_ = v___x_2402_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_a_2400_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
return v___x_2405_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__2___boxed(lean_object* v_e_2408_, lean_object* v_g_2409_, lean_object* v_fs_2410_, lean_object* v_clears_2411_, lean_object* v_a_2412_, lean_object* v_cont_2413_, lean_object* v_ref_2414_, lean_object* v_p_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__2(v_e_2408_, v_g_2409_, v_fs_2410_, v_clears_2411_, v_a_2412_, v_cont_2413_, v_ref_2414_, v_p_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_);
lean_dec(v___y_2421_);
lean_dec_ref(v___y_2420_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align___redArg(lean_object* v_fs_2424_, lean_object* v_clears_2425_, lean_object* v_cont_2426_, lean_object* v_a_2427_, lean_object* v_goal_2428_, lean_object* v_ctorName_2429_, lean_object* v_a_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_){
_start:
{
if (lean_obj_tag(v_a_2430_) == 0)
{
lean_object* v___x_2438_; lean_object* v___x_2439_; 
lean_dec_ref(v_goal_2428_);
lean_dec_ref(v_cont_2426_);
lean_dec_ref(v_clears_2425_);
lean_dec(v_fs_2424_);
v___x_2438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2438_, 0, v_a_2430_);
lean_ctor_set(v___x_2438_, 1, v_a_2427_);
v___x_2439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2438_);
return v___x_2439_;
}
else
{
lean_object* v_head_2440_; lean_object* v_tail_2441_; lean_object* v_fst_2442_; lean_object* v_snd_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2476_; 
v_head_2440_ = lean_ctor_get(v_a_2430_, 0);
lean_inc(v_head_2440_);
v_tail_2441_ = lean_ctor_get(v_a_2430_, 1);
lean_inc(v_tail_2441_);
lean_dec_ref_known(v_a_2430_, 2);
v_fst_2442_ = lean_ctor_get(v_head_2440_, 0);
v_snd_2443_ = lean_ctor_get(v_head_2440_, 1);
v_isSharedCheck_2476_ = !lean_is_exclusive(v_head_2440_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2445_ = v_head_2440_;
v_isShared_2446_ = v_isSharedCheck_2476_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_snd_2443_);
lean_inc(v_fst_2442_);
lean_dec(v_head_2440_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2476_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v___x_2447_; uint8_t v___x_2448_; 
v___x_2447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2447_, 0, v_fst_2442_);
v___x_2448_ = l_Option_instBEq_beq___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align_spec__0(v___x_2447_, v_ctorName_2429_);
lean_dec_ref_known(v___x_2447_, 1);
if (v___x_2448_ == 0)
{
lean_del_object(v___x_2445_);
lean_dec(v_snd_2443_);
v_a_2430_ = v_tail_2441_;
goto _start;
}
else
{
lean_object* v_mvarId_2450_; lean_object* v_fields_2451_; lean_object* v_subst_2452_; lean_object* v_fs_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v_mvarId_2450_ = lean_ctor_get(v_goal_2428_, 0);
lean_inc(v_mvarId_2450_);
v_fields_2451_ = lean_ctor_get(v_goal_2428_, 1);
lean_inc_ref(v_fields_2451_);
v_subst_2452_ = lean_ctor_get(v_goal_2428_, 2);
lean_inc(v_subst_2452_);
lean_dec_ref(v_goal_2428_);
v_fs_2453_ = l_Lean_Meta_FVarSubst_append(v_fs_2424_, v_subst_2452_);
v___x_2454_ = lean_array_to_list(v_fields_2451_);
v___x_2455_ = l_List_zipWith___at___00List_zip_spec__0(lean_box(0), lean_box(0), v_snd_2443_, v___x_2454_);
v___x_2456_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___redArg(v_mvarId_2450_, v_fs_2453_, v_clears_2425_, v_a_2427_, v___x_2455_, v_cont_2426_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_);
if (lean_obj_tag(v___x_2456_) == 0)
{
lean_object* v_a_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2467_; 
v_a_2457_ = lean_ctor_get(v___x_2456_, 0);
v_isSharedCheck_2467_ = !lean_is_exclusive(v___x_2456_);
if (v_isSharedCheck_2467_ == 0)
{
v___x_2459_ = v___x_2456_;
v_isShared_2460_ = v_isSharedCheck_2467_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_a_2457_);
lean_dec(v___x_2456_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2467_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
lean_object* v___x_2462_; 
if (v_isShared_2446_ == 0)
{
lean_ctor_set(v___x_2445_, 1, v_a_2457_);
lean_ctor_set(v___x_2445_, 0, v_tail_2441_);
v___x_2462_ = v___x_2445_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_tail_2441_);
lean_ctor_set(v_reuseFailAlloc_2466_, 1, v_a_2457_);
v___x_2462_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
lean_object* v___x_2464_; 
if (v_isShared_2460_ == 0)
{
lean_ctor_set(v___x_2459_, 0, v___x_2462_);
v___x_2464_ = v___x_2459_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v___x_2462_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
}
}
else
{
lean_object* v_a_2468_; lean_object* v___x_2470_; uint8_t v_isShared_2471_; uint8_t v_isSharedCheck_2475_; 
lean_del_object(v___x_2445_);
lean_dec(v_tail_2441_);
v_a_2468_ = lean_ctor_get(v___x_2456_, 0);
v_isSharedCheck_2475_ = !lean_is_exclusive(v___x_2456_);
if (v_isSharedCheck_2475_ == 0)
{
v___x_2470_ = v___x_2456_;
v_isShared_2471_ = v_isSharedCheck_2475_;
goto v_resetjp_2469_;
}
else
{
lean_inc(v_a_2468_);
lean_dec(v___x_2456_);
v___x_2470_ = lean_box(0);
v_isShared_2471_ = v_isSharedCheck_2475_;
goto v_resetjp_2469_;
}
v_resetjp_2469_:
{
lean_object* v___x_2473_; 
if (v_isShared_2471_ == 0)
{
v___x_2473_ = v___x_2470_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v_a_2468_);
v___x_2473_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
return v___x_2473_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__3___redArg(lean_object* v_fs_2477_, lean_object* v_clears_2478_, lean_object* v_cont_2479_, lean_object* v_as_2480_, size_t v_i_2481_, size_t v_stop_2482_, lean_object* v_b_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_){
_start:
{
uint8_t v___x_2491_; 
v___x_2491_ = lean_usize_dec_eq(v_i_2481_, v_stop_2482_);
if (v___x_2491_ == 0)
{
lean_object* v_fst_2492_; lean_object* v_snd_2493_; lean_object* v___x_2494_; lean_object* v_toInductionSubgoal_2495_; lean_object* v_ctorName_2496_; lean_object* v___x_2497_; 
v_fst_2492_ = lean_ctor_get(v_b_2483_, 0);
lean_inc(v_fst_2492_);
v_snd_2493_ = lean_ctor_get(v_b_2483_, 1);
lean_inc(v_snd_2493_);
lean_dec_ref(v_b_2483_);
v___x_2494_ = lean_array_uget_borrowed(v_as_2480_, v_i_2481_);
v_toInductionSubgoal_2495_ = lean_ctor_get(v___x_2494_, 0);
v_ctorName_2496_ = lean_ctor_get(v___x_2494_, 1);
lean_inc_ref(v_toInductionSubgoal_2495_);
lean_inc_ref(v_cont_2479_);
lean_inc_ref(v_clears_2478_);
lean_inc(v_fs_2477_);
v___x_2497_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align___redArg(v_fs_2477_, v_clears_2478_, v_cont_2479_, v_snd_2493_, v_toInductionSubgoal_2495_, v_ctorName_2496_, v_fst_2492_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_);
if (lean_obj_tag(v___x_2497_) == 0)
{
lean_object* v_a_2498_; size_t v___x_2499_; size_t v___x_2500_; 
v_a_2498_ = lean_ctor_get(v___x_2497_, 0);
lean_inc(v_a_2498_);
lean_dec_ref_known(v___x_2497_, 1);
v___x_2499_ = ((size_t)1ULL);
v___x_2500_ = lean_usize_add(v_i_2481_, v___x_2499_);
v_i_2481_ = v___x_2500_;
v_b_2483_ = v_a_2498_;
goto _start;
}
else
{
lean_dec_ref(v_cont_2479_);
lean_dec_ref(v_clears_2478_);
lean_dec(v_fs_2477_);
return v___x_2497_;
}
}
else
{
lean_object* v___x_2502_; 
lean_dec_ref(v_cont_2479_);
lean_dec_ref(v_clears_2478_);
lean_dec(v_fs_2477_);
v___x_2502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2502_, 0, v_b_2483_);
return v___x_2502_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__6(lean_object* v_a_2505_, lean_object* v_fs_2506_, lean_object* v_clears_2507_, lean_object* v_cont_2508_, lean_object* v_e_2509_, lean_object* v_g_2510_, lean_object* v___x_2511_, lean_object* v_pat_2512_, lean_object* v___y_2513_, lean_object* v_asFVar_2514_, lean_object* v_x_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_){
_start:
{
lean_object* v___y_2524_; lean_object* v_fst_2543_; lean_object* v_snd_2544_; lean_object* v___y_2559_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; uint8_t v___x_2575_; lean_object* v___x_2576_; 
v___x_2571_ = lean_box(0);
lean_inc_ref(v_e_2509_);
v___x_2572_ = l_Lean_Expr_mdata___override(v___x_2571_, v_e_2509_);
v___x_2573_ = lean_box(0);
v___x_2574_ = lean_box(0);
v___x_2575_ = 0;
lean_inc(v___y_2513_);
v___x_2576_ = l_Lean_Elab_Term_addTermInfo_x27(v___y_2513_, v___x_2572_, v___x_2573_, v___x_2573_, v___x_2574_, v___x_2575_, v___x_2575_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
if (lean_obj_tag(v___x_2576_) == 0)
{
lean_object* v___x_2577_; 
lean_dec_ref_known(v___x_2576_, 1);
lean_inc(v___y_2521_);
lean_inc_ref(v___y_2520_);
lean_inc(v___y_2519_);
lean_inc_ref(v___y_2518_);
lean_inc_ref(v_e_2509_);
v___x_2577_ = lean_apply_6(v_asFVar_2514_, v_e_2509_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, lean_box(0));
if (lean_obj_tag(v___x_2577_) == 0)
{
lean_object* v___x_2578_; 
lean_dec_ref_known(v___x_2577_, 1);
v___x_2578_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_2575_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v___x_2579_; 
lean_dec_ref_known(v___x_2578_, 1);
lean_inc(v___y_2521_);
lean_inc_ref(v___y_2520_);
lean_inc(v___y_2519_);
lean_inc_ref(v___y_2518_);
lean_inc_ref(v_e_2509_);
v___x_2579_ = lean_infer_type(v_e_2509_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v_a_2580_; lean_object* v___x_2581_; 
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
lean_inc(v_a_2580_);
lean_dec_ref_known(v___x_2579_, 1);
v___x_2581_ = l_Lean_Meta_whnfD(v_a_2580_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
if (lean_obj_tag(v___x_2581_) == 0)
{
lean_object* v_a_2582_; lean_object* v___x_2583_; 
v_a_2582_ = lean_ctor_get(v___x_2581_, 0);
lean_inc(v_a_2582_);
lean_dec_ref_known(v___x_2581_, 1);
v___x_2583_ = l_Lean_Expr_getAppFn(v_a_2582_);
if (lean_obj_tag(v___x_2583_) == 4)
{
lean_object* v_declName_2584_; lean_object* v___x_2585_; lean_object* v_env_2586_; lean_object* v___x_2587_; 
v_declName_2584_ = lean_ctor_get(v___x_2583_, 0);
lean_inc(v_declName_2584_);
lean_dec_ref_known(v___x_2583_, 2);
v___x_2585_ = lean_st_ref_get(v___y_2521_);
v_env_2586_ = lean_ctor_get(v___x_2585_, 0);
lean_inc_ref(v_env_2586_);
lean_dec(v___x_2585_);
v___x_2587_ = l_Lean_Environment_find_x3f(v_env_2586_, v_declName_2584_, v___x_2575_);
if (lean_obj_tag(v___x_2587_) == 0)
{
lean_object* v___x_2588_; lean_object* v___x_2589_; 
lean_dec(v___y_2513_);
lean_dec_ref(v_pat_2512_);
lean_dec_ref(v___x_2511_);
lean_dec(v_g_2510_);
v___x_2588_ = lean_box(0);
v___x_2589_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5(v_e_2509_, v_a_2582_, lean_box(0), v___x_2588_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
v___y_2559_ = v___x_2589_;
goto v___jp_2558_;
}
else
{
lean_object* v_val_2590_; 
v_val_2590_ = lean_ctor_get(v___x_2587_, 0);
lean_inc(v_val_2590_);
lean_dec_ref_known(v___x_2587_, 1);
switch(lean_obj_tag(v_val_2590_))
{
case 4:
{
lean_object* v_val_2591_; uint8_t v_kind_2592_; 
lean_dec(v___y_2513_);
v_val_2591_ = lean_ctor_get(v_val_2590_, 0);
lean_inc_ref(v_val_2591_);
lean_dec_ref_known(v_val_2590_, 1);
v_kind_2592_ = lean_ctor_get_uint8(v_val_2591_, sizeof(void*)*1);
lean_dec_ref(v_val_2591_);
if (v_kind_2592_ == 0)
{
lean_object* v___x_2593_; lean_object* v___x_2594_; 
lean_dec(v_a_2582_);
v___x_2593_ = lean_box(0);
lean_inc(v_fs_2506_);
v___x_2594_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4(v___x_2575_, v_e_2509_, v_g_2510_, v___x_2511_, v_fs_2506_, v_pat_2512_, v___x_2593_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
v___y_2559_ = v___x_2594_;
goto v___jp_2558_;
}
else
{
lean_object* v___x_2595_; lean_object* v___x_2596_; 
v___x_2595_ = lean_box(0);
lean_inc_ref(v_e_2509_);
v___x_2596_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5(v_e_2509_, v_a_2582_, lean_box(0), v___x_2595_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
if (lean_obj_tag(v___x_2596_) == 0)
{
lean_object* v_a_2597_; lean_object* v___x_2598_; 
v_a_2597_ = lean_ctor_get(v___x_2596_, 0);
lean_inc(v_a_2597_);
lean_dec_ref_known(v___x_2596_, 1);
lean_inc(v_fs_2506_);
v___x_2598_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4(v___x_2575_, v_e_2509_, v_g_2510_, v___x_2511_, v_fs_2506_, v_pat_2512_, v_a_2597_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
v___y_2559_ = v___x_2598_;
goto v___jp_2558_;
}
else
{
lean_object* v_a_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2606_; 
lean_dec_ref(v_pat_2512_);
lean_dec_ref(v___x_2511_);
lean_dec(v_g_2510_);
lean_dec_ref(v_e_2509_);
lean_dec_ref(v_cont_2508_);
lean_dec_ref(v_clears_2507_);
lean_dec(v_fs_2506_);
lean_dec(v_a_2505_);
v_a_2599_ = lean_ctor_get(v___x_2596_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2601_ = v___x_2596_;
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_a_2599_);
lean_dec(v___x_2596_);
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
case 5:
{
lean_object* v_val_2607_; lean_object* v_numParams_2608_; lean_object* v_ctors_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
lean_dec(v_a_2582_);
lean_dec_ref(v___x_2511_);
v_val_2607_ = lean_ctor_get(v_val_2590_, 0);
lean_inc_ref(v_val_2607_);
lean_dec_ref_known(v_val_2590_, 1);
v_numParams_2608_ = lean_ctor_get(v_val_2607_, 1);
lean_inc(v_numParams_2608_);
v_ctors_2609_ = lean_ctor_get(v_val_2607_, 4);
lean_inc(v_ctors_2609_);
lean_dec_ref(v_val_2607_);
v___x_2610_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__6___closed__0));
v___x_2611_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_asAlts(v_pat_2512_);
v___x_2612_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors(v___y_2513_, v_numParams_2608_, v___x_2610_, v_ctors_2609_, v___x_2611_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
lean_dec(v_numParams_2608_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v_a_2613_; lean_object* v_fst_2614_; lean_object* v_snd_2615_; lean_object* v___x_2616_; uint8_t v___x_2617_; lean_object* v___x_2618_; 
v_a_2613_ = lean_ctor_get(v___x_2612_, 0);
lean_inc(v_a_2613_);
lean_dec_ref_known(v___x_2612_, 1);
v_fst_2614_ = lean_ctor_get(v_a_2613_, 0);
lean_inc(v_fst_2614_);
v_snd_2615_ = lean_ctor_get(v_a_2613_, 1);
lean_inc(v_snd_2615_);
lean_dec(v_a_2613_);
v___x_2616_ = l_Lean_Expr_fvarId_x21(v_e_2509_);
lean_dec_ref(v_e_2509_);
v___x_2617_ = 1;
v___x_2618_ = l_Lean_MVarId_cases(v_g_2510_, v___x_2616_, v_fst_2614_, v___x_2617_, v___x_2573_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
if (lean_obj_tag(v___x_2618_) == 0)
{
lean_object* v_a_2619_; 
v_a_2619_ = lean_ctor_get(v___x_2618_, 0);
lean_inc(v_a_2619_);
lean_dec_ref_known(v___x_2618_, 1);
v_fst_2543_ = v_snd_2615_;
v_snd_2544_ = v_a_2619_;
goto v___jp_2542_;
}
else
{
lean_object* v_a_2620_; lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2627_; 
lean_dec(v_snd_2615_);
lean_dec_ref(v_cont_2508_);
lean_dec_ref(v_clears_2507_);
lean_dec(v_fs_2506_);
lean_dec(v_a_2505_);
v_a_2620_ = lean_ctor_get(v___x_2618_, 0);
v_isSharedCheck_2627_ = !lean_is_exclusive(v___x_2618_);
if (v_isSharedCheck_2627_ == 0)
{
v___x_2622_ = v___x_2618_;
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
else
{
lean_inc(v_a_2620_);
lean_dec(v___x_2618_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
v_resetjp_2621_:
{
lean_object* v___x_2625_; 
if (v_isShared_2623_ == 0)
{
v___x_2625_ = v___x_2622_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2626_; 
v_reuseFailAlloc_2626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2626_, 0, v_a_2620_);
v___x_2625_ = v_reuseFailAlloc_2626_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
return v___x_2625_;
}
}
}
}
else
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2635_; 
lean_dec(v_g_2510_);
lean_dec_ref(v_e_2509_);
lean_dec_ref(v_cont_2508_);
lean_dec_ref(v_clears_2507_);
lean_dec(v_fs_2506_);
lean_dec(v_a_2505_);
v_a_2628_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2630_ = v___x_2612_;
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v___x_2612_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v___x_2633_; 
if (v_isShared_2631_ == 0)
{
v___x_2633_ = v___x_2630_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_a_2628_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
}
default: 
{
lean_object* v___x_2636_; lean_object* v___x_2637_; 
lean_dec(v_val_2590_);
lean_dec(v___y_2513_);
lean_dec_ref(v_pat_2512_);
lean_dec_ref(v___x_2511_);
lean_dec(v_g_2510_);
v___x_2636_ = lean_box(0);
v___x_2637_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5(v_e_2509_, v_a_2582_, lean_box(0), v___x_2636_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
v___y_2559_ = v___x_2637_;
goto v___jp_2558_;
}
}
}
}
else
{
lean_object* v___x_2638_; lean_object* v___x_2639_; 
lean_dec_ref(v___x_2583_);
lean_dec(v___y_2513_);
lean_dec_ref(v_pat_2512_);
lean_dec_ref(v___x_2511_);
lean_dec(v_g_2510_);
v___x_2638_ = lean_box(0);
v___x_2639_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__5(v_e_2509_, v_a_2582_, lean_box(0), v___x_2638_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
v___y_2559_ = v___x_2639_;
goto v___jp_2558_;
}
}
else
{
lean_object* v_a_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2647_; 
lean_dec(v___y_2513_);
lean_dec_ref(v_pat_2512_);
lean_dec_ref(v___x_2511_);
lean_dec(v_g_2510_);
lean_dec_ref(v_e_2509_);
lean_dec_ref(v_cont_2508_);
lean_dec_ref(v_clears_2507_);
lean_dec(v_fs_2506_);
lean_dec(v_a_2505_);
v_a_2640_ = lean_ctor_get(v___x_2581_, 0);
v_isSharedCheck_2647_ = !lean_is_exclusive(v___x_2581_);
if (v_isSharedCheck_2647_ == 0)
{
v___x_2642_ = v___x_2581_;
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_a_2640_);
lean_dec(v___x_2581_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v___x_2645_; 
if (v_isShared_2643_ == 0)
{
v___x_2645_ = v___x_2642_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_a_2640_);
v___x_2645_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
return v___x_2645_;
}
}
}
}
else
{
lean_object* v_a_2648_; lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2655_; 
lean_dec(v___y_2513_);
lean_dec_ref(v_pat_2512_);
lean_dec_ref(v___x_2511_);
lean_dec(v_g_2510_);
lean_dec_ref(v_e_2509_);
lean_dec_ref(v_cont_2508_);
lean_dec_ref(v_clears_2507_);
lean_dec(v_fs_2506_);
lean_dec(v_a_2505_);
v_a_2648_ = lean_ctor_get(v___x_2579_, 0);
v_isSharedCheck_2655_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2655_ == 0)
{
v___x_2650_ = v___x_2579_;
v_isShared_2651_ = v_isSharedCheck_2655_;
goto v_resetjp_2649_;
}
else
{
lean_inc(v_a_2648_);
lean_dec(v___x_2579_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2655_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
lean_object* v___x_2653_; 
if (v_isShared_2651_ == 0)
{
v___x_2653_ = v___x_2650_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v_a_2648_);
v___x_2653_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
return v___x_2653_;
}
}
}
}
else
{
lean_object* v_a_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2663_; 
lean_dec(v___y_2513_);
lean_dec_ref(v_pat_2512_);
lean_dec_ref(v___x_2511_);
lean_dec(v_g_2510_);
lean_dec_ref(v_e_2509_);
lean_dec_ref(v_cont_2508_);
lean_dec_ref(v_clears_2507_);
lean_dec(v_fs_2506_);
lean_dec(v_a_2505_);
v_a_2656_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2663_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2663_ == 0)
{
v___x_2658_ = v___x_2578_;
v_isShared_2659_ = v_isSharedCheck_2663_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_a_2656_);
lean_dec(v___x_2578_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2663_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
lean_object* v___x_2661_; 
if (v_isShared_2659_ == 0)
{
v___x_2661_ = v___x_2658_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2662_; 
v_reuseFailAlloc_2662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2662_, 0, v_a_2656_);
v___x_2661_ = v_reuseFailAlloc_2662_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
return v___x_2661_;
}
}
}
}
else
{
lean_object* v_a_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2671_; 
lean_dec(v___y_2513_);
lean_dec_ref(v_pat_2512_);
lean_dec_ref(v___x_2511_);
lean_dec(v_g_2510_);
lean_dec_ref(v_e_2509_);
lean_dec_ref(v_cont_2508_);
lean_dec_ref(v_clears_2507_);
lean_dec(v_fs_2506_);
lean_dec(v_a_2505_);
v_a_2664_ = lean_ctor_get(v___x_2577_, 0);
v_isSharedCheck_2671_ = !lean_is_exclusive(v___x_2577_);
if (v_isSharedCheck_2671_ == 0)
{
v___x_2666_ = v___x_2577_;
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_a_2664_);
lean_dec(v___x_2577_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2669_; 
if (v_isShared_2667_ == 0)
{
v___x_2669_ = v___x_2666_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v_a_2664_);
v___x_2669_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
return v___x_2669_;
}
}
}
}
else
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2679_; 
lean_dec_ref(v_asFVar_2514_);
lean_dec(v___y_2513_);
lean_dec_ref(v_pat_2512_);
lean_dec_ref(v___x_2511_);
lean_dec(v_g_2510_);
lean_dec_ref(v_e_2509_);
lean_dec_ref(v_cont_2508_);
lean_dec_ref(v_clears_2507_);
lean_dec(v_fs_2506_);
lean_dec(v_a_2505_);
v_a_2672_ = lean_ctor_get(v___x_2576_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2576_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2674_ = v___x_2576_;
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2576_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2677_; 
if (v_isShared_2675_ == 0)
{
v___x_2677_ = v___x_2674_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_a_2672_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
v___jp_2523_:
{
if (lean_obj_tag(v___y_2524_) == 0)
{
lean_object* v_a_2525_; lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2533_; 
v_a_2525_ = lean_ctor_get(v___y_2524_, 0);
v_isSharedCheck_2533_ = !lean_is_exclusive(v___y_2524_);
if (v_isSharedCheck_2533_ == 0)
{
v___x_2527_ = v___y_2524_;
v_isShared_2528_ = v_isSharedCheck_2533_;
goto v_resetjp_2526_;
}
else
{
lean_inc(v_a_2525_);
lean_dec(v___y_2524_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2533_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
lean_object* v_snd_2529_; lean_object* v___x_2531_; 
v_snd_2529_ = lean_ctor_get(v_a_2525_, 1);
lean_inc(v_snd_2529_);
lean_dec(v_a_2525_);
if (v_isShared_2528_ == 0)
{
lean_ctor_set(v___x_2527_, 0, v_snd_2529_);
v___x_2531_ = v___x_2527_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_snd_2529_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
return v___x_2531_;
}
}
}
else
{
lean_object* v_a_2534_; lean_object* v___x_2536_; uint8_t v_isShared_2537_; uint8_t v_isSharedCheck_2541_; 
v_a_2534_ = lean_ctor_get(v___y_2524_, 0);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___y_2524_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2536_ = v___y_2524_;
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
else
{
lean_inc(v_a_2534_);
lean_dec(v___y_2524_);
v___x_2536_ = lean_box(0);
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
v_resetjp_2535_:
{
lean_object* v___x_2539_; 
if (v_isShared_2537_ == 0)
{
v___x_2539_ = v___x_2536_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v_a_2534_);
v___x_2539_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
return v___x_2539_;
}
}
}
}
v___jp_2542_:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; uint8_t v___x_2547_; 
v___x_2545_ = lean_unsigned_to_nat(0u);
v___x_2546_ = lean_array_get_size(v_snd_2544_);
v___x_2547_ = lean_nat_dec_lt(v___x_2545_, v___x_2546_);
if (v___x_2547_ == 0)
{
lean_object* v___x_2548_; 
lean_dec_ref(v_snd_2544_);
lean_dec(v_fst_2543_);
lean_dec_ref(v_cont_2508_);
lean_dec_ref(v_clears_2507_);
lean_dec(v_fs_2506_);
v___x_2548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2548_, 0, v_a_2505_);
return v___x_2548_;
}
else
{
lean_object* v___x_2549_; uint8_t v___x_2550_; 
lean_inc(v_a_2505_);
v___x_2549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2549_, 0, v_fst_2543_);
lean_ctor_set(v___x_2549_, 1, v_a_2505_);
v___x_2550_ = lean_nat_dec_le(v___x_2546_, v___x_2546_);
if (v___x_2550_ == 0)
{
if (v___x_2547_ == 0)
{
lean_object* v___x_2551_; 
lean_dec_ref_known(v___x_2549_, 2);
lean_dec_ref(v_snd_2544_);
lean_dec_ref(v_cont_2508_);
lean_dec_ref(v_clears_2507_);
lean_dec(v_fs_2506_);
v___x_2551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2551_, 0, v_a_2505_);
return v___x_2551_;
}
else
{
size_t v___x_2552_; size_t v___x_2553_; lean_object* v___x_2554_; 
lean_dec(v_a_2505_);
v___x_2552_ = ((size_t)0ULL);
v___x_2553_ = lean_usize_of_nat(v___x_2546_);
v___x_2554_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__3___redArg(v_fs_2506_, v_clears_2507_, v_cont_2508_, v_snd_2544_, v___x_2552_, v___x_2553_, v___x_2549_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
lean_dec_ref(v_snd_2544_);
v___y_2524_ = v___x_2554_;
goto v___jp_2523_;
}
}
else
{
size_t v___x_2555_; size_t v___x_2556_; lean_object* v___x_2557_; 
lean_dec(v_a_2505_);
v___x_2555_ = ((size_t)0ULL);
v___x_2556_ = lean_usize_of_nat(v___x_2546_);
v___x_2557_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__3___redArg(v_fs_2506_, v_clears_2507_, v_cont_2508_, v_snd_2544_, v___x_2555_, v___x_2556_, v___x_2549_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
lean_dec_ref(v_snd_2544_);
v___y_2524_ = v___x_2557_;
goto v___jp_2523_;
}
}
}
v___jp_2558_:
{
if (lean_obj_tag(v___y_2559_) == 0)
{
lean_object* v_a_2560_; lean_object* v_fst_2561_; lean_object* v_snd_2562_; 
v_a_2560_ = lean_ctor_get(v___y_2559_, 0);
lean_inc(v_a_2560_);
lean_dec_ref_known(v___y_2559_, 1);
v_fst_2561_ = lean_ctor_get(v_a_2560_, 0);
lean_inc(v_fst_2561_);
v_snd_2562_ = lean_ctor_get(v_a_2560_, 1);
lean_inc(v_snd_2562_);
lean_dec(v_a_2560_);
v_fst_2543_ = v_fst_2561_;
v_snd_2544_ = v_snd_2562_;
goto v___jp_2542_;
}
else
{
lean_object* v_a_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2570_; 
lean_dec_ref(v_cont_2508_);
lean_dec_ref(v_clears_2507_);
lean_dec(v_fs_2506_);
lean_dec(v_a_2505_);
v_a_2563_ = lean_ctor_get(v___y_2559_, 0);
v_isSharedCheck_2570_ = !lean_is_exclusive(v___y_2559_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2565_ = v___y_2559_;
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_a_2563_);
lean_dec(v___y_2559_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
lean_object* v___x_2568_; 
if (v_isShared_2566_ == 0)
{
v___x_2568_ = v___x_2565_;
goto v_reusejp_2567_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_a_2563_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_a_2680_ = _args[0];
lean_object* v_fs_2681_ = _args[1];
lean_object* v_clears_2682_ = _args[2];
lean_object* v_cont_2683_ = _args[3];
lean_object* v_e_2684_ = _args[4];
lean_object* v_g_2685_ = _args[5];
lean_object* v___x_2686_ = _args[6];
lean_object* v_pat_2687_ = _args[7];
lean_object* v___y_2688_ = _args[8];
lean_object* v_asFVar_2689_ = _args[9];
lean_object* v_x_2690_ = _args[10];
lean_object* v___y_2691_ = _args[11];
lean_object* v___y_2692_ = _args[12];
lean_object* v___y_2693_ = _args[13];
lean_object* v___y_2694_ = _args[14];
lean_object* v___y_2695_ = _args[15];
lean_object* v___y_2696_ = _args[16];
lean_object* v___y_2697_ = _args[17];
_start:
{
lean_object* v_res_2698_; 
v_res_2698_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__6(v_a_2680_, v_fs_2681_, v_clears_2682_, v_cont_2683_, v_e_2684_, v_g_2685_, v___x_2686_, v_pat_2687_, v___y_2688_, v_asFVar_2689_, v_x_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_);
lean_dec(v___y_2696_);
lean_dec_ref(v___y_2695_);
lean_dec(v___y_2694_);
lean_dec_ref(v___y_2693_);
lean_dec(v___y_2692_);
lean_dec_ref(v___y_2691_);
lean_dec_ref(v_x_2690_);
return v_res_2698_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__2(void){
_start:
{
lean_object* v___x_2702_; lean_object* v___x_2703_; 
v___x_2702_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__1));
v___x_2703_ = l_Lean_MessageData_ofFormat(v___x_2702_);
return v___x_2703_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__3(void){
_start:
{
lean_object* v___x_2704_; lean_object* v___x_2705_; 
v___x_2704_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__2, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__2_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__2);
v___x_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2705_, 0, v___x_2704_);
return v___x_2705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7(lean_object* v_pat_2706_, lean_object* v___f_2707_, lean_object* v_e_2708_, lean_object* v_asFVar_2709_, lean_object* v_g_2710_, lean_object* v_fs_2711_, lean_object* v_cont_2712_, lean_object* v_clears_2713_, lean_object* v_a_2714_, lean_object* v___f_2715_, lean_object* v___f_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_){
_start:
{
switch(lean_obj_tag(v_pat_2706_))
{
case 1:
{
lean_object* v_a_2724_; 
lean_dec_ref(v___f_2716_);
lean_dec_ref(v___f_2715_);
v_a_2724_ = lean_ctor_get(v_pat_2706_, 1);
lean_inc(v_a_2724_);
if (lean_obj_tag(v_a_2724_) == 1)
{
lean_object* v_pre_2725_; 
v_pre_2725_ = lean_ctor_get(v_a_2724_, 0);
if (lean_obj_tag(v_pre_2725_) == 0)
{
lean_object* v_ref_2726_; lean_object* v_str_2727_; lean_object* v___x_2728_; uint8_t v___x_2729_; 
v_ref_2726_ = lean_ctor_get(v_pat_2706_, 0);
lean_inc(v_ref_2726_);
lean_dec_ref_known(v_pat_2706_, 2);
v_str_2727_ = lean_ctor_get(v_a_2724_, 1);
v___x_2728_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_name_x3f___closed__0));
v___x_2729_ = lean_string_dec_eq(v_str_2727_, v___x_2728_);
if (v___x_2729_ == 0)
{
lean_object* v___x_2730_; 
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
lean_dec(v_g_2710_);
lean_dec_ref(v_asFVar_2709_);
lean_dec_ref(v_e_2708_);
lean_inc(v___y_2722_);
lean_inc_ref(v___y_2721_);
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2718_);
lean_inc_ref(v___y_2717_);
v___x_2730_ = lean_apply_9(v___f_2707_, v_ref_2726_, v_a_2724_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, lean_box(0));
return v___x_2730_;
}
else
{
uint8_t v___x_2731_; lean_object* v___x_2732_; 
lean_inc(v_pre_2725_);
lean_dec_ref_known(v_a_2724_, 2);
lean_dec_ref(v___f_2707_);
v___x_2731_ = 0;
v___x_2732_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_2731_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
if (lean_obj_tag(v___x_2732_) == 0)
{
lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; 
lean_dec_ref_known(v___x_2732_, 1);
v___x_2733_ = lean_box(0);
lean_inc_ref(v_e_2708_);
v___x_2734_ = l_Lean_Expr_mdata___override(v___x_2733_, v_e_2708_);
v___x_2735_ = lean_box(0);
v___x_2736_ = l_Lean_Elab_Term_addTermInfo_x27(v_ref_2726_, v___x_2734_, v___x_2735_, v___x_2735_, v_pre_2725_, v___x_2731_, v___x_2731_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
if (lean_obj_tag(v___x_2736_) == 0)
{
lean_object* v___x_2737_; 
lean_dec_ref_known(v___x_2736_, 1);
lean_inc(v___y_2722_);
lean_inc_ref(v___y_2721_);
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
v___x_2737_ = lean_apply_6(v_asFVar_2709_, v_e_2708_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, lean_box(0));
if (lean_obj_tag(v___x_2737_) == 0)
{
lean_object* v_a_2738_; lean_object* v___x_2739_; 
v_a_2738_ = lean_ctor_get(v___x_2737_, 0);
lean_inc(v_a_2738_);
lean_dec_ref_known(v___x_2737_, 1);
v___x_2739_ = l_Lean_Meta_substEq(v_g_2710_, v_a_2738_, v_fs_2711_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
if (lean_obj_tag(v___x_2739_) == 0)
{
lean_object* v_a_2740_; lean_object* v_fst_2741_; lean_object* v_snd_2742_; lean_object* v___x_2743_; 
v_a_2740_ = lean_ctor_get(v___x_2739_, 0);
lean_inc(v_a_2740_);
lean_dec_ref_known(v___x_2739_, 1);
v_fst_2741_ = lean_ctor_get(v_a_2740_, 0);
lean_inc(v_fst_2741_);
v_snd_2742_ = lean_ctor_get(v_a_2740_, 1);
lean_inc(v_snd_2742_);
lean_dec(v_a_2740_);
lean_inc(v___y_2722_);
lean_inc_ref(v___y_2721_);
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2718_);
lean_inc_ref(v___y_2717_);
v___x_2743_ = lean_apply_11(v_cont_2712_, v_snd_2742_, v_fst_2741_, v_clears_2713_, v_a_2714_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, lean_box(0));
return v___x_2743_;
}
else
{
lean_object* v_a_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2751_; 
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
v_a_2744_ = lean_ctor_get(v___x_2739_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___x_2739_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2746_ = v___x_2739_;
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_a_2744_);
lean_dec(v___x_2739_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2749_; 
if (v_isShared_2747_ == 0)
{
v___x_2749_ = v___x_2746_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_a_2744_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
return v___x_2749_;
}
}
}
}
else
{
lean_object* v_a_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2759_; 
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
lean_dec(v_g_2710_);
v_a_2752_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2759_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2759_ == 0)
{
v___x_2754_ = v___x_2737_;
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_a_2752_);
lean_dec(v___x_2737_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2757_; 
if (v_isShared_2755_ == 0)
{
v___x_2757_ = v___x_2754_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v_a_2752_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
return v___x_2757_;
}
}
}
}
else
{
lean_object* v_a_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2767_; 
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
lean_dec(v_g_2710_);
lean_dec_ref(v_asFVar_2709_);
lean_dec_ref(v_e_2708_);
v_a_2760_ = lean_ctor_get(v___x_2736_, 0);
v_isSharedCheck_2767_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2767_ == 0)
{
v___x_2762_ = v___x_2736_;
v_isShared_2763_ = v_isSharedCheck_2767_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_a_2760_);
lean_dec(v___x_2736_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2767_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
lean_object* v___x_2765_; 
if (v_isShared_2763_ == 0)
{
v___x_2765_ = v___x_2762_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v_a_2760_);
v___x_2765_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
return v___x_2765_;
}
}
}
}
else
{
lean_object* v_a_2768_; lean_object* v___x_2770_; uint8_t v_isShared_2771_; uint8_t v_isSharedCheck_2775_; 
lean_dec(v_ref_2726_);
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
lean_dec(v_g_2710_);
lean_dec_ref(v_asFVar_2709_);
lean_dec_ref(v_e_2708_);
v_a_2768_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2775_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2775_ == 0)
{
v___x_2770_ = v___x_2732_;
v_isShared_2771_ = v_isSharedCheck_2775_;
goto v_resetjp_2769_;
}
else
{
lean_inc(v_a_2768_);
lean_dec(v___x_2732_);
v___x_2770_ = lean_box(0);
v_isShared_2771_ = v_isSharedCheck_2775_;
goto v_resetjp_2769_;
}
v_resetjp_2769_:
{
lean_object* v___x_2773_; 
if (v_isShared_2771_ == 0)
{
v___x_2773_ = v___x_2770_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2774_; 
v_reuseFailAlloc_2774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2774_, 0, v_a_2768_);
v___x_2773_ = v_reuseFailAlloc_2774_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
return v___x_2773_;
}
}
}
}
}
else
{
lean_object* v_ref_2776_; lean_object* v___x_2777_; 
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
lean_dec(v_g_2710_);
lean_dec_ref(v_asFVar_2709_);
lean_dec_ref(v_e_2708_);
v_ref_2776_ = lean_ctor_get(v_pat_2706_, 0);
lean_inc(v_ref_2776_);
lean_dec_ref_known(v_pat_2706_, 2);
lean_inc(v___y_2722_);
lean_inc_ref(v___y_2721_);
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2718_);
lean_inc_ref(v___y_2717_);
v___x_2777_ = lean_apply_9(v___f_2707_, v_ref_2776_, v_a_2724_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, lean_box(0));
return v___x_2777_;
}
}
else
{
lean_object* v_ref_2778_; lean_object* v___x_2779_; 
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
lean_dec(v_g_2710_);
lean_dec_ref(v_asFVar_2709_);
lean_dec_ref(v_e_2708_);
v_ref_2778_ = lean_ctor_get(v_pat_2706_, 0);
lean_inc(v_ref_2778_);
lean_dec_ref_known(v_pat_2706_, 2);
lean_inc(v___y_2722_);
lean_inc_ref(v___y_2721_);
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2718_);
lean_inc_ref(v___y_2717_);
v___x_2779_ = lean_apply_9(v___f_2707_, v_ref_2778_, v_a_2724_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, lean_box(0));
return v___x_2779_;
}
}
case 2:
{
lean_object* v_ref_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; uint8_t v___x_2785_; lean_object* v___x_2786_; 
lean_dec_ref(v___f_2716_);
lean_dec_ref(v___f_2715_);
lean_dec_ref(v_asFVar_2709_);
lean_dec_ref(v___f_2707_);
v_ref_2780_ = lean_ctor_get(v_pat_2706_, 0);
lean_inc(v_ref_2780_);
lean_dec_ref_known(v_pat_2706_, 1);
v___x_2781_ = lean_box(0);
lean_inc_ref(v_e_2708_);
v___x_2782_ = l_Lean_Expr_mdata___override(v___x_2781_, v_e_2708_);
v___x_2783_ = lean_box(0);
v___x_2784_ = lean_box(0);
v___x_2785_ = 0;
v___x_2786_ = l_Lean_Elab_Term_addTermInfo_x27(v_ref_2780_, v___x_2782_, v___x_2783_, v___x_2783_, v___x_2784_, v___x_2785_, v___x_2785_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
if (lean_obj_tag(v___x_2786_) == 0)
{
lean_dec_ref_known(v___x_2786_, 1);
if (lean_obj_tag(v_e_2708_) == 1)
{
lean_object* v_fvarId_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; 
v_fvarId_2787_ = lean_ctor_get(v_e_2708_, 0);
lean_inc(v_fvarId_2787_);
lean_dec_ref_known(v_e_2708_, 1);
v___x_2788_ = lean_array_push(v_clears_2713_, v_fvarId_2787_);
lean_inc(v___y_2722_);
lean_inc_ref(v___y_2721_);
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2718_);
lean_inc_ref(v___y_2717_);
v___x_2789_ = lean_apply_11(v_cont_2712_, v_g_2710_, v_fs_2711_, v___x_2788_, v_a_2714_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, lean_box(0));
return v___x_2789_;
}
else
{
lean_object* v___x_2790_; 
lean_dec_ref(v_e_2708_);
lean_inc(v___y_2722_);
lean_inc_ref(v___y_2721_);
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2718_);
lean_inc_ref(v___y_2717_);
v___x_2790_ = lean_apply_11(v_cont_2712_, v_g_2710_, v_fs_2711_, v_clears_2713_, v_a_2714_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, lean_box(0));
return v___x_2790_;
}
}
else
{
lean_object* v_a_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2798_; 
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
lean_dec(v_g_2710_);
lean_dec_ref(v_e_2708_);
v_a_2791_ = lean_ctor_get(v___x_2786_, 0);
v_isSharedCheck_2798_ = !lean_is_exclusive(v___x_2786_);
if (v_isSharedCheck_2798_ == 0)
{
v___x_2793_ = v___x_2786_;
v_isShared_2794_ = v_isSharedCheck_2798_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_a_2791_);
lean_dec(v___x_2786_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2798_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v___x_2796_; 
if (v_isShared_2794_ == 0)
{
v___x_2796_ = v___x_2793_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v_a_2791_);
v___x_2796_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
return v___x_2796_;
}
}
}
}
case 4:
{
lean_object* v_ref_2799_; lean_object* v_a_2800_; lean_object* v_a_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; uint8_t v___x_2806_; lean_object* v___x_2807_; 
lean_dec_ref(v___f_2716_);
lean_dec_ref(v___f_2715_);
lean_dec_ref(v_asFVar_2709_);
lean_dec_ref(v___f_2707_);
v_ref_2799_ = lean_ctor_get(v_pat_2706_, 0);
lean_inc(v_ref_2799_);
v_a_2800_ = lean_ctor_get(v_pat_2706_, 1);
lean_inc_ref(v_a_2800_);
v_a_2801_ = lean_ctor_get(v_pat_2706_, 2);
lean_inc(v_a_2801_);
lean_dec_ref_known(v_pat_2706_, 3);
v___x_2802_ = lean_box(0);
lean_inc_ref(v_e_2708_);
v___x_2803_ = l_Lean_Expr_mdata___override(v___x_2802_, v_e_2708_);
v___x_2804_ = lean_box(0);
v___x_2805_ = lean_box(0);
v___x_2806_ = 0;
v___x_2807_ = l_Lean_Elab_Term_addTermInfo_x27(v_ref_2799_, v___x_2803_, v___x_2804_, v___x_2804_, v___x_2805_, v___x_2806_, v___x_2806_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
if (lean_obj_tag(v___x_2807_) == 0)
{
lean_object* v___x_2808_; 
lean_dec_ref_known(v___x_2807_, 1);
v___x_2808_ = l_Lean_Elab_Term_elabType(v_a_2801_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
if (lean_obj_tag(v___x_2808_) == 0)
{
lean_object* v_a_2809_; lean_object* v___y_2811_; lean_object* v___y_2812_; lean_object* v___y_2813_; lean_object* v___y_2814_; lean_object* v___y_2815_; lean_object* v___y_2816_; lean_object* v___x_2830_; 
v_a_2809_ = lean_ctor_get(v___x_2808_, 0);
lean_inc(v_a_2809_);
lean_dec_ref_known(v___x_2808_, 1);
lean_inc(v___y_2722_);
lean_inc_ref(v___y_2721_);
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc_ref(v_e_2708_);
v___x_2830_ = lean_infer_type(v_e_2708_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
if (lean_obj_tag(v___x_2830_) == 0)
{
lean_object* v_a_2831_; lean_object* v___x_2832_; 
v_a_2831_ = lean_ctor_get(v___x_2830_, 0);
lean_inc_n(v_a_2831_, 2);
lean_dec_ref_known(v___x_2830_, 1);
lean_inc(v_a_2809_);
v___x_2832_ = l_Lean_Meta_isExprDefEq(v_a_2831_, v_a_2809_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
if (lean_obj_tag(v___x_2832_) == 0)
{
lean_object* v_a_2833_; uint8_t v___x_2834_; 
v_a_2833_ = lean_ctor_get(v___x_2832_, 0);
lean_inc(v_a_2833_);
lean_dec_ref_known(v___x_2832_, 1);
v___x_2834_ = lean_unbox(v_a_2833_);
lean_dec(v_a_2833_);
if (v___x_2834_ == 0)
{
lean_object* v___x_2835_; lean_object* v___x_2836_; 
v___x_2835_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__3, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__3_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___closed__3);
lean_inc_ref(v_e_2708_);
lean_inc(v_a_2809_);
v___x_2836_ = l_Lean_Elab_Term_throwTypeMismatchError___redArg(v___x_2835_, v_a_2809_, v_a_2831_, v_e_2708_, v___x_2804_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
if (lean_obj_tag(v___x_2836_) == 0)
{
lean_dec_ref_known(v___x_2836_, 1);
v___y_2811_ = v___y_2717_;
v___y_2812_ = v___y_2718_;
v___y_2813_ = v___y_2719_;
v___y_2814_ = v___y_2720_;
v___y_2815_ = v___y_2721_;
v___y_2816_ = v___y_2722_;
goto v___jp_2810_;
}
else
{
lean_object* v_a_2837_; lean_object* v___x_2839_; uint8_t v_isShared_2840_; uint8_t v_isSharedCheck_2844_; 
lean_dec(v_a_2809_);
lean_dec_ref(v_a_2800_);
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
lean_dec(v_g_2710_);
lean_dec_ref(v_e_2708_);
v_a_2837_ = lean_ctor_get(v___x_2836_, 0);
v_isSharedCheck_2844_ = !lean_is_exclusive(v___x_2836_);
if (v_isSharedCheck_2844_ == 0)
{
v___x_2839_ = v___x_2836_;
v_isShared_2840_ = v_isSharedCheck_2844_;
goto v_resetjp_2838_;
}
else
{
lean_inc(v_a_2837_);
lean_dec(v___x_2836_);
v___x_2839_ = lean_box(0);
v_isShared_2840_ = v_isSharedCheck_2844_;
goto v_resetjp_2838_;
}
v_resetjp_2838_:
{
lean_object* v___x_2842_; 
if (v_isShared_2840_ == 0)
{
v___x_2842_ = v___x_2839_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v_a_2837_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
}
}
else
{
lean_dec(v_a_2831_);
v___y_2811_ = v___y_2717_;
v___y_2812_ = v___y_2718_;
v___y_2813_ = v___y_2719_;
v___y_2814_ = v___y_2720_;
v___y_2815_ = v___y_2721_;
v___y_2816_ = v___y_2722_;
goto v___jp_2810_;
}
}
else
{
lean_object* v_a_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2852_; 
lean_dec(v_a_2831_);
lean_dec(v_a_2809_);
lean_dec_ref(v_a_2800_);
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
lean_dec(v_g_2710_);
lean_dec_ref(v_e_2708_);
v_a_2845_ = lean_ctor_get(v___x_2832_, 0);
v_isSharedCheck_2852_ = !lean_is_exclusive(v___x_2832_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2847_ = v___x_2832_;
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_a_2845_);
lean_dec(v___x_2832_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2850_; 
if (v_isShared_2848_ == 0)
{
v___x_2850_ = v___x_2847_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v_a_2845_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
return v___x_2850_;
}
}
}
}
else
{
lean_object* v_a_2853_; lean_object* v___x_2855_; uint8_t v_isShared_2856_; uint8_t v_isSharedCheck_2860_; 
lean_dec(v_a_2809_);
lean_dec_ref(v_a_2800_);
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
lean_dec(v_g_2710_);
lean_dec_ref(v_e_2708_);
v_a_2853_ = lean_ctor_get(v___x_2830_, 0);
v_isSharedCheck_2860_ = !lean_is_exclusive(v___x_2830_);
if (v_isSharedCheck_2860_ == 0)
{
v___x_2855_ = v___x_2830_;
v_isShared_2856_ = v_isSharedCheck_2860_;
goto v_resetjp_2854_;
}
else
{
lean_inc(v_a_2853_);
lean_dec(v___x_2830_);
v___x_2855_ = lean_box(0);
v_isShared_2856_ = v_isSharedCheck_2860_;
goto v_resetjp_2854_;
}
v_resetjp_2854_:
{
lean_object* v___x_2858_; 
if (v_isShared_2856_ == 0)
{
v___x_2858_ = v___x_2855_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v_a_2853_);
v___x_2858_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
return v___x_2858_;
}
}
}
v___jp_2810_:
{
if (lean_obj_tag(v_e_2708_) == 1)
{
lean_object* v_fvarId_2817_; lean_object* v___x_2818_; 
v_fvarId_2817_ = lean_ctor_get(v_e_2708_, 0);
lean_inc(v_fvarId_2817_);
v___x_2818_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_g_2710_, v_fvarId_2817_, v_a_2809_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_);
if (lean_obj_tag(v___x_2818_) == 0)
{
lean_object* v_a_2819_; lean_object* v___x_2820_; 
v_a_2819_ = lean_ctor_get(v___x_2818_, 0);
lean_inc(v_a_2819_);
lean_dec_ref_known(v___x_2818_, 1);
v___x_2820_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg(v_a_2819_, v_fs_2711_, v_clears_2713_, v_e_2708_, v_a_2714_, v_a_2800_, v_cont_2712_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_);
lean_dec_ref_known(v_e_2708_, 1);
return v___x_2820_;
}
else
{
lean_object* v_a_2821_; lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2828_; 
lean_dec_ref_known(v_e_2708_, 1);
lean_dec_ref(v_a_2800_);
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
v_a_2821_ = lean_ctor_get(v___x_2818_, 0);
v_isSharedCheck_2828_ = !lean_is_exclusive(v___x_2818_);
if (v_isSharedCheck_2828_ == 0)
{
v___x_2823_ = v___x_2818_;
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
else
{
lean_inc(v_a_2821_);
lean_dec(v___x_2818_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2826_; 
if (v_isShared_2824_ == 0)
{
v___x_2826_ = v___x_2823_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2827_; 
v_reuseFailAlloc_2827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2827_, 0, v_a_2821_);
v___x_2826_ = v_reuseFailAlloc_2827_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
return v___x_2826_;
}
}
}
}
else
{
lean_object* v___x_2829_; 
lean_dec(v_a_2809_);
v___x_2829_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg(v_g_2710_, v_fs_2711_, v_clears_2713_, v_e_2708_, v_a_2714_, v_a_2800_, v_cont_2712_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_);
lean_dec_ref(v_e_2708_);
return v___x_2829_;
}
}
}
else
{
lean_object* v_a_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2868_; 
lean_dec_ref(v_a_2800_);
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
lean_dec(v_g_2710_);
lean_dec_ref(v_e_2708_);
v_a_2861_ = lean_ctor_get(v___x_2808_, 0);
v_isSharedCheck_2868_ = !lean_is_exclusive(v___x_2808_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2863_ = v___x_2808_;
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_a_2861_);
lean_dec(v___x_2808_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v___x_2866_; 
if (v_isShared_2864_ == 0)
{
v___x_2866_ = v___x_2863_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v_a_2861_);
v___x_2866_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
return v___x_2866_;
}
}
}
}
else
{
lean_object* v_a_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2876_; 
lean_dec(v_a_2801_);
lean_dec_ref(v_a_2800_);
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
lean_dec(v_g_2710_);
lean_dec_ref(v_e_2708_);
v_a_2869_ = lean_ctor_get(v___x_2807_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2871_ = v___x_2807_;
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_a_2869_);
lean_dec(v___x_2807_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2874_; 
if (v_isShared_2872_ == 0)
{
v___x_2874_ = v___x_2871_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_a_2869_);
v___x_2874_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
return v___x_2874_;
}
}
}
}
case 0:
{
lean_object* v_ref_2877_; lean_object* v_a_2878_; lean_object* v___x_2879_; 
lean_dec_ref(v___f_2716_);
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
lean_dec(v_g_2710_);
lean_dec_ref(v_asFVar_2709_);
lean_dec_ref(v_e_2708_);
lean_dec_ref(v___f_2707_);
v_ref_2877_ = lean_ctor_get(v_pat_2706_, 0);
lean_inc(v_ref_2877_);
v_a_2878_ = lean_ctor_get(v_pat_2706_, 1);
lean_inc_ref(v_a_2878_);
lean_dec_ref_known(v_pat_2706_, 2);
lean_inc(v___y_2722_);
lean_inc_ref(v___y_2721_);
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2718_);
lean_inc_ref(v___y_2717_);
v___x_2879_ = lean_apply_9(v___f_2715_, v_ref_2877_, v_a_2878_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, lean_box(0));
return v___x_2879_;
}
case 6:
{
lean_object* v_a_2880_; 
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
lean_dec(v_g_2710_);
lean_dec_ref(v_asFVar_2709_);
lean_dec_ref(v_e_2708_);
lean_dec_ref(v___f_2707_);
v_a_2880_ = lean_ctor_get(v_pat_2706_, 1);
if (lean_obj_tag(v_a_2880_) == 1)
{
lean_object* v_tail_2881_; 
v_tail_2881_ = lean_ctor_get(v_a_2880_, 1);
if (lean_obj_tag(v_tail_2881_) == 0)
{
lean_object* v_ref_2882_; lean_object* v_head_2883_; lean_object* v___x_2884_; 
lean_inc_ref(v_a_2880_);
lean_dec_ref(v___f_2716_);
v_ref_2882_ = lean_ctor_get(v_pat_2706_, 0);
lean_inc(v_ref_2882_);
lean_dec_ref_known(v_pat_2706_, 2);
v_head_2883_ = lean_ctor_get(v_a_2880_, 0);
lean_inc(v_head_2883_);
lean_dec_ref_known(v_a_2880_, 2);
lean_inc(v___y_2722_);
lean_inc_ref(v___y_2721_);
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2718_);
lean_inc_ref(v___y_2717_);
v___x_2884_ = lean_apply_9(v___f_2715_, v_ref_2882_, v_head_2883_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, lean_box(0));
return v___x_2884_;
}
else
{
lean_object* v___x_2885_; 
lean_dec_ref(v___f_2715_);
lean_inc(v___y_2722_);
lean_inc_ref(v___y_2721_);
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2718_);
lean_inc_ref(v___y_2717_);
v___x_2885_ = lean_apply_8(v___f_2716_, v_pat_2706_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, lean_box(0));
return v___x_2885_;
}
}
else
{
lean_object* v___x_2886_; 
lean_dec_ref(v___f_2715_);
lean_inc(v___y_2722_);
lean_inc_ref(v___y_2721_);
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2718_);
lean_inc_ref(v___y_2717_);
v___x_2886_ = lean_apply_8(v___f_2716_, v_pat_2706_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, lean_box(0));
return v___x_2886_;
}
}
default: 
{
lean_object* v___x_2887_; 
lean_dec_ref(v___f_2715_);
lean_dec(v_a_2714_);
lean_dec_ref(v_clears_2713_);
lean_dec_ref(v_cont_2712_);
lean_dec(v_fs_2711_);
lean_dec(v_g_2710_);
lean_dec_ref(v_asFVar_2709_);
lean_dec_ref(v_e_2708_);
lean_dec_ref(v___f_2707_);
lean_inc(v___y_2722_);
lean_inc_ref(v___y_2721_);
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2718_);
lean_inc_ref(v___y_2717_);
v___x_2887_ = lean_apply_8(v___f_2716_, v_pat_2706_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, lean_box(0));
return v___x_2887_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_pat_2888_ = _args[0];
lean_object* v___f_2889_ = _args[1];
lean_object* v_e_2890_ = _args[2];
lean_object* v_asFVar_2891_ = _args[3];
lean_object* v_g_2892_ = _args[4];
lean_object* v_fs_2893_ = _args[5];
lean_object* v_cont_2894_ = _args[6];
lean_object* v_clears_2895_ = _args[7];
lean_object* v_a_2896_ = _args[8];
lean_object* v___f_2897_ = _args[9];
lean_object* v___f_2898_ = _args[10];
lean_object* v___y_2899_ = _args[11];
lean_object* v___y_2900_ = _args[12];
lean_object* v___y_2901_ = _args[13];
lean_object* v___y_2902_ = _args[14];
lean_object* v___y_2903_ = _args[15];
lean_object* v___y_2904_ = _args[16];
lean_object* v___y_2905_ = _args[17];
_start:
{
lean_object* v_res_2906_; 
v_res_2906_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7(v_pat_2888_, v___f_2889_, v_e_2890_, v_asFVar_2891_, v_g_2892_, v_fs_2893_, v_cont_2894_, v_clears_2895_, v_a_2896_, v___f_2897_, v___f_2898_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_);
lean_dec(v___y_2904_);
lean_dec_ref(v___y_2903_);
lean_dec(v___y_2902_);
lean_dec_ref(v___y_2901_);
lean_dec(v___y_2900_);
lean_dec_ref(v___y_2899_);
return v_res_2906_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg(lean_object* v_g_2907_, lean_object* v_fs_2908_, lean_object* v_clears_2909_, lean_object* v_e_2910_, lean_object* v_a_2911_, lean_object* v_pat_2912_, lean_object* v_cont_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
lean_object* v_asFVar_2921_; lean_object* v___x_2922_; lean_object* v_e_2923_; lean_object* v___f_2924_; lean_object* v___f_2925_; lean_object* v___y_2927_; lean_object* v_ref_2938_; 
v_asFVar_2921_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___closed__0));
v___x_2922_ = l_Lean_instInhabitedExpr;
lean_inc_n(v_fs_2908_, 3);
v_e_2923_ = l_Lean_Meta_FVarSubst_apply(v_fs_2908_, v_e_2910_);
lean_inc_n(v_a_2911_, 2);
lean_inc_ref_n(v_clears_2909_, 2);
lean_inc_n(v_g_2907_, 2);
lean_inc_ref_n(v_cont_2913_, 2);
lean_inc_ref_n(v_e_2923_, 2);
v___f_2924_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__1___boxed), 15, 6);
lean_closure_set(v___f_2924_, 0, v_e_2923_);
lean_closure_set(v___f_2924_, 1, v_cont_2913_);
lean_closure_set(v___f_2924_, 2, v_g_2907_);
lean_closure_set(v___f_2924_, 3, v_fs_2908_);
lean_closure_set(v___f_2924_, 4, v_clears_2909_);
lean_closure_set(v___f_2924_, 5, v_a_2911_);
v___f_2925_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__2___boxed), 15, 6);
lean_closure_set(v___f_2925_, 0, v_e_2923_);
lean_closure_set(v___f_2925_, 1, v_g_2907_);
lean_closure_set(v___f_2925_, 2, v_fs_2908_);
lean_closure_set(v___f_2925_, 3, v_clears_2909_);
lean_closure_set(v___f_2925_, 4, v_a_2911_);
lean_closure_set(v___f_2925_, 5, v_cont_2913_);
v_ref_2938_ = lean_ctor_get(v_pat_2912_, 0);
lean_inc(v_ref_2938_);
v___y_2927_ = v_ref_2938_;
goto v___jp_2926_;
v___jp_2926_:
{
lean_object* v_toCold_2928_; lean_object* v_currRecDepth_2929_; lean_object* v_ref_2930_; uint8_t v_diag_2931_; uint8_t v_suppressElabErrors_2932_; lean_object* v___f_2933_; lean_object* v___y_2934_; lean_object* v_ref_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; 
v_toCold_2928_ = lean_ctor_get(v___y_2918_, 0);
v_currRecDepth_2929_ = lean_ctor_get(v___y_2918_, 1);
v_ref_2930_ = lean_ctor_get(v___y_2918_, 2);
v_diag_2931_ = lean_ctor_get_uint8(v___y_2918_, sizeof(void*)*3);
v_suppressElabErrors_2932_ = lean_ctor_get_uint8(v___y_2918_, sizeof(void*)*3 + 1);
lean_inc(v___y_2927_);
lean_inc_ref(v_pat_2912_);
lean_inc_n(v_g_2907_, 2);
lean_inc_ref(v_e_2923_);
lean_inc_ref(v_cont_2913_);
lean_inc_ref(v_clears_2909_);
lean_inc(v_fs_2908_);
lean_inc(v_a_2911_);
v___f_2933_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__6___boxed), 18, 10);
lean_closure_set(v___f_2933_, 0, v_a_2911_);
lean_closure_set(v___f_2933_, 1, v_fs_2908_);
lean_closure_set(v___f_2933_, 2, v_clears_2909_);
lean_closure_set(v___f_2933_, 3, v_cont_2913_);
lean_closure_set(v___f_2933_, 4, v_e_2923_);
lean_closure_set(v___f_2933_, 5, v_g_2907_);
lean_closure_set(v___f_2933_, 6, v___x_2922_);
lean_closure_set(v___f_2933_, 7, v_pat_2912_);
lean_closure_set(v___f_2933_, 8, v___y_2927_);
lean_closure_set(v___f_2933_, 9, v_asFVar_2921_);
v___y_2934_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__7___boxed), 18, 11);
lean_closure_set(v___y_2934_, 0, v_pat_2912_);
lean_closure_set(v___y_2934_, 1, v___f_2924_);
lean_closure_set(v___y_2934_, 2, v_e_2923_);
lean_closure_set(v___y_2934_, 3, v_asFVar_2921_);
lean_closure_set(v___y_2934_, 4, v_g_2907_);
lean_closure_set(v___y_2934_, 5, v_fs_2908_);
lean_closure_set(v___y_2934_, 6, v_cont_2913_);
lean_closure_set(v___y_2934_, 7, v_clears_2909_);
lean_closure_set(v___y_2934_, 8, v_a_2911_);
lean_closure_set(v___y_2934_, 9, v___f_2925_);
lean_closure_set(v___y_2934_, 10, v___f_2933_);
v_ref_2935_ = l_Lean_replaceRef(v___y_2927_, v_ref_2930_);
lean_dec(v___y_2927_);
lean_inc(v_currRecDepth_2929_);
lean_inc_ref(v_toCold_2928_);
v___x_2936_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2936_, 0, v_toCold_2928_);
lean_ctor_set(v___x_2936_, 1, v_currRecDepth_2929_);
lean_ctor_set(v___x_2936_, 2, v_ref_2935_);
lean_ctor_set_uint8(v___x_2936_, sizeof(void*)*3, v_diag_2931_);
lean_ctor_set_uint8(v___x_2936_, sizeof(void*)*3 + 1, v_suppressElabErrors_2932_);
v___x_2937_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg(v_g_2907_, v___y_2934_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___x_2936_, v___y_2919_);
lean_dec_ref_known(v___x_2936_, 3);
return v___x_2937_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___redArg(lean_object* v_g_2939_, lean_object* v_fs_2940_, lean_object* v_clears_2941_, lean_object* v_a_2942_, lean_object* v_pats_2943_, lean_object* v_cont_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_){
_start:
{
if (lean_obj_tag(v_pats_2943_) == 0)
{
lean_object* v___x_2952_; 
lean_inc(v___y_2950_);
lean_inc_ref(v___y_2949_);
lean_inc(v___y_2948_);
lean_inc_ref(v___y_2947_);
lean_inc(v___y_2946_);
lean_inc_ref(v___y_2945_);
v___x_2952_ = lean_apply_11(v_cont_2944_, v_g_2939_, v_fs_2940_, v_clears_2941_, v_a_2942_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_, lean_box(0));
return v___x_2952_;
}
else
{
lean_object* v_head_2953_; lean_object* v_tail_2954_; lean_object* v_fst_2955_; lean_object* v_snd_2956_; lean_object* v___f_2957_; lean_object* v___x_2958_; 
v_head_2953_ = lean_ctor_get(v_pats_2943_, 0);
lean_inc(v_head_2953_);
v_tail_2954_ = lean_ctor_get(v_pats_2943_, 1);
lean_inc(v_tail_2954_);
lean_dec_ref_known(v_pats_2943_, 2);
v_fst_2955_ = lean_ctor_get(v_head_2953_, 0);
lean_inc(v_fst_2955_);
v_snd_2956_ = lean_ctor_get(v_head_2953_, 1);
lean_inc(v_snd_2956_);
lean_dec(v_head_2953_);
v___f_2957_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___redArg___lam__0___boxed), 13, 2);
lean_closure_set(v___f_2957_, 0, v_tail_2954_);
lean_closure_set(v___f_2957_, 1, v_cont_2944_);
v___x_2958_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg(v_g_2939_, v_fs_2940_, v_clears_2941_, v_snd_2956_, v_a_2942_, v_fst_2955_, v___f_2957_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_);
lean_dec(v_snd_2956_);
return v___x_2958_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___redArg___lam__0(lean_object* v_tail_2959_, lean_object* v_cont_2960_, lean_object* v_g_2961_, lean_object* v_fs_2962_, lean_object* v_clears_2963_, lean_object* v_a_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_){
_start:
{
lean_object* v___x_2972_; 
v___x_2972_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___redArg(v_g_2961_, v_fs_2962_, v_clears_2963_, v_a_2964_, v_tail_2959_, v_cont_2960_, v___y_2965_, v___y_2966_, v___y_2967_, v___y_2968_, v___y_2969_, v___y_2970_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___redArg___boxed(lean_object* v_g_2973_, lean_object* v_fs_2974_, lean_object* v_clears_2975_, lean_object* v_a_2976_, lean_object* v_pats_2977_, lean_object* v_cont_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_){
_start:
{
lean_object* v_res_2986_; 
v_res_2986_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___redArg(v_g_2973_, v_fs_2974_, v_clears_2975_, v_a_2976_, v_pats_2977_, v_cont_2978_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_, v___y_2984_);
lean_dec(v___y_2984_);
lean_dec_ref(v___y_2983_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
lean_dec(v___y_2980_);
lean_dec_ref(v___y_2979_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__3___redArg___boxed(lean_object* v_fs_2987_, lean_object* v_clears_2988_, lean_object* v_cont_2989_, lean_object* v_as_2990_, lean_object* v_i_2991_, lean_object* v_stop_2992_, lean_object* v_b_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_){
_start:
{
size_t v_i_boxed_3001_; size_t v_stop_boxed_3002_; lean_object* v_res_3003_; 
v_i_boxed_3001_ = lean_unbox_usize(v_i_2991_);
lean_dec(v_i_2991_);
v_stop_boxed_3002_ = lean_unbox_usize(v_stop_2992_);
lean_dec(v_stop_2992_);
v_res_3003_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__3___redArg(v_fs_2987_, v_clears_2988_, v_cont_2989_, v_as_2990_, v_i_boxed_3001_, v_stop_boxed_3002_, v_b_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_, v___y_2998_, v___y_2999_);
lean_dec(v___y_2999_);
lean_dec_ref(v___y_2998_);
lean_dec(v___y_2997_);
lean_dec_ref(v___y_2996_);
lean_dec(v___y_2995_);
lean_dec_ref(v___y_2994_);
lean_dec_ref(v_as_2990_);
return v_res_3003_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align___redArg___boxed(lean_object* v_fs_3004_, lean_object* v_clears_3005_, lean_object* v_cont_3006_, lean_object* v_a_3007_, lean_object* v_goal_3008_, lean_object* v_ctorName_3009_, lean_object* v_a_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_){
_start:
{
lean_object* v_res_3018_; 
v_res_3018_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align___redArg(v_fs_3004_, v_clears_3005_, v_cont_3006_, v_a_3007_, v_goal_3008_, v_ctorName_3009_, v_a_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_);
lean_dec(v___y_3016_);
lean_dec_ref(v___y_3015_);
lean_dec(v___y_3014_);
lean_dec_ref(v___y_3013_);
lean_dec(v___y_3012_);
lean_dec_ref(v___y_3011_);
lean_dec(v_ctorName_3009_);
return v_res_3018_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___boxed(lean_object* v_g_3019_, lean_object* v_fs_3020_, lean_object* v_clears_3021_, lean_object* v_e_3022_, lean_object* v_a_3023_, lean_object* v_pat_3024_, lean_object* v_cont_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_){
_start:
{
lean_object* v_res_3033_; 
v_res_3033_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg(v_g_3019_, v_fs_3020_, v_clears_3021_, v_e_3022_, v_a_3023_, v_pat_3024_, v_cont_3025_, v___y_3026_, v___y_3027_, v___y_3028_, v___y_3029_, v___y_3030_, v___y_3031_);
lean_dec(v___y_3031_);
lean_dec_ref(v___y_3030_);
lean_dec(v___y_3029_);
lean_dec_ref(v___y_3028_);
lean_dec(v___y_3027_);
lean_dec_ref(v___y_3026_);
lean_dec_ref(v_e_3022_);
return v_res_3033_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue(lean_object* v_00_u03b1_3034_, lean_object* v_g_3035_, lean_object* v_fs_3036_, lean_object* v_clears_3037_, lean_object* v_a_3038_, lean_object* v_pats_3039_, lean_object* v_cont_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_){
_start:
{
lean_object* v___x_3048_; 
v___x_3048_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___redArg(v_g_3035_, v_fs_3036_, v_clears_3037_, v_a_3038_, v_pats_3039_, v_cont_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_);
return v___x_3048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___boxed(lean_object* v_00_u03b1_3049_, lean_object* v_g_3050_, lean_object* v_fs_3051_, lean_object* v_clears_3052_, lean_object* v_a_3053_, lean_object* v_pats_3054_, lean_object* v_cont_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_){
_start:
{
lean_object* v_res_3063_; 
v_res_3063_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue(v_00_u03b1_3049_, v_g_3050_, v_fs_3051_, v_clears_3052_, v_a_3053_, v_pats_3054_, v_cont_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_, v___y_3061_);
lean_dec(v___y_3061_);
lean_dec_ref(v___y_3060_);
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
return v_res_3063_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align(lean_object* v_00_u03b1_3064_, lean_object* v_fs_3065_, lean_object* v_clears_3066_, lean_object* v_cont_3067_, lean_object* v_a_3068_, lean_object* v_goal_3069_, lean_object* v_ctorName_3070_, lean_object* v_a_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_){
_start:
{
lean_object* v___x_3079_; 
v___x_3079_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align___redArg(v_fs_3065_, v_clears_3066_, v_cont_3067_, v_a_3068_, v_goal_3069_, v_ctorName_3070_, v_a_3071_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_);
return v___x_3079_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align___boxed(lean_object* v_00_u03b1_3080_, lean_object* v_fs_3081_, lean_object* v_clears_3082_, lean_object* v_cont_3083_, lean_object* v_a_3084_, lean_object* v_goal_3085_, lean_object* v_ctorName_3086_, lean_object* v_a_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_){
_start:
{
lean_object* v_res_3095_; 
v_res_3095_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_align(v_00_u03b1_3080_, v_fs_3081_, v_clears_3082_, v_cont_3083_, v_a_3084_, v_goal_3085_, v_ctorName_3086_, v_a_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_);
lean_dec(v___y_3093_);
lean_dec_ref(v___y_3092_);
lean_dec(v___y_3091_);
lean_dec_ref(v___y_3090_);
lean_dec(v___y_3089_);
lean_dec_ref(v___y_3088_);
lean_dec(v_ctorName_3086_);
return v_res_3095_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7(lean_object* v_00_u03b1_3096_, lean_object* v_mvarId_3097_, lean_object* v_x_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_){
_start:
{
lean_object* v___x_3106_; 
v___x_3106_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg(v_mvarId_3097_, v_x_3098_, v___y_3099_, v___y_3100_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_);
return v___x_3106_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___boxed(lean_object* v_00_u03b1_3107_, lean_object* v_mvarId_3108_, lean_object* v_x_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_){
_start:
{
lean_object* v_res_3117_; 
v_res_3117_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7(v_00_u03b1_3107_, v_mvarId_3108_, v_x_3109_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_);
lean_dec(v___y_3115_);
lean_dec_ref(v___y_3114_);
lean_dec(v___y_3113_);
lean_dec_ref(v___y_3112_);
lean_dec(v___y_3111_);
lean_dec_ref(v___y_3110_);
return v_res_3117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore(lean_object* v_00_u03b1_3118_, lean_object* v_g_3119_, lean_object* v_fs_3120_, lean_object* v_clears_3121_, lean_object* v_e_3122_, lean_object* v_a_3123_, lean_object* v_pat_3124_, lean_object* v_cont_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_){
_start:
{
lean_object* v___x_3133_; 
v___x_3133_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg(v_g_3119_, v_fs_3120_, v_clears_3121_, v_e_3122_, v_a_3123_, v_pat_3124_, v_cont_3125_, v___y_3126_, v___y_3127_, v___y_3128_, v___y_3129_, v___y_3130_, v___y_3131_);
return v___x_3133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___boxed(lean_object* v_00_u03b1_3134_, lean_object* v_g_3135_, lean_object* v_fs_3136_, lean_object* v_clears_3137_, lean_object* v_e_3138_, lean_object* v_a_3139_, lean_object* v_pat_3140_, lean_object* v_cont_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_){
_start:
{
lean_object* v_res_3149_; 
v_res_3149_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore(v_00_u03b1_3134_, v_g_3135_, v_fs_3136_, v_clears_3137_, v_e_3138_, v_a_3139_, v_pat_3140_, v_cont_3141_, v___y_3142_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_);
lean_dec(v___y_3147_);
lean_dec_ref(v___y_3146_);
lean_dec(v___y_3145_);
lean_dec_ref(v___y_3144_);
lean_dec(v___y_3143_);
lean_dec_ref(v___y_3142_);
lean_dec_ref(v_e_3138_);
return v_res_3149_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__3(lean_object* v_00_u03b1_3150_, lean_object* v_fs_3151_, lean_object* v_clears_3152_, lean_object* v_cont_3153_, lean_object* v_as_3154_, size_t v_i_3155_, size_t v_stop_3156_, lean_object* v_b_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_){
_start:
{
lean_object* v___x_3165_; 
v___x_3165_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__3___redArg(v_fs_3151_, v_clears_3152_, v_cont_3153_, v_as_3154_, v_i_3155_, v_stop_3156_, v_b_3157_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_);
return v___x_3165_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__3___boxed(lean_object* v_00_u03b1_3166_, lean_object* v_fs_3167_, lean_object* v_clears_3168_, lean_object* v_cont_3169_, lean_object* v_as_3170_, lean_object* v_i_3171_, lean_object* v_stop_3172_, lean_object* v_b_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_){
_start:
{
size_t v_i_boxed_3181_; size_t v_stop_boxed_3182_; lean_object* v_res_3183_; 
v_i_boxed_3181_ = lean_unbox_usize(v_i_3171_);
lean_dec(v_i_3171_);
v_stop_boxed_3182_ = lean_unbox_usize(v_stop_3172_);
lean_dec(v_stop_3172_);
v_res_3183_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__3(v_00_u03b1_3166_, v_fs_3167_, v_clears_3168_, v_cont_3169_, v_as_3170_, v_i_boxed_3181_, v_stop_boxed_3182_, v_b_3173_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_, v___y_3178_, v___y_3179_);
lean_dec(v___y_3179_);
lean_dec_ref(v___y_3178_);
lean_dec(v___y_3177_);
lean_dec_ref(v___y_3176_);
lean_dec(v___y_3175_);
lean_dec_ref(v___y_3174_);
lean_dec_ref(v_as_3170_);
return v_res_3183_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5(lean_object* v_mvarId_3184_, lean_object* v_val_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_){
_start:
{
lean_object* v___x_3193_; 
v___x_3193_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5___redArg(v_mvarId_3184_, v_val_3185_, v___y_3189_);
return v___x_3193_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5___boxed(lean_object* v_mvarId_3194_, lean_object* v_val_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_){
_start:
{
lean_object* v_res_3203_; 
v_res_3203_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5(v_mvarId_3194_, v_val_3195_, v___y_3196_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
return v_res_3203_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8(lean_object* v_00_u03b1_3204_, lean_object* v_msg_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_){
_start:
{
lean_object* v___x_3213_; 
v___x_3213_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8___redArg(v_msg_3205_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_);
return v___x_3213_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8___boxed(lean_object* v_00_u03b1_3214_, lean_object* v_msg_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_){
_start:
{
lean_object* v_res_3223_; 
v_res_3223_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8(v_00_u03b1_3214_, v_msg_3215_, v___y_3216_, v___y_3217_, v___y_3218_, v___y_3219_, v___y_3220_, v___y_3221_);
lean_dec(v___y_3221_);
lean_dec_ref(v___y_3220_);
lean_dec(v___y_3219_);
lean_dec_ref(v___y_3218_);
lean_dec(v___y_3217_);
lean_dec_ref(v___y_3216_);
return v_res_3223_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5(lean_object* v_00_u03b2_3224_, lean_object* v_x_3225_, lean_object* v_x_3226_, lean_object* v_x_3227_){
_start:
{
lean_object* v___x_3228_; 
v___x_3228_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5___redArg(v_x_3225_, v_x_3226_, v_x_3227_);
return v___x_3228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9(lean_object* v_msgData_3229_, lean_object* v_macroStack_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_){
_start:
{
lean_object* v___x_3238_; 
v___x_3238_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___redArg(v_msgData_3229_, v_macroStack_3230_, v___y_3235_);
return v___x_3238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9___boxed(lean_object* v_msgData_3239_, lean_object* v_macroStack_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_){
_start:
{
lean_object* v_res_3248_; 
v_res_3248_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__8_spec__9(v_msgData_3239_, v_macroStack_3240_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_);
lean_dec(v___y_3246_);
lean_dec_ref(v___y_3245_);
lean_dec(v___y_3244_);
lean_dec_ref(v___y_3243_);
lean_dec(v___y_3242_);
lean_dec_ref(v___y_3241_);
return v_res_3248_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7(lean_object* v_00_u03b2_3249_, lean_object* v_x_3250_, size_t v_x_3251_, size_t v_x_3252_, lean_object* v_x_3253_, lean_object* v_x_3254_){
_start:
{
lean_object* v___x_3255_; 
v___x_3255_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___redArg(v_x_3250_, v_x_3251_, v_x_3252_, v_x_3253_, v_x_3254_);
return v___x_3255_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7___boxed(lean_object* v_00_u03b2_3256_, lean_object* v_x_3257_, lean_object* v_x_3258_, lean_object* v_x_3259_, lean_object* v_x_3260_, lean_object* v_x_3261_){
_start:
{
size_t v_x_22533__boxed_3262_; size_t v_x_22534__boxed_3263_; lean_object* v_res_3264_; 
v_x_22533__boxed_3262_ = lean_unbox_usize(v_x_3258_);
lean_dec(v_x_3258_);
v_x_22534__boxed_3263_ = lean_unbox_usize(v_x_3259_);
lean_dec(v_x_3259_);
v_res_3264_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7(v_00_u03b2_3256_, v_x_3257_, v_x_22533__boxed_3262_, v_x_22534__boxed_3263_, v_x_3260_, v_x_3261_);
return v_res_3264_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__10(lean_object* v_00_u03b2_3265_, lean_object* v_n_3266_, lean_object* v_k_3267_, lean_object* v_v_3268_){
_start:
{
lean_object* v___x_3269_; 
v___x_3269_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__10___redArg(v_n_3266_, v_k_3267_, v_v_3268_);
return v___x_3269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__11(lean_object* v_00_u03b2_3270_, size_t v_depth_3271_, lean_object* v_keys_3272_, lean_object* v_vals_3273_, lean_object* v_heq_3274_, lean_object* v_i_3275_, lean_object* v_entries_3276_){
_start:
{
lean_object* v___x_3277_; 
v___x_3277_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__11___redArg(v_depth_3271_, v_keys_3272_, v_vals_3273_, v_i_3275_, v_entries_3276_);
return v___x_3277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__11___boxed(lean_object* v_00_u03b2_3278_, lean_object* v_depth_3279_, lean_object* v_keys_3280_, lean_object* v_vals_3281_, lean_object* v_heq_3282_, lean_object* v_i_3283_, lean_object* v_entries_3284_){
_start:
{
size_t v_depth_boxed_3285_; lean_object* v_res_3286_; 
v_depth_boxed_3285_ = lean_unbox_usize(v_depth_3279_);
lean_dec(v_depth_3279_);
v_res_3286_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__11(v_00_u03b2_3278_, v_depth_boxed_3285_, v_keys_3280_, v_vals_3281_, v_heq_3282_, v_i_3283_, v_entries_3284_);
lean_dec_ref(v_vals_3281_);
lean_dec_ref(v_keys_3280_);
return v_res_3286_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__10_spec__13(lean_object* v_00_u03b2_3287_, lean_object* v_x_3288_, lean_object* v_x_3289_, lean_object* v_x_3290_, lean_object* v_x_3291_){
_start:
{
lean_object* v___x_3292_; 
v___x_3292_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__5_spec__5_spec__7_spec__10_spec__13___redArg(v_x_3288_, v_x_3289_, v_x_3290_, v_x_3291_);
return v___x_3292_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__0_spec__0(lean_object* v_a_3293_, lean_object* v_as_3294_, size_t v_i_3295_, size_t v_stop_3296_){
_start:
{
uint8_t v___x_3297_; 
v___x_3297_ = lean_usize_dec_eq(v_i_3295_, v_stop_3296_);
if (v___x_3297_ == 0)
{
lean_object* v___x_3298_; uint8_t v___x_3299_; 
v___x_3298_ = lean_array_uget_borrowed(v_as_3294_, v_i_3295_);
v___x_3299_ = l_Lean_instBEqFVarId_beq(v_a_3293_, v___x_3298_);
if (v___x_3299_ == 0)
{
size_t v___x_3300_; size_t v___x_3301_; 
v___x_3300_ = ((size_t)1ULL);
v___x_3301_ = lean_usize_add(v_i_3295_, v___x_3300_);
v_i_3295_ = v___x_3301_;
goto _start;
}
else
{
return v___x_3299_;
}
}
else
{
uint8_t v___x_3303_; 
v___x_3303_ = 0;
return v___x_3303_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__0_spec__0___boxed(lean_object* v_a_3304_, lean_object* v_as_3305_, lean_object* v_i_3306_, lean_object* v_stop_3307_){
_start:
{
size_t v_i_boxed_3308_; size_t v_stop_boxed_3309_; uint8_t v_res_3310_; lean_object* v_r_3311_; 
v_i_boxed_3308_ = lean_unbox_usize(v_i_3306_);
lean_dec(v_i_3306_);
v_stop_boxed_3309_ = lean_unbox_usize(v_stop_3307_);
lean_dec(v_stop_3307_);
v_res_3310_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__0_spec__0(v_a_3304_, v_as_3305_, v_i_boxed_3308_, v_stop_boxed_3309_);
lean_dec_ref(v_as_3305_);
lean_dec(v_a_3304_);
v_r_3311_ = lean_box(v_res_3310_);
return v_r_3311_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__0(lean_object* v_as_3312_, lean_object* v_a_3313_){
_start:
{
lean_object* v___x_3314_; lean_object* v___x_3315_; uint8_t v___x_3316_; 
v___x_3314_ = lean_unsigned_to_nat(0u);
v___x_3315_ = lean_array_get_size(v_as_3312_);
v___x_3316_ = lean_nat_dec_lt(v___x_3314_, v___x_3315_);
if (v___x_3316_ == 0)
{
return v___x_3316_;
}
else
{
if (v___x_3316_ == 0)
{
return v___x_3316_;
}
else
{
size_t v___x_3317_; size_t v___x_3318_; uint8_t v___x_3319_; 
v___x_3317_ = ((size_t)0ULL);
v___x_3318_ = lean_usize_of_nat(v___x_3315_);
v___x_3319_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__0_spec__0(v_a_3313_, v_as_3312_, v___x_3317_, v___x_3318_);
return v___x_3319_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__0___boxed(lean_object* v_as_3320_, lean_object* v_a_3321_){
_start:
{
uint8_t v_res_3322_; lean_object* v_r_3323_; 
v_res_3322_ = l_Array_contains___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__0(v_as_3320_, v_a_3321_);
lean_dec(v_a_3321_);
lean_dec_ref(v_as_3320_);
v_r_3323_ = lean_box(v_res_3322_);
return v_r_3323_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___lam__1(lean_object* v_snd_3324_, lean_object* v___y_3325_){
_start:
{
uint8_t v___x_3326_; 
v___x_3326_ = l_Array_contains___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__0(v_snd_3324_, v___y_3325_);
return v___x_3326_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___lam__1___boxed(lean_object* v_snd_3327_, lean_object* v___y_3328_){
_start:
{
uint8_t v_res_3329_; lean_object* v_r_3330_; 
v_res_3329_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___lam__1(v_snd_3327_, v___y_3328_);
lean_dec(v___y_3328_);
lean_dec(v_snd_3327_);
v_r_3330_ = lean_box(v_res_3329_);
return v_r_3330_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___lam__0(lean_object* v_x_3331_){
_start:
{
uint8_t v___x_3332_; 
v___x_3332_ = 0;
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___lam__0___boxed(lean_object* v_x_3333_){
_start:
{
uint8_t v_res_3334_; lean_object* v_r_3335_; 
v_res_3334_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___lam__0(v_x_3333_);
lean_dec(v_x_3333_);
v_r_3335_ = lean_box(v_res_3334_);
return v_r_3335_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; 
v___x_3337_ = lean_box(0);
v___x_3338_ = lean_unsigned_to_nat(16u);
v___x_3339_ = lean_mk_array(v___x_3338_, v___x_3337_);
return v___x_3339_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; 
v___x_3340_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__1);
v___x_3341_ = lean_unsigned_to_nat(0u);
v___x_3342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3341_);
lean_ctor_set(v___x_3342_, 1, v___x_3340_);
return v___x_3342_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_as_3343_, size_t v_sz_3344_, size_t v_i_3345_, lean_object* v_b_3346_, lean_object* v___y_3347_){
_start:
{
uint8_t v___x_3349_; 
v___x_3349_ = lean_usize_dec_lt(v_i_3345_, v_sz_3344_);
if (v___x_3349_ == 0)
{
lean_object* v___x_3350_; 
v___x_3350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3350_, 0, v_b_3346_);
return v___x_3350_;
}
else
{
lean_object* v_snd_3351_; lean_object* v___x_3353_; uint8_t v_isShared_3354_; uint8_t v_isSharedCheck_3482_; 
v_snd_3351_ = lean_ctor_get(v_b_3346_, 1);
v_isSharedCheck_3482_ = !lean_is_exclusive(v_b_3346_);
if (v_isSharedCheck_3482_ == 0)
{
lean_object* v_unused_3483_; 
v_unused_3483_ = lean_ctor_get(v_b_3346_, 0);
lean_dec(v_unused_3483_);
v___x_3353_ = v_b_3346_;
v_isShared_3354_ = v_isSharedCheck_3482_;
goto v_resetjp_3352_;
}
else
{
lean_inc(v_snd_3351_);
lean_dec(v_b_3346_);
v___x_3353_ = lean_box(0);
v_isShared_3354_ = v_isSharedCheck_3482_;
goto v_resetjp_3352_;
}
v_resetjp_3352_:
{
lean_object* v___x_3355_; lean_object* v_a_3357_; lean_object* v_a_3364_; 
v___x_3355_ = lean_box(0);
v_a_3364_ = lean_array_uget_borrowed(v_as_3343_, v_i_3345_);
if (lean_obj_tag(v_a_3364_) == 0)
{
v_a_3357_ = v_snd_3351_;
goto v___jp_3356_;
}
else
{
lean_object* v_val_3365_; uint8_t v_a_3367_; lean_object* v___f_3370_; lean_object* v___f_3371_; 
v_val_3365_ = lean_ctor_get(v_a_3364_, 0);
v___f_3370_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__0));
lean_inc(v_snd_3351_);
v___f_3371_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___lam__1___boxed), 2, 1);
lean_closure_set(v___f_3371_, 0, v_snd_3351_);
if (lean_obj_tag(v_val_3365_) == 0)
{
lean_object* v_type_3372_; lean_object* v___x_3373_; uint8_t v_fst_3375_; lean_object* v_mctx_3376_; lean_object* v___y_3392_; lean_object* v_mctx_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; uint8_t v___x_3400_; 
v_type_3372_ = lean_ctor_get(v_val_3365_, 3);
v___x_3373_ = lean_st_ref_get(v___y_3347_);
v_mctx_3397_ = lean_ctor_get(v___x_3373_, 0);
lean_inc_ref_n(v_mctx_3397_, 2);
lean_dec(v___x_3373_);
v___x_3398_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2);
v___x_3399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3398_);
lean_ctor_set(v___x_3399_, 1, v_mctx_3397_);
v___x_3400_ = l_Lean_Expr_hasFVar(v_type_3372_);
if (v___x_3400_ == 0)
{
uint8_t v___x_3401_; 
v___x_3401_ = l_Lean_Expr_hasMVar(v_type_3372_);
if (v___x_3401_ == 0)
{
lean_dec_ref_known(v___x_3399_, 2);
lean_dec_ref(v___f_3371_);
v_fst_3375_ = v___x_3401_;
v_mctx_3376_ = v_mctx_3397_;
goto v___jp_3374_;
}
else
{
lean_object* v___x_3402_; 
lean_dec_ref(v_mctx_3397_);
lean_inc_ref(v_type_3372_);
v___x_3402_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3371_, v___f_3370_, v_type_3372_, v___x_3399_);
v___y_3392_ = v___x_3402_;
goto v___jp_3391_;
}
}
else
{
lean_object* v___x_3403_; 
lean_dec_ref(v_mctx_3397_);
lean_inc_ref(v_type_3372_);
v___x_3403_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3371_, v___f_3370_, v_type_3372_, v___x_3399_);
v___y_3392_ = v___x_3403_;
goto v___jp_3391_;
}
v___jp_3374_:
{
lean_object* v___x_3377_; lean_object* v_cache_3378_; lean_object* v_zetaDeltaFVarIds_3379_; lean_object* v_postponed_3380_; lean_object* v_diag_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3389_; 
v___x_3377_ = lean_st_ref_take(v___y_3347_);
v_cache_3378_ = lean_ctor_get(v___x_3377_, 1);
v_zetaDeltaFVarIds_3379_ = lean_ctor_get(v___x_3377_, 2);
v_postponed_3380_ = lean_ctor_get(v___x_3377_, 3);
v_diag_3381_ = lean_ctor_get(v___x_3377_, 4);
v_isSharedCheck_3389_ = !lean_is_exclusive(v___x_3377_);
if (v_isSharedCheck_3389_ == 0)
{
lean_object* v_unused_3390_; 
v_unused_3390_ = lean_ctor_get(v___x_3377_, 0);
lean_dec(v_unused_3390_);
v___x_3383_ = v___x_3377_;
v_isShared_3384_ = v_isSharedCheck_3389_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_diag_3381_);
lean_inc(v_postponed_3380_);
lean_inc(v_zetaDeltaFVarIds_3379_);
lean_inc(v_cache_3378_);
lean_dec(v___x_3377_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3389_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
lean_ctor_set(v___x_3383_, 0, v_mctx_3376_);
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3388_; 
v_reuseFailAlloc_3388_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3388_, 0, v_mctx_3376_);
lean_ctor_set(v_reuseFailAlloc_3388_, 1, v_cache_3378_);
lean_ctor_set(v_reuseFailAlloc_3388_, 2, v_zetaDeltaFVarIds_3379_);
lean_ctor_set(v_reuseFailAlloc_3388_, 3, v_postponed_3380_);
lean_ctor_set(v_reuseFailAlloc_3388_, 4, v_diag_3381_);
v___x_3386_ = v_reuseFailAlloc_3388_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
lean_object* v___x_3387_; 
v___x_3387_ = lean_st_ref_put(v___y_3347_, v___x_3386_);
v_a_3367_ = v_fst_3375_;
goto v___jp_3366_;
}
}
}
v___jp_3391_:
{
lean_object* v_snd_3393_; lean_object* v_fst_3394_; lean_object* v_mctx_3395_; uint8_t v___x_3396_; 
v_snd_3393_ = lean_ctor_get(v___y_3392_, 1);
lean_inc(v_snd_3393_);
v_fst_3394_ = lean_ctor_get(v___y_3392_, 0);
lean_inc(v_fst_3394_);
lean_dec_ref(v___y_3392_);
v_mctx_3395_ = lean_ctor_get(v_snd_3393_, 1);
lean_inc_ref(v_mctx_3395_);
lean_dec(v_snd_3393_);
v___x_3396_ = lean_unbox(v_fst_3394_);
lean_dec(v_fst_3394_);
v_fst_3375_ = v___x_3396_;
v_mctx_3376_ = v_mctx_3395_;
goto v___jp_3374_;
}
}
else
{
uint8_t v_nondep_3404_; 
v_nondep_3404_ = lean_ctor_get_uint8(v_val_3365_, sizeof(void*)*5);
if (v_nondep_3404_ == 0)
{
lean_object* v_type_3405_; lean_object* v_value_3406_; lean_object* v___x_3407_; uint8_t v_fst_3409_; lean_object* v_snd_3410_; lean_object* v___y_3427_; uint8_t v_fst_3432_; lean_object* v_snd_3433_; lean_object* v___y_3439_; lean_object* v_mctx_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; uint8_t v___x_3446_; 
v_type_3405_ = lean_ctor_get(v_val_3365_, 3);
v_value_3406_ = lean_ctor_get(v_val_3365_, 4);
v___x_3407_ = lean_st_ref_get(v___y_3347_);
v_mctx_3443_ = lean_ctor_get(v___x_3407_, 0);
lean_inc_ref(v_mctx_3443_);
lean_dec(v___x_3407_);
v___x_3444_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2);
v___x_3445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3445_, 0, v___x_3444_);
lean_ctor_set(v___x_3445_, 1, v_mctx_3443_);
v___x_3446_ = l_Lean_Expr_hasFVar(v_type_3405_);
if (v___x_3446_ == 0)
{
uint8_t v___x_3447_; 
v___x_3447_ = l_Lean_Expr_hasMVar(v_type_3405_);
if (v___x_3447_ == 0)
{
v_fst_3432_ = v___x_3447_;
v_snd_3433_ = v___x_3445_;
goto v___jp_3431_;
}
else
{
lean_object* v___x_3448_; 
lean_inc_ref(v_type_3405_);
lean_inc_ref(v___f_3371_);
v___x_3448_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3371_, v___f_3370_, v_type_3405_, v___x_3445_);
v___y_3439_ = v___x_3448_;
goto v___jp_3438_;
}
}
else
{
lean_object* v___x_3449_; 
lean_inc_ref(v_type_3405_);
lean_inc_ref(v___f_3371_);
v___x_3449_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3371_, v___f_3370_, v_type_3405_, v___x_3445_);
v___y_3439_ = v___x_3449_;
goto v___jp_3438_;
}
v___jp_3408_:
{
lean_object* v_mctx_3411_; lean_object* v___x_3412_; lean_object* v_cache_3413_; lean_object* v_zetaDeltaFVarIds_3414_; lean_object* v_postponed_3415_; lean_object* v_diag_3416_; lean_object* v___x_3418_; uint8_t v_isShared_3419_; uint8_t v_isSharedCheck_3424_; 
v_mctx_3411_ = lean_ctor_get(v_snd_3410_, 1);
lean_inc_ref(v_mctx_3411_);
lean_dec_ref(v_snd_3410_);
v___x_3412_ = lean_st_ref_take(v___y_3347_);
v_cache_3413_ = lean_ctor_get(v___x_3412_, 1);
v_zetaDeltaFVarIds_3414_ = lean_ctor_get(v___x_3412_, 2);
v_postponed_3415_ = lean_ctor_get(v___x_3412_, 3);
v_diag_3416_ = lean_ctor_get(v___x_3412_, 4);
v_isSharedCheck_3424_ = !lean_is_exclusive(v___x_3412_);
if (v_isSharedCheck_3424_ == 0)
{
lean_object* v_unused_3425_; 
v_unused_3425_ = lean_ctor_get(v___x_3412_, 0);
lean_dec(v_unused_3425_);
v___x_3418_ = v___x_3412_;
v_isShared_3419_ = v_isSharedCheck_3424_;
goto v_resetjp_3417_;
}
else
{
lean_inc(v_diag_3416_);
lean_inc(v_postponed_3415_);
lean_inc(v_zetaDeltaFVarIds_3414_);
lean_inc(v_cache_3413_);
lean_dec(v___x_3412_);
v___x_3418_ = lean_box(0);
v_isShared_3419_ = v_isSharedCheck_3424_;
goto v_resetjp_3417_;
}
v_resetjp_3417_:
{
lean_object* v___x_3421_; 
if (v_isShared_3419_ == 0)
{
lean_ctor_set(v___x_3418_, 0, v_mctx_3411_);
v___x_3421_ = v___x_3418_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3423_; 
v_reuseFailAlloc_3423_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3423_, 0, v_mctx_3411_);
lean_ctor_set(v_reuseFailAlloc_3423_, 1, v_cache_3413_);
lean_ctor_set(v_reuseFailAlloc_3423_, 2, v_zetaDeltaFVarIds_3414_);
lean_ctor_set(v_reuseFailAlloc_3423_, 3, v_postponed_3415_);
lean_ctor_set(v_reuseFailAlloc_3423_, 4, v_diag_3416_);
v___x_3421_ = v_reuseFailAlloc_3423_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
lean_object* v___x_3422_; 
v___x_3422_ = lean_st_ref_put(v___y_3347_, v___x_3421_);
v_a_3367_ = v_fst_3409_;
goto v___jp_3366_;
}
}
}
v___jp_3426_:
{
lean_object* v_fst_3428_; lean_object* v_snd_3429_; uint8_t v___x_3430_; 
v_fst_3428_ = lean_ctor_get(v___y_3427_, 0);
lean_inc(v_fst_3428_);
v_snd_3429_ = lean_ctor_get(v___y_3427_, 1);
lean_inc(v_snd_3429_);
lean_dec_ref(v___y_3427_);
v___x_3430_ = lean_unbox(v_fst_3428_);
lean_dec(v_fst_3428_);
v_fst_3409_ = v___x_3430_;
v_snd_3410_ = v_snd_3429_;
goto v___jp_3408_;
}
v___jp_3431_:
{
if (v_fst_3432_ == 0)
{
uint8_t v___x_3434_; 
v___x_3434_ = l_Lean_Expr_hasFVar(v_value_3406_);
if (v___x_3434_ == 0)
{
uint8_t v___x_3435_; 
v___x_3435_ = l_Lean_Expr_hasMVar(v_value_3406_);
if (v___x_3435_ == 0)
{
lean_dec_ref(v___f_3371_);
v_fst_3409_ = v___x_3435_;
v_snd_3410_ = v_snd_3433_;
goto v___jp_3408_;
}
else
{
lean_object* v___x_3436_; 
lean_inc_ref(v_value_3406_);
v___x_3436_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3371_, v___f_3370_, v_value_3406_, v_snd_3433_);
v___y_3427_ = v___x_3436_;
goto v___jp_3426_;
}
}
else
{
lean_object* v___x_3437_; 
lean_inc_ref(v_value_3406_);
v___x_3437_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3371_, v___f_3370_, v_value_3406_, v_snd_3433_);
v___y_3427_ = v___x_3437_;
goto v___jp_3426_;
}
}
else
{
lean_dec_ref(v___f_3371_);
v_fst_3409_ = v_fst_3432_;
v_snd_3410_ = v_snd_3433_;
goto v___jp_3408_;
}
}
v___jp_3438_:
{
lean_object* v_fst_3440_; lean_object* v_snd_3441_; uint8_t v___x_3442_; 
v_fst_3440_ = lean_ctor_get(v___y_3439_, 0);
lean_inc(v_fst_3440_);
v_snd_3441_ = lean_ctor_get(v___y_3439_, 1);
lean_inc(v_snd_3441_);
lean_dec_ref(v___y_3439_);
v___x_3442_ = lean_unbox(v_fst_3440_);
lean_dec(v_fst_3440_);
v_fst_3432_ = v___x_3442_;
v_snd_3433_ = v_snd_3441_;
goto v___jp_3431_;
}
}
else
{
lean_object* v_type_3450_; lean_object* v___x_3451_; uint8_t v_fst_3453_; lean_object* v_mctx_3454_; lean_object* v___y_3470_; lean_object* v_mctx_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; uint8_t v___x_3478_; 
v_type_3450_ = lean_ctor_get(v_val_3365_, 3);
v___x_3451_ = lean_st_ref_get(v___y_3347_);
v_mctx_3475_ = lean_ctor_get(v___x_3451_, 0);
lean_inc_ref_n(v_mctx_3475_, 2);
lean_dec(v___x_3451_);
v___x_3476_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2);
v___x_3477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3477_, 0, v___x_3476_);
lean_ctor_set(v___x_3477_, 1, v_mctx_3475_);
v___x_3478_ = l_Lean_Expr_hasFVar(v_type_3450_);
if (v___x_3478_ == 0)
{
uint8_t v___x_3479_; 
v___x_3479_ = l_Lean_Expr_hasMVar(v_type_3450_);
if (v___x_3479_ == 0)
{
lean_dec_ref_known(v___x_3477_, 2);
lean_dec_ref(v___f_3371_);
v_fst_3453_ = v___x_3479_;
v_mctx_3454_ = v_mctx_3475_;
goto v___jp_3452_;
}
else
{
lean_object* v___x_3480_; 
lean_dec_ref(v_mctx_3475_);
lean_inc_ref(v_type_3450_);
v___x_3480_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3371_, v___f_3370_, v_type_3450_, v___x_3477_);
v___y_3470_ = v___x_3480_;
goto v___jp_3469_;
}
}
else
{
lean_object* v___x_3481_; 
lean_dec_ref(v_mctx_3475_);
lean_inc_ref(v_type_3450_);
v___x_3481_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3371_, v___f_3370_, v_type_3450_, v___x_3477_);
v___y_3470_ = v___x_3481_;
goto v___jp_3469_;
}
v___jp_3452_:
{
lean_object* v___x_3455_; lean_object* v_cache_3456_; lean_object* v_zetaDeltaFVarIds_3457_; lean_object* v_postponed_3458_; lean_object* v_diag_3459_; lean_object* v___x_3461_; uint8_t v_isShared_3462_; uint8_t v_isSharedCheck_3467_; 
v___x_3455_ = lean_st_ref_take(v___y_3347_);
v_cache_3456_ = lean_ctor_get(v___x_3455_, 1);
v_zetaDeltaFVarIds_3457_ = lean_ctor_get(v___x_3455_, 2);
v_postponed_3458_ = lean_ctor_get(v___x_3455_, 3);
v_diag_3459_ = lean_ctor_get(v___x_3455_, 4);
v_isSharedCheck_3467_ = !lean_is_exclusive(v___x_3455_);
if (v_isSharedCheck_3467_ == 0)
{
lean_object* v_unused_3468_; 
v_unused_3468_ = lean_ctor_get(v___x_3455_, 0);
lean_dec(v_unused_3468_);
v___x_3461_ = v___x_3455_;
v_isShared_3462_ = v_isSharedCheck_3467_;
goto v_resetjp_3460_;
}
else
{
lean_inc(v_diag_3459_);
lean_inc(v_postponed_3458_);
lean_inc(v_zetaDeltaFVarIds_3457_);
lean_inc(v_cache_3456_);
lean_dec(v___x_3455_);
v___x_3461_ = lean_box(0);
v_isShared_3462_ = v_isSharedCheck_3467_;
goto v_resetjp_3460_;
}
v_resetjp_3460_:
{
lean_object* v___x_3464_; 
if (v_isShared_3462_ == 0)
{
lean_ctor_set(v___x_3461_, 0, v_mctx_3454_);
v___x_3464_ = v___x_3461_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v_mctx_3454_);
lean_ctor_set(v_reuseFailAlloc_3466_, 1, v_cache_3456_);
lean_ctor_set(v_reuseFailAlloc_3466_, 2, v_zetaDeltaFVarIds_3457_);
lean_ctor_set(v_reuseFailAlloc_3466_, 3, v_postponed_3458_);
lean_ctor_set(v_reuseFailAlloc_3466_, 4, v_diag_3459_);
v___x_3464_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
lean_object* v___x_3465_; 
v___x_3465_ = lean_st_ref_put(v___y_3347_, v___x_3464_);
v_a_3367_ = v_fst_3453_;
goto v___jp_3366_;
}
}
}
v___jp_3469_:
{
lean_object* v_snd_3471_; lean_object* v_fst_3472_; lean_object* v_mctx_3473_; uint8_t v___x_3474_; 
v_snd_3471_ = lean_ctor_get(v___y_3470_, 1);
lean_inc(v_snd_3471_);
v_fst_3472_ = lean_ctor_get(v___y_3470_, 0);
lean_inc(v_fst_3472_);
lean_dec_ref(v___y_3470_);
v_mctx_3473_ = lean_ctor_get(v_snd_3471_, 1);
lean_inc_ref(v_mctx_3473_);
lean_dec(v_snd_3471_);
v___x_3474_ = lean_unbox(v_fst_3472_);
lean_dec(v_fst_3472_);
v_fst_3453_ = v___x_3474_;
v_mctx_3454_ = v_mctx_3473_;
goto v___jp_3452_;
}
}
}
v___jp_3366_:
{
if (v_a_3367_ == 0)
{
v_a_3357_ = v_snd_3351_;
goto v___jp_3356_;
}
else
{
lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3368_ = l_Lean_LocalDecl_fvarId(v_val_3365_);
v___x_3369_ = lean_array_push(v_snd_3351_, v___x_3368_);
v_a_3357_ = v___x_3369_;
goto v___jp_3356_;
}
}
}
v___jp_3356_:
{
lean_object* v___x_3359_; 
if (v_isShared_3354_ == 0)
{
lean_ctor_set(v___x_3353_, 1, v_a_3357_);
lean_ctor_set(v___x_3353_, 0, v___x_3355_);
v___x_3359_ = v___x_3353_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v___x_3355_);
lean_ctor_set(v_reuseFailAlloc_3363_, 1, v_a_3357_);
v___x_3359_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
size_t v___x_3360_; size_t v___x_3361_; 
v___x_3360_ = ((size_t)1ULL);
v___x_3361_ = lean_usize_add(v_i_3345_, v___x_3360_);
v_i_3345_ = v___x_3361_;
v_b_3346_ = v___x_3359_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___boxed(lean_object* v_as_3484_, lean_object* v_sz_3485_, lean_object* v_i_3486_, lean_object* v_b_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_){
_start:
{
size_t v_sz_boxed_3490_; size_t v_i_boxed_3491_; lean_object* v_res_3492_; 
v_sz_boxed_3490_ = lean_unbox_usize(v_sz_3485_);
lean_dec(v_sz_3485_);
v_i_boxed_3491_ = lean_unbox_usize(v_i_3486_);
lean_dec(v_i_3486_);
v_res_3492_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg(v_as_3484_, v_sz_boxed_3490_, v_i_boxed_3491_, v_b_3487_, v___y_3488_);
lean_dec(v___y_3488_);
lean_dec_ref(v_as_3484_);
return v_res_3492_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4(lean_object* v_as_3493_, size_t v_sz_3494_, size_t v_i_3495_, lean_object* v_b_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_){
_start:
{
uint8_t v___x_3502_; 
v___x_3502_ = lean_usize_dec_lt(v_i_3495_, v_sz_3494_);
if (v___x_3502_ == 0)
{
lean_object* v___x_3503_; 
v___x_3503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3503_, 0, v_b_3496_);
return v___x_3503_;
}
else
{
lean_object* v_snd_3504_; lean_object* v___x_3506_; uint8_t v_isShared_3507_; uint8_t v_isSharedCheck_3635_; 
v_snd_3504_ = lean_ctor_get(v_b_3496_, 1);
v_isSharedCheck_3635_ = !lean_is_exclusive(v_b_3496_);
if (v_isSharedCheck_3635_ == 0)
{
lean_object* v_unused_3636_; 
v_unused_3636_ = lean_ctor_get(v_b_3496_, 0);
lean_dec(v_unused_3636_);
v___x_3506_ = v_b_3496_;
v_isShared_3507_ = v_isSharedCheck_3635_;
goto v_resetjp_3505_;
}
else
{
lean_inc(v_snd_3504_);
lean_dec(v_b_3496_);
v___x_3506_ = lean_box(0);
v_isShared_3507_ = v_isSharedCheck_3635_;
goto v_resetjp_3505_;
}
v_resetjp_3505_:
{
lean_object* v___x_3508_; lean_object* v_a_3510_; lean_object* v_a_3517_; 
v___x_3508_ = lean_box(0);
v_a_3517_ = lean_array_uget_borrowed(v_as_3493_, v_i_3495_);
if (lean_obj_tag(v_a_3517_) == 0)
{
v_a_3510_ = v_snd_3504_;
goto v___jp_3509_;
}
else
{
lean_object* v_val_3518_; uint8_t v_a_3520_; lean_object* v___f_3523_; lean_object* v___f_3524_; 
v_val_3518_ = lean_ctor_get(v_a_3517_, 0);
v___f_3523_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__0));
lean_inc(v_snd_3504_);
v___f_3524_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___lam__1___boxed), 2, 1);
lean_closure_set(v___f_3524_, 0, v_snd_3504_);
if (lean_obj_tag(v_val_3518_) == 0)
{
lean_object* v_type_3525_; lean_object* v___x_3526_; uint8_t v_fst_3528_; lean_object* v_mctx_3529_; lean_object* v___y_3545_; lean_object* v_mctx_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; uint8_t v___x_3553_; 
v_type_3525_ = lean_ctor_get(v_val_3518_, 3);
v___x_3526_ = lean_st_ref_get(v___y_3498_);
v_mctx_3550_ = lean_ctor_get(v___x_3526_, 0);
lean_inc_ref_n(v_mctx_3550_, 2);
lean_dec(v___x_3526_);
v___x_3551_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2);
v___x_3552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3551_);
lean_ctor_set(v___x_3552_, 1, v_mctx_3550_);
v___x_3553_ = l_Lean_Expr_hasFVar(v_type_3525_);
if (v___x_3553_ == 0)
{
uint8_t v___x_3554_; 
v___x_3554_ = l_Lean_Expr_hasMVar(v_type_3525_);
if (v___x_3554_ == 0)
{
lean_dec_ref_known(v___x_3552_, 2);
lean_dec_ref(v___f_3524_);
v_fst_3528_ = v___x_3554_;
v_mctx_3529_ = v_mctx_3550_;
goto v___jp_3527_;
}
else
{
lean_object* v___x_3555_; 
lean_dec_ref(v_mctx_3550_);
lean_inc_ref(v_type_3525_);
v___x_3555_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3524_, v___f_3523_, v_type_3525_, v___x_3552_);
v___y_3545_ = v___x_3555_;
goto v___jp_3544_;
}
}
else
{
lean_object* v___x_3556_; 
lean_dec_ref(v_mctx_3550_);
lean_inc_ref(v_type_3525_);
v___x_3556_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3524_, v___f_3523_, v_type_3525_, v___x_3552_);
v___y_3545_ = v___x_3556_;
goto v___jp_3544_;
}
v___jp_3527_:
{
lean_object* v___x_3530_; lean_object* v_cache_3531_; lean_object* v_zetaDeltaFVarIds_3532_; lean_object* v_postponed_3533_; lean_object* v_diag_3534_; lean_object* v___x_3536_; uint8_t v_isShared_3537_; uint8_t v_isSharedCheck_3542_; 
v___x_3530_ = lean_st_ref_take(v___y_3498_);
v_cache_3531_ = lean_ctor_get(v___x_3530_, 1);
v_zetaDeltaFVarIds_3532_ = lean_ctor_get(v___x_3530_, 2);
v_postponed_3533_ = lean_ctor_get(v___x_3530_, 3);
v_diag_3534_ = lean_ctor_get(v___x_3530_, 4);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3530_);
if (v_isSharedCheck_3542_ == 0)
{
lean_object* v_unused_3543_; 
v_unused_3543_ = lean_ctor_get(v___x_3530_, 0);
lean_dec(v_unused_3543_);
v___x_3536_ = v___x_3530_;
v_isShared_3537_ = v_isSharedCheck_3542_;
goto v_resetjp_3535_;
}
else
{
lean_inc(v_diag_3534_);
lean_inc(v_postponed_3533_);
lean_inc(v_zetaDeltaFVarIds_3532_);
lean_inc(v_cache_3531_);
lean_dec(v___x_3530_);
v___x_3536_ = lean_box(0);
v_isShared_3537_ = v_isSharedCheck_3542_;
goto v_resetjp_3535_;
}
v_resetjp_3535_:
{
lean_object* v___x_3539_; 
if (v_isShared_3537_ == 0)
{
lean_ctor_set(v___x_3536_, 0, v_mctx_3529_);
v___x_3539_ = v___x_3536_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_mctx_3529_);
lean_ctor_set(v_reuseFailAlloc_3541_, 1, v_cache_3531_);
lean_ctor_set(v_reuseFailAlloc_3541_, 2, v_zetaDeltaFVarIds_3532_);
lean_ctor_set(v_reuseFailAlloc_3541_, 3, v_postponed_3533_);
lean_ctor_set(v_reuseFailAlloc_3541_, 4, v_diag_3534_);
v___x_3539_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
lean_object* v___x_3540_; 
v___x_3540_ = lean_st_ref_put(v___y_3498_, v___x_3539_);
v_a_3520_ = v_fst_3528_;
goto v___jp_3519_;
}
}
}
v___jp_3544_:
{
lean_object* v_snd_3546_; lean_object* v_fst_3547_; lean_object* v_mctx_3548_; uint8_t v___x_3549_; 
v_snd_3546_ = lean_ctor_get(v___y_3545_, 1);
lean_inc(v_snd_3546_);
v_fst_3547_ = lean_ctor_get(v___y_3545_, 0);
lean_inc(v_fst_3547_);
lean_dec_ref(v___y_3545_);
v_mctx_3548_ = lean_ctor_get(v_snd_3546_, 1);
lean_inc_ref(v_mctx_3548_);
lean_dec(v_snd_3546_);
v___x_3549_ = lean_unbox(v_fst_3547_);
lean_dec(v_fst_3547_);
v_fst_3528_ = v___x_3549_;
v_mctx_3529_ = v_mctx_3548_;
goto v___jp_3527_;
}
}
else
{
uint8_t v_nondep_3557_; 
v_nondep_3557_ = lean_ctor_get_uint8(v_val_3518_, sizeof(void*)*5);
if (v_nondep_3557_ == 0)
{
lean_object* v_type_3558_; lean_object* v_value_3559_; lean_object* v___x_3560_; uint8_t v_fst_3562_; lean_object* v_snd_3563_; lean_object* v___y_3580_; uint8_t v_fst_3585_; lean_object* v_snd_3586_; lean_object* v___y_3592_; lean_object* v_mctx_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; uint8_t v___x_3599_; 
v_type_3558_ = lean_ctor_get(v_val_3518_, 3);
v_value_3559_ = lean_ctor_get(v_val_3518_, 4);
v___x_3560_ = lean_st_ref_get(v___y_3498_);
v_mctx_3596_ = lean_ctor_get(v___x_3560_, 0);
lean_inc_ref(v_mctx_3596_);
lean_dec(v___x_3560_);
v___x_3597_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2);
v___x_3598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3598_, 0, v___x_3597_);
lean_ctor_set(v___x_3598_, 1, v_mctx_3596_);
v___x_3599_ = l_Lean_Expr_hasFVar(v_type_3558_);
if (v___x_3599_ == 0)
{
uint8_t v___x_3600_; 
v___x_3600_ = l_Lean_Expr_hasMVar(v_type_3558_);
if (v___x_3600_ == 0)
{
v_fst_3585_ = v___x_3600_;
v_snd_3586_ = v___x_3598_;
goto v___jp_3584_;
}
else
{
lean_object* v___x_3601_; 
lean_inc_ref(v_type_3558_);
lean_inc_ref(v___f_3524_);
v___x_3601_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3524_, v___f_3523_, v_type_3558_, v___x_3598_);
v___y_3592_ = v___x_3601_;
goto v___jp_3591_;
}
}
else
{
lean_object* v___x_3602_; 
lean_inc_ref(v_type_3558_);
lean_inc_ref(v___f_3524_);
v___x_3602_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3524_, v___f_3523_, v_type_3558_, v___x_3598_);
v___y_3592_ = v___x_3602_;
goto v___jp_3591_;
}
v___jp_3561_:
{
lean_object* v_mctx_3564_; lean_object* v___x_3565_; lean_object* v_cache_3566_; lean_object* v_zetaDeltaFVarIds_3567_; lean_object* v_postponed_3568_; lean_object* v_diag_3569_; lean_object* v___x_3571_; uint8_t v_isShared_3572_; uint8_t v_isSharedCheck_3577_; 
v_mctx_3564_ = lean_ctor_get(v_snd_3563_, 1);
lean_inc_ref(v_mctx_3564_);
lean_dec_ref(v_snd_3563_);
v___x_3565_ = lean_st_ref_take(v___y_3498_);
v_cache_3566_ = lean_ctor_get(v___x_3565_, 1);
v_zetaDeltaFVarIds_3567_ = lean_ctor_get(v___x_3565_, 2);
v_postponed_3568_ = lean_ctor_get(v___x_3565_, 3);
v_diag_3569_ = lean_ctor_get(v___x_3565_, 4);
v_isSharedCheck_3577_ = !lean_is_exclusive(v___x_3565_);
if (v_isSharedCheck_3577_ == 0)
{
lean_object* v_unused_3578_; 
v_unused_3578_ = lean_ctor_get(v___x_3565_, 0);
lean_dec(v_unused_3578_);
v___x_3571_ = v___x_3565_;
v_isShared_3572_ = v_isSharedCheck_3577_;
goto v_resetjp_3570_;
}
else
{
lean_inc(v_diag_3569_);
lean_inc(v_postponed_3568_);
lean_inc(v_zetaDeltaFVarIds_3567_);
lean_inc(v_cache_3566_);
lean_dec(v___x_3565_);
v___x_3571_ = lean_box(0);
v_isShared_3572_ = v_isSharedCheck_3577_;
goto v_resetjp_3570_;
}
v_resetjp_3570_:
{
lean_object* v___x_3574_; 
if (v_isShared_3572_ == 0)
{
lean_ctor_set(v___x_3571_, 0, v_mctx_3564_);
v___x_3574_ = v___x_3571_;
goto v_reusejp_3573_;
}
else
{
lean_object* v_reuseFailAlloc_3576_; 
v_reuseFailAlloc_3576_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3576_, 0, v_mctx_3564_);
lean_ctor_set(v_reuseFailAlloc_3576_, 1, v_cache_3566_);
lean_ctor_set(v_reuseFailAlloc_3576_, 2, v_zetaDeltaFVarIds_3567_);
lean_ctor_set(v_reuseFailAlloc_3576_, 3, v_postponed_3568_);
lean_ctor_set(v_reuseFailAlloc_3576_, 4, v_diag_3569_);
v___x_3574_ = v_reuseFailAlloc_3576_;
goto v_reusejp_3573_;
}
v_reusejp_3573_:
{
lean_object* v___x_3575_; 
v___x_3575_ = lean_st_ref_put(v___y_3498_, v___x_3574_);
v_a_3520_ = v_fst_3562_;
goto v___jp_3519_;
}
}
}
v___jp_3579_:
{
lean_object* v_fst_3581_; lean_object* v_snd_3582_; uint8_t v___x_3583_; 
v_fst_3581_ = lean_ctor_get(v___y_3580_, 0);
lean_inc(v_fst_3581_);
v_snd_3582_ = lean_ctor_get(v___y_3580_, 1);
lean_inc(v_snd_3582_);
lean_dec_ref(v___y_3580_);
v___x_3583_ = lean_unbox(v_fst_3581_);
lean_dec(v_fst_3581_);
v_fst_3562_ = v___x_3583_;
v_snd_3563_ = v_snd_3582_;
goto v___jp_3561_;
}
v___jp_3584_:
{
if (v_fst_3585_ == 0)
{
uint8_t v___x_3587_; 
v___x_3587_ = l_Lean_Expr_hasFVar(v_value_3559_);
if (v___x_3587_ == 0)
{
uint8_t v___x_3588_; 
v___x_3588_ = l_Lean_Expr_hasMVar(v_value_3559_);
if (v___x_3588_ == 0)
{
lean_dec_ref(v___f_3524_);
v_fst_3562_ = v___x_3588_;
v_snd_3563_ = v_snd_3586_;
goto v___jp_3561_;
}
else
{
lean_object* v___x_3589_; 
lean_inc_ref(v_value_3559_);
v___x_3589_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3524_, v___f_3523_, v_value_3559_, v_snd_3586_);
v___y_3580_ = v___x_3589_;
goto v___jp_3579_;
}
}
else
{
lean_object* v___x_3590_; 
lean_inc_ref(v_value_3559_);
v___x_3590_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3524_, v___f_3523_, v_value_3559_, v_snd_3586_);
v___y_3580_ = v___x_3590_;
goto v___jp_3579_;
}
}
else
{
lean_dec_ref(v___f_3524_);
v_fst_3562_ = v_fst_3585_;
v_snd_3563_ = v_snd_3586_;
goto v___jp_3561_;
}
}
v___jp_3591_:
{
lean_object* v_fst_3593_; lean_object* v_snd_3594_; uint8_t v___x_3595_; 
v_fst_3593_ = lean_ctor_get(v___y_3592_, 0);
lean_inc(v_fst_3593_);
v_snd_3594_ = lean_ctor_get(v___y_3592_, 1);
lean_inc(v_snd_3594_);
lean_dec_ref(v___y_3592_);
v___x_3595_ = lean_unbox(v_fst_3593_);
lean_dec(v_fst_3593_);
v_fst_3585_ = v___x_3595_;
v_snd_3586_ = v_snd_3594_;
goto v___jp_3584_;
}
}
else
{
lean_object* v_type_3603_; lean_object* v___x_3604_; uint8_t v_fst_3606_; lean_object* v_mctx_3607_; lean_object* v___y_3623_; lean_object* v_mctx_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; uint8_t v___x_3631_; 
v_type_3603_ = lean_ctor_get(v_val_3518_, 3);
v___x_3604_ = lean_st_ref_get(v___y_3498_);
v_mctx_3628_ = lean_ctor_get(v___x_3604_, 0);
lean_inc_ref_n(v_mctx_3628_, 2);
lean_dec(v___x_3604_);
v___x_3629_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2);
v___x_3630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3630_, 0, v___x_3629_);
lean_ctor_set(v___x_3630_, 1, v_mctx_3628_);
v___x_3631_ = l_Lean_Expr_hasFVar(v_type_3603_);
if (v___x_3631_ == 0)
{
uint8_t v___x_3632_; 
v___x_3632_ = l_Lean_Expr_hasMVar(v_type_3603_);
if (v___x_3632_ == 0)
{
lean_dec_ref_known(v___x_3630_, 2);
lean_dec_ref(v___f_3524_);
v_fst_3606_ = v___x_3632_;
v_mctx_3607_ = v_mctx_3628_;
goto v___jp_3605_;
}
else
{
lean_object* v___x_3633_; 
lean_dec_ref(v_mctx_3628_);
lean_inc_ref(v_type_3603_);
v___x_3633_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3524_, v___f_3523_, v_type_3603_, v___x_3630_);
v___y_3623_ = v___x_3633_;
goto v___jp_3622_;
}
}
else
{
lean_object* v___x_3634_; 
lean_dec_ref(v_mctx_3628_);
lean_inc_ref(v_type_3603_);
v___x_3634_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3524_, v___f_3523_, v_type_3603_, v___x_3630_);
v___y_3623_ = v___x_3634_;
goto v___jp_3622_;
}
v___jp_3605_:
{
lean_object* v___x_3608_; lean_object* v_cache_3609_; lean_object* v_zetaDeltaFVarIds_3610_; lean_object* v_postponed_3611_; lean_object* v_diag_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3620_; 
v___x_3608_ = lean_st_ref_take(v___y_3498_);
v_cache_3609_ = lean_ctor_get(v___x_3608_, 1);
v_zetaDeltaFVarIds_3610_ = lean_ctor_get(v___x_3608_, 2);
v_postponed_3611_ = lean_ctor_get(v___x_3608_, 3);
v_diag_3612_ = lean_ctor_get(v___x_3608_, 4);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3608_);
if (v_isSharedCheck_3620_ == 0)
{
lean_object* v_unused_3621_; 
v_unused_3621_ = lean_ctor_get(v___x_3608_, 0);
lean_dec(v_unused_3621_);
v___x_3614_ = v___x_3608_;
v_isShared_3615_ = v_isSharedCheck_3620_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_diag_3612_);
lean_inc(v_postponed_3611_);
lean_inc(v_zetaDeltaFVarIds_3610_);
lean_inc(v_cache_3609_);
lean_dec(v___x_3608_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3620_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___x_3617_; 
if (v_isShared_3615_ == 0)
{
lean_ctor_set(v___x_3614_, 0, v_mctx_3607_);
v___x_3617_ = v___x_3614_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v_mctx_3607_);
lean_ctor_set(v_reuseFailAlloc_3619_, 1, v_cache_3609_);
lean_ctor_set(v_reuseFailAlloc_3619_, 2, v_zetaDeltaFVarIds_3610_);
lean_ctor_set(v_reuseFailAlloc_3619_, 3, v_postponed_3611_);
lean_ctor_set(v_reuseFailAlloc_3619_, 4, v_diag_3612_);
v___x_3617_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
lean_object* v___x_3618_; 
v___x_3618_ = lean_st_ref_put(v___y_3498_, v___x_3617_);
v_a_3520_ = v_fst_3606_;
goto v___jp_3519_;
}
}
}
v___jp_3622_:
{
lean_object* v_snd_3624_; lean_object* v_fst_3625_; lean_object* v_mctx_3626_; uint8_t v___x_3627_; 
v_snd_3624_ = lean_ctor_get(v___y_3623_, 1);
lean_inc(v_snd_3624_);
v_fst_3625_ = lean_ctor_get(v___y_3623_, 0);
lean_inc(v_fst_3625_);
lean_dec_ref(v___y_3623_);
v_mctx_3626_ = lean_ctor_get(v_snd_3624_, 1);
lean_inc_ref(v_mctx_3626_);
lean_dec(v_snd_3624_);
v___x_3627_ = lean_unbox(v_fst_3625_);
lean_dec(v_fst_3625_);
v_fst_3606_ = v___x_3627_;
v_mctx_3607_ = v_mctx_3626_;
goto v___jp_3605_;
}
}
}
v___jp_3519_:
{
if (v_a_3520_ == 0)
{
v_a_3510_ = v_snd_3504_;
goto v___jp_3509_;
}
else
{
lean_object* v___x_3521_; lean_object* v___x_3522_; 
v___x_3521_ = l_Lean_LocalDecl_fvarId(v_val_3518_);
v___x_3522_ = lean_array_push(v_snd_3504_, v___x_3521_);
v_a_3510_ = v___x_3522_;
goto v___jp_3509_;
}
}
}
v___jp_3509_:
{
lean_object* v___x_3512_; 
if (v_isShared_3507_ == 0)
{
lean_ctor_set(v___x_3506_, 1, v_a_3510_);
lean_ctor_set(v___x_3506_, 0, v___x_3508_);
v___x_3512_ = v___x_3506_;
goto v_reusejp_3511_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v___x_3508_);
lean_ctor_set(v_reuseFailAlloc_3516_, 1, v_a_3510_);
v___x_3512_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3511_;
}
v_reusejp_3511_:
{
size_t v___x_3513_; size_t v___x_3514_; lean_object* v___x_3515_; 
v___x_3513_ = ((size_t)1ULL);
v___x_3514_ = lean_usize_add(v_i_3495_, v___x_3513_);
v___x_3515_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg(v_as_3493_, v_sz_3494_, v___x_3514_, v___x_3512_, v___y_3498_);
return v___x_3515_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4___boxed(lean_object* v_as_3637_, lean_object* v_sz_3638_, lean_object* v_i_3639_, lean_object* v_b_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_){
_start:
{
size_t v_sz_boxed_3646_; size_t v_i_boxed_3647_; lean_object* v_res_3648_; 
v_sz_boxed_3646_ = lean_unbox_usize(v_sz_3638_);
lean_dec(v_sz_3638_);
v_i_boxed_3647_ = lean_unbox_usize(v_i_3639_);
lean_dec(v_i_3639_);
v_res_3648_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4(v_as_3637_, v_sz_boxed_3646_, v_i_boxed_3647_, v_b_3640_, v___y_3641_, v___y_3642_, v___y_3643_, v___y_3644_);
lean_dec(v___y_3644_);
lean_dec_ref(v___y_3643_);
lean_dec(v___y_3642_);
lean_dec_ref(v___y_3641_);
lean_dec_ref(v_as_3637_);
return v_res_3648_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2(lean_object* v_init_3649_, lean_object* v_n_3650_, lean_object* v_b_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_){
_start:
{
if (lean_obj_tag(v_n_3650_) == 0)
{
lean_object* v_cs_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; size_t v_sz_3660_; size_t v___x_3661_; lean_object* v___x_3662_; 
v_cs_3657_ = lean_ctor_get(v_n_3650_, 0);
v___x_3658_ = lean_box(0);
v___x_3659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3659_, 0, v___x_3658_);
lean_ctor_set(v___x_3659_, 1, v_b_3651_);
v_sz_3660_ = lean_array_size(v_cs_3657_);
v___x_3661_ = ((size_t)0ULL);
v___x_3662_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__3(v_init_3649_, v_cs_3657_, v_sz_3660_, v___x_3661_, v___x_3659_, v___y_3652_, v___y_3653_, v___y_3654_, v___y_3655_);
if (lean_obj_tag(v___x_3662_) == 0)
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3677_; 
v_a_3663_ = lean_ctor_get(v___x_3662_, 0);
v_isSharedCheck_3677_ = !lean_is_exclusive(v___x_3662_);
if (v_isSharedCheck_3677_ == 0)
{
v___x_3665_ = v___x_3662_;
v_isShared_3666_ = v_isSharedCheck_3677_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___x_3662_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3677_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v_fst_3667_; 
v_fst_3667_ = lean_ctor_get(v_a_3663_, 0);
if (lean_obj_tag(v_fst_3667_) == 0)
{
lean_object* v_snd_3668_; lean_object* v___x_3669_; lean_object* v___x_3671_; 
v_snd_3668_ = lean_ctor_get(v_a_3663_, 1);
lean_inc(v_snd_3668_);
lean_dec(v_a_3663_);
v___x_3669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3669_, 0, v_snd_3668_);
if (v_isShared_3666_ == 0)
{
lean_ctor_set(v___x_3665_, 0, v___x_3669_);
v___x_3671_ = v___x_3665_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v___x_3669_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
return v___x_3671_;
}
}
else
{
lean_object* v_val_3673_; lean_object* v___x_3675_; 
lean_inc_ref(v_fst_3667_);
lean_dec(v_a_3663_);
v_val_3673_ = lean_ctor_get(v_fst_3667_, 0);
lean_inc(v_val_3673_);
lean_dec_ref_known(v_fst_3667_, 1);
if (v_isShared_3666_ == 0)
{
lean_ctor_set(v___x_3665_, 0, v_val_3673_);
v___x_3675_ = v___x_3665_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v_val_3673_);
v___x_3675_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
return v___x_3675_;
}
}
}
}
else
{
lean_object* v_a_3678_; lean_object* v___x_3680_; uint8_t v_isShared_3681_; uint8_t v_isSharedCheck_3685_; 
v_a_3678_ = lean_ctor_get(v___x_3662_, 0);
v_isSharedCheck_3685_ = !lean_is_exclusive(v___x_3662_);
if (v_isSharedCheck_3685_ == 0)
{
v___x_3680_ = v___x_3662_;
v_isShared_3681_ = v_isSharedCheck_3685_;
goto v_resetjp_3679_;
}
else
{
lean_inc(v_a_3678_);
lean_dec(v___x_3662_);
v___x_3680_ = lean_box(0);
v_isShared_3681_ = v_isSharedCheck_3685_;
goto v_resetjp_3679_;
}
v_resetjp_3679_:
{
lean_object* v___x_3683_; 
if (v_isShared_3681_ == 0)
{
v___x_3683_ = v___x_3680_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3684_; 
v_reuseFailAlloc_3684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3684_, 0, v_a_3678_);
v___x_3683_ = v_reuseFailAlloc_3684_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
return v___x_3683_;
}
}
}
}
else
{
lean_object* v_vs_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; size_t v_sz_3689_; size_t v___x_3690_; lean_object* v___x_3691_; 
v_vs_3686_ = lean_ctor_get(v_n_3650_, 0);
v___x_3687_ = lean_box(0);
v___x_3688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3688_, 0, v___x_3687_);
lean_ctor_set(v___x_3688_, 1, v_b_3651_);
v_sz_3689_ = lean_array_size(v_vs_3686_);
v___x_3690_ = ((size_t)0ULL);
v___x_3691_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4(v_vs_3686_, v_sz_3689_, v___x_3690_, v___x_3688_, v___y_3652_, v___y_3653_, v___y_3654_, v___y_3655_);
if (lean_obj_tag(v___x_3691_) == 0)
{
lean_object* v_a_3692_; lean_object* v___x_3694_; uint8_t v_isShared_3695_; uint8_t v_isSharedCheck_3706_; 
v_a_3692_ = lean_ctor_get(v___x_3691_, 0);
v_isSharedCheck_3706_ = !lean_is_exclusive(v___x_3691_);
if (v_isSharedCheck_3706_ == 0)
{
v___x_3694_ = v___x_3691_;
v_isShared_3695_ = v_isSharedCheck_3706_;
goto v_resetjp_3693_;
}
else
{
lean_inc(v_a_3692_);
lean_dec(v___x_3691_);
v___x_3694_ = lean_box(0);
v_isShared_3695_ = v_isSharedCheck_3706_;
goto v_resetjp_3693_;
}
v_resetjp_3693_:
{
lean_object* v_fst_3696_; 
v_fst_3696_ = lean_ctor_get(v_a_3692_, 0);
if (lean_obj_tag(v_fst_3696_) == 0)
{
lean_object* v_snd_3697_; lean_object* v___x_3698_; lean_object* v___x_3700_; 
v_snd_3697_ = lean_ctor_get(v_a_3692_, 1);
lean_inc(v_snd_3697_);
lean_dec(v_a_3692_);
v___x_3698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3698_, 0, v_snd_3697_);
if (v_isShared_3695_ == 0)
{
lean_ctor_set(v___x_3694_, 0, v___x_3698_);
v___x_3700_ = v___x_3694_;
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
lean_object* v_val_3702_; lean_object* v___x_3704_; 
lean_inc_ref(v_fst_3696_);
lean_dec(v_a_3692_);
v_val_3702_ = lean_ctor_get(v_fst_3696_, 0);
lean_inc(v_val_3702_);
lean_dec_ref_known(v_fst_3696_, 1);
if (v_isShared_3695_ == 0)
{
lean_ctor_set(v___x_3694_, 0, v_val_3702_);
v___x_3704_ = v___x_3694_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v_val_3702_);
v___x_3704_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
return v___x_3704_;
}
}
}
}
else
{
lean_object* v_a_3707_; lean_object* v___x_3709_; uint8_t v_isShared_3710_; uint8_t v_isSharedCheck_3714_; 
v_a_3707_ = lean_ctor_get(v___x_3691_, 0);
v_isSharedCheck_3714_ = !lean_is_exclusive(v___x_3691_);
if (v_isSharedCheck_3714_ == 0)
{
v___x_3709_ = v___x_3691_;
v_isShared_3710_ = v_isSharedCheck_3714_;
goto v_resetjp_3708_;
}
else
{
lean_inc(v_a_3707_);
lean_dec(v___x_3691_);
v___x_3709_ = lean_box(0);
v_isShared_3710_ = v_isSharedCheck_3714_;
goto v_resetjp_3708_;
}
v_resetjp_3708_:
{
lean_object* v___x_3712_; 
if (v_isShared_3710_ == 0)
{
v___x_3712_ = v___x_3709_;
goto v_reusejp_3711_;
}
else
{
lean_object* v_reuseFailAlloc_3713_; 
v_reuseFailAlloc_3713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3713_, 0, v_a_3707_);
v___x_3712_ = v_reuseFailAlloc_3713_;
goto v_reusejp_3711_;
}
v_reusejp_3711_:
{
return v___x_3712_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__3(lean_object* v_init_3715_, lean_object* v_as_3716_, size_t v_sz_3717_, size_t v_i_3718_, lean_object* v_b_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_){
_start:
{
uint8_t v___x_3725_; 
v___x_3725_ = lean_usize_dec_lt(v_i_3718_, v_sz_3717_);
if (v___x_3725_ == 0)
{
lean_object* v___x_3726_; 
v___x_3726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3726_, 0, v_b_3719_);
return v___x_3726_;
}
else
{
lean_object* v_snd_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3761_; 
v_snd_3727_ = lean_ctor_get(v_b_3719_, 1);
v_isSharedCheck_3761_ = !lean_is_exclusive(v_b_3719_);
if (v_isSharedCheck_3761_ == 0)
{
lean_object* v_unused_3762_; 
v_unused_3762_ = lean_ctor_get(v_b_3719_, 0);
lean_dec(v_unused_3762_);
v___x_3729_ = v_b_3719_;
v_isShared_3730_ = v_isSharedCheck_3761_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_snd_3727_);
lean_dec(v_b_3719_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3761_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v___x_3731_; lean_object* v_a_3732_; lean_object* v___x_3733_; 
v___x_3731_ = lean_box(0);
v_a_3732_ = lean_array_uget_borrowed(v_as_3716_, v_i_3718_);
lean_inc(v_snd_3727_);
v___x_3733_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2(v_init_3715_, v_a_3732_, v_snd_3727_, v___y_3720_, v___y_3721_, v___y_3722_, v___y_3723_);
if (lean_obj_tag(v___x_3733_) == 0)
{
lean_object* v_a_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3752_; 
v_a_3734_ = lean_ctor_get(v___x_3733_, 0);
v_isSharedCheck_3752_ = !lean_is_exclusive(v___x_3733_);
if (v_isSharedCheck_3752_ == 0)
{
v___x_3736_ = v___x_3733_;
v_isShared_3737_ = v_isSharedCheck_3752_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_a_3734_);
lean_dec(v___x_3733_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3752_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
if (lean_obj_tag(v_a_3734_) == 0)
{
lean_object* v___x_3738_; lean_object* v___x_3740_; 
v___x_3738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3738_, 0, v_a_3734_);
if (v_isShared_3730_ == 0)
{
lean_ctor_set(v___x_3729_, 0, v___x_3738_);
v___x_3740_ = v___x_3729_;
goto v_reusejp_3739_;
}
else
{
lean_object* v_reuseFailAlloc_3744_; 
v_reuseFailAlloc_3744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3744_, 0, v___x_3738_);
lean_ctor_set(v_reuseFailAlloc_3744_, 1, v_snd_3727_);
v___x_3740_ = v_reuseFailAlloc_3744_;
goto v_reusejp_3739_;
}
v_reusejp_3739_:
{
lean_object* v___x_3742_; 
if (v_isShared_3737_ == 0)
{
lean_ctor_set(v___x_3736_, 0, v___x_3740_);
v___x_3742_ = v___x_3736_;
goto v_reusejp_3741_;
}
else
{
lean_object* v_reuseFailAlloc_3743_; 
v_reuseFailAlloc_3743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3743_, 0, v___x_3740_);
v___x_3742_ = v_reuseFailAlloc_3743_;
goto v_reusejp_3741_;
}
v_reusejp_3741_:
{
return v___x_3742_;
}
}
}
else
{
lean_object* v_a_3745_; lean_object* v___x_3747_; 
lean_del_object(v___x_3736_);
lean_dec(v_snd_3727_);
v_a_3745_ = lean_ctor_get(v_a_3734_, 0);
lean_inc(v_a_3745_);
lean_dec_ref_known(v_a_3734_, 1);
if (v_isShared_3730_ == 0)
{
lean_ctor_set(v___x_3729_, 1, v_a_3745_);
lean_ctor_set(v___x_3729_, 0, v___x_3731_);
v___x_3747_ = v___x_3729_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3751_; 
v_reuseFailAlloc_3751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3751_, 0, v___x_3731_);
lean_ctor_set(v_reuseFailAlloc_3751_, 1, v_a_3745_);
v___x_3747_ = v_reuseFailAlloc_3751_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
size_t v___x_3748_; size_t v___x_3749_; 
v___x_3748_ = ((size_t)1ULL);
v___x_3749_ = lean_usize_add(v_i_3718_, v___x_3748_);
v_i_3718_ = v___x_3749_;
v_b_3719_ = v___x_3747_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3753_; lean_object* v___x_3755_; uint8_t v_isShared_3756_; uint8_t v_isSharedCheck_3760_; 
lean_del_object(v___x_3729_);
lean_dec(v_snd_3727_);
v_a_3753_ = lean_ctor_get(v___x_3733_, 0);
v_isSharedCheck_3760_ = !lean_is_exclusive(v___x_3733_);
if (v_isSharedCheck_3760_ == 0)
{
v___x_3755_ = v___x_3733_;
v_isShared_3756_ = v_isSharedCheck_3760_;
goto v_resetjp_3754_;
}
else
{
lean_inc(v_a_3753_);
lean_dec(v___x_3733_);
v___x_3755_ = lean_box(0);
v_isShared_3756_ = v_isSharedCheck_3760_;
goto v_resetjp_3754_;
}
v_resetjp_3754_:
{
lean_object* v___x_3758_; 
if (v_isShared_3756_ == 0)
{
v___x_3758_ = v___x_3755_;
goto v_reusejp_3757_;
}
else
{
lean_object* v_reuseFailAlloc_3759_; 
v_reuseFailAlloc_3759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3759_, 0, v_a_3753_);
v___x_3758_ = v_reuseFailAlloc_3759_;
goto v_reusejp_3757_;
}
v_reusejp_3757_:
{
return v___x_3758_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__3___boxed(lean_object* v_init_3763_, lean_object* v_as_3764_, lean_object* v_sz_3765_, lean_object* v_i_3766_, lean_object* v_b_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_){
_start:
{
size_t v_sz_boxed_3773_; size_t v_i_boxed_3774_; lean_object* v_res_3775_; 
v_sz_boxed_3773_ = lean_unbox_usize(v_sz_3765_);
lean_dec(v_sz_3765_);
v_i_boxed_3774_ = lean_unbox_usize(v_i_3766_);
lean_dec(v_i_3766_);
v_res_3775_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__3(v_init_3763_, v_as_3764_, v_sz_boxed_3773_, v_i_boxed_3774_, v_b_3767_, v___y_3768_, v___y_3769_, v___y_3770_, v___y_3771_);
lean_dec(v___y_3771_);
lean_dec_ref(v___y_3770_);
lean_dec(v___y_3769_);
lean_dec_ref(v___y_3768_);
lean_dec_ref(v_as_3764_);
lean_dec_ref(v_init_3763_);
return v_res_3775_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2___boxed(lean_object* v_init_3776_, lean_object* v_n_3777_, lean_object* v_b_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_){
_start:
{
lean_object* v_res_3784_; 
v_res_3784_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2(v_init_3776_, v_n_3777_, v_b_3778_, v___y_3779_, v___y_3780_, v___y_3781_, v___y_3782_);
lean_dec(v___y_3782_);
lean_dec_ref(v___y_3781_);
lean_dec(v___y_3780_);
lean_dec_ref(v___y_3779_);
lean_dec_ref(v_n_3777_);
lean_dec_ref(v_init_3776_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3_spec__6___redArg(lean_object* v_as_3785_, size_t v_sz_3786_, size_t v_i_3787_, lean_object* v_b_3788_, lean_object* v___y_3789_){
_start:
{
uint8_t v___x_3791_; 
v___x_3791_ = lean_usize_dec_lt(v_i_3787_, v_sz_3786_);
if (v___x_3791_ == 0)
{
lean_object* v___x_3792_; 
v___x_3792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3792_, 0, v_b_3788_);
return v___x_3792_;
}
else
{
lean_object* v_snd_3793_; lean_object* v___x_3795_; uint8_t v_isShared_3796_; uint8_t v_isSharedCheck_3924_; 
v_snd_3793_ = lean_ctor_get(v_b_3788_, 1);
v_isSharedCheck_3924_ = !lean_is_exclusive(v_b_3788_);
if (v_isSharedCheck_3924_ == 0)
{
lean_object* v_unused_3925_; 
v_unused_3925_ = lean_ctor_get(v_b_3788_, 0);
lean_dec(v_unused_3925_);
v___x_3795_ = v_b_3788_;
v_isShared_3796_ = v_isSharedCheck_3924_;
goto v_resetjp_3794_;
}
else
{
lean_inc(v_snd_3793_);
lean_dec(v_b_3788_);
v___x_3795_ = lean_box(0);
v_isShared_3796_ = v_isSharedCheck_3924_;
goto v_resetjp_3794_;
}
v_resetjp_3794_:
{
lean_object* v___x_3797_; lean_object* v_a_3799_; lean_object* v_a_3806_; 
v___x_3797_ = lean_box(0);
v_a_3806_ = lean_array_uget_borrowed(v_as_3785_, v_i_3787_);
if (lean_obj_tag(v_a_3806_) == 0)
{
v_a_3799_ = v_snd_3793_;
goto v___jp_3798_;
}
else
{
lean_object* v_val_3807_; uint8_t v_a_3809_; lean_object* v___f_3812_; lean_object* v___f_3813_; 
v_val_3807_ = lean_ctor_get(v_a_3806_, 0);
v___f_3812_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__0));
lean_inc(v_snd_3793_);
v___f_3813_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___lam__1___boxed), 2, 1);
lean_closure_set(v___f_3813_, 0, v_snd_3793_);
if (lean_obj_tag(v_val_3807_) == 0)
{
lean_object* v_type_3814_; lean_object* v___x_3815_; uint8_t v_fst_3817_; lean_object* v_mctx_3818_; lean_object* v___y_3834_; lean_object* v_mctx_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; uint8_t v___x_3842_; 
v_type_3814_ = lean_ctor_get(v_val_3807_, 3);
v___x_3815_ = lean_st_ref_get(v___y_3789_);
v_mctx_3839_ = lean_ctor_get(v___x_3815_, 0);
lean_inc_ref_n(v_mctx_3839_, 2);
lean_dec(v___x_3815_);
v___x_3840_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2);
v___x_3841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3841_, 0, v___x_3840_);
lean_ctor_set(v___x_3841_, 1, v_mctx_3839_);
v___x_3842_ = l_Lean_Expr_hasFVar(v_type_3814_);
if (v___x_3842_ == 0)
{
uint8_t v___x_3843_; 
v___x_3843_ = l_Lean_Expr_hasMVar(v_type_3814_);
if (v___x_3843_ == 0)
{
lean_dec_ref_known(v___x_3841_, 2);
lean_dec_ref(v___f_3813_);
v_fst_3817_ = v___x_3843_;
v_mctx_3818_ = v_mctx_3839_;
goto v___jp_3816_;
}
else
{
lean_object* v___x_3844_; 
lean_dec_ref(v_mctx_3839_);
lean_inc_ref(v_type_3814_);
v___x_3844_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3813_, v___f_3812_, v_type_3814_, v___x_3841_);
v___y_3834_ = v___x_3844_;
goto v___jp_3833_;
}
}
else
{
lean_object* v___x_3845_; 
lean_dec_ref(v_mctx_3839_);
lean_inc_ref(v_type_3814_);
v___x_3845_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3813_, v___f_3812_, v_type_3814_, v___x_3841_);
v___y_3834_ = v___x_3845_;
goto v___jp_3833_;
}
v___jp_3816_:
{
lean_object* v___x_3819_; lean_object* v_cache_3820_; lean_object* v_zetaDeltaFVarIds_3821_; lean_object* v_postponed_3822_; lean_object* v_diag_3823_; lean_object* v___x_3825_; uint8_t v_isShared_3826_; uint8_t v_isSharedCheck_3831_; 
v___x_3819_ = lean_st_ref_take(v___y_3789_);
v_cache_3820_ = lean_ctor_get(v___x_3819_, 1);
v_zetaDeltaFVarIds_3821_ = lean_ctor_get(v___x_3819_, 2);
v_postponed_3822_ = lean_ctor_get(v___x_3819_, 3);
v_diag_3823_ = lean_ctor_get(v___x_3819_, 4);
v_isSharedCheck_3831_ = !lean_is_exclusive(v___x_3819_);
if (v_isSharedCheck_3831_ == 0)
{
lean_object* v_unused_3832_; 
v_unused_3832_ = lean_ctor_get(v___x_3819_, 0);
lean_dec(v_unused_3832_);
v___x_3825_ = v___x_3819_;
v_isShared_3826_ = v_isSharedCheck_3831_;
goto v_resetjp_3824_;
}
else
{
lean_inc(v_diag_3823_);
lean_inc(v_postponed_3822_);
lean_inc(v_zetaDeltaFVarIds_3821_);
lean_inc(v_cache_3820_);
lean_dec(v___x_3819_);
v___x_3825_ = lean_box(0);
v_isShared_3826_ = v_isSharedCheck_3831_;
goto v_resetjp_3824_;
}
v_resetjp_3824_:
{
lean_object* v___x_3828_; 
if (v_isShared_3826_ == 0)
{
lean_ctor_set(v___x_3825_, 0, v_mctx_3818_);
v___x_3828_ = v___x_3825_;
goto v_reusejp_3827_;
}
else
{
lean_object* v_reuseFailAlloc_3830_; 
v_reuseFailAlloc_3830_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3830_, 0, v_mctx_3818_);
lean_ctor_set(v_reuseFailAlloc_3830_, 1, v_cache_3820_);
lean_ctor_set(v_reuseFailAlloc_3830_, 2, v_zetaDeltaFVarIds_3821_);
lean_ctor_set(v_reuseFailAlloc_3830_, 3, v_postponed_3822_);
lean_ctor_set(v_reuseFailAlloc_3830_, 4, v_diag_3823_);
v___x_3828_ = v_reuseFailAlloc_3830_;
goto v_reusejp_3827_;
}
v_reusejp_3827_:
{
lean_object* v___x_3829_; 
v___x_3829_ = lean_st_ref_put(v___y_3789_, v___x_3828_);
v_a_3809_ = v_fst_3817_;
goto v___jp_3808_;
}
}
}
v___jp_3833_:
{
lean_object* v_snd_3835_; lean_object* v_fst_3836_; lean_object* v_mctx_3837_; uint8_t v___x_3838_; 
v_snd_3835_ = lean_ctor_get(v___y_3834_, 1);
lean_inc(v_snd_3835_);
v_fst_3836_ = lean_ctor_get(v___y_3834_, 0);
lean_inc(v_fst_3836_);
lean_dec_ref(v___y_3834_);
v_mctx_3837_ = lean_ctor_get(v_snd_3835_, 1);
lean_inc_ref(v_mctx_3837_);
lean_dec(v_snd_3835_);
v___x_3838_ = lean_unbox(v_fst_3836_);
lean_dec(v_fst_3836_);
v_fst_3817_ = v___x_3838_;
v_mctx_3818_ = v_mctx_3837_;
goto v___jp_3816_;
}
}
else
{
uint8_t v_nondep_3846_; 
v_nondep_3846_ = lean_ctor_get_uint8(v_val_3807_, sizeof(void*)*5);
if (v_nondep_3846_ == 0)
{
lean_object* v_type_3847_; lean_object* v_value_3848_; lean_object* v___x_3849_; uint8_t v_fst_3851_; lean_object* v_snd_3852_; lean_object* v___y_3869_; uint8_t v_fst_3874_; lean_object* v_snd_3875_; lean_object* v___y_3881_; lean_object* v_mctx_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; uint8_t v___x_3888_; 
v_type_3847_ = lean_ctor_get(v_val_3807_, 3);
v_value_3848_ = lean_ctor_get(v_val_3807_, 4);
v___x_3849_ = lean_st_ref_get(v___y_3789_);
v_mctx_3885_ = lean_ctor_get(v___x_3849_, 0);
lean_inc_ref(v_mctx_3885_);
lean_dec(v___x_3849_);
v___x_3886_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2);
v___x_3887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3887_, 0, v___x_3886_);
lean_ctor_set(v___x_3887_, 1, v_mctx_3885_);
v___x_3888_ = l_Lean_Expr_hasFVar(v_type_3847_);
if (v___x_3888_ == 0)
{
uint8_t v___x_3889_; 
v___x_3889_ = l_Lean_Expr_hasMVar(v_type_3847_);
if (v___x_3889_ == 0)
{
v_fst_3874_ = v___x_3889_;
v_snd_3875_ = v___x_3887_;
goto v___jp_3873_;
}
else
{
lean_object* v___x_3890_; 
lean_inc_ref(v_type_3847_);
lean_inc_ref(v___f_3813_);
v___x_3890_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3813_, v___f_3812_, v_type_3847_, v___x_3887_);
v___y_3881_ = v___x_3890_;
goto v___jp_3880_;
}
}
else
{
lean_object* v___x_3891_; 
lean_inc_ref(v_type_3847_);
lean_inc_ref(v___f_3813_);
v___x_3891_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3813_, v___f_3812_, v_type_3847_, v___x_3887_);
v___y_3881_ = v___x_3891_;
goto v___jp_3880_;
}
v___jp_3850_:
{
lean_object* v_mctx_3853_; lean_object* v___x_3854_; lean_object* v_cache_3855_; lean_object* v_zetaDeltaFVarIds_3856_; lean_object* v_postponed_3857_; lean_object* v_diag_3858_; lean_object* v___x_3860_; uint8_t v_isShared_3861_; uint8_t v_isSharedCheck_3866_; 
v_mctx_3853_ = lean_ctor_get(v_snd_3852_, 1);
lean_inc_ref(v_mctx_3853_);
lean_dec_ref(v_snd_3852_);
v___x_3854_ = lean_st_ref_take(v___y_3789_);
v_cache_3855_ = lean_ctor_get(v___x_3854_, 1);
v_zetaDeltaFVarIds_3856_ = lean_ctor_get(v___x_3854_, 2);
v_postponed_3857_ = lean_ctor_get(v___x_3854_, 3);
v_diag_3858_ = lean_ctor_get(v___x_3854_, 4);
v_isSharedCheck_3866_ = !lean_is_exclusive(v___x_3854_);
if (v_isSharedCheck_3866_ == 0)
{
lean_object* v_unused_3867_; 
v_unused_3867_ = lean_ctor_get(v___x_3854_, 0);
lean_dec(v_unused_3867_);
v___x_3860_ = v___x_3854_;
v_isShared_3861_ = v_isSharedCheck_3866_;
goto v_resetjp_3859_;
}
else
{
lean_inc(v_diag_3858_);
lean_inc(v_postponed_3857_);
lean_inc(v_zetaDeltaFVarIds_3856_);
lean_inc(v_cache_3855_);
lean_dec(v___x_3854_);
v___x_3860_ = lean_box(0);
v_isShared_3861_ = v_isSharedCheck_3866_;
goto v_resetjp_3859_;
}
v_resetjp_3859_:
{
lean_object* v___x_3863_; 
if (v_isShared_3861_ == 0)
{
lean_ctor_set(v___x_3860_, 0, v_mctx_3853_);
v___x_3863_ = v___x_3860_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3865_; 
v_reuseFailAlloc_3865_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3865_, 0, v_mctx_3853_);
lean_ctor_set(v_reuseFailAlloc_3865_, 1, v_cache_3855_);
lean_ctor_set(v_reuseFailAlloc_3865_, 2, v_zetaDeltaFVarIds_3856_);
lean_ctor_set(v_reuseFailAlloc_3865_, 3, v_postponed_3857_);
lean_ctor_set(v_reuseFailAlloc_3865_, 4, v_diag_3858_);
v___x_3863_ = v_reuseFailAlloc_3865_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
lean_object* v___x_3864_; 
v___x_3864_ = lean_st_ref_put(v___y_3789_, v___x_3863_);
v_a_3809_ = v_fst_3851_;
goto v___jp_3808_;
}
}
}
v___jp_3868_:
{
lean_object* v_fst_3870_; lean_object* v_snd_3871_; uint8_t v___x_3872_; 
v_fst_3870_ = lean_ctor_get(v___y_3869_, 0);
lean_inc(v_fst_3870_);
v_snd_3871_ = lean_ctor_get(v___y_3869_, 1);
lean_inc(v_snd_3871_);
lean_dec_ref(v___y_3869_);
v___x_3872_ = lean_unbox(v_fst_3870_);
lean_dec(v_fst_3870_);
v_fst_3851_ = v___x_3872_;
v_snd_3852_ = v_snd_3871_;
goto v___jp_3850_;
}
v___jp_3873_:
{
if (v_fst_3874_ == 0)
{
uint8_t v___x_3876_; 
v___x_3876_ = l_Lean_Expr_hasFVar(v_value_3848_);
if (v___x_3876_ == 0)
{
uint8_t v___x_3877_; 
v___x_3877_ = l_Lean_Expr_hasMVar(v_value_3848_);
if (v___x_3877_ == 0)
{
lean_dec_ref(v___f_3813_);
v_fst_3851_ = v___x_3877_;
v_snd_3852_ = v_snd_3875_;
goto v___jp_3850_;
}
else
{
lean_object* v___x_3878_; 
lean_inc_ref(v_value_3848_);
v___x_3878_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3813_, v___f_3812_, v_value_3848_, v_snd_3875_);
v___y_3869_ = v___x_3878_;
goto v___jp_3868_;
}
}
else
{
lean_object* v___x_3879_; 
lean_inc_ref(v_value_3848_);
v___x_3879_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3813_, v___f_3812_, v_value_3848_, v_snd_3875_);
v___y_3869_ = v___x_3879_;
goto v___jp_3868_;
}
}
else
{
lean_dec_ref(v___f_3813_);
v_fst_3851_ = v_fst_3874_;
v_snd_3852_ = v_snd_3875_;
goto v___jp_3850_;
}
}
v___jp_3880_:
{
lean_object* v_fst_3882_; lean_object* v_snd_3883_; uint8_t v___x_3884_; 
v_fst_3882_ = lean_ctor_get(v___y_3881_, 0);
lean_inc(v_fst_3882_);
v_snd_3883_ = lean_ctor_get(v___y_3881_, 1);
lean_inc(v_snd_3883_);
lean_dec_ref(v___y_3881_);
v___x_3884_ = lean_unbox(v_fst_3882_);
lean_dec(v_fst_3882_);
v_fst_3874_ = v___x_3884_;
v_snd_3875_ = v_snd_3883_;
goto v___jp_3873_;
}
}
else
{
lean_object* v_type_3892_; lean_object* v___x_3893_; uint8_t v_fst_3895_; lean_object* v_mctx_3896_; lean_object* v___y_3912_; lean_object* v_mctx_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; uint8_t v___x_3920_; 
v_type_3892_ = lean_ctor_get(v_val_3807_, 3);
v___x_3893_ = lean_st_ref_get(v___y_3789_);
v_mctx_3917_ = lean_ctor_get(v___x_3893_, 0);
lean_inc_ref_n(v_mctx_3917_, 2);
lean_dec(v___x_3893_);
v___x_3918_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2);
v___x_3919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3919_, 0, v___x_3918_);
lean_ctor_set(v___x_3919_, 1, v_mctx_3917_);
v___x_3920_ = l_Lean_Expr_hasFVar(v_type_3892_);
if (v___x_3920_ == 0)
{
uint8_t v___x_3921_; 
v___x_3921_ = l_Lean_Expr_hasMVar(v_type_3892_);
if (v___x_3921_ == 0)
{
lean_dec_ref_known(v___x_3919_, 2);
lean_dec_ref(v___f_3813_);
v_fst_3895_ = v___x_3921_;
v_mctx_3896_ = v_mctx_3917_;
goto v___jp_3894_;
}
else
{
lean_object* v___x_3922_; 
lean_dec_ref(v_mctx_3917_);
lean_inc_ref(v_type_3892_);
v___x_3922_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3813_, v___f_3812_, v_type_3892_, v___x_3919_);
v___y_3912_ = v___x_3922_;
goto v___jp_3911_;
}
}
else
{
lean_object* v___x_3923_; 
lean_dec_ref(v_mctx_3917_);
lean_inc_ref(v_type_3892_);
v___x_3923_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3813_, v___f_3812_, v_type_3892_, v___x_3919_);
v___y_3912_ = v___x_3923_;
goto v___jp_3911_;
}
v___jp_3894_:
{
lean_object* v___x_3897_; lean_object* v_cache_3898_; lean_object* v_zetaDeltaFVarIds_3899_; lean_object* v_postponed_3900_; lean_object* v_diag_3901_; lean_object* v___x_3903_; uint8_t v_isShared_3904_; uint8_t v_isSharedCheck_3909_; 
v___x_3897_ = lean_st_ref_take(v___y_3789_);
v_cache_3898_ = lean_ctor_get(v___x_3897_, 1);
v_zetaDeltaFVarIds_3899_ = lean_ctor_get(v___x_3897_, 2);
v_postponed_3900_ = lean_ctor_get(v___x_3897_, 3);
v_diag_3901_ = lean_ctor_get(v___x_3897_, 4);
v_isSharedCheck_3909_ = !lean_is_exclusive(v___x_3897_);
if (v_isSharedCheck_3909_ == 0)
{
lean_object* v_unused_3910_; 
v_unused_3910_ = lean_ctor_get(v___x_3897_, 0);
lean_dec(v_unused_3910_);
v___x_3903_ = v___x_3897_;
v_isShared_3904_ = v_isSharedCheck_3909_;
goto v_resetjp_3902_;
}
else
{
lean_inc(v_diag_3901_);
lean_inc(v_postponed_3900_);
lean_inc(v_zetaDeltaFVarIds_3899_);
lean_inc(v_cache_3898_);
lean_dec(v___x_3897_);
v___x_3903_ = lean_box(0);
v_isShared_3904_ = v_isSharedCheck_3909_;
goto v_resetjp_3902_;
}
v_resetjp_3902_:
{
lean_object* v___x_3906_; 
if (v_isShared_3904_ == 0)
{
lean_ctor_set(v___x_3903_, 0, v_mctx_3896_);
v___x_3906_ = v___x_3903_;
goto v_reusejp_3905_;
}
else
{
lean_object* v_reuseFailAlloc_3908_; 
v_reuseFailAlloc_3908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3908_, 0, v_mctx_3896_);
lean_ctor_set(v_reuseFailAlloc_3908_, 1, v_cache_3898_);
lean_ctor_set(v_reuseFailAlloc_3908_, 2, v_zetaDeltaFVarIds_3899_);
lean_ctor_set(v_reuseFailAlloc_3908_, 3, v_postponed_3900_);
lean_ctor_set(v_reuseFailAlloc_3908_, 4, v_diag_3901_);
v___x_3906_ = v_reuseFailAlloc_3908_;
goto v_reusejp_3905_;
}
v_reusejp_3905_:
{
lean_object* v___x_3907_; 
v___x_3907_ = lean_st_ref_put(v___y_3789_, v___x_3906_);
v_a_3809_ = v_fst_3895_;
goto v___jp_3808_;
}
}
}
v___jp_3911_:
{
lean_object* v_snd_3913_; lean_object* v_fst_3914_; lean_object* v_mctx_3915_; uint8_t v___x_3916_; 
v_snd_3913_ = lean_ctor_get(v___y_3912_, 1);
lean_inc(v_snd_3913_);
v_fst_3914_ = lean_ctor_get(v___y_3912_, 0);
lean_inc(v_fst_3914_);
lean_dec_ref(v___y_3912_);
v_mctx_3915_ = lean_ctor_get(v_snd_3913_, 1);
lean_inc_ref(v_mctx_3915_);
lean_dec(v_snd_3913_);
v___x_3916_ = lean_unbox(v_fst_3914_);
lean_dec(v_fst_3914_);
v_fst_3895_ = v___x_3916_;
v_mctx_3896_ = v_mctx_3915_;
goto v___jp_3894_;
}
}
}
v___jp_3808_:
{
if (v_a_3809_ == 0)
{
v_a_3799_ = v_snd_3793_;
goto v___jp_3798_;
}
else
{
lean_object* v___x_3810_; lean_object* v___x_3811_; 
v___x_3810_ = l_Lean_LocalDecl_fvarId(v_val_3807_);
v___x_3811_ = lean_array_push(v_snd_3793_, v___x_3810_);
v_a_3799_ = v___x_3811_;
goto v___jp_3798_;
}
}
}
v___jp_3798_:
{
lean_object* v___x_3801_; 
if (v_isShared_3796_ == 0)
{
lean_ctor_set(v___x_3795_, 1, v_a_3799_);
lean_ctor_set(v___x_3795_, 0, v___x_3797_);
v___x_3801_ = v___x_3795_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v___x_3797_);
lean_ctor_set(v_reuseFailAlloc_3805_, 1, v_a_3799_);
v___x_3801_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
size_t v___x_3802_; size_t v___x_3803_; 
v___x_3802_ = ((size_t)1ULL);
v___x_3803_ = lean_usize_add(v_i_3787_, v___x_3802_);
v_i_3787_ = v___x_3803_;
v_b_3788_ = v___x_3801_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_as_3926_, lean_object* v_sz_3927_, lean_object* v_i_3928_, lean_object* v_b_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_){
_start:
{
size_t v_sz_boxed_3932_; size_t v_i_boxed_3933_; lean_object* v_res_3934_; 
v_sz_boxed_3932_ = lean_unbox_usize(v_sz_3927_);
lean_dec(v_sz_3927_);
v_i_boxed_3933_ = lean_unbox_usize(v_i_3928_);
lean_dec(v_i_3928_);
v_res_3934_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3_spec__6___redArg(v_as_3926_, v_sz_boxed_3932_, v_i_boxed_3933_, v_b_3929_, v___y_3930_);
lean_dec(v___y_3930_);
lean_dec_ref(v_as_3926_);
return v_res_3934_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3(lean_object* v_as_3935_, size_t v_sz_3936_, size_t v_i_3937_, lean_object* v_b_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_){
_start:
{
uint8_t v___x_3944_; 
v___x_3944_ = lean_usize_dec_lt(v_i_3937_, v_sz_3936_);
if (v___x_3944_ == 0)
{
lean_object* v___x_3945_; 
v___x_3945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3945_, 0, v_b_3938_);
return v___x_3945_;
}
else
{
lean_object* v_snd_3946_; lean_object* v___x_3948_; uint8_t v_isShared_3949_; uint8_t v_isSharedCheck_4077_; 
v_snd_3946_ = lean_ctor_get(v_b_3938_, 1);
v_isSharedCheck_4077_ = !lean_is_exclusive(v_b_3938_);
if (v_isSharedCheck_4077_ == 0)
{
lean_object* v_unused_4078_; 
v_unused_4078_ = lean_ctor_get(v_b_3938_, 0);
lean_dec(v_unused_4078_);
v___x_3948_ = v_b_3938_;
v_isShared_3949_ = v_isSharedCheck_4077_;
goto v_resetjp_3947_;
}
else
{
lean_inc(v_snd_3946_);
lean_dec(v_b_3938_);
v___x_3948_ = lean_box(0);
v_isShared_3949_ = v_isSharedCheck_4077_;
goto v_resetjp_3947_;
}
v_resetjp_3947_:
{
lean_object* v___x_3950_; lean_object* v_a_3952_; lean_object* v_a_3959_; 
v___x_3950_ = lean_box(0);
v_a_3959_ = lean_array_uget_borrowed(v_as_3935_, v_i_3937_);
if (lean_obj_tag(v_a_3959_) == 0)
{
v_a_3952_ = v_snd_3946_;
goto v___jp_3951_;
}
else
{
lean_object* v_val_3960_; uint8_t v_a_3962_; lean_object* v___f_3965_; lean_object* v___f_3966_; 
v_val_3960_ = lean_ctor_get(v_a_3959_, 0);
v___f_3965_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__0));
lean_inc(v_snd_3946_);
v___f_3966_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___lam__1___boxed), 2, 1);
lean_closure_set(v___f_3966_, 0, v_snd_3946_);
if (lean_obj_tag(v_val_3960_) == 0)
{
lean_object* v_type_3967_; lean_object* v___x_3968_; uint8_t v_fst_3970_; lean_object* v_mctx_3971_; lean_object* v___y_3987_; lean_object* v_mctx_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; uint8_t v___x_3995_; 
v_type_3967_ = lean_ctor_get(v_val_3960_, 3);
v___x_3968_ = lean_st_ref_get(v___y_3940_);
v_mctx_3992_ = lean_ctor_get(v___x_3968_, 0);
lean_inc_ref_n(v_mctx_3992_, 2);
lean_dec(v___x_3968_);
v___x_3993_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2);
v___x_3994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3994_, 0, v___x_3993_);
lean_ctor_set(v___x_3994_, 1, v_mctx_3992_);
v___x_3995_ = l_Lean_Expr_hasFVar(v_type_3967_);
if (v___x_3995_ == 0)
{
uint8_t v___x_3996_; 
v___x_3996_ = l_Lean_Expr_hasMVar(v_type_3967_);
if (v___x_3996_ == 0)
{
lean_dec_ref_known(v___x_3994_, 2);
lean_dec_ref(v___f_3966_);
v_fst_3970_ = v___x_3996_;
v_mctx_3971_ = v_mctx_3992_;
goto v___jp_3969_;
}
else
{
lean_object* v___x_3997_; 
lean_dec_ref(v_mctx_3992_);
lean_inc_ref(v_type_3967_);
v___x_3997_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3966_, v___f_3965_, v_type_3967_, v___x_3994_);
v___y_3987_ = v___x_3997_;
goto v___jp_3986_;
}
}
else
{
lean_object* v___x_3998_; 
lean_dec_ref(v_mctx_3992_);
lean_inc_ref(v_type_3967_);
v___x_3998_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3966_, v___f_3965_, v_type_3967_, v___x_3994_);
v___y_3987_ = v___x_3998_;
goto v___jp_3986_;
}
v___jp_3969_:
{
lean_object* v___x_3972_; lean_object* v_cache_3973_; lean_object* v_zetaDeltaFVarIds_3974_; lean_object* v_postponed_3975_; lean_object* v_diag_3976_; lean_object* v___x_3978_; uint8_t v_isShared_3979_; uint8_t v_isSharedCheck_3984_; 
v___x_3972_ = lean_st_ref_take(v___y_3940_);
v_cache_3973_ = lean_ctor_get(v___x_3972_, 1);
v_zetaDeltaFVarIds_3974_ = lean_ctor_get(v___x_3972_, 2);
v_postponed_3975_ = lean_ctor_get(v___x_3972_, 3);
v_diag_3976_ = lean_ctor_get(v___x_3972_, 4);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3972_);
if (v_isSharedCheck_3984_ == 0)
{
lean_object* v_unused_3985_; 
v_unused_3985_ = lean_ctor_get(v___x_3972_, 0);
lean_dec(v_unused_3985_);
v___x_3978_ = v___x_3972_;
v_isShared_3979_ = v_isSharedCheck_3984_;
goto v_resetjp_3977_;
}
else
{
lean_inc(v_diag_3976_);
lean_inc(v_postponed_3975_);
lean_inc(v_zetaDeltaFVarIds_3974_);
lean_inc(v_cache_3973_);
lean_dec(v___x_3972_);
v___x_3978_ = lean_box(0);
v_isShared_3979_ = v_isSharedCheck_3984_;
goto v_resetjp_3977_;
}
v_resetjp_3977_:
{
lean_object* v___x_3981_; 
if (v_isShared_3979_ == 0)
{
lean_ctor_set(v___x_3978_, 0, v_mctx_3971_);
v___x_3981_ = v___x_3978_;
goto v_reusejp_3980_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v_mctx_3971_);
lean_ctor_set(v_reuseFailAlloc_3983_, 1, v_cache_3973_);
lean_ctor_set(v_reuseFailAlloc_3983_, 2, v_zetaDeltaFVarIds_3974_);
lean_ctor_set(v_reuseFailAlloc_3983_, 3, v_postponed_3975_);
lean_ctor_set(v_reuseFailAlloc_3983_, 4, v_diag_3976_);
v___x_3981_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3980_;
}
v_reusejp_3980_:
{
lean_object* v___x_3982_; 
v___x_3982_ = lean_st_ref_put(v___y_3940_, v___x_3981_);
v_a_3962_ = v_fst_3970_;
goto v___jp_3961_;
}
}
}
v___jp_3986_:
{
lean_object* v_snd_3988_; lean_object* v_fst_3989_; lean_object* v_mctx_3990_; uint8_t v___x_3991_; 
v_snd_3988_ = lean_ctor_get(v___y_3987_, 1);
lean_inc(v_snd_3988_);
v_fst_3989_ = lean_ctor_get(v___y_3987_, 0);
lean_inc(v_fst_3989_);
lean_dec_ref(v___y_3987_);
v_mctx_3990_ = lean_ctor_get(v_snd_3988_, 1);
lean_inc_ref(v_mctx_3990_);
lean_dec(v_snd_3988_);
v___x_3991_ = lean_unbox(v_fst_3989_);
lean_dec(v_fst_3989_);
v_fst_3970_ = v___x_3991_;
v_mctx_3971_ = v_mctx_3990_;
goto v___jp_3969_;
}
}
else
{
uint8_t v_nondep_3999_; 
v_nondep_3999_ = lean_ctor_get_uint8(v_val_3960_, sizeof(void*)*5);
if (v_nondep_3999_ == 0)
{
lean_object* v_type_4000_; lean_object* v_value_4001_; lean_object* v___x_4002_; uint8_t v_fst_4004_; lean_object* v_snd_4005_; lean_object* v___y_4022_; uint8_t v_fst_4027_; lean_object* v_snd_4028_; lean_object* v___y_4034_; lean_object* v_mctx_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; uint8_t v___x_4041_; 
v_type_4000_ = lean_ctor_get(v_val_3960_, 3);
v_value_4001_ = lean_ctor_get(v_val_3960_, 4);
v___x_4002_ = lean_st_ref_get(v___y_3940_);
v_mctx_4038_ = lean_ctor_get(v___x_4002_, 0);
lean_inc_ref(v_mctx_4038_);
lean_dec(v___x_4002_);
v___x_4039_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2);
v___x_4040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4040_, 0, v___x_4039_);
lean_ctor_set(v___x_4040_, 1, v_mctx_4038_);
v___x_4041_ = l_Lean_Expr_hasFVar(v_type_4000_);
if (v___x_4041_ == 0)
{
uint8_t v___x_4042_; 
v___x_4042_ = l_Lean_Expr_hasMVar(v_type_4000_);
if (v___x_4042_ == 0)
{
v_fst_4027_ = v___x_4042_;
v_snd_4028_ = v___x_4040_;
goto v___jp_4026_;
}
else
{
lean_object* v___x_4043_; 
lean_inc_ref(v_type_4000_);
lean_inc_ref(v___f_3966_);
v___x_4043_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3966_, v___f_3965_, v_type_4000_, v___x_4040_);
v___y_4034_ = v___x_4043_;
goto v___jp_4033_;
}
}
else
{
lean_object* v___x_4044_; 
lean_inc_ref(v_type_4000_);
lean_inc_ref(v___f_3966_);
v___x_4044_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3966_, v___f_3965_, v_type_4000_, v___x_4040_);
v___y_4034_ = v___x_4044_;
goto v___jp_4033_;
}
v___jp_4003_:
{
lean_object* v_mctx_4006_; lean_object* v___x_4007_; lean_object* v_cache_4008_; lean_object* v_zetaDeltaFVarIds_4009_; lean_object* v_postponed_4010_; lean_object* v_diag_4011_; lean_object* v___x_4013_; uint8_t v_isShared_4014_; uint8_t v_isSharedCheck_4019_; 
v_mctx_4006_ = lean_ctor_get(v_snd_4005_, 1);
lean_inc_ref(v_mctx_4006_);
lean_dec_ref(v_snd_4005_);
v___x_4007_ = lean_st_ref_take(v___y_3940_);
v_cache_4008_ = lean_ctor_get(v___x_4007_, 1);
v_zetaDeltaFVarIds_4009_ = lean_ctor_get(v___x_4007_, 2);
v_postponed_4010_ = lean_ctor_get(v___x_4007_, 3);
v_diag_4011_ = lean_ctor_get(v___x_4007_, 4);
v_isSharedCheck_4019_ = !lean_is_exclusive(v___x_4007_);
if (v_isSharedCheck_4019_ == 0)
{
lean_object* v_unused_4020_; 
v_unused_4020_ = lean_ctor_get(v___x_4007_, 0);
lean_dec(v_unused_4020_);
v___x_4013_ = v___x_4007_;
v_isShared_4014_ = v_isSharedCheck_4019_;
goto v_resetjp_4012_;
}
else
{
lean_inc(v_diag_4011_);
lean_inc(v_postponed_4010_);
lean_inc(v_zetaDeltaFVarIds_4009_);
lean_inc(v_cache_4008_);
lean_dec(v___x_4007_);
v___x_4013_ = lean_box(0);
v_isShared_4014_ = v_isSharedCheck_4019_;
goto v_resetjp_4012_;
}
v_resetjp_4012_:
{
lean_object* v___x_4016_; 
if (v_isShared_4014_ == 0)
{
lean_ctor_set(v___x_4013_, 0, v_mctx_4006_);
v___x_4016_ = v___x_4013_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4018_; 
v_reuseFailAlloc_4018_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4018_, 0, v_mctx_4006_);
lean_ctor_set(v_reuseFailAlloc_4018_, 1, v_cache_4008_);
lean_ctor_set(v_reuseFailAlloc_4018_, 2, v_zetaDeltaFVarIds_4009_);
lean_ctor_set(v_reuseFailAlloc_4018_, 3, v_postponed_4010_);
lean_ctor_set(v_reuseFailAlloc_4018_, 4, v_diag_4011_);
v___x_4016_ = v_reuseFailAlloc_4018_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
lean_object* v___x_4017_; 
v___x_4017_ = lean_st_ref_put(v___y_3940_, v___x_4016_);
v_a_3962_ = v_fst_4004_;
goto v___jp_3961_;
}
}
}
v___jp_4021_:
{
lean_object* v_fst_4023_; lean_object* v_snd_4024_; uint8_t v___x_4025_; 
v_fst_4023_ = lean_ctor_get(v___y_4022_, 0);
lean_inc(v_fst_4023_);
v_snd_4024_ = lean_ctor_get(v___y_4022_, 1);
lean_inc(v_snd_4024_);
lean_dec_ref(v___y_4022_);
v___x_4025_ = lean_unbox(v_fst_4023_);
lean_dec(v_fst_4023_);
v_fst_4004_ = v___x_4025_;
v_snd_4005_ = v_snd_4024_;
goto v___jp_4003_;
}
v___jp_4026_:
{
if (v_fst_4027_ == 0)
{
uint8_t v___x_4029_; 
v___x_4029_ = l_Lean_Expr_hasFVar(v_value_4001_);
if (v___x_4029_ == 0)
{
uint8_t v___x_4030_; 
v___x_4030_ = l_Lean_Expr_hasMVar(v_value_4001_);
if (v___x_4030_ == 0)
{
lean_dec_ref(v___f_3966_);
v_fst_4004_ = v___x_4030_;
v_snd_4005_ = v_snd_4028_;
goto v___jp_4003_;
}
else
{
lean_object* v___x_4031_; 
lean_inc_ref(v_value_4001_);
v___x_4031_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3966_, v___f_3965_, v_value_4001_, v_snd_4028_);
v___y_4022_ = v___x_4031_;
goto v___jp_4021_;
}
}
else
{
lean_object* v___x_4032_; 
lean_inc_ref(v_value_4001_);
v___x_4032_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3966_, v___f_3965_, v_value_4001_, v_snd_4028_);
v___y_4022_ = v___x_4032_;
goto v___jp_4021_;
}
}
else
{
lean_dec_ref(v___f_3966_);
v_fst_4004_ = v_fst_4027_;
v_snd_4005_ = v_snd_4028_;
goto v___jp_4003_;
}
}
v___jp_4033_:
{
lean_object* v_fst_4035_; lean_object* v_snd_4036_; uint8_t v___x_4037_; 
v_fst_4035_ = lean_ctor_get(v___y_4034_, 0);
lean_inc(v_fst_4035_);
v_snd_4036_ = lean_ctor_get(v___y_4034_, 1);
lean_inc(v_snd_4036_);
lean_dec_ref(v___y_4034_);
v___x_4037_ = lean_unbox(v_fst_4035_);
lean_dec(v_fst_4035_);
v_fst_4027_ = v___x_4037_;
v_snd_4028_ = v_snd_4036_;
goto v___jp_4026_;
}
}
else
{
lean_object* v_type_4045_; lean_object* v___x_4046_; uint8_t v_fst_4048_; lean_object* v_mctx_4049_; lean_object* v___y_4065_; lean_object* v_mctx_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; uint8_t v___x_4073_; 
v_type_4045_ = lean_ctor_get(v_val_3960_, 3);
v___x_4046_ = lean_st_ref_get(v___y_3940_);
v_mctx_4070_ = lean_ctor_get(v___x_4046_, 0);
lean_inc_ref_n(v_mctx_4070_, 2);
lean_dec(v___x_4046_);
v___x_4071_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg___closed__2);
v___x_4072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4072_, 0, v___x_4071_);
lean_ctor_set(v___x_4072_, 1, v_mctx_4070_);
v___x_4073_ = l_Lean_Expr_hasFVar(v_type_4045_);
if (v___x_4073_ == 0)
{
uint8_t v___x_4074_; 
v___x_4074_ = l_Lean_Expr_hasMVar(v_type_4045_);
if (v___x_4074_ == 0)
{
lean_dec_ref_known(v___x_4072_, 2);
lean_dec_ref(v___f_3966_);
v_fst_4048_ = v___x_4074_;
v_mctx_4049_ = v_mctx_4070_;
goto v___jp_4047_;
}
else
{
lean_object* v___x_4075_; 
lean_dec_ref(v_mctx_4070_);
lean_inc_ref(v_type_4045_);
v___x_4075_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3966_, v___f_3965_, v_type_4045_, v___x_4072_);
v___y_4065_ = v___x_4075_;
goto v___jp_4064_;
}
}
else
{
lean_object* v___x_4076_; 
lean_dec_ref(v_mctx_4070_);
lean_inc_ref(v_type_4045_);
v___x_4076_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_3966_, v___f_3965_, v_type_4045_, v___x_4072_);
v___y_4065_ = v___x_4076_;
goto v___jp_4064_;
}
v___jp_4047_:
{
lean_object* v___x_4050_; lean_object* v_cache_4051_; lean_object* v_zetaDeltaFVarIds_4052_; lean_object* v_postponed_4053_; lean_object* v_diag_4054_; lean_object* v___x_4056_; uint8_t v_isShared_4057_; uint8_t v_isSharedCheck_4062_; 
v___x_4050_ = lean_st_ref_take(v___y_3940_);
v_cache_4051_ = lean_ctor_get(v___x_4050_, 1);
v_zetaDeltaFVarIds_4052_ = lean_ctor_get(v___x_4050_, 2);
v_postponed_4053_ = lean_ctor_get(v___x_4050_, 3);
v_diag_4054_ = lean_ctor_get(v___x_4050_, 4);
v_isSharedCheck_4062_ = !lean_is_exclusive(v___x_4050_);
if (v_isSharedCheck_4062_ == 0)
{
lean_object* v_unused_4063_; 
v_unused_4063_ = lean_ctor_get(v___x_4050_, 0);
lean_dec(v_unused_4063_);
v___x_4056_ = v___x_4050_;
v_isShared_4057_ = v_isSharedCheck_4062_;
goto v_resetjp_4055_;
}
else
{
lean_inc(v_diag_4054_);
lean_inc(v_postponed_4053_);
lean_inc(v_zetaDeltaFVarIds_4052_);
lean_inc(v_cache_4051_);
lean_dec(v___x_4050_);
v___x_4056_ = lean_box(0);
v_isShared_4057_ = v_isSharedCheck_4062_;
goto v_resetjp_4055_;
}
v_resetjp_4055_:
{
lean_object* v___x_4059_; 
if (v_isShared_4057_ == 0)
{
lean_ctor_set(v___x_4056_, 0, v_mctx_4049_);
v___x_4059_ = v___x_4056_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4061_; 
v_reuseFailAlloc_4061_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4061_, 0, v_mctx_4049_);
lean_ctor_set(v_reuseFailAlloc_4061_, 1, v_cache_4051_);
lean_ctor_set(v_reuseFailAlloc_4061_, 2, v_zetaDeltaFVarIds_4052_);
lean_ctor_set(v_reuseFailAlloc_4061_, 3, v_postponed_4053_);
lean_ctor_set(v_reuseFailAlloc_4061_, 4, v_diag_4054_);
v___x_4059_ = v_reuseFailAlloc_4061_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
lean_object* v___x_4060_; 
v___x_4060_ = lean_st_ref_put(v___y_3940_, v___x_4059_);
v_a_3962_ = v_fst_4048_;
goto v___jp_3961_;
}
}
}
v___jp_4064_:
{
lean_object* v_snd_4066_; lean_object* v_fst_4067_; lean_object* v_mctx_4068_; uint8_t v___x_4069_; 
v_snd_4066_ = lean_ctor_get(v___y_4065_, 1);
lean_inc(v_snd_4066_);
v_fst_4067_ = lean_ctor_get(v___y_4065_, 0);
lean_inc(v_fst_4067_);
lean_dec_ref(v___y_4065_);
v_mctx_4068_ = lean_ctor_get(v_snd_4066_, 1);
lean_inc_ref(v_mctx_4068_);
lean_dec(v_snd_4066_);
v___x_4069_ = lean_unbox(v_fst_4067_);
lean_dec(v_fst_4067_);
v_fst_4048_ = v___x_4069_;
v_mctx_4049_ = v_mctx_4068_;
goto v___jp_4047_;
}
}
}
v___jp_3961_:
{
if (v_a_3962_ == 0)
{
v_a_3952_ = v_snd_3946_;
goto v___jp_3951_;
}
else
{
lean_object* v___x_3963_; lean_object* v___x_3964_; 
v___x_3963_ = l_Lean_LocalDecl_fvarId(v_val_3960_);
v___x_3964_ = lean_array_push(v_snd_3946_, v___x_3963_);
v_a_3952_ = v___x_3964_;
goto v___jp_3951_;
}
}
}
v___jp_3951_:
{
lean_object* v___x_3954_; 
if (v_isShared_3949_ == 0)
{
lean_ctor_set(v___x_3948_, 1, v_a_3952_);
lean_ctor_set(v___x_3948_, 0, v___x_3950_);
v___x_3954_ = v___x_3948_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3958_; 
v_reuseFailAlloc_3958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3958_, 0, v___x_3950_);
lean_ctor_set(v_reuseFailAlloc_3958_, 1, v_a_3952_);
v___x_3954_ = v_reuseFailAlloc_3958_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
size_t v___x_3955_; size_t v___x_3956_; lean_object* v___x_3957_; 
v___x_3955_ = ((size_t)1ULL);
v___x_3956_ = lean_usize_add(v_i_3937_, v___x_3955_);
v___x_3957_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3_spec__6___redArg(v_as_3935_, v_sz_3936_, v___x_3956_, v___x_3954_, v___y_3940_);
return v___x_3957_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3___boxed(lean_object* v_as_4079_, lean_object* v_sz_4080_, lean_object* v_i_4081_, lean_object* v_b_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_){
_start:
{
size_t v_sz_boxed_4088_; size_t v_i_boxed_4089_; lean_object* v_res_4090_; 
v_sz_boxed_4088_ = lean_unbox_usize(v_sz_4080_);
lean_dec(v_sz_4080_);
v_i_boxed_4089_ = lean_unbox_usize(v_i_4081_);
lean_dec(v_i_4081_);
v_res_4090_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3(v_as_4079_, v_sz_boxed_4088_, v_i_boxed_4089_, v_b_4082_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_);
lean_dec(v___y_4086_);
lean_dec_ref(v___y_4085_);
lean_dec(v___y_4084_);
lean_dec_ref(v___y_4083_);
lean_dec_ref(v_as_4079_);
return v_res_4090_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1(lean_object* v_t_4091_, lean_object* v_init_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_){
_start:
{
lean_object* v_root_4098_; lean_object* v_tail_4099_; lean_object* v___x_4100_; 
v_root_4098_ = lean_ctor_get(v_t_4091_, 0);
v_tail_4099_ = lean_ctor_get(v_t_4091_, 1);
lean_inc_ref(v_init_4092_);
v___x_4100_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2(v_init_4092_, v_root_4098_, v_init_4092_, v___y_4093_, v___y_4094_, v___y_4095_, v___y_4096_);
lean_dec_ref(v_init_4092_);
if (lean_obj_tag(v___x_4100_) == 0)
{
lean_object* v_a_4101_; lean_object* v___x_4103_; uint8_t v_isShared_4104_; uint8_t v_isSharedCheck_4137_; 
v_a_4101_ = lean_ctor_get(v___x_4100_, 0);
v_isSharedCheck_4137_ = !lean_is_exclusive(v___x_4100_);
if (v_isSharedCheck_4137_ == 0)
{
v___x_4103_ = v___x_4100_;
v_isShared_4104_ = v_isSharedCheck_4137_;
goto v_resetjp_4102_;
}
else
{
lean_inc(v_a_4101_);
lean_dec(v___x_4100_);
v___x_4103_ = lean_box(0);
v_isShared_4104_ = v_isSharedCheck_4137_;
goto v_resetjp_4102_;
}
v_resetjp_4102_:
{
if (lean_obj_tag(v_a_4101_) == 0)
{
lean_object* v_a_4105_; lean_object* v___x_4107_; 
v_a_4105_ = lean_ctor_get(v_a_4101_, 0);
lean_inc(v_a_4105_);
lean_dec_ref_known(v_a_4101_, 1);
if (v_isShared_4104_ == 0)
{
lean_ctor_set(v___x_4103_, 0, v_a_4105_);
v___x_4107_ = v___x_4103_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v_a_4105_);
v___x_4107_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
return v___x_4107_;
}
}
else
{
lean_object* v_a_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; size_t v_sz_4112_; size_t v___x_4113_; lean_object* v___x_4114_; 
lean_del_object(v___x_4103_);
v_a_4109_ = lean_ctor_get(v_a_4101_, 0);
lean_inc(v_a_4109_);
lean_dec_ref_known(v_a_4101_, 1);
v___x_4110_ = lean_box(0);
v___x_4111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4111_, 0, v___x_4110_);
lean_ctor_set(v___x_4111_, 1, v_a_4109_);
v_sz_4112_ = lean_array_size(v_tail_4099_);
v___x_4113_ = ((size_t)0ULL);
v___x_4114_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3(v_tail_4099_, v_sz_4112_, v___x_4113_, v___x_4111_, v___y_4093_, v___y_4094_, v___y_4095_, v___y_4096_);
if (lean_obj_tag(v___x_4114_) == 0)
{
lean_object* v_a_4115_; lean_object* v___x_4117_; uint8_t v_isShared_4118_; uint8_t v_isSharedCheck_4128_; 
v_a_4115_ = lean_ctor_get(v___x_4114_, 0);
v_isSharedCheck_4128_ = !lean_is_exclusive(v___x_4114_);
if (v_isSharedCheck_4128_ == 0)
{
v___x_4117_ = v___x_4114_;
v_isShared_4118_ = v_isSharedCheck_4128_;
goto v_resetjp_4116_;
}
else
{
lean_inc(v_a_4115_);
lean_dec(v___x_4114_);
v___x_4117_ = lean_box(0);
v_isShared_4118_ = v_isSharedCheck_4128_;
goto v_resetjp_4116_;
}
v_resetjp_4116_:
{
lean_object* v_fst_4119_; 
v_fst_4119_ = lean_ctor_get(v_a_4115_, 0);
if (lean_obj_tag(v_fst_4119_) == 0)
{
lean_object* v_snd_4120_; lean_object* v___x_4122_; 
v_snd_4120_ = lean_ctor_get(v_a_4115_, 1);
lean_inc(v_snd_4120_);
lean_dec(v_a_4115_);
if (v_isShared_4118_ == 0)
{
lean_ctor_set(v___x_4117_, 0, v_snd_4120_);
v___x_4122_ = v___x_4117_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4123_; 
v_reuseFailAlloc_4123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4123_, 0, v_snd_4120_);
v___x_4122_ = v_reuseFailAlloc_4123_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
return v___x_4122_;
}
}
else
{
lean_object* v_val_4124_; lean_object* v___x_4126_; 
lean_inc_ref(v_fst_4119_);
lean_dec(v_a_4115_);
v_val_4124_ = lean_ctor_get(v_fst_4119_, 0);
lean_inc(v_val_4124_);
lean_dec_ref_known(v_fst_4119_, 1);
if (v_isShared_4118_ == 0)
{
lean_ctor_set(v___x_4117_, 0, v_val_4124_);
v___x_4126_ = v___x_4117_;
goto v_reusejp_4125_;
}
else
{
lean_object* v_reuseFailAlloc_4127_; 
v_reuseFailAlloc_4127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4127_, 0, v_val_4124_);
v___x_4126_ = v_reuseFailAlloc_4127_;
goto v_reusejp_4125_;
}
v_reusejp_4125_:
{
return v___x_4126_;
}
}
}
}
else
{
lean_object* v_a_4129_; lean_object* v___x_4131_; uint8_t v_isShared_4132_; uint8_t v_isSharedCheck_4136_; 
v_a_4129_ = lean_ctor_get(v___x_4114_, 0);
v_isSharedCheck_4136_ = !lean_is_exclusive(v___x_4114_);
if (v_isSharedCheck_4136_ == 0)
{
v___x_4131_ = v___x_4114_;
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
else
{
lean_inc(v_a_4129_);
lean_dec(v___x_4114_);
v___x_4131_ = lean_box(0);
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
v_resetjp_4130_:
{
lean_object* v___x_4134_; 
if (v_isShared_4132_ == 0)
{
v___x_4134_ = v___x_4131_;
goto v_reusejp_4133_;
}
else
{
lean_object* v_reuseFailAlloc_4135_; 
v_reuseFailAlloc_4135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4135_, 0, v_a_4129_);
v___x_4134_ = v_reuseFailAlloc_4135_;
goto v_reusejp_4133_;
}
v_reusejp_4133_:
{
return v___x_4134_;
}
}
}
}
}
}
else
{
lean_object* v_a_4138_; lean_object* v___x_4140_; uint8_t v_isShared_4141_; uint8_t v_isSharedCheck_4145_; 
v_a_4138_ = lean_ctor_get(v___x_4100_, 0);
v_isSharedCheck_4145_ = !lean_is_exclusive(v___x_4100_);
if (v_isSharedCheck_4145_ == 0)
{
v___x_4140_ = v___x_4100_;
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
else
{
lean_inc(v_a_4138_);
lean_dec(v___x_4100_);
v___x_4140_ = lean_box(0);
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
v_resetjp_4139_:
{
lean_object* v___x_4143_; 
if (v_isShared_4141_ == 0)
{
v___x_4143_ = v___x_4140_;
goto v_reusejp_4142_;
}
else
{
lean_object* v_reuseFailAlloc_4144_; 
v_reuseFailAlloc_4144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4144_, 0, v_a_4138_);
v___x_4143_ = v_reuseFailAlloc_4144_;
goto v_reusejp_4142_;
}
v_reusejp_4142_:
{
return v___x_4143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1___boxed(lean_object* v_t_4146_, lean_object* v_init_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_){
_start:
{
lean_object* v_res_4153_; 
v_res_4153_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1(v_t_4146_, v_init_4147_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_);
lean_dec(v___y_4151_);
lean_dec_ref(v___y_4150_);
lean_dec(v___y_4149_);
lean_dec_ref(v___y_4148_);
lean_dec_ref(v_t_4146_);
return v_res_4153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27(lean_object* v_goal_4154_, lean_object* v_fvarIds_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_){
_start:
{
lean_object* v___x_4161_; 
lean_inc(v_goal_4154_);
v___x_4161_ = l_Lean_MVarId_getDecl(v_goal_4154_, v___y_4156_, v___y_4157_, v___y_4158_, v___y_4159_);
if (lean_obj_tag(v___x_4161_) == 0)
{
lean_object* v_a_4162_; lean_object* v_lctx_4163_; lean_object* v_decls_4164_; lean_object* v___x_4165_; 
v_a_4162_ = lean_ctor_get(v___x_4161_, 0);
lean_inc(v_a_4162_);
lean_dec_ref_known(v___x_4161_, 1);
v_lctx_4163_ = lean_ctor_get(v_a_4162_, 1);
lean_inc_ref(v_lctx_4163_);
lean_dec(v_a_4162_);
v_decls_4164_ = lean_ctor_get(v_lctx_4163_, 1);
lean_inc_ref(v_decls_4164_);
lean_dec_ref(v_lctx_4163_);
v___x_4165_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1(v_decls_4164_, v_fvarIds_4155_, v___y_4156_, v___y_4157_, v___y_4158_, v___y_4159_);
lean_dec_ref(v_decls_4164_);
if (lean_obj_tag(v___x_4165_) == 0)
{
lean_object* v_a_4166_; lean_object* v___x_4167_; 
v_a_4166_ = lean_ctor_get(v___x_4165_, 0);
lean_inc(v_a_4166_);
lean_dec_ref_known(v___x_4165_, 1);
v___x_4167_ = l_Lean_MVarId_tryClearMany(v_goal_4154_, v_a_4166_, v___y_4156_, v___y_4157_, v___y_4158_, v___y_4159_);
lean_dec(v_a_4166_);
return v___x_4167_;
}
else
{
lean_object* v_a_4168_; lean_object* v___x_4170_; uint8_t v_isShared_4171_; uint8_t v_isSharedCheck_4175_; 
lean_dec(v_goal_4154_);
v_a_4168_ = lean_ctor_get(v___x_4165_, 0);
v_isSharedCheck_4175_ = !lean_is_exclusive(v___x_4165_);
if (v_isSharedCheck_4175_ == 0)
{
v___x_4170_ = v___x_4165_;
v_isShared_4171_ = v_isSharedCheck_4175_;
goto v_resetjp_4169_;
}
else
{
lean_inc(v_a_4168_);
lean_dec(v___x_4165_);
v___x_4170_ = lean_box(0);
v_isShared_4171_ = v_isSharedCheck_4175_;
goto v_resetjp_4169_;
}
v_resetjp_4169_:
{
lean_object* v___x_4173_; 
if (v_isShared_4171_ == 0)
{
v___x_4173_ = v___x_4170_;
goto v_reusejp_4172_;
}
else
{
lean_object* v_reuseFailAlloc_4174_; 
v_reuseFailAlloc_4174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4174_, 0, v_a_4168_);
v___x_4173_ = v_reuseFailAlloc_4174_;
goto v_reusejp_4172_;
}
v_reusejp_4172_:
{
return v___x_4173_;
}
}
}
}
else
{
lean_object* v_a_4176_; lean_object* v___x_4178_; uint8_t v_isShared_4179_; uint8_t v_isSharedCheck_4183_; 
lean_dec_ref(v_fvarIds_4155_);
lean_dec(v_goal_4154_);
v_a_4176_ = lean_ctor_get(v___x_4161_, 0);
v_isSharedCheck_4183_ = !lean_is_exclusive(v___x_4161_);
if (v_isSharedCheck_4183_ == 0)
{
v___x_4178_ = v___x_4161_;
v_isShared_4179_ = v_isSharedCheck_4183_;
goto v_resetjp_4177_;
}
else
{
lean_inc(v_a_4176_);
lean_dec(v___x_4161_);
v___x_4178_ = lean_box(0);
v_isShared_4179_ = v_isSharedCheck_4183_;
goto v_resetjp_4177_;
}
v_resetjp_4177_:
{
lean_object* v___x_4181_; 
if (v_isShared_4179_ == 0)
{
v___x_4181_ = v___x_4178_;
goto v_reusejp_4180_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v_a_4176_);
v___x_4181_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4180_;
}
v_reusejp_4180_:
{
return v___x_4181_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27___boxed(lean_object* v_goal_4184_, lean_object* v_fvarIds_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_){
_start:
{
lean_object* v_res_4191_; 
v_res_4191_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27(v_goal_4184_, v_fvarIds_4185_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_);
lean_dec(v___y_4189_);
lean_dec_ref(v___y_4188_);
lean_dec(v___y_4187_);
lean_dec_ref(v___y_4186_);
return v_res_4191_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3_spec__6(lean_object* v_as_4192_, size_t v_sz_4193_, size_t v_i_4194_, lean_object* v_b_4195_, lean_object* v___y_4196_, lean_object* v___y_4197_, lean_object* v___y_4198_, lean_object* v___y_4199_){
_start:
{
lean_object* v___x_4201_; 
v___x_4201_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3_spec__6___redArg(v_as_4192_, v_sz_4193_, v_i_4194_, v_b_4195_, v___y_4197_);
return v___x_4201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3_spec__6___boxed(lean_object* v_as_4202_, lean_object* v_sz_4203_, lean_object* v_i_4204_, lean_object* v_b_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_){
_start:
{
size_t v_sz_boxed_4211_; size_t v_i_boxed_4212_; lean_object* v_res_4213_; 
v_sz_boxed_4211_ = lean_unbox_usize(v_sz_4203_);
lean_dec(v_sz_4203_);
v_i_boxed_4212_ = lean_unbox_usize(v_i_4204_);
lean_dec(v_i_4204_);
v_res_4213_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__3_spec__6(v_as_4202_, v_sz_boxed_4211_, v_i_boxed_4212_, v_b_4205_, v___y_4206_, v___y_4207_, v___y_4208_, v___y_4209_);
lean_dec(v___y_4209_);
lean_dec_ref(v___y_4208_);
lean_dec(v___y_4207_);
lean_dec_ref(v___y_4206_);
lean_dec_ref(v_as_4202_);
return v_res_4213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5(lean_object* v_as_4214_, size_t v_sz_4215_, size_t v_i_4216_, lean_object* v_b_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_){
_start:
{
lean_object* v___x_4223_; 
v___x_4223_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___redArg(v_as_4214_, v_sz_4215_, v_i_4216_, v_b_4217_, v___y_4219_);
return v___x_4223_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5___boxed(lean_object* v_as_4224_, lean_object* v_sz_4225_, lean_object* v_i_4226_, lean_object* v_b_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_){
_start:
{
size_t v_sz_boxed_4233_; size_t v_i_boxed_4234_; lean_object* v_res_4235_; 
v_sz_boxed_4233_ = lean_unbox_usize(v_sz_4225_);
lean_dec(v_sz_4225_);
v_i_boxed_4234_ = lean_unbox_usize(v_i_4226_);
lean_dec(v_i_4226_);
v_res_4235_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27_spec__1_spec__2_spec__4_spec__5(v_as_4224_, v_sz_boxed_4233_, v_i_boxed_4234_, v_b_4227_, v___y_4228_, v___y_4229_, v___y_4230_, v___y_4231_);
lean_dec(v___y_4231_);
lean_dec_ref(v___y_4230_);
lean_dec(v___y_4229_);
lean_dec_ref(v___y_4228_);
lean_dec_ref(v_as_4224_);
return v_res_4235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__1(lean_object* v_fs_4236_, lean_object* v_as_4237_, size_t v_sz_4238_, size_t v_i_4239_, lean_object* v_b_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_){
_start:
{
uint8_t v___x_4248_; 
v___x_4248_ = lean_usize_dec_lt(v_i_4239_, v_sz_4238_);
if (v___x_4248_ == 0)
{
lean_object* v___x_4249_; 
v___x_4249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4249_, 0, v_b_4240_);
return v___x_4249_;
}
else
{
lean_object* v_a_4250_; lean_object* v_fst_4251_; lean_object* v_snd_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; 
v_a_4250_ = lean_array_uget_borrowed(v_as_4237_, v_i_4239_);
v_fst_4251_ = lean_ctor_get(v_a_4250_, 0);
v_snd_4252_ = lean_ctor_get(v_a_4250_, 1);
v___x_4253_ = lean_box(0);
lean_inc(v_snd_4252_);
v___x_4254_ = l_Lean_Meta_FVarSubst_get(v_fs_4236_, v_snd_4252_);
lean_inc(v_fst_4251_);
v___x_4255_ = l_Lean_Elab_Term_addLocalVarInfo(v_fst_4251_, v___x_4254_, v___y_4241_, v___y_4242_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_);
if (lean_obj_tag(v___x_4255_) == 0)
{
size_t v___x_4256_; size_t v___x_4257_; 
lean_dec_ref_known(v___x_4255_, 1);
v___x_4256_ = ((size_t)1ULL);
v___x_4257_ = lean_usize_add(v_i_4239_, v___x_4256_);
v_i_4239_ = v___x_4257_;
v_b_4240_ = v___x_4253_;
goto _start;
}
else
{
return v___x_4255_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__1___boxed(lean_object* v_fs_4259_, lean_object* v_as_4260_, lean_object* v_sz_4261_, lean_object* v_i_4262_, lean_object* v_b_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_){
_start:
{
size_t v_sz_boxed_4271_; size_t v_i_boxed_4272_; lean_object* v_res_4273_; 
v_sz_boxed_4271_ = lean_unbox_usize(v_sz_4261_);
lean_dec(v_sz_4261_);
v_i_boxed_4272_ = lean_unbox_usize(v_i_4262_);
lean_dec(v_i_4262_);
v_res_4273_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__1(v_fs_4259_, v_as_4260_, v_sz_boxed_4271_, v_i_boxed_4272_, v_b_4263_, v___y_4264_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_);
lean_dec(v___y_4269_);
lean_dec_ref(v___y_4268_);
lean_dec(v___y_4267_);
lean_dec_ref(v___y_4266_);
lean_dec(v___y_4265_);
lean_dec_ref(v___y_4264_);
lean_dec_ref(v_as_4260_);
lean_dec(v_fs_4259_);
return v_res_4273_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___lam__0(lean_object* v_fs_4274_, lean_object* v_toTag_4275_, size_t v_sz_4276_, size_t v___x_4277_, lean_object* v___x_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_){
_start:
{
lean_object* v___x_4286_; 
v___x_4286_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__1(v_fs_4274_, v_toTag_4275_, v_sz_4276_, v___x_4277_, v___x_4278_, v___y_4279_, v___y_4280_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_);
if (lean_obj_tag(v___x_4286_) == 0)
{
lean_object* v___x_4288_; uint8_t v_isShared_4289_; uint8_t v_isSharedCheck_4293_; 
v_isSharedCheck_4293_ = !lean_is_exclusive(v___x_4286_);
if (v_isSharedCheck_4293_ == 0)
{
lean_object* v_unused_4294_; 
v_unused_4294_ = lean_ctor_get(v___x_4286_, 0);
lean_dec(v_unused_4294_);
v___x_4288_ = v___x_4286_;
v_isShared_4289_ = v_isSharedCheck_4293_;
goto v_resetjp_4287_;
}
else
{
lean_dec(v___x_4286_);
v___x_4288_ = lean_box(0);
v_isShared_4289_ = v_isSharedCheck_4293_;
goto v_resetjp_4287_;
}
v_resetjp_4287_:
{
lean_object* v___x_4291_; 
if (v_isShared_4289_ == 0)
{
lean_ctor_set(v___x_4288_, 0, v___x_4278_);
v___x_4291_ = v___x_4288_;
goto v_reusejp_4290_;
}
else
{
lean_object* v_reuseFailAlloc_4292_; 
v_reuseFailAlloc_4292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4292_, 0, v___x_4278_);
v___x_4291_ = v_reuseFailAlloc_4292_;
goto v_reusejp_4290_;
}
v_reusejp_4290_:
{
return v___x_4291_;
}
}
}
else
{
return v___x_4286_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___lam__0___boxed(lean_object* v_fs_4295_, lean_object* v_toTag_4296_, lean_object* v_sz_4297_, lean_object* v___x_4298_, lean_object* v___x_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_){
_start:
{
size_t v_sz_boxed_4307_; size_t v___x_1790__boxed_4308_; lean_object* v_res_4309_; 
v_sz_boxed_4307_ = lean_unbox_usize(v_sz_4297_);
lean_dec(v_sz_4297_);
v___x_1790__boxed_4308_ = lean_unbox_usize(v___x_4298_);
lean_dec(v___x_4298_);
v_res_4309_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___lam__0(v_fs_4295_, v_toTag_4296_, v_sz_boxed_4307_, v___x_1790__boxed_4308_, v___x_4299_, v___y_4300_, v___y_4301_, v___y_4302_, v___y_4303_, v___y_4304_, v___y_4305_);
lean_dec(v___y_4305_);
lean_dec_ref(v___y_4304_);
lean_dec(v___y_4303_);
lean_dec_ref(v___y_4302_);
lean_dec(v___y_4301_);
lean_dec_ref(v___y_4300_);
lean_dec_ref(v_toTag_4296_);
lean_dec(v_fs_4295_);
return v_res_4309_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__3(lean_object* v_as_4310_, size_t v_i_4311_, size_t v_stop_4312_, lean_object* v_b_4313_){
_start:
{
lean_object* v___y_4315_; uint8_t v___x_4319_; 
v___x_4319_ = lean_usize_dec_eq(v_i_4311_, v_stop_4312_);
if (v___x_4319_ == 0)
{
lean_object* v___x_4320_; uint8_t v___x_4321_; 
v___x_4320_ = lean_array_uget_borrowed(v_as_4310_, v_i_4311_);
v___x_4321_ = l_Lean_Expr_isFVar(v___x_4320_);
if (v___x_4321_ == 0)
{
v___y_4315_ = v_b_4313_;
goto v___jp_4314_;
}
else
{
lean_object* v___x_4322_; 
lean_inc(v___x_4320_);
v___x_4322_ = lean_array_push(v_b_4313_, v___x_4320_);
v___y_4315_ = v___x_4322_;
goto v___jp_4314_;
}
}
else
{
return v_b_4313_;
}
v___jp_4314_:
{
size_t v___x_4316_; size_t v___x_4317_; 
v___x_4316_ = ((size_t)1ULL);
v___x_4317_ = lean_usize_add(v_i_4311_, v___x_4316_);
v_i_4311_ = v___x_4317_;
v_b_4313_ = v___y_4315_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__3___boxed(lean_object* v_as_4323_, lean_object* v_i_4324_, lean_object* v_stop_4325_, lean_object* v_b_4326_){
_start:
{
size_t v_i_boxed_4327_; size_t v_stop_boxed_4328_; lean_object* v_res_4329_; 
v_i_boxed_4327_ = lean_unbox_usize(v_i_4324_);
lean_dec(v_i_4324_);
v_stop_boxed_4328_ = lean_unbox_usize(v_stop_4325_);
lean_dec(v_stop_4325_);
v_res_4329_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__3(v_as_4323_, v_i_boxed_4327_, v_stop_boxed_4328_, v_b_4326_);
lean_dec_ref(v_as_4323_);
return v_res_4329_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__2(lean_object* v_fs_4330_, size_t v_sz_4331_, size_t v_i_4332_, lean_object* v_bs_4333_){
_start:
{
uint8_t v___x_4334_; 
v___x_4334_ = lean_usize_dec_lt(v_i_4332_, v_sz_4331_);
if (v___x_4334_ == 0)
{
return v_bs_4333_;
}
else
{
lean_object* v_v_4335_; lean_object* v___x_4336_; lean_object* v_bs_x27_4337_; lean_object* v___x_4338_; size_t v___x_4339_; size_t v___x_4340_; lean_object* v___x_4341_; 
v_v_4335_ = lean_array_uget(v_bs_4333_, v_i_4332_);
v___x_4336_ = lean_unsigned_to_nat(0u);
v_bs_x27_4337_ = lean_array_uset(v_bs_4333_, v_i_4332_, v___x_4336_);
v___x_4338_ = l_Lean_Meta_FVarSubst_get(v_fs_4330_, v_v_4335_);
v___x_4339_ = ((size_t)1ULL);
v___x_4340_ = lean_usize_add(v_i_4332_, v___x_4339_);
v___x_4341_ = lean_array_uset(v_bs_x27_4337_, v_i_4332_, v___x_4338_);
v_i_4332_ = v___x_4340_;
v_bs_4333_ = v___x_4341_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__2___boxed(lean_object* v_fs_4343_, lean_object* v_sz_4344_, lean_object* v_i_4345_, lean_object* v_bs_4346_){
_start:
{
size_t v_sz_boxed_4347_; size_t v_i_boxed_4348_; lean_object* v_res_4349_; 
v_sz_boxed_4347_ = lean_unbox_usize(v_sz_4344_);
lean_dec(v_sz_4344_);
v_i_boxed_4348_ = lean_unbox_usize(v_i_4345_);
lean_dec(v_i_4345_);
v_res_4349_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__2(v_fs_4343_, v_sz_boxed_4347_, v_i_boxed_4348_, v_bs_4346_);
lean_dec(v_fs_4343_);
return v_res_4349_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__0(size_t v_sz_4350_, size_t v_i_4351_, lean_object* v_bs_4352_){
_start:
{
uint8_t v___x_4353_; 
v___x_4353_ = lean_usize_dec_lt(v_i_4351_, v_sz_4350_);
if (v___x_4353_ == 0)
{
return v_bs_4352_;
}
else
{
lean_object* v_v_4354_; lean_object* v___x_4355_; lean_object* v_bs_x27_4356_; lean_object* v___x_4357_; size_t v___x_4358_; size_t v___x_4359_; lean_object* v___x_4360_; 
v_v_4354_ = lean_array_uget(v_bs_4352_, v_i_4351_);
v___x_4355_ = lean_unsigned_to_nat(0u);
v_bs_x27_4356_ = lean_array_uset(v_bs_4352_, v_i_4351_, v___x_4355_);
v___x_4357_ = l_Lean_Expr_fvarId_x21(v_v_4354_);
lean_dec(v_v_4354_);
v___x_4358_ = ((size_t)1ULL);
v___x_4359_ = lean_usize_add(v_i_4351_, v___x_4358_);
v___x_4360_ = lean_array_uset(v_bs_x27_4356_, v_i_4351_, v___x_4357_);
v_i_4351_ = v___x_4359_;
v_bs_4352_ = v___x_4360_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__0___boxed(lean_object* v_sz_4362_, lean_object* v_i_4363_, lean_object* v_bs_4364_){
_start:
{
size_t v_sz_boxed_4365_; size_t v_i_boxed_4366_; lean_object* v_res_4367_; 
v_sz_boxed_4365_ = lean_unbox_usize(v_sz_4362_);
lean_dec(v_sz_4362_);
v_i_boxed_4366_ = lean_unbox_usize(v_i_4363_);
lean_dec(v_i_4363_);
v_res_4367_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__0(v_sz_boxed_4365_, v_i_boxed_4366_, v_bs_4364_);
return v_res_4367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish(lean_object* v_toTag_4372_, lean_object* v_g_4373_, lean_object* v_fs_4374_, lean_object* v_clears_4375_, lean_object* v_gs_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_){
_start:
{
lean_object* v___y_4385_; size_t v_sz_4422_; size_t v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; uint8_t v___x_4428_; 
v_sz_4422_ = lean_array_size(v_clears_4375_);
v___x_4423_ = ((size_t)0ULL);
v___x_4424_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__2(v_fs_4374_, v_sz_4422_, v___x_4423_, v_clears_4375_);
v___x_4425_ = lean_unsigned_to_nat(0u);
v___x_4426_ = lean_array_get_size(v___x_4424_);
v___x_4427_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___closed__0));
v___x_4428_ = lean_nat_dec_lt(v___x_4425_, v___x_4426_);
if (v___x_4428_ == 0)
{
lean_dec_ref(v___x_4424_);
v___y_4385_ = v___x_4427_;
goto v___jp_4384_;
}
else
{
uint8_t v___x_4429_; 
v___x_4429_ = lean_nat_dec_le(v___x_4426_, v___x_4426_);
if (v___x_4429_ == 0)
{
if (v___x_4428_ == 0)
{
lean_dec_ref(v___x_4424_);
v___y_4385_ = v___x_4427_;
goto v___jp_4384_;
}
else
{
size_t v___x_4430_; lean_object* v___x_4431_; 
v___x_4430_ = lean_usize_of_nat(v___x_4426_);
v___x_4431_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__3(v___x_4424_, v___x_4423_, v___x_4430_, v___x_4427_);
lean_dec_ref(v___x_4424_);
v___y_4385_ = v___x_4431_;
goto v___jp_4384_;
}
}
else
{
size_t v___x_4432_; lean_object* v___x_4433_; 
v___x_4432_ = lean_usize_of_nat(v___x_4426_);
v___x_4433_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__3(v___x_4424_, v___x_4423_, v___x_4432_, v___x_4427_);
lean_dec_ref(v___x_4424_);
v___y_4385_ = v___x_4433_;
goto v___jp_4384_;
}
}
v___jp_4384_:
{
size_t v_sz_4386_; size_t v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; 
v_sz_4386_ = lean_array_size(v___y_4385_);
v___x_4387_ = ((size_t)0ULL);
v___x_4388_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish_spec__0(v_sz_4386_, v___x_4387_, v___y_4385_);
v___x_4389_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_tryClearMany_x27(v_g_4373_, v___x_4388_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_);
if (lean_obj_tag(v___x_4389_) == 0)
{
lean_object* v_a_4390_; lean_object* v___x_4391_; size_t v_sz_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___f_4395_; lean_object* v___x_4396_; 
v_a_4390_ = lean_ctor_get(v___x_4389_, 0);
lean_inc_n(v_a_4390_, 2);
lean_dec_ref_known(v___x_4389_, 1);
v___x_4391_ = lean_box(0);
v_sz_4392_ = lean_array_size(v_toTag_4372_);
v___x_4393_ = lean_box_usize(v_sz_4392_);
v___x_4394_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___boxed__const__1));
v___f_4395_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___lam__0___boxed), 12, 5);
lean_closure_set(v___f_4395_, 0, v_fs_4374_);
lean_closure_set(v___f_4395_, 1, v_toTag_4372_);
lean_closure_set(v___f_4395_, 2, v___x_4393_);
lean_closure_set(v___f_4395_, 3, v___x_4394_);
lean_closure_set(v___f_4395_, 4, v___x_4391_);
v___x_4396_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg(v_a_4390_, v___f_4395_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_);
if (lean_obj_tag(v___x_4396_) == 0)
{
lean_object* v___x_4398_; uint8_t v_isShared_4399_; uint8_t v_isSharedCheck_4404_; 
v_isSharedCheck_4404_ = !lean_is_exclusive(v___x_4396_);
if (v_isSharedCheck_4404_ == 0)
{
lean_object* v_unused_4405_; 
v_unused_4405_ = lean_ctor_get(v___x_4396_, 0);
lean_dec(v_unused_4405_);
v___x_4398_ = v___x_4396_;
v_isShared_4399_ = v_isSharedCheck_4404_;
goto v_resetjp_4397_;
}
else
{
lean_dec(v___x_4396_);
v___x_4398_ = lean_box(0);
v_isShared_4399_ = v_isSharedCheck_4404_;
goto v_resetjp_4397_;
}
v_resetjp_4397_:
{
lean_object* v___x_4400_; lean_object* v___x_4402_; 
v___x_4400_ = lean_array_push(v_gs_4376_, v_a_4390_);
if (v_isShared_4399_ == 0)
{
lean_ctor_set(v___x_4398_, 0, v___x_4400_);
v___x_4402_ = v___x_4398_;
goto v_reusejp_4401_;
}
else
{
lean_object* v_reuseFailAlloc_4403_; 
v_reuseFailAlloc_4403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4403_, 0, v___x_4400_);
v___x_4402_ = v_reuseFailAlloc_4403_;
goto v_reusejp_4401_;
}
v_reusejp_4401_:
{
return v___x_4402_;
}
}
}
else
{
lean_object* v_a_4406_; lean_object* v___x_4408_; uint8_t v_isShared_4409_; uint8_t v_isSharedCheck_4413_; 
lean_dec(v_a_4390_);
lean_dec_ref(v_gs_4376_);
v_a_4406_ = lean_ctor_get(v___x_4396_, 0);
v_isSharedCheck_4413_ = !lean_is_exclusive(v___x_4396_);
if (v_isSharedCheck_4413_ == 0)
{
v___x_4408_ = v___x_4396_;
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
else
{
lean_inc(v_a_4406_);
lean_dec(v___x_4396_);
v___x_4408_ = lean_box(0);
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
v_resetjp_4407_:
{
lean_object* v___x_4411_; 
if (v_isShared_4409_ == 0)
{
v___x_4411_ = v___x_4408_;
goto v_reusejp_4410_;
}
else
{
lean_object* v_reuseFailAlloc_4412_; 
v_reuseFailAlloc_4412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4412_, 0, v_a_4406_);
v___x_4411_ = v_reuseFailAlloc_4412_;
goto v_reusejp_4410_;
}
v_reusejp_4410_:
{
return v___x_4411_;
}
}
}
}
else
{
lean_object* v_a_4414_; lean_object* v___x_4416_; uint8_t v_isShared_4417_; uint8_t v_isSharedCheck_4421_; 
lean_dec_ref(v_gs_4376_);
lean_dec(v_fs_4374_);
lean_dec_ref(v_toTag_4372_);
v_a_4414_ = lean_ctor_get(v___x_4389_, 0);
v_isSharedCheck_4421_ = !lean_is_exclusive(v___x_4389_);
if (v_isSharedCheck_4421_ == 0)
{
v___x_4416_ = v___x_4389_;
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
else
{
lean_inc(v_a_4414_);
lean_dec(v___x_4389_);
v___x_4416_ = lean_box(0);
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
v_resetjp_4415_:
{
lean_object* v___x_4419_; 
if (v_isShared_4417_ == 0)
{
v___x_4419_ = v___x_4416_;
goto v_reusejp_4418_;
}
else
{
lean_object* v_reuseFailAlloc_4420_; 
v_reuseFailAlloc_4420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4420_, 0, v_a_4414_);
v___x_4419_ = v_reuseFailAlloc_4420_;
goto v_reusejp_4418_;
}
v_reusejp_4418_:
{
return v___x_4419_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___boxed(lean_object* v_toTag_4434_, lean_object* v_g_4435_, lean_object* v_fs_4436_, lean_object* v_clears_4437_, lean_object* v_gs_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_){
_start:
{
lean_object* v_res_4446_; 
v_res_4446_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish(v_toTag_4434_, v_g_4435_, v_fs_4436_, v_clears_4437_, v_gs_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_, v___y_4443_, v___y_4444_);
lean_dec(v___y_4444_);
lean_dec_ref(v___y_4443_);
lean_dec(v___y_4442_);
lean_dec_ref(v___y_4441_);
lean_dec(v___y_4440_);
lean_dec_ref(v___y_4439_);
return v_res_4446_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; 
v___x_4447_ = lean_box(0);
v___x_4448_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_4449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4449_, 0, v___x_4448_);
lean_ctor_set(v___x_4449_, 1, v___x_4447_);
return v___x_4449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg(){
_start:
{
lean_object* v___x_4451_; lean_object* v___x_4452_; 
v___x_4451_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg___closed__0);
v___x_4452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4452_, 0, v___x_4451_);
return v___x_4452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg___boxed(lean_object* v___y_4453_){
_start:
{
lean_object* v_res_4454_; 
v_res_4454_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg();
return v_res_4454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0(lean_object* v_00_u03b1_4455_, lean_object* v___y_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_){
_start:
{
lean_object* v___x_4461_; 
v___x_4461_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg();
return v___x_4461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___boxed(lean_object* v_00_u03b1_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_){
_start:
{
lean_object* v_res_4468_; 
v_res_4468_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0(v_00_u03b1_4462_, v___y_4463_, v___y_4464_, v___y_4465_, v___y_4466_);
lean_dec(v___y_4466_);
lean_dec_ref(v___y_4465_);
lean_dec(v___y_4464_);
lean_dec_ref(v___y_4463_);
return v_res_4468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse(lean_object* v_stx_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_){
_start:
{
lean_object* v___x_4513_; uint8_t v___x_4514_; 
v___x_4513_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__1));
lean_inc(v_stx_4507_);
v___x_4514_ = l_Lean_Syntax_isOfKind(v_stx_4507_, v___x_4513_);
if (v___x_4514_ == 0)
{
lean_object* v___x_4515_; uint8_t v___x_4516_; 
v___x_4515_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__1));
lean_inc(v_stx_4507_);
v___x_4516_ = l_Lean_Syntax_isOfKind(v_stx_4507_, v___x_4515_);
if (v___x_4516_ == 0)
{
lean_object* v___x_4517_; uint8_t v___x_4518_; 
v___x_4517_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__1));
lean_inc(v_stx_4507_);
v___x_4518_ = l_Lean_Syntax_isOfKind(v_stx_4507_, v___x_4517_);
if (v___x_4518_ == 0)
{
lean_object* v___x_4519_; uint8_t v___x_4520_; 
v___x_4519_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__4));
lean_inc(v_stx_4507_);
v___x_4520_ = l_Lean_Syntax_isOfKind(v_stx_4507_, v___x_4519_);
if (v___x_4520_ == 0)
{
lean_object* v___x_4521_; uint8_t v___x_4522_; 
v___x_4521_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__3));
lean_inc(v_stx_4507_);
v___x_4522_ = l_Lean_Syntax_isOfKind(v_stx_4507_, v___x_4521_);
if (v___x_4522_ == 0)
{
lean_object* v___x_4523_; uint8_t v___x_4524_; 
v___x_4523_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__5));
lean_inc(v_stx_4507_);
v___x_4524_ = l_Lean_Syntax_isOfKind(v_stx_4507_, v___x_4523_);
if (v___x_4524_ == 0)
{
lean_object* v___x_4525_; uint8_t v___x_4526_; 
v___x_4525_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__7));
lean_inc(v_stx_4507_);
v___x_4526_ = l_Lean_Syntax_isOfKind(v_stx_4507_, v___x_4525_);
if (v___x_4526_ == 0)
{
lean_object* v___x_4527_; uint8_t v___x_4528_; 
v___x_4527_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__9));
lean_inc(v_stx_4507_);
v___x_4528_ = l_Lean_Syntax_isOfKind(v_stx_4507_, v___x_4527_);
if (v___x_4528_ == 0)
{
lean_object* v___x_4529_; 
lean_dec(v_stx_4507_);
v___x_4529_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg();
return v___x_4529_;
}
else
{
lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; 
v___x_4530_ = lean_unsigned_to_nat(1u);
v___x_4531_ = l_Lean_Syntax_getArg(v_stx_4507_, v___x_4530_);
v___x_4532_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse(v___x_4531_, v___y_4508_, v___y_4509_, v___y_4510_, v___y_4511_);
if (lean_obj_tag(v___x_4532_) == 0)
{
lean_object* v_a_4533_; lean_object* v___x_4535_; uint8_t v_isShared_4536_; uint8_t v_isSharedCheck_4541_; 
v_a_4533_ = lean_ctor_get(v___x_4532_, 0);
v_isSharedCheck_4541_ = !lean_is_exclusive(v___x_4532_);
if (v_isSharedCheck_4541_ == 0)
{
v___x_4535_ = v___x_4532_;
v_isShared_4536_ = v_isSharedCheck_4541_;
goto v_resetjp_4534_;
}
else
{
lean_inc(v_a_4533_);
lean_dec(v___x_4532_);
v___x_4535_ = lean_box(0);
v_isShared_4536_ = v_isSharedCheck_4541_;
goto v_resetjp_4534_;
}
v_resetjp_4534_:
{
lean_object* v___x_4537_; lean_object* v___x_4539_; 
v___x_4537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4537_, 0, v_stx_4507_);
lean_ctor_set(v___x_4537_, 1, v_a_4533_);
if (v_isShared_4536_ == 0)
{
lean_ctor_set(v___x_4535_, 0, v___x_4537_);
v___x_4539_ = v___x_4535_;
goto v_reusejp_4538_;
}
else
{
lean_object* v_reuseFailAlloc_4540_; 
v_reuseFailAlloc_4540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4540_, 0, v___x_4537_);
v___x_4539_ = v_reuseFailAlloc_4540_;
goto v_reusejp_4538_;
}
v_reusejp_4538_:
{
return v___x_4539_;
}
}
}
else
{
lean_dec(v_stx_4507_);
return v___x_4532_;
}
}
}
else
{
lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v_ps_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; 
v___x_4542_ = lean_unsigned_to_nat(1u);
v___x_4543_ = l_Lean_Syntax_getArg(v_stx_4507_, v___x_4542_);
v_ps_4544_ = l_Lean_Syntax_getArgs(v___x_4543_);
lean_dec(v___x_4543_);
v___x_4545_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_ps_4544_);
lean_dec_ref(v_ps_4544_);
v___x_4546_ = lean_array_to_list(v___x_4545_);
v___x_4547_ = lean_box(0);
v___x_4548_ = l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__1(v___x_4546_, v___x_4547_, v___y_4508_, v___y_4509_, v___y_4510_, v___y_4511_);
if (lean_obj_tag(v___x_4548_) == 0)
{
lean_object* v_a_4549_; lean_object* v___x_4551_; uint8_t v_isShared_4552_; uint8_t v_isSharedCheck_4557_; 
v_a_4549_ = lean_ctor_get(v___x_4548_, 0);
v_isSharedCheck_4557_ = !lean_is_exclusive(v___x_4548_);
if (v_isSharedCheck_4557_ == 0)
{
v___x_4551_ = v___x_4548_;
v_isShared_4552_ = v_isSharedCheck_4557_;
goto v_resetjp_4550_;
}
else
{
lean_inc(v_a_4549_);
lean_dec(v___x_4548_);
v___x_4551_ = lean_box(0);
v_isShared_4552_ = v_isSharedCheck_4557_;
goto v_resetjp_4550_;
}
v_resetjp_4550_:
{
lean_object* v___x_4553_; lean_object* v___x_4555_; 
v___x_4553_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4553_, 0, v_stx_4507_);
lean_ctor_set(v___x_4553_, 1, v_a_4549_);
if (v_isShared_4552_ == 0)
{
lean_ctor_set(v___x_4551_, 0, v___x_4553_);
v___x_4555_ = v___x_4551_;
goto v_reusejp_4554_;
}
else
{
lean_object* v_reuseFailAlloc_4556_; 
v_reuseFailAlloc_4556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4556_, 0, v___x_4553_);
v___x_4555_ = v_reuseFailAlloc_4556_;
goto v_reusejp_4554_;
}
v_reusejp_4554_:
{
return v___x_4555_;
}
}
}
else
{
lean_object* v_a_4558_; lean_object* v___x_4560_; uint8_t v_isShared_4561_; uint8_t v_isSharedCheck_4565_; 
lean_dec(v_stx_4507_);
v_a_4558_ = lean_ctor_get(v___x_4548_, 0);
v_isSharedCheck_4565_ = !lean_is_exclusive(v___x_4548_);
if (v_isSharedCheck_4565_ == 0)
{
v___x_4560_ = v___x_4548_;
v_isShared_4561_ = v_isSharedCheck_4565_;
goto v_resetjp_4559_;
}
else
{
lean_inc(v_a_4558_);
lean_dec(v___x_4548_);
v___x_4560_ = lean_box(0);
v_isShared_4561_ = v_isSharedCheck_4565_;
goto v_resetjp_4559_;
}
v_resetjp_4559_:
{
lean_object* v___x_4563_; 
if (v_isShared_4561_ == 0)
{
v___x_4563_ = v___x_4560_;
goto v_reusejp_4562_;
}
else
{
lean_object* v_reuseFailAlloc_4564_; 
v_reuseFailAlloc_4564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4564_, 0, v_a_4558_);
v___x_4563_ = v_reuseFailAlloc_4564_;
goto v_reusejp_4562_;
}
v_reusejp_4562_:
{
return v___x_4563_;
}
}
}
}
}
else
{
lean_object* v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; 
v___x_4566_ = lean_unsigned_to_nat(1u);
v___x_4567_ = l_Lean_Syntax_getArg(v_stx_4507_, v___x_4566_);
v___x_4568_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse(v___x_4567_, v___y_4508_, v___y_4509_, v___y_4510_, v___y_4511_);
if (lean_obj_tag(v___x_4568_) == 0)
{
lean_object* v_a_4569_; lean_object* v___x_4571_; uint8_t v_isShared_4572_; uint8_t v_isSharedCheck_4577_; 
v_a_4569_ = lean_ctor_get(v___x_4568_, 0);
v_isSharedCheck_4577_ = !lean_is_exclusive(v___x_4568_);
if (v_isSharedCheck_4577_ == 0)
{
v___x_4571_ = v___x_4568_;
v_isShared_4572_ = v_isSharedCheck_4577_;
goto v_resetjp_4570_;
}
else
{
lean_inc(v_a_4569_);
lean_dec(v___x_4568_);
v___x_4571_ = lean_box(0);
v_isShared_4572_ = v_isSharedCheck_4577_;
goto v_resetjp_4570_;
}
v_resetjp_4570_:
{
lean_object* v___x_4573_; lean_object* v___x_4575_; 
v___x_4573_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4573_, 0, v_stx_4507_);
lean_ctor_set(v___x_4573_, 1, v_a_4569_);
if (v_isShared_4572_ == 0)
{
lean_ctor_set(v___x_4571_, 0, v___x_4573_);
v___x_4575_ = v___x_4571_;
goto v_reusejp_4574_;
}
else
{
lean_object* v_reuseFailAlloc_4576_; 
v_reuseFailAlloc_4576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4576_, 0, v___x_4573_);
v___x_4575_ = v_reuseFailAlloc_4576_;
goto v_reusejp_4574_;
}
v_reusejp_4574_:
{
return v___x_4575_;
}
}
}
else
{
lean_dec(v_stx_4507_);
return v___x_4568_;
}
}
}
else
{
lean_object* v___x_4578_; lean_object* v___x_4579_; 
v___x_4578_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4578_, 0, v_stx_4507_);
v___x_4579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4579_, 0, v___x_4578_);
return v___x_4579_;
}
}
else
{
lean_object* v___x_4580_; lean_object* v_h_4581_; 
v___x_4580_ = lean_unsigned_to_nat(0u);
v_h_4581_ = l_Lean_Syntax_getArg(v_stx_4507_, v___x_4580_);
lean_dec(v_stx_4507_);
if (v___x_4518_ == 0)
{
lean_object* v___x_4586_; uint8_t v___x_4587_; 
v___x_4586_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__11));
lean_inc(v_h_4581_);
v___x_4587_ = l_Lean_Syntax_isOfKind(v_h_4581_, v___x_4586_);
if (v___x_4587_ == 0)
{
lean_object* v___x_4588_; 
lean_dec(v_h_4581_);
v___x_4588_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg();
return v___x_4588_;
}
else
{
goto v___jp_4582_;
}
}
else
{
goto v___jp_4582_;
}
v___jp_4582_:
{
lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; 
v___x_4583_ = l_Lean_TSyntax_getId(v_h_4581_);
v___x_4584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4584_, 0, v_h_4581_);
lean_ctor_set(v___x_4584_, 1, v___x_4583_);
v___x_4585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4585_, 0, v___x_4584_);
return v___x_4585_;
}
}
}
else
{
lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; 
v___x_4589_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__1));
v___x_4590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4590_, 0, v_stx_4507_);
lean_ctor_set(v___x_4590_, 1, v___x_4589_);
v___x_4591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4591_, 0, v___x_4590_);
return v___x_4591_;
}
}
else
{
lean_object* v___x_4592_; lean_object* v___x_4593_; 
v___x_4592_ = lean_unsigned_to_nat(0u);
v___x_4593_ = l_Lean_Syntax_getArg(v_stx_4507_, v___x_4592_);
if (v___x_4514_ == 0)
{
uint8_t v___x_4613_; 
lean_inc(v___x_4593_);
v___x_4613_ = l_Lean_Syntax_isOfKind(v___x_4593_, v___x_4513_);
if (v___x_4613_ == 0)
{
lean_object* v___x_4614_; 
lean_dec(v___x_4593_);
lean_dec(v_stx_4507_);
v___x_4614_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg();
return v___x_4614_;
}
else
{
goto v___jp_4594_;
}
}
else
{
goto v___jp_4594_;
}
v___jp_4594_:
{
lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; uint8_t v___x_4598_; 
v___x_4595_ = lean_unsigned_to_nat(1u);
v___x_4596_ = l_Lean_Syntax_getArg(v_stx_4507_, v___x_4595_);
v___x_4597_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_4596_);
v___x_4598_ = l_Lean_Syntax_matchesNull(v___x_4596_, v___x_4597_);
if (v___x_4598_ == 0)
{
uint8_t v___x_4599_; 
lean_dec(v_stx_4507_);
v___x_4599_ = l_Lean_Syntax_matchesNull(v___x_4596_, v___x_4592_);
if (v___x_4599_ == 0)
{
lean_object* v___x_4600_; 
lean_dec(v___x_4593_);
v___x_4600_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg();
return v___x_4600_;
}
else
{
v_stx_4507_ = v___x_4593_;
goto _start;
}
}
else
{
lean_object* v_t_4602_; lean_object* v___x_4603_; 
v_t_4602_ = l_Lean_Syntax_getArg(v___x_4596_, v___x_4595_);
lean_dec(v___x_4596_);
v___x_4603_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse(v___x_4593_, v___y_4508_, v___y_4509_, v___y_4510_, v___y_4511_);
if (lean_obj_tag(v___x_4603_) == 0)
{
lean_object* v_a_4604_; lean_object* v___x_4606_; uint8_t v_isShared_4607_; uint8_t v_isSharedCheck_4612_; 
v_a_4604_ = lean_ctor_get(v___x_4603_, 0);
v_isSharedCheck_4612_ = !lean_is_exclusive(v___x_4603_);
if (v_isSharedCheck_4612_ == 0)
{
v___x_4606_ = v___x_4603_;
v_isShared_4607_ = v_isSharedCheck_4612_;
goto v_resetjp_4605_;
}
else
{
lean_inc(v_a_4604_);
lean_dec(v___x_4603_);
v___x_4606_ = lean_box(0);
v_isShared_4607_ = v_isSharedCheck_4612_;
goto v_resetjp_4605_;
}
v_resetjp_4605_:
{
lean_object* v___x_4608_; lean_object* v___x_4610_; 
v___x_4608_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v___x_4608_, 0, v_stx_4507_);
lean_ctor_set(v___x_4608_, 1, v_a_4604_);
lean_ctor_set(v___x_4608_, 2, v_t_4602_);
if (v_isShared_4607_ == 0)
{
lean_ctor_set(v___x_4606_, 0, v___x_4608_);
v___x_4610_ = v___x_4606_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4611_; 
v_reuseFailAlloc_4611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4611_, 0, v___x_4608_);
v___x_4610_ = v_reuseFailAlloc_4611_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
return v___x_4610_;
}
}
}
else
{
lean_dec(v_t_4602_);
lean_dec(v_stx_4507_);
return v___x_4603_;
}
}
}
}
}
else
{
lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v_ps_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; 
v___x_4615_ = lean_unsigned_to_nat(0u);
v___x_4616_ = l_Lean_Syntax_getArg(v_stx_4507_, v___x_4615_);
v_ps_4617_ = l_Lean_Syntax_getArgs(v___x_4616_);
lean_dec(v___x_4616_);
v___x_4618_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_ps_4617_);
lean_dec_ref(v_ps_4617_);
v___x_4619_ = lean_array_to_list(v___x_4618_);
v___x_4620_ = lean_box(0);
v___x_4621_ = l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__1(v___x_4619_, v___x_4620_, v___y_4508_, v___y_4509_, v___y_4510_, v___y_4511_);
if (lean_obj_tag(v___x_4621_) == 0)
{
lean_object* v_a_4622_; lean_object* v___x_4624_; uint8_t v_isShared_4625_; uint8_t v_isSharedCheck_4630_; 
v_a_4622_ = lean_ctor_get(v___x_4621_, 0);
v_isSharedCheck_4630_ = !lean_is_exclusive(v___x_4621_);
if (v_isSharedCheck_4630_ == 0)
{
v___x_4624_ = v___x_4621_;
v_isShared_4625_ = v_isSharedCheck_4630_;
goto v_resetjp_4623_;
}
else
{
lean_inc(v_a_4622_);
lean_dec(v___x_4621_);
v___x_4624_ = lean_box(0);
v_isShared_4625_ = v_isSharedCheck_4630_;
goto v_resetjp_4623_;
}
v_resetjp_4623_:
{
lean_object* v___x_4626_; lean_object* v___x_4628_; 
v___x_4626_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_alts_x27(v_stx_4507_, v_a_4622_);
if (v_isShared_4625_ == 0)
{
lean_ctor_set(v___x_4624_, 0, v___x_4626_);
v___x_4628_ = v___x_4624_;
goto v_reusejp_4627_;
}
else
{
lean_object* v_reuseFailAlloc_4629_; 
v_reuseFailAlloc_4629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4629_, 0, v___x_4626_);
v___x_4628_ = v_reuseFailAlloc_4629_;
goto v_reusejp_4627_;
}
v_reusejp_4627_:
{
return v___x_4628_;
}
}
}
else
{
lean_object* v_a_4631_; lean_object* v___x_4633_; uint8_t v_isShared_4634_; uint8_t v_isSharedCheck_4638_; 
lean_dec(v_stx_4507_);
v_a_4631_ = lean_ctor_get(v___x_4621_, 0);
v_isSharedCheck_4638_ = !lean_is_exclusive(v___x_4621_);
if (v_isSharedCheck_4638_ == 0)
{
v___x_4633_ = v___x_4621_;
v_isShared_4634_ = v_isSharedCheck_4638_;
goto v_resetjp_4632_;
}
else
{
lean_inc(v_a_4631_);
lean_dec(v___x_4621_);
v___x_4633_ = lean_box(0);
v_isShared_4634_ = v_isSharedCheck_4638_;
goto v_resetjp_4632_;
}
v_resetjp_4632_:
{
lean_object* v___x_4636_; 
if (v_isShared_4634_ == 0)
{
v___x_4636_ = v___x_4633_;
goto v_reusejp_4635_;
}
else
{
lean_object* v_reuseFailAlloc_4637_; 
v_reuseFailAlloc_4637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4637_, 0, v_a_4631_);
v___x_4636_ = v_reuseFailAlloc_4637_;
goto v_reusejp_4635_;
}
v_reusejp_4635_:
{
return v___x_4636_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__1(lean_object* v_x_4639_, lean_object* v_x_4640_, lean_object* v___y_4641_, lean_object* v___y_4642_, lean_object* v___y_4643_, lean_object* v___y_4644_){
_start:
{
if (lean_obj_tag(v_x_4639_) == 0)
{
lean_object* v___x_4646_; lean_object* v___x_4647_; 
v___x_4646_ = l_List_reverse___redArg(v_x_4640_);
v___x_4647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4647_, 0, v___x_4646_);
return v___x_4647_;
}
else
{
lean_object* v_head_4648_; lean_object* v_tail_4649_; lean_object* v___x_4651_; uint8_t v_isShared_4652_; uint8_t v_isSharedCheck_4667_; 
v_head_4648_ = lean_ctor_get(v_x_4639_, 0);
v_tail_4649_ = lean_ctor_get(v_x_4639_, 1);
v_isSharedCheck_4667_ = !lean_is_exclusive(v_x_4639_);
if (v_isSharedCheck_4667_ == 0)
{
v___x_4651_ = v_x_4639_;
v_isShared_4652_ = v_isSharedCheck_4667_;
goto v_resetjp_4650_;
}
else
{
lean_inc(v_tail_4649_);
lean_inc(v_head_4648_);
lean_dec(v_x_4639_);
v___x_4651_ = lean_box(0);
v_isShared_4652_ = v_isSharedCheck_4667_;
goto v_resetjp_4650_;
}
v_resetjp_4650_:
{
lean_object* v___x_4653_; 
v___x_4653_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse(v_head_4648_, v___y_4641_, v___y_4642_, v___y_4643_, v___y_4644_);
if (lean_obj_tag(v___x_4653_) == 0)
{
lean_object* v_a_4654_; lean_object* v___x_4656_; 
v_a_4654_ = lean_ctor_get(v___x_4653_, 0);
lean_inc(v_a_4654_);
lean_dec_ref_known(v___x_4653_, 1);
if (v_isShared_4652_ == 0)
{
lean_ctor_set(v___x_4651_, 1, v_x_4640_);
lean_ctor_set(v___x_4651_, 0, v_a_4654_);
v___x_4656_ = v___x_4651_;
goto v_reusejp_4655_;
}
else
{
lean_object* v_reuseFailAlloc_4658_; 
v_reuseFailAlloc_4658_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4658_, 0, v_a_4654_);
lean_ctor_set(v_reuseFailAlloc_4658_, 1, v_x_4640_);
v___x_4656_ = v_reuseFailAlloc_4658_;
goto v_reusejp_4655_;
}
v_reusejp_4655_:
{
v_x_4639_ = v_tail_4649_;
v_x_4640_ = v___x_4656_;
goto _start;
}
}
else
{
lean_object* v_a_4659_; lean_object* v___x_4661_; uint8_t v_isShared_4662_; uint8_t v_isSharedCheck_4666_; 
lean_del_object(v___x_4651_);
lean_dec(v_tail_4649_);
lean_dec(v_x_4640_);
v_a_4659_ = lean_ctor_get(v___x_4653_, 0);
v_isSharedCheck_4666_ = !lean_is_exclusive(v___x_4653_);
if (v_isSharedCheck_4666_ == 0)
{
v___x_4661_ = v___x_4653_;
v_isShared_4662_ = v_isSharedCheck_4666_;
goto v_resetjp_4660_;
}
else
{
lean_inc(v_a_4659_);
lean_dec(v___x_4653_);
v___x_4661_ = lean_box(0);
v_isShared_4662_ = v_isSharedCheck_4666_;
goto v_resetjp_4660_;
}
v_resetjp_4660_:
{
lean_object* v___x_4664_; 
if (v_isShared_4662_ == 0)
{
v___x_4664_ = v___x_4661_;
goto v_reusejp_4663_;
}
else
{
lean_object* v_reuseFailAlloc_4665_; 
v_reuseFailAlloc_4665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4665_, 0, v_a_4659_);
v___x_4664_ = v_reuseFailAlloc_4665_;
goto v_reusejp_4663_;
}
v_reusejp_4663_:
{
return v___x_4664_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__1___boxed(lean_object* v_x_4668_, lean_object* v_x_4669_, lean_object* v___y_4670_, lean_object* v___y_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_){
_start:
{
lean_object* v_res_4675_; 
v_res_4675_ = l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__1(v_x_4668_, v_x_4669_, v___y_4670_, v___y_4671_, v___y_4672_, v___y_4673_);
lean_dec(v___y_4673_);
lean_dec_ref(v___y_4672_);
lean_dec(v___y_4671_);
lean_dec_ref(v___y_4670_);
return v_res_4675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___boxed(lean_object* v_stx_4676_, lean_object* v___y_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_){
_start:
{
lean_object* v_res_4682_; 
v_res_4682_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse(v_stx_4676_, v___y_4677_, v___y_4678_, v___y_4679_, v___y_4680_);
lean_dec(v___y_4680_);
lean_dec_ref(v___y_4679_);
lean_dec(v___y_4678_);
lean_dec_ref(v___y_4677_);
return v_res_4682_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__0___redArg(lean_object* v_fst_4683_, lean_object* v_as_4684_, size_t v_sz_4685_, size_t v_i_4686_, lean_object* v_b_4687_){
_start:
{
lean_object* v_a_4690_; uint8_t v___x_4694_; 
v___x_4694_ = lean_usize_dec_lt(v_i_4686_, v_sz_4685_);
if (v___x_4694_ == 0)
{
lean_object* v___x_4695_; 
v___x_4695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4695_, 0, v_b_4687_);
return v___x_4695_;
}
else
{
lean_object* v_fst_4696_; lean_object* v_snd_4697_; lean_object* v___x_4699_; uint8_t v_isShared_4700_; uint8_t v_isSharedCheck_4719_; 
v_fst_4696_ = lean_ctor_get(v_b_4687_, 0);
v_snd_4697_ = lean_ctor_get(v_b_4687_, 1);
v_isSharedCheck_4719_ = !lean_is_exclusive(v_b_4687_);
if (v_isSharedCheck_4719_ == 0)
{
v___x_4699_ = v_b_4687_;
v_isShared_4700_ = v_isSharedCheck_4719_;
goto v_resetjp_4698_;
}
else
{
lean_inc(v_snd_4697_);
lean_inc(v_fst_4696_);
lean_dec(v_b_4687_);
v___x_4699_ = lean_box(0);
v_isShared_4700_ = v_isSharedCheck_4719_;
goto v_resetjp_4698_;
}
v_resetjp_4698_:
{
lean_object* v_a_4701_; lean_object* v_expr_4702_; lean_object* v_hName_x3f_4703_; lean_object* v___x_4704_; uint8_t v___y_4715_; uint8_t v___x_4718_; 
v_a_4701_ = lean_array_uget_borrowed(v_as_4684_, v_i_4686_);
v_expr_4702_ = lean_ctor_get(v_a_4701_, 0);
v_hName_x3f_4703_ = lean_ctor_get(v_a_4701_, 2);
v___x_4704_ = lean_box(0);
v___x_4718_ = l_Lean_Expr_isFVar(v_expr_4702_);
if (v___x_4718_ == 0)
{
v___y_4715_ = v___x_4718_;
goto v___jp_4714_;
}
else
{
if (lean_obj_tag(v_hName_x3f_4703_) == 0)
{
v___y_4715_ = v___x_4718_;
goto v___jp_4714_;
}
else
{
goto v___jp_4705_;
}
}
v___jp_4705_:
{
lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4712_; 
v___x_4706_ = lean_array_get_borrowed(v___x_4704_, v_fst_4683_, v_snd_4697_);
lean_inc(v___x_4706_);
v___x_4707_ = l_Lean_mkFVar(v___x_4706_);
v___x_4708_ = lean_array_push(v_fst_4696_, v___x_4707_);
v___x_4709_ = lean_unsigned_to_nat(1u);
v___x_4710_ = lean_nat_add(v_snd_4697_, v___x_4709_);
lean_dec(v_snd_4697_);
if (v_isShared_4700_ == 0)
{
lean_ctor_set(v___x_4699_, 1, v___x_4710_);
lean_ctor_set(v___x_4699_, 0, v___x_4708_);
v___x_4712_ = v___x_4699_;
goto v_reusejp_4711_;
}
else
{
lean_object* v_reuseFailAlloc_4713_; 
v_reuseFailAlloc_4713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4713_, 0, v___x_4708_);
lean_ctor_set(v_reuseFailAlloc_4713_, 1, v___x_4710_);
v___x_4712_ = v_reuseFailAlloc_4713_;
goto v_reusejp_4711_;
}
v_reusejp_4711_:
{
v_a_4690_ = v___x_4712_;
goto v___jp_4689_;
}
}
v___jp_4714_:
{
if (v___y_4715_ == 0)
{
goto v___jp_4705_;
}
else
{
lean_object* v___x_4716_; lean_object* v___x_4717_; 
lean_del_object(v___x_4699_);
lean_inc_ref(v_expr_4702_);
v___x_4716_ = lean_array_push(v_fst_4696_, v_expr_4702_);
v___x_4717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4717_, 0, v___x_4716_);
lean_ctor_set(v___x_4717_, 1, v_snd_4697_);
v_a_4690_ = v___x_4717_;
goto v___jp_4689_;
}
}
}
}
v___jp_4689_:
{
size_t v___x_4691_; size_t v___x_4692_; 
v___x_4691_ = ((size_t)1ULL);
v___x_4692_ = lean_usize_add(v_i_4686_, v___x_4691_);
v_i_4686_ = v___x_4692_;
v_b_4687_ = v_a_4690_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__0___redArg___boxed(lean_object* v_fst_4720_, lean_object* v_as_4721_, lean_object* v_sz_4722_, lean_object* v_i_4723_, lean_object* v_b_4724_, lean_object* v___y_4725_){
_start:
{
size_t v_sz_boxed_4726_; size_t v_i_boxed_4727_; lean_object* v_res_4728_; 
v_sz_boxed_4726_ = lean_unbox_usize(v_sz_4722_);
lean_dec(v_sz_4722_);
v_i_boxed_4727_ = lean_unbox_usize(v_i_4723_);
lean_dec(v_i_4723_);
v_res_4728_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__0___redArg(v_fst_4720_, v_as_4721_, v_sz_boxed_4726_, v_i_boxed_4727_, v_b_4724_);
lean_dec_ref(v_as_4721_);
lean_dec_ref(v_fst_4720_);
return v_res_4728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__1(lean_object* v_as_4729_, size_t v_i_4730_, size_t v_stop_4731_, lean_object* v_b_4732_){
_start:
{
lean_object* v___y_4734_; uint8_t v___x_4738_; 
v___x_4738_ = lean_usize_dec_eq(v_i_4730_, v_stop_4731_);
if (v___x_4738_ == 0)
{
lean_object* v___x_4739_; uint8_t v___y_4741_; lean_object* v_expr_4743_; lean_object* v_hName_x3f_4744_; uint8_t v___x_4745_; 
v___x_4739_ = lean_array_uget_borrowed(v_as_4729_, v_i_4730_);
v_expr_4743_ = lean_ctor_get(v___x_4739_, 0);
v_hName_x3f_4744_ = lean_ctor_get(v___x_4739_, 2);
v___x_4745_ = l_Lean_Expr_isFVar(v_expr_4743_);
if (v___x_4745_ == 0)
{
v___y_4741_ = v___x_4745_;
goto v___jp_4740_;
}
else
{
if (lean_obj_tag(v_hName_x3f_4744_) == 0)
{
v___y_4741_ = v___x_4745_;
goto v___jp_4740_;
}
else
{
lean_object* v___x_4746_; 
lean_inc(v___x_4739_);
v___x_4746_ = lean_array_push(v_b_4732_, v___x_4739_);
v___y_4734_ = v___x_4746_;
goto v___jp_4733_;
}
}
v___jp_4740_:
{
if (v___y_4741_ == 0)
{
lean_object* v___x_4742_; 
lean_inc(v___x_4739_);
v___x_4742_ = lean_array_push(v_b_4732_, v___x_4739_);
v___y_4734_ = v___x_4742_;
goto v___jp_4733_;
}
else
{
v___y_4734_ = v_b_4732_;
goto v___jp_4733_;
}
}
}
else
{
return v_b_4732_;
}
v___jp_4733_:
{
size_t v___x_4735_; size_t v___x_4736_; 
v___x_4735_ = ((size_t)1ULL);
v___x_4736_ = lean_usize_add(v_i_4730_, v___x_4735_);
v_i_4730_ = v___x_4736_;
v_b_4732_ = v___y_4734_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__1___boxed(lean_object* v_as_4747_, lean_object* v_i_4748_, lean_object* v_stop_4749_, lean_object* v_b_4750_){
_start:
{
size_t v_i_boxed_4751_; size_t v_stop_boxed_4752_; lean_object* v_res_4753_; 
v_i_boxed_4751_ = lean_unbox_usize(v_i_4748_);
lean_dec(v_i_4748_);
v_stop_boxed_4752_ = lean_unbox_usize(v_stop_4749_);
lean_dec(v_stop_4749_);
v_res_4753_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__1(v_as_4747_, v_i_boxed_4751_, v_stop_boxed_4752_, v_b_4750_);
lean_dec_ref(v_as_4747_);
return v_res_4753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar(lean_object* v_goal_4759_, lean_object* v_args_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_, lean_object* v___y_4763_, lean_object* v___y_4764_){
_start:
{
lean_object* v___y_4767_; lean_object* v___y_4768_; lean_object* v___y_4769_; lean_object* v_lower_4770_; lean_object* v_upper_4771_; lean_object* v_j_4777_; lean_object* v___y_4779_; lean_object* v___x_4810_; lean_object* v___x_4811_; uint8_t v___x_4812_; 
v_j_4777_ = lean_unsigned_to_nat(0u);
v___x_4810_ = lean_array_get_size(v_args_4760_);
v___x_4811_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar___closed__1));
v___x_4812_ = lean_nat_dec_lt(v_j_4777_, v___x_4810_);
if (v___x_4812_ == 0)
{
v___y_4779_ = v___x_4811_;
goto v___jp_4778_;
}
else
{
uint8_t v___x_4813_; 
v___x_4813_ = lean_nat_dec_le(v___x_4810_, v___x_4810_);
if (v___x_4813_ == 0)
{
if (v___x_4812_ == 0)
{
v___y_4779_ = v___x_4811_;
goto v___jp_4778_;
}
else
{
size_t v___x_4814_; size_t v___x_4815_; lean_object* v___x_4816_; 
v___x_4814_ = ((size_t)0ULL);
v___x_4815_ = lean_usize_of_nat(v___x_4810_);
v___x_4816_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__1(v_args_4760_, v___x_4814_, v___x_4815_, v___x_4811_);
v___y_4779_ = v___x_4816_;
goto v___jp_4778_;
}
}
else
{
size_t v___x_4817_; size_t v___x_4818_; lean_object* v___x_4819_; 
v___x_4817_ = ((size_t)0ULL);
v___x_4818_ = lean_usize_of_nat(v___x_4810_);
v___x_4819_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__1(v_args_4760_, v___x_4817_, v___x_4818_, v___x_4811_);
v___y_4779_ = v___x_4819_;
goto v___jp_4778_;
}
}
v___jp_4766_:
{
lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; 
v___x_4772_ = l_Array_toSubarray___redArg(v___y_4767_, v_lower_4770_, v_upper_4771_);
v___x_4773_ = l_Subarray_copy___redArg(v___x_4772_);
v___x_4774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4774_, 0, v___x_4773_);
lean_ctor_set(v___x_4774_, 1, v___y_4769_);
v___x_4775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4775_, 0, v___y_4768_);
lean_ctor_set(v___x_4775_, 1, v___x_4774_);
v___x_4776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4776_, 0, v___x_4775_);
return v___x_4776_;
}
v___jp_4778_:
{
uint8_t v___x_4780_; lean_object* v___x_4781_; 
v___x_4780_ = 3;
v___x_4781_ = l_Lean_MVarId_generalize(v_goal_4759_, v___y_4779_, v___x_4780_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_);
if (lean_obj_tag(v___x_4781_) == 0)
{
lean_object* v_a_4782_; lean_object* v_fst_4783_; lean_object* v_snd_4784_; lean_object* v___x_4785_; size_t v_sz_4786_; size_t v___x_4787_; lean_object* v___x_4788_; 
v_a_4782_ = lean_ctor_get(v___x_4781_, 0);
lean_inc(v_a_4782_);
lean_dec_ref_known(v___x_4781_, 1);
v_fst_4783_ = lean_ctor_get(v_a_4782_, 0);
lean_inc(v_fst_4783_);
v_snd_4784_ = lean_ctor_get(v_a_4782_, 1);
lean_inc(v_snd_4784_);
lean_dec(v_a_4782_);
v___x_4785_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar___closed__0));
v_sz_4786_ = lean_array_size(v_args_4760_);
v___x_4787_ = ((size_t)0ULL);
v___x_4788_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__0___redArg(v_fst_4783_, v_args_4760_, v_sz_4786_, v___x_4787_, v___x_4785_);
if (lean_obj_tag(v___x_4788_) == 0)
{
lean_object* v_a_4789_; lean_object* v_fst_4790_; lean_object* v_snd_4791_; lean_object* v___x_4792_; uint8_t v___x_4793_; 
v_a_4789_ = lean_ctor_get(v___x_4788_, 0);
lean_inc(v_a_4789_);
lean_dec_ref_known(v___x_4788_, 1);
v_fst_4790_ = lean_ctor_get(v_a_4789_, 0);
lean_inc(v_fst_4790_);
v_snd_4791_ = lean_ctor_get(v_a_4789_, 1);
lean_inc(v_snd_4791_);
lean_dec(v_a_4789_);
v___x_4792_ = lean_array_get_size(v_fst_4783_);
v___x_4793_ = lean_nat_dec_le(v_snd_4791_, v_j_4777_);
if (v___x_4793_ == 0)
{
v___y_4767_ = v_fst_4783_;
v___y_4768_ = v_fst_4790_;
v___y_4769_ = v_snd_4784_;
v_lower_4770_ = v_snd_4791_;
v_upper_4771_ = v___x_4792_;
goto v___jp_4766_;
}
else
{
lean_dec(v_snd_4791_);
v___y_4767_ = v_fst_4783_;
v___y_4768_ = v_fst_4790_;
v___y_4769_ = v_snd_4784_;
v_lower_4770_ = v_j_4777_;
v_upper_4771_ = v___x_4792_;
goto v___jp_4766_;
}
}
else
{
lean_object* v_a_4794_; lean_object* v___x_4796_; uint8_t v_isShared_4797_; uint8_t v_isSharedCheck_4801_; 
lean_dec(v_snd_4784_);
lean_dec(v_fst_4783_);
v_a_4794_ = lean_ctor_get(v___x_4788_, 0);
v_isSharedCheck_4801_ = !lean_is_exclusive(v___x_4788_);
if (v_isSharedCheck_4801_ == 0)
{
v___x_4796_ = v___x_4788_;
v_isShared_4797_ = v_isSharedCheck_4801_;
goto v_resetjp_4795_;
}
else
{
lean_inc(v_a_4794_);
lean_dec(v___x_4788_);
v___x_4796_ = lean_box(0);
v_isShared_4797_ = v_isSharedCheck_4801_;
goto v_resetjp_4795_;
}
v_resetjp_4795_:
{
lean_object* v___x_4799_; 
if (v_isShared_4797_ == 0)
{
v___x_4799_ = v___x_4796_;
goto v_reusejp_4798_;
}
else
{
lean_object* v_reuseFailAlloc_4800_; 
v_reuseFailAlloc_4800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4800_, 0, v_a_4794_);
v___x_4799_ = v_reuseFailAlloc_4800_;
goto v_reusejp_4798_;
}
v_reusejp_4798_:
{
return v___x_4799_;
}
}
}
}
else
{
lean_object* v_a_4802_; lean_object* v___x_4804_; uint8_t v_isShared_4805_; uint8_t v_isSharedCheck_4809_; 
v_a_4802_ = lean_ctor_get(v___x_4781_, 0);
v_isSharedCheck_4809_ = !lean_is_exclusive(v___x_4781_);
if (v_isSharedCheck_4809_ == 0)
{
v___x_4804_ = v___x_4781_;
v_isShared_4805_ = v_isSharedCheck_4809_;
goto v_resetjp_4803_;
}
else
{
lean_inc(v_a_4802_);
lean_dec(v___x_4781_);
v___x_4804_ = lean_box(0);
v_isShared_4805_ = v_isSharedCheck_4809_;
goto v_resetjp_4803_;
}
v_resetjp_4803_:
{
lean_object* v___x_4807_; 
if (v_isShared_4805_ == 0)
{
v___x_4807_ = v___x_4804_;
goto v_reusejp_4806_;
}
else
{
lean_object* v_reuseFailAlloc_4808_; 
v_reuseFailAlloc_4808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4808_, 0, v_a_4802_);
v___x_4807_ = v_reuseFailAlloc_4808_;
goto v_reusejp_4806_;
}
v_reusejp_4806_:
{
return v___x_4807_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar___boxed(lean_object* v_goal_4820_, lean_object* v_args_4821_, lean_object* v___y_4822_, lean_object* v___y_4823_, lean_object* v___y_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_){
_start:
{
lean_object* v_res_4827_; 
v_res_4827_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar(v_goal_4820_, v_args_4821_, v___y_4822_, v___y_4823_, v___y_4824_, v___y_4825_);
lean_dec(v___y_4825_);
lean_dec_ref(v___y_4824_);
lean_dec(v___y_4823_);
lean_dec_ref(v___y_4822_);
lean_dec_ref(v_args_4821_);
return v_res_4827_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__0(lean_object* v_fst_4828_, lean_object* v_as_4829_, size_t v_sz_4830_, size_t v_i_4831_, lean_object* v_b_4832_, lean_object* v___y_4833_, lean_object* v___y_4834_, lean_object* v___y_4835_, lean_object* v___y_4836_){
_start:
{
lean_object* v___x_4838_; 
v___x_4838_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__0___redArg(v_fst_4828_, v_as_4829_, v_sz_4830_, v_i_4831_, v_b_4832_);
return v___x_4838_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__0___boxed(lean_object* v_fst_4839_, lean_object* v_as_4840_, lean_object* v_sz_4841_, lean_object* v_i_4842_, lean_object* v_b_4843_, lean_object* v___y_4844_, lean_object* v___y_4845_, lean_object* v___y_4846_, lean_object* v___y_4847_, lean_object* v___y_4848_){
_start:
{
size_t v_sz_boxed_4849_; size_t v_i_boxed_4850_; lean_object* v_res_4851_; 
v_sz_boxed_4849_ = lean_unbox_usize(v_sz_4841_);
lean_dec(v_sz_4841_);
v_i_boxed_4850_ = lean_unbox_usize(v_i_4842_);
lean_dec(v_i_4842_);
v_res_4851_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar_spec__0(v_fst_4839_, v_as_4840_, v_sz_boxed_4849_, v_i_boxed_4850_, v_b_4843_, v___y_4844_, v___y_4845_, v___y_4846_, v___y_4847_);
lean_dec(v___y_4847_);
lean_dec_ref(v___y_4846_);
lean_dec(v___y_4845_);
lean_dec_ref(v___y_4844_);
lean_dec_ref(v_as_4840_);
lean_dec_ref(v_fst_4839_);
return v_res_4851_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1_spec__1(lean_object* v_as_4852_, size_t v_i_4853_, size_t v_stop_4854_, lean_object* v_b_4855_){
_start:
{
lean_object* v___y_4857_; uint8_t v___x_4861_; 
v___x_4861_ = lean_usize_dec_eq(v_i_4853_, v_stop_4854_);
if (v___x_4861_ == 0)
{
lean_object* v___x_4862_; lean_object* v_fst_4863_; 
v___x_4862_ = lean_array_uget_borrowed(v_as_4852_, v_i_4853_);
v_fst_4863_ = lean_ctor_get(v___x_4862_, 0);
if (lean_obj_tag(v_fst_4863_) == 0)
{
v___y_4857_ = v_b_4855_;
goto v___jp_4856_;
}
else
{
lean_object* v_val_4864_; lean_object* v___x_4865_; 
v_val_4864_ = lean_ctor_get(v_fst_4863_, 0);
lean_inc(v_val_4864_);
v___x_4865_ = lean_array_push(v_b_4855_, v_val_4864_);
v___y_4857_ = v___x_4865_;
goto v___jp_4856_;
}
}
else
{
return v_b_4855_;
}
v___jp_4856_:
{
size_t v___x_4858_; size_t v___x_4859_; 
v___x_4858_ = ((size_t)1ULL);
v___x_4859_ = lean_usize_add(v_i_4853_, v___x_4858_);
v_i_4853_ = v___x_4859_;
v_b_4855_ = v___y_4857_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1_spec__1___boxed(lean_object* v_as_4866_, lean_object* v_i_4867_, lean_object* v_stop_4868_, lean_object* v_b_4869_){
_start:
{
size_t v_i_boxed_4870_; size_t v_stop_boxed_4871_; lean_object* v_res_4872_; 
v_i_boxed_4870_ = lean_unbox_usize(v_i_4867_);
lean_dec(v_i_4867_);
v_stop_boxed_4871_ = lean_unbox_usize(v_stop_4868_);
lean_dec(v_stop_4868_);
v_res_4872_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1_spec__1(v_as_4866_, v_i_boxed_4870_, v_stop_boxed_4871_, v_b_4869_);
lean_dec_ref(v_as_4866_);
return v_res_4872_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1(lean_object* v_as_4875_, lean_object* v_start_4876_, lean_object* v_stop_4877_){
_start:
{
lean_object* v___x_4878_; uint8_t v___x_4879_; 
v___x_4878_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1___closed__0));
v___x_4879_ = lean_nat_dec_lt(v_start_4876_, v_stop_4877_);
if (v___x_4879_ == 0)
{
return v___x_4878_;
}
else
{
lean_object* v___x_4880_; uint8_t v___x_4881_; 
v___x_4880_ = lean_array_get_size(v_as_4875_);
v___x_4881_ = lean_nat_dec_le(v_stop_4877_, v___x_4880_);
if (v___x_4881_ == 0)
{
uint8_t v___x_4882_; 
v___x_4882_ = lean_nat_dec_lt(v_start_4876_, v___x_4880_);
if (v___x_4882_ == 0)
{
return v___x_4878_;
}
else
{
size_t v___x_4883_; size_t v___x_4884_; lean_object* v___x_4885_; 
v___x_4883_ = lean_usize_of_nat(v_start_4876_);
v___x_4884_ = lean_usize_of_nat(v___x_4880_);
v___x_4885_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1_spec__1(v_as_4875_, v___x_4883_, v___x_4884_, v___x_4878_);
return v___x_4885_;
}
}
else
{
size_t v___x_4886_; size_t v___x_4887_; lean_object* v___x_4888_; 
v___x_4886_ = lean_usize_of_nat(v_start_4876_);
v___x_4887_ = lean_usize_of_nat(v_stop_4877_);
v___x_4888_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1_spec__1(v_as_4875_, v___x_4886_, v___x_4887_, v___x_4878_);
return v___x_4888_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1___boxed(lean_object* v_as_4889_, lean_object* v_start_4890_, lean_object* v_stop_4891_){
_start:
{
lean_object* v_res_4892_; 
v_res_4892_ = l_Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1(v_as_4889_, v_start_4890_, v_stop_4891_);
lean_dec(v_stop_4891_);
lean_dec(v_start_4890_);
lean_dec_ref(v_as_4889_);
return v_res_4892_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Tactic_RCases_rcases_spec__0(lean_object* v_as_4893_, lean_object* v_bs_4894_, lean_object* v_i_4895_, lean_object* v_cs_4896_, lean_object* v___y_4897_, lean_object* v___y_4898_, lean_object* v___y_4899_, lean_object* v___y_4900_, lean_object* v___y_4901_, lean_object* v___y_4902_){
_start:
{
lean_object* v___y_4905_; lean_object* v___y_4906_; lean_object* v___y_4907_; lean_object* v___y_4908_; lean_object* v___x_4915_; uint8_t v___x_4916_; 
v___x_4915_ = lean_array_get_size(v_as_4893_);
v___x_4916_ = lean_nat_dec_lt(v_i_4895_, v___x_4915_);
if (v___x_4916_ == 0)
{
lean_object* v___x_4917_; 
lean_dec(v_i_4895_);
v___x_4917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4917_, 0, v_cs_4896_);
return v___x_4917_;
}
else
{
lean_object* v___x_4918_; uint8_t v___x_4919_; 
v___x_4918_ = lean_array_get_size(v_bs_4894_);
v___x_4919_ = lean_nat_dec_lt(v_i_4895_, v___x_4918_);
if (v___x_4919_ == 0)
{
lean_object* v___x_4920_; 
lean_dec(v_i_4895_);
v___x_4920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4920_, 0, v_cs_4896_);
return v___x_4920_;
}
else
{
lean_object* v_a_4921_; lean_object* v_fst_4922_; lean_object* v_snd_4923_; lean_object* v_fst_4925_; lean_object* v_snd_4926_; lean_object* v___y_4927_; lean_object* v___y_4928_; lean_object* v___y_4929_; lean_object* v___y_4930_; lean_object* v___y_4931_; lean_object* v___y_4932_; lean_object* v_b_4964_; 
v_a_4921_ = lean_array_fget_borrowed(v_as_4893_, v_i_4895_);
v_fst_4922_ = lean_ctor_get(v_a_4921_, 0);
lean_inc(v_fst_4922_);
v_snd_4923_ = lean_ctor_get(v_a_4921_, 1);
v_b_4964_ = lean_array_fget(v_bs_4894_, v_i_4895_);
if (lean_obj_tag(v_b_4964_) == 4)
{
lean_object* v_ref_4965_; lean_object* v_a_4966_; lean_object* v_a_4967_; lean_object* v___x_4969_; uint8_t v_isShared_4970_; uint8_t v_isSharedCheck_5002_; 
v_ref_4965_ = lean_ctor_get(v_b_4964_, 0);
v_a_4966_ = lean_ctor_get(v_b_4964_, 1);
v_a_4967_ = lean_ctor_get(v_b_4964_, 2);
v_isSharedCheck_5002_ = !lean_is_exclusive(v_b_4964_);
if (v_isSharedCheck_5002_ == 0)
{
v___x_4969_ = v_b_4964_;
v_isShared_4970_ = v_isSharedCheck_5002_;
goto v_resetjp_4968_;
}
else
{
lean_inc(v_a_4967_);
lean_inc(v_a_4966_);
lean_inc(v_ref_4965_);
lean_dec(v_b_4964_);
v___x_4969_ = lean_box(0);
v_isShared_4970_ = v_isSharedCheck_5002_;
goto v_resetjp_4968_;
}
v_resetjp_4968_:
{
lean_object* v_toCold_4971_; lean_object* v_currRecDepth_4972_; lean_object* v_ref_4973_; uint8_t v_diag_4974_; uint8_t v_suppressElabErrors_4975_; lean_object* v_ref_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; 
v_toCold_4971_ = lean_ctor_get(v___y_4901_, 0);
v_currRecDepth_4972_ = lean_ctor_get(v___y_4901_, 1);
v_ref_4973_ = lean_ctor_get(v___y_4901_, 2);
v_diag_4974_ = lean_ctor_get_uint8(v___y_4901_, sizeof(void*)*3);
v_suppressElabErrors_4975_ = lean_ctor_get_uint8(v___y_4901_, sizeof(void*)*3 + 1);
v_ref_4976_ = l_Lean_replaceRef(v_ref_4965_, v_ref_4973_);
lean_inc(v_currRecDepth_4972_);
lean_inc_ref(v_toCold_4971_);
v___x_4977_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_4977_, 0, v_toCold_4971_);
lean_ctor_set(v___x_4977_, 1, v_currRecDepth_4972_);
lean_ctor_set(v___x_4977_, 2, v_ref_4976_);
lean_ctor_set_uint8(v___x_4977_, sizeof(void*)*3, v_diag_4974_);
lean_ctor_set_uint8(v___x_4977_, sizeof(void*)*3 + 1, v_suppressElabErrors_4975_);
v___x_4978_ = l_Lean_Elab_Term_elabType(v_a_4967_, v___y_4897_, v___y_4898_, v___y_4899_, v___y_4900_, v___x_4977_, v___y_4902_);
if (lean_obj_tag(v___x_4978_) == 0)
{
lean_object* v_a_4979_; lean_object* v___x_4980_; 
v_a_4979_ = lean_ctor_get(v___x_4978_, 0);
lean_inc_n(v_a_4979_, 2);
lean_dec_ref_known(v___x_4978_, 1);
v___x_4980_ = l_Lean_Elab_Term_exprToSyntax(v_a_4979_, v___y_4897_, v___y_4898_, v___y_4899_, v___y_4900_, v___x_4977_, v___y_4902_);
lean_dec_ref_known(v___x_4977_, 3);
if (lean_obj_tag(v___x_4980_) == 0)
{
lean_object* v_a_4981_; lean_object* v___x_4983_; 
v_a_4981_ = lean_ctor_get(v___x_4980_, 0);
lean_inc(v_a_4981_);
lean_dec_ref_known(v___x_4980_, 1);
if (v_isShared_4970_ == 0)
{
lean_ctor_set(v___x_4969_, 2, v_a_4981_);
v___x_4983_ = v___x_4969_;
goto v_reusejp_4982_;
}
else
{
lean_object* v_reuseFailAlloc_4985_; 
v_reuseFailAlloc_4985_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4985_, 0, v_ref_4965_);
lean_ctor_set(v_reuseFailAlloc_4985_, 1, v_a_4966_);
lean_ctor_set(v_reuseFailAlloc_4985_, 2, v_a_4981_);
v___x_4983_ = v_reuseFailAlloc_4985_;
goto v_reusejp_4982_;
}
v_reusejp_4982_:
{
lean_object* v___x_4984_; 
v___x_4984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4984_, 0, v_a_4979_);
v_fst_4925_ = v___x_4983_;
v_snd_4926_ = v___x_4984_;
v___y_4927_ = v___y_4897_;
v___y_4928_ = v___y_4898_;
v___y_4929_ = v___y_4899_;
v___y_4930_ = v___y_4900_;
v___y_4931_ = v___y_4901_;
v___y_4932_ = v___y_4902_;
goto v___jp_4924_;
}
}
else
{
lean_object* v_a_4986_; lean_object* v___x_4988_; uint8_t v_isShared_4989_; uint8_t v_isSharedCheck_4993_; 
lean_dec(v_a_4979_);
lean_del_object(v___x_4969_);
lean_dec_ref(v_a_4966_);
lean_dec(v_ref_4965_);
lean_dec(v_fst_4922_);
lean_dec_ref(v_cs_4896_);
lean_dec(v_i_4895_);
v_a_4986_ = lean_ctor_get(v___x_4980_, 0);
v_isSharedCheck_4993_ = !lean_is_exclusive(v___x_4980_);
if (v_isSharedCheck_4993_ == 0)
{
v___x_4988_ = v___x_4980_;
v_isShared_4989_ = v_isSharedCheck_4993_;
goto v_resetjp_4987_;
}
else
{
lean_inc(v_a_4986_);
lean_dec(v___x_4980_);
v___x_4988_ = lean_box(0);
v_isShared_4989_ = v_isSharedCheck_4993_;
goto v_resetjp_4987_;
}
v_resetjp_4987_:
{
lean_object* v___x_4991_; 
if (v_isShared_4989_ == 0)
{
v___x_4991_ = v___x_4988_;
goto v_reusejp_4990_;
}
else
{
lean_object* v_reuseFailAlloc_4992_; 
v_reuseFailAlloc_4992_ = lean_alloc_ctor(1, 1, 0);
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
else
{
lean_object* v_a_4994_; lean_object* v___x_4996_; uint8_t v_isShared_4997_; uint8_t v_isSharedCheck_5001_; 
lean_dec_ref_known(v___x_4977_, 3);
lean_del_object(v___x_4969_);
lean_dec_ref(v_a_4966_);
lean_dec(v_ref_4965_);
lean_dec(v_fst_4922_);
lean_dec_ref(v_cs_4896_);
lean_dec(v_i_4895_);
v_a_4994_ = lean_ctor_get(v___x_4978_, 0);
v_isSharedCheck_5001_ = !lean_is_exclusive(v___x_4978_);
if (v_isSharedCheck_5001_ == 0)
{
v___x_4996_ = v___x_4978_;
v_isShared_4997_ = v_isSharedCheck_5001_;
goto v_resetjp_4995_;
}
else
{
lean_inc(v_a_4994_);
lean_dec(v___x_4978_);
v___x_4996_ = lean_box(0);
v_isShared_4997_ = v_isSharedCheck_5001_;
goto v_resetjp_4995_;
}
v_resetjp_4995_:
{
lean_object* v___x_4999_; 
if (v_isShared_4997_ == 0)
{
v___x_4999_ = v___x_4996_;
goto v_reusejp_4998_;
}
else
{
lean_object* v_reuseFailAlloc_5000_; 
v_reuseFailAlloc_5000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5000_, 0, v_a_4994_);
v___x_4999_ = v_reuseFailAlloc_5000_;
goto v_reusejp_4998_;
}
v_reusejp_4998_:
{
return v___x_4999_;
}
}
}
}
}
else
{
lean_object* v___x_5003_; 
v___x_5003_ = lean_box(0);
v_fst_4925_ = v_b_4964_;
v_snd_4926_ = v___x_5003_;
v___y_4927_ = v___y_4897_;
v___y_4928_ = v___y_4898_;
v___y_4929_ = v___y_4899_;
v___y_4930_ = v___y_4900_;
v___y_4931_ = v___y_4901_;
v___y_4932_ = v___y_4902_;
goto v___jp_4924_;
}
v___jp_4924_:
{
lean_object* v___x_4933_; 
lean_inc(v_snd_4926_);
lean_inc(v_snd_4923_);
v___x_4933_ = l_Lean_Elab_Term_elabTerm(v_snd_4923_, v_snd_4926_, v___x_4919_, v___x_4919_, v___y_4927_, v___y_4928_, v___y_4929_, v___y_4930_, v___y_4931_, v___y_4932_);
if (lean_obj_tag(v___x_4933_) == 0)
{
lean_object* v_a_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; 
v_a_4934_ = lean_ctor_get(v___x_4933_, 0);
lean_inc(v_a_4934_);
lean_dec_ref_known(v___x_4933_, 1);
v___x_4935_ = lean_box(0);
v___x_4936_ = l_Lean_Elab_Term_ensureHasType(v_snd_4926_, v_a_4934_, v___x_4935_, v___x_4935_, v___y_4927_, v___y_4928_, v___y_4929_, v___y_4930_, v___y_4931_, v___y_4932_);
if (lean_obj_tag(v___x_4936_) == 0)
{
lean_object* v_a_4937_; lean_object* v___x_4938_; 
v_a_4937_ = lean_ctor_get(v___x_4936_, 0);
lean_inc(v_a_4937_);
lean_dec_ref_known(v___x_4936_, 1);
v___x_4938_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_name_x3f(v_fst_4925_);
if (lean_obj_tag(v_fst_4922_) == 0)
{
v___y_4905_ = v_a_4937_;
v___y_4906_ = v_fst_4925_;
v___y_4907_ = v___x_4938_;
v___y_4908_ = v___x_4935_;
goto v___jp_4904_;
}
else
{
lean_object* v_val_4939_; lean_object* v___x_4941_; uint8_t v_isShared_4942_; uint8_t v_isSharedCheck_4947_; 
v_val_4939_ = lean_ctor_get(v_fst_4922_, 0);
v_isSharedCheck_4947_ = !lean_is_exclusive(v_fst_4922_);
if (v_isSharedCheck_4947_ == 0)
{
v___x_4941_ = v_fst_4922_;
v_isShared_4942_ = v_isSharedCheck_4947_;
goto v_resetjp_4940_;
}
else
{
lean_inc(v_val_4939_);
lean_dec(v_fst_4922_);
v___x_4941_ = lean_box(0);
v_isShared_4942_ = v_isSharedCheck_4947_;
goto v_resetjp_4940_;
}
v_resetjp_4940_:
{
lean_object* v___x_4943_; lean_object* v___x_4945_; 
v___x_4943_ = l_Lean_TSyntax_getId(v_val_4939_);
lean_dec(v_val_4939_);
if (v_isShared_4942_ == 0)
{
lean_ctor_set(v___x_4941_, 0, v___x_4943_);
v___x_4945_ = v___x_4941_;
goto v_reusejp_4944_;
}
else
{
lean_object* v_reuseFailAlloc_4946_; 
v_reuseFailAlloc_4946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4946_, 0, v___x_4943_);
v___x_4945_ = v_reuseFailAlloc_4946_;
goto v_reusejp_4944_;
}
v_reusejp_4944_:
{
v___y_4905_ = v_a_4937_;
v___y_4906_ = v_fst_4925_;
v___y_4907_ = v___x_4938_;
v___y_4908_ = v___x_4945_;
goto v___jp_4904_;
}
}
}
}
else
{
lean_object* v_a_4948_; lean_object* v___x_4950_; uint8_t v_isShared_4951_; uint8_t v_isSharedCheck_4955_; 
lean_dec_ref(v_fst_4925_);
lean_dec(v_fst_4922_);
lean_dec_ref(v_cs_4896_);
lean_dec(v_i_4895_);
v_a_4948_ = lean_ctor_get(v___x_4936_, 0);
v_isSharedCheck_4955_ = !lean_is_exclusive(v___x_4936_);
if (v_isSharedCheck_4955_ == 0)
{
v___x_4950_ = v___x_4936_;
v_isShared_4951_ = v_isSharedCheck_4955_;
goto v_resetjp_4949_;
}
else
{
lean_inc(v_a_4948_);
lean_dec(v___x_4936_);
v___x_4950_ = lean_box(0);
v_isShared_4951_ = v_isSharedCheck_4955_;
goto v_resetjp_4949_;
}
v_resetjp_4949_:
{
lean_object* v___x_4953_; 
if (v_isShared_4951_ == 0)
{
v___x_4953_ = v___x_4950_;
goto v_reusejp_4952_;
}
else
{
lean_object* v_reuseFailAlloc_4954_; 
v_reuseFailAlloc_4954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4954_, 0, v_a_4948_);
v___x_4953_ = v_reuseFailAlloc_4954_;
goto v_reusejp_4952_;
}
v_reusejp_4952_:
{
return v___x_4953_;
}
}
}
}
else
{
lean_object* v_a_4956_; lean_object* v___x_4958_; uint8_t v_isShared_4959_; uint8_t v_isSharedCheck_4963_; 
lean_dec(v_snd_4926_);
lean_dec_ref(v_fst_4925_);
lean_dec(v_fst_4922_);
lean_dec_ref(v_cs_4896_);
lean_dec(v_i_4895_);
v_a_4956_ = lean_ctor_get(v___x_4933_, 0);
v_isSharedCheck_4963_ = !lean_is_exclusive(v___x_4933_);
if (v_isSharedCheck_4963_ == 0)
{
v___x_4958_ = v___x_4933_;
v_isShared_4959_ = v_isSharedCheck_4963_;
goto v_resetjp_4957_;
}
else
{
lean_inc(v_a_4956_);
lean_dec(v___x_4933_);
v___x_4958_ = lean_box(0);
v_isShared_4959_ = v_isSharedCheck_4963_;
goto v_resetjp_4957_;
}
v_resetjp_4957_:
{
lean_object* v___x_4961_; 
if (v_isShared_4959_ == 0)
{
v___x_4961_ = v___x_4958_;
goto v_reusejp_4960_;
}
else
{
lean_object* v_reuseFailAlloc_4962_; 
v_reuseFailAlloc_4962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4962_, 0, v_a_4956_);
v___x_4961_ = v_reuseFailAlloc_4962_;
goto v_reusejp_4960_;
}
v_reusejp_4960_:
{
return v___x_4961_;
}
}
}
}
}
}
v___jp_4904_:
{
lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; 
v___x_4909_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4909_, 0, v___y_4905_);
lean_ctor_set(v___x_4909_, 1, v___y_4907_);
lean_ctor_set(v___x_4909_, 2, v___y_4908_);
v___x_4910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4910_, 0, v___y_4906_);
lean_ctor_set(v___x_4910_, 1, v___x_4909_);
v___x_4911_ = lean_unsigned_to_nat(1u);
v___x_4912_ = lean_nat_add(v_i_4895_, v___x_4911_);
lean_dec(v_i_4895_);
v___x_4913_ = lean_array_push(v_cs_4896_, v___x_4910_);
v_i_4895_ = v___x_4912_;
v_cs_4896_ = v___x_4913_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Tactic_RCases_rcases_spec__0___boxed(lean_object* v_as_5004_, lean_object* v_bs_5005_, lean_object* v_i_5006_, lean_object* v_cs_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_, lean_object* v___y_5012_, lean_object* v___y_5013_, lean_object* v___y_5014_){
_start:
{
lean_object* v_res_5015_; 
v_res_5015_ = l_Array_zipWithMAux___at___00Lean_Elab_Tactic_RCases_rcases_spec__0(v_as_5004_, v_bs_5005_, v_i_5006_, v_cs_5007_, v___y_5008_, v___y_5009_, v___y_5010_, v___y_5011_, v___y_5012_, v___y_5013_);
lean_dec(v___y_5013_);
lean_dec_ref(v___y_5012_);
lean_dec(v___y_5011_);
lean_dec_ref(v___y_5010_);
lean_dec(v___y_5009_);
lean_dec_ref(v___y_5008_);
lean_dec_ref(v_bs_5005_);
lean_dec_ref(v_as_5004_);
return v_res_5015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rcases___lam__0(lean_object* v_tgts_5018_, lean_object* v_g_5019_, lean_object* v_pats_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_, lean_object* v___y_5023_, lean_object* v___y_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_){
_start:
{
lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; 
v___x_5028_ = lean_array_mk(v_pats_5020_);
v___x_5029_ = lean_unsigned_to_nat(0u);
v___x_5030_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_rcases___lam__0___closed__0));
v___x_5031_ = l_Array_zipWithMAux___at___00Lean_Elab_Tactic_RCases_rcases_spec__0(v_tgts_5018_, v___x_5028_, v___x_5029_, v___x_5030_, v___y_5021_, v___y_5022_, v___y_5023_, v___y_5024_, v___y_5025_, v___y_5026_);
lean_dec_ref(v___x_5028_);
if (lean_obj_tag(v___x_5031_) == 0)
{
lean_object* v_a_5032_; lean_object* v___x_5033_; lean_object* v_fst_5034_; lean_object* v_snd_5035_; lean_object* v___x_5036_; 
v_a_5032_ = lean_ctor_get(v___x_5031_, 0);
lean_inc(v_a_5032_);
lean_dec_ref_known(v___x_5031_, 1);
v___x_5033_ = l_Array_unzip___redArg(v_a_5032_);
lean_dec(v_a_5032_);
v_fst_5034_ = lean_ctor_get(v___x_5033_, 0);
lean_inc(v_fst_5034_);
v_snd_5035_ = lean_ctor_get(v___x_5033_, 1);
lean_inc(v_snd_5035_);
lean_dec_ref(v___x_5033_);
v___x_5036_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_generalizeExceptFVar(v_g_5019_, v_snd_5035_, v___y_5023_, v___y_5024_, v___y_5025_, v___y_5026_);
lean_dec(v_snd_5035_);
if (lean_obj_tag(v___x_5036_) == 0)
{
lean_object* v_a_5037_; lean_object* v_snd_5038_; lean_object* v_fst_5039_; lean_object* v_fst_5040_; lean_object* v_snd_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; 
v_a_5037_ = lean_ctor_get(v___x_5036_, 0);
lean_inc(v_a_5037_);
lean_dec_ref_known(v___x_5036_, 1);
v_snd_5038_ = lean_ctor_get(v_a_5037_, 1);
lean_inc(v_snd_5038_);
v_fst_5039_ = lean_ctor_get(v_a_5037_, 0);
lean_inc(v_fst_5039_);
lean_dec(v_a_5037_);
v_fst_5040_ = lean_ctor_get(v_snd_5038_, 0);
lean_inc(v_fst_5040_);
v_snd_5041_ = lean_ctor_get(v_snd_5038_, 1);
lean_inc(v_snd_5041_);
lean_dec(v_snd_5038_);
v___x_5042_ = lean_array_get_size(v_tgts_5018_);
v___x_5043_ = l_Array_filterMapM___at___00Lean_Elab_Tactic_RCases_rcases_spec__1(v_tgts_5018_, v___x_5029_, v___x_5042_);
v___x_5044_ = l_Array_zip___redArg(v___x_5043_, v_fst_5040_);
lean_dec(v_fst_5040_);
lean_dec_ref(v___x_5043_);
v___x_5045_ = lean_box(0);
v___x_5046_ = l_Array_zip___redArg(v_fst_5034_, v_fst_5039_);
lean_dec(v_fst_5039_);
lean_dec(v_fst_5034_);
v___x_5047_ = lean_array_to_list(v___x_5046_);
v___x_5048_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_finish___boxed), 12, 1);
lean_closure_set(v___x_5048_, 0, v___x_5044_);
v___x_5049_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesContinue___redArg(v_snd_5041_, v___x_5045_, v___x_5030_, v___x_5030_, v___x_5047_, v___x_5048_, v___y_5021_, v___y_5022_, v___y_5023_, v___y_5024_, v___y_5025_, v___y_5026_);
if (lean_obj_tag(v___x_5049_) == 0)
{
lean_object* v_a_5050_; lean_object* v___x_5052_; uint8_t v_isShared_5053_; uint8_t v_isSharedCheck_5058_; 
v_a_5050_ = lean_ctor_get(v___x_5049_, 0);
v_isSharedCheck_5058_ = !lean_is_exclusive(v___x_5049_);
if (v_isSharedCheck_5058_ == 0)
{
v___x_5052_ = v___x_5049_;
v_isShared_5053_ = v_isSharedCheck_5058_;
goto v_resetjp_5051_;
}
else
{
lean_inc(v_a_5050_);
lean_dec(v___x_5049_);
v___x_5052_ = lean_box(0);
v_isShared_5053_ = v_isSharedCheck_5058_;
goto v_resetjp_5051_;
}
v_resetjp_5051_:
{
lean_object* v___x_5054_; lean_object* v___x_5056_; 
v___x_5054_ = lean_array_to_list(v_a_5050_);
if (v_isShared_5053_ == 0)
{
lean_ctor_set(v___x_5052_, 0, v___x_5054_);
v___x_5056_ = v___x_5052_;
goto v_reusejp_5055_;
}
else
{
lean_object* v_reuseFailAlloc_5057_; 
v_reuseFailAlloc_5057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5057_, 0, v___x_5054_);
v___x_5056_ = v_reuseFailAlloc_5057_;
goto v_reusejp_5055_;
}
v_reusejp_5055_:
{
return v___x_5056_;
}
}
}
else
{
lean_object* v_a_5059_; lean_object* v___x_5061_; uint8_t v_isShared_5062_; uint8_t v_isSharedCheck_5066_; 
v_a_5059_ = lean_ctor_get(v___x_5049_, 0);
v_isSharedCheck_5066_ = !lean_is_exclusive(v___x_5049_);
if (v_isSharedCheck_5066_ == 0)
{
v___x_5061_ = v___x_5049_;
v_isShared_5062_ = v_isSharedCheck_5066_;
goto v_resetjp_5060_;
}
else
{
lean_inc(v_a_5059_);
lean_dec(v___x_5049_);
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
}
else
{
lean_object* v_a_5067_; lean_object* v___x_5069_; uint8_t v_isShared_5070_; uint8_t v_isSharedCheck_5074_; 
lean_dec(v_fst_5034_);
v_a_5067_ = lean_ctor_get(v___x_5036_, 0);
v_isSharedCheck_5074_ = !lean_is_exclusive(v___x_5036_);
if (v_isSharedCheck_5074_ == 0)
{
v___x_5069_ = v___x_5036_;
v_isShared_5070_ = v_isSharedCheck_5074_;
goto v_resetjp_5068_;
}
else
{
lean_inc(v_a_5067_);
lean_dec(v___x_5036_);
v___x_5069_ = lean_box(0);
v_isShared_5070_ = v_isSharedCheck_5074_;
goto v_resetjp_5068_;
}
v_resetjp_5068_:
{
lean_object* v___x_5072_; 
if (v_isShared_5070_ == 0)
{
v___x_5072_ = v___x_5069_;
goto v_reusejp_5071_;
}
else
{
lean_object* v_reuseFailAlloc_5073_; 
v_reuseFailAlloc_5073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5073_, 0, v_a_5067_);
v___x_5072_ = v_reuseFailAlloc_5073_;
goto v_reusejp_5071_;
}
v_reusejp_5071_:
{
return v___x_5072_;
}
}
}
}
else
{
lean_object* v_a_5075_; lean_object* v___x_5077_; uint8_t v_isShared_5078_; uint8_t v_isSharedCheck_5082_; 
lean_dec(v_g_5019_);
v_a_5075_ = lean_ctor_get(v___x_5031_, 0);
v_isSharedCheck_5082_ = !lean_is_exclusive(v___x_5031_);
if (v_isSharedCheck_5082_ == 0)
{
v___x_5077_ = v___x_5031_;
v_isShared_5078_ = v_isSharedCheck_5082_;
goto v_resetjp_5076_;
}
else
{
lean_inc(v_a_5075_);
lean_dec(v___x_5031_);
v___x_5077_ = lean_box(0);
v_isShared_5078_ = v_isSharedCheck_5082_;
goto v_resetjp_5076_;
}
v_resetjp_5076_:
{
lean_object* v___x_5080_; 
if (v_isShared_5078_ == 0)
{
v___x_5080_ = v___x_5077_;
goto v_reusejp_5079_;
}
else
{
lean_object* v_reuseFailAlloc_5081_; 
v_reuseFailAlloc_5081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5081_, 0, v_a_5075_);
v___x_5080_ = v_reuseFailAlloc_5081_;
goto v_reusejp_5079_;
}
v_reusejp_5079_:
{
return v___x_5080_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rcases___lam__0___boxed(lean_object* v_tgts_5083_, lean_object* v_g_5084_, lean_object* v_pats_5085_, lean_object* v___y_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_, lean_object* v___y_5089_, lean_object* v___y_5090_, lean_object* v___y_5091_, lean_object* v___y_5092_){
_start:
{
lean_object* v_res_5093_; 
v_res_5093_ = l_Lean_Elab_Tactic_RCases_rcases___lam__0(v_tgts_5083_, v_g_5084_, v_pats_5085_, v___y_5086_, v___y_5087_, v___y_5088_, v___y_5089_, v___y_5090_, v___y_5091_);
lean_dec(v___y_5091_);
lean_dec_ref(v___y_5090_);
lean_dec(v___y_5089_);
lean_dec_ref(v___y_5088_);
lean_dec(v___y_5087_);
lean_dec_ref(v___y_5086_);
lean_dec_ref(v_tgts_5083_);
return v_res_5093_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_RCases_rcases_spec__2(lean_object* v___x_5094_, size_t v_sz_5095_, size_t v_i_5096_, lean_object* v_bs_5097_){
_start:
{
uint8_t v___x_5098_; 
v___x_5098_ = lean_usize_dec_lt(v_i_5096_, v_sz_5095_);
if (v___x_5098_ == 0)
{
return v_bs_5097_;
}
else
{
lean_object* v___x_5099_; uint8_t v___x_5100_; lean_object* v___x_5101_; lean_object* v_bs_x27_5102_; uint8_t v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; size_t v___x_5106_; size_t v___x_5107_; lean_object* v___x_5108_; 
v___x_5099_ = lean_unsigned_to_nat(1u);
v___x_5100_ = lean_nat_dec_eq(v___x_5094_, v___x_5099_);
v___x_5101_ = lean_unsigned_to_nat(0u);
v_bs_x27_5102_ = lean_array_uset(v_bs_5097_, v_i_5096_, v___x_5101_);
v___x_5103_ = 0;
v___x_5104_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg___lam__4___closed__1));
v___x_5105_ = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(v___x_5105_, 0, v___x_5104_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*1, v___x_5103_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*1 + 1, v___x_5100_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*1 + 2, v___x_5100_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*1 + 3, v___x_5100_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*1 + 4, v___x_5100_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*1 + 5, v___x_5100_);
lean_ctor_set_uint8(v___x_5105_, sizeof(void*)*1 + 6, v___x_5100_);
v___x_5106_ = ((size_t)1ULL);
v___x_5107_ = lean_usize_add(v_i_5096_, v___x_5106_);
v___x_5108_ = lean_array_uset(v_bs_x27_5102_, v_i_5096_, v___x_5105_);
v_i_5096_ = v___x_5107_;
v_bs_5097_ = v___x_5108_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_RCases_rcases_spec__2___boxed(lean_object* v___x_5110_, lean_object* v_sz_5111_, lean_object* v_i_5112_, lean_object* v_bs_5113_){
_start:
{
size_t v_sz_boxed_5114_; size_t v_i_boxed_5115_; lean_object* v_res_5116_; 
v_sz_boxed_5114_ = lean_unbox_usize(v_sz_5111_);
lean_dec(v_sz_5111_);
v_i_boxed_5115_ = lean_unbox_usize(v_i_5112_);
lean_dec(v_i_5112_);
v_res_5116_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_RCases_rcases_spec__2(v___x_5110_, v_sz_boxed_5114_, v_i_boxed_5115_, v_bs_5113_);
lean_dec(v___x_5110_);
return v_res_5116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rcases___lam__1(uint8_t v___x_5117_, lean_object* v___x_5118_, lean_object* v_pat_5119_, lean_object* v_tgts_5120_, lean_object* v___x_5121_, lean_object* v___f_5122_, lean_object* v_g_5123_, lean_object* v___y_5124_, lean_object* v___y_5125_, lean_object* v___y_5126_, lean_object* v___y_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_){
_start:
{
if (v___x_5117_ == 0)
{
lean_object* v___x_5131_; uint8_t v___x_5132_; lean_object* v___y_5134_; 
lean_dec(v_g_5123_);
v___x_5131_ = lean_unsigned_to_nat(1u);
v___x_5132_ = lean_nat_dec_eq(v___x_5118_, v___x_5131_);
if (v___x_5132_ == 0)
{
lean_object* v_ref_5143_; 
v_ref_5143_ = lean_ctor_get(v_pat_5119_, 0);
lean_inc(v_ref_5143_);
v___y_5134_ = v_ref_5143_;
goto v___jp_5133_;
}
else
{
lean_object* v___x_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; 
lean_dec_ref(v_tgts_5120_);
v___x_5144_ = lean_box(0);
v___x_5145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5145_, 0, v_pat_5119_);
lean_ctor_set(v___x_5145_, 1, v___x_5144_);
lean_inc(v___y_5129_);
lean_inc_ref(v___y_5128_);
lean_inc(v___y_5127_);
lean_inc_ref(v___y_5126_);
lean_inc(v___y_5125_);
lean_inc_ref(v___y_5124_);
v___x_5146_ = lean_apply_8(v___f_5122_, v___x_5145_, v___y_5124_, v___y_5125_, v___y_5126_, v___y_5127_, v___y_5128_, v___y_5129_, lean_box(0));
return v___x_5146_;
}
v___jp_5133_:
{
lean_object* v___x_5135_; lean_object* v_snd_5136_; size_t v_sz_5137_; size_t v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; lean_object* v_snd_5141_; lean_object* v___x_5142_; 
v___x_5135_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_asTuple(v_pat_5119_);
v_snd_5136_ = lean_ctor_get(v___x_5135_, 1);
lean_inc(v_snd_5136_);
lean_dec_ref(v___x_5135_);
v_sz_5137_ = lean_array_size(v_tgts_5120_);
v___x_5138_ = ((size_t)0ULL);
v___x_5139_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_RCases_rcases_spec__2(v___x_5118_, v_sz_5137_, v___x_5138_, v_tgts_5120_);
v___x_5140_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructor(v___y_5134_, v___x_5139_, v___x_5132_, v___x_5121_, v_snd_5136_);
lean_dec_ref(v___x_5139_);
v_snd_5141_ = lean_ctor_get(v___x_5140_, 1);
lean_inc(v_snd_5141_);
lean_dec_ref(v___x_5140_);
lean_inc(v___y_5129_);
lean_inc_ref(v___y_5128_);
lean_inc(v___y_5127_);
lean_inc_ref(v___y_5126_);
lean_inc(v___y_5125_);
lean_inc_ref(v___y_5124_);
v___x_5142_ = lean_apply_8(v___f_5122_, v_snd_5141_, v___y_5124_, v___y_5125_, v___y_5126_, v___y_5127_, v___y_5128_, v___y_5129_, lean_box(0));
return v___x_5142_;
}
}
else
{
lean_object* v___x_5147_; lean_object* v___x_5148_; lean_object* v___x_5149_; 
lean_dec_ref(v___f_5122_);
lean_dec_ref(v_tgts_5120_);
lean_dec_ref(v_pat_5119_);
v___x_5147_ = lean_box(0);
v___x_5148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5148_, 0, v_g_5123_);
lean_ctor_set(v___x_5148_, 1, v___x_5147_);
v___x_5149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5149_, 0, v___x_5148_);
return v___x_5149_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rcases___lam__1___boxed(lean_object* v___x_5150_, lean_object* v___x_5151_, lean_object* v_pat_5152_, lean_object* v_tgts_5153_, lean_object* v___x_5154_, lean_object* v___f_5155_, lean_object* v_g_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_, lean_object* v___y_5160_, lean_object* v___y_5161_, lean_object* v___y_5162_, lean_object* v___y_5163_){
_start:
{
uint8_t v___x_5395__boxed_5164_; lean_object* v_res_5165_; 
v___x_5395__boxed_5164_ = lean_unbox(v___x_5150_);
v_res_5165_ = l_Lean_Elab_Tactic_RCases_rcases___lam__1(v___x_5395__boxed_5164_, v___x_5151_, v_pat_5152_, v_tgts_5153_, v___x_5154_, v___f_5155_, v_g_5156_, v___y_5157_, v___y_5158_, v___y_5159_, v___y_5160_, v___y_5161_, v___y_5162_);
lean_dec(v___y_5162_);
lean_dec_ref(v___y_5161_);
lean_dec(v___y_5160_);
lean_dec_ref(v___y_5159_);
lean_dec(v___y_5158_);
lean_dec_ref(v___y_5157_);
lean_dec(v___x_5154_);
lean_dec(v___x_5151_);
return v_res_5165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rcases(lean_object* v_tgts_5166_, lean_object* v_pat_5167_, lean_object* v_g_5168_, lean_object* v___y_5169_, lean_object* v___y_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_, lean_object* v___y_5173_, lean_object* v___y_5174_){
_start:
{
lean_object* v___f_5176_; lean_object* v___x_5177_; lean_object* v___x_5178_; uint8_t v___x_5179_; lean_object* v___x_5180_; lean_object* v___y_5181_; uint8_t v___x_5182_; lean_object* v___x_5183_; 
lean_inc(v_g_5168_);
lean_inc_ref(v_tgts_5166_);
v___f_5176_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_RCases_rcases___lam__0___boxed), 10, 2);
lean_closure_set(v___f_5176_, 0, v_tgts_5166_);
lean_closure_set(v___f_5176_, 1, v_g_5168_);
v___x_5177_ = lean_array_get_size(v_tgts_5166_);
v___x_5178_ = lean_unsigned_to_nat(0u);
v___x_5179_ = lean_nat_dec_eq(v___x_5177_, v___x_5178_);
v___x_5180_ = lean_box(v___x_5179_);
v___y_5181_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_RCases_rcases___lam__1___boxed), 14, 7);
lean_closure_set(v___y_5181_, 0, v___x_5180_);
lean_closure_set(v___y_5181_, 1, v___x_5177_);
lean_closure_set(v___y_5181_, 2, v_pat_5167_);
lean_closure_set(v___y_5181_, 3, v_tgts_5166_);
lean_closure_set(v___y_5181_, 4, v___x_5178_);
lean_closure_set(v___y_5181_, 5, v___f_5176_);
lean_closure_set(v___y_5181_, 6, v_g_5168_);
v___x_5182_ = 1;
v___x_5183_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___y_5181_, v___x_5182_, v___y_5169_, v___y_5170_, v___y_5171_, v___y_5172_, v___y_5173_, v___y_5174_);
return v___x_5183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rcases___boxed(lean_object* v_tgts_5184_, lean_object* v_pat_5185_, lean_object* v_g_5186_, lean_object* v___y_5187_, lean_object* v___y_5188_, lean_object* v___y_5189_, lean_object* v___y_5190_, lean_object* v___y_5191_, lean_object* v___y_5192_, lean_object* v___y_5193_){
_start:
{
lean_object* v_res_5194_; 
v_res_5194_ = l_Lean_Elab_Tactic_RCases_rcases(v_tgts_5184_, v_pat_5185_, v_g_5186_, v___y_5187_, v___y_5188_, v___y_5189_, v___y_5190_, v___y_5191_, v___y_5192_);
lean_dec(v___y_5192_);
lean_dec_ref(v___y_5191_);
lean_dec(v___y_5190_);
lean_dec_ref(v___y_5189_);
lean_dec(v___y_5188_);
lean_dec_ref(v___y_5187_);
return v_res_5194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0(lean_object* v_ty_5199_, lean_object* v_g_5200_, lean_object* v_pat_5201_, lean_object* v___y_5202_, lean_object* v___y_5203_, lean_object* v___y_5204_, lean_object* v___y_5205_, lean_object* v___y_5206_, lean_object* v___y_5207_){
_start:
{
lean_object* v___x_5209_; 
v___x_5209_ = l_Lean_Elab_Term_elabType(v_ty_5199_, v___y_5202_, v___y_5203_, v___y_5204_, v___y_5205_, v___y_5206_, v___y_5207_);
if (lean_obj_tag(v___x_5209_) == 0)
{
lean_object* v_a_5210_; lean_object* v___x_5211_; uint8_t v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; 
v_a_5210_ = lean_ctor_get(v___x_5209_, 0);
lean_inc_n(v_a_5210_, 2);
lean_dec_ref_known(v___x_5209_, 1);
v___x_5211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5211_, 0, v_a_5210_);
v___x_5212_ = 0;
v___x_5213_ = lean_box(0);
v___x_5214_ = l_Lean_Meta_mkFreshExprMVar(v___x_5211_, v___x_5212_, v___x_5213_, v___y_5204_, v___y_5205_, v___y_5206_, v___y_5207_);
if (lean_obj_tag(v___x_5214_) == 0)
{
lean_object* v_a_5215_; lean_object* v___y_5217_; lean_object* v___x_5271_; 
v_a_5215_ = lean_ctor_get(v___x_5214_, 0);
lean_inc(v_a_5215_);
lean_dec_ref_known(v___x_5214_, 1);
v___x_5271_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_name_x3f(v_pat_5201_);
if (lean_obj_tag(v___x_5271_) == 0)
{
v___y_5217_ = v___x_5213_;
goto v___jp_5216_;
}
else
{
lean_object* v_val_5272_; 
v_val_5272_ = lean_ctor_get(v___x_5271_, 0);
lean_inc(v_val_5272_);
lean_dec_ref_known(v___x_5271_, 1);
v___y_5217_ = v_val_5272_;
goto v___jp_5216_;
}
v___jp_5216_:
{
lean_object* v___x_5218_; 
lean_inc(v_a_5215_);
v___x_5218_ = l_Lean_MVarId_assert(v_g_5200_, v___y_5217_, v_a_5210_, v_a_5215_, v___y_5204_, v___y_5205_, v___y_5206_, v___y_5207_);
if (lean_obj_tag(v___x_5218_) == 0)
{
lean_object* v_a_5219_; uint8_t v___x_5220_; lean_object* v___x_5221_; 
v_a_5219_ = lean_ctor_get(v___x_5218_, 0);
lean_inc(v_a_5219_);
lean_dec_ref_known(v___x_5218_, 1);
v___x_5220_ = 0;
v___x_5221_ = l_Lean_Meta_intro1Core(v_a_5219_, v___x_5220_, v___y_5204_, v___y_5205_, v___y_5206_, v___y_5207_);
if (lean_obj_tag(v___x_5221_) == 0)
{
lean_object* v_a_5222_; lean_object* v_fst_5223_; lean_object* v_snd_5224_; lean_object* v___x_5226_; uint8_t v_isShared_5227_; uint8_t v_isSharedCheck_5254_; 
v_a_5222_ = lean_ctor_get(v___x_5221_, 0);
lean_inc(v_a_5222_);
lean_dec_ref_known(v___x_5221_, 1);
v_fst_5223_ = lean_ctor_get(v_a_5222_, 0);
v_snd_5224_ = lean_ctor_get(v_a_5222_, 1);
v_isSharedCheck_5254_ = !lean_is_exclusive(v_a_5222_);
if (v_isSharedCheck_5254_ == 0)
{
v___x_5226_ = v_a_5222_;
v_isShared_5227_ = v_isSharedCheck_5254_;
goto v_resetjp_5225_;
}
else
{
lean_inc(v_snd_5224_);
lean_inc(v_fst_5223_);
lean_dec(v_a_5222_);
v___x_5226_ = lean_box(0);
v_isShared_5227_ = v_isSharedCheck_5254_;
goto v_resetjp_5225_;
}
v_resetjp_5225_:
{
lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; 
v___x_5228_ = lean_box(0);
v___x_5229_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0___closed__0));
v___x_5230_ = l_Lean_Expr_fvar___override(v_fst_5223_);
v___x_5231_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0___closed__1));
v___x_5232_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg(v_snd_5224_, v___x_5228_, v___x_5229_, v___x_5230_, v___x_5229_, v_pat_5201_, v___x_5231_, v___y_5202_, v___y_5203_, v___y_5204_, v___y_5205_, v___y_5206_, v___y_5207_);
lean_dec_ref(v___x_5230_);
if (lean_obj_tag(v___x_5232_) == 0)
{
lean_object* v_a_5233_; lean_object* v___x_5235_; uint8_t v_isShared_5236_; uint8_t v_isSharedCheck_5245_; 
v_a_5233_ = lean_ctor_get(v___x_5232_, 0);
v_isSharedCheck_5245_ = !lean_is_exclusive(v___x_5232_);
if (v_isSharedCheck_5245_ == 0)
{
v___x_5235_ = v___x_5232_;
v_isShared_5236_ = v_isSharedCheck_5245_;
goto v_resetjp_5234_;
}
else
{
lean_inc(v_a_5233_);
lean_dec(v___x_5232_);
v___x_5235_ = lean_box(0);
v_isShared_5236_ = v_isSharedCheck_5245_;
goto v_resetjp_5234_;
}
v_resetjp_5234_:
{
lean_object* v___x_5237_; lean_object* v___x_5238_; lean_object* v___x_5240_; 
v___x_5237_ = l_Lean_Expr_mvarId_x21(v_a_5215_);
lean_dec(v_a_5215_);
v___x_5238_ = lean_array_to_list(v_a_5233_);
if (v_isShared_5227_ == 0)
{
lean_ctor_set_tag(v___x_5226_, 1);
lean_ctor_set(v___x_5226_, 1, v___x_5238_);
lean_ctor_set(v___x_5226_, 0, v___x_5237_);
v___x_5240_ = v___x_5226_;
goto v_reusejp_5239_;
}
else
{
lean_object* v_reuseFailAlloc_5244_; 
v_reuseFailAlloc_5244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5244_, 0, v___x_5237_);
lean_ctor_set(v_reuseFailAlloc_5244_, 1, v___x_5238_);
v___x_5240_ = v_reuseFailAlloc_5244_;
goto v_reusejp_5239_;
}
v_reusejp_5239_:
{
lean_object* v___x_5242_; 
if (v_isShared_5236_ == 0)
{
lean_ctor_set(v___x_5235_, 0, v___x_5240_);
v___x_5242_ = v___x_5235_;
goto v_reusejp_5241_;
}
else
{
lean_object* v_reuseFailAlloc_5243_; 
v_reuseFailAlloc_5243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5243_, 0, v___x_5240_);
v___x_5242_ = v_reuseFailAlloc_5243_;
goto v_reusejp_5241_;
}
v_reusejp_5241_:
{
return v___x_5242_;
}
}
}
}
else
{
lean_object* v_a_5246_; lean_object* v___x_5248_; uint8_t v_isShared_5249_; uint8_t v_isSharedCheck_5253_; 
lean_del_object(v___x_5226_);
lean_dec(v_a_5215_);
v_a_5246_ = lean_ctor_get(v___x_5232_, 0);
v_isSharedCheck_5253_ = !lean_is_exclusive(v___x_5232_);
if (v_isSharedCheck_5253_ == 0)
{
v___x_5248_ = v___x_5232_;
v_isShared_5249_ = v_isSharedCheck_5253_;
goto v_resetjp_5247_;
}
else
{
lean_inc(v_a_5246_);
lean_dec(v___x_5232_);
v___x_5248_ = lean_box(0);
v_isShared_5249_ = v_isSharedCheck_5253_;
goto v_resetjp_5247_;
}
v_resetjp_5247_:
{
lean_object* v___x_5251_; 
if (v_isShared_5249_ == 0)
{
v___x_5251_ = v___x_5248_;
goto v_reusejp_5250_;
}
else
{
lean_object* v_reuseFailAlloc_5252_; 
v_reuseFailAlloc_5252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5252_, 0, v_a_5246_);
v___x_5251_ = v_reuseFailAlloc_5252_;
goto v_reusejp_5250_;
}
v_reusejp_5250_:
{
return v___x_5251_;
}
}
}
}
}
else
{
lean_object* v_a_5255_; lean_object* v___x_5257_; uint8_t v_isShared_5258_; uint8_t v_isSharedCheck_5262_; 
lean_dec(v_a_5215_);
lean_dec_ref(v_pat_5201_);
v_a_5255_ = lean_ctor_get(v___x_5221_, 0);
v_isSharedCheck_5262_ = !lean_is_exclusive(v___x_5221_);
if (v_isSharedCheck_5262_ == 0)
{
v___x_5257_ = v___x_5221_;
v_isShared_5258_ = v_isSharedCheck_5262_;
goto v_resetjp_5256_;
}
else
{
lean_inc(v_a_5255_);
lean_dec(v___x_5221_);
v___x_5257_ = lean_box(0);
v_isShared_5258_ = v_isSharedCheck_5262_;
goto v_resetjp_5256_;
}
v_resetjp_5256_:
{
lean_object* v___x_5260_; 
if (v_isShared_5258_ == 0)
{
v___x_5260_ = v___x_5257_;
goto v_reusejp_5259_;
}
else
{
lean_object* v_reuseFailAlloc_5261_; 
v_reuseFailAlloc_5261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5261_, 0, v_a_5255_);
v___x_5260_ = v_reuseFailAlloc_5261_;
goto v_reusejp_5259_;
}
v_reusejp_5259_:
{
return v___x_5260_;
}
}
}
}
else
{
lean_object* v_a_5263_; lean_object* v___x_5265_; uint8_t v_isShared_5266_; uint8_t v_isSharedCheck_5270_; 
lean_dec(v_a_5215_);
lean_dec_ref(v_pat_5201_);
v_a_5263_ = lean_ctor_get(v___x_5218_, 0);
v_isSharedCheck_5270_ = !lean_is_exclusive(v___x_5218_);
if (v_isSharedCheck_5270_ == 0)
{
v___x_5265_ = v___x_5218_;
v_isShared_5266_ = v_isSharedCheck_5270_;
goto v_resetjp_5264_;
}
else
{
lean_inc(v_a_5263_);
lean_dec(v___x_5218_);
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
}
else
{
lean_object* v_a_5273_; lean_object* v___x_5275_; uint8_t v_isShared_5276_; uint8_t v_isSharedCheck_5280_; 
lean_dec(v_a_5210_);
lean_dec_ref(v_pat_5201_);
lean_dec(v_g_5200_);
v_a_5273_ = lean_ctor_get(v___x_5214_, 0);
v_isSharedCheck_5280_ = !lean_is_exclusive(v___x_5214_);
if (v_isSharedCheck_5280_ == 0)
{
v___x_5275_ = v___x_5214_;
v_isShared_5276_ = v_isSharedCheck_5280_;
goto v_resetjp_5274_;
}
else
{
lean_inc(v_a_5273_);
lean_dec(v___x_5214_);
v___x_5275_ = lean_box(0);
v_isShared_5276_ = v_isSharedCheck_5280_;
goto v_resetjp_5274_;
}
v_resetjp_5274_:
{
lean_object* v___x_5278_; 
if (v_isShared_5276_ == 0)
{
v___x_5278_ = v___x_5275_;
goto v_reusejp_5277_;
}
else
{
lean_object* v_reuseFailAlloc_5279_; 
v_reuseFailAlloc_5279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5279_, 0, v_a_5273_);
v___x_5278_ = v_reuseFailAlloc_5279_;
goto v_reusejp_5277_;
}
v_reusejp_5277_:
{
return v___x_5278_;
}
}
}
}
else
{
lean_object* v_a_5281_; lean_object* v___x_5283_; uint8_t v_isShared_5284_; uint8_t v_isSharedCheck_5288_; 
lean_dec_ref(v_pat_5201_);
lean_dec(v_g_5200_);
v_a_5281_ = lean_ctor_get(v___x_5209_, 0);
v_isSharedCheck_5288_ = !lean_is_exclusive(v___x_5209_);
if (v_isSharedCheck_5288_ == 0)
{
v___x_5283_ = v___x_5209_;
v_isShared_5284_ = v_isSharedCheck_5288_;
goto v_resetjp_5282_;
}
else
{
lean_inc(v_a_5281_);
lean_dec(v___x_5209_);
v___x_5283_ = lean_box(0);
v_isShared_5284_ = v_isSharedCheck_5288_;
goto v_resetjp_5282_;
}
v_resetjp_5282_:
{
lean_object* v___x_5286_; 
if (v_isShared_5284_ == 0)
{
v___x_5286_ = v___x_5283_;
goto v_reusejp_5285_;
}
else
{
lean_object* v_reuseFailAlloc_5287_; 
v_reuseFailAlloc_5287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5287_, 0, v_a_5281_);
v___x_5286_ = v_reuseFailAlloc_5287_;
goto v_reusejp_5285_;
}
v_reusejp_5285_:
{
return v___x_5286_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0___boxed(lean_object* v_ty_5289_, lean_object* v_g_5290_, lean_object* v_pat_5291_, lean_object* v___y_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_, lean_object* v___y_5295_, lean_object* v___y_5296_, lean_object* v___y_5297_, lean_object* v___y_5298_){
_start:
{
lean_object* v_res_5299_; 
v_res_5299_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0(v_ty_5289_, v_g_5290_, v_pat_5291_, v___y_5292_, v___y_5293_, v___y_5294_, v___y_5295_, v___y_5296_, v___y_5297_);
lean_dec(v___y_5297_);
lean_dec_ref(v___y_5296_);
lean_dec(v___y_5295_);
lean_dec_ref(v___y_5294_);
lean_dec(v___y_5293_);
lean_dec_ref(v___y_5292_);
return v_res_5299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone(lean_object* v_pat_5300_, lean_object* v_ty_5301_, lean_object* v_g_5302_, lean_object* v___y_5303_, lean_object* v___y_5304_, lean_object* v___y_5305_, lean_object* v___y_5306_, lean_object* v___y_5307_, lean_object* v___y_5308_){
_start:
{
lean_object* v___f_5310_; uint8_t v___x_5311_; lean_object* v___x_5312_; 
v___f_5310_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0___boxed), 10, 3);
lean_closure_set(v___f_5310_, 0, v_ty_5301_);
lean_closure_set(v___f_5310_, 1, v_g_5302_);
lean_closure_set(v___f_5310_, 2, v_pat_5300_);
v___x_5311_ = 1;
v___x_5312_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___f_5310_, v___x_5311_, v___y_5303_, v___y_5304_, v___y_5305_, v___y_5306_, v___y_5307_, v___y_5308_);
return v___x_5312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___boxed(lean_object* v_pat_5313_, lean_object* v_ty_5314_, lean_object* v_g_5315_, lean_object* v___y_5316_, lean_object* v___y_5317_, lean_object* v___y_5318_, lean_object* v___y_5319_, lean_object* v___y_5320_, lean_object* v___y_5321_, lean_object* v___y_5322_){
_start:
{
lean_object* v_res_5323_; 
v_res_5323_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone(v_pat_5313_, v_ty_5314_, v_g_5315_, v___y_5316_, v___y_5317_, v___y_5318_, v___y_5319_, v___y_5320_, v___y_5321_);
lean_dec(v___y_5321_);
lean_dec_ref(v___y_5320_);
lean_dec(v___y_5319_);
lean_dec_ref(v___y_5318_);
lean_dec(v___y_5317_);
lean_dec_ref(v___y_5316_);
return v_res_5323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_expandRIntroPats(lean_object* v_pats_5331_, lean_object* v_acc_5332_, lean_object* v_ty_x3f_5333_){
_start:
{
lean_object* v___x_5334_; lean_object* v___x_5335_; uint8_t v___x_5336_; 
v___x_5334_ = lean_unsigned_to_nat(0u);
v___x_5335_ = lean_array_get_size(v_pats_5331_);
v___x_5336_ = lean_nat_dec_lt(v___x_5334_, v___x_5335_);
if (v___x_5336_ == 0)
{
lean_dec(v_ty_x3f_5333_);
return v_acc_5332_;
}
else
{
uint8_t v___x_5337_; 
v___x_5337_ = lean_nat_dec_le(v___x_5335_, v___x_5335_);
if (v___x_5337_ == 0)
{
if (v___x_5336_ == 0)
{
lean_dec(v_ty_x3f_5333_);
return v_acc_5332_;
}
else
{
size_t v___x_5338_; size_t v___x_5339_; lean_object* v___x_5340_; 
v___x_5338_ = ((size_t)0ULL);
v___x_5339_ = lean_usize_of_nat(v___x_5335_);
v___x_5340_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_RCases_expandRIntroPats_spec__1(v_ty_x3f_5333_, v_pats_5331_, v___x_5338_, v___x_5339_, v_acc_5332_);
return v___x_5340_;
}
}
else
{
size_t v___x_5341_; size_t v___x_5342_; lean_object* v___x_5343_; 
v___x_5341_ = ((size_t)0ULL);
v___x_5342_ = lean_usize_of_nat(v___x_5335_);
v___x_5343_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_RCases_expandRIntroPats_spec__1(v_ty_x3f_5333_, v_pats_5331_, v___x_5341_, v___x_5342_, v_acc_5332_);
return v___x_5343_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat(lean_object* v_pat_5347_, lean_object* v_acc_5348_, lean_object* v_ty_x3f_5349_){
_start:
{
lean_object* v___x_5350_; uint8_t v___x_5351_; 
v___x_5350_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1));
lean_inc(v_pat_5347_);
v___x_5351_ = l_Lean_Syntax_isOfKind(v_pat_5347_, v___x_5350_);
if (v___x_5351_ == 0)
{
lean_object* v___x_5352_; uint8_t v___x_5353_; 
v___x_5352_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__1));
lean_inc(v_pat_5347_);
v___x_5353_ = l_Lean_Syntax_isOfKind(v_pat_5347_, v___x_5352_);
if (v___x_5353_ == 0)
{
lean_dec(v_ty_x3f_5349_);
lean_dec(v_pat_5347_);
return v_acc_5348_;
}
else
{
lean_object* v___x_5354_; lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; uint8_t v___x_5358_; 
v___x_5354_ = lean_unsigned_to_nat(1u);
v___x_5355_ = l_Lean_Syntax_getArg(v_pat_5347_, v___x_5354_);
v___x_5356_ = lean_unsigned_to_nat(2u);
v___x_5357_ = l_Lean_Syntax_getArg(v_pat_5347_, v___x_5356_);
lean_dec(v_pat_5347_);
v___x_5358_ = l_Lean_Syntax_isNone(v___x_5357_);
if (v___x_5358_ == 0)
{
uint8_t v___x_5359_; 
lean_dec(v_ty_x3f_5349_);
lean_inc(v___x_5357_);
v___x_5359_ = l_Lean_Syntax_matchesNull(v___x_5357_, v___x_5356_);
if (v___x_5359_ == 0)
{
lean_dec(v___x_5357_);
lean_dec(v___x_5355_);
return v_acc_5348_;
}
else
{
lean_object* v_ty_x3f_x27_5360_; lean_object* v___x_5361_; lean_object* v_pats_5362_; lean_object* v___x_5363_; 
v_ty_x3f_x27_5360_ = l_Lean_Syntax_getArg(v___x_5357_, v___x_5354_);
lean_dec(v___x_5357_);
v___x_5361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5361_, 0, v_ty_x3f_x27_5360_);
v_pats_5362_ = l_Lean_Syntax_getArgs(v___x_5355_);
lean_dec(v___x_5355_);
v___x_5363_ = l_Lean_Elab_Tactic_RCases_expandRIntroPats(v_pats_5362_, v_acc_5348_, v___x_5361_);
lean_dec_ref(v_pats_5362_);
return v___x_5363_;
}
}
else
{
lean_object* v_pats_5364_; lean_object* v___x_5365_; 
lean_dec(v___x_5357_);
v_pats_5364_ = l_Lean_Syntax_getArgs(v___x_5355_);
lean_dec(v___x_5355_);
v___x_5365_ = l_Lean_Elab_Tactic_RCases_expandRIntroPats(v_pats_5364_, v_acc_5348_, v_ty_x3f_5349_);
lean_dec_ref(v_pats_5364_);
return v___x_5365_;
}
}
}
else
{
lean_object* v___x_5366_; lean_object* v_p_5367_; 
v___x_5366_ = lean_unsigned_to_nat(0u);
v_p_5367_ = l_Lean_Syntax_getArg(v_pat_5347_, v___x_5366_);
lean_dec(v_pat_5347_);
if (lean_obj_tag(v_ty_x3f_5349_) == 0)
{
lean_object* v___x_5368_; 
v___x_5368_ = lean_array_push(v_acc_5348_, v_p_5367_);
return v___x_5368_;
}
else
{
lean_object* v_val_5369_; lean_object* v___x_5370_; lean_object* v_ref_5371_; uint8_t v___x_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; 
v_val_5369_ = lean_ctor_get(v_ty_x3f_5349_, 0);
lean_inc(v_val_5369_);
lean_dec_ref_known(v_ty_x3f_5349_, 1);
v___x_5370_ = lean_box(0);
v_ref_5371_ = l_Lean_replaceRef(v_p_5367_, v___x_5370_);
v___x_5372_ = 0;
v___x_5373_ = l_Lean_SourceInfo_fromRef(v_ref_5371_, v___x_5372_);
lean_dec(v_ref_5371_);
v___x_5374_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse___closed__9));
v___x_5375_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__2));
lean_inc_n(v___x_5373_, 7);
v___x_5376_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5376_, 0, v___x_5373_);
lean_ctor_set(v___x_5376_, 1, v___x_5375_);
v___x_5377_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr4Nil__lean___lam__0___closed__1));
v___x_5378_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__1));
v___x_5379_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__3));
v___x_5380_ = l_Lean_Syntax_node1(v___x_5373_, v___x_5379_, v_p_5367_);
v___x_5381_ = l_Lean_Syntax_node1(v___x_5373_, v___x_5378_, v___x_5380_);
v___x_5382_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__3));
v___x_5383_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5383_, 0, v___x_5373_);
lean_ctor_set(v___x_5383_, 1, v___x_5382_);
v___x_5384_ = l_Lean_Syntax_node2(v___x_5373_, v___x_5379_, v___x_5383_, v_val_5369_);
v___x_5385_ = l_Lean_Syntax_node2(v___x_5373_, v___x_5377_, v___x_5381_, v___x_5384_);
v___x_5386_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__4));
v___x_5387_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5387_, 0, v___x_5373_);
lean_ctor_set(v___x_5387_, 1, v___x_5386_);
v___x_5388_ = l_Lean_Syntax_node3(v___x_5373_, v___x_5374_, v___x_5376_, v___x_5385_, v___x_5387_);
v___x_5389_ = lean_array_push(v_acc_5348_, v___x_5388_);
return v___x_5389_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_RCases_expandRIntroPats_spec__1(lean_object* v_ty_x3f_5390_, lean_object* v_as_5391_, size_t v_i_5392_, size_t v_stop_5393_, lean_object* v_b_5394_){
_start:
{
uint8_t v___x_5395_; 
v___x_5395_ = lean_usize_dec_eq(v_i_5392_, v_stop_5393_);
if (v___x_5395_ == 0)
{
lean_object* v___x_5396_; lean_object* v___x_5397_; size_t v___x_5398_; size_t v___x_5399_; 
v___x_5396_ = lean_array_uget_borrowed(v_as_5391_, v_i_5392_);
lean_inc(v_ty_x3f_5390_);
lean_inc(v___x_5396_);
v___x_5397_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat(v___x_5396_, v_b_5394_, v_ty_x3f_5390_);
v___x_5398_ = ((size_t)1ULL);
v___x_5399_ = lean_usize_add(v_i_5392_, v___x_5398_);
v_i_5392_ = v___x_5399_;
v_b_5394_ = v___x_5397_;
goto _start;
}
else
{
lean_dec(v_ty_x3f_5390_);
return v_b_5394_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_RCases_expandRIntroPats_spec__1___boxed(lean_object* v_ty_x3f_5401_, lean_object* v_as_5402_, lean_object* v_i_5403_, lean_object* v_stop_5404_, lean_object* v_b_5405_){
_start:
{
size_t v_i_boxed_5406_; size_t v_stop_boxed_5407_; lean_object* v_res_5408_; 
v_i_boxed_5406_ = lean_unbox_usize(v_i_5403_);
lean_dec(v_i_5403_);
v_stop_boxed_5407_ = lean_unbox_usize(v_stop_5404_);
lean_dec(v_stop_5404_);
v_res_5408_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_RCases_expandRIntroPats_spec__1(v_ty_x3f_5401_, v_as_5402_, v_i_boxed_5406_, v_stop_boxed_5407_, v_b_5405_);
lean_dec_ref(v_as_5402_);
return v_res_5408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_expandRIntroPats___boxed(lean_object* v_pats_5409_, lean_object* v_acc_5410_, lean_object* v_ty_x3f_5411_){
_start:
{
lean_object* v_res_5412_; 
v_res_5412_ = l_Lean_Elab_Tactic_RCases_expandRIntroPats(v_pats_5409_, v_acc_5410_, v_ty_x3f_5411_);
lean_dec_ref(v_pats_5409_);
return v_res_5412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore_spec__1___redArg(){
_start:
{
lean_object* v___x_5414_; lean_object* v___x_5415_; 
v___x_5414_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg___closed__0);
v___x_5415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5415_, 0, v___x_5414_);
return v___x_5415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore_spec__1___redArg___boxed(lean_object* v___y_5416_){
_start:
{
lean_object* v_res_5417_; 
v_res_5417_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore_spec__1___redArg();
return v_res_5417_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue_loop___redArg___boxed(lean_object* v_ref_5418_, lean_object* v_pats_5419_, lean_object* v_ty_x3f_5420_, lean_object* v_cont_5421_, lean_object* v_i_5422_, lean_object* v_g_5423_, lean_object* v_fs_5424_, lean_object* v_clears_5425_, lean_object* v_a_5426_, lean_object* v___y_5427_, lean_object* v___y_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_, lean_object* v___y_5431_, lean_object* v___y_5432_, lean_object* v___y_5433_){
_start:
{
lean_object* v_res_5434_; 
v_res_5434_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue_loop___redArg(v_ref_5418_, v_pats_5419_, v_ty_x3f_5420_, v_cont_5421_, v_i_5422_, v_g_5423_, v_fs_5424_, v_clears_5425_, v_a_5426_, v___y_5427_, v___y_5428_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_);
lean_dec(v___y_5432_);
lean_dec_ref(v___y_5431_);
lean_dec(v___y_5430_);
lean_dec_ref(v___y_5429_);
lean_dec(v___y_5428_);
lean_dec_ref(v___y_5427_);
lean_dec(v_i_5422_);
return v_res_5434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue_loop___boxed(lean_object** _args){
lean_object* v_00_u03b1_5435_ = _args[0];
lean_object* v_ref_5436_ = _args[1];
lean_object* v_pats_5437_ = _args[2];
lean_object* v_ty_x3f_5438_ = _args[3];
lean_object* v_cont_5439_ = _args[4];
lean_object* v_i_5440_ = _args[5];
lean_object* v_g_5441_ = _args[6];
lean_object* v_fs_5442_ = _args[7];
lean_object* v_clears_5443_ = _args[8];
lean_object* v_a_5444_ = _args[9];
lean_object* v___y_5445_ = _args[10];
lean_object* v___y_5446_ = _args[11];
lean_object* v___y_5447_ = _args[12];
lean_object* v___y_5448_ = _args[13];
lean_object* v___y_5449_ = _args[14];
lean_object* v___y_5450_ = _args[15];
lean_object* v___y_5451_ = _args[16];
_start:
{
lean_object* v_res_5452_; 
v_res_5452_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue_loop(v_00_u03b1_5435_, v_ref_5436_, v_pats_5437_, v_ty_x3f_5438_, v_cont_5439_, v_i_5440_, v_g_5441_, v_fs_5442_, v_clears_5443_, v_a_5444_, v___y_5445_, v___y_5446_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_);
lean_dec(v___y_5450_);
lean_dec_ref(v___y_5449_);
lean_dec(v___y_5448_);
lean_dec_ref(v___y_5447_);
lean_dec(v___y_5446_);
lean_dec_ref(v___y_5445_);
lean_dec(v_i_5440_);
return v_res_5452_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue___redArg(lean_object* v_g_5453_, lean_object* v_fs_5454_, lean_object* v_clears_5455_, lean_object* v_ref_5456_, lean_object* v_pats_5457_, lean_object* v_ty_x3f_5458_, lean_object* v_a_5459_, lean_object* v_cont_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_){
_start:
{
lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; 
v___x_5468_ = lean_unsigned_to_nat(0u);
lean_inc(v_g_5453_);
v___x_5469_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue_loop___boxed), 17, 10);
lean_closure_set(v___x_5469_, 0, lean_box(0));
lean_closure_set(v___x_5469_, 1, v_ref_5456_);
lean_closure_set(v___x_5469_, 2, v_pats_5457_);
lean_closure_set(v___x_5469_, 3, v_ty_x3f_5458_);
lean_closure_set(v___x_5469_, 4, v_cont_5460_);
lean_closure_set(v___x_5469_, 5, v___x_5468_);
lean_closure_set(v___x_5469_, 6, v_g_5453_);
lean_closure_set(v___x_5469_, 7, v_fs_5454_);
lean_closure_set(v___x_5469_, 8, v_clears_5455_);
lean_closure_set(v___x_5469_, 9, v_a_5459_);
v___x_5470_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore_spec__7___redArg(v_g_5453_, v___x_5469_, v___y_5461_, v___y_5462_, v___y_5463_, v___y_5464_, v___y_5465_, v___y_5466_);
return v___x_5470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore___redArg(lean_object* v_g_5471_, lean_object* v_fs_5472_, lean_object* v_clears_5473_, lean_object* v_a_5474_, lean_object* v_ref_5475_, lean_object* v_pat_5476_, lean_object* v_ty_x3f_5477_, lean_object* v_cont_5478_, lean_object* v___y_5479_, lean_object* v___y_5480_, lean_object* v___y_5481_, lean_object* v___y_5482_, lean_object* v___y_5483_, lean_object* v___y_5484_){
_start:
{
lean_object* v___y_5487_; lean_object* v___y_5488_; lean_object* v___y_5489_; lean_object* v___y_5490_; lean_object* v___y_5491_; lean_object* v___y_5492_; lean_object* v___y_5493_; lean_object* v___y_5494_; lean_object* v___y_5495_; lean_object* v___x_5498_; uint8_t v___x_5499_; 
v___x_5498_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1Nil__lean___lam__0___closed__1));
lean_inc(v_pat_5476_);
v___x_5499_ = l_Lean_Syntax_isOfKind(v_pat_5476_, v___x_5498_);
if (v___x_5499_ == 0)
{
lean_object* v___x_5500_; uint8_t v___x_5501_; 
lean_dec(v_ref_5475_);
v___x_5500_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_expandRIntroPat___closed__1));
lean_inc(v_pat_5476_);
v___x_5501_ = l_Lean_Syntax_isOfKind(v_pat_5476_, v___x_5500_);
if (v___x_5501_ == 0)
{
lean_object* v___x_5502_; 
lean_dec_ref(v_cont_5478_);
lean_dec(v_ty_x3f_5477_);
lean_dec(v_pat_5476_);
lean_dec(v_a_5474_);
lean_dec_ref(v_clears_5473_);
lean_dec(v_fs_5472_);
lean_dec(v_g_5471_);
v___x_5502_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore_spec__1___redArg();
return v___x_5502_;
}
else
{
lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v_ty_x3f_x27_5506_; lean_object* v___y_5507_; lean_object* v___y_5508_; lean_object* v___y_5509_; lean_object* v___y_5510_; lean_object* v___y_5511_; lean_object* v___y_5512_; lean_object* v___x_5517_; lean_object* v___x_5518_; uint8_t v___x_5519_; 
v___x_5503_ = lean_unsigned_to_nat(1u);
v___x_5504_ = l_Lean_Syntax_getArg(v_pat_5476_, v___x_5503_);
v___x_5517_ = lean_unsigned_to_nat(2u);
v___x_5518_ = l_Lean_Syntax_getArg(v_pat_5476_, v___x_5517_);
v___x_5519_ = l_Lean_Syntax_isNone(v___x_5518_);
if (v___x_5519_ == 0)
{
uint8_t v___x_5520_; 
lean_inc(v___x_5518_);
v___x_5520_ = l_Lean_Syntax_matchesNull(v___x_5518_, v___x_5517_);
if (v___x_5520_ == 0)
{
lean_object* v___x_5521_; 
lean_dec(v___x_5518_);
lean_dec(v___x_5504_);
lean_dec_ref(v_cont_5478_);
lean_dec(v_ty_x3f_5477_);
lean_dec(v_pat_5476_);
lean_dec(v_a_5474_);
lean_dec_ref(v_clears_5473_);
lean_dec(v_fs_5472_);
lean_dec(v_g_5471_);
v___x_5521_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore_spec__1___redArg();
return v___x_5521_;
}
else
{
lean_object* v_ty_x3f_x27_5522_; lean_object* v___x_5523_; 
v_ty_x3f_x27_5522_ = l_Lean_Syntax_getArg(v___x_5518_, v___x_5503_);
lean_dec(v___x_5518_);
v___x_5523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5523_, 0, v_ty_x3f_x27_5522_);
v_ty_x3f_x27_5506_ = v___x_5523_;
v___y_5507_ = v___y_5479_;
v___y_5508_ = v___y_5480_;
v___y_5509_ = v___y_5481_;
v___y_5510_ = v___y_5482_;
v___y_5511_ = v___y_5483_;
v___y_5512_ = v___y_5484_;
goto v___jp_5505_;
}
}
else
{
lean_object* v___x_5524_; 
lean_dec(v___x_5518_);
v___x_5524_ = lean_box(0);
v_ty_x3f_x27_5506_ = v___x_5524_;
v___y_5507_ = v___y_5479_;
v___y_5508_ = v___y_5480_;
v___y_5509_ = v___y_5481_;
v___y_5510_ = v___y_5482_;
v___y_5511_ = v___y_5483_;
v___y_5512_ = v___y_5484_;
goto v___jp_5505_;
}
v___jp_5505_:
{
lean_object* v_pats_5513_; lean_object* v___x_5514_; uint8_t v___x_5515_; 
v_pats_5513_ = l_Lean_Syntax_getArgs(v___x_5504_);
lean_dec(v___x_5504_);
v___x_5514_ = lean_array_get_size(v_pats_5513_);
v___x_5515_ = lean_nat_dec_eq(v___x_5514_, v___x_5503_);
if (v___x_5515_ == 0)
{
lean_object* v___x_5516_; 
lean_dec(v_pat_5476_);
v___x_5516_ = lean_box(0);
v___y_5487_ = v___y_5511_;
v___y_5488_ = v___y_5508_;
v___y_5489_ = v___y_5512_;
v___y_5490_ = v___y_5509_;
v___y_5491_ = v___y_5507_;
v___y_5492_ = v_pats_5513_;
v___y_5493_ = v_ty_x3f_x27_5506_;
v___y_5494_ = v___y_5510_;
v___y_5495_ = v___x_5516_;
goto v___jp_5486_;
}
else
{
v___y_5487_ = v___y_5511_;
v___y_5488_ = v___y_5508_;
v___y_5489_ = v___y_5512_;
v___y_5490_ = v___y_5509_;
v___y_5491_ = v___y_5507_;
v___y_5492_ = v_pats_5513_;
v___y_5493_ = v_ty_x3f_x27_5506_;
v___y_5494_ = v___y_5510_;
v___y_5495_ = v_pat_5476_;
goto v___jp_5486_;
}
}
}
}
else
{
lean_object* v___x_5525_; lean_object* v___x_5526_; lean_object* v___x_5527_; 
v___x_5525_ = lean_unsigned_to_nat(0u);
v___x_5526_ = l_Lean_Syntax_getArg(v_pat_5476_, v___x_5525_);
lean_dec(v_pat_5476_);
v___x_5527_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse(v___x_5526_, v___y_5481_, v___y_5482_, v___y_5483_, v___y_5484_);
if (lean_obj_tag(v___x_5527_) == 0)
{
lean_object* v_a_5528_; lean_object* v___x_5529_; lean_object* v___y_5531_; lean_object* v___y_5532_; lean_object* v___y_5555_; lean_object* v_ref_5559_; 
v_a_5528_ = lean_ctor_get(v___x_5527_, 0);
lean_inc(v_a_5528_);
lean_dec_ref_known(v___x_5527_, 1);
v___x_5529_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_typed_x3f(v_ref_5475_, v_a_5528_, v_ty_x3f_5477_);
lean_dec(v_ty_x3f_5477_);
v_ref_5559_ = lean_ctor_get(v___x_5529_, 0);
lean_inc(v_ref_5559_);
v___y_5555_ = v_ref_5559_;
goto v___jp_5554_;
v___jp_5530_:
{
lean_object* v_toCold_5533_; lean_object* v_currRecDepth_5534_; lean_object* v_ref_5535_; uint8_t v_diag_5536_; uint8_t v_suppressElabErrors_5537_; lean_object* v_ref_5538_; lean_object* v___x_5539_; lean_object* v___x_5540_; 
v_toCold_5533_ = lean_ctor_get(v___y_5483_, 0);
v_currRecDepth_5534_ = lean_ctor_get(v___y_5483_, 1);
v_ref_5535_ = lean_ctor_get(v___y_5483_, 2);
v_diag_5536_ = lean_ctor_get_uint8(v___y_5483_, sizeof(void*)*3);
v_suppressElabErrors_5537_ = lean_ctor_get_uint8(v___y_5483_, sizeof(void*)*3 + 1);
v_ref_5538_ = l_Lean_replaceRef(v___y_5531_, v_ref_5535_);
lean_dec(v___y_5531_);
lean_inc(v_currRecDepth_5534_);
lean_inc_ref(v_toCold_5533_);
v___x_5539_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5539_, 0, v_toCold_5533_);
lean_ctor_set(v___x_5539_, 1, v_currRecDepth_5534_);
lean_ctor_set(v___x_5539_, 2, v_ref_5538_);
lean_ctor_set_uint8(v___x_5539_, sizeof(void*)*3, v_diag_5536_);
lean_ctor_set_uint8(v___x_5539_, sizeof(void*)*3 + 1, v_suppressElabErrors_5537_);
v___x_5540_ = l_Lean_MVarId_intro(v_g_5471_, v___y_5532_, v___y_5481_, v___y_5482_, v___x_5539_, v___y_5484_);
lean_dec_ref_known(v___x_5539_, 3);
if (lean_obj_tag(v___x_5540_) == 0)
{
lean_object* v_a_5541_; lean_object* v_fst_5542_; lean_object* v_snd_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; 
v_a_5541_ = lean_ctor_get(v___x_5540_, 0);
lean_inc(v_a_5541_);
lean_dec_ref_known(v___x_5540_, 1);
v_fst_5542_ = lean_ctor_get(v_a_5541_, 0);
lean_inc(v_fst_5542_);
v_snd_5543_ = lean_ctor_get(v_a_5541_, 1);
lean_inc(v_snd_5543_);
lean_dec(v_a_5541_);
v___x_5544_ = l_Lean_Expr_fvar___override(v_fst_5542_);
v___x_5545_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rcasesCore___redArg(v_snd_5543_, v_fs_5472_, v_clears_5473_, v___x_5544_, v_a_5474_, v___x_5529_, v_cont_5478_, v___y_5479_, v___y_5480_, v___y_5481_, v___y_5482_, v___y_5483_, v___y_5484_);
lean_dec_ref(v___x_5544_);
return v___x_5545_;
}
else
{
lean_object* v_a_5546_; lean_object* v___x_5548_; uint8_t v_isShared_5549_; uint8_t v_isSharedCheck_5553_; 
lean_dec_ref(v___x_5529_);
lean_dec_ref(v_cont_5478_);
lean_dec(v_a_5474_);
lean_dec_ref(v_clears_5473_);
lean_dec(v_fs_5472_);
v_a_5546_ = lean_ctor_get(v___x_5540_, 0);
v_isSharedCheck_5553_ = !lean_is_exclusive(v___x_5540_);
if (v_isSharedCheck_5553_ == 0)
{
v___x_5548_ = v___x_5540_;
v_isShared_5549_ = v_isSharedCheck_5553_;
goto v_resetjp_5547_;
}
else
{
lean_inc(v_a_5546_);
lean_dec(v___x_5540_);
v___x_5548_ = lean_box(0);
v_isShared_5549_ = v_isSharedCheck_5553_;
goto v_resetjp_5547_;
}
v_resetjp_5547_:
{
lean_object* v___x_5551_; 
if (v_isShared_5549_ == 0)
{
v___x_5551_ = v___x_5548_;
goto v_reusejp_5550_;
}
else
{
lean_object* v_reuseFailAlloc_5552_; 
v_reuseFailAlloc_5552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5552_, 0, v_a_5546_);
v___x_5551_ = v_reuseFailAlloc_5552_;
goto v_reusejp_5550_;
}
v_reusejp_5550_:
{
return v___x_5551_;
}
}
}
}
v___jp_5554_:
{
lean_object* v___x_5556_; 
v___x_5556_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_name_x3f(v___x_5529_);
if (lean_obj_tag(v___x_5556_) == 0)
{
lean_object* v___x_5557_; 
v___x_5557_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__1));
v___y_5531_ = v___y_5555_;
v___y_5532_ = v___x_5557_;
goto v___jp_5530_;
}
else
{
lean_object* v_val_5558_; 
v_val_5558_ = lean_ctor_get(v___x_5556_, 0);
lean_inc(v_val_5558_);
lean_dec_ref_known(v___x_5556_, 1);
v___y_5531_ = v___y_5555_;
v___y_5532_ = v_val_5558_;
goto v___jp_5530_;
}
}
}
else
{
lean_object* v_a_5560_; lean_object* v___x_5562_; uint8_t v_isShared_5563_; uint8_t v_isSharedCheck_5567_; 
lean_dec_ref(v_cont_5478_);
lean_dec(v_ty_x3f_5477_);
lean_dec(v_ref_5475_);
lean_dec(v_a_5474_);
lean_dec_ref(v_clears_5473_);
lean_dec(v_fs_5472_);
lean_dec(v_g_5471_);
v_a_5560_ = lean_ctor_get(v___x_5527_, 0);
v_isSharedCheck_5567_ = !lean_is_exclusive(v___x_5527_);
if (v_isSharedCheck_5567_ == 0)
{
v___x_5562_ = v___x_5527_;
v_isShared_5563_ = v_isSharedCheck_5567_;
goto v_resetjp_5561_;
}
else
{
lean_inc(v_a_5560_);
lean_dec(v___x_5527_);
v___x_5562_ = lean_box(0);
v_isShared_5563_ = v_isSharedCheck_5567_;
goto v_resetjp_5561_;
}
v_resetjp_5561_:
{
lean_object* v___x_5565_; 
if (v_isShared_5563_ == 0)
{
v___x_5565_ = v___x_5562_;
goto v_reusejp_5564_;
}
else
{
lean_object* v_reuseFailAlloc_5566_; 
v_reuseFailAlloc_5566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5566_, 0, v_a_5560_);
v___x_5565_ = v_reuseFailAlloc_5566_;
goto v_reusejp_5564_;
}
v_reusejp_5564_:
{
return v___x_5565_;
}
}
}
}
v___jp_5486_:
{
if (lean_obj_tag(v___y_5493_) == 0)
{
lean_object* v___x_5496_; 
v___x_5496_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue___redArg(v_g_5471_, v_fs_5472_, v_clears_5473_, v___y_5495_, v___y_5492_, v_ty_x3f_5477_, v_a_5474_, v_cont_5478_, v___y_5491_, v___y_5488_, v___y_5490_, v___y_5494_, v___y_5487_, v___y_5489_);
return v___x_5496_;
}
else
{
lean_object* v___x_5497_; 
lean_dec(v_ty_x3f_5477_);
v___x_5497_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue___redArg(v_g_5471_, v_fs_5472_, v_clears_5473_, v___y_5495_, v___y_5492_, v___y_5493_, v_a_5474_, v_cont_5478_, v___y_5491_, v___y_5488_, v___y_5490_, v___y_5494_, v___y_5487_, v___y_5489_);
return v___x_5497_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue_loop___redArg(lean_object* v_ref_5568_, lean_object* v_pats_5569_, lean_object* v_ty_x3f_5570_, lean_object* v_cont_5571_, lean_object* v_i_5572_, lean_object* v_g_5573_, lean_object* v_fs_5574_, lean_object* v_clears_5575_, lean_object* v_a_5576_, lean_object* v___y_5577_, lean_object* v___y_5578_, lean_object* v___y_5579_, lean_object* v___y_5580_, lean_object* v___y_5581_, lean_object* v___y_5582_){
_start:
{
lean_object* v___x_5584_; uint8_t v___x_5585_; 
v___x_5584_ = lean_array_get_size(v_pats_5569_);
v___x_5585_ = lean_nat_dec_lt(v_i_5572_, v___x_5584_);
if (v___x_5585_ == 0)
{
lean_object* v___x_5586_; 
lean_dec(v_ty_x3f_5570_);
lean_dec_ref(v_pats_5569_);
lean_dec(v_ref_5568_);
lean_inc(v___y_5582_);
lean_inc_ref(v___y_5581_);
lean_inc(v___y_5580_);
lean_inc_ref(v___y_5579_);
lean_inc(v___y_5578_);
lean_inc_ref(v___y_5577_);
v___x_5586_ = lean_apply_11(v_cont_5571_, v_g_5573_, v_fs_5574_, v_clears_5575_, v_a_5576_, v___y_5577_, v___y_5578_, v___y_5579_, v___y_5580_, v___y_5581_, v___y_5582_, lean_box(0));
return v___x_5586_;
}
else
{
lean_object* v___x_5587_; lean_object* v___x_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; 
v___x_5587_ = lean_array_fget(v_pats_5569_, v_i_5572_);
v___x_5588_ = lean_unsigned_to_nat(1u);
v___x_5589_ = lean_nat_add(v_i_5572_, v___x_5588_);
lean_inc(v_ty_x3f_5570_);
lean_inc(v_ref_5568_);
v___x_5590_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue_loop___redArg___boxed), 16, 5);
lean_closure_set(v___x_5590_, 0, v_ref_5568_);
lean_closure_set(v___x_5590_, 1, v_pats_5569_);
lean_closure_set(v___x_5590_, 2, v_ty_x3f_5570_);
lean_closure_set(v___x_5590_, 3, v_cont_5571_);
lean_closure_set(v___x_5590_, 4, v___x_5589_);
v___x_5591_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore___redArg(v_g_5573_, v_fs_5574_, v_clears_5575_, v_a_5576_, v_ref_5568_, v___x_5587_, v_ty_x3f_5570_, v___x_5590_, v___y_5577_, v___y_5578_, v___y_5579_, v___y_5580_, v___y_5581_, v___y_5582_);
return v___x_5591_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue_loop(lean_object* v_00_u03b1_5592_, lean_object* v_ref_5593_, lean_object* v_pats_5594_, lean_object* v_ty_x3f_5595_, lean_object* v_cont_5596_, lean_object* v_i_5597_, lean_object* v_g_5598_, lean_object* v_fs_5599_, lean_object* v_clears_5600_, lean_object* v_a_5601_, lean_object* v___y_5602_, lean_object* v___y_5603_, lean_object* v___y_5604_, lean_object* v___y_5605_, lean_object* v___y_5606_, lean_object* v___y_5607_){
_start:
{
lean_object* v___x_5609_; 
v___x_5609_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue_loop___redArg(v_ref_5593_, v_pats_5594_, v_ty_x3f_5595_, v_cont_5596_, v_i_5597_, v_g_5598_, v_fs_5599_, v_clears_5600_, v_a_5601_, v___y_5602_, v___y_5603_, v___y_5604_, v___y_5605_, v___y_5606_, v___y_5607_);
return v___x_5609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue___redArg___boxed(lean_object* v_g_5610_, lean_object* v_fs_5611_, lean_object* v_clears_5612_, lean_object* v_ref_5613_, lean_object* v_pats_5614_, lean_object* v_ty_x3f_5615_, lean_object* v_a_5616_, lean_object* v_cont_5617_, lean_object* v___y_5618_, lean_object* v___y_5619_, lean_object* v___y_5620_, lean_object* v___y_5621_, lean_object* v___y_5622_, lean_object* v___y_5623_, lean_object* v___y_5624_){
_start:
{
lean_object* v_res_5625_; 
v_res_5625_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue___redArg(v_g_5610_, v_fs_5611_, v_clears_5612_, v_ref_5613_, v_pats_5614_, v_ty_x3f_5615_, v_a_5616_, v_cont_5617_, v___y_5618_, v___y_5619_, v___y_5620_, v___y_5621_, v___y_5622_, v___y_5623_);
lean_dec(v___y_5623_);
lean_dec_ref(v___y_5622_);
lean_dec(v___y_5621_);
lean_dec_ref(v___y_5620_);
lean_dec(v___y_5619_);
lean_dec_ref(v___y_5618_);
return v_res_5625_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore___redArg___boxed(lean_object* v_g_5626_, lean_object* v_fs_5627_, lean_object* v_clears_5628_, lean_object* v_a_5629_, lean_object* v_ref_5630_, lean_object* v_pat_5631_, lean_object* v_ty_x3f_5632_, lean_object* v_cont_5633_, lean_object* v___y_5634_, lean_object* v___y_5635_, lean_object* v___y_5636_, lean_object* v___y_5637_, lean_object* v___y_5638_, lean_object* v___y_5639_, lean_object* v___y_5640_){
_start:
{
lean_object* v_res_5641_; 
v_res_5641_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore___redArg(v_g_5626_, v_fs_5627_, v_clears_5628_, v_a_5629_, v_ref_5630_, v_pat_5631_, v_ty_x3f_5632_, v_cont_5633_, v___y_5634_, v___y_5635_, v___y_5636_, v___y_5637_, v___y_5638_, v___y_5639_);
lean_dec(v___y_5639_);
lean_dec_ref(v___y_5638_);
lean_dec(v___y_5637_);
lean_dec_ref(v___y_5636_);
lean_dec(v___y_5635_);
lean_dec_ref(v___y_5634_);
return v_res_5641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore_spec__1(lean_object* v_00_u03b1_5642_, lean_object* v___y_5643_, lean_object* v___y_5644_, lean_object* v___y_5645_, lean_object* v___y_5646_, lean_object* v___y_5647_, lean_object* v___y_5648_){
_start:
{
lean_object* v___x_5650_; 
v___x_5650_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore_spec__1___redArg();
return v___x_5650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore_spec__1___boxed(lean_object* v_00_u03b1_5651_, lean_object* v___y_5652_, lean_object* v___y_5653_, lean_object* v___y_5654_, lean_object* v___y_5655_, lean_object* v___y_5656_, lean_object* v___y_5657_, lean_object* v___y_5658_){
_start:
{
lean_object* v_res_5659_; 
v_res_5659_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore_spec__1(v_00_u03b1_5651_, v___y_5652_, v___y_5653_, v___y_5654_, v___y_5655_, v___y_5656_, v___y_5657_);
lean_dec(v___y_5657_);
lean_dec_ref(v___y_5656_);
lean_dec(v___y_5655_);
lean_dec_ref(v___y_5654_);
lean_dec(v___y_5653_);
lean_dec_ref(v___y_5652_);
return v_res_5659_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore(lean_object* v_00_u03b1_5660_, lean_object* v_g_5661_, lean_object* v_fs_5662_, lean_object* v_clears_5663_, lean_object* v_a_5664_, lean_object* v_ref_5665_, lean_object* v_pat_5666_, lean_object* v_ty_x3f_5667_, lean_object* v_cont_5668_, lean_object* v___y_5669_, lean_object* v___y_5670_, lean_object* v___y_5671_, lean_object* v___y_5672_, lean_object* v___y_5673_, lean_object* v___y_5674_){
_start:
{
lean_object* v___x_5676_; 
v___x_5676_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore___redArg(v_g_5661_, v_fs_5662_, v_clears_5663_, v_a_5664_, v_ref_5665_, v_pat_5666_, v_ty_x3f_5667_, v_cont_5668_, v___y_5669_, v___y_5670_, v___y_5671_, v___y_5672_, v___y_5673_, v___y_5674_);
return v___x_5676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore___boxed(lean_object* v_00_u03b1_5677_, lean_object* v_g_5678_, lean_object* v_fs_5679_, lean_object* v_clears_5680_, lean_object* v_a_5681_, lean_object* v_ref_5682_, lean_object* v_pat_5683_, lean_object* v_ty_x3f_5684_, lean_object* v_cont_5685_, lean_object* v___y_5686_, lean_object* v___y_5687_, lean_object* v___y_5688_, lean_object* v___y_5689_, lean_object* v___y_5690_, lean_object* v___y_5691_, lean_object* v___y_5692_){
_start:
{
lean_object* v_res_5693_; 
v_res_5693_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroCore(v_00_u03b1_5677_, v_g_5678_, v_fs_5679_, v_clears_5680_, v_a_5681_, v_ref_5682_, v_pat_5683_, v_ty_x3f_5684_, v_cont_5685_, v___y_5686_, v___y_5687_, v___y_5688_, v___y_5689_, v___y_5690_, v___y_5691_);
lean_dec(v___y_5691_);
lean_dec_ref(v___y_5690_);
lean_dec(v___y_5689_);
lean_dec_ref(v___y_5688_);
lean_dec(v___y_5687_);
lean_dec_ref(v___y_5686_);
return v_res_5693_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue(lean_object* v_00_u03b1_5694_, lean_object* v_g_5695_, lean_object* v_fs_5696_, lean_object* v_clears_5697_, lean_object* v_ref_5698_, lean_object* v_pats_5699_, lean_object* v_ty_x3f_5700_, lean_object* v_a_5701_, lean_object* v_cont_5702_, lean_object* v___y_5703_, lean_object* v___y_5704_, lean_object* v___y_5705_, lean_object* v___y_5706_, lean_object* v___y_5707_, lean_object* v___y_5708_){
_start:
{
lean_object* v___x_5710_; 
v___x_5710_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue___redArg(v_g_5695_, v_fs_5696_, v_clears_5697_, v_ref_5698_, v_pats_5699_, v_ty_x3f_5700_, v_a_5701_, v_cont_5702_, v___y_5703_, v___y_5704_, v___y_5705_, v___y_5706_, v___y_5707_, v___y_5708_);
return v___x_5710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue___boxed(lean_object* v_00_u03b1_5711_, lean_object* v_g_5712_, lean_object* v_fs_5713_, lean_object* v_clears_5714_, lean_object* v_ref_5715_, lean_object* v_pats_5716_, lean_object* v_ty_x3f_5717_, lean_object* v_a_5718_, lean_object* v_cont_5719_, lean_object* v___y_5720_, lean_object* v___y_5721_, lean_object* v___y_5722_, lean_object* v___y_5723_, lean_object* v___y_5724_, lean_object* v___y_5725_, lean_object* v___y_5726_){
_start:
{
lean_object* v_res_5727_; 
v_res_5727_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue(v_00_u03b1_5711_, v_g_5712_, v_fs_5713_, v_clears_5714_, v_ref_5715_, v_pats_5716_, v_ty_x3f_5717_, v_a_5718_, v_cont_5719_, v___y_5720_, v___y_5721_, v___y_5722_, v___y_5723_, v___y_5724_, v___y_5725_);
lean_dec(v___y_5725_);
lean_dec_ref(v___y_5724_);
lean_dec(v___y_5723_);
lean_dec_ref(v___y_5722_);
lean_dec(v___y_5721_);
lean_dec_ref(v___y_5720_);
return v_res_5727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rintro___lam__0(lean_object* v_g_5728_, lean_object* v___x_5729_, lean_object* v___x_5730_, lean_object* v___x_5731_, lean_object* v_pats_5732_, lean_object* v_ty_x3f_5733_, lean_object* v___x_5734_, lean_object* v___x_5735_, lean_object* v___y_5736_, lean_object* v___y_5737_, lean_object* v___y_5738_, lean_object* v___y_5739_, lean_object* v___y_5740_, lean_object* v___y_5741_){
_start:
{
lean_object* v___x_5743_; 
v___x_5743_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_rintroContinue___redArg(v_g_5728_, v___x_5729_, v___x_5730_, v___x_5731_, v_pats_5732_, v_ty_x3f_5733_, v___x_5734_, v___x_5735_, v___y_5736_, v___y_5737_, v___y_5738_, v___y_5739_, v___y_5740_, v___y_5741_);
if (lean_obj_tag(v___x_5743_) == 0)
{
lean_object* v_a_5744_; lean_object* v___x_5746_; uint8_t v_isShared_5747_; uint8_t v_isSharedCheck_5752_; 
v_a_5744_ = lean_ctor_get(v___x_5743_, 0);
v_isSharedCheck_5752_ = !lean_is_exclusive(v___x_5743_);
if (v_isSharedCheck_5752_ == 0)
{
v___x_5746_ = v___x_5743_;
v_isShared_5747_ = v_isSharedCheck_5752_;
goto v_resetjp_5745_;
}
else
{
lean_inc(v_a_5744_);
lean_dec(v___x_5743_);
v___x_5746_ = lean_box(0);
v_isShared_5747_ = v_isSharedCheck_5752_;
goto v_resetjp_5745_;
}
v_resetjp_5745_:
{
lean_object* v___x_5748_; lean_object* v___x_5750_; 
v___x_5748_ = lean_array_to_list(v_a_5744_);
if (v_isShared_5747_ == 0)
{
lean_ctor_set(v___x_5746_, 0, v___x_5748_);
v___x_5750_ = v___x_5746_;
goto v_reusejp_5749_;
}
else
{
lean_object* v_reuseFailAlloc_5751_; 
v_reuseFailAlloc_5751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5751_, 0, v___x_5748_);
v___x_5750_ = v_reuseFailAlloc_5751_;
goto v_reusejp_5749_;
}
v_reusejp_5749_:
{
return v___x_5750_;
}
}
}
else
{
lean_object* v_a_5753_; lean_object* v___x_5755_; uint8_t v_isShared_5756_; uint8_t v_isSharedCheck_5760_; 
v_a_5753_ = lean_ctor_get(v___x_5743_, 0);
v_isSharedCheck_5760_ = !lean_is_exclusive(v___x_5743_);
if (v_isSharedCheck_5760_ == 0)
{
v___x_5755_ = v___x_5743_;
v_isShared_5756_ = v_isSharedCheck_5760_;
goto v_resetjp_5754_;
}
else
{
lean_inc(v_a_5753_);
lean_dec(v___x_5743_);
v___x_5755_ = lean_box(0);
v_isShared_5756_ = v_isSharedCheck_5760_;
goto v_resetjp_5754_;
}
v_resetjp_5754_:
{
lean_object* v___x_5758_; 
if (v_isShared_5756_ == 0)
{
v___x_5758_ = v___x_5755_;
goto v_reusejp_5757_;
}
else
{
lean_object* v_reuseFailAlloc_5759_; 
v_reuseFailAlloc_5759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5759_, 0, v_a_5753_);
v___x_5758_ = v_reuseFailAlloc_5759_;
goto v_reusejp_5757_;
}
v_reusejp_5757_:
{
return v___x_5758_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rintro___lam__0___boxed(lean_object* v_g_5761_, lean_object* v___x_5762_, lean_object* v___x_5763_, lean_object* v___x_5764_, lean_object* v_pats_5765_, lean_object* v_ty_x3f_5766_, lean_object* v___x_5767_, lean_object* v___x_5768_, lean_object* v___y_5769_, lean_object* v___y_5770_, lean_object* v___y_5771_, lean_object* v___y_5772_, lean_object* v___y_5773_, lean_object* v___y_5774_, lean_object* v___y_5775_){
_start:
{
lean_object* v_res_5776_; 
v_res_5776_ = l_Lean_Elab_Tactic_RCases_rintro___lam__0(v_g_5761_, v___x_5762_, v___x_5763_, v___x_5764_, v_pats_5765_, v_ty_x3f_5766_, v___x_5767_, v___x_5768_, v___y_5769_, v___y_5770_, v___y_5771_, v___y_5772_, v___y_5773_, v___y_5774_);
lean_dec(v___y_5774_);
lean_dec_ref(v___y_5773_);
lean_dec(v___y_5772_);
lean_dec_ref(v___y_5771_);
lean_dec(v___y_5770_);
lean_dec_ref(v___y_5769_);
return v_res_5776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rintro(lean_object* v_pats_5777_, lean_object* v_ty_x3f_5778_, lean_object* v_g_5779_, lean_object* v___y_5780_, lean_object* v___y_5781_, lean_object* v___y_5782_, lean_object* v___y_5783_, lean_object* v___y_5784_, lean_object* v___y_5785_){
_start:
{
lean_object* v___x_5787_; lean_object* v___x_5788_; lean_object* v___x_5789_; lean_object* v___x_5790_; lean_object* v___f_5791_; uint8_t v___x_5792_; lean_object* v___x_5793_; 
v___x_5787_ = lean_box(0);
v___x_5788_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0___closed__0));
v___x_5789_ = lean_box(0);
v___x_5790_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone___lam__0___closed__1));
v___f_5791_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_RCases_rintro___lam__0___boxed), 15, 8);
lean_closure_set(v___f_5791_, 0, v_g_5779_);
lean_closure_set(v___f_5791_, 1, v___x_5787_);
lean_closure_set(v___f_5791_, 2, v___x_5788_);
lean_closure_set(v___f_5791_, 3, v___x_5789_);
lean_closure_set(v___f_5791_, 4, v_pats_5777_);
lean_closure_set(v___f_5791_, 5, v_ty_x3f_5778_);
lean_closure_set(v___f_5791_, 6, v___x_5788_);
lean_closure_set(v___f_5791_, 7, v___x_5790_);
v___x_5792_ = 1;
v___x_5793_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___f_5791_, v___x_5792_, v___y_5780_, v___y_5781_, v___y_5782_, v___y_5783_, v___y_5784_, v___y_5785_);
return v___x_5793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_RCases_rintro___boxed(lean_object* v_pats_5794_, lean_object* v_ty_x3f_5795_, lean_object* v_g_5796_, lean_object* v___y_5797_, lean_object* v___y_5798_, lean_object* v___y_5799_, lean_object* v___y_5800_, lean_object* v___y_5801_, lean_object* v___y_5802_, lean_object* v___y_5803_){
_start:
{
lean_object* v_res_5804_; 
v_res_5804_ = l_Lean_Elab_Tactic_RCases_rintro(v_pats_5794_, v_ty_x3f_5795_, v_g_5796_, v___y_5797_, v___y_5798_, v___y_5799_, v___y_5800_, v___y_5801_, v___y_5802_);
lean_dec(v___y_5802_);
lean_dec_ref(v___y_5801_);
lean_dec(v___y_5800_);
lean_dec_ref(v___y_5799_);
lean_dec(v___y_5798_);
lean_dec_ref(v___y_5797_);
return v_res_5804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___redArg(){
_start:
{
lean_object* v___x_5806_; lean_object* v___x_5807_; 
v___x_5806_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse_spec__0___redArg___closed__0);
v___x_5807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5807_, 0, v___x_5806_);
return v___x_5807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___redArg___boxed(lean_object* v___y_5808_){
_start:
{
lean_object* v_res_5809_; 
v_res_5809_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___redArg();
return v_res_5809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0(lean_object* v_00_u03b1_5810_, lean_object* v___y_5811_, lean_object* v___y_5812_, lean_object* v___y_5813_, lean_object* v___y_5814_, lean_object* v___y_5815_, lean_object* v___y_5816_, lean_object* v___y_5817_, lean_object* v___y_5818_){
_start:
{
lean_object* v___x_5820_; 
v___x_5820_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___redArg();
return v___x_5820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___boxed(lean_object* v_00_u03b1_5821_, lean_object* v___y_5822_, lean_object* v___y_5823_, lean_object* v___y_5824_, lean_object* v___y_5825_, lean_object* v___y_5826_, lean_object* v___y_5827_, lean_object* v___y_5828_, lean_object* v___y_5829_, lean_object* v___y_5830_){
_start:
{
lean_object* v_res_5831_; 
v_res_5831_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0(v_00_u03b1_5821_, v___y_5822_, v___y_5823_, v___y_5824_, v___y_5825_, v___y_5826_, v___y_5827_, v___y_5828_, v___y_5829_);
lean_dec(v___y_5829_);
lean_dec_ref(v___y_5828_);
lean_dec(v___y_5827_);
lean_dec_ref(v___y_5826_);
lean_dec(v___y_5825_);
lean_dec_ref(v___y_5824_);
lean_dec(v___y_5823_);
lean_dec_ref(v___y_5822_);
return v_res_5831_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg___lam__0(lean_object* v_x_5832_, lean_object* v___y_5833_, lean_object* v___y_5834_, lean_object* v___y_5835_, lean_object* v___y_5836_, lean_object* v___y_5837_, lean_object* v___y_5838_, lean_object* v___y_5839_, lean_object* v___y_5840_){
_start:
{
lean_object* v___x_5842_; 
lean_inc(v___y_5836_);
lean_inc_ref(v___y_5835_);
lean_inc(v___y_5834_);
lean_inc_ref(v___y_5833_);
v___x_5842_ = lean_apply_9(v_x_5832_, v___y_5833_, v___y_5834_, v___y_5835_, v___y_5836_, v___y_5837_, v___y_5838_, v___y_5839_, v___y_5840_, lean_box(0));
return v___x_5842_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg___lam__0___boxed(lean_object* v_x_5843_, lean_object* v___y_5844_, lean_object* v___y_5845_, lean_object* v___y_5846_, lean_object* v___y_5847_, lean_object* v___y_5848_, lean_object* v___y_5849_, lean_object* v___y_5850_, lean_object* v___y_5851_, lean_object* v___y_5852_){
_start:
{
lean_object* v_res_5853_; 
v_res_5853_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg___lam__0(v_x_5843_, v___y_5844_, v___y_5845_, v___y_5846_, v___y_5847_, v___y_5848_, v___y_5849_, v___y_5850_, v___y_5851_);
lean_dec(v___y_5847_);
lean_dec_ref(v___y_5846_);
lean_dec(v___y_5845_);
lean_dec_ref(v___y_5844_);
return v_res_5853_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg(lean_object* v_mvarId_5854_, lean_object* v_x_5855_, lean_object* v___y_5856_, lean_object* v___y_5857_, lean_object* v___y_5858_, lean_object* v___y_5859_, lean_object* v___y_5860_, lean_object* v___y_5861_, lean_object* v___y_5862_, lean_object* v___y_5863_){
_start:
{
lean_object* v___f_5865_; lean_object* v___x_5866_; 
lean_inc(v___y_5859_);
lean_inc_ref(v___y_5858_);
lean_inc(v___y_5857_);
lean_inc_ref(v___y_5856_);
v___f_5865_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_5865_, 0, v_x_5855_);
lean_closure_set(v___f_5865_, 1, v___y_5856_);
lean_closure_set(v___f_5865_, 2, v___y_5857_);
lean_closure_set(v___f_5865_, 3, v___y_5858_);
lean_closure_set(v___f_5865_, 4, v___y_5859_);
v___x_5866_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_5854_, v___f_5865_, v___y_5860_, v___y_5861_, v___y_5862_, v___y_5863_);
if (lean_obj_tag(v___x_5866_) == 0)
{
return v___x_5866_;
}
else
{
lean_object* v_a_5867_; lean_object* v___x_5869_; uint8_t v_isShared_5870_; uint8_t v_isSharedCheck_5874_; 
v_a_5867_ = lean_ctor_get(v___x_5866_, 0);
v_isSharedCheck_5874_ = !lean_is_exclusive(v___x_5866_);
if (v_isSharedCheck_5874_ == 0)
{
v___x_5869_ = v___x_5866_;
v_isShared_5870_ = v_isSharedCheck_5874_;
goto v_resetjp_5868_;
}
else
{
lean_inc(v_a_5867_);
lean_dec(v___x_5866_);
v___x_5869_ = lean_box(0);
v_isShared_5870_ = v_isSharedCheck_5874_;
goto v_resetjp_5868_;
}
v_resetjp_5868_:
{
lean_object* v___x_5872_; 
if (v_isShared_5870_ == 0)
{
v___x_5872_ = v___x_5869_;
goto v_reusejp_5871_;
}
else
{
lean_object* v_reuseFailAlloc_5873_; 
v_reuseFailAlloc_5873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5873_, 0, v_a_5867_);
v___x_5872_ = v_reuseFailAlloc_5873_;
goto v_reusejp_5871_;
}
v_reusejp_5871_:
{
return v___x_5872_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg___boxed(lean_object* v_mvarId_5875_, lean_object* v_x_5876_, lean_object* v___y_5877_, lean_object* v___y_5878_, lean_object* v___y_5879_, lean_object* v___y_5880_, lean_object* v___y_5881_, lean_object* v___y_5882_, lean_object* v___y_5883_, lean_object* v___y_5884_, lean_object* v___y_5885_){
_start:
{
lean_object* v_res_5886_; 
v_res_5886_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg(v_mvarId_5875_, v_x_5876_, v___y_5877_, v___y_5878_, v___y_5879_, v___y_5880_, v___y_5881_, v___y_5882_, v___y_5883_, v___y_5884_);
lean_dec(v___y_5884_);
lean_dec_ref(v___y_5883_);
lean_dec(v___y_5882_);
lean_dec_ref(v___y_5881_);
lean_dec(v___y_5880_);
lean_dec_ref(v___y_5879_);
lean_dec(v___y_5878_);
lean_dec_ref(v___y_5877_);
return v_res_5886_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2(lean_object* v_00_u03b1_5887_, lean_object* v_mvarId_5888_, lean_object* v_x_5889_, lean_object* v___y_5890_, lean_object* v___y_5891_, lean_object* v___y_5892_, lean_object* v___y_5893_, lean_object* v___y_5894_, lean_object* v___y_5895_, lean_object* v___y_5896_, lean_object* v___y_5897_){
_start:
{
lean_object* v___x_5899_; 
v___x_5899_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg(v_mvarId_5888_, v_x_5889_, v___y_5890_, v___y_5891_, v___y_5892_, v___y_5893_, v___y_5894_, v___y_5895_, v___y_5896_, v___y_5897_);
return v___x_5899_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___boxed(lean_object* v_00_u03b1_5900_, lean_object* v_mvarId_5901_, lean_object* v_x_5902_, lean_object* v___y_5903_, lean_object* v___y_5904_, lean_object* v___y_5905_, lean_object* v___y_5906_, lean_object* v___y_5907_, lean_object* v___y_5908_, lean_object* v___y_5909_, lean_object* v___y_5910_, lean_object* v___y_5911_){
_start:
{
lean_object* v_res_5912_; 
v_res_5912_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2(v_00_u03b1_5900_, v_mvarId_5901_, v_x_5902_, v___y_5903_, v___y_5904_, v___y_5905_, v___y_5906_, v___y_5907_, v___y_5908_, v___y_5909_, v___y_5910_);
lean_dec(v___y_5910_);
lean_dec_ref(v___y_5909_);
lean_dec(v___y_5908_);
lean_dec_ref(v___y_5907_);
lean_dec(v___y_5906_);
lean_dec_ref(v___y_5905_);
lean_dec(v___y_5904_);
lean_dec_ref(v___y_5903_);
return v_res_5912_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___lam__0(lean_object* v_a_5913_, lean_object* v_pat_5914_, lean_object* v_a_5915_, lean_object* v___y_5916_, lean_object* v___y_5917_, lean_object* v___y_5918_, lean_object* v___y_5919_, lean_object* v___y_5920_, lean_object* v___y_5921_, lean_object* v___y_5922_, lean_object* v___y_5923_){
_start:
{
lean_object* v___x_5925_; 
v___x_5925_ = l_Lean_Elab_Tactic_RCases_rcases(v_a_5913_, v_pat_5914_, v_a_5915_, v___y_5918_, v___y_5919_, v___y_5920_, v___y_5921_, v___y_5922_, v___y_5923_);
if (lean_obj_tag(v___x_5925_) == 0)
{
lean_object* v_a_5926_; lean_object* v___x_5927_; 
v_a_5926_ = lean_ctor_get(v___x_5925_, 0);
lean_inc(v_a_5926_);
lean_dec_ref_known(v___x_5925_, 1);
v___x_5927_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_a_5926_, v___y_5917_, v___y_5920_, v___y_5921_, v___y_5922_, v___y_5923_);
return v___x_5927_;
}
else
{
lean_object* v_a_5928_; lean_object* v___x_5930_; uint8_t v_isShared_5931_; uint8_t v_isSharedCheck_5935_; 
v_a_5928_ = lean_ctor_get(v___x_5925_, 0);
v_isSharedCheck_5935_ = !lean_is_exclusive(v___x_5925_);
if (v_isSharedCheck_5935_ == 0)
{
v___x_5930_ = v___x_5925_;
v_isShared_5931_ = v_isSharedCheck_5935_;
goto v_resetjp_5929_;
}
else
{
lean_inc(v_a_5928_);
lean_dec(v___x_5925_);
v___x_5930_ = lean_box(0);
v_isShared_5931_ = v_isSharedCheck_5935_;
goto v_resetjp_5929_;
}
v_resetjp_5929_:
{
lean_object* v___x_5933_; 
if (v_isShared_5931_ == 0)
{
v___x_5933_ = v___x_5930_;
goto v_reusejp_5932_;
}
else
{
lean_object* v_reuseFailAlloc_5934_; 
v_reuseFailAlloc_5934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5934_, 0, v_a_5928_);
v___x_5933_ = v_reuseFailAlloc_5934_;
goto v_reusejp_5932_;
}
v_reusejp_5932_:
{
return v___x_5933_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___lam__0___boxed(lean_object* v_a_5936_, lean_object* v_pat_5937_, lean_object* v_a_5938_, lean_object* v___y_5939_, lean_object* v___y_5940_, lean_object* v___y_5941_, lean_object* v___y_5942_, lean_object* v___y_5943_, lean_object* v___y_5944_, lean_object* v___y_5945_, lean_object* v___y_5946_, lean_object* v___y_5947_){
_start:
{
lean_object* v_res_5948_; 
v_res_5948_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___lam__0(v_a_5936_, v_pat_5937_, v_a_5938_, v___y_5939_, v___y_5940_, v___y_5941_, v___y_5942_, v___y_5943_, v___y_5944_, v___y_5945_, v___y_5946_);
lean_dec(v___y_5946_);
lean_dec_ref(v___y_5945_);
lean_dec(v___y_5944_);
lean_dec_ref(v___y_5943_);
lean_dec(v___y_5942_);
lean_dec_ref(v___y_5941_);
lean_dec(v___y_5940_);
lean_dec_ref(v___y_5939_);
return v_res_5948_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__1___redArg(size_t v_sz_5949_, size_t v_i_5950_, lean_object* v_bs_5951_, lean_object* v___y_5952_, lean_object* v___y_5953_, lean_object* v___y_5954_){
_start:
{
uint8_t v___x_5956_; 
v___x_5956_ = lean_usize_dec_lt(v_i_5950_, v_sz_5949_);
if (v___x_5956_ == 0)
{
lean_object* v___x_5957_; 
v___x_5957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5957_, 0, v_bs_5951_);
return v___x_5957_;
}
else
{
lean_object* v_v_5958_; lean_object* v___x_5959_; lean_object* v_bs_x27_5960_; lean_object* v___x_5961_; 
v_v_5958_ = lean_array_uget(v_bs_5951_, v_i_5950_);
v___x_5959_ = lean_unsigned_to_nat(0u);
v_bs_x27_5960_ = lean_array_uset(v_bs_5951_, v_i_5950_, v___x_5959_);
v___x_5961_ = l_Lean_Elab_Tactic_mkTargetView___redArg(v_v_5958_, v___y_5952_, v___y_5953_, v___y_5954_);
if (lean_obj_tag(v___x_5961_) == 0)
{
lean_object* v_a_5962_; lean_object* v_hIdent_x3f_5963_; lean_object* v_term_5964_; lean_object* v___x_5966_; uint8_t v_isShared_5967_; uint8_t v_isSharedCheck_5975_; 
v_a_5962_ = lean_ctor_get(v___x_5961_, 0);
lean_inc(v_a_5962_);
lean_dec_ref_known(v___x_5961_, 1);
v_hIdent_x3f_5963_ = lean_ctor_get(v_a_5962_, 0);
v_term_5964_ = lean_ctor_get(v_a_5962_, 1);
v_isSharedCheck_5975_ = !lean_is_exclusive(v_a_5962_);
if (v_isSharedCheck_5975_ == 0)
{
v___x_5966_ = v_a_5962_;
v_isShared_5967_ = v_isSharedCheck_5975_;
goto v_resetjp_5965_;
}
else
{
lean_inc(v_term_5964_);
lean_inc(v_hIdent_x3f_5963_);
lean_dec(v_a_5962_);
v___x_5966_ = lean_box(0);
v_isShared_5967_ = v_isSharedCheck_5975_;
goto v_resetjp_5965_;
}
v_resetjp_5965_:
{
lean_object* v___x_5969_; 
if (v_isShared_5967_ == 0)
{
v___x_5969_ = v___x_5966_;
goto v_reusejp_5968_;
}
else
{
lean_object* v_reuseFailAlloc_5974_; 
v_reuseFailAlloc_5974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5974_, 0, v_hIdent_x3f_5963_);
lean_ctor_set(v_reuseFailAlloc_5974_, 1, v_term_5964_);
v___x_5969_ = v_reuseFailAlloc_5974_;
goto v_reusejp_5968_;
}
v_reusejp_5968_:
{
size_t v___x_5970_; size_t v___x_5971_; lean_object* v___x_5972_; 
v___x_5970_ = ((size_t)1ULL);
v___x_5971_ = lean_usize_add(v_i_5950_, v___x_5970_);
v___x_5972_ = lean_array_uset(v_bs_x27_5960_, v_i_5950_, v___x_5969_);
v_i_5950_ = v___x_5971_;
v_bs_5951_ = v___x_5972_;
goto _start;
}
}
}
else
{
lean_object* v_a_5976_; lean_object* v___x_5978_; uint8_t v_isShared_5979_; uint8_t v_isSharedCheck_5983_; 
lean_dec_ref(v_bs_x27_5960_);
v_a_5976_ = lean_ctor_get(v___x_5961_, 0);
v_isSharedCheck_5983_ = !lean_is_exclusive(v___x_5961_);
if (v_isSharedCheck_5983_ == 0)
{
v___x_5978_ = v___x_5961_;
v_isShared_5979_ = v_isSharedCheck_5983_;
goto v_resetjp_5977_;
}
else
{
lean_inc(v_a_5976_);
lean_dec(v___x_5961_);
v___x_5978_ = lean_box(0);
v_isShared_5979_ = v_isSharedCheck_5983_;
goto v_resetjp_5977_;
}
v_resetjp_5977_:
{
lean_object* v___x_5981_; 
if (v_isShared_5979_ == 0)
{
v___x_5981_ = v___x_5978_;
goto v_reusejp_5980_;
}
else
{
lean_object* v_reuseFailAlloc_5982_; 
v_reuseFailAlloc_5982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5982_, 0, v_a_5976_);
v___x_5981_ = v_reuseFailAlloc_5982_;
goto v_reusejp_5980_;
}
v_reusejp_5980_:
{
return v___x_5981_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__1___redArg___boxed(lean_object* v_sz_5984_, lean_object* v_i_5985_, lean_object* v_bs_5986_, lean_object* v___y_5987_, lean_object* v___y_5988_, lean_object* v___y_5989_, lean_object* v___y_5990_){
_start:
{
size_t v_sz_boxed_5991_; size_t v_i_boxed_5992_; lean_object* v_res_5993_; 
v_sz_boxed_5991_ = lean_unbox_usize(v_sz_5984_);
lean_dec(v_sz_5984_);
v_i_boxed_5992_ = lean_unbox_usize(v_i_5985_);
lean_dec(v_i_5985_);
v_res_5993_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__1___redArg(v_sz_boxed_5991_, v_i_boxed_5992_, v_bs_5986_, v___y_5987_, v___y_5988_, v___y_5989_);
lean_dec(v___y_5989_);
lean_dec_ref(v___y_5988_);
lean_dec_ref(v___y_5987_);
return v_res_5993_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases(lean_object* v_stx_6000_, lean_object* v___y_6001_, lean_object* v___y_6002_, lean_object* v___y_6003_, lean_object* v___y_6004_, lean_object* v___y_6005_, lean_object* v___y_6006_, lean_object* v___y_6007_, lean_object* v___y_6008_){
_start:
{
lean_object* v___y_6011_; lean_object* v_pat_6012_; lean_object* v___y_6013_; lean_object* v___y_6014_; lean_object* v___y_6015_; lean_object* v___y_6016_; lean_object* v___y_6017_; lean_object* v___y_6018_; lean_object* v___y_6019_; lean_object* v___y_6020_; lean_object* v___x_6046_; uint8_t v___x_6047_; 
v___x_6046_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___closed__1));
lean_inc(v_stx_6000_);
v___x_6047_ = l_Lean_Syntax_isOfKind(v_stx_6000_, v___x_6046_);
if (v___x_6047_ == 0)
{
lean_object* v___x_6048_; 
lean_dec(v_stx_6000_);
v___x_6048_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___redArg();
return v___x_6048_;
}
else
{
lean_object* v___x_6049_; lean_object* v___x_6050_; lean_object* v___x_6051_; lean_object* v___x_6052_; uint8_t v___x_6053_; 
v___x_6049_ = lean_unsigned_to_nat(1u);
v___x_6050_ = l_Lean_Syntax_getArg(v_stx_6000_, v___x_6049_);
v___x_6051_ = lean_unsigned_to_nat(2u);
v___x_6052_ = l_Lean_Syntax_getArg(v_stx_6000_, v___x_6051_);
v___x_6053_ = l_Lean_Syntax_isNone(v___x_6052_);
if (v___x_6053_ == 0)
{
uint8_t v___x_6054_; 
lean_dec(v_stx_6000_);
lean_inc(v___x_6052_);
v___x_6054_ = l_Lean_Syntax_matchesNull(v___x_6052_, v___x_6051_);
if (v___x_6054_ == 0)
{
lean_object* v___x_6055_; 
lean_dec(v___x_6052_);
lean_dec(v___x_6050_);
v___x_6055_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___redArg();
return v___x_6055_;
}
else
{
lean_object* v_pat_x3f_6056_; lean_object* v_tgts_6057_; lean_object* v___x_6058_; 
v_pat_x3f_6056_ = l_Lean_Syntax_getArg(v___x_6052_, v___x_6049_);
lean_dec(v___x_6052_);
v_tgts_6057_ = l_Lean_Syntax_getArgs(v___x_6050_);
lean_dec(v___x_6050_);
v___x_6058_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse(v_pat_x3f_6056_, v___y_6005_, v___y_6006_, v___y_6007_, v___y_6008_);
if (lean_obj_tag(v___x_6058_) == 0)
{
lean_object* v_a_6059_; 
v_a_6059_ = lean_ctor_get(v___x_6058_, 0);
lean_inc(v_a_6059_);
lean_dec_ref_known(v___x_6058_, 1);
v___y_6011_ = v_tgts_6057_;
v_pat_6012_ = v_a_6059_;
v___y_6013_ = v___y_6001_;
v___y_6014_ = v___y_6002_;
v___y_6015_ = v___y_6003_;
v___y_6016_ = v___y_6004_;
v___y_6017_ = v___y_6005_;
v___y_6018_ = v___y_6006_;
v___y_6019_ = v___y_6007_;
v___y_6020_ = v___y_6008_;
goto v___jp_6010_;
}
else
{
lean_object* v_a_6060_; lean_object* v___x_6062_; uint8_t v_isShared_6063_; uint8_t v_isSharedCheck_6067_; 
lean_dec_ref(v_tgts_6057_);
v_a_6060_ = lean_ctor_get(v___x_6058_, 0);
v_isSharedCheck_6067_ = !lean_is_exclusive(v___x_6058_);
if (v_isSharedCheck_6067_ == 0)
{
v___x_6062_ = v___x_6058_;
v_isShared_6063_ = v_isSharedCheck_6067_;
goto v_resetjp_6061_;
}
else
{
lean_inc(v_a_6060_);
lean_dec(v___x_6058_);
v___x_6062_ = lean_box(0);
v_isShared_6063_ = v_isSharedCheck_6067_;
goto v_resetjp_6061_;
}
v_resetjp_6061_:
{
lean_object* v___x_6065_; 
if (v_isShared_6063_ == 0)
{
v___x_6065_ = v___x_6062_;
goto v_reusejp_6064_;
}
else
{
lean_object* v_reuseFailAlloc_6066_; 
v_reuseFailAlloc_6066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6066_, 0, v_a_6060_);
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
}
else
{
lean_object* v___x_6068_; lean_object* v_tk_6069_; lean_object* v_tgts_6070_; lean_object* v___x_6071_; lean_object* v___x_6072_; 
lean_dec(v___x_6052_);
v___x_6068_ = lean_unsigned_to_nat(0u);
v_tk_6069_ = l_Lean_Syntax_getArg(v_stx_6000_, v___x_6068_);
lean_dec(v_stx_6000_);
v_tgts_6070_ = l_Lean_Syntax_getArgs(v___x_6050_);
lean_dec(v___x_6050_);
v___x_6071_ = lean_box(0);
v___x_6072_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6072_, 0, v_tk_6069_);
lean_ctor_set(v___x_6072_, 1, v___x_6071_);
v___y_6011_ = v_tgts_6070_;
v_pat_6012_ = v___x_6072_;
v___y_6013_ = v___y_6001_;
v___y_6014_ = v___y_6002_;
v___y_6015_ = v___y_6003_;
v___y_6016_ = v___y_6004_;
v___y_6017_ = v___y_6005_;
v___y_6018_ = v___y_6006_;
v___y_6019_ = v___y_6007_;
v___y_6020_ = v___y_6008_;
goto v___jp_6010_;
}
}
v___jp_6010_:
{
lean_object* v___x_6021_; size_t v_sz_6022_; size_t v___x_6023_; lean_object* v___x_6024_; 
v___x_6021_ = l_Lean_Syntax_TSepArray_getElems___redArg(v___y_6011_);
lean_dec_ref(v___y_6011_);
v_sz_6022_ = lean_array_size(v___x_6021_);
v___x_6023_ = ((size_t)0ULL);
v___x_6024_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__1___redArg(v_sz_6022_, v___x_6023_, v___x_6021_, v___y_6017_, v___y_6019_, v___y_6020_);
if (lean_obj_tag(v___x_6024_) == 0)
{
lean_object* v_a_6025_; lean_object* v___x_6026_; 
v_a_6025_ = lean_ctor_get(v___x_6024_, 0);
lean_inc(v_a_6025_);
lean_dec_ref_known(v___x_6024_, 1);
v___x_6026_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_6014_, v___y_6017_, v___y_6018_, v___y_6019_, v___y_6020_);
if (lean_obj_tag(v___x_6026_) == 0)
{
lean_object* v_a_6027_; lean_object* v___f_6028_; lean_object* v___x_6029_; 
v_a_6027_ = lean_ctor_get(v___x_6026_, 0);
lean_inc_n(v_a_6027_, 2);
lean_dec_ref_known(v___x_6026_, 1);
v___f_6028_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___lam__0___boxed), 12, 3);
lean_closure_set(v___f_6028_, 0, v_a_6025_);
lean_closure_set(v___f_6028_, 1, v_pat_6012_);
lean_closure_set(v___f_6028_, 2, v_a_6027_);
v___x_6029_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg(v_a_6027_, v___f_6028_, v___y_6013_, v___y_6014_, v___y_6015_, v___y_6016_, v___y_6017_, v___y_6018_, v___y_6019_, v___y_6020_);
return v___x_6029_;
}
else
{
lean_object* v_a_6030_; lean_object* v___x_6032_; uint8_t v_isShared_6033_; uint8_t v_isSharedCheck_6037_; 
lean_dec(v_a_6025_);
lean_dec_ref(v_pat_6012_);
v_a_6030_ = lean_ctor_get(v___x_6026_, 0);
v_isSharedCheck_6037_ = !lean_is_exclusive(v___x_6026_);
if (v_isSharedCheck_6037_ == 0)
{
v___x_6032_ = v___x_6026_;
v_isShared_6033_ = v_isSharedCheck_6037_;
goto v_resetjp_6031_;
}
else
{
lean_inc(v_a_6030_);
lean_dec(v___x_6026_);
v___x_6032_ = lean_box(0);
v_isShared_6033_ = v_isSharedCheck_6037_;
goto v_resetjp_6031_;
}
v_resetjp_6031_:
{
lean_object* v___x_6035_; 
if (v_isShared_6033_ == 0)
{
v___x_6035_ = v___x_6032_;
goto v_reusejp_6034_;
}
else
{
lean_object* v_reuseFailAlloc_6036_; 
v_reuseFailAlloc_6036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6036_, 0, v_a_6030_);
v___x_6035_ = v_reuseFailAlloc_6036_;
goto v_reusejp_6034_;
}
v_reusejp_6034_:
{
return v___x_6035_;
}
}
}
}
else
{
lean_object* v_a_6038_; lean_object* v___x_6040_; uint8_t v_isShared_6041_; uint8_t v_isSharedCheck_6045_; 
lean_dec_ref(v_pat_6012_);
v_a_6038_ = lean_ctor_get(v___x_6024_, 0);
v_isSharedCheck_6045_ = !lean_is_exclusive(v___x_6024_);
if (v_isSharedCheck_6045_ == 0)
{
v___x_6040_ = v___x_6024_;
v_isShared_6041_ = v_isSharedCheck_6045_;
goto v_resetjp_6039_;
}
else
{
lean_inc(v_a_6038_);
lean_dec(v___x_6024_);
v___x_6040_ = lean_box(0);
v_isShared_6041_ = v_isSharedCheck_6045_;
goto v_resetjp_6039_;
}
v_resetjp_6039_:
{
lean_object* v___x_6043_; 
if (v_isShared_6041_ == 0)
{
v___x_6043_ = v___x_6040_;
goto v_reusejp_6042_;
}
else
{
lean_object* v_reuseFailAlloc_6044_; 
v_reuseFailAlloc_6044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6044_, 0, v_a_6038_);
v___x_6043_ = v_reuseFailAlloc_6044_;
goto v_reusejp_6042_;
}
v_reusejp_6042_:
{
return v___x_6043_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___boxed(lean_object* v_stx_6073_, lean_object* v___y_6074_, lean_object* v___y_6075_, lean_object* v___y_6076_, lean_object* v___y_6077_, lean_object* v___y_6078_, lean_object* v___y_6079_, lean_object* v___y_6080_, lean_object* v___y_6081_, lean_object* v___y_6082_){
_start:
{
lean_object* v_res_6083_; 
v_res_6083_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases(v_stx_6073_, v___y_6074_, v___y_6075_, v___y_6076_, v___y_6077_, v___y_6078_, v___y_6079_, v___y_6080_, v___y_6081_);
lean_dec(v___y_6081_);
lean_dec_ref(v___y_6080_);
lean_dec(v___y_6079_);
lean_dec_ref(v___y_6078_);
lean_dec(v___y_6077_);
lean_dec_ref(v___y_6076_);
lean_dec(v___y_6075_);
lean_dec_ref(v___y_6074_);
return v_res_6083_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__1(size_t v_sz_6084_, size_t v_i_6085_, lean_object* v_bs_6086_, lean_object* v___y_6087_, lean_object* v___y_6088_, lean_object* v___y_6089_, lean_object* v___y_6090_, lean_object* v___y_6091_, lean_object* v___y_6092_, lean_object* v___y_6093_, lean_object* v___y_6094_){
_start:
{
lean_object* v___x_6096_; 
v___x_6096_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__1___redArg(v_sz_6084_, v_i_6085_, v_bs_6086_, v___y_6091_, v___y_6093_, v___y_6094_);
return v___x_6096_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__1___boxed(lean_object* v_sz_6097_, lean_object* v_i_6098_, lean_object* v_bs_6099_, lean_object* v___y_6100_, lean_object* v___y_6101_, lean_object* v___y_6102_, lean_object* v___y_6103_, lean_object* v___y_6104_, lean_object* v___y_6105_, lean_object* v___y_6106_, lean_object* v___y_6107_, lean_object* v___y_6108_){
_start:
{
size_t v_sz_boxed_6109_; size_t v_i_boxed_6110_; lean_object* v_res_6111_; 
v_sz_boxed_6109_ = lean_unbox_usize(v_sz_6097_);
lean_dec(v_sz_6097_);
v_i_boxed_6110_ = lean_unbox_usize(v_i_6098_);
lean_dec(v_i_6098_);
v_res_6111_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__1(v_sz_boxed_6109_, v_i_boxed_6110_, v_bs_6099_, v___y_6100_, v___y_6101_, v___y_6102_, v___y_6103_, v___y_6104_, v___y_6105_, v___y_6106_, v___y_6107_);
lean_dec(v___y_6107_);
lean_dec_ref(v___y_6106_);
lean_dec(v___y_6105_);
lean_dec_ref(v___y_6104_);
lean_dec(v___y_6103_);
lean_dec_ref(v___y_6102_);
lean_dec(v___y_6101_);
lean_dec_ref(v___y_6100_);
return v_res_6111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1(){
_start:
{
lean_object* v___x_6148_; lean_object* v___x_6149_; lean_object* v___x_6150_; lean_object* v___x_6151_; lean_object* v___x_6152_; 
v___x_6148_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_6149_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___closed__1));
v___x_6150_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___closed__12));
v___x_6151_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___boxed), 10, 0);
v___x_6152_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_6148_, v___x_6149_, v___x_6150_, v___x_6151_);
return v___x_6152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1___boxed(lean_object* v___y_6153_){
_start:
{
lean_object* v_res_6154_; 
v_res_6154_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1();
return v_res_6154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___lam__0(lean_object* v___x_6155_, lean_object* v___x_6156_, lean_object* v_a_6157_, lean_object* v___y_6158_, lean_object* v___y_6159_, lean_object* v___y_6160_, lean_object* v___y_6161_, lean_object* v___y_6162_, lean_object* v___y_6163_, lean_object* v___y_6164_, lean_object* v___y_6165_){
_start:
{
lean_object* v___x_6167_; 
v___x_6167_ = l_Lean_Elab_Tactic_RCases_rcases(v___x_6155_, v___x_6156_, v_a_6157_, v___y_6160_, v___y_6161_, v___y_6162_, v___y_6163_, v___y_6164_, v___y_6165_);
if (lean_obj_tag(v___x_6167_) == 0)
{
lean_object* v_a_6168_; lean_object* v___x_6169_; 
v_a_6168_ = lean_ctor_get(v___x_6167_, 0);
lean_inc(v_a_6168_);
lean_dec_ref_known(v___x_6167_, 1);
v___x_6169_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_a_6168_, v___y_6159_, v___y_6162_, v___y_6163_, v___y_6164_, v___y_6165_);
return v___x_6169_;
}
else
{
lean_object* v_a_6170_; lean_object* v___x_6172_; uint8_t v_isShared_6173_; uint8_t v_isSharedCheck_6177_; 
v_a_6170_ = lean_ctor_get(v___x_6167_, 0);
v_isSharedCheck_6177_ = !lean_is_exclusive(v___x_6167_);
if (v_isSharedCheck_6177_ == 0)
{
v___x_6172_ = v___x_6167_;
v_isShared_6173_ = v_isSharedCheck_6177_;
goto v_resetjp_6171_;
}
else
{
lean_inc(v_a_6170_);
lean_dec(v___x_6167_);
v___x_6172_ = lean_box(0);
v_isShared_6173_ = v_isSharedCheck_6177_;
goto v_resetjp_6171_;
}
v_resetjp_6171_:
{
lean_object* v___x_6175_; 
if (v_isShared_6173_ == 0)
{
v___x_6175_ = v___x_6172_;
goto v_reusejp_6174_;
}
else
{
lean_object* v_reuseFailAlloc_6176_; 
v_reuseFailAlloc_6176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6176_, 0, v_a_6170_);
v___x_6175_ = v_reuseFailAlloc_6176_;
goto v_reusejp_6174_;
}
v_reusejp_6174_:
{
return v___x_6175_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___lam__0___boxed(lean_object* v___x_6178_, lean_object* v___x_6179_, lean_object* v_a_6180_, lean_object* v___y_6181_, lean_object* v___y_6182_, lean_object* v___y_6183_, lean_object* v___y_6184_, lean_object* v___y_6185_, lean_object* v___y_6186_, lean_object* v___y_6187_, lean_object* v___y_6188_, lean_object* v___y_6189_){
_start:
{
lean_object* v_res_6190_; 
v_res_6190_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___lam__0(v___x_6178_, v___x_6179_, v_a_6180_, v___y_6181_, v___y_6182_, v___y_6183_, v___y_6184_, v___y_6185_, v___y_6186_, v___y_6187_, v___y_6188_);
lean_dec(v___y_6188_);
lean_dec_ref(v___y_6187_);
lean_dec(v___y_6186_);
lean_dec_ref(v___y_6185_);
lean_dec(v___y_6184_);
lean_dec_ref(v___y_6183_);
lean_dec(v___y_6182_);
lean_dec_ref(v___y_6181_);
return v_res_6190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___lam__1(lean_object* v___y_6191_, lean_object* v_val_6192_, lean_object* v_a_6193_, lean_object* v___y_6194_, lean_object* v___y_6195_, lean_object* v___y_6196_, lean_object* v___y_6197_, lean_object* v___y_6198_, lean_object* v___y_6199_, lean_object* v___y_6200_, lean_object* v___y_6201_){
_start:
{
lean_object* v___x_6203_; 
v___x_6203_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_obtainNone(v___y_6191_, v_val_6192_, v_a_6193_, v___y_6196_, v___y_6197_, v___y_6198_, v___y_6199_, v___y_6200_, v___y_6201_);
if (lean_obj_tag(v___x_6203_) == 0)
{
lean_object* v_a_6204_; lean_object* v___x_6205_; 
v_a_6204_ = lean_ctor_get(v___x_6203_, 0);
lean_inc(v_a_6204_);
lean_dec_ref_known(v___x_6203_, 1);
v___x_6205_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_a_6204_, v___y_6195_, v___y_6198_, v___y_6199_, v___y_6200_, v___y_6201_);
return v___x_6205_;
}
else
{
lean_object* v_a_6206_; lean_object* v___x_6208_; uint8_t v_isShared_6209_; uint8_t v_isSharedCheck_6213_; 
v_a_6206_ = lean_ctor_get(v___x_6203_, 0);
v_isSharedCheck_6213_ = !lean_is_exclusive(v___x_6203_);
if (v_isSharedCheck_6213_ == 0)
{
v___x_6208_ = v___x_6203_;
v_isShared_6209_ = v_isSharedCheck_6213_;
goto v_resetjp_6207_;
}
else
{
lean_inc(v_a_6206_);
lean_dec(v___x_6203_);
v___x_6208_ = lean_box(0);
v_isShared_6209_ = v_isSharedCheck_6213_;
goto v_resetjp_6207_;
}
v_resetjp_6207_:
{
lean_object* v___x_6211_; 
if (v_isShared_6209_ == 0)
{
v___x_6211_ = v___x_6208_;
goto v_reusejp_6210_;
}
else
{
lean_object* v_reuseFailAlloc_6212_; 
v_reuseFailAlloc_6212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6212_, 0, v_a_6206_);
v___x_6211_ = v_reuseFailAlloc_6212_;
goto v_reusejp_6210_;
}
v_reusejp_6210_:
{
return v___x_6211_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___lam__1___boxed(lean_object* v___y_6214_, lean_object* v_val_6215_, lean_object* v_a_6216_, lean_object* v___y_6217_, lean_object* v___y_6218_, lean_object* v___y_6219_, lean_object* v___y_6220_, lean_object* v___y_6221_, lean_object* v___y_6222_, lean_object* v___y_6223_, lean_object* v___y_6224_, lean_object* v___y_6225_){
_start:
{
lean_object* v_res_6226_; 
v_res_6226_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___lam__1(v___y_6214_, v_val_6215_, v_a_6216_, v___y_6217_, v___y_6218_, v___y_6219_, v___y_6220_, v___y_6221_, v___y_6222_, v___y_6223_, v___y_6224_);
lean_dec(v___y_6224_);
lean_dec_ref(v___y_6223_);
lean_dec(v___y_6222_);
lean_dec_ref(v___y_6221_);
lean_dec(v___y_6220_);
lean_dec_ref(v___y_6219_);
lean_dec(v___y_6218_);
lean_dec_ref(v___y_6217_);
return v_res_6226_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__1___redArg(lean_object* v_msg_6227_, lean_object* v___y_6228_, lean_object* v___y_6229_, lean_object* v___y_6230_, lean_object* v___y_6231_){
_start:
{
lean_object* v_ref_6233_; lean_object* v___x_6234_; lean_object* v_a_6235_; lean_object* v___x_6237_; uint8_t v_isShared_6238_; uint8_t v_isSharedCheck_6243_; 
v_ref_6233_ = lean_ctor_get(v___y_6230_, 2);
v___x_6234_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_processConstructors_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__8_spec__9(v_msg_6227_, v___y_6228_, v___y_6229_, v___y_6230_, v___y_6231_);
v_a_6235_ = lean_ctor_get(v___x_6234_, 0);
v_isSharedCheck_6243_ = !lean_is_exclusive(v___x_6234_);
if (v_isSharedCheck_6243_ == 0)
{
v___x_6237_ = v___x_6234_;
v_isShared_6238_ = v_isSharedCheck_6243_;
goto v_resetjp_6236_;
}
else
{
lean_inc(v_a_6235_);
lean_dec(v___x_6234_);
v___x_6237_ = lean_box(0);
v_isShared_6238_ = v_isSharedCheck_6243_;
goto v_resetjp_6236_;
}
v_resetjp_6236_:
{
lean_object* v___x_6239_; lean_object* v___x_6241_; 
lean_inc(v_ref_6233_);
v___x_6239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6239_, 0, v_ref_6233_);
lean_ctor_set(v___x_6239_, 1, v_a_6235_);
if (v_isShared_6238_ == 0)
{
lean_ctor_set_tag(v___x_6237_, 1);
lean_ctor_set(v___x_6237_, 0, v___x_6239_);
v___x_6241_ = v___x_6237_;
goto v_reusejp_6240_;
}
else
{
lean_object* v_reuseFailAlloc_6242_; 
v_reuseFailAlloc_6242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6242_, 0, v___x_6239_);
v___x_6241_ = v_reuseFailAlloc_6242_;
goto v_reusejp_6240_;
}
v_reusejp_6240_:
{
return v___x_6241_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__1___redArg___boxed(lean_object* v_msg_6244_, lean_object* v___y_6245_, lean_object* v___y_6246_, lean_object* v___y_6247_, lean_object* v___y_6248_, lean_object* v___y_6249_){
_start:
{
lean_object* v_res_6250_; 
v_res_6250_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__1___redArg(v_msg_6244_, v___y_6245_, v___y_6246_, v___y_6247_, v___y_6248_);
lean_dec(v___y_6248_);
lean_dec_ref(v___y_6247_);
lean_dec(v___y_6246_);
lean_dec_ref(v___y_6245_);
return v_res_6250_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__0(size_t v_sz_6251_, size_t v_i_6252_, lean_object* v_bs_6253_){
_start:
{
uint8_t v___x_6254_; 
v___x_6254_ = lean_usize_dec_lt(v_i_6252_, v_sz_6251_);
if (v___x_6254_ == 0)
{
return v_bs_6253_;
}
else
{
lean_object* v_v_6255_; lean_object* v___x_6256_; lean_object* v_bs_x27_6257_; lean_object* v___x_6258_; lean_object* v___x_6259_; size_t v___x_6260_; size_t v___x_6261_; lean_object* v___x_6262_; 
v_v_6255_ = lean_array_uget(v_bs_6253_, v_i_6252_);
v___x_6256_ = lean_unsigned_to_nat(0u);
v_bs_x27_6257_ = lean_array_uset(v_bs_6253_, v_i_6252_, v___x_6256_);
v___x_6258_ = lean_box(0);
v___x_6259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6259_, 0, v___x_6258_);
lean_ctor_set(v___x_6259_, 1, v_v_6255_);
v___x_6260_ = ((size_t)1ULL);
v___x_6261_ = lean_usize_add(v_i_6252_, v___x_6260_);
v___x_6262_ = lean_array_uset(v_bs_x27_6257_, v_i_6252_, v___x_6259_);
v_i_6252_ = v___x_6261_;
v_bs_6253_ = v___x_6262_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__0___boxed(lean_object* v_sz_6264_, lean_object* v_i_6265_, lean_object* v_bs_6266_){
_start:
{
size_t v_sz_boxed_6267_; size_t v_i_boxed_6268_; lean_object* v_res_6269_; 
v_sz_boxed_6267_ = lean_unbox_usize(v_sz_6264_);
lean_dec(v_sz_6264_);
v_i_boxed_6268_ = lean_unbox_usize(v_i_6265_);
lean_dec(v_i_6265_);
v_res_6269_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__0(v_sz_boxed_6267_, v_i_boxed_6268_, v_bs_6266_);
return v_res_6269_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__5(void){
_start:
{
lean_object* v___x_6280_; lean_object* v___x_6281_; 
v___x_6280_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__4));
v___x_6281_ = l_Lean_stringToMessageData(v___x_6280_);
return v___x_6281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain(lean_object* v_stx_6282_, lean_object* v___y_6283_, lean_object* v___y_6284_, lean_object* v___y_6285_, lean_object* v___y_6286_, lean_object* v___y_6287_, lean_object* v___y_6288_, lean_object* v___y_6289_, lean_object* v___y_6290_){
_start:
{
lean_object* v___y_6293_; lean_object* v___y_6294_; lean_object* v___y_6295_; lean_object* v___y_6296_; lean_object* v___y_6297_; lean_object* v___y_6298_; lean_object* v___y_6299_; lean_object* v___y_6300_; lean_object* v___y_6301_; lean_object* v___y_6302_; lean_object* v___x_6315_; uint8_t v___x_6316_; 
v___x_6315_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__1));
lean_inc(v_stx_6282_);
v___x_6316_ = l_Lean_Syntax_isOfKind(v_stx_6282_, v___x_6315_);
if (v___x_6316_ == 0)
{
lean_object* v___x_6317_; 
lean_dec(v_stx_6282_);
v___x_6317_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___redArg();
return v___x_6317_;
}
else
{
lean_object* v___x_6318_; lean_object* v_tk_6319_; lean_object* v___y_6321_; lean_object* v___y_6322_; lean_object* v___y_6323_; lean_object* v___y_6324_; lean_object* v___y_6325_; lean_object* v___y_6326_; lean_object* v___y_6327_; lean_object* v___y_6328_; lean_object* v___y_6329_; lean_object* v___y_6330_; lean_object* v___y_6331_; lean_object* v___y_6350_; lean_object* v___y_6351_; lean_object* v___y_6352_; lean_object* v___y_6353_; lean_object* v___y_6354_; lean_object* v___y_6355_; lean_object* v___y_6356_; lean_object* v___y_6357_; lean_object* v___y_6358_; lean_object* v___y_6359_; lean_object* v_a_6360_; lean_object* v___y_6374_; lean_object* v___y_6375_; lean_object* v_val_x3f_6376_; lean_object* v___y_6377_; lean_object* v___y_6378_; lean_object* v___y_6379_; lean_object* v___y_6380_; lean_object* v___y_6381_; lean_object* v___y_6382_; lean_object* v___y_6383_; lean_object* v___y_6384_; lean_object* v___x_6404_; lean_object* v___y_6406_; lean_object* v___y_6407_; lean_object* v_ty_x3f_6408_; lean_object* v___y_6409_; lean_object* v___y_6410_; lean_object* v___y_6411_; lean_object* v___y_6412_; lean_object* v___y_6413_; lean_object* v___y_6414_; lean_object* v___y_6415_; lean_object* v___y_6416_; lean_object* v_pat_x3f_6427_; lean_object* v___y_6428_; lean_object* v___y_6429_; lean_object* v___y_6430_; lean_object* v___y_6431_; lean_object* v___y_6432_; lean_object* v___y_6433_; lean_object* v___y_6434_; lean_object* v___y_6435_; lean_object* v___x_6444_; uint8_t v___x_6445_; 
v___x_6318_ = lean_unsigned_to_nat(0u);
v_tk_6319_ = l_Lean_Syntax_getArg(v_stx_6282_, v___x_6318_);
v___x_6404_ = lean_unsigned_to_nat(1u);
v___x_6444_ = l_Lean_Syntax_getArg(v_stx_6282_, v___x_6404_);
v___x_6445_ = l_Lean_Syntax_isNone(v___x_6444_);
if (v___x_6445_ == 0)
{
uint8_t v___x_6446_; 
lean_inc(v___x_6444_);
v___x_6446_ = l_Lean_Syntax_matchesNull(v___x_6444_, v___x_6404_);
if (v___x_6446_ == 0)
{
lean_object* v___x_6447_; 
lean_dec(v___x_6444_);
lean_dec(v_tk_6319_);
lean_dec(v_stx_6282_);
v___x_6447_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___redArg();
return v___x_6447_;
}
else
{
lean_object* v_pat_x3f_6448_; 
v_pat_x3f_6448_ = l_Lean_Syntax_getArg(v___x_6444_, v___x_6318_);
lean_dec(v___x_6444_);
if (v___x_6445_ == 0)
{
lean_object* v___x_6451_; uint8_t v___x_6452_; 
v___x_6451_ = ((lean_object*)(l_Lean_Elab_Tactic_RCases_instCoeTSyntaxConsSyntaxNodeKindMkStr1NilMkStr4__lean___lam__0___closed__1));
lean_inc(v_pat_x3f_6448_);
v___x_6452_ = l_Lean_Syntax_isOfKind(v_pat_x3f_6448_, v___x_6451_);
if (v___x_6452_ == 0)
{
lean_object* v___x_6453_; 
lean_dec(v_pat_x3f_6448_);
lean_dec(v_tk_6319_);
lean_dec(v_stx_6282_);
v___x_6453_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___redArg();
return v___x_6453_;
}
else
{
goto v___jp_6449_;
}
}
else
{
goto v___jp_6449_;
}
v___jp_6449_:
{
lean_object* v___x_6450_; 
v___x_6450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6450_, 0, v_pat_x3f_6448_);
v_pat_x3f_6427_ = v___x_6450_;
v___y_6428_ = v___y_6283_;
v___y_6429_ = v___y_6284_;
v___y_6430_ = v___y_6285_;
v___y_6431_ = v___y_6286_;
v___y_6432_ = v___y_6287_;
v___y_6433_ = v___y_6288_;
v___y_6434_ = v___y_6289_;
v___y_6435_ = v___y_6290_;
goto v___jp_6426_;
}
}
}
else
{
lean_object* v___x_6454_; 
lean_dec(v___x_6444_);
v___x_6454_ = lean_box(0);
v_pat_x3f_6427_ = v___x_6454_;
v___y_6428_ = v___y_6283_;
v___y_6429_ = v___y_6284_;
v___y_6430_ = v___y_6285_;
v___y_6431_ = v___y_6286_;
v___y_6432_ = v___y_6287_;
v___y_6433_ = v___y_6288_;
v___y_6434_ = v___y_6289_;
v___y_6435_ = v___y_6290_;
goto v___jp_6426_;
}
v___jp_6320_:
{
lean_object* v___x_6332_; lean_object* v___x_6333_; size_t v_sz_6334_; size_t v___x_6335_; lean_object* v___x_6336_; lean_object* v___x_6337_; 
v___x_6332_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_typed_x3f(v_tk_6319_, v___y_6331_, v___y_6327_);
lean_dec(v___y_6327_);
v___x_6333_ = l_Lean_Syntax_TSepArray_getElems___redArg(v___y_6322_);
lean_dec_ref(v___y_6322_);
v_sz_6334_ = lean_array_size(v___x_6333_);
v___x_6335_ = ((size_t)0ULL);
v___x_6336_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__0(v_sz_6334_, v___x_6335_, v___x_6333_);
v___x_6337_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_6325_, v___y_6330_, v___y_6323_, v___y_6328_, v___y_6324_);
if (lean_obj_tag(v___x_6337_) == 0)
{
lean_object* v_a_6338_; lean_object* v___f_6339_; lean_object* v___x_6340_; 
v_a_6338_ = lean_ctor_get(v___x_6337_, 0);
lean_inc_n(v_a_6338_, 2);
lean_dec_ref_known(v___x_6337_, 1);
v___f_6339_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___lam__0___boxed), 12, 3);
lean_closure_set(v___f_6339_, 0, v___x_6336_);
lean_closure_set(v___f_6339_, 1, v___x_6332_);
lean_closure_set(v___f_6339_, 2, v_a_6338_);
v___x_6340_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg(v_a_6338_, v___f_6339_, v___y_6321_, v___y_6325_, v___y_6329_, v___y_6326_, v___y_6330_, v___y_6323_, v___y_6328_, v___y_6324_);
return v___x_6340_;
}
else
{
lean_object* v_a_6341_; lean_object* v___x_6343_; uint8_t v_isShared_6344_; uint8_t v_isSharedCheck_6348_; 
lean_dec_ref(v___x_6336_);
lean_dec_ref(v___x_6332_);
v_a_6341_ = lean_ctor_get(v___x_6337_, 0);
v_isSharedCheck_6348_ = !lean_is_exclusive(v___x_6337_);
if (v_isSharedCheck_6348_ == 0)
{
v___x_6343_ = v___x_6337_;
v_isShared_6344_ = v_isSharedCheck_6348_;
goto v_resetjp_6342_;
}
else
{
lean_inc(v_a_6341_);
lean_dec(v___x_6337_);
v___x_6343_ = lean_box(0);
v_isShared_6344_ = v_isSharedCheck_6348_;
goto v_resetjp_6342_;
}
v_resetjp_6342_:
{
lean_object* v___x_6346_; 
if (v_isShared_6344_ == 0)
{
v___x_6346_ = v___x_6343_;
goto v_reusejp_6345_;
}
else
{
lean_object* v_reuseFailAlloc_6347_; 
v_reuseFailAlloc_6347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6347_, 0, v_a_6341_);
v___x_6346_ = v_reuseFailAlloc_6347_;
goto v_reusejp_6345_;
}
v_reusejp_6345_:
{
return v___x_6346_;
}
}
}
}
v___jp_6349_:
{
if (lean_obj_tag(v___y_6351_) == 1)
{
if (lean_obj_tag(v_a_6360_) == 0)
{
lean_object* v_val_6361_; lean_object* v___x_6362_; lean_object* v___x_6363_; 
v_val_6361_ = lean_ctor_get(v___y_6351_, 0);
lean_inc(v_val_6361_);
lean_dec_ref_known(v___y_6351_, 1);
v___x_6362_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_instInhabited___closed__1));
lean_inc(v_tk_6319_);
v___x_6363_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6363_, 0, v_tk_6319_);
lean_ctor_set(v___x_6363_, 1, v___x_6362_);
v___y_6321_ = v___y_6350_;
v___y_6322_ = v_val_6361_;
v___y_6323_ = v___y_6352_;
v___y_6324_ = v___y_6353_;
v___y_6325_ = v___y_6354_;
v___y_6326_ = v___y_6355_;
v___y_6327_ = v___y_6356_;
v___y_6328_ = v___y_6357_;
v___y_6329_ = v___y_6358_;
v___y_6330_ = v___y_6359_;
v___y_6331_ = v___x_6363_;
goto v___jp_6320_;
}
else
{
lean_object* v_val_6364_; lean_object* v_val_6365_; 
v_val_6364_ = lean_ctor_get(v___y_6351_, 0);
lean_inc(v_val_6364_);
lean_dec_ref_known(v___y_6351_, 1);
v_val_6365_ = lean_ctor_get(v_a_6360_, 0);
lean_inc(v_val_6365_);
lean_dec_ref_known(v_a_6360_, 1);
v___y_6321_ = v___y_6350_;
v___y_6322_ = v_val_6364_;
v___y_6323_ = v___y_6352_;
v___y_6324_ = v___y_6353_;
v___y_6325_ = v___y_6354_;
v___y_6326_ = v___y_6355_;
v___y_6327_ = v___y_6356_;
v___y_6328_ = v___y_6357_;
v___y_6329_ = v___y_6358_;
v___y_6330_ = v___y_6359_;
v___y_6331_ = v_val_6365_;
goto v___jp_6320_;
}
}
else
{
lean_dec(v___y_6351_);
if (lean_obj_tag(v___y_6356_) == 1)
{
if (lean_obj_tag(v_a_6360_) == 0)
{
lean_object* v_val_6366_; lean_object* v___x_6367_; lean_object* v___x_6368_; 
v_val_6366_ = lean_ctor_get(v___y_6356_, 0);
lean_inc(v_val_6366_);
lean_dec_ref_known(v___y_6356_, 1);
v___x_6367_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__3));
v___x_6368_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6368_, 0, v_tk_6319_);
lean_ctor_set(v___x_6368_, 1, v___x_6367_);
v___y_6293_ = v_val_6366_;
v___y_6294_ = v___y_6350_;
v___y_6295_ = v___y_6352_;
v___y_6296_ = v___y_6353_;
v___y_6297_ = v___y_6354_;
v___y_6298_ = v___y_6355_;
v___y_6299_ = v___y_6357_;
v___y_6300_ = v___y_6358_;
v___y_6301_ = v___y_6359_;
v___y_6302_ = v___x_6368_;
goto v___jp_6292_;
}
else
{
lean_object* v_val_6369_; lean_object* v_val_6370_; 
lean_dec(v_tk_6319_);
v_val_6369_ = lean_ctor_get(v___y_6356_, 0);
lean_inc(v_val_6369_);
lean_dec_ref_known(v___y_6356_, 1);
v_val_6370_ = lean_ctor_get(v_a_6360_, 0);
lean_inc(v_val_6370_);
lean_dec_ref_known(v_a_6360_, 1);
v___y_6293_ = v_val_6369_;
v___y_6294_ = v___y_6350_;
v___y_6295_ = v___y_6352_;
v___y_6296_ = v___y_6353_;
v___y_6297_ = v___y_6354_;
v___y_6298_ = v___y_6355_;
v___y_6299_ = v___y_6357_;
v___y_6300_ = v___y_6358_;
v___y_6301_ = v___y_6359_;
v___y_6302_ = v_val_6370_;
goto v___jp_6292_;
}
}
else
{
lean_object* v___x_6371_; lean_object* v___x_6372_; 
lean_dec(v_a_6360_);
lean_dec(v___y_6356_);
lean_dec(v_tk_6319_);
v___x_6371_ = lean_obj_once(&l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__5, &l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__5_once, _init_l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__5);
v___x_6372_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__1___redArg(v___x_6371_, v___y_6359_, v___y_6352_, v___y_6357_, v___y_6353_);
return v___x_6372_;
}
}
}
v___jp_6373_:
{
if (lean_obj_tag(v___y_6375_) == 0)
{
lean_object* v___x_6385_; 
v___x_6385_ = lean_box(0);
v___y_6350_ = v___y_6377_;
v___y_6351_ = v_val_x3f_6376_;
v___y_6352_ = v___y_6382_;
v___y_6353_ = v___y_6384_;
v___y_6354_ = v___y_6378_;
v___y_6355_ = v___y_6380_;
v___y_6356_ = v___y_6374_;
v___y_6357_ = v___y_6383_;
v___y_6358_ = v___y_6379_;
v___y_6359_ = v___y_6381_;
v_a_6360_ = v___x_6385_;
goto v___jp_6349_;
}
else
{
lean_object* v_val_6386_; lean_object* v___x_6388_; uint8_t v_isShared_6389_; uint8_t v_isSharedCheck_6403_; 
v_val_6386_ = lean_ctor_get(v___y_6375_, 0);
v_isSharedCheck_6403_ = !lean_is_exclusive(v___y_6375_);
if (v_isSharedCheck_6403_ == 0)
{
v___x_6388_ = v___y_6375_;
v_isShared_6389_ = v_isSharedCheck_6403_;
goto v_resetjp_6387_;
}
else
{
lean_inc(v_val_6386_);
lean_dec(v___y_6375_);
v___x_6388_ = lean_box(0);
v_isShared_6389_ = v_isSharedCheck_6403_;
goto v_resetjp_6387_;
}
v_resetjp_6387_:
{
lean_object* v___x_6390_; 
v___x_6390_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_RCasesPatt_parse(v_val_6386_, v___y_6381_, v___y_6382_, v___y_6383_, v___y_6384_);
if (lean_obj_tag(v___x_6390_) == 0)
{
lean_object* v_a_6391_; lean_object* v___x_6393_; 
v_a_6391_ = lean_ctor_get(v___x_6390_, 0);
lean_inc(v_a_6391_);
lean_dec_ref_known(v___x_6390_, 1);
if (v_isShared_6389_ == 0)
{
lean_ctor_set(v___x_6388_, 0, v_a_6391_);
v___x_6393_ = v___x_6388_;
goto v_reusejp_6392_;
}
else
{
lean_object* v_reuseFailAlloc_6394_; 
v_reuseFailAlloc_6394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6394_, 0, v_a_6391_);
v___x_6393_ = v_reuseFailAlloc_6394_;
goto v_reusejp_6392_;
}
v_reusejp_6392_:
{
v___y_6350_ = v___y_6377_;
v___y_6351_ = v_val_x3f_6376_;
v___y_6352_ = v___y_6382_;
v___y_6353_ = v___y_6384_;
v___y_6354_ = v___y_6378_;
v___y_6355_ = v___y_6380_;
v___y_6356_ = v___y_6374_;
v___y_6357_ = v___y_6383_;
v___y_6358_ = v___y_6379_;
v___y_6359_ = v___y_6381_;
v_a_6360_ = v___x_6393_;
goto v___jp_6349_;
}
}
else
{
lean_object* v_a_6395_; lean_object* v___x_6397_; uint8_t v_isShared_6398_; uint8_t v_isSharedCheck_6402_; 
lean_del_object(v___x_6388_);
lean_dec(v_val_x3f_6376_);
lean_dec(v___y_6374_);
lean_dec(v_tk_6319_);
v_a_6395_ = lean_ctor_get(v___x_6390_, 0);
v_isSharedCheck_6402_ = !lean_is_exclusive(v___x_6390_);
if (v_isSharedCheck_6402_ == 0)
{
v___x_6397_ = v___x_6390_;
v_isShared_6398_ = v_isSharedCheck_6402_;
goto v_resetjp_6396_;
}
else
{
lean_inc(v_a_6395_);
lean_dec(v___x_6390_);
v___x_6397_ = lean_box(0);
v_isShared_6398_ = v_isSharedCheck_6402_;
goto v_resetjp_6396_;
}
v_resetjp_6396_:
{
lean_object* v___x_6400_; 
if (v_isShared_6398_ == 0)
{
v___x_6400_ = v___x_6397_;
goto v_reusejp_6399_;
}
else
{
lean_object* v_reuseFailAlloc_6401_; 
v_reuseFailAlloc_6401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6401_, 0, v_a_6395_);
v___x_6400_ = v_reuseFailAlloc_6401_;
goto v_reusejp_6399_;
}
v_reusejp_6399_:
{
return v___x_6400_;
}
}
}
}
}
}
v___jp_6405_:
{
lean_object* v___x_6417_; lean_object* v___x_6418_; uint8_t v___x_6419_; 
v___x_6417_ = lean_unsigned_to_nat(3u);
v___x_6418_ = l_Lean_Syntax_getArg(v_stx_6282_, v___x_6417_);
lean_dec(v_stx_6282_);
v___x_6419_ = l_Lean_Syntax_isNone(v___x_6418_);
if (v___x_6419_ == 0)
{
uint8_t v___x_6420_; 
lean_inc(v___x_6418_);
v___x_6420_ = l_Lean_Syntax_matchesNull(v___x_6418_, v___y_6406_);
if (v___x_6420_ == 0)
{
lean_object* v___x_6421_; 
lean_dec(v___x_6418_);
lean_dec(v_ty_x3f_6408_);
lean_dec(v___y_6407_);
lean_dec(v_tk_6319_);
v___x_6421_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___redArg();
return v___x_6421_;
}
else
{
lean_object* v___x_6422_; lean_object* v_val_x3f_6423_; lean_object* v___x_6424_; 
v___x_6422_ = l_Lean_Syntax_getArg(v___x_6418_, v___x_6404_);
lean_dec(v___x_6418_);
v_val_x3f_6423_ = l_Lean_Syntax_getArgs(v___x_6422_);
lean_dec(v___x_6422_);
v___x_6424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6424_, 0, v_val_x3f_6423_);
v___y_6374_ = v_ty_x3f_6408_;
v___y_6375_ = v___y_6407_;
v_val_x3f_6376_ = v___x_6424_;
v___y_6377_ = v___y_6409_;
v___y_6378_ = v___y_6410_;
v___y_6379_ = v___y_6411_;
v___y_6380_ = v___y_6412_;
v___y_6381_ = v___y_6413_;
v___y_6382_ = v___y_6414_;
v___y_6383_ = v___y_6415_;
v___y_6384_ = v___y_6416_;
goto v___jp_6373_;
}
}
else
{
lean_object* v___x_6425_; 
lean_dec(v___x_6418_);
v___x_6425_ = lean_box(0);
v___y_6374_ = v_ty_x3f_6408_;
v___y_6375_ = v___y_6407_;
v_val_x3f_6376_ = v___x_6425_;
v___y_6377_ = v___y_6409_;
v___y_6378_ = v___y_6410_;
v___y_6379_ = v___y_6411_;
v___y_6380_ = v___y_6412_;
v___y_6381_ = v___y_6413_;
v___y_6382_ = v___y_6414_;
v___y_6383_ = v___y_6415_;
v___y_6384_ = v___y_6416_;
goto v___jp_6373_;
}
}
v___jp_6426_:
{
lean_object* v___x_6436_; lean_object* v___x_6437_; uint8_t v___x_6438_; 
v___x_6436_ = lean_unsigned_to_nat(2u);
v___x_6437_ = l_Lean_Syntax_getArg(v_stx_6282_, v___x_6436_);
v___x_6438_ = l_Lean_Syntax_isNone(v___x_6437_);
if (v___x_6438_ == 0)
{
uint8_t v___x_6439_; 
lean_inc(v___x_6437_);
v___x_6439_ = l_Lean_Syntax_matchesNull(v___x_6437_, v___x_6436_);
if (v___x_6439_ == 0)
{
lean_object* v___x_6440_; 
lean_dec(v___x_6437_);
lean_dec(v_pat_x3f_6427_);
lean_dec(v_tk_6319_);
lean_dec(v_stx_6282_);
v___x_6440_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___redArg();
return v___x_6440_;
}
else
{
lean_object* v_ty_x3f_6441_; lean_object* v___x_6442_; 
v_ty_x3f_6441_ = l_Lean_Syntax_getArg(v___x_6437_, v___x_6404_);
lean_dec(v___x_6437_);
v___x_6442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6442_, 0, v_ty_x3f_6441_);
v___y_6406_ = v___x_6436_;
v___y_6407_ = v_pat_x3f_6427_;
v_ty_x3f_6408_ = v___x_6442_;
v___y_6409_ = v___y_6428_;
v___y_6410_ = v___y_6429_;
v___y_6411_ = v___y_6430_;
v___y_6412_ = v___y_6431_;
v___y_6413_ = v___y_6432_;
v___y_6414_ = v___y_6433_;
v___y_6415_ = v___y_6434_;
v___y_6416_ = v___y_6435_;
goto v___jp_6405_;
}
}
else
{
lean_object* v___x_6443_; 
lean_dec(v___x_6437_);
v___x_6443_ = lean_box(0);
v___y_6406_ = v___x_6436_;
v___y_6407_ = v_pat_x3f_6427_;
v_ty_x3f_6408_ = v___x_6443_;
v___y_6409_ = v___y_6428_;
v___y_6410_ = v___y_6429_;
v___y_6411_ = v___y_6430_;
v___y_6412_ = v___y_6431_;
v___y_6413_ = v___y_6432_;
v___y_6414_ = v___y_6433_;
v___y_6415_ = v___y_6434_;
v___y_6416_ = v___y_6435_;
goto v___jp_6405_;
}
}
}
v___jp_6292_:
{
lean_object* v___x_6303_; 
v___x_6303_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_6297_, v___y_6301_, v___y_6295_, v___y_6299_, v___y_6296_);
if (lean_obj_tag(v___x_6303_) == 0)
{
lean_object* v_a_6304_; lean_object* v___f_6305_; lean_object* v___x_6306_; 
v_a_6304_ = lean_ctor_get(v___x_6303_, 0);
lean_inc_n(v_a_6304_, 2);
lean_dec_ref_known(v___x_6303_, 1);
v___f_6305_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___lam__1___boxed), 12, 3);
lean_closure_set(v___f_6305_, 0, v___y_6302_);
lean_closure_set(v___f_6305_, 1, v___y_6293_);
lean_closure_set(v___f_6305_, 2, v_a_6304_);
v___x_6306_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg(v_a_6304_, v___f_6305_, v___y_6294_, v___y_6297_, v___y_6300_, v___y_6298_, v___y_6301_, v___y_6295_, v___y_6299_, v___y_6296_);
return v___x_6306_;
}
else
{
lean_object* v_a_6307_; lean_object* v___x_6309_; uint8_t v_isShared_6310_; uint8_t v_isSharedCheck_6314_; 
lean_dec_ref(v___y_6302_);
lean_dec(v___y_6293_);
v_a_6307_ = lean_ctor_get(v___x_6303_, 0);
v_isSharedCheck_6314_ = !lean_is_exclusive(v___x_6303_);
if (v_isSharedCheck_6314_ == 0)
{
v___x_6309_ = v___x_6303_;
v_isShared_6310_ = v_isSharedCheck_6314_;
goto v_resetjp_6308_;
}
else
{
lean_inc(v_a_6307_);
lean_dec(v___x_6303_);
v___x_6309_ = lean_box(0);
v_isShared_6310_ = v_isSharedCheck_6314_;
goto v_resetjp_6308_;
}
v_resetjp_6308_:
{
lean_object* v___x_6312_; 
if (v_isShared_6310_ == 0)
{
v___x_6312_ = v___x_6309_;
goto v_reusejp_6311_;
}
else
{
lean_object* v_reuseFailAlloc_6313_; 
v_reuseFailAlloc_6313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6313_, 0, v_a_6307_);
v___x_6312_ = v_reuseFailAlloc_6313_;
goto v_reusejp_6311_;
}
v_reusejp_6311_:
{
return v___x_6312_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___boxed(lean_object* v_stx_6455_, lean_object* v___y_6456_, lean_object* v___y_6457_, lean_object* v___y_6458_, lean_object* v___y_6459_, lean_object* v___y_6460_, lean_object* v___y_6461_, lean_object* v___y_6462_, lean_object* v___y_6463_, lean_object* v___y_6464_){
_start:
{
lean_object* v_res_6465_; 
v_res_6465_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain(v_stx_6455_, v___y_6456_, v___y_6457_, v___y_6458_, v___y_6459_, v___y_6460_, v___y_6461_, v___y_6462_, v___y_6463_);
lean_dec(v___y_6463_);
lean_dec_ref(v___y_6462_);
lean_dec(v___y_6461_);
lean_dec_ref(v___y_6460_);
lean_dec(v___y_6459_);
lean_dec_ref(v___y_6458_);
lean_dec(v___y_6457_);
lean_dec_ref(v___y_6456_);
return v_res_6465_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__1(lean_object* v_00_u03b1_6466_, lean_object* v_msg_6467_, lean_object* v___y_6468_, lean_object* v___y_6469_, lean_object* v___y_6470_, lean_object* v___y_6471_, lean_object* v___y_6472_, lean_object* v___y_6473_, lean_object* v___y_6474_, lean_object* v___y_6475_){
_start:
{
lean_object* v___x_6477_; 
v___x_6477_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__1___redArg(v_msg_6467_, v___y_6472_, v___y_6473_, v___y_6474_, v___y_6475_);
return v___x_6477_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__1___boxed(lean_object* v_00_u03b1_6478_, lean_object* v_msg_6479_, lean_object* v___y_6480_, lean_object* v___y_6481_, lean_object* v___y_6482_, lean_object* v___y_6483_, lean_object* v___y_6484_, lean_object* v___y_6485_, lean_object* v___y_6486_, lean_object* v___y_6487_, lean_object* v___y_6488_){
_start:
{
lean_object* v_res_6489_; 
v_res_6489_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain_spec__1(v_00_u03b1_6478_, v_msg_6479_, v___y_6480_, v___y_6481_, v___y_6482_, v___y_6483_, v___y_6484_, v___y_6485_, v___y_6486_, v___y_6487_);
lean_dec(v___y_6487_);
lean_dec_ref(v___y_6486_);
lean_dec(v___y_6485_);
lean_dec_ref(v___y_6484_);
lean_dec(v___y_6483_);
lean_dec_ref(v___y_6482_);
lean_dec(v___y_6481_);
lean_dec_ref(v___y_6480_);
return v_res_6489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain__1(){
_start:
{
lean_object* v___x_6495_; lean_object* v___x_6496_; lean_object* v___x_6497_; lean_object* v___x_6498_; lean_object* v___x_6499_; 
v___x_6495_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_6496_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___closed__1));
v___x_6497_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain__1___closed__1));
v___x_6498_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___boxed), 10, 0);
v___x_6499_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_6495_, v___x_6496_, v___x_6497_, v___x_6498_);
return v___x_6499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain__1___boxed(lean_object* v___y_6500_){
_start:
{
lean_object* v_res_6501_; 
v_res_6501_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain__1();
return v_res_6501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___lam__0(lean_object* v_pats_6502_, lean_object* v_ty_x3f_6503_, lean_object* v_a_6504_, lean_object* v___y_6505_, lean_object* v___y_6506_, lean_object* v___y_6507_, lean_object* v___y_6508_, lean_object* v___y_6509_, lean_object* v___y_6510_, lean_object* v___y_6511_, lean_object* v___y_6512_){
_start:
{
lean_object* v___x_6514_; 
v___x_6514_ = l_Lean_Elab_Tactic_RCases_rintro(v_pats_6502_, v_ty_x3f_6503_, v_a_6504_, v___y_6507_, v___y_6508_, v___y_6509_, v___y_6510_, v___y_6511_, v___y_6512_);
if (lean_obj_tag(v___x_6514_) == 0)
{
lean_object* v_a_6515_; lean_object* v___x_6516_; 
v_a_6515_ = lean_ctor_get(v___x_6514_, 0);
lean_inc(v_a_6515_);
lean_dec_ref_known(v___x_6514_, 1);
v___x_6516_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_a_6515_, v___y_6506_, v___y_6509_, v___y_6510_, v___y_6511_, v___y_6512_);
return v___x_6516_;
}
else
{
lean_object* v_a_6517_; lean_object* v___x_6519_; uint8_t v_isShared_6520_; uint8_t v_isSharedCheck_6524_; 
v_a_6517_ = lean_ctor_get(v___x_6514_, 0);
v_isSharedCheck_6524_ = !lean_is_exclusive(v___x_6514_);
if (v_isSharedCheck_6524_ == 0)
{
v___x_6519_ = v___x_6514_;
v_isShared_6520_ = v_isSharedCheck_6524_;
goto v_resetjp_6518_;
}
else
{
lean_inc(v_a_6517_);
lean_dec(v___x_6514_);
v___x_6519_ = lean_box(0);
v_isShared_6520_ = v_isSharedCheck_6524_;
goto v_resetjp_6518_;
}
v_resetjp_6518_:
{
lean_object* v___x_6522_; 
if (v_isShared_6520_ == 0)
{
v___x_6522_ = v___x_6519_;
goto v_reusejp_6521_;
}
else
{
lean_object* v_reuseFailAlloc_6523_; 
v_reuseFailAlloc_6523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6523_, 0, v_a_6517_);
v___x_6522_ = v_reuseFailAlloc_6523_;
goto v_reusejp_6521_;
}
v_reusejp_6521_:
{
return v___x_6522_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___lam__0___boxed(lean_object* v_pats_6525_, lean_object* v_ty_x3f_6526_, lean_object* v_a_6527_, lean_object* v___y_6528_, lean_object* v___y_6529_, lean_object* v___y_6530_, lean_object* v___y_6531_, lean_object* v___y_6532_, lean_object* v___y_6533_, lean_object* v___y_6534_, lean_object* v___y_6535_, lean_object* v___y_6536_){
_start:
{
lean_object* v_res_6537_; 
v_res_6537_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___lam__0(v_pats_6525_, v_ty_x3f_6526_, v_a_6527_, v___y_6528_, v___y_6529_, v___y_6530_, v___y_6531_, v___y_6532_, v___y_6533_, v___y_6534_, v___y_6535_);
lean_dec(v___y_6535_);
lean_dec_ref(v___y_6534_);
lean_dec(v___y_6533_);
lean_dec_ref(v___y_6532_);
lean_dec(v___y_6531_);
lean_dec_ref(v___y_6530_);
lean_dec(v___y_6529_);
lean_dec_ref(v___y_6528_);
return v_res_6537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro(lean_object* v_stx_6544_, lean_object* v___y_6545_, lean_object* v___y_6546_, lean_object* v___y_6547_, lean_object* v___y_6548_, lean_object* v___y_6549_, lean_object* v___y_6550_, lean_object* v___y_6551_, lean_object* v___y_6552_){
_start:
{
lean_object* v___x_6554_; uint8_t v___x_6555_; 
v___x_6554_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___closed__1));
lean_inc(v_stx_6544_);
v___x_6555_ = l_Lean_Syntax_isOfKind(v_stx_6544_, v___x_6554_);
if (v___x_6555_ == 0)
{
lean_object* v___x_6556_; 
lean_dec(v_stx_6544_);
v___x_6556_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___redArg();
return v___x_6556_;
}
else
{
lean_object* v___x_6557_; lean_object* v___x_6558_; lean_object* v_ty_x3f_6560_; lean_object* v___y_6561_; lean_object* v___y_6562_; lean_object* v___y_6563_; lean_object* v___y_6564_; lean_object* v___y_6565_; lean_object* v___y_6566_; lean_object* v___y_6567_; lean_object* v___y_6568_; lean_object* v___x_6582_; lean_object* v___x_6583_; uint8_t v___x_6584_; 
v___x_6557_ = lean_unsigned_to_nat(1u);
v___x_6558_ = l_Lean_Syntax_getArg(v_stx_6544_, v___x_6557_);
v___x_6582_ = lean_unsigned_to_nat(2u);
v___x_6583_ = l_Lean_Syntax_getArg(v_stx_6544_, v___x_6582_);
lean_dec(v_stx_6544_);
v___x_6584_ = l_Lean_Syntax_isNone(v___x_6583_);
if (v___x_6584_ == 0)
{
uint8_t v___x_6585_; 
lean_inc(v___x_6583_);
v___x_6585_ = l_Lean_Syntax_matchesNull(v___x_6583_, v___x_6582_);
if (v___x_6585_ == 0)
{
lean_object* v___x_6586_; 
lean_dec(v___x_6583_);
lean_dec(v___x_6558_);
v___x_6586_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__0___redArg();
return v___x_6586_;
}
else
{
lean_object* v_ty_x3f_6587_; lean_object* v___x_6588_; 
v_ty_x3f_6587_ = l_Lean_Syntax_getArg(v___x_6583_, v___x_6557_);
lean_dec(v___x_6583_);
v___x_6588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6588_, 0, v_ty_x3f_6587_);
v_ty_x3f_6560_ = v___x_6588_;
v___y_6561_ = v___y_6545_;
v___y_6562_ = v___y_6546_;
v___y_6563_ = v___y_6547_;
v___y_6564_ = v___y_6548_;
v___y_6565_ = v___y_6549_;
v___y_6566_ = v___y_6550_;
v___y_6567_ = v___y_6551_;
v___y_6568_ = v___y_6552_;
goto v___jp_6559_;
}
}
else
{
lean_object* v___x_6589_; 
lean_dec(v___x_6583_);
v___x_6589_ = lean_box(0);
v_ty_x3f_6560_ = v___x_6589_;
v___y_6561_ = v___y_6545_;
v___y_6562_ = v___y_6546_;
v___y_6563_ = v___y_6547_;
v___y_6564_ = v___y_6548_;
v___y_6565_ = v___y_6549_;
v___y_6566_ = v___y_6550_;
v___y_6567_ = v___y_6551_;
v___y_6568_ = v___y_6552_;
goto v___jp_6559_;
}
v___jp_6559_:
{
lean_object* v_pats_6569_; lean_object* v___x_6570_; 
v_pats_6569_ = l_Lean_Syntax_getArgs(v___x_6558_);
lean_dec(v___x_6558_);
v___x_6570_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_6562_, v___y_6565_, v___y_6566_, v___y_6567_, v___y_6568_);
if (lean_obj_tag(v___x_6570_) == 0)
{
lean_object* v_a_6571_; lean_object* v___f_6572_; lean_object* v___x_6573_; 
v_a_6571_ = lean_ctor_get(v___x_6570_, 0);
lean_inc_n(v_a_6571_, 2);
lean_dec_ref_known(v___x_6570_, 1);
v___f_6572_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___lam__0___boxed), 12, 3);
lean_closure_set(v___f_6572_, 0, v_pats_6569_);
lean_closure_set(v___f_6572_, 1, v_ty_x3f_6560_);
lean_closure_set(v___f_6572_, 2, v_a_6571_);
v___x_6573_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases_spec__2___redArg(v_a_6571_, v___f_6572_, v___y_6561_, v___y_6562_, v___y_6563_, v___y_6564_, v___y_6565_, v___y_6566_, v___y_6567_, v___y_6568_);
return v___x_6573_;
}
else
{
lean_object* v_a_6574_; lean_object* v___x_6576_; uint8_t v_isShared_6577_; uint8_t v_isSharedCheck_6581_; 
lean_dec_ref(v_pats_6569_);
lean_dec(v_ty_x3f_6560_);
v_a_6574_ = lean_ctor_get(v___x_6570_, 0);
v_isSharedCheck_6581_ = !lean_is_exclusive(v___x_6570_);
if (v_isSharedCheck_6581_ == 0)
{
v___x_6576_ = v___x_6570_;
v_isShared_6577_ = v_isSharedCheck_6581_;
goto v_resetjp_6575_;
}
else
{
lean_inc(v_a_6574_);
lean_dec(v___x_6570_);
v___x_6576_ = lean_box(0);
v_isShared_6577_ = v_isSharedCheck_6581_;
goto v_resetjp_6575_;
}
v_resetjp_6575_:
{
lean_object* v___x_6579_; 
if (v_isShared_6577_ == 0)
{
v___x_6579_ = v___x_6576_;
goto v_reusejp_6578_;
}
else
{
lean_object* v_reuseFailAlloc_6580_; 
v_reuseFailAlloc_6580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6580_, 0, v_a_6574_);
v___x_6579_ = v_reuseFailAlloc_6580_;
goto v_reusejp_6578_;
}
v_reusejp_6578_:
{
return v___x_6579_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___boxed(lean_object* v_stx_6590_, lean_object* v___y_6591_, lean_object* v___y_6592_, lean_object* v___y_6593_, lean_object* v___y_6594_, lean_object* v___y_6595_, lean_object* v___y_6596_, lean_object* v___y_6597_, lean_object* v___y_6598_, lean_object* v___y_6599_){
_start:
{
lean_object* v_res_6600_; 
v_res_6600_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro(v_stx_6590_, v___y_6591_, v___y_6592_, v___y_6593_, v___y_6594_, v___y_6595_, v___y_6596_, v___y_6597_, v___y_6598_);
lean_dec(v___y_6598_);
lean_dec_ref(v___y_6597_);
lean_dec(v___y_6596_);
lean_dec_ref(v___y_6595_);
lean_dec(v___y_6594_);
lean_dec_ref(v___y_6593_);
lean_dec(v___y_6592_);
lean_dec_ref(v___y_6591_);
return v_res_6600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro__1(){
_start:
{
lean_object* v___x_6606_; lean_object* v___x_6607_; lean_object* v___x_6608_; lean_object* v___x_6609_; lean_object* v___x_6610_; 
v___x_6606_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_6607_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___closed__1));
v___x_6608_ = ((lean_object*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro__1___closed__1));
v___x_6609_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___boxed), 10, 0);
v___x_6610_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_6606_, v___x_6607_, v___x_6608_, v___x_6609_);
return v___x_6610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro__1___boxed(lean_object* v___y_6611_){
_start:
{
lean_object* v_res_6612_; 
v_res_6612_ = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro__1();
return v_res_6612_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Induction(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Binders(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Generalize(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_RCases(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Induction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Binders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Generalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_initFn_00___x40_Lean_Elab_Tactic_RCases_1136698826____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Tactic_RCases_linter_unusedRCasesPattern = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Tactic_RCases_linter_unusedRCasesPattern);
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRCases__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalObtain__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro___regBuiltin___private_Lean_Elab_Tactic_RCases_0__Lean_Elab_Tactic_RCases_evalRIntro__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_RCases(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Induction(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Lean_Elab_Binders(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Generalize(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_RCases(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Induction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Binders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Generalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_RCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_RCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_RCases(builtin);
}
#ifdef __cplusplus
}
#endif
