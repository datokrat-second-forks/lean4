// Lean compiler output
// Module: Lean.Meta.Tactic.Subst
// Imports: public import Lean.Meta.AppBuilder public import Lean.Meta.MatchUtil public import Lean.Meta.Tactic.Assert public import Lean.Meta.Tactic.Replace
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchHEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqNDRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceLocalDeclDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_FVarSubst_empty;
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_substCore_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_substCore_spec__1___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_substCore_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_substCore___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_substCore___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_substCore___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_substCore___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_substCore___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_substCore___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_substCore___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "after intro rest "};
static const lean_object* l_Lean_Meta_substCore___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_substCore___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__1;
static const lean_string_object l_Lean_Meta_substCore___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Meta_substCore___lam__2___closed__2 = (const lean_object*)&l_Lean_Meta_substCore___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__3;
static const lean_string_object l_Lean_Meta_substCore___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.Tactic.Subst"};
static const lean_object* l_Lean_Meta_substCore___lam__2___closed__4 = (const lean_object*)&l_Lean_Meta_substCore___lam__2___closed__4_value;
static const lean_string_object l_Lean_Meta_substCore___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.substCore"};
static const lean_object* l_Lean_Meta_substCore___lam__2___closed__5 = (const lean_object*)&l_Lean_Meta_substCore___lam__2___closed__5_value;
static const lean_string_object l_Lean_Meta_substCore___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Meta_substCore___lam__2___closed__6 = (const lean_object*)&l_Lean_Meta_substCore___lam__2___closed__6_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__7;
static const lean_string_object l_Lean_Meta_substCore___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_h"};
static const lean_object* l_Lean_Meta_substCore___lam__2___closed__8 = (const lean_object*)&l_Lean_Meta_substCore___lam__2___closed__8_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_substCore___lam__2___closed__8_value),LEAN_SCALAR_PTR_LITERAL(32, 79, 207, 54, 208, 114, 216, 130)}};
static const lean_object* l_Lean_Meta_substCore___lam__2___closed__9 = (const lean_object*)&l_Lean_Meta_substCore___lam__2___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_substCore_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "subst"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(217, 29, 29, 32, 53, 17, 69, 167)}};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__1_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid equality proof, it is not of the form "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__2_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__3;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "\nafter WHNF, variable expected, but obtained"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__4 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__4_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__5;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "argument must be an equality proof"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__6 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__6_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__6_value)}};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__7 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__7_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__8;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__9;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "reverted variables "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__10 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__10_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__11;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "after intro2 "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__12 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__12_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__13;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "after revert "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__14 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__14_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__15;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__16 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__16_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__17;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "' occurs at"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__18 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__18_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__19;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__20 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__20_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__21 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__21_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__20_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__22_value_aux_0),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__21_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__22_value_aux_1),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(60, 247, 229, 3, 213, 123, 220, 1)}};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__22 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__22_value;
static const lean_closure_object l_Lean_Meta_substCore___lam__3___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_substCore___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__22_value)} };
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__23 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__23_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "substituting "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__24 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__24_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__25;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " (id: "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__26 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__26_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__27;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ") with "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__28 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__28_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__29;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "(x = t)"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__30 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__30_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "(t = x)"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__31 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__31_value;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_heqToEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l_Lean_Meta_heqToEq___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_heqToEq___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_heqToEq___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_heqToEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l_Lean_Meta_heqToEq___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_heqToEq___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_substVar___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "did not find equation for eliminating '"};
static const lean_object* l_Lean_Meta_substVar___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_substVar___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_substVar___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_substVar___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "variable '"};
static const lean_object* l_Lean_Meta_substVar___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_substVar___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_substVar___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_substVar___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "' is a let-declaration"};
static const lean_object* l_Lean_Meta_substVar___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_substVar___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_substVar___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_substEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "invalid equality proof, it is not of the form (x = t) or (t = x)"};
static const lean_object* l_Lean_Meta_substEq___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_substEq___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_substEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substEq___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "not an arrow type"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "variable "};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = " has forward dependencies"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__5;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "equality rhs not a free variable"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__7;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "not an equality"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__9;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__10 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__10_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__11 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__11_value;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "homo_ndrec"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__12 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__12_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_heqToEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(48, 43, 236, 51, 159, 219, 21, 78)}};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__13 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__13_value;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "homo_ndrec_symm"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__14 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__14_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_heqToEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__15_value_aux_0),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(50, 157, 119, 52, 76, 119, 237, 183)}};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__15 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__15_value;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "hetereogenenous equality isn't homogeneous"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__16 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__16_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__17;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ndrec"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__18 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__18_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__19_value_aux_0),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(115, 164, 251, 202, 217, 58, 77, 179)}};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__19 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__19_value;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ndrec_symm"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__20 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__20_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__21_value_aux_0),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__20_value),LEAN_SCALAR_PTR_LITERAL(71, 160, 179, 99, 219, 64, 47, 167)}};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__21 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__21_value;
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_introSubstEq___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "introSubstEq: now assigned\?"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_introSubstEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "introSubstEq"};
static const lean_object* l_Lean_Meta_introSubstEq___closed__0 = (const lean_object*)&l_Lean_Meta_introSubstEq___closed__0_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_introSubstEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(184, 191, 181, 66, 111, 91, 242, 60)}};
static const lean_object* l_Lean_Meta_introSubstEq___closed__1 = (const lean_object*)&l_Lean_Meta_introSubstEq___closed__1_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__2;
static const lean_string_object l_Lean_Meta_introSubstEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "introSubstEq falling back to intro\n"};
static const lean_object* l_Lean_Meta_introSubstEq___closed__3 = (const lean_object*)&l_Lean_Meta_introSubstEq___closed__3_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__4;
static const lean_string_object l_Lean_Meta_introSubstEq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Meta_introSubstEq___closed__5 = (const lean_object*)&l_Lean_Meta_introSubstEq___closed__5_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__20_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__21_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Subst"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 155, 87, 188, 107, 213, 207, 175)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(46, 207, 184, 108, 123, 194, 122, 15)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(87, 208, 80, 10, 197, 128, 95, 79)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__20_value),LEAN_SCALAR_PTR_LITERAL(7, 62, 56, 132, 111, 90, 85, 225)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(182, 144, 37, 101, 63, 174, 15, 237)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(135, 83, 107, 230, 66, 113, 62, 91)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(250, 5, 105, 244, 179, 13, 109, 21)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__20_value),LEAN_SCALAR_PTR_LITERAL(254, 30, 149, 183, 84, 179, 28, 215)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__21_value),LEAN_SCALAR_PTR_LITERAL(99, 160, 169, 64, 171, 126, 88, 158)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(131, 140, 20, 111, 56, 127, 145, 46)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1630641459) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(162, 248, 22, 106, 83, 230, 167, 13)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(141, 29, 223, 229, 152, 3, 25, 165)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(77, 203, 155, 156, 13, 176, 49, 33)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(224, 94, 43, 255, 16, 68, 129, 142)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_e_1_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v_cache_12_; lean_object* v_zetaDeltaFVarIds_13_; lean_object* v_postponed_14_; lean_object* v_diag_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = l_Lean_instantiateMVarsCore(v_mctx_7_, v_e_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_take(v___y_2_);
v_cache_12_ = lean_ctor_get(v___x_11_, 1);
v_zetaDeltaFVarIds_13_ = lean_ctor_get(v___x_11_, 2);
v_postponed_14_ = lean_ctor_get(v___x_11_, 3);
v_diag_15_ = lean_ctor_get(v___x_11_, 4);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_24_ == 0)
{
lean_object* v_unused_25_; 
v_unused_25_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_25_);
v___x_17_ = v___x_11_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_diag_15_);
lean_inc(v_postponed_14_);
lean_inc(v_zetaDeltaFVarIds_13_);
lean_inc(v_cache_12_);
lean_dec(v___x_11_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 0, v_snd_10_);
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_snd_10_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_cache_12_);
lean_ctor_set(v_reuseFailAlloc_23_, 2, v_zetaDeltaFVarIds_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 3, v_postponed_14_);
lean_ctor_set(v_reuseFailAlloc_23_, 4, v_diag_15_);
v___x_20_ = v_reuseFailAlloc_23_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_st_ref_set(v___y_2_, v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v_fst_9_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_e_30_, v___y_32_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___boxed(lean_object* v_e_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0(v_e_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__1(lean_object* v_msg_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_){
_start:
{
lean_object* v___f_51_; lean_object* v___x_28771__overap_52_; lean_object* v___x_53_; 
v___f_51_ = ((lean_object*)(l_panic___at___00Lean_Meta_substCore_spec__1___closed__0));
v___x_28771__overap_52_ = lean_panic_fn_borrowed(v___f_51_, v_msg_45_);
lean_inc(v___y_49_);
lean_inc_ref(v___y_48_);
lean_inc(v___y_47_);
lean_inc_ref(v___y_46_);
v___x_53_ = lean_apply_5(v___x_28771__overap_52_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, lean_box(0));
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__1___boxed(lean_object* v_msg_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_panic___at___00Lean_Meta_substCore_spec__1(v_msg_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
return v_res_60_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__0(lean_object* v_x_61_){
_start:
{
uint8_t v___x_62_; 
v___x_62_ = 0;
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__0___boxed(lean_object* v_x_63_){
_start:
{
uint8_t v_res_64_; lean_object* v_r_65_; 
v_res_64_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__0(v_x_63_);
lean_dec(v_x_63_);
v_r_65_ = lean_box(v_res_64_);
return v_r_65_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__1(lean_object* v_fvarId_66_, lean_object* v_x_67_){
_start:
{
uint8_t v___x_68_; 
v___x_68_ = l_Lean_instBEqFVarId_beq(v_fvarId_66_, v_x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__1___boxed(lean_object* v_fvarId_69_, lean_object* v_x_70_){
_start:
{
uint8_t v_res_71_; lean_object* v_r_72_; 
v_res_71_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__1(v_fvarId_69_, v_x_70_);
lean_dec(v_x_70_);
lean_dec(v_fvarId_69_);
v_r_72_ = lean_box(v_res_71_);
return v_r_72_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_74_ = lean_box(0);
v___x_75_ = lean_unsigned_to_nat(16u);
v___x_76_ = lean_mk_array(v___x_75_, v___x_74_);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__1, &l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__1);
v___x_78_ = lean_unsigned_to_nat(0u);
v___x_79_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_77_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(lean_object* v_e_80_, lean_object* v_fvarId_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___x_84_; uint8_t v_fst_86_; lean_object* v_mctx_87_; lean_object* v___y_105_; lean_object* v_mctx_110_; lean_object* v___f_111_; lean_object* v___f_112_; lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_84_ = lean_st_ref_get(v___y_82_);
v_mctx_110_ = lean_ctor_get(v___x_84_, 0);
lean_inc_ref_n(v_mctx_110_, 2);
lean_dec(v___x_84_);
v___f_111_ = ((lean_object*)(l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__0));
v___f_112_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_112_, 0, v_fvarId_81_);
v___x_113_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__2);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v_mctx_110_);
v___x_115_ = l_Lean_Expr_hasFVar(v_e_80_);
if (v___x_115_ == 0)
{
uint8_t v___x_116_; 
v___x_116_ = l_Lean_Expr_hasMVar(v_e_80_);
if (v___x_116_ == 0)
{
lean_dec_ref(v___x_114_);
lean_dec_ref(v___f_112_);
lean_dec_ref(v_e_80_);
v_fst_86_ = v___x_116_;
v_mctx_87_ = v_mctx_110_;
goto v___jp_85_;
}
else
{
lean_object* v___x_117_; 
lean_dec_ref(v_mctx_110_);
v___x_117_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_112_, v___f_111_, v_e_80_, v___x_114_);
v___y_105_ = v___x_117_;
goto v___jp_104_;
}
}
else
{
lean_object* v___x_118_; 
lean_dec_ref(v_mctx_110_);
v___x_118_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_112_, v___f_111_, v_e_80_, v___x_114_);
v___y_105_ = v___x_118_;
goto v___jp_104_;
}
v___jp_85_:
{
lean_object* v___x_88_; lean_object* v_cache_89_; lean_object* v_zetaDeltaFVarIds_90_; lean_object* v_postponed_91_; lean_object* v_diag_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_102_; 
v___x_88_ = lean_st_ref_take(v___y_82_);
v_cache_89_ = lean_ctor_get(v___x_88_, 1);
v_zetaDeltaFVarIds_90_ = lean_ctor_get(v___x_88_, 2);
v_postponed_91_ = lean_ctor_get(v___x_88_, 3);
v_diag_92_ = lean_ctor_get(v___x_88_, 4);
v_isSharedCheck_102_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_102_ == 0)
{
lean_object* v_unused_103_; 
v_unused_103_ = lean_ctor_get(v___x_88_, 0);
lean_dec(v_unused_103_);
v___x_94_ = v___x_88_;
v_isShared_95_ = v_isSharedCheck_102_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_diag_92_);
lean_inc(v_postponed_91_);
lean_inc(v_zetaDeltaFVarIds_90_);
lean_inc(v_cache_89_);
lean_dec(v___x_88_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_102_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 0, v_mctx_87_);
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_mctx_87_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v_cache_89_);
lean_ctor_set(v_reuseFailAlloc_101_, 2, v_zetaDeltaFVarIds_90_);
lean_ctor_set(v_reuseFailAlloc_101_, 3, v_postponed_91_);
lean_ctor_set(v_reuseFailAlloc_101_, 4, v_diag_92_);
v___x_97_ = v_reuseFailAlloc_101_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_98_ = lean_st_ref_set(v___y_82_, v___x_97_);
v___x_99_ = lean_box(v_fst_86_);
v___x_100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
return v___x_100_;
}
}
}
v___jp_104_:
{
lean_object* v_snd_106_; lean_object* v_fst_107_; lean_object* v_mctx_108_; uint8_t v___x_109_; 
v_snd_106_ = lean_ctor_get(v___y_105_, 1);
lean_inc(v_snd_106_);
v_fst_107_ = lean_ctor_get(v___y_105_, 0);
lean_inc(v_fst_107_);
lean_dec_ref(v___y_105_);
v_mctx_108_ = lean_ctor_get(v_snd_106_, 1);
lean_inc_ref(v_mctx_108_);
lean_dec(v_snd_106_);
v___x_109_ = lean_unbox(v_fst_107_);
lean_dec(v_fst_107_);
v_fst_86_ = v___x_109_;
v_mctx_87_ = v_mctx_108_;
goto v___jp_85_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___boxed(lean_object* v_e_119_, lean_object* v_fvarId_120_, lean_object* v___y_121_, lean_object* v___y_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_e_119_, v_fvarId_120_, v___y_121_);
lean_dec(v___y_121_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4(lean_object* v_e_124_, lean_object* v_fvarId_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_e_124_, v_fvarId_125_, v___y_127_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___boxed(lean_object* v_e_132_, lean_object* v_fvarId_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4(v_e_132_, v_fvarId_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(lean_object* v_mvarId_140_, lean_object* v_x_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_140_, v_x_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
v_a_148_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_147_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_147_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
v_a_156_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_147_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_147_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg___boxed(lean_object* v_mvarId_164_, lean_object* v_x_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_164_, v_x_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7(lean_object* v_00_u03b1_172_, lean_object* v_mvarId_173_, lean_object* v_x_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_173_, v_x_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___boxed(lean_object* v_00_u03b1_181_, lean_object* v_mvarId_182_, lean_object* v_x_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7(v_00_u03b1_181_, v_mvarId_182_, v_x_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_184_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0(lean_object* v___x_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_){
_start:
{
lean_object* v_options_199_; uint8_t v_hasTrace_200_; 
v_options_199_ = lean_ctor_get(v___y_196_, 2);
v_hasTrace_200_ = lean_ctor_get_uint8(v_options_199_, sizeof(void*)*1);
if (v_hasTrace_200_ == 0)
{
lean_object* v___x_201_; lean_object* v___x_202_; 
lean_dec(v___x_193_);
v___x_201_ = lean_box(v_hasTrace_200_);
v___x_202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
return v___x_202_;
}
else
{
lean_object* v_inheritedTraceOptions_203_; lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v_inheritedTraceOptions_203_ = lean_ctor_get(v___y_196_, 13);
v___x_204_ = ((lean_object*)(l_Lean_Meta_substCore___lam__0___closed__1));
v___x_205_ = l_Lean_Name_append(v___x_204_, v___x_193_);
v___x_206_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_203_, v_options_199_, v___x_205_);
lean_dec(v___x_205_);
v___x_207_ = lean_box(v___x_206_);
v___x_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
return v___x_208_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0___boxed(lean_object* v___x_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lean_Meta_substCore___lam__0(v___x_209_, v___y_210_, v___y_211_, v___y_212_, v___y_213_);
lean_dec(v___y_213_);
lean_dec_ref(v___y_212_);
lean_dec(v___y_211_);
lean_dec_ref(v___y_210_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1(lean_object* v_type_216_, lean_object* v___x_217_, lean_object* v___x_218_, lean_object* v___x_219_, uint8_t v___x_220_, uint8_t v___x_221_, lean_object* v_hAux_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v___x_228_; 
lean_inc_ref(v_hAux_222_);
v___x_228_ = l_Lean_Meta_mkEqSymm(v_hAux_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; uint8_t v___x_234_; lean_object* v___x_235_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_a_229_);
lean_dec_ref(v___x_228_);
v___x_230_ = l_Lean_Expr_replaceFVar(v_type_216_, v___x_217_, v_a_229_);
lean_dec(v_a_229_);
v___x_231_ = lean_mk_empty_array_with_capacity(v___x_218_);
v___x_232_ = lean_array_push(v___x_231_, v___x_219_);
v___x_233_ = lean_array_push(v___x_232_, v_hAux_222_);
v___x_234_ = 1;
v___x_235_ = l_Lean_Meta_mkLambdaFVars(v___x_233_, v___x_230_, v___x_220_, v___x_221_, v___x_220_, v___x_221_, v___x_234_, v___y_223_, v___y_224_, v___y_225_, v___y_226_);
lean_dec_ref(v___x_233_);
return v___x_235_;
}
else
{
lean_dec_ref(v_hAux_222_);
lean_dec_ref(v___x_219_);
lean_dec_ref(v___x_217_);
return v___x_228_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1___boxed(lean_object* v_type_236_, lean_object* v___x_237_, lean_object* v___x_238_, lean_object* v___x_239_, lean_object* v___x_240_, lean_object* v___x_241_, lean_object* v_hAux_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_){
_start:
{
uint8_t v___x_33170__boxed_248_; uint8_t v___x_33171__boxed_249_; lean_object* v_res_250_; 
v___x_33170__boxed_248_ = lean_unbox(v___x_240_);
v___x_33171__boxed_249_ = lean_unbox(v___x_241_);
v_res_250_ = l_Lean_Meta_substCore___lam__1(v_type_236_, v___x_237_, v___x_238_, v___x_239_, v___x_33170__boxed_248_, v___x_33171__boxed_249_, v_hAux_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_);
lean_dec(v___y_246_);
lean_dec_ref(v___y_245_);
lean_dec(v___y_244_);
lean_dec_ref(v___y_243_);
lean_dec(v___x_238_);
lean_dec_ref(v_type_236_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___lam__0(lean_object* v_k_251_, lean_object* v_b_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v___x_258_; 
lean_inc(v___y_256_);
lean_inc_ref(v___y_255_);
lean_inc(v___y_254_);
lean_inc_ref(v___y_253_);
v___x_258_ = lean_apply_6(v_k_251_, v_b_252_, v___y_253_, v___y_254_, v___y_255_, v___y_256_, lean_box(0));
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___lam__0___boxed(lean_object* v_k_259_, lean_object* v_b_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___lam__0(v_k_259_, v_b_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg(lean_object* v_name_267_, uint8_t v_bi_268_, lean_object* v_type_269_, lean_object* v_k_270_, uint8_t v_kind_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_){
_start:
{
lean_object* v___f_277_; lean_object* v___x_278_; 
v___f_277_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_277_, 0, v_k_270_);
v___x_278_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_267_, v_bi_268_, v_type_269_, v___f_277_, v_kind_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
v_a_279_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_278_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_278_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
v_a_287_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_278_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_278_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___boxed(lean_object* v_name_295_, lean_object* v_bi_296_, lean_object* v_type_297_, lean_object* v_k_298_, lean_object* v_kind_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
uint8_t v_bi_boxed_305_; uint8_t v_kind_boxed_306_; lean_object* v_res_307_; 
v_bi_boxed_305_ = lean_unbox(v_bi_296_);
v_kind_boxed_306_ = lean_unbox(v_kind_299_);
v_res_307_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg(v_name_295_, v_bi_boxed_305_, v_type_297_, v_k_298_, v_kind_boxed_306_, v___y_300_, v___y_301_, v___y_302_, v___y_303_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___redArg(lean_object* v_name_308_, lean_object* v_type_309_, lean_object* v_k_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
uint8_t v___x_316_; uint8_t v___x_317_; lean_object* v___x_318_; 
v___x_316_ = 0;
v___x_317_ = 0;
v___x_318_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg(v_name_308_, v___x_316_, v_type_309_, v_k_310_, v___x_317_, v___y_311_, v___y_312_, v___y_313_, v___y_314_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___redArg___boxed(lean_object* v_name_319_, lean_object* v_type_320_, lean_object* v_k_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___redArg(v_name_319_, v_type_320_, v_k_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___redArg(lean_object* v_fst_328_, lean_object* v_fst_329_, lean_object* v_n_330_, lean_object* v_i_331_, lean_object* v_a_332_){
_start:
{
lean_object* v_zero_334_; uint8_t v_isZero_335_; 
v_zero_334_ = lean_unsigned_to_nat(0u);
v_isZero_335_ = lean_nat_dec_eq(v_i_331_, v_zero_334_);
if (v_isZero_335_ == 1)
{
lean_object* v___x_336_; 
lean_dec(v_i_331_);
v___x_336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_336_, 0, v_a_332_);
return v___x_336_;
}
else
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v_one_339_; lean_object* v_n_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_337_ = lean_unsigned_to_nat(2u);
v___x_338_ = lean_box(0);
v_one_339_ = lean_unsigned_to_nat(1u);
v_n_340_ = lean_nat_sub(v_i_331_, v_one_339_);
lean_dec(v_i_331_);
v___x_341_ = lean_nat_sub(v_n_330_, v_n_340_);
v___x_342_ = lean_nat_sub(v___x_341_, v_one_339_);
lean_dec(v___x_341_);
v___x_343_ = lean_nat_add(v___x_342_, v___x_337_);
v___x_344_ = lean_array_get_borrowed(v___x_338_, v_fst_328_, v___x_343_);
lean_dec(v___x_343_);
v___x_345_ = lean_array_fget_borrowed(v_fst_329_, v___x_342_);
lean_dec(v___x_342_);
lean_inc(v___x_345_);
v___x_346_ = l_Lean_mkFVar(v___x_345_);
lean_inc(v___x_344_);
v___x_347_ = l_Lean_Meta_FVarSubst_insert(v_a_332_, v___x_344_, v___x_346_);
v_i_331_ = v_n_340_;
v_a_332_ = v___x_347_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___redArg___boxed(lean_object* v_fst_349_, lean_object* v_fst_350_, lean_object* v_n_351_, lean_object* v_i_352_, lean_object* v_a_353_, lean_object* v___y_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___redArg(v_fst_349_, v_fst_350_, v_n_351_, v_i_352_, v_a_353_);
lean_dec(v_n_351_);
lean_dec_ref(v_fst_350_);
lean_dec_ref(v_fst_349_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__3_spec__3(lean_object* v_msgData_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v___x_362_; lean_object* v_env_363_; lean_object* v___x_364_; lean_object* v_mctx_365_; lean_object* v_lctx_366_; lean_object* v_options_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_362_ = lean_st_ref_get(v___y_360_);
v_env_363_ = lean_ctor_get(v___x_362_, 0);
lean_inc_ref(v_env_363_);
lean_dec(v___x_362_);
v___x_364_ = lean_st_ref_get(v___y_358_);
v_mctx_365_ = lean_ctor_get(v___x_364_, 0);
lean_inc_ref(v_mctx_365_);
lean_dec(v___x_364_);
v_lctx_366_ = lean_ctor_get(v___y_357_, 2);
v_options_367_ = lean_ctor_get(v___y_359_, 2);
lean_inc_ref(v_options_367_);
lean_inc_ref(v_lctx_366_);
v___x_368_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_368_, 0, v_env_363_);
lean_ctor_set(v___x_368_, 1, v_mctx_365_);
lean_ctor_set(v___x_368_, 2, v_lctx_366_);
lean_ctor_set(v___x_368_, 3, v_options_367_);
v___x_369_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_368_);
lean_ctor_set(v___x_369_, 1, v_msgData_356_);
v___x_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__3_spec__3___boxed(lean_object* v_msgData_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__3_spec__3(v_msgData_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec(v___y_373_);
lean_dec_ref(v___y_372_);
return v_res_377_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__0(void){
_start:
{
lean_object* v___x_378_; double v___x_379_; 
v___x_378_ = lean_unsigned_to_nat(0u);
v___x_379_ = lean_float_of_nat(v___x_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(lean_object* v_cls_383_, lean_object* v_msg_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v_ref_390_; lean_object* v___x_391_; lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_436_; 
v_ref_390_ = lean_ctor_get(v___y_387_, 5);
v___x_391_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__3_spec__3(v_msg_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_);
v_a_392_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_436_ == 0)
{
v___x_394_ = v___x_391_;
v_isShared_395_ = v_isSharedCheck_436_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_391_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_436_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_396_; lean_object* v_traceState_397_; lean_object* v_env_398_; lean_object* v_nextMacroScope_399_; lean_object* v_ngen_400_; lean_object* v_auxDeclNGen_401_; lean_object* v_cache_402_; lean_object* v_messages_403_; lean_object* v_infoState_404_; lean_object* v_snapshotTasks_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_435_; 
v___x_396_ = lean_st_ref_take(v___y_388_);
v_traceState_397_ = lean_ctor_get(v___x_396_, 4);
v_env_398_ = lean_ctor_get(v___x_396_, 0);
v_nextMacroScope_399_ = lean_ctor_get(v___x_396_, 1);
v_ngen_400_ = lean_ctor_get(v___x_396_, 2);
v_auxDeclNGen_401_ = lean_ctor_get(v___x_396_, 3);
v_cache_402_ = lean_ctor_get(v___x_396_, 5);
v_messages_403_ = lean_ctor_get(v___x_396_, 6);
v_infoState_404_ = lean_ctor_get(v___x_396_, 7);
v_snapshotTasks_405_ = lean_ctor_get(v___x_396_, 8);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_435_ == 0)
{
v___x_407_ = v___x_396_;
v_isShared_408_ = v_isSharedCheck_435_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_snapshotTasks_405_);
lean_inc(v_infoState_404_);
lean_inc(v_messages_403_);
lean_inc(v_cache_402_);
lean_inc(v_traceState_397_);
lean_inc(v_auxDeclNGen_401_);
lean_inc(v_ngen_400_);
lean_inc(v_nextMacroScope_399_);
lean_inc(v_env_398_);
lean_dec(v___x_396_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_435_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
uint64_t v_tid_409_; lean_object* v_traces_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_434_; 
v_tid_409_ = lean_ctor_get_uint64(v_traceState_397_, sizeof(void*)*1);
v_traces_410_ = lean_ctor_get(v_traceState_397_, 0);
v_isSharedCheck_434_ = !lean_is_exclusive(v_traceState_397_);
if (v_isSharedCheck_434_ == 0)
{
v___x_412_ = v_traceState_397_;
v_isShared_413_ = v_isSharedCheck_434_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_traces_410_);
lean_dec(v_traceState_397_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_434_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_414_; double v___x_415_; uint8_t v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_424_; 
v___x_414_ = lean_box(0);
v___x_415_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__0, &l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__0);
v___x_416_ = 0;
v___x_417_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__1));
v___x_418_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_418_, 0, v_cls_383_);
lean_ctor_set(v___x_418_, 1, v___x_414_);
lean_ctor_set(v___x_418_, 2, v___x_417_);
lean_ctor_set_float(v___x_418_, sizeof(void*)*3, v___x_415_);
lean_ctor_set_float(v___x_418_, sizeof(void*)*3 + 8, v___x_415_);
lean_ctor_set_uint8(v___x_418_, sizeof(void*)*3 + 16, v___x_416_);
v___x_419_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__2));
v___x_420_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_420_, 0, v___x_418_);
lean_ctor_set(v___x_420_, 1, v_a_392_);
lean_ctor_set(v___x_420_, 2, v___x_419_);
lean_inc(v_ref_390_);
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, v_ref_390_);
lean_ctor_set(v___x_421_, 1, v___x_420_);
v___x_422_ = l_Lean_PersistentArray_push___redArg(v_traces_410_, v___x_421_);
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 0, v___x_422_);
v___x_424_ = v___x_412_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v___x_422_);
lean_ctor_set_uint64(v_reuseFailAlloc_433_, sizeof(void*)*1, v_tid_409_);
v___x_424_ = v_reuseFailAlloc_433_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
lean_object* v___x_426_; 
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 4, v___x_424_);
v___x_426_ = v___x_407_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_env_398_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v_nextMacroScope_399_);
lean_ctor_set(v_reuseFailAlloc_432_, 2, v_ngen_400_);
lean_ctor_set(v_reuseFailAlloc_432_, 3, v_auxDeclNGen_401_);
lean_ctor_set(v_reuseFailAlloc_432_, 4, v___x_424_);
lean_ctor_set(v_reuseFailAlloc_432_, 5, v_cache_402_);
lean_ctor_set(v_reuseFailAlloc_432_, 6, v_messages_403_);
lean_ctor_set(v_reuseFailAlloc_432_, 7, v_infoState_404_);
lean_ctor_set(v_reuseFailAlloc_432_, 8, v_snapshotTasks_405_);
v___x_426_ = v_reuseFailAlloc_432_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_430_; 
v___x_427_ = lean_st_ref_set(v___y_388_, v___x_426_);
v___x_428_ = lean_box(0);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 0, v___x_428_);
v___x_430_ = v___x_394_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v___x_428_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___boxed(lean_object* v_cls_437_, lean_object* v_msg_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(v_cls_437_, v_msg_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
lean_dec(v___y_442_);
lean_dec_ref(v___y_441_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13_spec__14___redArg(lean_object* v_x_445_, lean_object* v_x_446_, lean_object* v_x_447_, lean_object* v_x_448_){
_start:
{
lean_object* v_ks_449_; lean_object* v_vs_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_474_; 
v_ks_449_ = lean_ctor_get(v_x_445_, 0);
v_vs_450_ = lean_ctor_get(v_x_445_, 1);
v_isSharedCheck_474_ = !lean_is_exclusive(v_x_445_);
if (v_isSharedCheck_474_ == 0)
{
v___x_452_ = v_x_445_;
v_isShared_453_ = v_isSharedCheck_474_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_vs_450_);
lean_inc(v_ks_449_);
lean_dec(v_x_445_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_474_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_454_; uint8_t v___x_455_; 
v___x_454_ = lean_array_get_size(v_ks_449_);
v___x_455_ = lean_nat_dec_lt(v_x_446_, v___x_454_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_459_; 
lean_dec(v_x_446_);
v___x_456_ = lean_array_push(v_ks_449_, v_x_447_);
v___x_457_ = lean_array_push(v_vs_450_, v_x_448_);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 1, v___x_457_);
lean_ctor_set(v___x_452_, 0, v___x_456_);
v___x_459_ = v___x_452_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v___x_456_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v___x_457_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
else
{
lean_object* v_k_x27_461_; uint8_t v___x_462_; 
v_k_x27_461_ = lean_array_fget_borrowed(v_ks_449_, v_x_446_);
v___x_462_ = l_Lean_instBEqMVarId_beq(v_x_447_, v_k_x27_461_);
if (v___x_462_ == 0)
{
lean_object* v___x_464_; 
if (v_isShared_453_ == 0)
{
v___x_464_ = v___x_452_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_ks_449_);
lean_ctor_set(v_reuseFailAlloc_468_, 1, v_vs_450_);
v___x_464_ = v_reuseFailAlloc_468_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_465_ = lean_unsigned_to_nat(1u);
v___x_466_ = lean_nat_add(v_x_446_, v___x_465_);
lean_dec(v_x_446_);
v_x_445_ = v___x_464_;
v_x_446_ = v___x_466_;
goto _start;
}
}
else
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_472_; 
v___x_469_ = lean_array_fset(v_ks_449_, v_x_446_, v_x_447_);
v___x_470_ = lean_array_fset(v_vs_450_, v_x_446_, v_x_448_);
lean_dec(v_x_446_);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 1, v___x_470_);
lean_ctor_set(v___x_452_, 0, v___x_469_);
v___x_472_ = v___x_452_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v___x_469_);
lean_ctor_set(v_reuseFailAlloc_473_, 1, v___x_470_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13___redArg(lean_object* v_n_475_, lean_object* v_k_476_, lean_object* v_v_477_){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_478_ = lean_unsigned_to_nat(0u);
v___x_479_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13_spec__14___redArg(v_n_475_, v___x_478_, v_k_476_, v_v_477_);
return v___x_479_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__0(void){
_start:
{
size_t v___x_480_; size_t v___x_481_; size_t v___x_482_; 
v___x_480_ = ((size_t)5ULL);
v___x_481_ = ((size_t)1ULL);
v___x_482_ = lean_usize_shift_left(v___x_481_, v___x_480_);
return v___x_482_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1(void){
_start:
{
size_t v___x_483_; size_t v___x_484_; size_t v___x_485_; 
v___x_483_ = ((size_t)1ULL);
v___x_484_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__0);
v___x_485_ = lean_usize_sub(v___x_484_, v___x_483_);
return v___x_485_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg(lean_object* v_x_487_, size_t v_x_488_, size_t v_x_489_, lean_object* v_x_490_, lean_object* v_x_491_){
_start:
{
if (lean_obj_tag(v_x_487_) == 0)
{
lean_object* v_es_492_; size_t v___x_493_; size_t v___x_494_; size_t v___x_495_; size_t v___x_496_; lean_object* v_j_497_; lean_object* v___x_498_; uint8_t v___x_499_; 
v_es_492_ = lean_ctor_get(v_x_487_, 0);
v___x_493_ = ((size_t)5ULL);
v___x_494_ = ((size_t)1ULL);
v___x_495_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1);
v___x_496_ = lean_usize_land(v_x_488_, v___x_495_);
v_j_497_ = lean_usize_to_nat(v___x_496_);
v___x_498_ = lean_array_get_size(v_es_492_);
v___x_499_ = lean_nat_dec_lt(v_j_497_, v___x_498_);
if (v___x_499_ == 0)
{
lean_dec(v_j_497_);
lean_dec(v_x_491_);
lean_dec(v_x_490_);
return v_x_487_;
}
else
{
lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_536_; 
lean_inc_ref(v_es_492_);
v_isSharedCheck_536_ = !lean_is_exclusive(v_x_487_);
if (v_isSharedCheck_536_ == 0)
{
lean_object* v_unused_537_; 
v_unused_537_ = lean_ctor_get(v_x_487_, 0);
lean_dec(v_unused_537_);
v___x_501_ = v_x_487_;
v_isShared_502_ = v_isSharedCheck_536_;
goto v_resetjp_500_;
}
else
{
lean_dec(v_x_487_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_536_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v_v_503_; lean_object* v___x_504_; lean_object* v_xs_x27_505_; lean_object* v___y_507_; 
v_v_503_ = lean_array_fget(v_es_492_, v_j_497_);
v___x_504_ = lean_box(0);
v_xs_x27_505_ = lean_array_fset(v_es_492_, v_j_497_, v___x_504_);
switch(lean_obj_tag(v_v_503_))
{
case 0:
{
lean_object* v_key_512_; lean_object* v_val_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_523_; 
v_key_512_ = lean_ctor_get(v_v_503_, 0);
v_val_513_ = lean_ctor_get(v_v_503_, 1);
v_isSharedCheck_523_ = !lean_is_exclusive(v_v_503_);
if (v_isSharedCheck_523_ == 0)
{
v___x_515_ = v_v_503_;
v_isShared_516_ = v_isSharedCheck_523_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_val_513_);
lean_inc(v_key_512_);
lean_dec(v_v_503_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_523_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
uint8_t v___x_517_; 
v___x_517_ = l_Lean_instBEqMVarId_beq(v_x_490_, v_key_512_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; lean_object* v___x_519_; 
lean_del_object(v___x_515_);
v___x_518_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_512_, v_val_513_, v_x_490_, v_x_491_);
v___x_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
v___y_507_ = v___x_519_;
goto v___jp_506_;
}
else
{
lean_object* v___x_521_; 
lean_dec(v_val_513_);
lean_dec(v_key_512_);
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 1, v_x_491_);
lean_ctor_set(v___x_515_, 0, v_x_490_);
v___x_521_ = v___x_515_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_x_490_);
lean_ctor_set(v_reuseFailAlloc_522_, 1, v_x_491_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
v___y_507_ = v___x_521_;
goto v___jp_506_;
}
}
}
}
case 1:
{
lean_object* v_node_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_534_; 
v_node_524_ = lean_ctor_get(v_v_503_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v_v_503_);
if (v_isSharedCheck_534_ == 0)
{
v___x_526_ = v_v_503_;
v_isShared_527_ = v_isSharedCheck_534_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_node_524_);
lean_dec(v_v_503_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_534_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
size_t v___x_528_; size_t v___x_529_; lean_object* v___x_530_; lean_object* v___x_532_; 
v___x_528_ = lean_usize_shift_right(v_x_488_, v___x_493_);
v___x_529_ = lean_usize_add(v_x_489_, v___x_494_);
v___x_530_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg(v_node_524_, v___x_528_, v___x_529_, v_x_490_, v_x_491_);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v___x_530_);
v___x_532_ = v___x_526_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
v___y_507_ = v___x_532_;
goto v___jp_506_;
}
}
}
default: 
{
lean_object* v___x_535_; 
v___x_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_535_, 0, v_x_490_);
lean_ctor_set(v___x_535_, 1, v_x_491_);
v___y_507_ = v___x_535_;
goto v___jp_506_;
}
}
v___jp_506_:
{
lean_object* v___x_508_; lean_object* v___x_510_; 
v___x_508_ = lean_array_fset(v_xs_x27_505_, v_j_497_, v___y_507_);
lean_dec(v_j_497_);
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 0, v___x_508_);
v___x_510_ = v___x_501_;
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
}
}
}
else
{
lean_object* v_ks_538_; lean_object* v_vs_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_559_; 
v_ks_538_ = lean_ctor_get(v_x_487_, 0);
v_vs_539_ = lean_ctor_get(v_x_487_, 1);
v_isSharedCheck_559_ = !lean_is_exclusive(v_x_487_);
if (v_isSharedCheck_559_ == 0)
{
v___x_541_ = v_x_487_;
v_isShared_542_ = v_isSharedCheck_559_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_vs_539_);
lean_inc(v_ks_538_);
lean_dec(v_x_487_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_559_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_544_; 
if (v_isShared_542_ == 0)
{
v___x_544_ = v___x_541_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_ks_538_);
lean_ctor_set(v_reuseFailAlloc_558_, 1, v_vs_539_);
v___x_544_ = v_reuseFailAlloc_558_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
lean_object* v_newNode_545_; uint8_t v___y_547_; size_t v___x_553_; uint8_t v___x_554_; 
v_newNode_545_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13___redArg(v___x_544_, v_x_490_, v_x_491_);
v___x_553_ = ((size_t)7ULL);
v___x_554_ = lean_usize_dec_le(v___x_553_, v_x_489_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_555_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_545_);
v___x_556_ = lean_unsigned_to_nat(4u);
v___x_557_ = lean_nat_dec_lt(v___x_555_, v___x_556_);
lean_dec(v___x_555_);
v___y_547_ = v___x_557_;
goto v___jp_546_;
}
else
{
v___y_547_ = v___x_554_;
goto v___jp_546_;
}
v___jp_546_:
{
if (v___y_547_ == 0)
{
lean_object* v_ks_548_; lean_object* v_vs_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v_ks_548_ = lean_ctor_get(v_newNode_545_, 0);
lean_inc_ref(v_ks_548_);
v_vs_549_ = lean_ctor_get(v_newNode_545_, 1);
lean_inc_ref(v_vs_549_);
lean_dec_ref(v_newNode_545_);
v___x_550_ = lean_unsigned_to_nat(0u);
v___x_551_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__2);
v___x_552_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___redArg(v_x_489_, v_ks_548_, v_vs_549_, v___x_550_, v___x_551_);
lean_dec_ref(v_vs_549_);
lean_dec_ref(v_ks_548_);
return v___x_552_;
}
else
{
return v_newNode_545_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___redArg(size_t v_depth_560_, lean_object* v_keys_561_, lean_object* v_vals_562_, lean_object* v_i_563_, lean_object* v_entries_564_){
_start:
{
lean_object* v___x_565_; uint8_t v___x_566_; 
v___x_565_ = lean_array_get_size(v_keys_561_);
v___x_566_ = lean_nat_dec_lt(v_i_563_, v___x_565_);
if (v___x_566_ == 0)
{
lean_dec(v_i_563_);
return v_entries_564_;
}
else
{
lean_object* v_k_567_; lean_object* v_v_568_; uint64_t v___x_569_; size_t v_h_570_; size_t v___x_571_; lean_object* v___x_572_; size_t v___x_573_; size_t v___x_574_; size_t v___x_575_; size_t v_h_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v_k_567_ = lean_array_fget_borrowed(v_keys_561_, v_i_563_);
v_v_568_ = lean_array_fget_borrowed(v_vals_562_, v_i_563_);
v___x_569_ = l_Lean_instHashableMVarId_hash(v_k_567_);
v_h_570_ = lean_uint64_to_usize(v___x_569_);
v___x_571_ = ((size_t)5ULL);
v___x_572_ = lean_unsigned_to_nat(1u);
v___x_573_ = ((size_t)1ULL);
v___x_574_ = lean_usize_sub(v_depth_560_, v___x_573_);
v___x_575_ = lean_usize_mul(v___x_571_, v___x_574_);
v_h_576_ = lean_usize_shift_right(v_h_570_, v___x_575_);
v___x_577_ = lean_nat_add(v_i_563_, v___x_572_);
lean_dec(v_i_563_);
lean_inc(v_v_568_);
lean_inc(v_k_567_);
v___x_578_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg(v_entries_564_, v_h_576_, v_depth_560_, v_k_567_, v_v_568_);
v_i_563_ = v___x_577_;
v_entries_564_ = v___x_578_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___redArg___boxed(lean_object* v_depth_580_, lean_object* v_keys_581_, lean_object* v_vals_582_, lean_object* v_i_583_, lean_object* v_entries_584_){
_start:
{
size_t v_depth_boxed_585_; lean_object* v_res_586_; 
v_depth_boxed_585_ = lean_unbox_usize(v_depth_580_);
lean_dec(v_depth_580_);
v_res_586_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___redArg(v_depth_boxed_585_, v_keys_581_, v_vals_582_, v_i_583_, v_entries_584_);
lean_dec_ref(v_vals_582_);
lean_dec_ref(v_keys_581_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___boxed(lean_object* v_x_587_, lean_object* v_x_588_, lean_object* v_x_589_, lean_object* v_x_590_, lean_object* v_x_591_){
_start:
{
size_t v_x_33554__boxed_592_; size_t v_x_33555__boxed_593_; lean_object* v_res_594_; 
v_x_33554__boxed_592_ = lean_unbox_usize(v_x_588_);
lean_dec(v_x_588_);
v_x_33555__boxed_593_ = lean_unbox_usize(v_x_589_);
lean_dec(v_x_589_);
v_res_594_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg(v_x_587_, v_x_33554__boxed_592_, v_x_33555__boxed_593_, v_x_590_, v_x_591_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6___redArg(lean_object* v_x_595_, lean_object* v_x_596_, lean_object* v_x_597_){
_start:
{
uint64_t v___x_598_; size_t v___x_599_; size_t v___x_600_; lean_object* v___x_601_; 
v___x_598_ = l_Lean_instHashableMVarId_hash(v_x_596_);
v___x_599_ = lean_uint64_to_usize(v___x_598_);
v___x_600_ = ((size_t)1ULL);
v___x_601_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg(v_x_595_, v___x_599_, v___x_600_, v_x_596_, v_x_597_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg(lean_object* v_mvarId_602_, lean_object* v_val_603_, lean_object* v___y_604_){
_start:
{
lean_object* v___x_606_; lean_object* v_mctx_607_; lean_object* v_cache_608_; lean_object* v_zetaDeltaFVarIds_609_; lean_object* v_postponed_610_; lean_object* v_diag_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_639_; 
v___x_606_ = lean_st_ref_take(v___y_604_);
v_mctx_607_ = lean_ctor_get(v___x_606_, 0);
v_cache_608_ = lean_ctor_get(v___x_606_, 1);
v_zetaDeltaFVarIds_609_ = lean_ctor_get(v___x_606_, 2);
v_postponed_610_ = lean_ctor_get(v___x_606_, 3);
v_diag_611_ = lean_ctor_get(v___x_606_, 4);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_639_ == 0)
{
v___x_613_ = v___x_606_;
v_isShared_614_ = v_isSharedCheck_639_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_diag_611_);
lean_inc(v_postponed_610_);
lean_inc(v_zetaDeltaFVarIds_609_);
lean_inc(v_cache_608_);
lean_inc(v_mctx_607_);
lean_dec(v___x_606_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_639_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v_depth_615_; lean_object* v_levelAssignDepth_616_; lean_object* v_lmvarCounter_617_; lean_object* v_mvarCounter_618_; lean_object* v_lDecls_619_; lean_object* v_decls_620_; lean_object* v_userNames_621_; lean_object* v_lAssignment_622_; lean_object* v_eAssignment_623_; lean_object* v_dAssignment_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_638_; 
v_depth_615_ = lean_ctor_get(v_mctx_607_, 0);
v_levelAssignDepth_616_ = lean_ctor_get(v_mctx_607_, 1);
v_lmvarCounter_617_ = lean_ctor_get(v_mctx_607_, 2);
v_mvarCounter_618_ = lean_ctor_get(v_mctx_607_, 3);
v_lDecls_619_ = lean_ctor_get(v_mctx_607_, 4);
v_decls_620_ = lean_ctor_get(v_mctx_607_, 5);
v_userNames_621_ = lean_ctor_get(v_mctx_607_, 6);
v_lAssignment_622_ = lean_ctor_get(v_mctx_607_, 7);
v_eAssignment_623_ = lean_ctor_get(v_mctx_607_, 8);
v_dAssignment_624_ = lean_ctor_get(v_mctx_607_, 9);
v_isSharedCheck_638_ = !lean_is_exclusive(v_mctx_607_);
if (v_isSharedCheck_638_ == 0)
{
v___x_626_ = v_mctx_607_;
v_isShared_627_ = v_isSharedCheck_638_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_dAssignment_624_);
lean_inc(v_eAssignment_623_);
lean_inc(v_lAssignment_622_);
lean_inc(v_userNames_621_);
lean_inc(v_decls_620_);
lean_inc(v_lDecls_619_);
lean_inc(v_mvarCounter_618_);
lean_inc(v_lmvarCounter_617_);
lean_inc(v_levelAssignDepth_616_);
lean_inc(v_depth_615_);
lean_dec(v_mctx_607_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_638_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_628_; lean_object* v___x_630_; 
v___x_628_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6___redArg(v_eAssignment_623_, v_mvarId_602_, v_val_603_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 8, v___x_628_);
v___x_630_ = v___x_626_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_depth_615_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v_levelAssignDepth_616_);
lean_ctor_set(v_reuseFailAlloc_637_, 2, v_lmvarCounter_617_);
lean_ctor_set(v_reuseFailAlloc_637_, 3, v_mvarCounter_618_);
lean_ctor_set(v_reuseFailAlloc_637_, 4, v_lDecls_619_);
lean_ctor_set(v_reuseFailAlloc_637_, 5, v_decls_620_);
lean_ctor_set(v_reuseFailAlloc_637_, 6, v_userNames_621_);
lean_ctor_set(v_reuseFailAlloc_637_, 7, v_lAssignment_622_);
lean_ctor_set(v_reuseFailAlloc_637_, 8, v___x_628_);
lean_ctor_set(v_reuseFailAlloc_637_, 9, v_dAssignment_624_);
v___x_630_ = v_reuseFailAlloc_637_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
lean_object* v___x_632_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 0, v___x_630_);
v___x_632_ = v___x_613_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v___x_630_);
lean_ctor_set(v_reuseFailAlloc_636_, 1, v_cache_608_);
lean_ctor_set(v_reuseFailAlloc_636_, 2, v_zetaDeltaFVarIds_609_);
lean_ctor_set(v_reuseFailAlloc_636_, 3, v_postponed_610_);
lean_ctor_set(v_reuseFailAlloc_636_, 4, v_diag_611_);
v___x_632_ = v_reuseFailAlloc_636_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_633_ = lean_st_ref_set(v___y_604_, v___x_632_);
v___x_634_ = lean_box(0);
v___x_635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
return v___x_635_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg___boxed(lean_object* v_mvarId_640_, lean_object* v_val_641_, lean_object* v___y_642_, lean_object* v___y_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg(v_mvarId_640_, v_val_641_, v___y_642_);
lean_dec(v___y_642_);
return v_res_644_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__1(void){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = ((lean_object*)(l_Lean_Meta_substCore___lam__2___closed__0));
v___x_647_ = l_Lean_stringToMessageData(v___x_646_);
return v___x_647_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__3(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_649_ = ((lean_object*)(l_Lean_Meta_substCore___lam__2___closed__2));
v___x_650_ = l_Lean_stringToMessageData(v___x_649_);
return v___x_650_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__7(void){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_654_ = ((lean_object*)(l_Lean_Meta_substCore___lam__2___closed__6));
v___x_655_ = lean_unsigned_to_nat(22u);
v___x_656_ = lean_unsigned_to_nat(65u);
v___x_657_ = ((lean_object*)(l_Lean_Meta_substCore___lam__2___closed__5));
v___x_658_ = ((lean_object*)(l_Lean_Meta_substCore___lam__2___closed__4));
v___x_659_ = l_mkPanicMessageWithDecl(v___x_658_, v___x_657_, v___x_656_, v___x_655_, v___x_654_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2(lean_object* v_snd_663_, lean_object* v___x_664_, lean_object* v_fvarId_665_, lean_object* v_hFVarId_666_, lean_object* v___x_667_, lean_object* v_fst_668_, lean_object* v_fvarSubst_669_, uint8_t v_clearH_670_, lean_object* v___x_671_, lean_object* v___x_672_, lean_object* v___x_673_, uint8_t v_skip_674_, uint8_t v___x_675_, lean_object* v___x_676_, lean_object* v___x_677_, lean_object* v_a_678_, uint8_t v_symm_679_, uint8_t v___x_680_, lean_object* v___x_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
lean_object* v___y_688_; lean_object* v___y_689_; lean_object* v___y_690_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_704_; lean_object* v_mvarId_705_; lean_object* v___y_706_; lean_object* v___y_707_; lean_object* v___y_708_; lean_object* v___y_709_; lean_object* v___y_757_; lean_object* v___y_758_; lean_object* v_newVal_759_; lean_object* v___y_760_; lean_object* v___y_761_; lean_object* v___y_762_; lean_object* v___y_763_; lean_object* v___y_787_; lean_object* v___y_788_; lean_object* v___y_789_; uint8_t v___y_790_; lean_object* v_major_791_; lean_object* v___y_792_; lean_object* v___y_793_; lean_object* v___y_794_; lean_object* v___y_795_; lean_object* v___y_828_; uint8_t v___y_829_; lean_object* v_motive_830_; lean_object* v_newType_831_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_835_; lean_object* v___x_846_; 
lean_inc(v_snd_663_);
v___x_846_ = l_Lean_MVarId_getDecl(v_snd_663_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
if (lean_obj_tag(v___x_846_) == 0)
{
lean_object* v_a_847_; lean_object* v___x_848_; 
v_a_847_ = lean_ctor_get(v___x_846_, 0);
lean_inc(v_a_847_);
lean_dec_ref(v___x_846_);
lean_inc(v___x_664_);
v___x_848_ = l_Lean_FVarId_getDecl___redArg(v___x_664_, v___y_682_, v___y_684_, v___y_685_);
if (lean_obj_tag(v___x_848_) == 0)
{
lean_object* v_a_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v_a_849_ = lean_ctor_get(v___x_848_, 0);
lean_inc(v_a_849_);
lean_dec_ref(v___x_848_);
v___x_850_ = l_Lean_LocalDecl_type(v_a_849_);
lean_dec(v_a_849_);
v___x_851_ = l_Lean_Meta_matchEq_x3f(v___x_850_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_object* v_a_852_; 
v_a_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc(v_a_852_);
lean_dec_ref(v___x_851_);
if (lean_obj_tag(v_a_852_) == 0)
{
lean_object* v___x_853_; lean_object* v___x_854_; 
lean_dec(v_a_847_);
lean_dec(v_a_678_);
lean_dec(v___x_677_);
lean_dec(v___x_676_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
lean_dec(v___x_664_);
lean_dec(v_snd_663_);
v___x_853_ = lean_obj_once(&l_Lean_Meta_substCore___lam__2___closed__7, &l_Lean_Meta_substCore___lam__2___closed__7_once, _init_l_Lean_Meta_substCore___lam__2___closed__7);
v___x_854_ = l_panic___at___00Lean_Meta_substCore_spec__1(v___x_853_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
return v___x_854_;
}
else
{
lean_object* v_val_855_; lean_object* v_snd_856_; lean_object* v_fst_857_; lean_object* v_snd_858_; lean_object* v_type_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___f_862_; lean_object* v___y_864_; 
v_val_855_ = lean_ctor_get(v_a_852_, 0);
lean_inc(v_val_855_);
lean_dec_ref(v_a_852_);
v_snd_856_ = lean_ctor_get(v_val_855_, 1);
lean_inc(v_snd_856_);
lean_dec(v_val_855_);
v_fst_857_ = lean_ctor_get(v_snd_856_, 0);
lean_inc(v_fst_857_);
v_snd_858_ = lean_ctor_get(v_snd_856_, 1);
lean_inc(v_snd_858_);
lean_dec(v_snd_856_);
v_type_859_ = lean_ctor_get(v_a_847_, 2);
lean_inc_ref_n(v_type_859_, 2);
lean_dec(v_a_847_);
v___x_860_ = lean_box(v___x_680_);
v___x_861_ = lean_box(v___x_675_);
lean_inc_ref(v___x_671_);
lean_inc(v___x_672_);
lean_inc_ref(v___x_667_);
v___f_862_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__1___boxed), 12, 6);
lean_closure_set(v___f_862_, 0, v_type_859_);
lean_closure_set(v___f_862_, 1, v___x_667_);
lean_closure_set(v___f_862_, 2, v___x_672_);
lean_closure_set(v___f_862_, 3, v___x_671_);
lean_closure_set(v___f_862_, 4, v___x_860_);
lean_closure_set(v___f_862_, 5, v___x_861_);
if (v_symm_679_ == 0)
{
lean_dec(v_fst_857_);
v___y_864_ = v_snd_858_;
goto v___jp_863_;
}
else
{
lean_dec(v_snd_858_);
v___y_864_ = v_fst_857_;
goto v___jp_863_;
}
v___jp_863_:
{
lean_object* v___x_865_; lean_object* v_a_866_; lean_object* v___x_867_; lean_object* v_a_868_; uint8_t v___x_869_; 
v___x_865_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v___y_864_, v___y_683_);
v_a_866_ = lean_ctor_get(v___x_865_, 0);
lean_inc(v_a_866_);
lean_dec_ref(v___x_865_);
lean_inc(v___x_664_);
lean_inc_ref(v_type_859_);
v___x_867_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_type_859_, v___x_664_, v___y_683_);
v_a_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_868_);
lean_dec_ref(v___x_867_);
v___x_869_ = lean_unbox(v_a_868_);
if (v___x_869_ == 0)
{
lean_object* v___x_870_; lean_object* v___x_871_; uint8_t v___x_872_; lean_object* v___x_873_; 
lean_dec_ref(v___f_862_);
v___x_870_ = lean_mk_empty_array_with_capacity(v___x_681_);
lean_inc_ref(v___x_671_);
v___x_871_ = lean_array_push(v___x_870_, v___x_671_);
v___x_872_ = 1;
lean_inc_ref(v_type_859_);
v___x_873_ = l_Lean_Meta_mkLambdaFVars(v___x_871_, v_type_859_, v___x_680_, v___x_675_, v___x_680_, v___x_675_, v___x_872_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
lean_dec_ref(v___x_871_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v_a_874_; lean_object* v___x_875_; uint8_t v___x_876_; 
v_a_874_ = lean_ctor_get(v___x_873_, 0);
lean_inc(v_a_874_);
lean_dec_ref(v___x_873_);
lean_inc_ref(v___x_671_);
v___x_875_ = l_Lean_Expr_replaceFVar(v_type_859_, v___x_671_, v_a_866_);
lean_dec_ref(v_type_859_);
v___x_876_ = lean_unbox(v_a_868_);
lean_dec(v_a_868_);
v___y_828_ = v_a_866_;
v___y_829_ = v___x_876_;
v_motive_830_ = v_a_874_;
v_newType_831_ = v___x_875_;
v___y_832_ = v___y_682_;
v___y_833_ = v___y_683_;
v___y_834_ = v___y_684_;
v___y_835_ = v___y_685_;
goto v___jp_827_;
}
else
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
lean_dec(v_a_868_);
lean_dec(v_a_866_);
lean_dec_ref(v_type_859_);
lean_dec(v_a_678_);
lean_dec(v___x_677_);
lean_dec(v___x_676_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
lean_dec(v___x_664_);
lean_dec(v_snd_663_);
v_a_877_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_873_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_873_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
else
{
lean_object* v___x_885_; lean_object* v___x_886_; 
lean_inc_ref(v___x_671_);
v___x_885_ = l_Lean_Expr_replaceFVar(v_type_859_, v___x_671_, v_a_866_);
lean_inc(v_a_866_);
v___x_886_ = l_Lean_Meta_mkEqRefl(v_a_866_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v_a_887_; lean_object* v___x_888_; 
v_a_887_ = lean_ctor_get(v___x_886_, 0);
lean_inc(v_a_887_);
lean_dec_ref(v___x_886_);
lean_inc_ref(v___x_667_);
v___x_888_ = l_Lean_Expr_replaceFVar(v___x_885_, v___x_667_, v_a_887_);
lean_dec(v_a_887_);
lean_dec_ref(v___x_885_);
if (v_symm_679_ == 0)
{
lean_object* v___x_889_; 
lean_dec_ref(v_type_859_);
lean_inc_ref(v___x_671_);
lean_inc(v_a_866_);
v___x_889_ = l_Lean_Meta_mkEq(v_a_866_, v___x_671_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v_a_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v_a_890_ = lean_ctor_get(v___x_889_, 0);
lean_inc(v_a_890_);
lean_dec_ref(v___x_889_);
v___x_891_ = ((lean_object*)(l_Lean_Meta_substCore___lam__2___closed__9));
v___x_892_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___redArg(v___x_891_, v_a_890_, v___f_862_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_893_; uint8_t v___x_894_; 
v_a_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_a_893_);
lean_dec_ref(v___x_892_);
v___x_894_ = lean_unbox(v_a_868_);
lean_dec(v_a_868_);
v___y_828_ = v_a_866_;
v___y_829_ = v___x_894_;
v_motive_830_ = v_a_893_;
v_newType_831_ = v___x_888_;
v___y_832_ = v___y_682_;
v___y_833_ = v___y_683_;
v___y_834_ = v___y_684_;
v___y_835_ = v___y_685_;
goto v___jp_827_;
}
else
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_902_; 
lean_dec_ref(v___x_888_);
lean_dec(v_a_868_);
lean_dec(v_a_866_);
lean_dec(v_a_678_);
lean_dec(v___x_677_);
lean_dec(v___x_676_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
lean_dec(v___x_664_);
lean_dec(v_snd_663_);
v_a_895_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_902_ == 0)
{
v___x_897_ = v___x_892_;
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_892_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_900_; 
if (v_isShared_898_ == 0)
{
v___x_900_ = v___x_897_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_a_895_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
}
else
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec_ref(v___x_888_);
lean_dec(v_a_868_);
lean_dec(v_a_866_);
lean_dec_ref(v___f_862_);
lean_dec(v_a_678_);
lean_dec(v___x_677_);
lean_dec(v___x_676_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
lean_dec(v___x_664_);
lean_dec(v_snd_663_);
v_a_903_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_889_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_889_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
else
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; uint8_t v___x_914_; lean_object* v___x_915_; 
lean_dec_ref(v___f_862_);
v___x_911_ = lean_mk_empty_array_with_capacity(v___x_672_);
lean_inc_ref(v___x_671_);
v___x_912_ = lean_array_push(v___x_911_, v___x_671_);
lean_inc_ref(v___x_667_);
v___x_913_ = lean_array_push(v___x_912_, v___x_667_);
v___x_914_ = 1;
v___x_915_ = l_Lean_Meta_mkLambdaFVars(v___x_913_, v_type_859_, v___x_680_, v___x_675_, v___x_680_, v___x_675_, v___x_914_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
lean_dec_ref(v___x_913_);
if (lean_obj_tag(v___x_915_) == 0)
{
lean_object* v_a_916_; uint8_t v___x_917_; 
v_a_916_ = lean_ctor_get(v___x_915_, 0);
lean_inc(v_a_916_);
lean_dec_ref(v___x_915_);
v___x_917_ = lean_unbox(v_a_868_);
lean_dec(v_a_868_);
v___y_828_ = v_a_866_;
v___y_829_ = v___x_917_;
v_motive_830_ = v_a_916_;
v_newType_831_ = v___x_888_;
v___y_832_ = v___y_682_;
v___y_833_ = v___y_683_;
v___y_834_ = v___y_684_;
v___y_835_ = v___y_685_;
goto v___jp_827_;
}
else
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec_ref(v___x_888_);
lean_dec(v_a_868_);
lean_dec(v_a_866_);
lean_dec(v_a_678_);
lean_dec(v___x_677_);
lean_dec(v___x_676_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
lean_dec(v___x_664_);
lean_dec(v_snd_663_);
v_a_918_ = lean_ctor_get(v___x_915_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_915_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_915_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_915_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
lean_dec_ref(v___x_885_);
lean_dec(v_a_868_);
lean_dec(v_a_866_);
lean_dec_ref(v___f_862_);
lean_dec_ref(v_type_859_);
lean_dec(v_a_678_);
lean_dec(v___x_677_);
lean_dec(v___x_676_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
lean_dec(v___x_664_);
lean_dec(v_snd_663_);
v_a_926_ = lean_ctor_get(v___x_886_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_886_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_886_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
lean_dec(v_a_847_);
lean_dec(v_a_678_);
lean_dec(v___x_677_);
lean_dec(v___x_676_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
lean_dec(v___x_664_);
lean_dec(v_snd_663_);
v_a_934_ = lean_ctor_get(v___x_851_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_851_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_851_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_934_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
else
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
lean_dec(v_a_847_);
lean_dec(v_a_678_);
lean_dec(v___x_677_);
lean_dec(v___x_676_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
lean_dec(v___x_664_);
lean_dec(v_snd_663_);
v_a_942_ = lean_ctor_get(v___x_848_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_848_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v___x_848_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_848_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_957_; 
lean_dec(v_a_678_);
lean_dec(v___x_677_);
lean_dec(v___x_676_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
lean_dec(v___x_664_);
lean_dec(v_snd_663_);
v_a_950_ = lean_ctor_get(v___x_846_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_846_);
if (v_isSharedCheck_957_ == 0)
{
v___x_952_ = v___x_846_;
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_846_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_955_; 
if (v_isShared_953_ == 0)
{
v___x_955_ = v___x_952_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_950_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
v___jp_687_:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_691_ = l_Lean_Meta_FVarSubst_insert(v___y_688_, v_fvarId_665_, v___y_690_);
v___x_692_ = l_Lean_Meta_FVarSubst_insert(v___x_691_, v_hFVarId_666_, v___x_667_);
v___x_693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
lean_ctor_set(v___x_693_, 1, v___y_689_);
v___x_694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
return v___x_694_;
}
v___jp_695_:
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = lean_array_get_size(v___y_698_);
v___x_700_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___redArg(v_fst_668_, v___y_698_, v___x_699_, v___x_699_, v_fvarSubst_669_);
lean_dec_ref(v___y_698_);
if (v_clearH_670_ == 0)
{
lean_object* v_a_701_; 
lean_dec_ref(v___y_696_);
v_a_701_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_701_);
lean_dec_ref(v___x_700_);
v___y_688_ = v_a_701_;
v___y_689_ = v___y_697_;
v___y_690_ = v___x_671_;
goto v___jp_687_;
}
else
{
lean_object* v_a_702_; 
lean_dec_ref(v___x_671_);
v_a_702_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_702_);
lean_dec_ref(v___x_700_);
v___y_688_ = v_a_702_;
v___y_689_ = v___y_697_;
v___y_690_ = v___y_696_;
goto v___jp_687_;
}
}
v___jp_703_:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_710_ = lean_array_get_size(v_fst_668_);
v___x_711_ = lean_nat_sub(v___x_710_, v___x_672_);
lean_dec(v___x_672_);
lean_inc(v___x_711_);
v___x_712_ = l_Lean_Meta_introNCore(v_mvarId_705_, v___x_711_, v___x_673_, v_skip_674_, v___x_675_, v___y_706_, v___y_707_, v___y_708_, v___y_709_);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v_a_713_; lean_object* v_options_714_; uint8_t v_hasTrace_715_; 
v_a_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_a_713_);
lean_dec_ref(v___x_712_);
v_options_714_ = lean_ctor_get(v___y_708_, 2);
v_hasTrace_715_ = lean_ctor_get_uint8(v_options_714_, sizeof(void*)*1);
if (v_hasTrace_715_ == 0)
{
lean_object* v_fst_716_; lean_object* v_snd_717_; 
lean_dec(v___x_711_);
lean_dec(v___x_676_);
v_fst_716_ = lean_ctor_get(v_a_713_, 0);
lean_inc(v_fst_716_);
v_snd_717_ = lean_ctor_get(v_a_713_, 1);
lean_inc(v_snd_717_);
lean_dec(v_a_713_);
v___y_696_ = v___y_704_;
v___y_697_ = v_snd_717_;
v___y_698_ = v_fst_716_;
goto v___jp_695_;
}
else
{
lean_object* v_fst_718_; lean_object* v_snd_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_747_; 
v_fst_718_ = lean_ctor_get(v_a_713_, 0);
v_snd_719_ = lean_ctor_get(v_a_713_, 1);
v_isSharedCheck_747_ = !lean_is_exclusive(v_a_713_);
if (v_isSharedCheck_747_ == 0)
{
v___x_721_ = v_a_713_;
v_isShared_722_ = v_isSharedCheck_747_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_snd_719_);
lean_inc(v_fst_718_);
lean_dec(v_a_713_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_747_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v_inheritedTraceOptions_723_; lean_object* v___x_724_; lean_object* v___x_725_; uint8_t v___x_726_; 
v_inheritedTraceOptions_723_ = lean_ctor_get(v___y_708_, 13);
v___x_724_ = ((lean_object*)(l_Lean_Meta_substCore___lam__0___closed__1));
lean_inc(v___x_676_);
v___x_725_ = l_Lean_Name_append(v___x_724_, v___x_676_);
v___x_726_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_723_, v_options_714_, v___x_725_);
lean_dec(v___x_725_);
if (v___x_726_ == 0)
{
lean_del_object(v___x_721_);
lean_dec(v___x_711_);
lean_dec(v___x_676_);
v___y_696_ = v___y_704_;
v___y_697_ = v_snd_719_;
v___y_698_ = v_fst_718_;
goto v___jp_695_;
}
else
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_732_; 
v___x_727_ = lean_obj_once(&l_Lean_Meta_substCore___lam__2___closed__1, &l_Lean_Meta_substCore___lam__2___closed__1_once, _init_l_Lean_Meta_substCore___lam__2___closed__1);
v___x_728_ = l_Nat_reprFast(v___x_711_);
v___x_729_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_729_, 0, v___x_728_);
v___x_730_ = l_Lean_MessageData_ofFormat(v___x_729_);
if (v_isShared_722_ == 0)
{
lean_ctor_set_tag(v___x_721_, 7);
lean_ctor_set(v___x_721_, 1, v___x_730_);
lean_ctor_set(v___x_721_, 0, v___x_727_);
v___x_732_ = v___x_721_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v___x_727_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v___x_730_);
v___x_732_ = v_reuseFailAlloc_746_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_733_ = lean_obj_once(&l_Lean_Meta_substCore___lam__2___closed__3, &l_Lean_Meta_substCore___lam__2___closed__3_once, _init_l_Lean_Meta_substCore___lam__2___closed__3);
v___x_734_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_734_, 0, v___x_732_);
lean_ctor_set(v___x_734_, 1, v___x_733_);
lean_inc(v_snd_719_);
v___x_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_735_, 0, v_snd_719_);
v___x_736_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_736_, 0, v___x_734_);
lean_ctor_set(v___x_736_, 1, v___x_735_);
v___x_737_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(v___x_676_, v___x_736_, v___y_706_, v___y_707_, v___y_708_, v___y_709_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_dec_ref(v___x_737_);
v___y_696_ = v___y_704_;
v___y_697_ = v_snd_719_;
v___y_698_ = v_fst_718_;
goto v___jp_695_;
}
else
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_745_; 
lean_dec(v_snd_719_);
lean_dec(v_fst_718_);
lean_dec_ref(v___y_704_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
v_a_738_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_745_ == 0)
{
v___x_740_ = v___x_737_;
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_737_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_743_; 
if (v_isShared_741_ == 0)
{
v___x_743_ = v___x_740_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_a_738_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
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
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_755_; 
lean_dec(v___x_711_);
lean_dec_ref(v___y_704_);
lean_dec(v___x_676_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
v_a_748_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_755_ == 0)
{
v___x_750_ = v___x_712_;
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v___x_712_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_753_; 
if (v_isShared_751_ == 0)
{
v___x_753_ = v___x_750_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_a_748_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
}
v___jp_756_:
{
lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_764_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg(v_snd_663_, v_newVal_759_, v___y_761_);
lean_dec_ref(v___x_764_);
v___x_765_ = l_Lean_Expr_mvarId_x21(v___y_758_);
lean_dec_ref(v___y_758_);
if (v_clearH_670_ == 0)
{
lean_dec(v___x_677_);
lean_dec(v___x_664_);
v___y_704_ = v___y_757_;
v_mvarId_705_ = v___x_765_;
v___y_706_ = v___y_760_;
v___y_707_ = v___y_761_;
v___y_708_ = v___y_762_;
v___y_709_ = v___y_763_;
goto v___jp_703_;
}
else
{
lean_object* v___x_766_; 
v___x_766_ = l_Lean_MVarId_clear(v___x_765_, v___x_664_, v___y_760_, v___y_761_, v___y_762_, v___y_763_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_768_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_767_);
lean_dec_ref(v___x_766_);
v___x_768_ = l_Lean_MVarId_clear(v_a_767_, v___x_677_, v___y_760_, v___y_761_, v___y_762_, v___y_763_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_769_; 
v_a_769_ = lean_ctor_get(v___x_768_, 0);
lean_inc(v_a_769_);
lean_dec_ref(v___x_768_);
v___y_704_ = v___y_757_;
v_mvarId_705_ = v_a_769_;
v___y_706_ = v___y_760_;
v___y_707_ = v___y_761_;
v___y_708_ = v___y_762_;
v___y_709_ = v___y_763_;
goto v___jp_703_;
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_777_; 
lean_dec_ref(v___y_757_);
lean_dec(v___x_676_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
v_a_770_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_777_ == 0)
{
v___x_772_ = v___x_768_;
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v___x_768_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_775_; 
if (v_isShared_773_ == 0)
{
v___x_775_ = v___x_772_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_770_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
}
else
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_785_; 
lean_dec_ref(v___y_757_);
lean_dec(v___x_677_);
lean_dec(v___x_676_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
v_a_778_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_785_ == 0)
{
v___x_780_ = v___x_766_;
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_766_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_783_; 
if (v_isShared_781_ == 0)
{
v___x_783_ = v___x_780_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_a_778_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
}
v___jp_786_:
{
lean_object* v___x_796_; 
v___x_796_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___y_789_, v_a_678_, v___y_792_, v___y_793_, v___y_794_, v___y_795_);
if (lean_obj_tag(v___x_796_) == 0)
{
if (v___y_790_ == 0)
{
lean_object* v_a_797_; lean_object* v___x_798_; 
v_a_797_ = lean_ctor_get(v___x_796_, 0);
lean_inc_n(v_a_797_, 2);
lean_dec_ref(v___x_796_);
v___x_798_ = l_Lean_Meta_mkEqNDRec(v___y_788_, v_a_797_, v_major_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_);
if (lean_obj_tag(v___x_798_) == 0)
{
lean_object* v_a_799_; 
v_a_799_ = lean_ctor_get(v___x_798_, 0);
lean_inc(v_a_799_);
lean_dec_ref(v___x_798_);
v___y_757_ = v___y_787_;
v___y_758_ = v_a_797_;
v_newVal_759_ = v_a_799_;
v___y_760_ = v___y_792_;
v___y_761_ = v___y_793_;
v___y_762_ = v___y_794_;
v___y_763_ = v___y_795_;
goto v___jp_756_;
}
else
{
lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_807_; 
lean_dec(v_a_797_);
lean_dec_ref(v___y_787_);
lean_dec(v___x_677_);
lean_dec(v___x_676_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
lean_dec(v___x_664_);
lean_dec(v_snd_663_);
v_a_800_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_807_ == 0)
{
v___x_802_ = v___x_798_;
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_798_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_805_; 
if (v_isShared_803_ == 0)
{
v___x_805_ = v___x_802_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_800_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
else
{
lean_object* v_a_808_; lean_object* v___x_809_; 
v_a_808_ = lean_ctor_get(v___x_796_, 0);
lean_inc_n(v_a_808_, 2);
lean_dec_ref(v___x_796_);
v___x_809_ = l_Lean_Meta_mkEqRec(v___y_788_, v_a_808_, v_major_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_);
if (lean_obj_tag(v___x_809_) == 0)
{
lean_object* v_a_810_; 
v_a_810_ = lean_ctor_get(v___x_809_, 0);
lean_inc(v_a_810_);
lean_dec_ref(v___x_809_);
v___y_757_ = v___y_787_;
v___y_758_ = v_a_808_;
v_newVal_759_ = v_a_810_;
v___y_760_ = v___y_792_;
v___y_761_ = v___y_793_;
v___y_762_ = v___y_794_;
v___y_763_ = v___y_795_;
goto v___jp_756_;
}
else
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
lean_dec(v_a_808_);
lean_dec_ref(v___y_787_);
lean_dec(v___x_677_);
lean_dec(v___x_676_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
lean_dec(v___x_664_);
lean_dec(v_snd_663_);
v_a_811_ = lean_ctor_get(v___x_809_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_809_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v___x_809_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_809_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_a_811_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
}
else
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_826_; 
lean_dec_ref(v_major_791_);
lean_dec_ref(v___y_788_);
lean_dec_ref(v___y_787_);
lean_dec(v___x_677_);
lean_dec(v___x_676_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
lean_dec(v___x_664_);
lean_dec(v_snd_663_);
v_a_819_ = lean_ctor_get(v___x_796_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_796_);
if (v_isSharedCheck_826_ == 0)
{
v___x_821_ = v___x_796_;
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_796_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_a_819_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
v___jp_827_:
{
if (v_symm_679_ == 0)
{
lean_object* v___x_836_; 
lean_inc_ref(v___x_667_);
v___x_836_ = l_Lean_Meta_mkEqSymm(v___x_667_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v_a_837_; 
v_a_837_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_a_837_);
lean_dec_ref(v___x_836_);
v___y_787_ = v___y_828_;
v___y_788_ = v_motive_830_;
v___y_789_ = v_newType_831_;
v___y_790_ = v___y_829_;
v_major_791_ = v_a_837_;
v___y_792_ = v___y_832_;
v___y_793_ = v___y_833_;
v___y_794_ = v___y_834_;
v___y_795_ = v___y_835_;
goto v___jp_786_;
}
else
{
lean_object* v_a_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_845_; 
lean_dec_ref(v_newType_831_);
lean_dec_ref(v_motive_830_);
lean_dec_ref(v___y_828_);
lean_dec(v_a_678_);
lean_dec(v___x_677_);
lean_dec(v___x_676_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v_fvarSubst_669_);
lean_dec_ref(v___x_667_);
lean_dec(v_hFVarId_666_);
lean_dec(v_fvarId_665_);
lean_dec(v___x_664_);
lean_dec(v_snd_663_);
v_a_838_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_845_ == 0)
{
v___x_840_ = v___x_836_;
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_a_838_);
lean_dec(v___x_836_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_843_; 
if (v_isShared_841_ == 0)
{
v___x_843_ = v___x_840_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_a_838_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
}
else
{
lean_inc_ref(v___x_667_);
v___y_787_ = v___y_828_;
v___y_788_ = v_motive_830_;
v___y_789_ = v_newType_831_;
v___y_790_ = v___y_829_;
v_major_791_ = v___x_667_;
v___y_792_ = v___y_832_;
v___y_793_ = v___y_833_;
v___y_794_ = v___y_834_;
v___y_795_ = v___y_835_;
goto v___jp_786_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2___boxed(lean_object** _args){
lean_object* v_snd_958_ = _args[0];
lean_object* v___x_959_ = _args[1];
lean_object* v_fvarId_960_ = _args[2];
lean_object* v_hFVarId_961_ = _args[3];
lean_object* v___x_962_ = _args[4];
lean_object* v_fst_963_ = _args[5];
lean_object* v_fvarSubst_964_ = _args[6];
lean_object* v_clearH_965_ = _args[7];
lean_object* v___x_966_ = _args[8];
lean_object* v___x_967_ = _args[9];
lean_object* v___x_968_ = _args[10];
lean_object* v_skip_969_ = _args[11];
lean_object* v___x_970_ = _args[12];
lean_object* v___x_971_ = _args[13];
lean_object* v___x_972_ = _args[14];
lean_object* v_a_973_ = _args[15];
lean_object* v_symm_974_ = _args[16];
lean_object* v___x_975_ = _args[17];
lean_object* v___x_976_ = _args[18];
lean_object* v___y_977_ = _args[19];
lean_object* v___y_978_ = _args[20];
lean_object* v___y_979_ = _args[21];
lean_object* v___y_980_ = _args[22];
lean_object* v___y_981_ = _args[23];
_start:
{
uint8_t v_clearH_boxed_982_; uint8_t v_skip_boxed_983_; uint8_t v___x_33820__boxed_984_; uint8_t v_symm_boxed_985_; uint8_t v___x_33824__boxed_986_; lean_object* v_res_987_; 
v_clearH_boxed_982_ = lean_unbox(v_clearH_965_);
v_skip_boxed_983_ = lean_unbox(v_skip_969_);
v___x_33820__boxed_984_ = lean_unbox(v___x_970_);
v_symm_boxed_985_ = lean_unbox(v_symm_974_);
v___x_33824__boxed_986_ = lean_unbox(v___x_975_);
v_res_987_ = l_Lean_Meta_substCore___lam__2(v_snd_958_, v___x_959_, v_fvarId_960_, v_hFVarId_961_, v___x_962_, v_fst_963_, v_fvarSubst_964_, v_clearH_boxed_982_, v___x_966_, v___x_967_, v___x_968_, v_skip_boxed_983_, v___x_33820__boxed_984_, v___x_971_, v___x_972_, v_a_973_, v_symm_boxed_985_, v___x_33824__boxed_986_, v___x_976_, v___y_977_, v___y_978_, v___y_979_, v___y_980_);
lean_dec(v___y_980_);
lean_dec_ref(v___y_979_);
lean_dec(v___y_978_);
lean_dec_ref(v___y_977_);
lean_dec(v___x_976_);
lean_dec_ref(v_fst_963_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_substCore_spec__9(lean_object* v_a_988_, lean_object* v_a_989_){
_start:
{
if (lean_obj_tag(v_a_988_) == 0)
{
lean_object* v___x_990_; 
v___x_990_ = l_List_reverse___redArg(v_a_989_);
return v___x_990_;
}
else
{
lean_object* v_head_991_; lean_object* v_tail_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1001_; 
v_head_991_ = lean_ctor_get(v_a_988_, 0);
v_tail_992_ = lean_ctor_get(v_a_988_, 1);
v_isSharedCheck_1001_ = !lean_is_exclusive(v_a_988_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_994_ = v_a_988_;
v_isShared_995_ = v_isSharedCheck_1001_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_tail_992_);
lean_inc(v_head_991_);
lean_dec(v_a_988_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1001_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_996_; lean_object* v___x_998_; 
v___x_996_ = l_Lean_MessageData_ofName(v_head_991_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 1, v_a_989_);
lean_ctor_set(v___x_994_, 0, v___x_996_);
v___x_998_ = v___x_994_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_996_);
lean_ctor_set(v_reuseFailAlloc_1000_, 1, v_a_989_);
v___x_998_ = v_reuseFailAlloc_1000_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
v_a_988_ = v_tail_992_;
v_a_989_ = v___x_998_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(size_t v_sz_1002_, size_t v_i_1003_, lean_object* v_bs_1004_){
_start:
{
uint8_t v___x_1005_; 
v___x_1005_ = lean_usize_dec_lt(v_i_1003_, v_sz_1002_);
if (v___x_1005_ == 0)
{
return v_bs_1004_;
}
else
{
lean_object* v_v_1006_; lean_object* v___x_1007_; lean_object* v_bs_x27_1008_; size_t v___x_1009_; size_t v___x_1010_; lean_object* v___x_1011_; 
v_v_1006_ = lean_array_uget(v_bs_1004_, v_i_1003_);
v___x_1007_ = lean_unsigned_to_nat(0u);
v_bs_x27_1008_ = lean_array_uset(v_bs_1004_, v_i_1003_, v___x_1007_);
v___x_1009_ = ((size_t)1ULL);
v___x_1010_ = lean_usize_add(v_i_1003_, v___x_1009_);
v___x_1011_ = lean_array_uset(v_bs_x27_1008_, v_i_1003_, v_v_1006_);
v_i_1003_ = v___x_1010_;
v_bs_1004_ = v___x_1011_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8___boxed(lean_object* v_sz_1013_, lean_object* v_i_1014_, lean_object* v_bs_1015_){
_start:
{
size_t v_sz_boxed_1016_; size_t v_i_boxed_1017_; lean_object* v_res_1018_; 
v_sz_boxed_1016_ = lean_unbox_usize(v_sz_1013_);
lean_dec(v_sz_1013_);
v_i_boxed_1017_ = lean_unbox_usize(v_i_1014_);
lean_dec(v_i_1014_);
v_res_1018_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(v_sz_boxed_1016_, v_i_boxed_1017_, v_bs_1015_);
return v_res_1018_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__3(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__2));
v___x_1024_ = l_Lean_stringToMessageData(v___x_1023_);
return v___x_1024_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__5(void){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1026_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__4));
v___x_1027_ = l_Lean_stringToMessageData(v___x_1026_);
return v___x_1027_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__8(void){
_start:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1031_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__7));
v___x_1032_ = l_Lean_MessageData_ofFormat(v___x_1031_);
return v___x_1032_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__9(void){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__8, &l_Lean_Meta_substCore___lam__3___closed__8_once, _init_l_Lean_Meta_substCore___lam__3___closed__8);
v___x_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
return v___x_1034_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__11(void){
_start:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1036_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__10));
v___x_1037_ = l_Lean_stringToMessageData(v___x_1036_);
return v___x_1037_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__13(void){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__12));
v___x_1040_ = l_Lean_stringToMessageData(v___x_1039_);
return v___x_1040_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__15(void){
_start:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1042_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__14));
v___x_1043_ = l_Lean_stringToMessageData(v___x_1042_);
return v___x_1043_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__17(void){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__16));
v___x_1046_ = l_Lean_stringToMessageData(v___x_1045_);
return v___x_1046_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__19(void){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__18));
v___x_1049_ = l_Lean_stringToMessageData(v___x_1048_);
return v___x_1049_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__25(void){
_start:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1059_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__24));
v___x_1060_ = l_Lean_stringToMessageData(v___x_1059_);
return v___x_1060_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__27(void){
_start:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1062_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__26));
v___x_1063_ = l_Lean_stringToMessageData(v___x_1062_);
return v___x_1063_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__29(void){
_start:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1065_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__28));
v___x_1066_ = l_Lean_stringToMessageData(v___x_1065_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3(lean_object* v_mvarId_1069_, lean_object* v_hFVarId_1070_, lean_object* v___x_1071_, uint8_t v_clearH_1072_, lean_object* v_fvarSubst_1073_, uint8_t v_symm_1074_, uint8_t v_tryToSkip_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v___y_1082_; lean_object* v___y_1083_; lean_object* v___y_1084_; lean_object* v___y_1085_; lean_object* v___y_1086_; lean_object* v___y_1087_; lean_object* v___y_1088_; lean_object* v___x_1119_; 
lean_inc(v_mvarId_1069_);
v___x_1119_ = l_Lean_MVarId_getTag(v_mvarId_1069_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
if (lean_obj_tag(v___x_1119_) == 0)
{
lean_object* v_a_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v_a_1120_ = lean_ctor_get(v___x_1119_, 0);
lean_inc(v_a_1120_);
lean_dec_ref(v___x_1119_);
v___x_1121_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__1));
lean_inc(v_mvarId_1069_);
v___x_1122_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1069_, v___x_1121_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
if (lean_obj_tag(v___x_1122_) == 0)
{
lean_object* v___x_1123_; 
lean_dec_ref(v___x_1122_);
lean_inc(v_hFVarId_1070_);
v___x_1123_ = l_Lean_FVarId_getDecl___redArg(v_hFVarId_1070_, v___y_1076_, v___y_1078_, v___y_1079_);
if (lean_obj_tag(v___x_1123_) == 0)
{
lean_object* v_a_1124_; lean_object* v___x_1125_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___x_1140_; 
v_a_1124_ = lean_ctor_get(v___x_1123_, 0);
lean_inc(v_a_1124_);
lean_dec_ref(v___x_1123_);
v___x_1125_ = l_Lean_LocalDecl_type(v_a_1124_);
lean_dec(v_a_1124_);
lean_inc_ref(v___x_1125_);
v___x_1140_ = l_Lean_Meta_matchEq_x3f(v___x_1125_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v_a_1141_; 
v_a_1141_ = lean_ctor_get(v___x_1140_, 0);
lean_inc(v_a_1141_);
lean_dec_ref(v___x_1140_);
if (lean_obj_tag(v_a_1141_) == 0)
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
lean_dec_ref(v___x_1125_);
lean_dec(v_a_1120_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
v___x_1142_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__9, &l_Lean_Meta_substCore___lam__3___closed__9_once, _init_l_Lean_Meta_substCore___lam__3___closed__9);
v___x_1143_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1121_, v_mvarId_1069_, v___x_1142_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
return v___x_1143_;
}
else
{
lean_object* v_val_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1466_; 
v_val_1144_ = lean_ctor_get(v_a_1141_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v_a_1141_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1146_ = v_a_1141_;
v_isShared_1147_ = v_isSharedCheck_1466_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_val_1144_);
lean_dec(v_a_1141_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1466_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v_snd_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1464_; 
v_snd_1148_ = lean_ctor_get(v_val_1144_, 1);
v_isSharedCheck_1464_ = !lean_is_exclusive(v_val_1144_);
if (v_isSharedCheck_1464_ == 0)
{
lean_object* v_unused_1465_; 
v_unused_1465_ = lean_ctor_get(v_val_1144_, 0);
lean_dec(v_unused_1465_);
v___x_1150_ = v_val_1144_;
v_isShared_1151_ = v_isSharedCheck_1464_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_snd_1148_);
lean_dec(v_val_1144_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1464_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v_fst_1152_; lean_object* v_snd_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1463_; 
v_fst_1152_ = lean_ctor_get(v_snd_1148_, 0);
v_snd_1153_ = lean_ctor_get(v_snd_1148_, 1);
v_isSharedCheck_1463_ = !lean_is_exclusive(v_snd_1148_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1155_ = v_snd_1148_;
v_isShared_1156_ = v_isSharedCheck_1463_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_snd_1153_);
lean_inc(v_fst_1152_);
lean_dec(v_snd_1148_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1463_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
uint8_t v___x_1157_; lean_object* v___y_1159_; lean_object* v___y_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; lean_object* v___y_1163_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; uint8_t v___y_1168_; lean_object* v___y_1169_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v___y_1174_; lean_object* v___y_1175_; uint8_t v_skip_1176_; uint8_t v___y_1185_; lean_object* v___y_1186_; lean_object* v___y_1187_; lean_object* v___y_1188_; lean_object* v___y_1189_; lean_object* v___y_1190_; lean_object* v___y_1191_; lean_object* v___y_1192_; lean_object* v___y_1193_; uint8_t v___y_1194_; lean_object* v___y_1195_; lean_object* v___y_1196_; lean_object* v___y_1197_; lean_object* v___y_1198_; lean_object* v___y_1199_; lean_object* v___y_1200_; uint8_t v___y_1226_; lean_object* v___y_1227_; lean_object* v___y_1228_; lean_object* v___y_1229_; lean_object* v___y_1230_; lean_object* v___y_1231_; lean_object* v___y_1232_; lean_object* v___y_1233_; lean_object* v___y_1234_; lean_object* v___y_1235_; uint8_t v___y_1236_; lean_object* v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1240_; lean_object* v___y_1241_; lean_object* v___y_1242_; lean_object* v___y_1243_; uint8_t v___y_1276_; lean_object* v___y_1277_; lean_object* v___y_1278_; lean_object* v___y_1279_; lean_object* v___y_1280_; lean_object* v___y_1281_; lean_object* v___y_1282_; uint8_t v___y_1283_; lean_object* v___y_1284_; lean_object* v___y_1285_; lean_object* v___y_1286_; lean_object* v___y_1287_; lean_object* v___y_1288_; lean_object* v___y_1289_; lean_object* v___y_1290_; lean_object* v___y_1334_; lean_object* v___y_1335_; lean_object* v___y_1336_; lean_object* v___y_1337_; lean_object* v___y_1338_; lean_object* v___y_1339_; lean_object* v___y_1340_; lean_object* v___y_1341_; lean_object* v___y_1342_; lean_object* v___y_1390_; lean_object* v___y_1391_; lean_object* v___y_1392_; lean_object* v___y_1393_; lean_object* v___y_1394_; lean_object* v___y_1395_; lean_object* v___y_1396_; lean_object* v___y_1397_; lean_object* v___y_1398_; lean_object* v___y_1399_; lean_object* v___y_1400_; lean_object* v___y_1426_; lean_object* v___y_1427_; lean_object* v___y_1459_; 
v___x_1157_ = 1;
if (v_symm_1074_ == 0)
{
lean_inc(v_fst_1152_);
v___y_1459_ = v_fst_1152_;
goto v___jp_1458_;
}
else
{
lean_inc(v_snd_1153_);
v___y_1459_ = v_snd_1153_;
goto v___jp_1458_;
}
v___jp_1158_:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___f_1182_; lean_object* v___x_1183_; 
v___x_1177_ = lean_box(v_clearH_1072_);
v___x_1178_ = lean_box(v_skip_1176_);
v___x_1179_ = lean_box(v___x_1157_);
v___x_1180_ = lean_box(v_symm_1074_);
v___x_1181_ = lean_box(v___y_1168_);
v___f_1182_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__2___boxed), 24, 19);
lean_closure_set(v___f_1182_, 0, v___y_1164_);
lean_closure_set(v___f_1182_, 1, v___y_1175_);
lean_closure_set(v___f_1182_, 2, v___y_1172_);
lean_closure_set(v___f_1182_, 3, v_hFVarId_1070_);
lean_closure_set(v___f_1182_, 4, v___y_1160_);
lean_closure_set(v___f_1182_, 5, v___y_1171_);
lean_closure_set(v___f_1182_, 6, v_fvarSubst_1073_);
lean_closure_set(v___f_1182_, 7, v___x_1177_);
lean_closure_set(v___f_1182_, 8, v___y_1165_);
lean_closure_set(v___f_1182_, 9, v___y_1161_);
lean_closure_set(v___f_1182_, 10, v___y_1173_);
lean_closure_set(v___f_1182_, 11, v___x_1178_);
lean_closure_set(v___f_1182_, 12, v___x_1179_);
lean_closure_set(v___f_1182_, 13, v___y_1159_);
lean_closure_set(v___f_1182_, 14, v___y_1162_);
lean_closure_set(v___f_1182_, 15, v_a_1120_);
lean_closure_set(v___f_1182_, 16, v___x_1180_);
lean_closure_set(v___f_1182_, 17, v___x_1181_);
lean_closure_set(v___f_1182_, 18, v___y_1167_);
v___x_1183_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v___y_1169_, v___f_1182_, v___y_1166_, v___y_1163_, v___y_1170_, v___y_1174_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1170_);
lean_dec(v___y_1163_);
lean_dec_ref(v___y_1166_);
return v___x_1183_;
}
v___jp_1184_:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1201_ = lean_unsigned_to_nat(0u);
v___x_1202_ = lean_array_get(v___x_1071_, v___y_1196_, v___x_1201_);
lean_inc(v___x_1202_);
v___x_1203_ = l_Lean_mkFVar(v___x_1202_);
v___x_1204_ = lean_unsigned_to_nat(1u);
v___x_1205_ = lean_array_get(v___x_1071_, v___y_1196_, v___x_1204_);
lean_dec_ref(v___y_1196_);
lean_inc(v___x_1205_);
v___x_1206_ = l_Lean_mkFVar(v___x_1205_);
if (v_tryToSkip_1075_ == 0)
{
lean_dec_ref(v___y_1195_);
lean_dec(v___y_1193_);
v___y_1159_ = v___y_1186_;
v___y_1160_ = v___x_1206_;
v___y_1161_ = v___y_1188_;
v___y_1162_ = v___x_1202_;
v___y_1163_ = v___y_1198_;
v___y_1164_ = v___y_1191_;
v___y_1165_ = v___x_1203_;
v___y_1166_ = v___y_1197_;
v___y_1167_ = v___x_1204_;
v___y_1168_ = v___y_1185_;
v___y_1169_ = v___y_1192_;
v___y_1170_ = v___y_1199_;
v___y_1171_ = v___y_1187_;
v___y_1172_ = v___y_1189_;
v___y_1173_ = v___y_1190_;
v___y_1174_ = v___y_1200_;
v___y_1175_ = v___x_1205_;
v_skip_1176_ = v___y_1194_;
goto v___jp_1158_;
}
else
{
lean_object* v___x_1207_; uint8_t v___x_1208_; 
v___x_1207_ = lean_array_get_size(v___y_1195_);
lean_dec_ref(v___y_1195_);
v___x_1208_ = lean_nat_dec_eq(v___x_1207_, v___y_1193_);
lean_dec(v___y_1193_);
if (v___x_1208_ == 0)
{
v___y_1159_ = v___y_1186_;
v___y_1160_ = v___x_1206_;
v___y_1161_ = v___y_1188_;
v___y_1162_ = v___x_1202_;
v___y_1163_ = v___y_1198_;
v___y_1164_ = v___y_1191_;
v___y_1165_ = v___x_1203_;
v___y_1166_ = v___y_1197_;
v___y_1167_ = v___x_1204_;
v___y_1168_ = v___y_1185_;
v___y_1169_ = v___y_1192_;
v___y_1170_ = v___y_1199_;
v___y_1171_ = v___y_1187_;
v___y_1172_ = v___y_1189_;
v___y_1173_ = v___y_1190_;
v___y_1174_ = v___y_1200_;
v___y_1175_ = v___x_1205_;
v_skip_1176_ = v___y_1194_;
goto v___jp_1158_;
}
else
{
lean_object* v___x_1209_; 
lean_inc(v___y_1192_);
v___x_1209_ = l_Lean_MVarId_getType(v___y_1192_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_);
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v_a_1210_; lean_object* v___x_1211_; lean_object* v_a_1212_; uint8_t v___x_1213_; 
v_a_1210_ = lean_ctor_get(v___x_1209_, 0);
lean_inc_n(v_a_1210_, 2);
lean_dec_ref(v___x_1209_);
lean_inc(v___x_1202_);
v___x_1211_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_a_1210_, v___x_1202_, v___y_1198_);
v_a_1212_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_a_1212_);
lean_dec_ref(v___x_1211_);
v___x_1213_ = lean_unbox(v_a_1212_);
lean_dec(v_a_1212_);
if (v___x_1213_ == 0)
{
lean_object* v___x_1214_; lean_object* v_a_1215_; uint8_t v___x_1216_; 
lean_inc(v___x_1205_);
v___x_1214_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_a_1210_, v___x_1205_, v___y_1198_);
v_a_1215_ = lean_ctor_get(v___x_1214_, 0);
lean_inc(v_a_1215_);
lean_dec_ref(v___x_1214_);
v___x_1216_ = lean_unbox(v_a_1215_);
lean_dec(v_a_1215_);
if (v___x_1216_ == 0)
{
lean_dec_ref(v___x_1206_);
lean_dec_ref(v___x_1203_);
lean_dec(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
lean_dec(v___y_1186_);
lean_dec(v_a_1120_);
lean_dec(v_hFVarId_1070_);
v___y_1082_ = v___y_1192_;
v___y_1083_ = v___y_1199_;
v___y_1084_ = v___x_1202_;
v___y_1085_ = v___y_1200_;
v___y_1086_ = v___y_1198_;
v___y_1087_ = v___y_1197_;
v___y_1088_ = v___x_1205_;
goto v___jp_1081_;
}
else
{
v___y_1159_ = v___y_1186_;
v___y_1160_ = v___x_1206_;
v___y_1161_ = v___y_1188_;
v___y_1162_ = v___x_1202_;
v___y_1163_ = v___y_1198_;
v___y_1164_ = v___y_1191_;
v___y_1165_ = v___x_1203_;
v___y_1166_ = v___y_1197_;
v___y_1167_ = v___x_1204_;
v___y_1168_ = v___y_1185_;
v___y_1169_ = v___y_1192_;
v___y_1170_ = v___y_1199_;
v___y_1171_ = v___y_1187_;
v___y_1172_ = v___y_1189_;
v___y_1173_ = v___y_1190_;
v___y_1174_ = v___y_1200_;
v___y_1175_ = v___x_1205_;
v_skip_1176_ = v___y_1194_;
goto v___jp_1158_;
}
}
else
{
lean_dec(v_a_1210_);
v___y_1159_ = v___y_1186_;
v___y_1160_ = v___x_1206_;
v___y_1161_ = v___y_1188_;
v___y_1162_ = v___x_1202_;
v___y_1163_ = v___y_1198_;
v___y_1164_ = v___y_1191_;
v___y_1165_ = v___x_1203_;
v___y_1166_ = v___y_1197_;
v___y_1167_ = v___x_1204_;
v___y_1168_ = v___y_1185_;
v___y_1169_ = v___y_1192_;
v___y_1170_ = v___y_1199_;
v___y_1171_ = v___y_1187_;
v___y_1172_ = v___y_1189_;
v___y_1173_ = v___y_1190_;
v___y_1174_ = v___y_1200_;
v___y_1175_ = v___x_1205_;
v_skip_1176_ = v___y_1194_;
goto v___jp_1158_;
}
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
lean_dec_ref(v___x_1206_);
lean_dec(v___x_1205_);
lean_dec_ref(v___x_1203_);
lean_dec(v___x_1202_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
lean_dec(v___y_1198_);
lean_dec_ref(v___y_1197_);
lean_dec(v___y_1192_);
lean_dec(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
lean_dec(v___y_1186_);
lean_dec(v_a_1120_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
v_a_1217_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1209_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1209_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
}
}
}
v___jp_1225_:
{
lean_object* v___x_1244_; 
lean_inc_ref(v___y_1234_);
lean_inc(v___y_1243_);
lean_inc_ref(v___y_1242_);
lean_inc(v___y_1241_);
lean_inc_ref(v___y_1240_);
v___x_1244_ = lean_apply_5(v___y_1234_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_, lean_box(0));
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1245_; uint8_t v___x_1246_; 
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
lean_inc(v_a_1245_);
lean_dec_ref(v___x_1244_);
v___x_1246_ = lean_unbox(v_a_1245_);
lean_dec(v_a_1245_);
if (v___x_1246_ == 0)
{
lean_dec(v___y_1237_);
lean_del_object(v___x_1155_);
v___y_1185_ = v___y_1226_;
v___y_1186_ = v___y_1227_;
v___y_1187_ = v___y_1229_;
v___y_1188_ = v___y_1228_;
v___y_1189_ = v___y_1230_;
v___y_1190_ = v___y_1231_;
v___y_1191_ = v___y_1232_;
v___y_1192_ = v___y_1233_;
v___y_1193_ = v___y_1235_;
v___y_1194_ = v___y_1236_;
v___y_1195_ = v___y_1239_;
v___y_1196_ = v___y_1238_;
v___y_1197_ = v___y_1240_;
v___y_1198_ = v___y_1241_;
v___y_1199_ = v___y_1242_;
v___y_1200_ = v___y_1243_;
goto v___jp_1184_;
}
else
{
lean_object* v___x_1247_; size_t v_sz_1248_; size_t v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1256_; 
v___x_1247_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__11, &l_Lean_Meta_substCore___lam__3___closed__11_once, _init_l_Lean_Meta_substCore___lam__3___closed__11);
v_sz_1248_ = lean_array_size(v___y_1239_);
v___x_1249_ = ((size_t)0ULL);
lean_inc_ref(v___y_1239_);
v___x_1250_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(v_sz_1248_, v___x_1249_, v___y_1239_);
v___x_1251_ = lean_array_to_list(v___x_1250_);
v___x_1252_ = lean_box(0);
v___x_1253_ = l_List_mapTR_loop___at___00Lean_Meta_substCore_spec__9(v___x_1251_, v___x_1252_);
v___x_1254_ = l_Lean_MessageData_ofList(v___x_1253_);
if (v_isShared_1156_ == 0)
{
lean_ctor_set_tag(v___x_1155_, 7);
lean_ctor_set(v___x_1155_, 1, v___x_1254_);
lean_ctor_set(v___x_1155_, 0, v___x_1247_);
v___x_1256_ = v___x_1155_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v___x_1247_);
lean_ctor_set(v_reuseFailAlloc_1266_, 1, v___x_1254_);
v___x_1256_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
lean_object* v___x_1257_; 
v___x_1257_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(v___y_1237_, v___x_1256_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_dec_ref(v___x_1257_);
v___y_1185_ = v___y_1226_;
v___y_1186_ = v___y_1227_;
v___y_1187_ = v___y_1229_;
v___y_1188_ = v___y_1228_;
v___y_1189_ = v___y_1230_;
v___y_1190_ = v___y_1231_;
v___y_1191_ = v___y_1232_;
v___y_1192_ = v___y_1233_;
v___y_1193_ = v___y_1235_;
v___y_1194_ = v___y_1236_;
v___y_1195_ = v___y_1239_;
v___y_1196_ = v___y_1238_;
v___y_1197_ = v___y_1240_;
v___y_1198_ = v___y_1241_;
v___y_1199_ = v___y_1242_;
v___y_1200_ = v___y_1243_;
goto v___jp_1184_;
}
else
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1265_; 
lean_dec(v___y_1243_);
lean_dec_ref(v___y_1242_);
lean_dec(v___y_1241_);
lean_dec_ref(v___y_1240_);
lean_dec_ref(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_dec(v___y_1235_);
lean_dec(v___y_1233_);
lean_dec(v___y_1232_);
lean_dec(v___y_1231_);
lean_dec(v___y_1230_);
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec(v_a_1120_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1260_ = v___x_1257_;
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1257_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v___x_1263_; 
if (v_isShared_1261_ == 0)
{
v___x_1263_ = v___x_1260_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_a_1258_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
}
}
}
}
else
{
lean_object* v_a_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1274_; 
lean_dec(v___y_1243_);
lean_dec_ref(v___y_1242_);
lean_dec(v___y_1241_);
lean_dec_ref(v___y_1240_);
lean_dec_ref(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_dec(v___y_1237_);
lean_dec(v___y_1235_);
lean_dec(v___y_1233_);
lean_dec(v___y_1232_);
lean_dec(v___y_1231_);
lean_dec(v___y_1230_);
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1228_);
lean_dec(v___y_1227_);
lean_del_object(v___x_1155_);
lean_dec(v_a_1120_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
v_a_1267_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1269_ = v___x_1244_;
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_a_1267_);
lean_dec(v___x_1244_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1272_; 
if (v_isShared_1270_ == 0)
{
v___x_1272_ = v___x_1269_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_a_1267_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
}
v___jp_1275_:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1291_ = lean_box(0);
lean_inc(v___y_1282_);
v___x_1292_ = l_Lean_Meta_introNCore(v___y_1285_, v___y_1282_, v___x_1291_, v___y_1283_, v___x_1157_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_);
if (lean_obj_tag(v___x_1292_) == 0)
{
lean_object* v_a_1293_; lean_object* v_fst_1294_; lean_object* v_snd_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1324_; 
v_a_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc(v_a_1293_);
lean_dec_ref(v___x_1292_);
v_fst_1294_ = lean_ctor_get(v_a_1293_, 0);
v_snd_1295_ = lean_ctor_get(v_a_1293_, 1);
v_isSharedCheck_1324_ = !lean_is_exclusive(v_a_1293_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1297_ = v_a_1293_;
v_isShared_1298_ = v_isSharedCheck_1324_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_snd_1295_);
lean_inc(v_fst_1294_);
lean_dec(v_a_1293_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1324_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1299_; 
lean_inc_ref(v___y_1281_);
lean_inc(v___y_1290_);
lean_inc_ref(v___y_1289_);
lean_inc(v___y_1288_);
lean_inc_ref(v___y_1287_);
v___x_1299_ = lean_apply_5(v___y_1281_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, lean_box(0));
if (lean_obj_tag(v___x_1299_) == 0)
{
lean_object* v_a_1300_; uint8_t v___x_1301_; 
v_a_1300_ = lean_ctor_get(v___x_1299_, 0);
lean_inc(v_a_1300_);
lean_dec_ref(v___x_1299_);
v___x_1301_ = lean_unbox(v_a_1300_);
lean_dec(v_a_1300_);
if (v___x_1301_ == 0)
{
lean_del_object(v___x_1297_);
lean_inc(v_snd_1295_);
v___y_1226_ = v___y_1276_;
v___y_1227_ = v___y_1277_;
v___y_1228_ = v___y_1278_;
v___y_1229_ = v___y_1279_;
v___y_1230_ = v___y_1280_;
v___y_1231_ = v___x_1291_;
v___y_1232_ = v_snd_1295_;
v___y_1233_ = v_snd_1295_;
v___y_1234_ = v___y_1281_;
v___y_1235_ = v___y_1282_;
v___y_1236_ = v___y_1283_;
v___y_1237_ = v___y_1284_;
v___y_1238_ = v_fst_1294_;
v___y_1239_ = v___y_1286_;
v___y_1240_ = v___y_1287_;
v___y_1241_ = v___y_1288_;
v___y_1242_ = v___y_1289_;
v___y_1243_ = v___y_1290_;
goto v___jp_1225_;
}
else
{
lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1305_; 
v___x_1302_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__13, &l_Lean_Meta_substCore___lam__3___closed__13_once, _init_l_Lean_Meta_substCore___lam__3___closed__13);
lean_inc(v_snd_1295_);
v___x_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1303_, 0, v_snd_1295_);
if (v_isShared_1298_ == 0)
{
lean_ctor_set_tag(v___x_1297_, 7);
lean_ctor_set(v___x_1297_, 1, v___x_1303_);
lean_ctor_set(v___x_1297_, 0, v___x_1302_);
v___x_1305_ = v___x_1297_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v___x_1302_);
lean_ctor_set(v_reuseFailAlloc_1315_, 1, v___x_1303_);
v___x_1305_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
lean_object* v___x_1306_; 
lean_inc(v___y_1284_);
v___x_1306_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(v___y_1284_, v___x_1305_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_dec_ref(v___x_1306_);
lean_inc(v_snd_1295_);
v___y_1226_ = v___y_1276_;
v___y_1227_ = v___y_1277_;
v___y_1228_ = v___y_1278_;
v___y_1229_ = v___y_1279_;
v___y_1230_ = v___y_1280_;
v___y_1231_ = v___x_1291_;
v___y_1232_ = v_snd_1295_;
v___y_1233_ = v_snd_1295_;
v___y_1234_ = v___y_1281_;
v___y_1235_ = v___y_1282_;
v___y_1236_ = v___y_1283_;
v___y_1237_ = v___y_1284_;
v___y_1238_ = v_fst_1294_;
v___y_1239_ = v___y_1286_;
v___y_1240_ = v___y_1287_;
v___y_1241_ = v___y_1288_;
v___y_1242_ = v___y_1289_;
v___y_1243_ = v___y_1290_;
goto v___jp_1225_;
}
else
{
lean_object* v_a_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1314_; 
lean_dec(v_snd_1295_);
lean_dec(v_fst_1294_);
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec(v___y_1284_);
lean_dec(v___y_1282_);
lean_dec(v___y_1280_);
lean_dec_ref(v___y_1279_);
lean_dec(v___y_1278_);
lean_dec(v___y_1277_);
lean_del_object(v___x_1155_);
lean_dec(v_a_1120_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v___x_1306_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1309_ = v___x_1306_;
v_isShared_1310_ = v_isSharedCheck_1314_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_a_1307_);
lean_dec(v___x_1306_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1314_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1312_; 
if (v_isShared_1310_ == 0)
{
v___x_1312_ = v___x_1309_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_a_1307_);
v___x_1312_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
return v___x_1312_;
}
}
}
}
}
}
else
{
lean_object* v_a_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1323_; 
lean_del_object(v___x_1297_);
lean_dec(v_snd_1295_);
lean_dec(v_fst_1294_);
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec(v___y_1284_);
lean_dec(v___y_1282_);
lean_dec(v___y_1280_);
lean_dec_ref(v___y_1279_);
lean_dec(v___y_1278_);
lean_dec(v___y_1277_);
lean_del_object(v___x_1155_);
lean_dec(v_a_1120_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
v_a_1316_ = lean_ctor_get(v___x_1299_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1299_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1318_ = v___x_1299_;
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_a_1316_);
lean_dec(v___x_1299_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1321_; 
if (v_isShared_1319_ == 0)
{
v___x_1321_ = v___x_1318_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_a_1316_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
}
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec(v___y_1284_);
lean_dec(v___y_1282_);
lean_dec(v___y_1280_);
lean_dec_ref(v___y_1279_);
lean_dec(v___y_1278_);
lean_dec(v___y_1277_);
lean_del_object(v___x_1155_);
lean_dec(v_a_1120_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
v_a_1325_ = lean_ctor_get(v___x_1292_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1292_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1292_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1292_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
v___jp_1333_:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; uint8_t v___x_1347_; lean_object* v___x_1348_; 
v___x_1343_ = lean_unsigned_to_nat(2u);
v___x_1344_ = lean_mk_empty_array_with_capacity(v___x_1343_);
v___x_1345_ = lean_array_push(v___x_1344_, v___y_1337_);
lean_inc(v_hFVarId_1070_);
v___x_1346_ = lean_array_push(v___x_1345_, v_hFVarId_1070_);
v___x_1347_ = 0;
v___x_1348_ = l_Lean_MVarId_revert(v_mvarId_1069_, v___x_1346_, v___x_1157_, v___x_1347_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; lean_object* v_fst_1350_; lean_object* v_snd_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1380_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
lean_inc(v_a_1349_);
lean_dec_ref(v___x_1348_);
v_fst_1350_ = lean_ctor_get(v_a_1349_, 0);
v_snd_1351_ = lean_ctor_get(v_a_1349_, 1);
v_isSharedCheck_1380_ = !lean_is_exclusive(v_a_1349_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1353_ = v_a_1349_;
v_isShared_1354_ = v_isSharedCheck_1380_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_snd_1351_);
lean_inc(v_fst_1350_);
lean_dec(v_a_1349_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1380_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1355_; 
lean_inc_ref(v___y_1336_);
lean_inc(v___y_1342_);
lean_inc_ref(v___y_1341_);
lean_inc(v___y_1340_);
lean_inc_ref(v___y_1339_);
v___x_1355_ = lean_apply_5(v___y_1336_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, lean_box(0));
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v_a_1356_; uint8_t v___x_1357_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
lean_inc(v_a_1356_);
lean_dec_ref(v___x_1355_);
v___x_1357_ = lean_unbox(v_a_1356_);
lean_dec(v_a_1356_);
if (v___x_1357_ == 0)
{
lean_del_object(v___x_1353_);
lean_inc(v_fst_1350_);
v___y_1276_ = v___x_1347_;
v___y_1277_ = v___y_1334_;
v___y_1278_ = v___x_1343_;
v___y_1279_ = v_fst_1350_;
v___y_1280_ = v___y_1335_;
v___y_1281_ = v___y_1336_;
v___y_1282_ = v___x_1343_;
v___y_1283_ = v___x_1347_;
v___y_1284_ = v___y_1338_;
v___y_1285_ = v_snd_1351_;
v___y_1286_ = v_fst_1350_;
v___y_1287_ = v___y_1339_;
v___y_1288_ = v___y_1340_;
v___y_1289_ = v___y_1341_;
v___y_1290_ = v___y_1342_;
goto v___jp_1275_;
}
else
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1361_; 
v___x_1358_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__15, &l_Lean_Meta_substCore___lam__3___closed__15_once, _init_l_Lean_Meta_substCore___lam__3___closed__15);
lean_inc(v_snd_1351_);
v___x_1359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1359_, 0, v_snd_1351_);
if (v_isShared_1354_ == 0)
{
lean_ctor_set_tag(v___x_1353_, 7);
lean_ctor_set(v___x_1353_, 1, v___x_1359_);
lean_ctor_set(v___x_1353_, 0, v___x_1358_);
v___x_1361_ = v___x_1353_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v___x_1358_);
lean_ctor_set(v_reuseFailAlloc_1371_, 1, v___x_1359_);
v___x_1361_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
lean_object* v___x_1362_; 
lean_inc(v___y_1338_);
v___x_1362_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(v___y_1338_, v___x_1361_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_dec_ref(v___x_1362_);
lean_inc(v_fst_1350_);
v___y_1276_ = v___x_1347_;
v___y_1277_ = v___y_1334_;
v___y_1278_ = v___x_1343_;
v___y_1279_ = v_fst_1350_;
v___y_1280_ = v___y_1335_;
v___y_1281_ = v___y_1336_;
v___y_1282_ = v___x_1343_;
v___y_1283_ = v___x_1347_;
v___y_1284_ = v___y_1338_;
v___y_1285_ = v_snd_1351_;
v___y_1286_ = v_fst_1350_;
v___y_1287_ = v___y_1339_;
v___y_1288_ = v___y_1340_;
v___y_1289_ = v___y_1341_;
v___y_1290_ = v___y_1342_;
goto v___jp_1275_;
}
else
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1370_; 
lean_dec(v_snd_1351_);
lean_dec(v_fst_1350_);
lean_dec(v___y_1342_);
lean_dec_ref(v___y_1341_);
lean_dec(v___y_1340_);
lean_dec_ref(v___y_1339_);
lean_dec(v___y_1338_);
lean_dec(v___y_1335_);
lean_dec(v___y_1334_);
lean_del_object(v___x_1155_);
lean_dec(v_a_1120_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1365_ = v___x_1362_;
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1362_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1363_);
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
else
{
lean_object* v_a_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1379_; 
lean_del_object(v___x_1353_);
lean_dec(v_snd_1351_);
lean_dec(v_fst_1350_);
lean_dec(v___y_1342_);
lean_dec_ref(v___y_1341_);
lean_dec(v___y_1340_);
lean_dec_ref(v___y_1339_);
lean_dec(v___y_1338_);
lean_dec(v___y_1335_);
lean_dec(v___y_1334_);
lean_del_object(v___x_1155_);
lean_dec(v_a_1120_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
v_a_1372_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1374_ = v___x_1355_;
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_a_1372_);
lean_dec(v___x_1355_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1377_; 
if (v_isShared_1375_ == 0)
{
v___x_1377_ = v___x_1374_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_a_1372_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_dec(v___y_1342_);
lean_dec_ref(v___y_1341_);
lean_dec(v___y_1340_);
lean_dec_ref(v___y_1339_);
lean_dec(v___y_1338_);
lean_dec(v___y_1335_);
lean_dec(v___y_1334_);
lean_del_object(v___x_1155_);
lean_dec(v_a_1120_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
v_a_1381_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1348_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1348_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
v___jp_1389_:
{
lean_object* v___x_1401_; lean_object* v_a_1402_; uint8_t v___x_1403_; 
lean_inc(v___y_1394_);
lean_inc_ref(v___y_1395_);
v___x_1401_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v___y_1395_, v___y_1394_, v___y_1398_);
v_a_1402_ = lean_ctor_get(v___x_1401_, 0);
lean_inc(v_a_1402_);
lean_dec_ref(v___x_1401_);
v___x_1403_ = lean_unbox(v_a_1402_);
lean_dec(v_a_1402_);
if (v___x_1403_ == 0)
{
lean_dec_ref(v___y_1395_);
lean_dec_ref(v___y_1392_);
lean_del_object(v___x_1150_);
lean_del_object(v___x_1146_);
v___y_1334_ = v___y_1390_;
v___y_1335_ = v___y_1391_;
v___y_1336_ = v___y_1393_;
v___y_1337_ = v___y_1394_;
v___y_1338_ = v___y_1396_;
v___y_1339_ = v___y_1397_;
v___y_1340_ = v___y_1398_;
v___y_1341_ = v___y_1399_;
v___y_1342_ = v___y_1400_;
goto v___jp_1333_;
}
else
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1407_; 
v___x_1404_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__17, &l_Lean_Meta_substCore___lam__3___closed__17_once, _init_l_Lean_Meta_substCore___lam__3___closed__17);
v___x_1405_ = l_Lean_MessageData_ofExpr(v___y_1392_);
if (v_isShared_1151_ == 0)
{
lean_ctor_set_tag(v___x_1150_, 7);
lean_ctor_set(v___x_1150_, 1, v___x_1405_);
lean_ctor_set(v___x_1150_, 0, v___x_1404_);
v___x_1407_ = v___x_1150_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v___x_1404_);
lean_ctor_set(v_reuseFailAlloc_1424_, 1, v___x_1405_);
v___x_1407_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1413_; 
v___x_1408_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__19, &l_Lean_Meta_substCore___lam__3___closed__19_once, _init_l_Lean_Meta_substCore___lam__3___closed__19);
v___x_1409_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1407_);
lean_ctor_set(v___x_1409_, 1, v___x_1408_);
v___x_1410_ = l_Lean_indentExpr(v___y_1395_);
v___x_1411_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1409_);
lean_ctor_set(v___x_1411_, 1, v___x_1410_);
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 0, v___x_1411_);
v___x_1413_ = v___x_1146_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v___x_1411_);
v___x_1413_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
lean_object* v___x_1414_; 
lean_inc(v_mvarId_1069_);
v___x_1414_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1121_, v_mvarId_1069_, v___x_1413_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_dec_ref(v___x_1414_);
v___y_1334_ = v___y_1390_;
v___y_1335_ = v___y_1391_;
v___y_1336_ = v___y_1393_;
v___y_1337_ = v___y_1394_;
v___y_1338_ = v___y_1396_;
v___y_1339_ = v___y_1397_;
v___y_1340_ = v___y_1398_;
v___y_1341_ = v___y_1399_;
v___y_1342_ = v___y_1400_;
goto v___jp_1333_;
}
else
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
lean_dec(v___y_1398_);
lean_dec_ref(v___y_1397_);
lean_dec(v___y_1396_);
lean_dec(v___y_1394_);
lean_dec(v___y_1391_);
lean_dec(v___y_1390_);
lean_del_object(v___x_1155_);
lean_dec(v_a_1120_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
lean_dec(v_mvarId_1069_);
v_a_1415_ = lean_ctor_get(v___x_1414_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1417_ = v___x_1414_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___x_1414_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
if (v_isShared_1418_ == 0)
{
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_a_1415_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
}
}
}
}
v___jp_1425_:
{
lean_object* v___x_1428_; 
v___x_1428_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v___y_1427_, v___y_1077_);
if (lean_obj_tag(v___y_1426_) == 1)
{
lean_object* v_a_1429_; lean_object* v_fvarId_1430_; lean_object* v___x_1431_; lean_object* v___f_1432_; lean_object* v___x_1433_; lean_object* v_a_1434_; uint8_t v___x_1435_; 
lean_dec_ref(v___x_1125_);
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
lean_inc(v_a_1429_);
lean_dec_ref(v___x_1428_);
v_fvarId_1430_ = lean_ctor_get(v___y_1426_, 0);
lean_inc(v_fvarId_1430_);
v___x_1431_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__22));
v___f_1432_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__23));
v___x_1433_ = l_Lean_Meta_substCore___lam__0(v___x_1431_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
v_a_1434_ = lean_ctor_get(v___x_1433_, 0);
lean_inc(v_a_1434_);
lean_dec_ref(v___x_1433_);
v___x_1435_ = lean_unbox(v_a_1434_);
lean_dec(v_a_1434_);
if (v___x_1435_ == 0)
{
lean_inc(v_fvarId_1430_);
v___y_1390_ = v___x_1431_;
v___y_1391_ = v_fvarId_1430_;
v___y_1392_ = v___y_1426_;
v___y_1393_ = v___f_1432_;
v___y_1394_ = v_fvarId_1430_;
v___y_1395_ = v_a_1429_;
v___y_1396_ = v___x_1431_;
v___y_1397_ = v___y_1076_;
v___y_1398_ = v___y_1077_;
v___y_1399_ = v___y_1078_;
v___y_1400_ = v___y_1079_;
goto v___jp_1389_;
}
else
{
lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v___x_1436_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__25, &l_Lean_Meta_substCore___lam__3___closed__25_once, _init_l_Lean_Meta_substCore___lam__3___closed__25);
lean_inc_ref(v___y_1426_);
v___x_1437_ = l_Lean_MessageData_ofExpr(v___y_1426_);
v___x_1438_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1436_);
lean_ctor_set(v___x_1438_, 1, v___x_1437_);
v___x_1439_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__27, &l_Lean_Meta_substCore___lam__3___closed__27_once, _init_l_Lean_Meta_substCore___lam__3___closed__27);
v___x_1440_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1438_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
lean_inc(v_fvarId_1430_);
v___x_1441_ = l_Lean_MessageData_ofName(v_fvarId_1430_);
v___x_1442_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1442_, 0, v___x_1440_);
lean_ctor_set(v___x_1442_, 1, v___x_1441_);
v___x_1443_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__29, &l_Lean_Meta_substCore___lam__3___closed__29_once, _init_l_Lean_Meta_substCore___lam__3___closed__29);
v___x_1444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1442_);
lean_ctor_set(v___x_1444_, 1, v___x_1443_);
lean_inc(v_a_1429_);
v___x_1445_ = l_Lean_MessageData_ofExpr(v_a_1429_);
v___x_1446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1444_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
v___x_1447_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(v___x_1431_, v___x_1446_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
if (lean_obj_tag(v___x_1447_) == 0)
{
lean_dec_ref(v___x_1447_);
lean_inc(v_fvarId_1430_);
v___y_1390_ = v___x_1431_;
v___y_1391_ = v_fvarId_1430_;
v___y_1392_ = v___y_1426_;
v___y_1393_ = v___f_1432_;
v___y_1394_ = v_fvarId_1430_;
v___y_1395_ = v_a_1429_;
v___y_1396_ = v___x_1431_;
v___y_1397_ = v___y_1076_;
v___y_1398_ = v___y_1077_;
v___y_1399_ = v___y_1078_;
v___y_1400_ = v___y_1079_;
goto v___jp_1389_;
}
else
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1455_; 
lean_dec(v_fvarId_1430_);
lean_dec_ref(v___y_1426_);
lean_dec(v_a_1429_);
lean_del_object(v___x_1155_);
lean_del_object(v___x_1150_);
lean_del_object(v___x_1146_);
lean_dec(v_a_1120_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
lean_dec(v_mvarId_1069_);
v_a_1448_ = lean_ctor_get(v___x_1447_, 0);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1447_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1450_ = v___x_1447_;
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1447_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1453_; 
if (v_isShared_1451_ == 0)
{
v___x_1453_ = v___x_1450_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_a_1448_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1428_);
lean_del_object(v___x_1155_);
lean_del_object(v___x_1150_);
lean_del_object(v___x_1146_);
lean_dec(v_a_1120_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
if (v_symm_1074_ == 0)
{
lean_object* v___x_1456_; 
v___x_1456_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__30));
v___y_1127_ = v___y_1426_;
v___y_1128_ = v___x_1456_;
goto v___jp_1126_;
}
else
{
lean_object* v___x_1457_; 
v___x_1457_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__31));
v___y_1127_ = v___y_1426_;
v___y_1128_ = v___x_1457_;
goto v___jp_1126_;
}
}
}
v___jp_1458_:
{
lean_object* v___x_1460_; 
v___x_1460_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v___y_1459_, v___y_1077_);
if (v_symm_1074_ == 0)
{
lean_object* v_a_1461_; 
lean_dec(v_fst_1152_);
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
lean_inc(v_a_1461_);
lean_dec_ref(v___x_1460_);
v___y_1426_ = v_a_1461_;
v___y_1427_ = v_snd_1153_;
goto v___jp_1425_;
}
else
{
lean_object* v_a_1462_; 
lean_dec(v_snd_1153_);
v_a_1462_ = lean_ctor_get(v___x_1460_, 0);
lean_inc(v_a_1462_);
lean_dec_ref(v___x_1460_);
v___y_1426_ = v_a_1462_;
v___y_1427_ = v_fst_1152_;
goto v___jp_1425_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1474_; 
lean_dec_ref(v___x_1125_);
lean_dec(v_a_1120_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
lean_dec(v_mvarId_1069_);
v_a_1467_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1469_ = v___x_1140_;
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_a_1467_);
lean_dec(v___x_1140_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1472_; 
if (v_isShared_1470_ == 0)
{
v___x_1472_ = v___x_1469_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_a_1467_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
}
v___jp_1126_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1129_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__3, &l_Lean_Meta_substCore___lam__3___closed__3_once, _init_l_Lean_Meta_substCore___lam__3___closed__3);
lean_inc_ref(v___y_1128_);
v___x_1130_ = l_Lean_stringToMessageData(v___y_1128_);
v___x_1131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1129_);
lean_ctor_set(v___x_1131_, 1, v___x_1130_);
v___x_1132_ = l_Lean_indentExpr(v___x_1125_);
v___x_1133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1131_);
lean_ctor_set(v___x_1133_, 1, v___x_1132_);
v___x_1134_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__5, &l_Lean_Meta_substCore___lam__3___closed__5_once, _init_l_Lean_Meta_substCore___lam__3___closed__5);
v___x_1135_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1133_);
lean_ctor_set(v___x_1135_, 1, v___x_1134_);
v___x_1136_ = l_Lean_indentExpr(v___y_1127_);
v___x_1137_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1135_);
lean_ctor_set(v___x_1137_, 1, v___x_1136_);
v___x_1138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
v___x_1139_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1121_, v_mvarId_1069_, v___x_1138_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
return v___x_1139_;
}
}
else
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1482_; 
lean_dec(v_a_1120_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
lean_dec(v_mvarId_1069_);
v_a_1475_ = lean_ctor_get(v___x_1123_, 0);
v_isSharedCheck_1482_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1477_ = v___x_1123_;
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v___x_1123_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___x_1480_; 
if (v_isShared_1478_ == 0)
{
v___x_1480_ = v___x_1477_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v_a_1475_);
v___x_1480_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
return v___x_1480_;
}
}
}
}
else
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1490_; 
lean_dec(v_a_1120_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
lean_dec(v_mvarId_1069_);
v_a_1483_ = lean_ctor_get(v___x_1122_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1122_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1485_ = v___x_1122_;
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1122_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1488_; 
if (v_isShared_1486_ == 0)
{
v___x_1488_ = v___x_1485_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_a_1483_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
else
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1498_; 
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v_fvarSubst_1073_);
lean_dec(v_hFVarId_1070_);
lean_dec(v_mvarId_1069_);
v_a_1491_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1493_ = v___x_1119_;
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1119_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1496_; 
if (v_isShared_1494_ == 0)
{
v___x_1496_ = v___x_1493_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_a_1491_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
v___jp_1081_:
{
if (v_clearH_1072_ == 0)
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
lean_dec(v___y_1088_);
lean_dec_ref(v___y_1087_);
lean_dec(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec(v___y_1084_);
lean_dec_ref(v___y_1083_);
v___x_1089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1089_, 0, v_fvarSubst_1073_);
lean_ctor_set(v___x_1089_, 1, v___y_1082_);
v___x_1090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
return v___x_1090_;
}
else
{
lean_object* v___x_1091_; 
v___x_1091_ = l_Lean_MVarId_clear(v___y_1082_, v___y_1088_, v___y_1087_, v___y_1086_, v___y_1083_, v___y_1085_);
if (lean_obj_tag(v___x_1091_) == 0)
{
lean_object* v_a_1092_; lean_object* v___x_1093_; 
v_a_1092_ = lean_ctor_get(v___x_1091_, 0);
lean_inc(v_a_1092_);
lean_dec_ref(v___x_1091_);
v___x_1093_ = l_Lean_MVarId_clear(v_a_1092_, v___y_1084_, v___y_1087_, v___y_1086_, v___y_1083_, v___y_1085_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1083_);
lean_dec(v___y_1086_);
lean_dec_ref(v___y_1087_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_object* v_a_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1102_; 
v_a_1094_ = lean_ctor_get(v___x_1093_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1096_ = v___x_1093_;
v_isShared_1097_ = v_isSharedCheck_1102_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_a_1094_);
lean_dec(v___x_1093_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1102_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v___x_1098_; lean_object* v___x_1100_; 
v___x_1098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1098_, 0, v_fvarSubst_1073_);
lean_ctor_set(v___x_1098_, 1, v_a_1094_);
if (v_isShared_1097_ == 0)
{
lean_ctor_set(v___x_1096_, 0, v___x_1098_);
v___x_1100_ = v___x_1096_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v___x_1098_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
else
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
lean_dec(v_fvarSubst_1073_);
v_a_1103_ = lean_ctor_get(v___x_1093_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1093_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1093_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
else
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
lean_dec_ref(v___y_1087_);
lean_dec(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec(v___y_1084_);
lean_dec_ref(v___y_1083_);
lean_dec(v_fvarSubst_1073_);
v_a_1111_ = lean_ctor_get(v___x_1091_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1113_ = v___x_1091_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1091_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_a_1111_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3___boxed(lean_object* v_mvarId_1499_, lean_object* v_hFVarId_1500_, lean_object* v___x_1501_, lean_object* v_clearH_1502_, lean_object* v_fvarSubst_1503_, lean_object* v_symm_1504_, lean_object* v_tryToSkip_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
uint8_t v_clearH_boxed_1511_; uint8_t v_symm_boxed_1512_; uint8_t v_tryToSkip_boxed_1513_; lean_object* v_res_1514_; 
v_clearH_boxed_1511_ = lean_unbox(v_clearH_1502_);
v_symm_boxed_1512_ = lean_unbox(v_symm_1504_);
v_tryToSkip_boxed_1513_ = lean_unbox(v_tryToSkip_1505_);
v_res_1514_ = l_Lean_Meta_substCore___lam__3(v_mvarId_1499_, v_hFVarId_1500_, v___x_1501_, v_clearH_boxed_1511_, v_fvarSubst_1503_, v_symm_boxed_1512_, v_tryToSkip_boxed_1513_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_);
lean_dec(v___x_1501_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore(lean_object* v_mvarId_1515_, lean_object* v_hFVarId_1516_, uint8_t v_symm_1517_, lean_object* v_fvarSubst_1518_, uint8_t v_clearH_1519_, uint8_t v_tryToSkip_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_){
_start:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___f_1530_; lean_object* v___x_1531_; 
v___x_1526_ = lean_box(0);
v___x_1527_ = lean_box(v_clearH_1519_);
v___x_1528_ = lean_box(v_symm_1517_);
v___x_1529_ = lean_box(v_tryToSkip_1520_);
lean_inc(v_mvarId_1515_);
v___f_1530_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__3___boxed), 12, 7);
lean_closure_set(v___f_1530_, 0, v_mvarId_1515_);
lean_closure_set(v___f_1530_, 1, v_hFVarId_1516_);
lean_closure_set(v___f_1530_, 2, v___x_1526_);
lean_closure_set(v___f_1530_, 3, v___x_1527_);
lean_closure_set(v___f_1530_, 4, v_fvarSubst_1518_);
lean_closure_set(v___f_1530_, 5, v___x_1528_);
lean_closure_set(v___f_1530_, 6, v___x_1529_);
v___x_1531_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_1515_, v___f_1530_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___boxed(lean_object* v_mvarId_1532_, lean_object* v_hFVarId_1533_, lean_object* v_symm_1534_, lean_object* v_fvarSubst_1535_, lean_object* v_clearH_1536_, lean_object* v_tryToSkip_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_){
_start:
{
uint8_t v_symm_boxed_1543_; uint8_t v_clearH_boxed_1544_; uint8_t v_tryToSkip_boxed_1545_; lean_object* v_res_1546_; 
v_symm_boxed_1543_ = lean_unbox(v_symm_1534_);
v_clearH_boxed_1544_ = lean_unbox(v_clearH_1536_);
v_tryToSkip_boxed_1545_ = lean_unbox(v_tryToSkip_1537_);
v_res_1546_ = l_Lean_Meta_substCore(v_mvarId_1532_, v_hFVarId_1533_, v_symm_boxed_1543_, v_fvarSubst_1535_, v_clearH_boxed_1544_, v_tryToSkip_boxed_1545_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_);
lean_dec(v_a_1541_);
lean_dec_ref(v_a_1540_);
lean_dec(v_a_1539_);
lean_dec_ref(v_a_1538_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2(lean_object* v_fst_1547_, lean_object* v_fst_1548_, lean_object* v_n_1549_, lean_object* v_i_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_){
_start:
{
lean_object* v___x_1558_; 
v___x_1558_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___redArg(v_fst_1547_, v_fst_1548_, v_n_1549_, v_i_1550_, v_a_1552_);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___boxed(lean_object* v_fst_1559_, lean_object* v_fst_1560_, lean_object* v_n_1561_, lean_object* v_i_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2(v_fst_1559_, v_fst_1560_, v_n_1561_, v_i_1562_, v_a_1563_, v_a_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
lean_dec(v___y_1568_);
lean_dec_ref(v___y_1567_);
lean_dec(v___y_1566_);
lean_dec_ref(v___y_1565_);
lean_dec(v_n_1561_);
lean_dec_ref(v_fst_1560_);
lean_dec_ref(v_fst_1559_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5(lean_object* v_mvarId_1571_, lean_object* v_val_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_){
_start:
{
lean_object* v___x_1578_; 
v___x_1578_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg(v_mvarId_1571_, v_val_1572_, v___y_1574_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___boxed(lean_object* v_mvarId_1579_, lean_object* v_val_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5(v_mvarId_1579_, v_val_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
lean_dec(v___y_1584_);
lean_dec_ref(v___y_1583_);
lean_dec(v___y_1582_);
lean_dec_ref(v___y_1581_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8(lean_object* v_00_u03b1_1587_, lean_object* v_name_1588_, uint8_t v_bi_1589_, lean_object* v_type_1590_, lean_object* v_k_1591_, uint8_t v_kind_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_){
_start:
{
lean_object* v___x_1598_; 
v___x_1598_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg(v_name_1588_, v_bi_1589_, v_type_1590_, v_k_1591_, v_kind_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___boxed(lean_object* v_00_u03b1_1599_, lean_object* v_name_1600_, lean_object* v_bi_1601_, lean_object* v_type_1602_, lean_object* v_k_1603_, lean_object* v_kind_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_){
_start:
{
uint8_t v_bi_boxed_1610_; uint8_t v_kind_boxed_1611_; lean_object* v_res_1612_; 
v_bi_boxed_1610_ = lean_unbox(v_bi_1601_);
v_kind_boxed_1611_ = lean_unbox(v_kind_1604_);
v_res_1612_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8(v_00_u03b1_1599_, v_name_1600_, v_bi_boxed_1610_, v_type_1602_, v_k_1603_, v_kind_boxed_1611_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_);
lean_dec(v___y_1608_);
lean_dec_ref(v___y_1607_);
lean_dec(v___y_1606_);
lean_dec_ref(v___y_1605_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6(lean_object* v_00_u03b1_1613_, lean_object* v_name_1614_, lean_object* v_type_1615_, lean_object* v_k_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_){
_start:
{
lean_object* v___x_1622_; 
v___x_1622_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___redArg(v_name_1614_, v_type_1615_, v_k_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
return v___x_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___boxed(lean_object* v_00_u03b1_1623_, lean_object* v_name_1624_, lean_object* v_type_1625_, lean_object* v_k_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6(v_00_u03b1_1623_, v_name_1624_, v_type_1625_, v_k_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_);
lean_dec(v___y_1630_);
lean_dec_ref(v___y_1629_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6(lean_object* v_00_u03b2_1633_, lean_object* v_x_1634_, lean_object* v_x_1635_, lean_object* v_x_1636_){
_start:
{
lean_object* v___x_1637_; 
v___x_1637_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6___redArg(v_x_1634_, v_x_1635_, v_x_1636_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8(lean_object* v_00_u03b2_1638_, lean_object* v_x_1639_, size_t v_x_1640_, size_t v_x_1641_, lean_object* v_x_1642_, lean_object* v_x_1643_){
_start:
{
lean_object* v___x_1644_; 
v___x_1644_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg(v_x_1639_, v_x_1640_, v_x_1641_, v_x_1642_, v_x_1643_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___boxed(lean_object* v_00_u03b2_1645_, lean_object* v_x_1646_, lean_object* v_x_1647_, lean_object* v_x_1648_, lean_object* v_x_1649_, lean_object* v_x_1650_){
_start:
{
size_t v_x_35620__boxed_1651_; size_t v_x_35621__boxed_1652_; lean_object* v_res_1653_; 
v_x_35620__boxed_1651_ = lean_unbox_usize(v_x_1647_);
lean_dec(v_x_1647_);
v_x_35621__boxed_1652_ = lean_unbox_usize(v_x_1648_);
lean_dec(v_x_1648_);
v_res_1653_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8(v_00_u03b2_1645_, v_x_1646_, v_x_35620__boxed_1651_, v_x_35621__boxed_1652_, v_x_1649_, v_x_1650_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13(lean_object* v_00_u03b2_1654_, lean_object* v_n_1655_, lean_object* v_k_1656_, lean_object* v_v_1657_){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13___redArg(v_n_1655_, v_k_1656_, v_v_1657_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14(lean_object* v_00_u03b2_1659_, size_t v_depth_1660_, lean_object* v_keys_1661_, lean_object* v_vals_1662_, lean_object* v_heq_1663_, lean_object* v_i_1664_, lean_object* v_entries_1665_){
_start:
{
lean_object* v___x_1666_; 
v___x_1666_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___redArg(v_depth_1660_, v_keys_1661_, v_vals_1662_, v_i_1664_, v_entries_1665_);
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___boxed(lean_object* v_00_u03b2_1667_, lean_object* v_depth_1668_, lean_object* v_keys_1669_, lean_object* v_vals_1670_, lean_object* v_heq_1671_, lean_object* v_i_1672_, lean_object* v_entries_1673_){
_start:
{
size_t v_depth_boxed_1674_; lean_object* v_res_1675_; 
v_depth_boxed_1674_ = lean_unbox_usize(v_depth_1668_);
lean_dec(v_depth_1668_);
v_res_1675_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14(v_00_u03b2_1667_, v_depth_boxed_1674_, v_keys_1669_, v_vals_1670_, v_heq_1671_, v_i_1672_, v_entries_1673_);
lean_dec_ref(v_vals_1670_);
lean_dec_ref(v_keys_1669_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13_spec__14(lean_object* v_00_u03b2_1676_, lean_object* v_x_1677_, lean_object* v_x_1678_, lean_object* v_x_1679_, lean_object* v_x_1680_){
_start:
{
lean_object* v___x_1681_; 
v___x_1681_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13_spec__14___redArg(v_x_1677_, v_x_1678_, v_x_1679_, v_x_1680_);
return v___x_1681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0(lean_object* v_fvarId_1685_, lean_object* v_mvarId_1686_, uint8_t v_tryToClear_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_){
_start:
{
lean_object* v___x_1693_; 
lean_inc(v_fvarId_1685_);
v___x_1693_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_1685_, v___y_1688_, v___y_1690_, v___y_1691_);
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v_a_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v_a_1694_ = lean_ctor_get(v___x_1693_, 0);
lean_inc(v_a_1694_);
lean_dec_ref(v___x_1693_);
v___x_1695_ = l_Lean_LocalDecl_type(v_a_1694_);
lean_inc(v___y_1691_);
lean_inc_ref(v___y_1690_);
lean_inc(v___y_1689_);
lean_inc_ref(v___y_1688_);
v___x_1696_ = lean_whnf(v___x_1695_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1781_; 
v_a_1697_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1781_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1699_ = v___x_1696_;
v_isShared_1700_ = v_isSharedCheck_1781_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v___x_1696_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1781_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1701_; lean_object* v___x_1702_; uint8_t v___x_1703_; 
v___x_1701_ = ((lean_object*)(l_Lean_Meta_heqToEq___lam__0___closed__1));
v___x_1702_ = lean_unsigned_to_nat(4u);
v___x_1703_ = l_Lean_Expr_isAppOfArity(v_a_1697_, v___x_1701_, v___x_1702_);
if (v___x_1703_ == 0)
{
lean_object* v___x_1704_; lean_object* v___x_1706_; 
lean_dec(v_a_1697_);
lean_dec(v_a_1694_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
v___x_1704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1704_, 0, v_fvarId_1685_);
lean_ctor_set(v___x_1704_, 1, v_mvarId_1686_);
if (v_isShared_1700_ == 0)
{
lean_ctor_set(v___x_1699_, 0, v___x_1704_);
v___x_1706_ = v___x_1699_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v___x_1704_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
else
{
lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
lean_del_object(v___x_1699_);
v___x_1708_ = l_Lean_Expr_appFn_x21(v_a_1697_);
v___x_1709_ = l_Lean_Expr_appFn_x21(v___x_1708_);
v___x_1710_ = l_Lean_Expr_appFn_x21(v___x_1709_);
v___x_1711_ = l_Lean_Expr_appArg_x21(v___x_1710_);
lean_dec_ref(v___x_1710_);
v___x_1712_ = l_Lean_Expr_appArg_x21(v___x_1708_);
lean_dec_ref(v___x_1708_);
v___x_1713_ = l_Lean_Meta_isExprDefEq(v___x_1711_, v___x_1712_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1772_; 
v_a_1714_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1716_ = v___x_1713_;
v_isShared_1717_ = v_isSharedCheck_1772_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1713_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1772_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
uint8_t v___x_1718_; 
v___x_1718_ = lean_unbox(v_a_1714_);
if (v___x_1718_ == 0)
{
lean_object* v___x_1719_; lean_object* v___x_1721_; 
lean_dec(v_a_1714_);
lean_dec_ref(v___x_1709_);
lean_dec(v_a_1697_);
lean_dec(v_a_1694_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
v___x_1719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1719_, 0, v_fvarId_1685_);
lean_ctor_set(v___x_1719_, 1, v_mvarId_1686_);
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 0, v___x_1719_);
v___x_1721_ = v___x_1716_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v___x_1719_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
return v___x_1721_;
}
}
else
{
lean_object* v___x_1723_; lean_object* v___x_1724_; 
lean_del_object(v___x_1716_);
lean_inc(v_fvarId_1685_);
v___x_1723_ = l_Lean_mkFVar(v_fvarId_1685_);
v___x_1724_ = l_Lean_Meta_mkEqOfHEq(v___x_1723_, v___x_1703_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
if (lean_obj_tag(v___x_1724_) == 0)
{
lean_object* v_a_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v_a_1725_ = lean_ctor_get(v___x_1724_, 0);
lean_inc(v_a_1725_);
lean_dec_ref(v___x_1724_);
v___x_1726_ = l_Lean_Expr_appArg_x21(v___x_1709_);
lean_dec_ref(v___x_1709_);
v___x_1727_ = l_Lean_Expr_appArg_x21(v_a_1697_);
lean_dec(v_a_1697_);
v___x_1728_ = l_Lean_Meta_mkEq(v___x_1726_, v___x_1727_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v_a_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v_a_1729_ = lean_ctor_get(v___x_1728_, 0);
lean_inc(v_a_1729_);
lean_dec_ref(v___x_1728_);
v___x_1730_ = l_Lean_LocalDecl_userName(v_a_1694_);
lean_dec(v_a_1694_);
v___x_1731_ = l_Lean_MVarId_assert(v_mvarId_1686_, v___x_1730_, v_a_1729_, v_a_1725_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
if (lean_obj_tag(v___x_1731_) == 0)
{
if (v_tryToClear_1687_ == 0)
{
lean_object* v_a_1732_; uint8_t v___x_1733_; lean_object* v___x_1734_; 
lean_dec(v_fvarId_1685_);
v_a_1732_ = lean_ctor_get(v___x_1731_, 0);
lean_inc(v_a_1732_);
lean_dec_ref(v___x_1731_);
v___x_1733_ = lean_unbox(v_a_1714_);
lean_dec(v_a_1714_);
v___x_1734_ = l_Lean_Meta_intro1Core(v_a_1732_, v___x_1733_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
return v___x_1734_;
}
else
{
lean_object* v_a_1735_; lean_object* v___x_1736_; 
v_a_1735_ = lean_ctor_get(v___x_1731_, 0);
lean_inc(v_a_1735_);
lean_dec_ref(v___x_1731_);
v___x_1736_ = l_Lean_MVarId_tryClear(v_a_1735_, v_fvarId_1685_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
if (lean_obj_tag(v___x_1736_) == 0)
{
lean_object* v_a_1737_; uint8_t v___x_1738_; lean_object* v___x_1739_; 
v_a_1737_ = lean_ctor_get(v___x_1736_, 0);
lean_inc(v_a_1737_);
lean_dec_ref(v___x_1736_);
v___x_1738_ = lean_unbox(v_a_1714_);
lean_dec(v_a_1714_);
v___x_1739_ = l_Lean_Meta_intro1Core(v_a_1737_, v___x_1738_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
return v___x_1739_;
}
else
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1747_; 
lean_dec(v_a_1714_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
v_a_1740_ = lean_ctor_get(v___x_1736_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1736_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1742_ = v___x_1736_;
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1736_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1745_; 
if (v_isShared_1743_ == 0)
{
v___x_1745_ = v___x_1742_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_a_1740_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
}
}
else
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1755_; 
lean_dec(v_a_1714_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec(v_fvarId_1685_);
v_a_1748_ = lean_ctor_get(v___x_1731_, 0);
v_isSharedCheck_1755_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1750_ = v___x_1731_;
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1731_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1753_; 
if (v_isShared_1751_ == 0)
{
v___x_1753_ = v___x_1750_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v_a_1748_);
v___x_1753_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
return v___x_1753_;
}
}
}
}
else
{
lean_object* v_a_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1763_; 
lean_dec(v_a_1725_);
lean_dec(v_a_1714_);
lean_dec(v_a_1694_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec(v_mvarId_1686_);
lean_dec(v_fvarId_1685_);
v_a_1756_ = lean_ctor_get(v___x_1728_, 0);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1728_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1758_ = v___x_1728_;
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_a_1756_);
lean_dec(v___x_1728_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1761_; 
if (v_isShared_1759_ == 0)
{
v___x_1761_ = v___x_1758_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v_a_1756_);
v___x_1761_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
return v___x_1761_;
}
}
}
}
else
{
lean_object* v_a_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1771_; 
lean_dec(v_a_1714_);
lean_dec_ref(v___x_1709_);
lean_dec(v_a_1697_);
lean_dec(v_a_1694_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec(v_mvarId_1686_);
lean_dec(v_fvarId_1685_);
v_a_1764_ = lean_ctor_get(v___x_1724_, 0);
v_isSharedCheck_1771_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1766_ = v___x_1724_;
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_a_1764_);
lean_dec(v___x_1724_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1769_; 
if (v_isShared_1767_ == 0)
{
v___x_1769_ = v___x_1766_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_a_1764_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
return v___x_1769_;
}
}
}
}
}
}
else
{
lean_object* v_a_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1780_; 
lean_dec_ref(v___x_1709_);
lean_dec(v_a_1697_);
lean_dec(v_a_1694_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec(v_mvarId_1686_);
lean_dec(v_fvarId_1685_);
v_a_1773_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1775_ = v___x_1713_;
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_a_1773_);
lean_dec(v___x_1713_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1778_; 
if (v_isShared_1776_ == 0)
{
v___x_1778_ = v___x_1775_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v_a_1773_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
return v___x_1778_;
}
}
}
}
}
}
else
{
lean_object* v_a_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1789_; 
lean_dec(v_a_1694_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec(v_mvarId_1686_);
lean_dec(v_fvarId_1685_);
v_a_1782_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1789_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1784_ = v___x_1696_;
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_a_1782_);
lean_dec(v___x_1696_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1787_; 
if (v_isShared_1785_ == 0)
{
v___x_1787_ = v___x_1784_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v_a_1782_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
}
}
else
{
lean_object* v_a_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1797_; 
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec(v_mvarId_1686_);
lean_dec(v_fvarId_1685_);
v_a_1790_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1792_ = v___x_1693_;
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_a_1790_);
lean_dec(v___x_1693_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1795_; 
if (v_isShared_1793_ == 0)
{
v___x_1795_ = v___x_1792_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_a_1790_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0___boxed(lean_object* v_fvarId_1798_, lean_object* v_mvarId_1799_, lean_object* v_tryToClear_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_){
_start:
{
uint8_t v_tryToClear_boxed_1806_; lean_object* v_res_1807_; 
v_tryToClear_boxed_1806_ = lean_unbox(v_tryToClear_1800_);
v_res_1807_ = l_Lean_Meta_heqToEq___lam__0(v_fvarId_1798_, v_mvarId_1799_, v_tryToClear_boxed_1806_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
return v_res_1807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq(lean_object* v_mvarId_1808_, lean_object* v_fvarId_1809_, uint8_t v_tryToClear_1810_, lean_object* v_a_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_){
_start:
{
lean_object* v___x_1816_; lean_object* v___f_1817_; lean_object* v___x_1818_; 
v___x_1816_ = lean_box(v_tryToClear_1810_);
lean_inc(v_mvarId_1808_);
v___f_1817_ = lean_alloc_closure((void*)(l_Lean_Meta_heqToEq___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1817_, 0, v_fvarId_1809_);
lean_closure_set(v___f_1817_, 1, v_mvarId_1808_);
lean_closure_set(v___f_1817_, 2, v___x_1816_);
v___x_1818_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_1808_, v___f_1817_, v_a_1811_, v_a_1812_, v_a_1813_, v_a_1814_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___boxed(lean_object* v_mvarId_1819_, lean_object* v_fvarId_1820_, lean_object* v_tryToClear_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_){
_start:
{
uint8_t v_tryToClear_boxed_1827_; lean_object* v_res_1828_; 
v_tryToClear_boxed_1827_ = lean_unbox(v_tryToClear_1821_);
v_res_1828_ = l_Lean_Meta_heqToEq(v_mvarId_1819_, v_fvarId_1820_, v_tryToClear_boxed_1827_, v_a_1822_, v_a_1823_, v_a_1824_, v_a_1825_);
lean_dec(v_a_1825_);
lean_dec_ref(v_a_1824_);
lean_dec(v_a_1823_);
lean_dec_ref(v_a_1822_);
return v_res_1828_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(lean_object* v_x_1832_, lean_object* v_as_1833_, size_t v_sz_1834_, size_t v_i_1835_, lean_object* v_b_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_){
_start:
{
lean_object* v_a_1843_; uint8_t v___x_1847_; 
v___x_1847_ = lean_usize_dec_lt(v_i_1835_, v_sz_1834_);
if (v___x_1847_ == 0)
{
lean_object* v___x_1848_; 
lean_dec(v_x_1832_);
v___x_1848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1848_, 0, v_b_1836_);
return v___x_1848_;
}
else
{
lean_object* v___x_1849_; lean_object* v_a_1851_; lean_object* v___x_1855_; lean_object* v_a_1856_; 
lean_dec_ref(v_b_1836_);
v___x_1849_ = lean_box(0);
v___x_1855_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_a_1856_ = lean_array_uget(v_as_1833_, v_i_1835_);
if (lean_obj_tag(v_a_1856_) == 0)
{
v_a_1843_ = v___x_1855_;
goto v___jp_1842_;
}
else
{
lean_object* v_val_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1944_; 
v_val_1857_ = lean_ctor_get(v_a_1856_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v_a_1856_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1859_ = v_a_1856_;
v_isShared_1860_ = v_isSharedCheck_1944_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_val_1857_);
lean_dec(v_a_1856_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1944_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
uint8_t v___x_1868_; 
v___x_1868_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1857_);
if (v___x_1868_ == 0)
{
lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1874_ = l_Lean_LocalDecl_type(v_val_1857_);
v___x_1875_ = l_Lean_Meta_matchEq_x3f(v___x_1874_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_);
if (lean_obj_tag(v___x_1875_) == 0)
{
lean_object* v_a_1876_; 
v_a_1876_ = lean_ctor_get(v___x_1875_, 0);
lean_inc(v_a_1876_);
lean_dec_ref(v___x_1875_);
if (lean_obj_tag(v_a_1876_) == 1)
{
lean_object* v_val_1877_; lean_object* v_snd_1878_; lean_object* v_fst_1879_; lean_object* v_snd_1880_; lean_object* v___x_1881_; 
v_val_1877_ = lean_ctor_get(v_a_1876_, 0);
lean_inc(v_val_1877_);
lean_dec_ref(v_a_1876_);
v_snd_1878_ = lean_ctor_get(v_val_1877_, 1);
lean_inc(v_snd_1878_);
lean_dec(v_val_1877_);
v_fst_1879_ = lean_ctor_get(v_snd_1878_, 0);
lean_inc(v_fst_1879_);
v_snd_1880_ = lean_ctor_get(v_snd_1878_, 1);
lean_inc(v_snd_1880_);
lean_dec(v_snd_1878_);
v___x_1881_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_fst_1879_, v___y_1838_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1883_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
lean_inc(v_a_1882_);
lean_dec_ref(v___x_1881_);
v___x_1883_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_snd_1880_, v___y_1838_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v_a_1884_; lean_object* v___y_1886_; uint8_t v___y_1887_; lean_object* v___y_1900_; uint8_t v___y_1905_; uint8_t v___x_1917_; 
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
lean_inc(v_a_1884_);
lean_dec_ref(v___x_1883_);
v___x_1917_ = l_Lean_Expr_isFVar(v_a_1884_);
if (v___x_1917_ == 0)
{
v___y_1905_ = v___x_1917_;
goto v___jp_1904_;
}
else
{
lean_object* v___x_1918_; uint8_t v___x_1919_; 
v___x_1918_ = l_Lean_Expr_fvarId_x21(v_a_1884_);
v___x_1919_ = l_Lean_instBEqFVarId_beq(v___x_1918_, v_x_1832_);
lean_dec(v___x_1918_);
v___y_1905_ = v___x_1919_;
goto v___jp_1904_;
}
v___jp_1885_:
{
if (v___y_1887_ == 0)
{
lean_dec(v_a_1884_);
lean_dec(v_val_1857_);
v_a_1843_ = v___x_1855_;
goto v___jp_1842_;
}
else
{
lean_object* v___x_1888_; 
lean_inc(v_x_1832_);
v___x_1888_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_a_1884_, v_x_1832_, v___y_1886_);
if (lean_obj_tag(v___x_1888_) == 0)
{
lean_object* v_a_1889_; uint8_t v___x_1890_; 
v_a_1889_ = lean_ctor_get(v___x_1888_, 0);
lean_inc(v_a_1889_);
lean_dec_ref(v___x_1888_);
v___x_1890_ = lean_unbox(v_a_1889_);
lean_dec(v_a_1889_);
if (v___x_1890_ == 0)
{
lean_dec(v_x_1832_);
goto v___jp_1869_;
}
else
{
if (v___x_1868_ == 0)
{
lean_dec(v_val_1857_);
v_a_1843_ = v___x_1855_;
goto v___jp_1842_;
}
else
{
lean_dec(v_x_1832_);
goto v___jp_1869_;
}
}
}
else
{
lean_object* v_a_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1898_; 
lean_dec(v_val_1857_);
lean_dec(v_x_1832_);
v_a_1891_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1898_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1893_ = v___x_1888_;
v_isShared_1894_ = v_isSharedCheck_1898_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_a_1891_);
lean_dec(v___x_1888_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1898_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1896_; 
if (v_isShared_1894_ == 0)
{
v___x_1896_ = v___x_1893_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v_a_1891_);
v___x_1896_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
return v___x_1896_;
}
}
}
}
}
v___jp_1899_:
{
uint8_t v___x_1901_; 
v___x_1901_ = l_Lean_Expr_isFVar(v_a_1882_);
if (v___x_1901_ == 0)
{
lean_dec(v_a_1882_);
v___y_1886_ = v___y_1900_;
v___y_1887_ = v___x_1901_;
goto v___jp_1885_;
}
else
{
lean_object* v___x_1902_; uint8_t v___x_1903_; 
v___x_1902_ = l_Lean_Expr_fvarId_x21(v_a_1882_);
lean_dec(v_a_1882_);
v___x_1903_ = l_Lean_instBEqFVarId_beq(v___x_1902_, v_x_1832_);
lean_dec(v___x_1902_);
v___y_1886_ = v___y_1900_;
v___y_1887_ = v___x_1903_;
goto v___jp_1885_;
}
}
v___jp_1904_:
{
if (v___y_1905_ == 0)
{
lean_del_object(v___x_1859_);
v___y_1900_ = v___y_1838_;
goto v___jp_1899_;
}
else
{
lean_object* v___x_1906_; 
lean_inc(v_x_1832_);
lean_inc(v_a_1882_);
v___x_1906_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_a_1882_, v_x_1832_, v___y_1838_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v_a_1907_; uint8_t v___x_1908_; 
v_a_1907_ = lean_ctor_get(v___x_1906_, 0);
lean_inc(v_a_1907_);
lean_dec_ref(v___x_1906_);
v___x_1908_ = lean_unbox(v_a_1907_);
lean_dec(v_a_1907_);
if (v___x_1908_ == 0)
{
lean_dec(v_a_1884_);
lean_dec(v_a_1882_);
lean_dec(v_x_1832_);
goto v___jp_1861_;
}
else
{
if (v___x_1868_ == 0)
{
lean_del_object(v___x_1859_);
v___y_1900_ = v___y_1838_;
goto v___jp_1899_;
}
else
{
lean_dec(v_a_1884_);
lean_dec(v_a_1882_);
lean_dec(v_x_1832_);
goto v___jp_1861_;
}
}
}
else
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1916_; 
lean_dec(v_a_1884_);
lean_dec(v_a_1882_);
lean_del_object(v___x_1859_);
lean_dec(v_val_1857_);
lean_dec(v_x_1832_);
v_a_1909_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1911_ = v___x_1906_;
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1906_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1914_; 
if (v_isShared_1912_ == 0)
{
v___x_1914_ = v___x_1911_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_a_1909_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
}
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
lean_dec(v_a_1882_);
lean_del_object(v___x_1859_);
lean_dec(v_val_1857_);
lean_dec(v_x_1832_);
v_a_1920_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1883_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1883_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1920_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
else
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
lean_dec(v_snd_1880_);
lean_del_object(v___x_1859_);
lean_dec(v_val_1857_);
lean_dec(v_x_1832_);
v_a_1928_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v___x_1881_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1881_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1933_; 
if (v_isShared_1931_ == 0)
{
v___x_1933_ = v___x_1930_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_a_1928_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
}
}
else
{
lean_dec(v_a_1876_);
lean_del_object(v___x_1859_);
lean_dec(v_val_1857_);
v_a_1843_ = v___x_1855_;
goto v___jp_1842_;
}
}
else
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1943_; 
lean_del_object(v___x_1859_);
lean_dec(v_val_1857_);
lean_dec(v_x_1832_);
v_a_1936_ = lean_ctor_get(v___x_1875_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1875_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1938_ = v___x_1875_;
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1875_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1939_ == 0)
{
v___x_1941_ = v___x_1938_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_a_1936_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
}
else
{
lean_del_object(v___x_1859_);
lean_dec(v_val_1857_);
v_a_1843_ = v___x_1855_;
goto v___jp_1842_;
}
v___jp_1861_:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1866_; 
v___x_1862_ = l_Lean_LocalDecl_fvarId(v_val_1857_);
lean_dec(v_val_1857_);
v___x_1863_ = lean_box(v___x_1847_);
v___x_1864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1862_);
lean_ctor_set(v___x_1864_, 1, v___x_1863_);
if (v_isShared_1860_ == 0)
{
lean_ctor_set(v___x_1859_, 0, v___x_1864_);
v___x_1866_ = v___x_1859_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v___x_1864_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
v_a_1851_ = v___x_1866_;
goto v___jp_1850_;
}
}
v___jp_1869_:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1870_ = l_Lean_LocalDecl_fvarId(v_val_1857_);
lean_dec(v_val_1857_);
v___x_1871_ = lean_box(v___x_1868_);
v___x_1872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1870_);
lean_ctor_set(v___x_1872_, 1, v___x_1871_);
v___x_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1873_, 0, v___x_1872_);
v_a_1851_ = v___x_1873_;
goto v___jp_1850_;
}
}
}
v___jp_1850_:
{
lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1852_, 0, v_a_1851_);
v___x_1853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1852_);
lean_ctor_set(v___x_1853_, 1, v___x_1849_);
v___x_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1853_);
return v___x_1854_;
}
}
v___jp_1842_:
{
size_t v___x_1844_; size_t v___x_1845_; 
v___x_1844_ = ((size_t)1ULL);
v___x_1845_ = lean_usize_add(v_i_1835_, v___x_1844_);
lean_inc_ref(v_a_1843_);
v_i_1835_ = v___x_1845_;
v_b_1836_ = v_a_1843_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_x_1945_, lean_object* v_as_1946_, lean_object* v_sz_1947_, lean_object* v_i_1948_, lean_object* v_b_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_){
_start:
{
size_t v_sz_boxed_1955_; size_t v_i_boxed_1956_; lean_object* v_res_1957_; 
v_sz_boxed_1955_ = lean_unbox_usize(v_sz_1947_);
lean_dec(v_sz_1947_);
v_i_boxed_1956_ = lean_unbox_usize(v_i_1948_);
lean_dec(v_i_1948_);
v_res_1957_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(v_x_1945_, v_as_1946_, v_sz_boxed_1955_, v_i_boxed_1956_, v_b_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_);
lean_dec(v___y_1953_);
lean_dec_ref(v___y_1952_);
lean_dec(v___y_1951_);
lean_dec_ref(v___y_1950_);
lean_dec_ref(v_as_1946_);
return v_res_1957_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(lean_object* v_x_1958_, lean_object* v_as_1959_, size_t v_sz_1960_, size_t v_i_1961_, lean_object* v_b_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_){
_start:
{
lean_object* v_a_1969_; uint8_t v___x_1973_; 
v___x_1973_ = lean_usize_dec_lt(v_i_1961_, v_sz_1960_);
if (v___x_1973_ == 0)
{
lean_object* v___x_1974_; 
lean_dec(v_x_1958_);
v___x_1974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1974_, 0, v_b_1962_);
return v___x_1974_;
}
else
{
lean_object* v___x_1975_; lean_object* v_a_1977_; lean_object* v___x_1981_; lean_object* v_a_1982_; 
lean_dec_ref(v_b_1962_);
v___x_1975_ = lean_box(0);
v___x_1981_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_a_1982_ = lean_array_uget(v_as_1959_, v_i_1961_);
if (lean_obj_tag(v_a_1982_) == 0)
{
v_a_1969_ = v___x_1981_;
goto v___jp_1968_;
}
else
{
lean_object* v_val_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_2070_; 
v_val_1983_ = lean_ctor_get(v_a_1982_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v_a_1982_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_1985_ = v_a_1982_;
v_isShared_1986_ = v_isSharedCheck_2070_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_val_1983_);
lean_dec(v_a_1982_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_2070_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
uint8_t v___x_1994_; 
v___x_1994_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1983_);
if (v___x_1994_ == 0)
{
lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_2000_ = l_Lean_LocalDecl_type(v_val_1983_);
v___x_2001_ = l_Lean_Meta_matchEq_x3f(v___x_2000_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_);
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v_a_2002_; 
v_a_2002_ = lean_ctor_get(v___x_2001_, 0);
lean_inc(v_a_2002_);
lean_dec_ref(v___x_2001_);
if (lean_obj_tag(v_a_2002_) == 1)
{
lean_object* v_val_2003_; lean_object* v_snd_2004_; lean_object* v_fst_2005_; lean_object* v_snd_2006_; lean_object* v___x_2007_; 
v_val_2003_ = lean_ctor_get(v_a_2002_, 0);
lean_inc(v_val_2003_);
lean_dec_ref(v_a_2002_);
v_snd_2004_ = lean_ctor_get(v_val_2003_, 1);
lean_inc(v_snd_2004_);
lean_dec(v_val_2003_);
v_fst_2005_ = lean_ctor_get(v_snd_2004_, 0);
lean_inc(v_fst_2005_);
v_snd_2006_ = lean_ctor_get(v_snd_2004_, 1);
lean_inc(v_snd_2006_);
lean_dec(v_snd_2004_);
v___x_2007_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_fst_2005_, v___y_1964_);
if (lean_obj_tag(v___x_2007_) == 0)
{
lean_object* v_a_2008_; lean_object* v___x_2009_; 
v_a_2008_ = lean_ctor_get(v___x_2007_, 0);
lean_inc(v_a_2008_);
lean_dec_ref(v___x_2007_);
v___x_2009_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_snd_2006_, v___y_1964_);
if (lean_obj_tag(v___x_2009_) == 0)
{
lean_object* v_a_2010_; lean_object* v___y_2012_; uint8_t v___y_2013_; lean_object* v___y_2026_; uint8_t v___y_2031_; uint8_t v___x_2043_; 
v_a_2010_ = lean_ctor_get(v___x_2009_, 0);
lean_inc(v_a_2010_);
lean_dec_ref(v___x_2009_);
v___x_2043_ = l_Lean_Expr_isFVar(v_a_2010_);
if (v___x_2043_ == 0)
{
v___y_2031_ = v___x_2043_;
goto v___jp_2030_;
}
else
{
lean_object* v___x_2044_; uint8_t v___x_2045_; 
v___x_2044_ = l_Lean_Expr_fvarId_x21(v_a_2010_);
v___x_2045_ = l_Lean_instBEqFVarId_beq(v___x_2044_, v_x_1958_);
lean_dec(v___x_2044_);
v___y_2031_ = v___x_2045_;
goto v___jp_2030_;
}
v___jp_2011_:
{
if (v___y_2013_ == 0)
{
lean_dec(v_a_2010_);
lean_dec(v_val_1983_);
v_a_1969_ = v___x_1981_;
goto v___jp_1968_;
}
else
{
lean_object* v___x_2014_; 
lean_inc(v_x_1958_);
v___x_2014_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_a_2010_, v_x_1958_, v___y_2012_);
if (lean_obj_tag(v___x_2014_) == 0)
{
lean_object* v_a_2015_; uint8_t v___x_2016_; 
v_a_2015_ = lean_ctor_get(v___x_2014_, 0);
lean_inc(v_a_2015_);
lean_dec_ref(v___x_2014_);
v___x_2016_ = lean_unbox(v_a_2015_);
lean_dec(v_a_2015_);
if (v___x_2016_ == 0)
{
lean_dec(v_x_1958_);
goto v___jp_1995_;
}
else
{
if (v___x_1994_ == 0)
{
lean_dec(v_val_1983_);
v_a_1969_ = v___x_1981_;
goto v___jp_1968_;
}
else
{
lean_dec(v_x_1958_);
goto v___jp_1995_;
}
}
}
else
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
lean_dec(v_val_1983_);
lean_dec(v_x_1958_);
v_a_2017_ = lean_ctor_get(v___x_2014_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2014_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2019_ = v___x_2014_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2014_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2017_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
}
}
v___jp_2025_:
{
uint8_t v___x_2027_; 
v___x_2027_ = l_Lean_Expr_isFVar(v_a_2008_);
if (v___x_2027_ == 0)
{
lean_dec(v_a_2008_);
v___y_2012_ = v___y_2026_;
v___y_2013_ = v___x_2027_;
goto v___jp_2011_;
}
else
{
lean_object* v___x_2028_; uint8_t v___x_2029_; 
v___x_2028_ = l_Lean_Expr_fvarId_x21(v_a_2008_);
lean_dec(v_a_2008_);
v___x_2029_ = l_Lean_instBEqFVarId_beq(v___x_2028_, v_x_1958_);
lean_dec(v___x_2028_);
v___y_2012_ = v___y_2026_;
v___y_2013_ = v___x_2029_;
goto v___jp_2011_;
}
}
v___jp_2030_:
{
if (v___y_2031_ == 0)
{
lean_del_object(v___x_1985_);
v___y_2026_ = v___y_1964_;
goto v___jp_2025_;
}
else
{
lean_object* v___x_2032_; 
lean_inc(v_x_1958_);
lean_inc(v_a_2008_);
v___x_2032_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_a_2008_, v_x_1958_, v___y_1964_);
if (lean_obj_tag(v___x_2032_) == 0)
{
lean_object* v_a_2033_; uint8_t v___x_2034_; 
v_a_2033_ = lean_ctor_get(v___x_2032_, 0);
lean_inc(v_a_2033_);
lean_dec_ref(v___x_2032_);
v___x_2034_ = lean_unbox(v_a_2033_);
lean_dec(v_a_2033_);
if (v___x_2034_ == 0)
{
lean_dec(v_a_2010_);
lean_dec(v_a_2008_);
lean_dec(v_x_1958_);
goto v___jp_1987_;
}
else
{
if (v___x_1994_ == 0)
{
lean_del_object(v___x_1985_);
v___y_2026_ = v___y_1964_;
goto v___jp_2025_;
}
else
{
lean_dec(v_a_2010_);
lean_dec(v_a_2008_);
lean_dec(v_x_1958_);
goto v___jp_1987_;
}
}
}
else
{
lean_object* v_a_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2042_; 
lean_dec(v_a_2010_);
lean_dec(v_a_2008_);
lean_del_object(v___x_1985_);
lean_dec(v_val_1983_);
lean_dec(v_x_1958_);
v_a_2035_ = lean_ctor_get(v___x_2032_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2037_ = v___x_2032_;
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_a_2035_);
lean_dec(v___x_2032_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
lean_object* v___x_2040_; 
if (v_isShared_2038_ == 0)
{
v___x_2040_ = v___x_2037_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v_a_2035_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
return v___x_2040_;
}
}
}
}
}
}
else
{
lean_object* v_a_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2053_; 
lean_dec(v_a_2008_);
lean_del_object(v___x_1985_);
lean_dec(v_val_1983_);
lean_dec(v_x_1958_);
v_a_2046_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2053_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2053_ == 0)
{
v___x_2048_ = v___x_2009_;
v_isShared_2049_ = v_isSharedCheck_2053_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_a_2046_);
lean_dec(v___x_2009_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2053_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v___x_2051_; 
if (v_isShared_2049_ == 0)
{
v___x_2051_ = v___x_2048_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v_a_2046_);
v___x_2051_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
return v___x_2051_;
}
}
}
}
else
{
lean_object* v_a_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2061_; 
lean_dec(v_snd_2006_);
lean_del_object(v___x_1985_);
lean_dec(v_val_1983_);
lean_dec(v_x_1958_);
v_a_2054_ = lean_ctor_get(v___x_2007_, 0);
v_isSharedCheck_2061_ = !lean_is_exclusive(v___x_2007_);
if (v_isSharedCheck_2061_ == 0)
{
v___x_2056_ = v___x_2007_;
v_isShared_2057_ = v_isSharedCheck_2061_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_a_2054_);
lean_dec(v___x_2007_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2061_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
lean_object* v___x_2059_; 
if (v_isShared_2057_ == 0)
{
v___x_2059_ = v___x_2056_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v_a_2054_);
v___x_2059_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
return v___x_2059_;
}
}
}
}
else
{
lean_dec(v_a_2002_);
lean_del_object(v___x_1985_);
lean_dec(v_val_1983_);
v_a_1969_ = v___x_1981_;
goto v___jp_1968_;
}
}
else
{
lean_object* v_a_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2069_; 
lean_del_object(v___x_1985_);
lean_dec(v_val_1983_);
lean_dec(v_x_1958_);
v_a_2062_ = lean_ctor_get(v___x_2001_, 0);
v_isSharedCheck_2069_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2064_ = v___x_2001_;
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_a_2062_);
lean_dec(v___x_2001_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
if (v_isShared_2065_ == 0)
{
v___x_2067_ = v___x_2064_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v_a_2062_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
return v___x_2067_;
}
}
}
}
else
{
lean_del_object(v___x_1985_);
lean_dec(v_val_1983_);
v_a_1969_ = v___x_1981_;
goto v___jp_1968_;
}
v___jp_1987_:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1992_; 
v___x_1988_ = l_Lean_LocalDecl_fvarId(v_val_1983_);
lean_dec(v_val_1983_);
v___x_1989_ = lean_box(v___x_1973_);
v___x_1990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1990_, 0, v___x_1988_);
lean_ctor_set(v___x_1990_, 1, v___x_1989_);
if (v_isShared_1986_ == 0)
{
lean_ctor_set(v___x_1985_, 0, v___x_1990_);
v___x_1992_ = v___x_1985_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v___x_1990_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
v_a_1977_ = v___x_1992_;
goto v___jp_1976_;
}
}
v___jp_1995_:
{
lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1996_ = l_Lean_LocalDecl_fvarId(v_val_1983_);
lean_dec(v_val_1983_);
v___x_1997_ = lean_box(v___x_1994_);
v___x_1998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1998_, 0, v___x_1996_);
lean_ctor_set(v___x_1998_, 1, v___x_1997_);
v___x_1999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1999_, 0, v___x_1998_);
v_a_1977_ = v___x_1999_;
goto v___jp_1976_;
}
}
}
v___jp_1976_:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1978_, 0, v_a_1977_);
v___x_1979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1979_, 0, v___x_1978_);
lean_ctor_set(v___x_1979_, 1, v___x_1975_);
v___x_1980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1979_);
return v___x_1980_;
}
}
v___jp_1968_:
{
size_t v___x_1970_; size_t v___x_1971_; lean_object* v___x_1972_; 
v___x_1970_ = ((size_t)1ULL);
v___x_1971_ = lean_usize_add(v_i_1961_, v___x_1970_);
lean_inc_ref(v_a_1969_);
v___x_1972_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(v_x_1958_, v_as_1959_, v_sz_1960_, v___x_1971_, v_a_1969_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_);
return v___x_1972_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2___boxed(lean_object* v_x_2071_, lean_object* v_as_2072_, lean_object* v_sz_2073_, lean_object* v_i_2074_, lean_object* v_b_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_){
_start:
{
size_t v_sz_boxed_2081_; size_t v_i_boxed_2082_; lean_object* v_res_2083_; 
v_sz_boxed_2081_ = lean_unbox_usize(v_sz_2073_);
lean_dec(v_sz_2073_);
v_i_boxed_2082_ = lean_unbox_usize(v_i_2074_);
lean_dec(v_i_2074_);
v_res_2083_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(v_x_2071_, v_as_2072_, v_sz_boxed_2081_, v_i_boxed_2082_, v_b_2075_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_);
lean_dec(v___y_2079_);
lean_dec_ref(v___y_2078_);
lean_dec(v___y_2077_);
lean_dec_ref(v___y_2076_);
lean_dec_ref(v_as_2072_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(lean_object* v_x_2084_, lean_object* v_x_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_){
_start:
{
if (lean_obj_tag(v_x_2085_) == 0)
{
lean_object* v_cs_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; size_t v_sz_2094_; size_t v___x_2095_; lean_object* v___x_2096_; 
v_cs_2091_ = lean_ctor_get(v_x_2085_, 0);
v___x_2092_ = lean_box(0);
v___x_2093_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_sz_2094_ = lean_array_size(v_cs_2091_);
v___x_2095_ = ((size_t)0ULL);
v___x_2096_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(v_x_2084_, v_cs_2091_, v_sz_2094_, v___x_2095_, v___x_2093_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_);
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v_a_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2109_; 
v_a_2097_ = lean_ctor_get(v___x_2096_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v___x_2096_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2099_ = v___x_2096_;
v_isShared_2100_ = v_isSharedCheck_2109_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_a_2097_);
lean_dec(v___x_2096_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2109_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v_fst_2101_; 
v_fst_2101_ = lean_ctor_get(v_a_2097_, 0);
lean_inc(v_fst_2101_);
lean_dec(v_a_2097_);
if (lean_obj_tag(v_fst_2101_) == 0)
{
lean_object* v___x_2103_; 
if (v_isShared_2100_ == 0)
{
lean_ctor_set(v___x_2099_, 0, v___x_2092_);
v___x_2103_ = v___x_2099_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v___x_2092_);
v___x_2103_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
return v___x_2103_;
}
}
else
{
lean_object* v_val_2105_; lean_object* v___x_2107_; 
v_val_2105_ = lean_ctor_get(v_fst_2101_, 0);
lean_inc(v_val_2105_);
lean_dec_ref(v_fst_2101_);
if (v_isShared_2100_ == 0)
{
lean_ctor_set(v___x_2099_, 0, v_val_2105_);
v___x_2107_ = v___x_2099_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v_val_2105_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
}
else
{
lean_object* v_a_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2117_; 
v_a_2110_ = lean_ctor_get(v___x_2096_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2096_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2112_ = v___x_2096_;
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_a_2110_);
lean_dec(v___x_2096_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2115_; 
if (v_isShared_2113_ == 0)
{
v___x_2115_ = v___x_2112_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_a_2110_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
}
else
{
lean_object* v_vs_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; size_t v_sz_2121_; size_t v___x_2122_; lean_object* v___x_2123_; 
v_vs_2118_ = lean_ctor_get(v_x_2085_, 0);
v___x_2119_ = lean_box(0);
v___x_2120_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_sz_2121_ = lean_array_size(v_vs_2118_);
v___x_2122_ = ((size_t)0ULL);
v___x_2123_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(v_x_2084_, v_vs_2118_, v_sz_2121_, v___x_2122_, v___x_2120_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_);
if (lean_obj_tag(v___x_2123_) == 0)
{
lean_object* v_a_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2136_; 
v_a_2124_ = lean_ctor_get(v___x_2123_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2123_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2126_ = v___x_2123_;
v_isShared_2127_ = v_isSharedCheck_2136_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_a_2124_);
lean_dec(v___x_2123_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2136_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v_fst_2128_; 
v_fst_2128_ = lean_ctor_get(v_a_2124_, 0);
lean_inc(v_fst_2128_);
lean_dec(v_a_2124_);
if (lean_obj_tag(v_fst_2128_) == 0)
{
lean_object* v___x_2130_; 
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 0, v___x_2119_);
v___x_2130_ = v___x_2126_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v___x_2119_);
v___x_2130_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
return v___x_2130_;
}
}
else
{
lean_object* v_val_2132_; lean_object* v___x_2134_; 
v_val_2132_ = lean_ctor_get(v_fst_2128_, 0);
lean_inc(v_val_2132_);
lean_dec_ref(v_fst_2128_);
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 0, v_val_2132_);
v___x_2134_ = v___x_2126_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_val_2132_);
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
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2144_; 
v_a_2137_ = lean_ctor_get(v___x_2123_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2123_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2139_ = v___x_2123_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2123_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_2145_, lean_object* v_as_2146_, size_t v_sz_2147_, size_t v_i_2148_, lean_object* v_b_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
uint8_t v___x_2155_; 
v___x_2155_ = lean_usize_dec_lt(v_i_2148_, v_sz_2147_);
if (v___x_2155_ == 0)
{
lean_object* v___x_2156_; 
lean_dec(v_x_2145_);
v___x_2156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2156_, 0, v_b_2149_);
return v___x_2156_;
}
else
{
lean_object* v_a_2157_; lean_object* v___x_2158_; 
lean_dec_ref(v_b_2149_);
v_a_2157_ = lean_array_uget_borrowed(v_as_2146_, v_i_2148_);
lean_inc(v_x_2145_);
v___x_2158_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(v_x_2145_, v_a_2157_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2173_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2161_ = v___x_2158_;
v_isShared_2162_ = v_isSharedCheck_2173_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_dec(v___x_2158_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2173_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2163_; 
v___x_2163_ = lean_box(0);
if (lean_obj_tag(v_a_2159_) == 1)
{
lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2167_; 
lean_dec(v_x_2145_);
v___x_2164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2164_, 0, v_a_2159_);
v___x_2165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2164_);
lean_ctor_set(v___x_2165_, 1, v___x_2163_);
if (v_isShared_2162_ == 0)
{
lean_ctor_set(v___x_2161_, 0, v___x_2165_);
v___x_2167_ = v___x_2161_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v___x_2165_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
else
{
lean_object* v___x_2169_; size_t v___x_2170_; size_t v___x_2171_; 
lean_del_object(v___x_2161_);
lean_dec(v_a_2159_);
v___x_2169_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v___x_2170_ = ((size_t)1ULL);
v___x_2171_ = lean_usize_add(v_i_2148_, v___x_2170_);
v_i_2148_ = v___x_2171_;
v_b_2149_ = v___x_2169_;
goto _start;
}
}
}
else
{
lean_object* v_a_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2181_; 
lean_dec(v_x_2145_);
v_a_2174_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2181_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2176_ = v___x_2158_;
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_a_2174_);
lean_dec(v___x_2158_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v___x_2179_; 
if (v_isShared_2177_ == 0)
{
v___x_2179_ = v___x_2176_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v_a_2174_);
v___x_2179_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
return v___x_2179_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_x_2182_, lean_object* v_as_2183_, lean_object* v_sz_2184_, lean_object* v_i_2185_, lean_object* v_b_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_){
_start:
{
size_t v_sz_boxed_2192_; size_t v_i_boxed_2193_; lean_object* v_res_2194_; 
v_sz_boxed_2192_ = lean_unbox_usize(v_sz_2184_);
lean_dec(v_sz_2184_);
v_i_boxed_2193_ = lean_unbox_usize(v_i_2185_);
lean_dec(v_i_2185_);
v_res_2194_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(v_x_2182_, v_as_2183_, v_sz_boxed_2192_, v_i_boxed_2193_, v_b_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_);
lean_dec(v___y_2190_);
lean_dec_ref(v___y_2189_);
lean_dec(v___y_2188_);
lean_dec_ref(v___y_2187_);
lean_dec_ref(v_as_2183_);
return v_res_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1___boxed(lean_object* v_x_2195_, lean_object* v_x_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_){
_start:
{
lean_object* v_res_2202_; 
v_res_2202_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(v_x_2195_, v_x_2196_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_);
lean_dec(v___y_2200_);
lean_dec_ref(v___y_2199_);
lean_dec(v___y_2198_);
lean_dec_ref(v___y_2197_);
lean_dec_ref(v_x_2196_);
return v_res_2202_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(lean_object* v_x_2203_, lean_object* v_t_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_){
_start:
{
lean_object* v_root_2210_; lean_object* v_tail_2211_; lean_object* v___x_2212_; 
v_root_2210_ = lean_ctor_get(v_t_2204_, 0);
v_tail_2211_ = lean_ctor_get(v_t_2204_, 1);
lean_inc(v_x_2203_);
v___x_2212_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(v_x_2203_, v_root_2210_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_object* v_a_2213_; 
v_a_2213_ = lean_ctor_get(v___x_2212_, 0);
lean_inc(v_a_2213_);
if (lean_obj_tag(v_a_2213_) == 0)
{
lean_object* v___x_2214_; size_t v_sz_2215_; size_t v___x_2216_; lean_object* v___x_2217_; 
lean_dec_ref(v___x_2212_);
v___x_2214_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_sz_2215_ = lean_array_size(v_tail_2211_);
v___x_2216_ = ((size_t)0ULL);
v___x_2217_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(v_x_2203_, v_tail_2211_, v_sz_2215_, v___x_2216_, v___x_2214_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
if (lean_obj_tag(v___x_2217_) == 0)
{
lean_object* v_a_2218_; lean_object* v___x_2220_; uint8_t v_isShared_2221_; uint8_t v_isSharedCheck_2230_; 
v_a_2218_ = lean_ctor_get(v___x_2217_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2217_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2220_ = v___x_2217_;
v_isShared_2221_ = v_isSharedCheck_2230_;
goto v_resetjp_2219_;
}
else
{
lean_inc(v_a_2218_);
lean_dec(v___x_2217_);
v___x_2220_ = lean_box(0);
v_isShared_2221_ = v_isSharedCheck_2230_;
goto v_resetjp_2219_;
}
v_resetjp_2219_:
{
lean_object* v_fst_2222_; 
v_fst_2222_ = lean_ctor_get(v_a_2218_, 0);
lean_inc(v_fst_2222_);
lean_dec(v_a_2218_);
if (lean_obj_tag(v_fst_2222_) == 0)
{
lean_object* v___x_2224_; 
if (v_isShared_2221_ == 0)
{
lean_ctor_set(v___x_2220_, 0, v_a_2213_);
v___x_2224_ = v___x_2220_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_a_2213_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
else
{
lean_object* v_val_2226_; lean_object* v___x_2228_; 
v_val_2226_ = lean_ctor_get(v_fst_2222_, 0);
lean_inc(v_val_2226_);
lean_dec_ref(v_fst_2222_);
if (v_isShared_2221_ == 0)
{
lean_ctor_set(v___x_2220_, 0, v_val_2226_);
v___x_2228_ = v___x_2220_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_val_2226_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
return v___x_2228_;
}
}
}
}
else
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
v_a_2231_ = lean_ctor_get(v___x_2217_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2217_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2217_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2217_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
}
else
{
lean_dec_ref(v_a_2213_);
lean_dec(v_x_2203_);
return v___x_2212_;
}
}
else
{
lean_dec(v_x_2203_);
return v___x_2212_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0___boxed(lean_object* v_x_2239_, lean_object* v_t_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_){
_start:
{
lean_object* v_res_2246_; 
v_res_2246_ = l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(v_x_2239_, v_t_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
lean_dec(v___y_2244_);
lean_dec_ref(v___y_2243_);
lean_dec(v___y_2242_);
lean_dec_ref(v___y_2241_);
lean_dec_ref(v_t_2240_);
return v_res_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(lean_object* v_x_2247_, lean_object* v_lctx_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_){
_start:
{
lean_object* v_decls_2254_; lean_object* v___x_2255_; 
v_decls_2254_ = lean_ctor_get(v_lctx_2248_, 1);
v___x_2255_ = l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(v_x_2247_, v_decls_2254_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_);
return v___x_2255_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0___boxed(lean_object* v_x_2256_, lean_object* v_lctx_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(v_x_2256_, v_lctx_2257_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_);
lean_dec(v___y_2261_);
lean_dec_ref(v___y_2260_);
lean_dec(v___y_2259_);
lean_dec_ref(v___y_2258_);
lean_dec_ref(v_lctx_2257_);
return v_res_2263_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___x_2265_ = ((lean_object*)(l_Lean_Meta_substVar___lam__0___closed__0));
v___x_2266_ = l_Lean_stringToMessageData(v___x_2265_);
return v___x_2266_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; 
v___x_2268_ = ((lean_object*)(l_Lean_Meta_substVar___lam__0___closed__2));
v___x_2269_ = l_Lean_stringToMessageData(v___x_2268_);
return v___x_2269_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2271_ = ((lean_object*)(l_Lean_Meta_substVar___lam__0___closed__4));
v___x_2272_ = l_Lean_stringToMessageData(v___x_2271_);
return v___x_2272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0(lean_object* v_x_2273_, lean_object* v_mvarId_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_){
_start:
{
lean_object* v___y_2281_; lean_object* v___y_2282_; lean_object* v___y_2283_; lean_object* v___y_2284_; lean_object* v___x_2329_; 
lean_inc(v_x_2273_);
v___x_2329_ = l_Lean_FVarId_getDecl___redArg(v_x_2273_, v___y_2275_, v___y_2277_, v___y_2278_);
if (lean_obj_tag(v___x_2329_) == 0)
{
lean_object* v_a_2330_; uint8_t v___x_2331_; uint8_t v___x_2332_; 
v_a_2330_ = lean_ctor_get(v___x_2329_, 0);
lean_inc(v_a_2330_);
lean_dec_ref(v___x_2329_);
v___x_2331_ = 0;
v___x_2332_ = l_Lean_LocalDecl_isLet(v_a_2330_, v___x_2331_);
lean_dec(v_a_2330_);
if (v___x_2332_ == 0)
{
v___y_2281_ = v___y_2275_;
v___y_2282_ = v___y_2276_;
v___y_2283_ = v___y_2277_;
v___y_2284_ = v___y_2278_;
goto v___jp_2280_;
}
else
{
lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; 
v___x_2333_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__1));
v___x_2334_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__3, &l_Lean_Meta_substVar___lam__0___closed__3_once, _init_l_Lean_Meta_substVar___lam__0___closed__3);
lean_inc(v_x_2273_);
v___x_2335_ = l_Lean_mkFVar(v_x_2273_);
v___x_2336_ = l_Lean_MessageData_ofExpr(v___x_2335_);
v___x_2337_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2337_, 0, v___x_2334_);
lean_ctor_set(v___x_2337_, 1, v___x_2336_);
v___x_2338_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__5, &l_Lean_Meta_substVar___lam__0___closed__5_once, _init_l_Lean_Meta_substVar___lam__0___closed__5);
v___x_2339_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2339_, 0, v___x_2337_);
lean_ctor_set(v___x_2339_, 1, v___x_2338_);
v___x_2340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2339_);
lean_inc(v_mvarId_2274_);
v___x_2341_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2333_, v_mvarId_2274_, v___x_2340_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_);
if (lean_obj_tag(v___x_2341_) == 0)
{
lean_dec_ref(v___x_2341_);
v___y_2281_ = v___y_2275_;
v___y_2282_ = v___y_2276_;
v___y_2283_ = v___y_2277_;
v___y_2284_ = v___y_2278_;
goto v___jp_2280_;
}
else
{
lean_object* v_a_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2349_; 
lean_dec(v_mvarId_2274_);
lean_dec(v_x_2273_);
v_a_2342_ = lean_ctor_get(v___x_2341_, 0);
v_isSharedCheck_2349_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2349_ == 0)
{
v___x_2344_ = v___x_2341_;
v_isShared_2345_ = v_isSharedCheck_2349_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_a_2342_);
lean_dec(v___x_2341_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2349_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v___x_2347_; 
if (v_isShared_2345_ == 0)
{
v___x_2347_ = v___x_2344_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v_a_2342_);
v___x_2347_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
return v___x_2347_;
}
}
}
}
}
else
{
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
lean_dec(v_mvarId_2274_);
lean_dec(v_x_2273_);
v_a_2350_ = lean_ctor_get(v___x_2329_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2329_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2352_ = v___x_2329_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___x_2329_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2355_; 
if (v_isShared_2353_ == 0)
{
v___x_2355_ = v___x_2352_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2350_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
v___jp_2280_:
{
lean_object* v_lctx_2285_; lean_object* v___x_2286_; 
v_lctx_2285_ = lean_ctor_get(v___y_2281_, 2);
lean_inc(v_x_2273_);
v___x_2286_ = l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(v_x_2273_, v_lctx_2285_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_);
if (lean_obj_tag(v___x_2286_) == 0)
{
lean_object* v_a_2287_; 
v_a_2287_ = lean_ctor_get(v___x_2286_, 0);
lean_inc(v_a_2287_);
lean_dec_ref(v___x_2286_);
if (lean_obj_tag(v_a_2287_) == 1)
{
lean_object* v_val_2288_; lean_object* v_fst_2289_; lean_object* v_snd_2290_; lean_object* v___x_2291_; uint8_t v___x_2292_; uint8_t v___x_2293_; lean_object* v___x_2294_; 
lean_dec(v_x_2273_);
v_val_2288_ = lean_ctor_get(v_a_2287_, 0);
lean_inc(v_val_2288_);
lean_dec_ref(v_a_2287_);
v_fst_2289_ = lean_ctor_get(v_val_2288_, 0);
lean_inc(v_fst_2289_);
v_snd_2290_ = lean_ctor_get(v_val_2288_, 1);
lean_inc(v_snd_2290_);
lean_dec(v_val_2288_);
v___x_2291_ = lean_box(0);
v___x_2292_ = 1;
v___x_2293_ = lean_unbox(v_snd_2290_);
lean_dec(v_snd_2290_);
v___x_2294_ = l_Lean_Meta_substCore(v_mvarId_2274_, v_fst_2289_, v___x_2293_, v___x_2291_, v___x_2292_, v___x_2292_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_);
if (lean_obj_tag(v___x_2294_) == 0)
{
lean_object* v_a_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2303_; 
v_a_2295_ = lean_ctor_get(v___x_2294_, 0);
v_isSharedCheck_2303_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2303_ == 0)
{
v___x_2297_ = v___x_2294_;
v_isShared_2298_ = v_isSharedCheck_2303_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_a_2295_);
lean_dec(v___x_2294_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2303_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v_snd_2299_; lean_object* v___x_2301_; 
v_snd_2299_ = lean_ctor_get(v_a_2295_, 1);
lean_inc(v_snd_2299_);
lean_dec(v_a_2295_);
if (v_isShared_2298_ == 0)
{
lean_ctor_set(v___x_2297_, 0, v_snd_2299_);
v___x_2301_ = v___x_2297_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v_snd_2299_);
v___x_2301_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
return v___x_2301_;
}
}
}
else
{
lean_object* v_a_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2311_; 
v_a_2304_ = lean_ctor_get(v___x_2294_, 0);
v_isSharedCheck_2311_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2311_ == 0)
{
v___x_2306_ = v___x_2294_;
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_a_2304_);
lean_dec(v___x_2294_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2309_; 
if (v_isShared_2307_ == 0)
{
v___x_2309_ = v___x_2306_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v_a_2304_);
v___x_2309_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
return v___x_2309_;
}
}
}
}
else
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
lean_dec(v_a_2287_);
v___x_2312_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__1));
v___x_2313_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__1, &l_Lean_Meta_substVar___lam__0___closed__1_once, _init_l_Lean_Meta_substVar___lam__0___closed__1);
v___x_2314_ = l_Lean_mkFVar(v_x_2273_);
v___x_2315_ = l_Lean_MessageData_ofExpr(v___x_2314_);
v___x_2316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2313_);
lean_ctor_set(v___x_2316_, 1, v___x_2315_);
v___x_2317_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__17, &l_Lean_Meta_substCore___lam__3___closed__17_once, _init_l_Lean_Meta_substCore___lam__3___closed__17);
v___x_2318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2316_);
lean_ctor_set(v___x_2318_, 1, v___x_2317_);
v___x_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2318_);
v___x_2320_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2312_, v_mvarId_2274_, v___x_2319_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_);
return v___x_2320_;
}
}
else
{
lean_object* v_a_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2328_; 
lean_dec(v_mvarId_2274_);
lean_dec(v_x_2273_);
v_a_2321_ = lean_ctor_get(v___x_2286_, 0);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___x_2286_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2323_ = v___x_2286_;
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_a_2321_);
lean_dec(v___x_2286_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0___boxed(lean_object* v_x_2358_, lean_object* v_mvarId_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_){
_start:
{
lean_object* v_res_2365_; 
v_res_2365_ = l_Lean_Meta_substVar___lam__0(v_x_2358_, v_mvarId_2359_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_);
lean_dec(v___y_2363_);
lean_dec_ref(v___y_2362_);
lean_dec(v___y_2361_);
lean_dec_ref(v___y_2360_);
return v_res_2365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar(lean_object* v_mvarId_2366_, lean_object* v_x_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_){
_start:
{
lean_object* v___f_2373_; lean_object* v___x_2374_; 
lean_inc(v_mvarId_2366_);
v___f_2373_ = lean_alloc_closure((void*)(l_Lean_Meta_substVar___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2373_, 0, v_x_2367_);
lean_closure_set(v___f_2373_, 1, v_mvarId_2366_);
v___x_2374_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_2366_, v___f_2373_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___boxed(lean_object* v_mvarId_2375_, lean_object* v_x_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_){
_start:
{
lean_object* v_res_2382_; 
v_res_2382_ = l_Lean_Meta_substVar(v_mvarId_2375_, v_x_2376_, v_a_2377_, v_a_2378_, v_a_2379_, v_a_2380_);
lean_dec(v_a_2380_);
lean_dec_ref(v_a_2379_);
lean_dec(v_a_2378_);
lean_dec_ref(v_a_2377_);
return v_res_2382_;
}
}
static lean_object* _init_l_Lean_Meta_substEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2384_; lean_object* v___x_2385_; 
v___x_2384_ = ((lean_object*)(l_Lean_Meta_substEq___lam__0___closed__0));
v___x_2385_ = l_Lean_stringToMessageData(v___x_2384_);
return v___x_2385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0(lean_object* v_fst_2386_, lean_object* v_snd_2387_, lean_object* v_fvarSubst_2388_, uint8_t v___x_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_){
_start:
{
lean_object* v_newType_2396_; uint8_t v_symm_2397_; lean_object* v___y_2398_; lean_object* v___y_2399_; lean_object* v___y_2400_; lean_object* v___y_2401_; lean_object* v___x_2413_; 
lean_inc(v_fst_2386_);
v___x_2413_ = l_Lean_FVarId_getDecl___redArg(v_fst_2386_, v___y_2390_, v___y_2392_, v___y_2393_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; lean_object* v___y_2416_; lean_object* v___y_2417_; lean_object* v___y_2418_; lean_object* v___y_2419_; lean_object* v___x_2427_; lean_object* v___x_2428_; 
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
lean_inc(v_a_2414_);
lean_dec_ref(v___x_2413_);
v___x_2427_ = l_Lean_LocalDecl_type(v_a_2414_);
v___x_2428_ = l_Lean_Meta_matchEq_x3f(v___x_2427_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_);
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_object* v_a_2429_; 
v_a_2429_ = lean_ctor_get(v___x_2428_, 0);
lean_inc(v_a_2429_);
lean_dec_ref(v___x_2428_);
if (lean_obj_tag(v_a_2429_) == 1)
{
lean_object* v_val_2430_; lean_object* v_snd_2431_; lean_object* v_fst_2432_; lean_object* v_snd_2433_; lean_object* v___x_2434_; 
v_val_2430_ = lean_ctor_get(v_a_2429_, 0);
lean_inc(v_val_2430_);
lean_dec_ref(v_a_2429_);
v_snd_2431_ = lean_ctor_get(v_val_2430_, 1);
lean_inc(v_snd_2431_);
lean_dec(v_val_2430_);
v_fst_2432_ = lean_ctor_get(v_snd_2431_, 0);
lean_inc(v_fst_2432_);
v_snd_2433_ = lean_ctor_get(v_snd_2431_, 1);
lean_inc_n(v_snd_2433_, 2);
lean_dec(v_snd_2431_);
lean_inc(v___y_2393_);
lean_inc_ref(v___y_2392_);
lean_inc(v___y_2391_);
lean_inc_ref(v___y_2390_);
v___x_2434_ = lean_whnf(v_snd_2433_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_object* v_a_2435_; uint8_t v___x_2436_; 
v_a_2435_ = lean_ctor_get(v___x_2434_, 0);
lean_inc(v_a_2435_);
lean_dec_ref(v___x_2434_);
v___x_2436_ = l_Lean_Expr_isFVar(v_a_2435_);
if (v___x_2436_ == 0)
{
lean_object* v___x_2437_; 
lean_dec(v_a_2435_);
lean_inc(v___y_2393_);
lean_inc_ref(v___y_2392_);
lean_inc(v___y_2391_);
lean_inc_ref(v___y_2390_);
lean_inc(v_fst_2432_);
v___x_2437_ = lean_whnf(v_fst_2432_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_object* v_a_2438_; uint8_t v___y_2440_; uint8_t v___x_2452_; 
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
lean_inc(v_a_2438_);
lean_dec_ref(v___x_2437_);
v___x_2452_ = l_Lean_Expr_isFVar(v_a_2438_);
if (v___x_2452_ == 0)
{
lean_dec(v_a_2438_);
lean_dec(v_snd_2433_);
lean_dec(v_fst_2432_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_fst_2386_);
v___y_2416_ = v___y_2390_;
v___y_2417_ = v___y_2391_;
v___y_2418_ = v___y_2392_;
v___y_2419_ = v___y_2393_;
goto v___jp_2415_;
}
else
{
uint8_t v___x_2453_; 
lean_dec(v_a_2414_);
v___x_2453_ = lean_expr_eqv(v_fst_2432_, v_a_2438_);
lean_dec(v_fst_2432_);
if (v___x_2453_ == 0)
{
v___y_2440_ = v___x_2452_;
goto v___jp_2439_;
}
else
{
v___y_2440_ = v___x_2436_;
goto v___jp_2439_;
}
}
v___jp_2439_:
{
if (v___y_2440_ == 0)
{
lean_object* v___x_2441_; 
lean_dec(v_a_2438_);
lean_dec(v_snd_2433_);
v___x_2441_ = l_Lean_Meta_substCore(v_snd_2387_, v_fst_2386_, v___y_2440_, v_fvarSubst_2388_, v___x_2389_, v___x_2389_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
return v___x_2441_;
}
else
{
lean_object* v___x_2442_; 
v___x_2442_ = l_Lean_Meta_mkEq(v_a_2438_, v_snd_2433_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_);
if (lean_obj_tag(v___x_2442_) == 0)
{
lean_object* v_a_2443_; 
v_a_2443_ = lean_ctor_get(v___x_2442_, 0);
lean_inc(v_a_2443_);
lean_dec_ref(v___x_2442_);
v_newType_2396_ = v_a_2443_;
v_symm_2397_ = v___x_2436_;
v___y_2398_ = v___y_2390_;
v___y_2399_ = v___y_2391_;
v___y_2400_ = v___y_2392_;
v___y_2401_ = v___y_2393_;
goto v___jp_2395_;
}
else
{
lean_object* v_a_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2451_; 
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_snd_2387_);
lean_dec(v_fst_2386_);
v_a_2444_ = lean_ctor_get(v___x_2442_, 0);
v_isSharedCheck_2451_ = !lean_is_exclusive(v___x_2442_);
if (v_isSharedCheck_2451_ == 0)
{
v___x_2446_ = v___x_2442_;
v_isShared_2447_ = v_isSharedCheck_2451_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_a_2444_);
lean_dec(v___x_2442_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2451_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2449_; 
if (v_isShared_2447_ == 0)
{
v___x_2449_ = v___x_2446_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v_a_2444_);
v___x_2449_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
return v___x_2449_;
}
}
}
}
}
}
else
{
lean_object* v_a_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2461_; 
lean_dec(v_snd_2433_);
lean_dec(v_fst_2432_);
lean_dec(v_a_2414_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_snd_2387_);
lean_dec(v_fst_2386_);
v_a_2454_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2461_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2456_ = v___x_2437_;
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_a_2454_);
lean_dec(v___x_2437_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v___x_2459_; 
if (v_isShared_2457_ == 0)
{
v___x_2459_ = v___x_2456_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v_a_2454_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
}
else
{
uint8_t v___x_2462_; 
lean_dec(v_a_2414_);
v___x_2462_ = lean_expr_eqv(v_snd_2433_, v_a_2435_);
lean_dec(v_snd_2433_);
if (v___x_2462_ == 0)
{
if (v___x_2436_ == 0)
{
lean_object* v___x_2463_; 
lean_dec(v_a_2435_);
lean_dec(v_fst_2432_);
v___x_2463_ = l_Lean_Meta_substCore(v_snd_2387_, v_fst_2386_, v___x_2389_, v_fvarSubst_2388_, v___x_2389_, v___x_2389_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
return v___x_2463_;
}
else
{
lean_object* v___x_2464_; 
v___x_2464_ = l_Lean_Meta_mkEq(v_fst_2432_, v_a_2435_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_);
if (lean_obj_tag(v___x_2464_) == 0)
{
lean_object* v_a_2465_; 
v_a_2465_ = lean_ctor_get(v___x_2464_, 0);
lean_inc(v_a_2465_);
lean_dec_ref(v___x_2464_);
v_newType_2396_ = v_a_2465_;
v_symm_2397_ = v___x_2389_;
v___y_2398_ = v___y_2390_;
v___y_2399_ = v___y_2391_;
v___y_2400_ = v___y_2392_;
v___y_2401_ = v___y_2393_;
goto v___jp_2395_;
}
else
{
lean_object* v_a_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2473_; 
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_snd_2387_);
lean_dec(v_fst_2386_);
v_a_2466_ = lean_ctor_get(v___x_2464_, 0);
v_isSharedCheck_2473_ = !lean_is_exclusive(v___x_2464_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2468_ = v___x_2464_;
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_a_2466_);
lean_dec(v___x_2464_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2471_; 
if (v_isShared_2469_ == 0)
{
v___x_2471_ = v___x_2468_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v_a_2466_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
}
}
}
else
{
lean_object* v___x_2474_; 
lean_dec(v_a_2435_);
lean_dec(v_fst_2432_);
v___x_2474_ = l_Lean_Meta_substCore(v_snd_2387_, v_fst_2386_, v___x_2389_, v_fvarSubst_2388_, v___x_2389_, v___x_2389_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
return v___x_2474_;
}
}
}
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2482_; 
lean_dec(v_snd_2433_);
lean_dec(v_fst_2432_);
lean_dec(v_a_2414_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_snd_2387_);
lean_dec(v_fst_2386_);
v_a_2475_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2477_ = v___x_2434_;
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2434_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2480_; 
if (v_isShared_2478_ == 0)
{
v___x_2480_ = v___x_2477_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_a_2475_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
}
else
{
lean_dec(v_a_2429_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_fst_2386_);
v___y_2416_ = v___y_2390_;
v___y_2417_ = v___y_2391_;
v___y_2418_ = v___y_2392_;
v___y_2419_ = v___y_2393_;
goto v___jp_2415_;
}
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
lean_dec(v_a_2414_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_snd_2387_);
lean_dec(v_fst_2386_);
v_a_2483_ = lean_ctor_get(v___x_2428_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2428_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2428_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2428_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
v___jp_2415_:
{
lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2420_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__1));
v___x_2421_ = lean_obj_once(&l_Lean_Meta_substEq___lam__0___closed__1, &l_Lean_Meta_substEq___lam__0___closed__1_once, _init_l_Lean_Meta_substEq___lam__0___closed__1);
v___x_2422_ = l_Lean_LocalDecl_type(v_a_2414_);
lean_dec(v_a_2414_);
v___x_2423_ = l_Lean_indentExpr(v___x_2422_);
v___x_2424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2421_);
lean_ctor_set(v___x_2424_, 1, v___x_2423_);
v___x_2425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2424_);
v___x_2426_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2420_, v_snd_2387_, v___x_2425_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
return v___x_2426_;
}
}
else
{
lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2498_; 
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_snd_2387_);
lean_dec(v_fst_2386_);
v_a_2491_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2493_ = v___x_2413_;
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2413_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2496_; 
if (v_isShared_2494_ == 0)
{
v___x_2496_ = v___x_2493_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_a_2491_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
v___jp_2395_:
{
lean_object* v___x_2402_; 
lean_inc(v_fst_2386_);
v___x_2402_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_snd_2387_, v_fst_2386_, v_newType_2396_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_);
if (lean_obj_tag(v___x_2402_) == 0)
{
lean_object* v_a_2403_; lean_object* v___x_2404_; 
v_a_2403_ = lean_ctor_get(v___x_2402_, 0);
lean_inc(v_a_2403_);
lean_dec_ref(v___x_2402_);
v___x_2404_ = l_Lean_Meta_substCore(v_a_2403_, v_fst_2386_, v_symm_2397_, v_fvarSubst_2388_, v___x_2389_, v___x_2389_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_);
lean_dec(v___y_2401_);
lean_dec_ref(v___y_2400_);
lean_dec(v___y_2399_);
lean_dec_ref(v___y_2398_);
return v___x_2404_;
}
else
{
lean_object* v_a_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2412_; 
lean_dec(v___y_2401_);
lean_dec_ref(v___y_2400_);
lean_dec(v___y_2399_);
lean_dec_ref(v___y_2398_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_fst_2386_);
v_a_2405_ = lean_ctor_get(v___x_2402_, 0);
v_isSharedCheck_2412_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2407_ = v___x_2402_;
v_isShared_2408_ = v_isSharedCheck_2412_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_a_2405_);
lean_dec(v___x_2402_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2412_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
lean_object* v___x_2410_; 
if (v_isShared_2408_ == 0)
{
v___x_2410_ = v___x_2407_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v_a_2405_);
v___x_2410_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
return v___x_2410_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0___boxed(lean_object* v_fst_2499_, lean_object* v_snd_2500_, lean_object* v_fvarSubst_2501_, lean_object* v___x_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_){
_start:
{
uint8_t v___x_1660__boxed_2508_; lean_object* v_res_2509_; 
v___x_1660__boxed_2508_ = lean_unbox(v___x_2502_);
v_res_2509_ = l_Lean_Meta_substEq___lam__0(v_fst_2499_, v_snd_2500_, v_fvarSubst_2501_, v___x_1660__boxed_2508_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
return v_res_2509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq(lean_object* v_mvarId_2510_, lean_object* v_hFVarId_2511_, lean_object* v_fvarSubst_2512_, lean_object* v_a_2513_, lean_object* v_a_2514_, lean_object* v_a_2515_, lean_object* v_a_2516_){
_start:
{
uint8_t v___x_2518_; lean_object* v___x_2519_; 
v___x_2518_ = 1;
v___x_2519_ = l_Lean_Meta_heqToEq(v_mvarId_2510_, v_hFVarId_2511_, v___x_2518_, v_a_2513_, v_a_2514_, v_a_2515_, v_a_2516_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_object* v_a_2520_; lean_object* v_fst_2521_; lean_object* v_snd_2522_; lean_object* v___x_2523_; lean_object* v___f_2524_; lean_object* v___x_2525_; 
v_a_2520_ = lean_ctor_get(v___x_2519_, 0);
lean_inc(v_a_2520_);
lean_dec_ref(v___x_2519_);
v_fst_2521_ = lean_ctor_get(v_a_2520_, 0);
lean_inc(v_fst_2521_);
v_snd_2522_ = lean_ctor_get(v_a_2520_, 1);
lean_inc_n(v_snd_2522_, 2);
lean_dec(v_a_2520_);
v___x_2523_ = lean_box(v___x_2518_);
v___f_2524_ = lean_alloc_closure((void*)(l_Lean_Meta_substEq___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2524_, 0, v_fst_2521_);
lean_closure_set(v___f_2524_, 1, v_snd_2522_);
lean_closure_set(v___f_2524_, 2, v_fvarSubst_2512_);
lean_closure_set(v___f_2524_, 3, v___x_2523_);
v___x_2525_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_snd_2522_, v___f_2524_, v_a_2513_, v_a_2514_, v_a_2515_, v_a_2516_);
return v___x_2525_;
}
else
{
lean_object* v_a_2526_; lean_object* v___x_2528_; uint8_t v_isShared_2529_; uint8_t v_isSharedCheck_2533_; 
lean_dec(v_fvarSubst_2512_);
v_a_2526_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2533_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2533_ == 0)
{
v___x_2528_ = v___x_2519_;
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
else
{
lean_inc(v_a_2526_);
lean_dec(v___x_2519_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___boxed(lean_object* v_mvarId_2534_, lean_object* v_hFVarId_2535_, lean_object* v_fvarSubst_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_){
_start:
{
lean_object* v_res_2542_; 
v_res_2542_ = l_Lean_Meta_substEq(v_mvarId_2534_, v_hFVarId_2535_, v_fvarSubst_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_);
lean_dec(v_a_2540_);
lean_dec_ref(v_a_2539_);
lean_dec(v_a_2538_);
lean_dec_ref(v_a_2537_);
return v_res_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0(lean_object* v_h_2543_, lean_object* v_mvarId_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_){
_start:
{
lean_object* v___x_2550_; 
lean_inc(v_h_2543_);
v___x_2550_ = l_Lean_FVarId_getType___redArg(v_h_2543_, v___y_2545_, v___y_2547_, v___y_2548_);
if (lean_obj_tag(v___x_2550_) == 0)
{
lean_object* v_a_2551_; lean_object* v___x_2552_; 
v_a_2551_ = lean_ctor_get(v___x_2550_, 0);
lean_inc_n(v_a_2551_, 2);
lean_dec_ref(v___x_2550_);
v___x_2552_ = l_Lean_Meta_matchEq_x3f(v_a_2551_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_);
if (lean_obj_tag(v___x_2552_) == 0)
{
lean_object* v_a_2553_; 
v_a_2553_ = lean_ctor_get(v___x_2552_, 0);
lean_inc(v_a_2553_);
lean_dec_ref(v___x_2552_);
if (lean_obj_tag(v_a_2553_) == 0)
{
lean_object* v___x_2554_; 
v___x_2554_ = l_Lean_Meta_matchHEq_x3f(v_a_2551_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_);
if (lean_obj_tag(v___x_2554_) == 0)
{
lean_object* v_a_2555_; 
v_a_2555_ = lean_ctor_get(v___x_2554_, 0);
lean_inc(v_a_2555_);
lean_dec_ref(v___x_2554_);
if (lean_obj_tag(v_a_2555_) == 0)
{
lean_object* v___x_2556_; 
v___x_2556_ = l_Lean_Meta_substVar(v_mvarId_2544_, v_h_2543_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_);
return v___x_2556_;
}
else
{
uint8_t v___x_2557_; lean_object* v___x_2558_; 
lean_dec_ref(v_a_2555_);
v___x_2557_ = 1;
lean_inc(v_h_2543_);
lean_inc(v_mvarId_2544_);
v___x_2558_ = l_Lean_Meta_heqToEq(v_mvarId_2544_, v_h_2543_, v___x_2557_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_);
if (lean_obj_tag(v___x_2558_) == 0)
{
lean_object* v_a_2559_; lean_object* v_fst_2560_; lean_object* v_snd_2561_; uint8_t v___x_2562_; 
v_a_2559_ = lean_ctor_get(v___x_2558_, 0);
lean_inc(v_a_2559_);
lean_dec_ref(v___x_2558_);
v_fst_2560_ = lean_ctor_get(v_a_2559_, 0);
lean_inc(v_fst_2560_);
v_snd_2561_ = lean_ctor_get(v_a_2559_, 1);
lean_inc(v_snd_2561_);
lean_dec(v_a_2559_);
v___x_2562_ = l_Lean_instBEqMVarId_beq(v_mvarId_2544_, v_snd_2561_);
if (v___x_2562_ == 0)
{
lean_object* v___x_2563_; 
lean_dec(v_mvarId_2544_);
lean_dec(v_h_2543_);
v___x_2563_ = l_Lean_Meta_subst(v_snd_2561_, v_fst_2560_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_);
return v___x_2563_;
}
else
{
lean_object* v___x_2564_; 
lean_dec(v_snd_2561_);
lean_dec(v_fst_2560_);
v___x_2564_ = l_Lean_Meta_substVar(v_mvarId_2544_, v_h_2543_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_);
return v___x_2564_;
}
}
else
{
lean_object* v_a_2565_; lean_object* v___x_2567_; uint8_t v_isShared_2568_; uint8_t v_isSharedCheck_2572_; 
lean_dec(v_mvarId_2544_);
lean_dec(v_h_2543_);
v_a_2565_ = lean_ctor_get(v___x_2558_, 0);
v_isSharedCheck_2572_ = !lean_is_exclusive(v___x_2558_);
if (v_isSharedCheck_2572_ == 0)
{
v___x_2567_ = v___x_2558_;
v_isShared_2568_ = v_isSharedCheck_2572_;
goto v_resetjp_2566_;
}
else
{
lean_inc(v_a_2565_);
lean_dec(v___x_2558_);
v___x_2567_ = lean_box(0);
v_isShared_2568_ = v_isSharedCheck_2572_;
goto v_resetjp_2566_;
}
v_resetjp_2566_:
{
lean_object* v___x_2570_; 
if (v_isShared_2568_ == 0)
{
v___x_2570_ = v___x_2567_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v_a_2565_);
v___x_2570_ = v_reuseFailAlloc_2571_;
goto v_reusejp_2569_;
}
v_reusejp_2569_:
{
return v___x_2570_;
}
}
}
}
}
else
{
lean_object* v_a_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2580_; 
lean_dec(v_mvarId_2544_);
lean_dec(v_h_2543_);
v_a_2573_ = lean_ctor_get(v___x_2554_, 0);
v_isSharedCheck_2580_ = !lean_is_exclusive(v___x_2554_);
if (v_isSharedCheck_2580_ == 0)
{
v___x_2575_ = v___x_2554_;
v_isShared_2576_ = v_isSharedCheck_2580_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_a_2573_);
lean_dec(v___x_2554_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2580_;
goto v_resetjp_2574_;
}
v_resetjp_2574_:
{
lean_object* v___x_2578_; 
if (v_isShared_2576_ == 0)
{
v___x_2578_ = v___x_2575_;
goto v_reusejp_2577_;
}
else
{
lean_object* v_reuseFailAlloc_2579_; 
v_reuseFailAlloc_2579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2579_, 0, v_a_2573_);
v___x_2578_ = v_reuseFailAlloc_2579_;
goto v_reusejp_2577_;
}
v_reusejp_2577_:
{
return v___x_2578_;
}
}
}
}
else
{
lean_object* v___x_2581_; lean_object* v___x_2582_; 
lean_dec_ref(v_a_2553_);
lean_dec(v_a_2551_);
v___x_2581_ = lean_box(0);
v___x_2582_ = l_Lean_Meta_substEq(v_mvarId_2544_, v_h_2543_, v___x_2581_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2591_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2591_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2591_ == 0)
{
v___x_2585_ = v___x_2582_;
v_isShared_2586_ = v_isSharedCheck_2591_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_a_2583_);
lean_dec(v___x_2582_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2591_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
lean_object* v_snd_2587_; lean_object* v___x_2589_; 
v_snd_2587_ = lean_ctor_get(v_a_2583_, 1);
lean_inc(v_snd_2587_);
lean_dec(v_a_2583_);
if (v_isShared_2586_ == 0)
{
lean_ctor_set(v___x_2585_, 0, v_snd_2587_);
v___x_2589_ = v___x_2585_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2590_, 0, v_snd_2587_);
v___x_2589_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
return v___x_2589_;
}
}
}
else
{
lean_object* v_a_2592_; lean_object* v___x_2594_; uint8_t v_isShared_2595_; uint8_t v_isSharedCheck_2599_; 
v_a_2592_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2599_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2599_ == 0)
{
v___x_2594_ = v___x_2582_;
v_isShared_2595_ = v_isSharedCheck_2599_;
goto v_resetjp_2593_;
}
else
{
lean_inc(v_a_2592_);
lean_dec(v___x_2582_);
v___x_2594_ = lean_box(0);
v_isShared_2595_ = v_isSharedCheck_2599_;
goto v_resetjp_2593_;
}
v_resetjp_2593_:
{
lean_object* v___x_2597_; 
if (v_isShared_2595_ == 0)
{
v___x_2597_ = v___x_2594_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v_a_2592_);
v___x_2597_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
return v___x_2597_;
}
}
}
}
}
else
{
lean_object* v_a_2600_; lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2607_; 
lean_dec(v_a_2551_);
lean_dec(v_mvarId_2544_);
lean_dec(v_h_2543_);
v_a_2600_ = lean_ctor_get(v___x_2552_, 0);
v_isSharedCheck_2607_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2607_ == 0)
{
v___x_2602_ = v___x_2552_;
v_isShared_2603_ = v_isSharedCheck_2607_;
goto v_resetjp_2601_;
}
else
{
lean_inc(v_a_2600_);
lean_dec(v___x_2552_);
v___x_2602_ = lean_box(0);
v_isShared_2603_ = v_isSharedCheck_2607_;
goto v_resetjp_2601_;
}
v_resetjp_2601_:
{
lean_object* v___x_2605_; 
if (v_isShared_2603_ == 0)
{
v___x_2605_ = v___x_2602_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v_a_2600_);
v___x_2605_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
return v___x_2605_;
}
}
}
}
else
{
lean_object* v_a_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2615_; 
lean_dec(v_mvarId_2544_);
lean_dec(v_h_2543_);
v_a_2608_ = lean_ctor_get(v___x_2550_, 0);
v_isSharedCheck_2615_ = !lean_is_exclusive(v___x_2550_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2610_ = v___x_2550_;
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_a_2608_);
lean_dec(v___x_2550_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v___x_2613_; 
if (v_isShared_2611_ == 0)
{
v___x_2613_ = v___x_2610_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v_a_2608_);
v___x_2613_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
return v___x_2613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0___boxed(lean_object* v_h_2616_, lean_object* v_mvarId_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_){
_start:
{
lean_object* v_res_2623_; 
v_res_2623_ = l_Lean_Meta_subst___lam__0(v_h_2616_, v_mvarId_2617_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_);
lean_dec(v___y_2621_);
lean_dec_ref(v___y_2620_);
lean_dec(v___y_2619_);
lean_dec_ref(v___y_2618_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst(lean_object* v_mvarId_2624_, lean_object* v_h_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_){
_start:
{
lean_object* v___f_2631_; lean_object* v___x_2632_; 
lean_inc(v_mvarId_2624_);
v___f_2631_ = lean_alloc_closure((void*)(l_Lean_Meta_subst___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2631_, 0, v_h_2625_);
lean_closure_set(v___f_2631_, 1, v_mvarId_2624_);
v___x_2632_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_2624_, v___f_2631_, v_a_2626_, v_a_2627_, v_a_2628_, v_a_2629_);
return v___x_2632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst___boxed(lean_object* v_mvarId_2633_, lean_object* v_h_2634_, lean_object* v_a_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_, lean_object* v_a_2638_, lean_object* v_a_2639_){
_start:
{
lean_object* v_res_2640_; 
v_res_2640_ = l_Lean_Meta_subst(v_mvarId_2633_, v_h_2634_, v_a_2635_, v_a_2636_, v_a_2637_, v_a_2638_);
lean_dec(v_a_2638_);
lean_dec_ref(v_a_2637_);
lean_dec(v_a_2636_);
lean_dec_ref(v_a_2635_);
return v_res_2640_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(lean_object* v_x_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_){
_start:
{
lean_object* v___x_2647_; 
v___x_2647_ = l_Lean_Meta_saveState___redArg(v___y_2643_, v___y_2645_);
if (lean_obj_tag(v___x_2647_) == 0)
{
lean_object* v_a_2648_; lean_object* v___x_2649_; 
v_a_2648_ = lean_ctor_get(v___x_2647_, 0);
lean_inc(v_a_2648_);
lean_dec_ref(v___x_2647_);
lean_inc(v___y_2645_);
lean_inc_ref(v___y_2644_);
lean_inc(v___y_2643_);
lean_inc_ref(v___y_2642_);
v___x_2649_ = lean_apply_5(v_x_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, lean_box(0));
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_dec(v_a_2648_);
return v___x_2649_;
}
else
{
lean_object* v_a_2650_; uint8_t v___y_2652_; uint8_t v___x_2670_; 
v_a_2650_ = lean_ctor_get(v___x_2649_, 0);
lean_inc(v_a_2650_);
v___x_2670_ = l_Lean_Exception_isInterrupt(v_a_2650_);
if (v___x_2670_ == 0)
{
uint8_t v___x_2671_; 
lean_inc(v_a_2650_);
v___x_2671_ = l_Lean_Exception_isRuntime(v_a_2650_);
v___y_2652_ = v___x_2671_;
goto v___jp_2651_;
}
else
{
v___y_2652_ = v___x_2670_;
goto v___jp_2651_;
}
v___jp_2651_:
{
if (v___y_2652_ == 0)
{
lean_object* v___x_2653_; 
lean_dec_ref(v___x_2649_);
v___x_2653_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2648_, v___y_2643_, v___y_2645_);
lean_dec(v_a_2648_);
if (lean_obj_tag(v___x_2653_) == 0)
{
lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2660_; 
v_isSharedCheck_2660_ = !lean_is_exclusive(v___x_2653_);
if (v_isSharedCheck_2660_ == 0)
{
lean_object* v_unused_2661_; 
v_unused_2661_ = lean_ctor_get(v___x_2653_, 0);
lean_dec(v_unused_2661_);
v___x_2655_ = v___x_2653_;
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
else
{
lean_dec(v___x_2653_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2658_; 
if (v_isShared_2656_ == 0)
{
lean_ctor_set_tag(v___x_2655_, 1);
lean_ctor_set(v___x_2655_, 0, v_a_2650_);
v___x_2658_ = v___x_2655_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_a_2650_);
v___x_2658_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
return v___x_2658_;
}
}
}
else
{
lean_object* v_a_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2669_; 
lean_dec(v_a_2650_);
v_a_2662_ = lean_ctor_get(v___x_2653_, 0);
v_isSharedCheck_2669_ = !lean_is_exclusive(v___x_2653_);
if (v_isSharedCheck_2669_ == 0)
{
v___x_2664_ = v___x_2653_;
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_a_2662_);
lean_dec(v___x_2653_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2667_; 
if (v_isShared_2665_ == 0)
{
v___x_2667_ = v___x_2664_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v_a_2662_);
v___x_2667_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
return v___x_2667_;
}
}
}
}
else
{
lean_dec(v_a_2650_);
lean_dec(v_a_2648_);
return v___x_2649_;
}
}
}
}
else
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2679_; 
lean_dec_ref(v_x_2641_);
v_a_2672_ = lean_ctor_get(v___x_2647_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2647_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2674_ = v___x_2647_;
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2647_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg___boxed(lean_object* v_x_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_){
_start:
{
lean_object* v_res_2686_; 
v_res_2686_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(v_x_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec(v___y_2682_);
lean_dec_ref(v___y_2681_);
return v_res_2686_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1(lean_object* v_00_u03b1_2687_, lean_object* v_x_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_){
_start:
{
lean_object* v___x_2694_; 
v___x_2694_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(v_x_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___boxed(lean_object* v_00_u03b1_2695_, lean_object* v_x_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_){
_start:
{
lean_object* v_res_2702_; 
v_res_2702_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1(v_00_u03b1_2695_, v_x_2696_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_);
lean_dec(v___y_2700_);
lean_dec_ref(v___y_2699_);
lean_dec(v___y_2698_);
lean_dec_ref(v___y_2697_);
return v_res_2702_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(lean_object* v_msg_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_){
_start:
{
lean_object* v_ref_2709_; lean_object* v___x_2710_; lean_object* v_a_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2719_; 
v_ref_2709_ = lean_ctor_get(v___y_2706_, 5);
v___x_2710_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__3_spec__3(v_msg_2703_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_);
v_a_2711_ = lean_ctor_get(v___x_2710_, 0);
v_isSharedCheck_2719_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2713_ = v___x_2710_;
v_isShared_2714_ = v_isSharedCheck_2719_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_a_2711_);
lean_dec(v___x_2710_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2719_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___x_2715_; lean_object* v___x_2717_; 
lean_inc(v_ref_2709_);
v___x_2715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2715_, 0, v_ref_2709_);
lean_ctor_set(v___x_2715_, 1, v_a_2711_);
if (v_isShared_2714_ == 0)
{
lean_ctor_set_tag(v___x_2713_, 1);
lean_ctor_set(v___x_2713_, 0, v___x_2715_);
v___x_2717_ = v___x_2713_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v___x_2715_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg___boxed(lean_object* v_msg_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_){
_start:
{
lean_object* v_res_2726_; 
v_res_2726_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v_msg_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_);
lean_dec(v___y_2724_);
lean_dec_ref(v___y_2723_);
lean_dec(v___y_2722_);
lean_dec_ref(v___y_2721_);
return v_res_2726_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2728_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__0));
v___x_2729_ = l_Lean_stringToMessageData(v___x_2728_);
return v___x_2729_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2731_; lean_object* v___x_2732_; 
v___x_2731_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__2));
v___x_2732_ = l_Lean_stringToMessageData(v___x_2731_);
return v___x_2732_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2734_; lean_object* v___x_2735_; 
v___x_2734_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__4));
v___x_2735_ = l_Lean_stringToMessageData(v___x_2734_);
return v___x_2735_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__7(void){
_start:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; 
v___x_2737_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__6));
v___x_2738_ = l_Lean_stringToMessageData(v___x_2737_);
return v___x_2738_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__9(void){
_start:
{
lean_object* v___x_2740_; lean_object* v___x_2741_; 
v___x_2740_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__8));
v___x_2741_ = l_Lean_stringToMessageData(v___x_2740_);
return v___x_2741_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__17(void){
_start:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; 
v___x_2754_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__16));
v___x_2755_ = l_Lean_stringToMessageData(v___x_2754_);
return v___x_2755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0(lean_object* v_mvarId_2764_, uint8_t v_substLHS_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_){
_start:
{
lean_object* v___x_2771_; 
lean_inc(v_mvarId_2764_);
v___x_2771_ = l_Lean_MVarId_getType_x27(v_mvarId_2764_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_);
if (lean_obj_tag(v___x_2771_) == 0)
{
lean_object* v_a_2772_; 
v_a_2772_ = lean_ctor_get(v___x_2771_, 0);
lean_inc(v_a_2772_);
lean_dec_ref(v___x_2771_);
if (lean_obj_tag(v_a_2772_) == 7)
{
lean_object* v_binderType_2776_; lean_object* v_body_2777_; uint8_t v___x_2778_; lean_object* v___y_2780_; lean_object* v___y_2781_; lean_object* v___y_2782_; lean_object* v___y_2783_; lean_object* v___y_2784_; lean_object* v___y_2785_; lean_object* v___y_2786_; lean_object* v___y_2787_; lean_object* v___y_2788_; lean_object* v___y_2789_; lean_object* v___y_2790_; lean_object* v___y_2866_; lean_object* v___y_2867_; lean_object* v___y_2868_; lean_object* v___y_2869_; lean_object* v___y_2870_; lean_object* v___y_2871_; lean_object* v___y_2872_; lean_object* v___y_2873_; lean_object* v_fst_2913_; lean_object* v_fst_2914_; lean_object* v_fst_2915_; lean_object* v_snd_2916_; lean_object* v___y_2917_; lean_object* v___y_2918_; lean_object* v___y_2919_; lean_object* v___y_2920_; 
v_binderType_2776_ = lean_ctor_get(v_a_2772_, 1);
lean_inc_ref(v_binderType_2776_);
v_body_2777_ = lean_ctor_get(v_a_2772_, 2);
lean_inc_ref(v_body_2777_);
lean_dec_ref(v_a_2772_);
v___x_2778_ = l_Lean_Expr_hasLooseBVars(v_body_2777_);
if (v___x_2778_ == 0)
{
lean_object* v___x_2932_; 
v___x_2932_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_binderType_2776_, v___y_2767_);
if (lean_obj_tag(v___x_2932_) == 0)
{
lean_object* v_a_2933_; lean_object* v___y_2935_; lean_object* v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2938_; lean_object* v___x_2949_; uint8_t v___x_2950_; 
v_a_2933_ = lean_ctor_get(v___x_2932_, 0);
lean_inc(v_a_2933_);
lean_dec_ref(v___x_2932_);
v___x_2949_ = l_Lean_Expr_cleanupAnnotations(v_a_2933_);
v___x_2950_ = l_Lean_Expr_isApp(v___x_2949_);
if (v___x_2950_ == 0)
{
lean_dec_ref(v___x_2949_);
lean_dec_ref(v_body_2777_);
lean_dec(v_mvarId_2764_);
v___y_2935_ = v___y_2766_;
v___y_2936_ = v___y_2767_;
v___y_2937_ = v___y_2768_;
v___y_2938_ = v___y_2769_;
goto v___jp_2934_;
}
else
{
lean_object* v_arg_2951_; lean_object* v___x_2952_; uint8_t v___x_2953_; 
v_arg_2951_ = lean_ctor_get(v___x_2949_, 1);
lean_inc_ref(v_arg_2951_);
v___x_2952_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2949_);
v___x_2953_ = l_Lean_Expr_isApp(v___x_2952_);
if (v___x_2953_ == 0)
{
lean_dec_ref(v___x_2952_);
lean_dec_ref(v_arg_2951_);
lean_dec_ref(v_body_2777_);
lean_dec(v_mvarId_2764_);
v___y_2935_ = v___y_2766_;
v___y_2936_ = v___y_2767_;
v___y_2937_ = v___y_2768_;
v___y_2938_ = v___y_2769_;
goto v___jp_2934_;
}
else
{
lean_object* v_arg_2954_; lean_object* v___x_2955_; uint8_t v___x_2956_; 
v_arg_2954_ = lean_ctor_get(v___x_2952_, 1);
lean_inc_ref(v_arg_2954_);
v___x_2955_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2952_);
v___x_2956_ = l_Lean_Expr_isApp(v___x_2955_);
if (v___x_2956_ == 0)
{
lean_dec_ref(v___x_2955_);
lean_dec_ref(v_arg_2954_);
lean_dec_ref(v_arg_2951_);
lean_dec_ref(v_body_2777_);
lean_dec(v_mvarId_2764_);
v___y_2935_ = v___y_2766_;
v___y_2936_ = v___y_2767_;
v___y_2937_ = v___y_2768_;
v___y_2938_ = v___y_2769_;
goto v___jp_2934_;
}
else
{
lean_object* v_arg_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; uint8_t v___x_2960_; 
v_arg_2957_ = lean_ctor_get(v___x_2955_, 1);
lean_inc_ref(v_arg_2957_);
v___x_2958_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2955_);
v___x_2959_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__11));
v___x_2960_ = l_Lean_Expr_isConstOf(v___x_2958_, v___x_2959_);
if (v___x_2960_ == 0)
{
uint8_t v___x_2961_; 
v___x_2961_ = l_Lean_Expr_isApp(v___x_2958_);
if (v___x_2961_ == 0)
{
lean_dec_ref(v___x_2958_);
lean_dec_ref(v_arg_2957_);
lean_dec_ref(v_arg_2954_);
lean_dec_ref(v_arg_2951_);
lean_dec_ref(v_body_2777_);
lean_dec(v_mvarId_2764_);
v___y_2935_ = v___y_2766_;
v___y_2936_ = v___y_2767_;
v___y_2937_ = v___y_2768_;
v___y_2938_ = v___y_2769_;
goto v___jp_2934_;
}
else
{
lean_object* v_arg_2962_; lean_object* v___y_2964_; lean_object* v___y_2965_; lean_object* v___y_2966_; lean_object* v___y_2967_; lean_object* v___x_2970_; lean_object* v___x_2971_; uint8_t v___x_2972_; 
v_arg_2962_ = lean_ctor_get(v___x_2958_, 1);
lean_inc_ref(v_arg_2962_);
v___x_2970_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2958_);
v___x_2971_ = ((lean_object*)(l_Lean_Meta_heqToEq___lam__0___closed__1));
v___x_2972_ = l_Lean_Expr_isConstOf(v___x_2970_, v___x_2971_);
lean_dec_ref(v___x_2970_);
if (v___x_2972_ == 0)
{
lean_dec_ref(v_arg_2962_);
lean_dec_ref(v_arg_2957_);
lean_dec_ref(v_arg_2954_);
lean_dec_ref(v_arg_2951_);
lean_dec_ref(v_body_2777_);
lean_dec(v_mvarId_2764_);
v___y_2935_ = v___y_2766_;
v___y_2936_ = v___y_2767_;
v___y_2937_ = v___y_2768_;
v___y_2938_ = v___y_2769_;
goto v___jp_2934_;
}
else
{
lean_object* v___x_2973_; 
lean_inc_ref(v_arg_2962_);
v___x_2973_ = l_Lean_Meta_isExprDefEq(v_arg_2962_, v_arg_2954_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v_a_2974_; uint8_t v___x_2975_; 
v_a_2974_ = lean_ctor_get(v___x_2973_, 0);
lean_inc(v_a_2974_);
lean_dec_ref(v___x_2973_);
v___x_2975_ = lean_unbox(v_a_2974_);
lean_dec(v_a_2974_);
if (v___x_2975_ == 0)
{
lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v_a_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2985_; 
lean_dec_ref(v_arg_2962_);
lean_dec_ref(v_arg_2957_);
lean_dec_ref(v_arg_2951_);
lean_dec_ref(v_body_2777_);
lean_dec(v_mvarId_2764_);
v___x_2976_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__17, &l_Lean_Meta_introSubstEq___lam__0___closed__17_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__17);
v___x_2977_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2976_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_);
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
else
{
v___y_2964_ = v___y_2766_;
v___y_2965_ = v___y_2767_;
v___y_2966_ = v___y_2768_;
v___y_2967_ = v___y_2769_;
goto v___jp_2963_;
}
}
else
{
lean_object* v_a_2986_; lean_object* v___x_2988_; uint8_t v_isShared_2989_; uint8_t v_isSharedCheck_2993_; 
lean_dec_ref(v_arg_2962_);
lean_dec_ref(v_arg_2957_);
lean_dec_ref(v_arg_2951_);
lean_dec_ref(v_body_2777_);
lean_dec(v_mvarId_2764_);
v_a_2986_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2988_ = v___x_2973_;
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
else
{
lean_inc(v_a_2986_);
lean_dec(v___x_2973_);
v___x_2988_ = lean_box(0);
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
v_resetjp_2987_:
{
lean_object* v___x_2991_; 
if (v_isShared_2989_ == 0)
{
v___x_2991_ = v___x_2988_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v_a_2986_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
return v___x_2991_;
}
}
}
}
v___jp_2963_:
{
if (v_substLHS_2765_ == 0)
{
lean_object* v___x_2968_; 
v___x_2968_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__13));
v_fst_2913_ = v_arg_2962_;
v_fst_2914_ = v_arg_2957_;
v_fst_2915_ = v_arg_2951_;
v_snd_2916_ = v___x_2968_;
v___y_2917_ = v___y_2964_;
v___y_2918_ = v___y_2965_;
v___y_2919_ = v___y_2966_;
v___y_2920_ = v___y_2967_;
goto v___jp_2912_;
}
else
{
lean_object* v___x_2969_; 
v___x_2969_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__15));
v_fst_2913_ = v_arg_2962_;
v_fst_2914_ = v_arg_2951_;
v_fst_2915_ = v_arg_2957_;
v_snd_2916_ = v___x_2969_;
v___y_2917_ = v___y_2964_;
v___y_2918_ = v___y_2965_;
v___y_2919_ = v___y_2966_;
v___y_2920_ = v___y_2967_;
goto v___jp_2912_;
}
}
}
}
else
{
lean_dec_ref(v___x_2958_);
if (v_substLHS_2765_ == 0)
{
lean_object* v___x_2994_; 
v___x_2994_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__19));
v_fst_2913_ = v_arg_2957_;
v_fst_2914_ = v_arg_2954_;
v_fst_2915_ = v_arg_2951_;
v_snd_2916_ = v___x_2994_;
v___y_2917_ = v___y_2766_;
v___y_2918_ = v___y_2767_;
v___y_2919_ = v___y_2768_;
v___y_2920_ = v___y_2769_;
goto v___jp_2912_;
}
else
{
lean_object* v___x_2995_; 
v___x_2995_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__21));
v_fst_2913_ = v_arg_2957_;
v_fst_2914_ = v_arg_2951_;
v_fst_2915_ = v_arg_2954_;
v_snd_2916_ = v___x_2995_;
v___y_2917_ = v___y_2766_;
v___y_2918_ = v___y_2767_;
v___y_2919_ = v___y_2768_;
v___y_2920_ = v___y_2769_;
goto v___jp_2912_;
}
}
}
}
}
v___jp_2934_:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v_a_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2948_; 
v___x_2939_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__9, &l_Lean_Meta_introSubstEq___lam__0___closed__9_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__9);
v___x_2940_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2939_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
v_a_2941_ = lean_ctor_get(v___x_2940_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2940_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2943_ = v___x_2940_;
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_a_2941_);
lean_dec(v___x_2940_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2946_; 
if (v_isShared_2944_ == 0)
{
v___x_2946_ = v___x_2943_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_a_2941_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3003_; 
lean_dec_ref(v_body_2777_);
lean_dec(v_mvarId_2764_);
v_a_2996_ = lean_ctor_get(v___x_2932_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2932_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2998_ = v___x_2932_;
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2932_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2996_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
}
}
}
}
else
{
lean_dec_ref(v_body_2777_);
lean_dec_ref(v_binderType_2776_);
lean_dec(v_mvarId_2764_);
goto v___jp_2773_;
}
v___jp_2779_:
{
lean_object* v___x_2791_; lean_object* v___x_2792_; uint8_t v___x_2793_; uint8_t v___x_2794_; lean_object* v___x_2795_; 
v___x_2791_ = lean_mk_empty_array_with_capacity(v___y_2784_);
lean_inc_ref(v___x_2791_);
v___x_2792_ = lean_array_push(v___x_2791_, v___y_2786_);
v___x_2793_ = 1;
v___x_2794_ = 1;
v___x_2795_ = l_Lean_Meta_mkLambdaFVars(v___x_2792_, v_body_2777_, v___x_2778_, v___x_2793_, v___x_2778_, v___x_2793_, v___x_2794_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_);
lean_dec_ref(v___x_2792_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2796_; lean_object* v___x_2797_; 
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
lean_inc(v_a_2796_);
lean_dec_ref(v___x_2795_);
lean_inc(v___y_2780_);
v___x_2797_ = l_Lean_MVarId_getTag(v___y_2780_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_);
if (lean_obj_tag(v___x_2797_) == 0)
{
lean_object* v_a_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; 
v_a_2798_ = lean_ctor_get(v___x_2797_, 0);
lean_inc(v_a_2798_);
lean_dec_ref(v___x_2797_);
lean_inc_ref(v___y_2783_);
v___x_2799_ = lean_array_push(v___x_2791_, v___y_2783_);
lean_inc(v_a_2796_);
v___x_2800_ = l_Lean_Expr_beta(v_a_2796_, v___x_2799_);
lean_inc_ref(v___x_2800_);
v___x_2801_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_2800_, v_a_2798_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_);
if (lean_obj_tag(v___x_2801_) == 0)
{
lean_object* v_a_2802_; lean_object* v___x_2803_; 
v_a_2802_ = lean_ctor_get(v___x_2801_, 0);
lean_inc(v_a_2802_);
lean_dec_ref(v___x_2801_);
v___x_2803_ = l_Lean_Meta_getLevel(v___x_2800_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_);
if (lean_obj_tag(v___x_2803_) == 0)
{
lean_object* v_a_2804_; lean_object* v___x_2805_; 
v_a_2804_ = lean_ctor_get(v___x_2803_, 0);
lean_inc(v_a_2804_);
lean_dec_ref(v___x_2803_);
lean_inc_ref(v___y_2785_);
v___x_2805_ = l_Lean_Meta_getLevel(v___y_2785_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_);
if (lean_obj_tag(v___x_2805_) == 0)
{
lean_object* v_a_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2823_; 
v_a_2806_ = lean_ctor_get(v___x_2805_, 0);
lean_inc(v_a_2806_);
lean_dec_ref(v___x_2805_);
v___x_2807_ = lean_box(0);
v___x_2808_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2808_, 0, v_a_2806_);
lean_ctor_set(v___x_2808_, 1, v___x_2807_);
v___x_2809_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2809_, 0, v_a_2804_);
lean_ctor_set(v___x_2809_, 1, v___x_2808_);
lean_inc(v___y_2782_);
v___x_2810_ = l_Lean_mkConst(v___y_2782_, v___x_2809_);
lean_inc(v_a_2802_);
lean_inc_ref(v___y_2783_);
v___x_2811_ = l_Lean_mkApp4(v___x_2810_, v___y_2785_, v___y_2783_, v_a_2796_, v_a_2802_);
v___x_2812_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg(v___y_2780_, v___x_2811_, v___y_2788_);
v_isSharedCheck_2823_ = !lean_is_exclusive(v___x_2812_);
if (v_isSharedCheck_2823_ == 0)
{
lean_object* v_unused_2824_; 
v_unused_2824_ = lean_ctor_get(v___x_2812_, 0);
lean_dec(v_unused_2824_);
v___x_2814_ = v___x_2812_;
v_isShared_2815_ = v_isSharedCheck_2823_;
goto v_resetjp_2813_;
}
else
{
lean_dec(v___x_2812_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2823_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2821_; 
v___x_2816_ = l_Lean_Meta_FVarSubst_empty;
v___x_2817_ = l_Lean_Meta_FVarSubst_insert(v___x_2816_, v___y_2781_, v___y_2783_);
v___x_2818_ = l_Lean_Expr_mvarId_x21(v_a_2802_);
lean_dec(v_a_2802_);
v___x_2819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2819_, 0, v___x_2817_);
lean_ctor_set(v___x_2819_, 1, v___x_2818_);
if (v_isShared_2815_ == 0)
{
lean_ctor_set(v___x_2814_, 0, v___x_2819_);
v___x_2821_ = v___x_2814_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v___x_2819_);
v___x_2821_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
return v___x_2821_;
}
}
}
else
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_dec(v_a_2804_);
lean_dec(v_a_2802_);
lean_dec(v_a_2796_);
lean_dec_ref(v___y_2785_);
lean_dec_ref(v___y_2783_);
lean_dec(v___y_2781_);
lean_dec(v___y_2780_);
v_a_2825_ = lean_ctor_get(v___x_2805_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2805_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2805_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2805_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
if (v_isShared_2828_ == 0)
{
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_a_2825_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
}
else
{
lean_object* v_a_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2840_; 
lean_dec(v_a_2802_);
lean_dec(v_a_2796_);
lean_dec_ref(v___y_2785_);
lean_dec_ref(v___y_2783_);
lean_dec(v___y_2781_);
lean_dec(v___y_2780_);
v_a_2833_ = lean_ctor_get(v___x_2803_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2803_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2835_ = v___x_2803_;
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_a_2833_);
lean_dec(v___x_2803_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
lean_object* v___x_2838_; 
if (v_isShared_2836_ == 0)
{
v___x_2838_ = v___x_2835_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_a_2833_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
return v___x_2838_;
}
}
}
}
else
{
lean_object* v_a_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2848_; 
lean_dec_ref(v___x_2800_);
lean_dec(v_a_2796_);
lean_dec_ref(v___y_2785_);
lean_dec_ref(v___y_2783_);
lean_dec(v___y_2781_);
lean_dec(v___y_2780_);
v_a_2841_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2848_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2843_ = v___x_2801_;
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_a_2841_);
lean_dec(v___x_2801_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v___x_2846_; 
if (v_isShared_2844_ == 0)
{
v___x_2846_ = v___x_2843_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v_a_2841_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
return v___x_2846_;
}
}
}
}
else
{
lean_object* v_a_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2856_; 
lean_dec(v_a_2796_);
lean_dec_ref(v___x_2791_);
lean_dec_ref(v___y_2785_);
lean_dec_ref(v___y_2783_);
lean_dec(v___y_2781_);
lean_dec(v___y_2780_);
v_a_2849_ = lean_ctor_get(v___x_2797_, 0);
v_isSharedCheck_2856_ = !lean_is_exclusive(v___x_2797_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2851_ = v___x_2797_;
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_a_2849_);
lean_dec(v___x_2797_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2854_; 
if (v_isShared_2852_ == 0)
{
v___x_2854_ = v___x_2851_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_a_2849_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
}
else
{
lean_object* v_a_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2864_; 
lean_dec_ref(v___x_2791_);
lean_dec_ref(v___y_2785_);
lean_dec_ref(v___y_2783_);
lean_dec(v___y_2781_);
lean_dec(v___y_2780_);
v_a_2857_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2859_ = v___x_2795_;
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
else
{
lean_inc(v_a_2857_);
lean_dec(v___x_2795_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
lean_object* v___x_2862_; 
if (v_isShared_2860_ == 0)
{
v___x_2862_ = v___x_2859_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v_a_2857_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
return v___x_2862_;
}
}
}
}
v___jp_2865_:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; 
v___x_2874_ = l_Lean_Expr_fvarId_x21(v___y_2869_);
v___x_2875_ = lean_unsigned_to_nat(1u);
v___x_2876_ = lean_mk_empty_array_with_capacity(v___x_2875_);
lean_inc(v___x_2874_);
v___x_2877_ = lean_array_push(v___x_2876_, v___x_2874_);
v___x_2878_ = l_Lean_MVarId_revert(v_mvarId_2764_, v___x_2877_, v___x_2778_, v___x_2778_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_);
if (lean_obj_tag(v___x_2878_) == 0)
{
lean_object* v_a_2879_; lean_object* v_fst_2880_; lean_object* v_snd_2881_; lean_object* v___x_2883_; uint8_t v_isShared_2884_; uint8_t v_isSharedCheck_2903_; 
v_a_2879_ = lean_ctor_get(v___x_2878_, 0);
lean_inc(v_a_2879_);
lean_dec_ref(v___x_2878_);
v_fst_2880_ = lean_ctor_get(v_a_2879_, 0);
v_snd_2881_ = lean_ctor_get(v_a_2879_, 1);
v_isSharedCheck_2903_ = !lean_is_exclusive(v_a_2879_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2883_ = v_a_2879_;
v_isShared_2884_ = v_isSharedCheck_2903_;
goto v_resetjp_2882_;
}
else
{
lean_inc(v_snd_2881_);
lean_inc(v_fst_2880_);
lean_dec(v_a_2879_);
v___x_2883_ = lean_box(0);
v_isShared_2884_ = v_isSharedCheck_2903_;
goto v_resetjp_2882_;
}
v_resetjp_2882_:
{
lean_object* v___x_2885_; uint8_t v___x_2886_; 
v___x_2885_ = lean_array_get_size(v_fst_2880_);
lean_dec(v_fst_2880_);
v___x_2886_ = lean_nat_dec_eq(v___x_2885_, v___x_2875_);
if (v___x_2886_ == 0)
{
lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2890_; 
lean_dec(v_snd_2881_);
lean_dec(v___x_2874_);
lean_dec_ref(v___y_2868_);
lean_dec_ref(v___y_2867_);
lean_dec_ref(v_body_2777_);
v___x_2887_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__3, &l_Lean_Meta_introSubstEq___lam__0___closed__3_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__3);
v___x_2888_ = l_Lean_MessageData_ofExpr(v___y_2869_);
if (v_isShared_2884_ == 0)
{
lean_ctor_set_tag(v___x_2883_, 7);
lean_ctor_set(v___x_2883_, 1, v___x_2888_);
lean_ctor_set(v___x_2883_, 0, v___x_2887_);
v___x_2890_ = v___x_2883_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v___x_2887_);
lean_ctor_set(v_reuseFailAlloc_2902_, 1, v___x_2888_);
v___x_2890_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v_a_2894_; lean_object* v___x_2896_; uint8_t v_isShared_2897_; uint8_t v_isSharedCheck_2901_; 
v___x_2891_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__5, &l_Lean_Meta_introSubstEq___lam__0___closed__5_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__5);
v___x_2892_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2892_, 0, v___x_2890_);
lean_ctor_set(v___x_2892_, 1, v___x_2891_);
v___x_2893_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2892_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_);
v_a_2894_ = lean_ctor_get(v___x_2893_, 0);
v_isSharedCheck_2901_ = !lean_is_exclusive(v___x_2893_);
if (v_isSharedCheck_2901_ == 0)
{
v___x_2896_ = v___x_2893_;
v_isShared_2897_ = v_isSharedCheck_2901_;
goto v_resetjp_2895_;
}
else
{
lean_inc(v_a_2894_);
lean_dec(v___x_2893_);
v___x_2896_ = lean_box(0);
v_isShared_2897_ = v_isSharedCheck_2901_;
goto v_resetjp_2895_;
}
v_resetjp_2895_:
{
lean_object* v___x_2899_; 
if (v_isShared_2897_ == 0)
{
v___x_2899_ = v___x_2896_;
goto v_reusejp_2898_;
}
else
{
lean_object* v_reuseFailAlloc_2900_; 
v_reuseFailAlloc_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2900_, 0, v_a_2894_);
v___x_2899_ = v_reuseFailAlloc_2900_;
goto v_reusejp_2898_;
}
v_reusejp_2898_:
{
return v___x_2899_;
}
}
}
}
else
{
lean_del_object(v___x_2883_);
v___y_2780_ = v_snd_2881_;
v___y_2781_ = v___x_2874_;
v___y_2782_ = v___y_2866_;
v___y_2783_ = v___y_2867_;
v___y_2784_ = v___x_2875_;
v___y_2785_ = v___y_2868_;
v___y_2786_ = v___y_2869_;
v___y_2787_ = v___y_2870_;
v___y_2788_ = v___y_2871_;
v___y_2789_ = v___y_2872_;
v___y_2790_ = v___y_2873_;
goto v___jp_2779_;
}
}
}
else
{
lean_object* v_a_2904_; lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2911_; 
lean_dec(v___x_2874_);
lean_dec_ref(v___y_2869_);
lean_dec_ref(v___y_2868_);
lean_dec_ref(v___y_2867_);
lean_dec_ref(v_body_2777_);
v_a_2904_ = lean_ctor_get(v___x_2878_, 0);
v_isSharedCheck_2911_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2911_ == 0)
{
v___x_2906_ = v___x_2878_;
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
else
{
lean_inc(v_a_2904_);
lean_dec(v___x_2878_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2909_; 
if (v_isShared_2907_ == 0)
{
v___x_2909_ = v___x_2906_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v_a_2904_);
v___x_2909_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
return v___x_2909_;
}
}
}
}
v___jp_2912_:
{
uint8_t v___x_2921_; 
v___x_2921_ = l_Lean_Expr_isFVar(v_fst_2915_);
if (v___x_2921_ == 0)
{
lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v_a_2924_; lean_object* v___x_2926_; uint8_t v_isShared_2927_; uint8_t v_isSharedCheck_2931_; 
lean_dec_ref(v_fst_2915_);
lean_dec_ref(v_fst_2914_);
lean_dec_ref(v_fst_2913_);
lean_dec_ref(v_body_2777_);
lean_dec(v_mvarId_2764_);
v___x_2922_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__7, &l_Lean_Meta_introSubstEq___lam__0___closed__7_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__7);
v___x_2923_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2922_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_);
v_a_2924_ = lean_ctor_get(v___x_2923_, 0);
v_isSharedCheck_2931_ = !lean_is_exclusive(v___x_2923_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2926_ = v___x_2923_;
v_isShared_2927_ = v_isSharedCheck_2931_;
goto v_resetjp_2925_;
}
else
{
lean_inc(v_a_2924_);
lean_dec(v___x_2923_);
v___x_2926_ = lean_box(0);
v_isShared_2927_ = v_isSharedCheck_2931_;
goto v_resetjp_2925_;
}
v_resetjp_2925_:
{
lean_object* v___x_2929_; 
if (v_isShared_2927_ == 0)
{
v___x_2929_ = v___x_2926_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_a_2924_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
return v___x_2929_;
}
}
}
else
{
v___y_2866_ = v_snd_2916_;
v___y_2867_ = v_fst_2914_;
v___y_2868_ = v_fst_2913_;
v___y_2869_ = v_fst_2915_;
v___y_2870_ = v___y_2917_;
v___y_2871_ = v___y_2918_;
v___y_2872_ = v___y_2919_;
v___y_2873_ = v___y_2920_;
goto v___jp_2865_;
}
}
}
else
{
lean_dec(v_a_2772_);
lean_dec(v_mvarId_2764_);
goto v___jp_2773_;
}
v___jp_2773_:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; 
v___x_2774_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__1, &l_Lean_Meta_introSubstEq___lam__0___closed__1_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__1);
v___x_2775_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2774_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_);
return v___x_2775_;
}
}
else
{
lean_object* v_a_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3011_; 
lean_dec(v_mvarId_2764_);
v_a_3004_ = lean_ctor_get(v___x_2771_, 0);
v_isSharedCheck_3011_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_3006_ = v___x_2771_;
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_a_3004_);
lean_dec(v___x_2771_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3009_; 
if (v_isShared_3007_ == 0)
{
v___x_3009_ = v___x_3006_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v_a_3004_);
v___x_3009_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
return v___x_3009_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0___boxed(lean_object* v_mvarId_3012_, lean_object* v_substLHS_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_){
_start:
{
uint8_t v_substLHS_boxed_3019_; lean_object* v_res_3020_; 
v_substLHS_boxed_3019_ = lean_unbox(v_substLHS_3013_);
v_res_3020_ = l_Lean_Meta_introSubstEq___lam__0(v_mvarId_3012_, v_substLHS_boxed_3019_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_);
lean_dec(v___y_3017_);
lean_dec_ref(v___y_3016_);
lean_dec(v___y_3015_);
lean_dec_ref(v___y_3014_);
return v_res_3020_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(lean_object* v_keys_3021_, lean_object* v_i_3022_, lean_object* v_k_3023_){
_start:
{
lean_object* v___x_3024_; uint8_t v___x_3025_; 
v___x_3024_ = lean_array_get_size(v_keys_3021_);
v___x_3025_ = lean_nat_dec_lt(v_i_3022_, v___x_3024_);
if (v___x_3025_ == 0)
{
lean_dec(v_i_3022_);
return v___x_3025_;
}
else
{
lean_object* v_k_x27_3026_; uint8_t v___x_3027_; 
v_k_x27_3026_ = lean_array_fget_borrowed(v_keys_3021_, v_i_3022_);
v___x_3027_ = l_Lean_instBEqMVarId_beq(v_k_3023_, v_k_x27_3026_);
if (v___x_3027_ == 0)
{
lean_object* v___x_3028_; lean_object* v___x_3029_; 
v___x_3028_ = lean_unsigned_to_nat(1u);
v___x_3029_ = lean_nat_add(v_i_3022_, v___x_3028_);
lean_dec(v_i_3022_);
v_i_3022_ = v___x_3029_;
goto _start;
}
else
{
lean_dec(v_i_3022_);
return v___x_3027_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_keys_3031_, lean_object* v_i_3032_, lean_object* v_k_3033_){
_start:
{
uint8_t v_res_3034_; lean_object* v_r_3035_; 
v_res_3034_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(v_keys_3031_, v_i_3032_, v_k_3033_);
lean_dec(v_k_3033_);
lean_dec_ref(v_keys_3031_);
v_r_3035_ = lean_box(v_res_3034_);
return v_r_3035_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(lean_object* v_x_3036_, size_t v_x_3037_, lean_object* v_x_3038_){
_start:
{
if (lean_obj_tag(v_x_3036_) == 0)
{
lean_object* v_es_3039_; lean_object* v___x_3040_; size_t v___x_3041_; size_t v___x_3042_; size_t v___x_3043_; lean_object* v_j_3044_; lean_object* v___x_3045_; 
v_es_3039_ = lean_ctor_get(v_x_3036_, 0);
v___x_3040_ = lean_box(2);
v___x_3041_ = ((size_t)5ULL);
v___x_3042_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1);
v___x_3043_ = lean_usize_land(v_x_3037_, v___x_3042_);
v_j_3044_ = lean_usize_to_nat(v___x_3043_);
v___x_3045_ = lean_array_get_borrowed(v___x_3040_, v_es_3039_, v_j_3044_);
lean_dec(v_j_3044_);
switch(lean_obj_tag(v___x_3045_))
{
case 0:
{
lean_object* v_key_3046_; uint8_t v___x_3047_; 
v_key_3046_ = lean_ctor_get(v___x_3045_, 0);
v___x_3047_ = l_Lean_instBEqMVarId_beq(v_x_3038_, v_key_3046_);
return v___x_3047_;
}
case 1:
{
lean_object* v_node_3048_; size_t v___x_3049_; 
v_node_3048_ = lean_ctor_get(v___x_3045_, 0);
v___x_3049_ = lean_usize_shift_right(v_x_3037_, v___x_3041_);
v_x_3036_ = v_node_3048_;
v_x_3037_ = v___x_3049_;
goto _start;
}
default: 
{
uint8_t v___x_3051_; 
v___x_3051_ = 0;
return v___x_3051_;
}
}
}
else
{
lean_object* v_ks_3052_; lean_object* v___x_3053_; uint8_t v___x_3054_; 
v_ks_3052_ = lean_ctor_get(v_x_3036_, 0);
v___x_3053_ = lean_unsigned_to_nat(0u);
v___x_3054_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(v_ks_3052_, v___x_3053_, v_x_3038_);
return v___x_3054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg___boxed(lean_object* v_x_3055_, lean_object* v_x_3056_, lean_object* v_x_3057_){
_start:
{
size_t v_x_12606__boxed_3058_; uint8_t v_res_3059_; lean_object* v_r_3060_; 
v_x_12606__boxed_3058_ = lean_unbox_usize(v_x_3056_);
lean_dec(v_x_3056_);
v_res_3059_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(v_x_3055_, v_x_12606__boxed_3058_, v_x_3057_);
lean_dec(v_x_3057_);
lean_dec_ref(v_x_3055_);
v_r_3060_ = lean_box(v_res_3059_);
return v_r_3060_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(lean_object* v_x_3061_, lean_object* v_x_3062_){
_start:
{
uint64_t v___x_3063_; size_t v___x_3064_; uint8_t v___x_3065_; 
v___x_3063_ = l_Lean_instHashableMVarId_hash(v_x_3062_);
v___x_3064_ = lean_uint64_to_usize(v___x_3063_);
v___x_3065_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(v_x_3061_, v___x_3064_, v_x_3062_);
return v___x_3065_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg___boxed(lean_object* v_x_3066_, lean_object* v_x_3067_){
_start:
{
uint8_t v_res_3068_; lean_object* v_r_3069_; 
v_res_3068_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(v_x_3066_, v_x_3067_);
lean_dec(v_x_3067_);
lean_dec_ref(v_x_3066_);
v_r_3069_ = lean_box(v_res_3068_);
return v_r_3069_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(lean_object* v_mvarId_3070_, lean_object* v___y_3071_){
_start:
{
lean_object* v___x_3073_; lean_object* v_mctx_3074_; lean_object* v_eAssignment_3075_; uint8_t v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3073_ = lean_st_ref_get(v___y_3071_);
v_mctx_3074_ = lean_ctor_get(v___x_3073_, 0);
lean_inc_ref(v_mctx_3074_);
lean_dec(v___x_3073_);
v_eAssignment_3075_ = lean_ctor_get(v_mctx_3074_, 8);
lean_inc_ref(v_eAssignment_3075_);
lean_dec_ref(v_mctx_3074_);
v___x_3076_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(v_eAssignment_3075_, v_mvarId_3070_);
lean_dec_ref(v_eAssignment_3075_);
v___x_3077_ = lean_box(v___x_3076_);
v___x_3078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3078_, 0, v___x_3077_);
return v___x_3078_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg___boxed(lean_object* v_mvarId_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_){
_start:
{
lean_object* v_res_3082_; 
v_res_3082_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(v_mvarId_3079_, v___y_3080_);
lean_dec(v___y_3080_);
lean_dec(v_mvarId_3079_);
return v_res_3082_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3084_; lean_object* v___x_3085_; 
v___x_3084_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__1___closed__0));
v___x_3085_ = l_Lean_stringToMessageData(v___x_3084_);
return v___x_3085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1(lean_object* v_mvarId_3086_, uint8_t v___y_3087_, lean_object* v_____r_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_){
_start:
{
lean_object* v___y_3095_; lean_object* v___y_3096_; lean_object* v___y_3097_; lean_object* v___y_3098_; lean_object* v___x_3130_; lean_object* v_a_3131_; uint8_t v___x_3132_; 
v___x_3130_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(v_mvarId_3086_, v___y_3090_);
v_a_3131_ = lean_ctor_get(v___x_3130_, 0);
lean_inc(v_a_3131_);
lean_dec_ref(v___x_3130_);
v___x_3132_ = lean_unbox(v_a_3131_);
lean_dec(v_a_3131_);
if (v___x_3132_ == 0)
{
v___y_3095_ = v___y_3089_;
v___y_3096_ = v___y_3090_;
v___y_3097_ = v___y_3091_;
v___y_3098_ = v___y_3092_;
goto v___jp_3094_;
}
else
{
lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v_a_3135_; lean_object* v___x_3137_; uint8_t v_isShared_3138_; uint8_t v_isSharedCheck_3142_; 
lean_dec(v_mvarId_3086_);
v___x_3133_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__1___closed__1, &l_Lean_Meta_introSubstEq___lam__1___closed__1_once, _init_l_Lean_Meta_introSubstEq___lam__1___closed__1);
v___x_3134_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_3133_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_);
v_a_3135_ = lean_ctor_get(v___x_3134_, 0);
v_isSharedCheck_3142_ = !lean_is_exclusive(v___x_3134_);
if (v_isSharedCheck_3142_ == 0)
{
v___x_3137_ = v___x_3134_;
v_isShared_3138_ = v_isSharedCheck_3142_;
goto v_resetjp_3136_;
}
else
{
lean_inc(v_a_3135_);
lean_dec(v___x_3134_);
v___x_3137_ = lean_box(0);
v_isShared_3138_ = v_isSharedCheck_3142_;
goto v_resetjp_3136_;
}
v_resetjp_3136_:
{
lean_object* v___x_3140_; 
if (v_isShared_3138_ == 0)
{
v___x_3140_ = v___x_3137_;
goto v_reusejp_3139_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v_a_3135_);
v___x_3140_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3139_;
}
v_reusejp_3139_:
{
return v___x_3140_;
}
}
}
v___jp_3094_:
{
lean_object* v___x_3099_; 
v___x_3099_ = l_Lean_Meta_intro1Core(v_mvarId_3086_, v___y_3087_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_);
if (lean_obj_tag(v___x_3099_) == 0)
{
lean_object* v_a_3100_; lean_object* v_fst_3101_; lean_object* v_snd_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; 
v_a_3100_ = lean_ctor_get(v___x_3099_, 0);
lean_inc(v_a_3100_);
lean_dec_ref(v___x_3099_);
v_fst_3101_ = lean_ctor_get(v_a_3100_, 0);
lean_inc(v_fst_3101_);
v_snd_3102_ = lean_ctor_get(v_a_3100_, 1);
lean_inc(v_snd_3102_);
lean_dec(v_a_3100_);
v___x_3103_ = lean_box(0);
v___x_3104_ = l_Lean_Meta_substEq(v_snd_3102_, v_fst_3101_, v___x_3103_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3113_; 
v_a_3105_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3113_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3113_ == 0)
{
v___x_3107_ = v___x_3104_;
v_isShared_3108_ = v_isSharedCheck_3113_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v___x_3104_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3113_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3109_; lean_object* v___x_3111_; 
v___x_3109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3109_, 0, v_a_3105_);
if (v_isShared_3108_ == 0)
{
lean_ctor_set(v___x_3107_, 0, v___x_3109_);
v___x_3111_ = v___x_3107_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v___x_3109_);
v___x_3111_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
return v___x_3111_;
}
}
}
else
{
lean_object* v_a_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3121_; 
v_a_3114_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3121_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3116_ = v___x_3104_;
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_a_3114_);
lean_dec(v___x_3104_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3119_; 
if (v_isShared_3117_ == 0)
{
v___x_3119_ = v___x_3116_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v_a_3114_);
v___x_3119_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
return v___x_3119_;
}
}
}
}
else
{
lean_object* v_a_3122_; lean_object* v___x_3124_; uint8_t v_isShared_3125_; uint8_t v_isSharedCheck_3129_; 
v_a_3122_ = lean_ctor_get(v___x_3099_, 0);
v_isSharedCheck_3129_ = !lean_is_exclusive(v___x_3099_);
if (v_isSharedCheck_3129_ == 0)
{
v___x_3124_ = v___x_3099_;
v_isShared_3125_ = v_isSharedCheck_3129_;
goto v_resetjp_3123_;
}
else
{
lean_inc(v_a_3122_);
lean_dec(v___x_3099_);
v___x_3124_ = lean_box(0);
v_isShared_3125_ = v_isSharedCheck_3129_;
goto v_resetjp_3123_;
}
v_resetjp_3123_:
{
lean_object* v___x_3127_; 
if (v_isShared_3125_ == 0)
{
v___x_3127_ = v___x_3124_;
goto v_reusejp_3126_;
}
else
{
lean_object* v_reuseFailAlloc_3128_; 
v_reuseFailAlloc_3128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3128_, 0, v_a_3122_);
v___x_3127_ = v_reuseFailAlloc_3128_;
goto v_reusejp_3126_;
}
v_reusejp_3126_:
{
return v___x_3127_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1___boxed(lean_object* v_mvarId_3143_, lean_object* v___y_3144_, lean_object* v_____r_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_){
_start:
{
uint8_t v___y_12680__boxed_3151_; lean_object* v_res_3152_; 
v___y_12680__boxed_3151_ = lean_unbox(v___y_3144_);
v_res_3152_ = l_Lean_Meta_introSubstEq___lam__1(v_mvarId_3143_, v___y_12680__boxed_3151_, v_____r_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_);
lean_dec(v___y_3149_);
lean_dec_ref(v___y_3148_);
lean_dec(v___y_3147_);
lean_dec_ref(v___y_3146_);
return v_res_3152_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__2(void){
_start:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; 
v___x_3156_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__22));
v___x_3157_ = ((lean_object*)(l_Lean_Meta_substCore___lam__0___closed__1));
v___x_3158_ = l_Lean_Name_append(v___x_3157_, v___x_3156_);
return v___x_3158_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__4(void){
_start:
{
lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3160_ = ((lean_object*)(l_Lean_Meta_introSubstEq___closed__3));
v___x_3161_ = l_Lean_stringToMessageData(v___x_3160_);
return v___x_3161_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__6(void){
_start:
{
lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3163_ = ((lean_object*)(l_Lean_Meta_introSubstEq___closed__5));
v___x_3164_ = l_Lean_stringToMessageData(v___x_3163_);
return v___x_3164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq(lean_object* v_mvarId_3165_, uint8_t v_substLHS_3166_, lean_object* v_a_3167_, lean_object* v_a_3168_, lean_object* v_a_3169_, lean_object* v_a_3170_){
_start:
{
lean_object* v___y_3173_; lean_object* v___x_3191_; lean_object* v___x_3192_; 
v___x_3191_ = ((lean_object*)(l_Lean_Meta_introSubstEq___closed__1));
lean_inc(v_mvarId_3165_);
v___x_3192_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3165_, v___x_3191_, v_a_3167_, v_a_3168_, v_a_3169_, v_a_3170_);
if (lean_obj_tag(v___x_3192_) == 0)
{
lean_object* v___x_3193_; lean_object* v___f_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
lean_dec_ref(v___x_3192_);
v___x_3193_ = lean_box(v_substLHS_3166_);
lean_inc_n(v_mvarId_3165_, 2);
v___f_3194_ = lean_alloc_closure((void*)(l_Lean_Meta_introSubstEq___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3194_, 0, v_mvarId_3165_);
lean_closure_set(v___f_3194_, 1, v___x_3193_);
v___x_3195_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___boxed), 8, 3);
lean_closure_set(v___x_3195_, 0, lean_box(0));
lean_closure_set(v___x_3195_, 1, v_mvarId_3165_);
lean_closure_set(v___x_3195_, 2, v___f_3194_);
v___x_3196_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(v___x_3195_, v_a_3167_, v_a_3168_, v_a_3169_, v_a_3170_);
if (lean_obj_tag(v___x_3196_) == 0)
{
lean_dec(v_mvarId_3165_);
return v___x_3196_;
}
else
{
lean_object* v_a_3197_; lean_object* v___y_3199_; uint8_t v___y_3203_; uint8_t v___x_3237_; 
v_a_3197_ = lean_ctor_get(v___x_3196_, 0);
lean_inc(v_a_3197_);
v___x_3237_ = l_Lean_Exception_isInterrupt(v_a_3197_);
if (v___x_3237_ == 0)
{
uint8_t v___x_3238_; 
lean_inc(v_a_3197_);
v___x_3238_ = l_Lean_Exception_isRuntime(v_a_3197_);
v___y_3203_ = v___x_3238_;
goto v___jp_3202_;
}
else
{
v___y_3203_ = v___x_3237_;
goto v___jp_3202_;
}
v___jp_3198_:
{
lean_object* v___x_3200_; lean_object* v___x_3201_; 
v___x_3200_ = lean_box(0);
lean_inc(v_a_3170_);
lean_inc_ref(v_a_3169_);
lean_inc(v_a_3168_);
lean_inc_ref(v_a_3167_);
v___x_3201_ = lean_apply_6(v___y_3199_, v___x_3200_, v_a_3167_, v_a_3168_, v_a_3169_, v_a_3170_, lean_box(0));
v___y_3173_ = v___x_3201_;
goto v___jp_3172_;
}
v___jp_3202_:
{
if (v___y_3203_ == 0)
{
lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3235_; 
v_isSharedCheck_3235_ = !lean_is_exclusive(v___x_3196_);
if (v_isSharedCheck_3235_ == 0)
{
lean_object* v_unused_3236_; 
v_unused_3236_ = lean_ctor_get(v___x_3196_, 0);
lean_dec(v_unused_3236_);
v___x_3205_ = v___x_3196_;
v_isShared_3206_ = v_isSharedCheck_3235_;
goto v_resetjp_3204_;
}
else
{
lean_dec(v___x_3196_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3235_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v_options_3207_; lean_object* v_inheritedTraceOptions_3208_; uint8_t v_hasTrace_3209_; lean_object* v___x_3210_; lean_object* v___f_3211_; 
v_options_3207_ = lean_ctor_get(v_a_3169_, 2);
v_inheritedTraceOptions_3208_ = lean_ctor_get(v_a_3169_, 13);
v_hasTrace_3209_ = lean_ctor_get_uint8(v_options_3207_, sizeof(void*)*1);
v___x_3210_ = lean_box(v___y_3203_);
lean_inc(v_mvarId_3165_);
v___f_3211_ = lean_alloc_closure((void*)(l_Lean_Meta_introSubstEq___lam__1___boxed), 8, 2);
lean_closure_set(v___f_3211_, 0, v_mvarId_3165_);
lean_closure_set(v___f_3211_, 1, v___x_3210_);
if (v_hasTrace_3209_ == 0)
{
lean_del_object(v___x_3205_);
lean_dec(v_a_3197_);
lean_dec(v_mvarId_3165_);
v___y_3199_ = v___f_3211_;
goto v___jp_3198_;
}
else
{
lean_object* v___x_3212_; lean_object* v___x_3213_; uint8_t v___x_3214_; 
v___x_3212_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__22));
v___x_3213_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__2, &l_Lean_Meta_introSubstEq___closed__2_once, _init_l_Lean_Meta_introSubstEq___closed__2);
v___x_3214_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3208_, v_options_3207_, v___x_3213_);
if (v___x_3214_ == 0)
{
lean_del_object(v___x_3205_);
lean_dec(v_a_3197_);
lean_dec(v_mvarId_3165_);
v___y_3199_ = v___f_3211_;
goto v___jp_3198_;
}
else
{
lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3221_; 
lean_dec_ref(v___f_3211_);
v___x_3215_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__4, &l_Lean_Meta_introSubstEq___closed__4_once, _init_l_Lean_Meta_introSubstEq___closed__4);
v___x_3216_ = l_Lean_Exception_toMessageData(v_a_3197_);
v___x_3217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3217_, 0, v___x_3215_);
lean_ctor_set(v___x_3217_, 1, v___x_3216_);
v___x_3218_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__6, &l_Lean_Meta_introSubstEq___closed__6_once, _init_l_Lean_Meta_introSubstEq___closed__6);
v___x_3219_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3219_, 0, v___x_3217_);
lean_ctor_set(v___x_3219_, 1, v___x_3218_);
lean_inc(v_mvarId_3165_);
if (v_isShared_3206_ == 0)
{
lean_ctor_set(v___x_3205_, 0, v_mvarId_3165_);
v___x_3221_ = v___x_3205_;
goto v_reusejp_3220_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v_mvarId_3165_);
v___x_3221_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3220_;
}
v_reusejp_3220_:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; 
v___x_3222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3219_);
lean_ctor_set(v___x_3222_, 1, v___x_3221_);
v___x_3223_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(v___x_3212_, v___x_3222_, v_a_3167_, v_a_3168_, v_a_3169_, v_a_3170_);
if (lean_obj_tag(v___x_3223_) == 0)
{
lean_object* v_a_3224_; lean_object* v___x_3225_; 
v_a_3224_ = lean_ctor_get(v___x_3223_, 0);
lean_inc(v_a_3224_);
lean_dec_ref(v___x_3223_);
v___x_3225_ = l_Lean_Meta_introSubstEq___lam__1(v_mvarId_3165_, v___y_3203_, v_a_3224_, v_a_3167_, v_a_3168_, v_a_3169_, v_a_3170_);
v___y_3173_ = v___x_3225_;
goto v___jp_3172_;
}
else
{
lean_object* v_a_3226_; lean_object* v___x_3228_; uint8_t v_isShared_3229_; uint8_t v_isSharedCheck_3233_; 
lean_dec(v_mvarId_3165_);
v_a_3226_ = lean_ctor_get(v___x_3223_, 0);
v_isSharedCheck_3233_ = !lean_is_exclusive(v___x_3223_);
if (v_isSharedCheck_3233_ == 0)
{
v___x_3228_ = v___x_3223_;
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
else
{
lean_inc(v_a_3226_);
lean_dec(v___x_3223_);
v___x_3228_ = lean_box(0);
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
v_resetjp_3227_:
{
lean_object* v___x_3231_; 
if (v_isShared_3229_ == 0)
{
v___x_3231_ = v___x_3228_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3232_; 
v_reuseFailAlloc_3232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3232_, 0, v_a_3226_);
v___x_3231_ = v_reuseFailAlloc_3232_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
return v___x_3231_;
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
lean_dec(v_a_3197_);
lean_dec(v_mvarId_3165_);
return v___x_3196_;
}
}
}
}
else
{
lean_object* v_a_3239_; lean_object* v___x_3241_; uint8_t v_isShared_3242_; uint8_t v_isSharedCheck_3246_; 
lean_dec(v_mvarId_3165_);
v_a_3239_ = lean_ctor_get(v___x_3192_, 0);
v_isSharedCheck_3246_ = !lean_is_exclusive(v___x_3192_);
if (v_isSharedCheck_3246_ == 0)
{
v___x_3241_ = v___x_3192_;
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
else
{
lean_inc(v_a_3239_);
lean_dec(v___x_3192_);
v___x_3241_ = lean_box(0);
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
v_resetjp_3240_:
{
lean_object* v___x_3244_; 
if (v_isShared_3242_ == 0)
{
v___x_3244_ = v___x_3241_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v_a_3239_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
}
v___jp_3172_:
{
if (lean_obj_tag(v___y_3173_) == 0)
{
lean_object* v_a_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3182_; 
v_a_3174_ = lean_ctor_get(v___y_3173_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___y_3173_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3176_ = v___y_3173_;
v_isShared_3177_ = v_isSharedCheck_3182_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_a_3174_);
lean_dec(v___y_3173_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3182_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v_a_3178_; lean_object* v___x_3180_; 
v_a_3178_ = lean_ctor_get(v_a_3174_, 0);
lean_inc(v_a_3178_);
lean_dec(v_a_3174_);
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 0, v_a_3178_);
v___x_3180_ = v___x_3176_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v_a_3178_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
return v___x_3180_;
}
}
}
else
{
lean_object* v_a_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3190_; 
v_a_3183_ = lean_ctor_get(v___y_3173_, 0);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___y_3173_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3185_ = v___y_3173_;
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_a_3183_);
lean_dec(v___y_3173_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v___x_3188_; 
if (v_isShared_3186_ == 0)
{
v___x_3188_ = v___x_3185_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v_a_3183_);
v___x_3188_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
return v___x_3188_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___boxed(lean_object* v_mvarId_3247_, lean_object* v_substLHS_3248_, lean_object* v_a_3249_, lean_object* v_a_3250_, lean_object* v_a_3251_, lean_object* v_a_3252_, lean_object* v_a_3253_){
_start:
{
uint8_t v_substLHS_boxed_3254_; lean_object* v_res_3255_; 
v_substLHS_boxed_3254_ = lean_unbox(v_substLHS_3248_);
v_res_3255_ = l_Lean_Meta_introSubstEq(v_mvarId_3247_, v_substLHS_boxed_3254_, v_a_3249_, v_a_3250_, v_a_3251_, v_a_3252_);
lean_dec(v_a_3252_);
lean_dec_ref(v_a_3251_);
lean_dec(v_a_3250_);
lean_dec_ref(v_a_3249_);
return v_res_3255_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0(lean_object* v_00_u03b1_3256_, lean_object* v_msg_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_){
_start:
{
lean_object* v___x_3263_; 
v___x_3263_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v_msg_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_);
return v___x_3263_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___boxed(lean_object* v_00_u03b1_3264_, lean_object* v_msg_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_){
_start:
{
lean_object* v_res_3271_; 
v_res_3271_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0(v_00_u03b1_3264_, v_msg_3265_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_);
lean_dec(v___y_3269_);
lean_dec_ref(v___y_3268_);
lean_dec(v___y_3267_);
lean_dec_ref(v___y_3266_);
return v_res_3271_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2(lean_object* v_mvarId_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_){
_start:
{
lean_object* v___x_3278_; 
v___x_3278_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(v_mvarId_3272_, v___y_3274_);
return v___x_3278_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___boxed(lean_object* v_mvarId_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_){
_start:
{
lean_object* v_res_3285_; 
v_res_3285_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2(v_mvarId_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_);
lean_dec(v___y_3283_);
lean_dec_ref(v___y_3282_);
lean_dec(v___y_3281_);
lean_dec_ref(v___y_3280_);
lean_dec(v_mvarId_3279_);
return v_res_3285_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2(lean_object* v_00_u03b2_3286_, lean_object* v_x_3287_, lean_object* v_x_3288_){
_start:
{
uint8_t v___x_3289_; 
v___x_3289_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(v_x_3287_, v_x_3288_);
return v___x_3289_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___boxed(lean_object* v_00_u03b2_3290_, lean_object* v_x_3291_, lean_object* v_x_3292_){
_start:
{
uint8_t v_res_3293_; lean_object* v_r_3294_; 
v_res_3293_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2(v_00_u03b2_3290_, v_x_3291_, v_x_3292_);
lean_dec(v_x_3292_);
lean_dec_ref(v_x_3291_);
v_r_3294_ = lean_box(v_res_3293_);
return v_r_3294_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3(lean_object* v_00_u03b2_3295_, lean_object* v_x_3296_, size_t v_x_3297_, lean_object* v_x_3298_){
_start:
{
uint8_t v___x_3299_; 
v___x_3299_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(v_x_3296_, v_x_3297_, v_x_3298_);
return v___x_3299_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___boxed(lean_object* v_00_u03b2_3300_, lean_object* v_x_3301_, lean_object* v_x_3302_, lean_object* v_x_3303_){
_start:
{
size_t v_x_13044__boxed_3304_; uint8_t v_res_3305_; lean_object* v_r_3306_; 
v_x_13044__boxed_3304_ = lean_unbox_usize(v_x_3302_);
lean_dec(v_x_3302_);
v_res_3305_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3(v_00_u03b2_3300_, v_x_3301_, v_x_13044__boxed_3304_, v_x_3303_);
lean_dec(v_x_3303_);
lean_dec_ref(v_x_3301_);
v_r_3306_ = lean_box(v_res_3305_);
return v_r_3306_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_3307_, lean_object* v_keys_3308_, lean_object* v_vals_3309_, lean_object* v_heq_3310_, lean_object* v_i_3311_, lean_object* v_k_3312_){
_start:
{
uint8_t v___x_3313_; 
v___x_3313_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(v_keys_3308_, v_i_3311_, v_k_3312_);
return v___x_3313_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_3314_, lean_object* v_keys_3315_, lean_object* v_vals_3316_, lean_object* v_heq_3317_, lean_object* v_i_3318_, lean_object* v_k_3319_){
_start:
{
uint8_t v_res_3320_; lean_object* v_r_3321_; 
v_res_3320_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4(v_00_u03b2_3314_, v_keys_3315_, v_vals_3316_, v_heq_3317_, v_i_3318_, v_k_3319_);
lean_dec(v_k_3319_);
lean_dec_ref(v_vals_3316_);
lean_dec_ref(v_keys_3315_);
v_r_3321_ = lean_box(v_res_3320_);
return v_r_3321_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(lean_object* v_x_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_){
_start:
{
lean_object* v___x_3328_; 
v___x_3328_ = l_Lean_Meta_saveState___redArg(v___y_3324_, v___y_3326_);
if (lean_obj_tag(v___x_3328_) == 0)
{
lean_object* v_a_3329_; lean_object* v___x_3330_; 
v_a_3329_ = lean_ctor_get(v___x_3328_, 0);
lean_inc(v_a_3329_);
lean_dec_ref(v___x_3328_);
lean_inc(v___y_3326_);
lean_inc_ref(v___y_3325_);
lean_inc(v___y_3324_);
lean_inc_ref(v___y_3323_);
v___x_3330_ = lean_apply_5(v_x_3322_, v___y_3323_, v___y_3324_, v___y_3325_, v___y_3326_, lean_box(0));
if (lean_obj_tag(v___x_3330_) == 0)
{
lean_object* v_a_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3339_; 
lean_dec(v_a_3329_);
v_a_3331_ = lean_ctor_get(v___x_3330_, 0);
v_isSharedCheck_3339_ = !lean_is_exclusive(v___x_3330_);
if (v_isSharedCheck_3339_ == 0)
{
v___x_3333_ = v___x_3330_;
v_isShared_3334_ = v_isSharedCheck_3339_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_a_3331_);
lean_dec(v___x_3330_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3339_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3335_; lean_object* v___x_3337_; 
v___x_3335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3335_, 0, v_a_3331_);
if (v_isShared_3334_ == 0)
{
lean_ctor_set(v___x_3333_, 0, v___x_3335_);
v___x_3337_ = v___x_3333_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3338_; 
v_reuseFailAlloc_3338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3338_, 0, v___x_3335_);
v___x_3337_ = v_reuseFailAlloc_3338_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
return v___x_3337_;
}
}
}
else
{
lean_object* v_a_3340_; lean_object* v___x_3342_; uint8_t v_isShared_3343_; uint8_t v_isSharedCheck_3369_; 
v_a_3340_ = lean_ctor_get(v___x_3330_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3330_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3342_ = v___x_3330_;
v_isShared_3343_ = v_isSharedCheck_3369_;
goto v_resetjp_3341_;
}
else
{
lean_inc(v_a_3340_);
lean_dec(v___x_3330_);
v___x_3342_ = lean_box(0);
v_isShared_3343_ = v_isSharedCheck_3369_;
goto v_resetjp_3341_;
}
v_resetjp_3341_:
{
uint8_t v___y_3345_; uint8_t v___x_3367_; 
v___x_3367_ = l_Lean_Exception_isInterrupt(v_a_3340_);
if (v___x_3367_ == 0)
{
uint8_t v___x_3368_; 
lean_inc(v_a_3340_);
v___x_3368_ = l_Lean_Exception_isRuntime(v_a_3340_);
v___y_3345_ = v___x_3368_;
goto v___jp_3344_;
}
else
{
v___y_3345_ = v___x_3367_;
goto v___jp_3344_;
}
v___jp_3344_:
{
if (v___y_3345_ == 0)
{
lean_object* v___x_3346_; 
lean_del_object(v___x_3342_);
lean_dec(v_a_3340_);
v___x_3346_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3329_, v___y_3324_, v___y_3326_);
lean_dec(v_a_3329_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3354_; 
v_isSharedCheck_3354_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3354_ == 0)
{
lean_object* v_unused_3355_; 
v_unused_3355_ = lean_ctor_get(v___x_3346_, 0);
lean_dec(v_unused_3355_);
v___x_3348_ = v___x_3346_;
v_isShared_3349_ = v_isSharedCheck_3354_;
goto v_resetjp_3347_;
}
else
{
lean_dec(v___x_3346_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3354_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
lean_object* v___x_3350_; lean_object* v___x_3352_; 
v___x_3350_ = lean_box(0);
if (v_isShared_3349_ == 0)
{
lean_ctor_set(v___x_3348_, 0, v___x_3350_);
v___x_3352_ = v___x_3348_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v___x_3350_);
v___x_3352_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
return v___x_3352_;
}
}
}
else
{
lean_object* v_a_3356_; lean_object* v___x_3358_; uint8_t v_isShared_3359_; uint8_t v_isSharedCheck_3363_; 
v_a_3356_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3363_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3358_ = v___x_3346_;
v_isShared_3359_ = v_isSharedCheck_3363_;
goto v_resetjp_3357_;
}
else
{
lean_inc(v_a_3356_);
lean_dec(v___x_3346_);
v___x_3358_ = lean_box(0);
v_isShared_3359_ = v_isSharedCheck_3363_;
goto v_resetjp_3357_;
}
v_resetjp_3357_:
{
lean_object* v___x_3361_; 
if (v_isShared_3359_ == 0)
{
v___x_3361_ = v___x_3358_;
goto v_reusejp_3360_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v_a_3356_);
v___x_3361_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3360_;
}
v_reusejp_3360_:
{
return v___x_3361_;
}
}
}
}
else
{
lean_object* v___x_3365_; 
lean_dec(v_a_3329_);
if (v_isShared_3343_ == 0)
{
v___x_3365_ = v___x_3342_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v_a_3340_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
return v___x_3365_;
}
}
}
}
}
}
else
{
lean_object* v_a_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3377_; 
lean_dec_ref(v_x_3322_);
v_a_3370_ = lean_ctor_get(v___x_3328_, 0);
v_isSharedCheck_3377_ = !lean_is_exclusive(v___x_3328_);
if (v_isSharedCheck_3377_ == 0)
{
v___x_3372_ = v___x_3328_;
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
else
{
lean_inc(v_a_3370_);
lean_dec(v___x_3328_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
lean_object* v___x_3375_; 
if (v_isShared_3373_ == 0)
{
v___x_3375_ = v___x_3372_;
goto v_reusejp_3374_;
}
else
{
lean_object* v_reuseFailAlloc_3376_; 
v_reuseFailAlloc_3376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3376_, 0, v_a_3370_);
v___x_3375_ = v_reuseFailAlloc_3376_;
goto v_reusejp_3374_;
}
v_reusejp_3374_:
{
return v___x_3375_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg___boxed(lean_object* v_x_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_){
_start:
{
lean_object* v_res_3384_; 
v_res_3384_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v_x_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_);
lean_dec(v___y_3382_);
lean_dec_ref(v___y_3381_);
lean_dec(v___y_3380_);
lean_dec_ref(v___y_3379_);
return v_res_3384_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0(lean_object* v_00_u03b1_3385_, lean_object* v_x_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_){
_start:
{
lean_object* v___x_3392_; 
v___x_3392_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v_x_3386_, v___y_3387_, v___y_3388_, v___y_3389_, v___y_3390_);
return v___x_3392_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___boxed(lean_object* v_00_u03b1_3393_, lean_object* v_x_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_){
_start:
{
lean_object* v_res_3400_; 
v_res_3400_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0(v_00_u03b1_3393_, v_x_3394_, v___y_3395_, v___y_3396_, v___y_3397_, v___y_3398_);
lean_dec(v___y_3398_);
lean_dec_ref(v___y_3397_);
lean_dec(v___y_3396_);
lean_dec_ref(v___y_3395_);
return v_res_3400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f(lean_object* v_mvarId_3401_, lean_object* v_hFVarId_3402_, lean_object* v_a_3403_, lean_object* v_a_3404_, lean_object* v_a_3405_, lean_object* v_a_3406_){
_start:
{
lean_object* v___x_3408_; lean_object* v___x_3409_; 
v___x_3408_ = lean_alloc_closure((void*)(l_Lean_Meta_substVar___boxed), 7, 2);
lean_closure_set(v___x_3408_, 0, v_mvarId_3401_);
lean_closure_set(v___x_3408_, 1, v_hFVarId_3402_);
v___x_3409_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v___x_3408_, v_a_3403_, v_a_3404_, v_a_3405_, v_a_3406_);
return v___x_3409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f___boxed(lean_object* v_mvarId_3410_, lean_object* v_hFVarId_3411_, lean_object* v_a_3412_, lean_object* v_a_3413_, lean_object* v_a_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_){
_start:
{
lean_object* v_res_3417_; 
v_res_3417_ = l_Lean_Meta_substVar_x3f(v_mvarId_3410_, v_hFVarId_3411_, v_a_3412_, v_a_3413_, v_a_3414_, v_a_3415_);
lean_dec(v_a_3415_);
lean_dec_ref(v_a_3414_);
lean_dec(v_a_3413_);
lean_dec_ref(v_a_3412_);
return v_res_3417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f(lean_object* v_mvarId_3418_, lean_object* v_hFVarId_3419_, lean_object* v_a_3420_, lean_object* v_a_3421_, lean_object* v_a_3422_, lean_object* v_a_3423_){
_start:
{
lean_object* v___x_3425_; lean_object* v___x_3426_; 
v___x_3425_ = lean_alloc_closure((void*)(l_Lean_Meta_subst___boxed), 7, 2);
lean_closure_set(v___x_3425_, 0, v_mvarId_3418_);
lean_closure_set(v___x_3425_, 1, v_hFVarId_3419_);
v___x_3426_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v___x_3425_, v_a_3420_, v_a_3421_, v_a_3422_, v_a_3423_);
return v___x_3426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f___boxed(lean_object* v_mvarId_3427_, lean_object* v_hFVarId_3428_, lean_object* v_a_3429_, lean_object* v_a_3430_, lean_object* v_a_3431_, lean_object* v_a_3432_, lean_object* v_a_3433_){
_start:
{
lean_object* v_res_3434_; 
v_res_3434_ = l_Lean_Meta_subst_x3f(v_mvarId_3427_, v_hFVarId_3428_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_);
lean_dec(v_a_3432_);
lean_dec_ref(v_a_3431_);
lean_dec(v_a_3430_);
lean_dec_ref(v_a_3429_);
return v_res_3434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f(lean_object* v_mvarId_3435_, lean_object* v_hFVarId_3436_, uint8_t v_symm_3437_, lean_object* v_fvarSubst_3438_, uint8_t v_clearH_3439_, uint8_t v_tryToSkip_3440_, lean_object* v_a_3441_, lean_object* v_a_3442_, lean_object* v_a_3443_, lean_object* v_a_3444_){
_start:
{
lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; 
v___x_3446_ = lean_box(v_symm_3437_);
v___x_3447_ = lean_box(v_clearH_3439_);
v___x_3448_ = lean_box(v_tryToSkip_3440_);
v___x_3449_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___boxed), 11, 6);
lean_closure_set(v___x_3449_, 0, v_mvarId_3435_);
lean_closure_set(v___x_3449_, 1, v_hFVarId_3436_);
lean_closure_set(v___x_3449_, 2, v___x_3446_);
lean_closure_set(v___x_3449_, 3, v_fvarSubst_3438_);
lean_closure_set(v___x_3449_, 4, v___x_3447_);
lean_closure_set(v___x_3449_, 5, v___x_3448_);
v___x_3450_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v___x_3449_, v_a_3441_, v_a_3442_, v_a_3443_, v_a_3444_);
return v___x_3450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f___boxed(lean_object* v_mvarId_3451_, lean_object* v_hFVarId_3452_, lean_object* v_symm_3453_, lean_object* v_fvarSubst_3454_, lean_object* v_clearH_3455_, lean_object* v_tryToSkip_3456_, lean_object* v_a_3457_, lean_object* v_a_3458_, lean_object* v_a_3459_, lean_object* v_a_3460_, lean_object* v_a_3461_){
_start:
{
uint8_t v_symm_boxed_3462_; uint8_t v_clearH_boxed_3463_; uint8_t v_tryToSkip_boxed_3464_; lean_object* v_res_3465_; 
v_symm_boxed_3462_ = lean_unbox(v_symm_3453_);
v_clearH_boxed_3463_ = lean_unbox(v_clearH_3455_);
v_tryToSkip_boxed_3464_ = lean_unbox(v_tryToSkip_3456_);
v_res_3465_ = l_Lean_Meta_substCore_x3f(v_mvarId_3451_, v_hFVarId_3452_, v_symm_boxed_3462_, v_fvarSubst_3454_, v_clearH_boxed_3463_, v_tryToSkip_boxed_3464_, v_a_3457_, v_a_3458_, v_a_3459_, v_a_3460_);
lean_dec(v_a_3460_);
lean_dec_ref(v_a_3459_);
lean_dec(v_a_3458_);
lean_dec_ref(v_a_3457_);
return v_res_3465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar(lean_object* v_mvarId_3466_, lean_object* v_hFVarId_3467_, lean_object* v_a_3468_, lean_object* v_a_3469_, lean_object* v_a_3470_, lean_object* v_a_3471_){
_start:
{
lean_object* v___x_3473_; 
lean_inc(v_mvarId_3466_);
v___x_3473_ = l_Lean_Meta_substVar_x3f(v_mvarId_3466_, v_hFVarId_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_);
if (lean_obj_tag(v___x_3473_) == 0)
{
lean_object* v_a_3474_; lean_object* v___x_3476_; uint8_t v_isShared_3477_; uint8_t v_isSharedCheck_3485_; 
v_a_3474_ = lean_ctor_get(v___x_3473_, 0);
v_isSharedCheck_3485_ = !lean_is_exclusive(v___x_3473_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3476_ = v___x_3473_;
v_isShared_3477_ = v_isSharedCheck_3485_;
goto v_resetjp_3475_;
}
else
{
lean_inc(v_a_3474_);
lean_dec(v___x_3473_);
v___x_3476_ = lean_box(0);
v_isShared_3477_ = v_isSharedCheck_3485_;
goto v_resetjp_3475_;
}
v_resetjp_3475_:
{
if (lean_obj_tag(v_a_3474_) == 0)
{
lean_object* v___x_3479_; 
if (v_isShared_3477_ == 0)
{
lean_ctor_set(v___x_3476_, 0, v_mvarId_3466_);
v___x_3479_ = v___x_3476_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3480_; 
v_reuseFailAlloc_3480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3480_, 0, v_mvarId_3466_);
v___x_3479_ = v_reuseFailAlloc_3480_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
return v___x_3479_;
}
}
else
{
lean_object* v_val_3481_; lean_object* v___x_3483_; 
lean_dec(v_mvarId_3466_);
v_val_3481_ = lean_ctor_get(v_a_3474_, 0);
lean_inc(v_val_3481_);
lean_dec_ref(v_a_3474_);
if (v_isShared_3477_ == 0)
{
lean_ctor_set(v___x_3476_, 0, v_val_3481_);
v___x_3483_ = v___x_3476_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v_val_3481_);
v___x_3483_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
return v___x_3483_;
}
}
}
}
else
{
lean_object* v_a_3486_; lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3493_; 
lean_dec(v_mvarId_3466_);
v_a_3486_ = lean_ctor_get(v___x_3473_, 0);
v_isSharedCheck_3493_ = !lean_is_exclusive(v___x_3473_);
if (v_isSharedCheck_3493_ == 0)
{
v___x_3488_ = v___x_3473_;
v_isShared_3489_ = v_isSharedCheck_3493_;
goto v_resetjp_3487_;
}
else
{
lean_inc(v_a_3486_);
lean_dec(v___x_3473_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3493_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
lean_object* v___x_3491_; 
if (v_isShared_3489_ == 0)
{
v___x_3491_ = v___x_3488_;
goto v_reusejp_3490_;
}
else
{
lean_object* v_reuseFailAlloc_3492_; 
v_reuseFailAlloc_3492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3492_, 0, v_a_3486_);
v___x_3491_ = v_reuseFailAlloc_3492_;
goto v_reusejp_3490_;
}
v_reusejp_3490_:
{
return v___x_3491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar___boxed(lean_object* v_mvarId_3494_, lean_object* v_hFVarId_3495_, lean_object* v_a_3496_, lean_object* v_a_3497_, lean_object* v_a_3498_, lean_object* v_a_3499_, lean_object* v_a_3500_){
_start:
{
lean_object* v_res_3501_; 
v_res_3501_ = l_Lean_Meta_trySubstVar(v_mvarId_3494_, v_hFVarId_3495_, v_a_3496_, v_a_3497_, v_a_3498_, v_a_3499_);
lean_dec(v_a_3499_);
lean_dec_ref(v_a_3498_);
lean_dec(v_a_3497_);
lean_dec_ref(v_a_3496_);
return v_res_3501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst(lean_object* v_mvarId_3502_, lean_object* v_hFVarId_3503_, lean_object* v_a_3504_, lean_object* v_a_3505_, lean_object* v_a_3506_, lean_object* v_a_3507_){
_start:
{
lean_object* v___x_3509_; 
lean_inc(v_mvarId_3502_);
v___x_3509_ = l_Lean_Meta_subst_x3f(v_mvarId_3502_, v_hFVarId_3503_, v_a_3504_, v_a_3505_, v_a_3506_, v_a_3507_);
if (lean_obj_tag(v___x_3509_) == 0)
{
lean_object* v_a_3510_; lean_object* v___x_3512_; uint8_t v_isShared_3513_; uint8_t v_isSharedCheck_3521_; 
v_a_3510_ = lean_ctor_get(v___x_3509_, 0);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3509_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3512_ = v___x_3509_;
v_isShared_3513_ = v_isSharedCheck_3521_;
goto v_resetjp_3511_;
}
else
{
lean_inc(v_a_3510_);
lean_dec(v___x_3509_);
v___x_3512_ = lean_box(0);
v_isShared_3513_ = v_isSharedCheck_3521_;
goto v_resetjp_3511_;
}
v_resetjp_3511_:
{
if (lean_obj_tag(v_a_3510_) == 0)
{
lean_object* v___x_3515_; 
if (v_isShared_3513_ == 0)
{
lean_ctor_set(v___x_3512_, 0, v_mvarId_3502_);
v___x_3515_ = v___x_3512_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v_mvarId_3502_);
v___x_3515_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
return v___x_3515_;
}
}
else
{
lean_object* v_val_3517_; lean_object* v___x_3519_; 
lean_dec(v_mvarId_3502_);
v_val_3517_ = lean_ctor_get(v_a_3510_, 0);
lean_inc(v_val_3517_);
lean_dec_ref(v_a_3510_);
if (v_isShared_3513_ == 0)
{
lean_ctor_set(v___x_3512_, 0, v_val_3517_);
v___x_3519_ = v___x_3512_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_val_3517_);
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
else
{
lean_object* v_a_3522_; lean_object* v___x_3524_; uint8_t v_isShared_3525_; uint8_t v_isSharedCheck_3529_; 
lean_dec(v_mvarId_3502_);
v_a_3522_ = lean_ctor_get(v___x_3509_, 0);
v_isSharedCheck_3529_ = !lean_is_exclusive(v___x_3509_);
if (v_isSharedCheck_3529_ == 0)
{
v___x_3524_ = v___x_3509_;
v_isShared_3525_ = v_isSharedCheck_3529_;
goto v_resetjp_3523_;
}
else
{
lean_inc(v_a_3522_);
lean_dec(v___x_3509_);
v___x_3524_ = lean_box(0);
v_isShared_3525_ = v_isSharedCheck_3529_;
goto v_resetjp_3523_;
}
v_resetjp_3523_:
{
lean_object* v___x_3527_; 
if (v_isShared_3525_ == 0)
{
v___x_3527_ = v___x_3524_;
goto v_reusejp_3526_;
}
else
{
lean_object* v_reuseFailAlloc_3528_; 
v_reuseFailAlloc_3528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3528_, 0, v_a_3522_);
v___x_3527_ = v_reuseFailAlloc_3528_;
goto v_reusejp_3526_;
}
v_reusejp_3526_:
{
return v___x_3527_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst___boxed(lean_object* v_mvarId_3530_, lean_object* v_hFVarId_3531_, lean_object* v_a_3532_, lean_object* v_a_3533_, lean_object* v_a_3534_, lean_object* v_a_3535_, lean_object* v_a_3536_){
_start:
{
lean_object* v_res_3537_; 
v_res_3537_ = l_Lean_Meta_trySubst(v_mvarId_3530_, v_hFVarId_3531_, v_a_3532_, v_a_3533_, v_a_3534_, v_a_3535_);
lean_dec(v_a_3535_);
lean_dec_ref(v_a_3534_);
lean_dec(v_a_3533_);
lean_dec_ref(v_a_3532_);
return v_res_3537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(lean_object* v_mvarId_3541_, lean_object* v_as_3542_, size_t v_sz_3543_, size_t v_i_3544_, lean_object* v_b_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_){
_start:
{
uint8_t v___x_3551_; 
v___x_3551_ = lean_usize_dec_lt(v_i_3544_, v_sz_3543_);
if (v___x_3551_ == 0)
{
lean_object* v___x_3552_; 
lean_dec(v_mvarId_3541_);
v___x_3552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3552_, 0, v_b_3545_);
return v___x_3552_;
}
else
{
lean_object* v_snd_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3606_; 
v_snd_3553_ = lean_ctor_get(v_b_3545_, 1);
v_isSharedCheck_3606_ = !lean_is_exclusive(v_b_3545_);
if (v_isSharedCheck_3606_ == 0)
{
lean_object* v_unused_3607_; 
v_unused_3607_ = lean_ctor_get(v_b_3545_, 0);
lean_dec(v_unused_3607_);
v___x_3555_ = v_b_3545_;
v_isShared_3556_ = v_isSharedCheck_3606_;
goto v_resetjp_3554_;
}
else
{
lean_inc(v_snd_3553_);
lean_dec(v_b_3545_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3606_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
lean_object* v___x_3557_; lean_object* v_a_3559_; lean_object* v_a_3566_; 
v___x_3557_ = lean_box(0);
v_a_3566_ = lean_array_uget(v_as_3542_, v_i_3544_);
if (lean_obj_tag(v_a_3566_) == 0)
{
v_a_3559_ = v_snd_3553_;
goto v___jp_3558_;
}
else
{
lean_object* v_val_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3605_; 
v_val_3567_ = lean_ctor_get(v_a_3566_, 0);
v_isSharedCheck_3605_ = !lean_is_exclusive(v_a_3566_);
if (v_isSharedCheck_3605_ == 0)
{
v___x_3569_ = v_a_3566_;
v_isShared_3570_ = v_isSharedCheck_3605_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_val_3567_);
lean_dec(v_a_3566_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3605_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
lean_object* v___x_3571_; lean_object* v___x_3572_; 
v___x_3571_ = l_Lean_LocalDecl_fvarId(v_val_3567_);
lean_dec(v_val_3567_);
lean_inc(v_mvarId_3541_);
v___x_3572_ = l_Lean_Meta_subst_x3f(v_mvarId_3541_, v___x_3571_, v___y_3546_, v___y_3547_, v___y_3548_, v___y_3549_);
if (lean_obj_tag(v___x_3572_) == 0)
{
lean_object* v_a_3573_; lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3596_; 
v_a_3573_ = lean_ctor_get(v___x_3572_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3575_ = v___x_3572_;
v_isShared_3576_ = v_isSharedCheck_3596_;
goto v_resetjp_3574_;
}
else
{
lean_inc(v_a_3573_);
lean_dec(v___x_3572_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3596_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
lean_object* v___x_3577_; 
v___x_3577_ = lean_box(0);
if (lean_obj_tag(v_a_3573_) == 1)
{
lean_object* v___x_3579_; 
lean_del_object(v___x_3555_);
lean_dec(v_mvarId_3541_);
lean_inc_ref(v_a_3573_);
if (v_isShared_3570_ == 0)
{
lean_ctor_set(v___x_3569_, 0, v_a_3573_);
v___x_3579_ = v___x_3569_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v_a_3573_);
v___x_3579_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3592_; 
v_isSharedCheck_3592_ = !lean_is_exclusive(v_a_3573_);
if (v_isSharedCheck_3592_ == 0)
{
lean_object* v_unused_3593_; 
v_unused_3593_ = lean_ctor_get(v_a_3573_, 0);
lean_dec(v_unused_3593_);
v___x_3581_ = v_a_3573_;
v_isShared_3582_ = v_isSharedCheck_3592_;
goto v_resetjp_3580_;
}
else
{
lean_dec(v_a_3573_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3592_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
lean_object* v___x_3583_; lean_object* v___x_3585_; 
v___x_3583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3579_);
lean_ctor_set(v___x_3583_, 1, v___x_3577_);
if (v_isShared_3582_ == 0)
{
lean_ctor_set_tag(v___x_3581_, 0);
lean_ctor_set(v___x_3581_, 0, v___x_3583_);
v___x_3585_ = v___x_3581_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v___x_3583_);
v___x_3585_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3589_; 
v___x_3586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3586_, 0, v___x_3585_);
v___x_3587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3587_, 0, v___x_3586_);
lean_ctor_set(v___x_3587_, 1, v_snd_3553_);
if (v_isShared_3576_ == 0)
{
lean_ctor_set(v___x_3575_, 0, v___x_3587_);
v___x_3589_ = v___x_3575_;
goto v_reusejp_3588_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v___x_3587_);
v___x_3589_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3588_;
}
v_reusejp_3588_:
{
return v___x_3589_;
}
}
}
}
}
else
{
lean_object* v___x_3595_; 
lean_del_object(v___x_3575_);
lean_dec(v_a_3573_);
lean_del_object(v___x_3569_);
lean_dec(v_snd_3553_);
v___x_3595_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0));
v_a_3559_ = v___x_3595_;
goto v___jp_3558_;
}
}
}
else
{
lean_object* v_a_3597_; lean_object* v___x_3599_; uint8_t v_isShared_3600_; uint8_t v_isSharedCheck_3604_; 
lean_del_object(v___x_3569_);
lean_del_object(v___x_3555_);
lean_dec(v_snd_3553_);
lean_dec(v_mvarId_3541_);
v_a_3597_ = lean_ctor_get(v___x_3572_, 0);
v_isSharedCheck_3604_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3604_ == 0)
{
v___x_3599_ = v___x_3572_;
v_isShared_3600_ = v_isSharedCheck_3604_;
goto v_resetjp_3598_;
}
else
{
lean_inc(v_a_3597_);
lean_dec(v___x_3572_);
v___x_3599_ = lean_box(0);
v_isShared_3600_ = v_isSharedCheck_3604_;
goto v_resetjp_3598_;
}
v_resetjp_3598_:
{
lean_object* v___x_3602_; 
if (v_isShared_3600_ == 0)
{
v___x_3602_ = v___x_3599_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v_a_3597_);
v___x_3602_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
return v___x_3602_;
}
}
}
}
}
v___jp_3558_:
{
lean_object* v___x_3561_; 
if (v_isShared_3556_ == 0)
{
lean_ctor_set(v___x_3555_, 1, v_a_3559_);
lean_ctor_set(v___x_3555_, 0, v___x_3557_);
v___x_3561_ = v___x_3555_;
goto v_reusejp_3560_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v___x_3557_);
lean_ctor_set(v_reuseFailAlloc_3565_, 1, v_a_3559_);
v___x_3561_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3560_;
}
v_reusejp_3560_:
{
size_t v___x_3562_; size_t v___x_3563_; 
v___x_3562_ = ((size_t)1ULL);
v___x_3563_ = lean_usize_add(v_i_3544_, v___x_3562_);
v_i_3544_ = v___x_3563_;
v_b_3545_ = v___x_3561_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_mvarId_3608_, lean_object* v_as_3609_, lean_object* v_sz_3610_, lean_object* v_i_3611_, lean_object* v_b_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_){
_start:
{
size_t v_sz_boxed_3618_; size_t v_i_boxed_3619_; lean_object* v_res_3620_; 
v_sz_boxed_3618_ = lean_unbox_usize(v_sz_3610_);
lean_dec(v_sz_3610_);
v_i_boxed_3619_ = lean_unbox_usize(v_i_3611_);
lean_dec(v_i_3611_);
v_res_3620_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(v_mvarId_3608_, v_as_3609_, v_sz_boxed_3618_, v_i_boxed_3619_, v_b_3612_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_);
lean_dec(v___y_3616_);
lean_dec_ref(v___y_3615_);
lean_dec(v___y_3614_);
lean_dec_ref(v___y_3613_);
lean_dec_ref(v_as_3609_);
return v_res_3620_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(lean_object* v_mvarId_3621_, lean_object* v_as_3622_, size_t v_sz_3623_, size_t v_i_3624_, lean_object* v_b_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_){
_start:
{
uint8_t v___x_3631_; 
v___x_3631_ = lean_usize_dec_lt(v_i_3624_, v_sz_3623_);
if (v___x_3631_ == 0)
{
lean_object* v___x_3632_; 
lean_dec(v_mvarId_3621_);
v___x_3632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3632_, 0, v_b_3625_);
return v___x_3632_;
}
else
{
lean_object* v_snd_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3686_; 
v_snd_3633_ = lean_ctor_get(v_b_3625_, 1);
v_isSharedCheck_3686_ = !lean_is_exclusive(v_b_3625_);
if (v_isSharedCheck_3686_ == 0)
{
lean_object* v_unused_3687_; 
v_unused_3687_ = lean_ctor_get(v_b_3625_, 0);
lean_dec(v_unused_3687_);
v___x_3635_ = v_b_3625_;
v_isShared_3636_ = v_isSharedCheck_3686_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_snd_3633_);
lean_dec(v_b_3625_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3686_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3637_; lean_object* v_a_3639_; lean_object* v_a_3646_; 
v___x_3637_ = lean_box(0);
v_a_3646_ = lean_array_uget(v_as_3622_, v_i_3624_);
if (lean_obj_tag(v_a_3646_) == 0)
{
v_a_3639_ = v_snd_3633_;
goto v___jp_3638_;
}
else
{
lean_object* v_val_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3685_; 
v_val_3647_ = lean_ctor_get(v_a_3646_, 0);
v_isSharedCheck_3685_ = !lean_is_exclusive(v_a_3646_);
if (v_isSharedCheck_3685_ == 0)
{
v___x_3649_ = v_a_3646_;
v_isShared_3650_ = v_isSharedCheck_3685_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_val_3647_);
lean_dec(v_a_3646_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3685_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
lean_object* v___x_3651_; lean_object* v___x_3652_; 
v___x_3651_ = l_Lean_LocalDecl_fvarId(v_val_3647_);
lean_dec(v_val_3647_);
lean_inc(v_mvarId_3621_);
v___x_3652_ = l_Lean_Meta_subst_x3f(v_mvarId_3621_, v___x_3651_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_);
if (lean_obj_tag(v___x_3652_) == 0)
{
lean_object* v_a_3653_; lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3676_; 
v_a_3653_ = lean_ctor_get(v___x_3652_, 0);
v_isSharedCheck_3676_ = !lean_is_exclusive(v___x_3652_);
if (v_isSharedCheck_3676_ == 0)
{
v___x_3655_ = v___x_3652_;
v_isShared_3656_ = v_isSharedCheck_3676_;
goto v_resetjp_3654_;
}
else
{
lean_inc(v_a_3653_);
lean_dec(v___x_3652_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3676_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
lean_object* v___x_3657_; 
v___x_3657_ = lean_box(0);
if (lean_obj_tag(v_a_3653_) == 1)
{
lean_object* v___x_3659_; 
lean_del_object(v___x_3635_);
lean_dec(v_mvarId_3621_);
lean_inc_ref(v_a_3653_);
if (v_isShared_3650_ == 0)
{
lean_ctor_set(v___x_3649_, 0, v_a_3653_);
v___x_3659_ = v___x_3649_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v_a_3653_);
v___x_3659_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3672_; 
v_isSharedCheck_3672_ = !lean_is_exclusive(v_a_3653_);
if (v_isSharedCheck_3672_ == 0)
{
lean_object* v_unused_3673_; 
v_unused_3673_ = lean_ctor_get(v_a_3653_, 0);
lean_dec(v_unused_3673_);
v___x_3661_ = v_a_3653_;
v_isShared_3662_ = v_isSharedCheck_3672_;
goto v_resetjp_3660_;
}
else
{
lean_dec(v_a_3653_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3672_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v___x_3663_; lean_object* v___x_3665_; 
v___x_3663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3663_, 0, v___x_3659_);
lean_ctor_set(v___x_3663_, 1, v___x_3657_);
if (v_isShared_3662_ == 0)
{
lean_ctor_set_tag(v___x_3661_, 0);
lean_ctor_set(v___x_3661_, 0, v___x_3663_);
v___x_3665_ = v___x_3661_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v___x_3663_);
v___x_3665_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3669_; 
v___x_3666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3666_, 0, v___x_3665_);
v___x_3667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3667_, 0, v___x_3666_);
lean_ctor_set(v___x_3667_, 1, v_snd_3633_);
if (v_isShared_3656_ == 0)
{
lean_ctor_set(v___x_3655_, 0, v___x_3667_);
v___x_3669_ = v___x_3655_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v___x_3667_);
v___x_3669_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
return v___x_3669_;
}
}
}
}
}
else
{
lean_object* v___x_3675_; 
lean_del_object(v___x_3655_);
lean_dec(v_a_3653_);
lean_del_object(v___x_3649_);
lean_dec(v_snd_3633_);
v___x_3675_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0));
v_a_3639_ = v___x_3675_;
goto v___jp_3638_;
}
}
}
else
{
lean_object* v_a_3677_; lean_object* v___x_3679_; uint8_t v_isShared_3680_; uint8_t v_isSharedCheck_3684_; 
lean_del_object(v___x_3649_);
lean_del_object(v___x_3635_);
lean_dec(v_snd_3633_);
lean_dec(v_mvarId_3621_);
v_a_3677_ = lean_ctor_get(v___x_3652_, 0);
v_isSharedCheck_3684_ = !lean_is_exclusive(v___x_3652_);
if (v_isSharedCheck_3684_ == 0)
{
v___x_3679_ = v___x_3652_;
v_isShared_3680_ = v_isSharedCheck_3684_;
goto v_resetjp_3678_;
}
else
{
lean_inc(v_a_3677_);
lean_dec(v___x_3652_);
v___x_3679_ = lean_box(0);
v_isShared_3680_ = v_isSharedCheck_3684_;
goto v_resetjp_3678_;
}
v_resetjp_3678_:
{
lean_object* v___x_3682_; 
if (v_isShared_3680_ == 0)
{
v___x_3682_ = v___x_3679_;
goto v_reusejp_3681_;
}
else
{
lean_object* v_reuseFailAlloc_3683_; 
v_reuseFailAlloc_3683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3683_, 0, v_a_3677_);
v___x_3682_ = v_reuseFailAlloc_3683_;
goto v_reusejp_3681_;
}
v_reusejp_3681_:
{
return v___x_3682_;
}
}
}
}
}
v___jp_3638_:
{
lean_object* v___x_3641_; 
if (v_isShared_3636_ == 0)
{
lean_ctor_set(v___x_3635_, 1, v_a_3639_);
lean_ctor_set(v___x_3635_, 0, v___x_3637_);
v___x_3641_ = v___x_3635_;
goto v_reusejp_3640_;
}
else
{
lean_object* v_reuseFailAlloc_3645_; 
v_reuseFailAlloc_3645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3645_, 0, v___x_3637_);
lean_ctor_set(v_reuseFailAlloc_3645_, 1, v_a_3639_);
v___x_3641_ = v_reuseFailAlloc_3645_;
goto v_reusejp_3640_;
}
v_reusejp_3640_:
{
size_t v___x_3642_; size_t v___x_3643_; lean_object* v___x_3644_; 
v___x_3642_ = ((size_t)1ULL);
v___x_3643_ = lean_usize_add(v_i_3624_, v___x_3642_);
v___x_3644_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(v_mvarId_3621_, v_as_3622_, v_sz_3623_, v___x_3643_, v___x_3641_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_);
return v___x_3644_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_mvarId_3688_, lean_object* v_as_3689_, lean_object* v_sz_3690_, lean_object* v_i_3691_, lean_object* v_b_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_){
_start:
{
size_t v_sz_boxed_3698_; size_t v_i_boxed_3699_; lean_object* v_res_3700_; 
v_sz_boxed_3698_ = lean_unbox_usize(v_sz_3690_);
lean_dec(v_sz_3690_);
v_i_boxed_3699_ = lean_unbox_usize(v_i_3691_);
lean_dec(v_i_3691_);
v_res_3700_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(v_mvarId_3688_, v_as_3689_, v_sz_boxed_3698_, v_i_boxed_3699_, v_b_3692_, v___y_3693_, v___y_3694_, v___y_3695_, v___y_3696_);
lean_dec(v___y_3696_);
lean_dec_ref(v___y_3695_);
lean_dec(v___y_3694_);
lean_dec_ref(v___y_3693_);
lean_dec_ref(v_as_3689_);
return v_res_3700_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(lean_object* v_init_3701_, lean_object* v_mvarId_3702_, lean_object* v_n_3703_, lean_object* v_b_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_){
_start:
{
if (lean_obj_tag(v_n_3703_) == 0)
{
lean_object* v_cs_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; size_t v_sz_3713_; size_t v___x_3714_; lean_object* v___x_3715_; 
v_cs_3710_ = lean_ctor_get(v_n_3703_, 0);
v___x_3711_ = lean_box(0);
v___x_3712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3712_, 0, v___x_3711_);
lean_ctor_set(v___x_3712_, 1, v_b_3704_);
v_sz_3713_ = lean_array_size(v_cs_3710_);
v___x_3714_ = ((size_t)0ULL);
v___x_3715_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(v_init_3701_, v_mvarId_3702_, v_cs_3710_, v_sz_3713_, v___x_3714_, v___x_3712_, v___y_3705_, v___y_3706_, v___y_3707_, v___y_3708_);
if (lean_obj_tag(v___x_3715_) == 0)
{
lean_object* v_a_3716_; lean_object* v___x_3718_; uint8_t v_isShared_3719_; uint8_t v_isSharedCheck_3730_; 
v_a_3716_ = lean_ctor_get(v___x_3715_, 0);
v_isSharedCheck_3730_ = !lean_is_exclusive(v___x_3715_);
if (v_isSharedCheck_3730_ == 0)
{
v___x_3718_ = v___x_3715_;
v_isShared_3719_ = v_isSharedCheck_3730_;
goto v_resetjp_3717_;
}
else
{
lean_inc(v_a_3716_);
lean_dec(v___x_3715_);
v___x_3718_ = lean_box(0);
v_isShared_3719_ = v_isSharedCheck_3730_;
goto v_resetjp_3717_;
}
v_resetjp_3717_:
{
lean_object* v_fst_3720_; 
v_fst_3720_ = lean_ctor_get(v_a_3716_, 0);
if (lean_obj_tag(v_fst_3720_) == 0)
{
lean_object* v_snd_3721_; lean_object* v___x_3722_; lean_object* v___x_3724_; 
v_snd_3721_ = lean_ctor_get(v_a_3716_, 1);
lean_inc(v_snd_3721_);
lean_dec(v_a_3716_);
v___x_3722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3722_, 0, v_snd_3721_);
if (v_isShared_3719_ == 0)
{
lean_ctor_set(v___x_3718_, 0, v___x_3722_);
v___x_3724_ = v___x_3718_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v___x_3722_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
}
}
else
{
lean_object* v_val_3726_; lean_object* v___x_3728_; 
lean_inc_ref(v_fst_3720_);
lean_dec(v_a_3716_);
v_val_3726_ = lean_ctor_get(v_fst_3720_, 0);
lean_inc(v_val_3726_);
lean_dec_ref(v_fst_3720_);
if (v_isShared_3719_ == 0)
{
lean_ctor_set(v___x_3718_, 0, v_val_3726_);
v___x_3728_ = v___x_3718_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v_val_3726_);
v___x_3728_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
return v___x_3728_;
}
}
}
}
else
{
lean_object* v_a_3731_; lean_object* v___x_3733_; uint8_t v_isShared_3734_; uint8_t v_isSharedCheck_3738_; 
v_a_3731_ = lean_ctor_get(v___x_3715_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3715_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3733_ = v___x_3715_;
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
else
{
lean_inc(v_a_3731_);
lean_dec(v___x_3715_);
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
else
{
lean_object* v_vs_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; size_t v_sz_3742_; size_t v___x_3743_; lean_object* v___x_3744_; 
v_vs_3739_ = lean_ctor_get(v_n_3703_, 0);
v___x_3740_ = lean_box(0);
v___x_3741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3741_, 0, v___x_3740_);
lean_ctor_set(v___x_3741_, 1, v_b_3704_);
v_sz_3742_ = lean_array_size(v_vs_3739_);
v___x_3743_ = ((size_t)0ULL);
v___x_3744_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(v_mvarId_3702_, v_vs_3739_, v_sz_3742_, v___x_3743_, v___x_3741_, v___y_3705_, v___y_3706_, v___y_3707_, v___y_3708_);
if (lean_obj_tag(v___x_3744_) == 0)
{
lean_object* v_a_3745_; lean_object* v___x_3747_; uint8_t v_isShared_3748_; uint8_t v_isSharedCheck_3759_; 
v_a_3745_ = lean_ctor_get(v___x_3744_, 0);
v_isSharedCheck_3759_ = !lean_is_exclusive(v___x_3744_);
if (v_isSharedCheck_3759_ == 0)
{
v___x_3747_ = v___x_3744_;
v_isShared_3748_ = v_isSharedCheck_3759_;
goto v_resetjp_3746_;
}
else
{
lean_inc(v_a_3745_);
lean_dec(v___x_3744_);
v___x_3747_ = lean_box(0);
v_isShared_3748_ = v_isSharedCheck_3759_;
goto v_resetjp_3746_;
}
v_resetjp_3746_:
{
lean_object* v_fst_3749_; 
v_fst_3749_ = lean_ctor_get(v_a_3745_, 0);
if (lean_obj_tag(v_fst_3749_) == 0)
{
lean_object* v_snd_3750_; lean_object* v___x_3751_; lean_object* v___x_3753_; 
v_snd_3750_ = lean_ctor_get(v_a_3745_, 1);
lean_inc(v_snd_3750_);
lean_dec(v_a_3745_);
v___x_3751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3751_, 0, v_snd_3750_);
if (v_isShared_3748_ == 0)
{
lean_ctor_set(v___x_3747_, 0, v___x_3751_);
v___x_3753_ = v___x_3747_;
goto v_reusejp_3752_;
}
else
{
lean_object* v_reuseFailAlloc_3754_; 
v_reuseFailAlloc_3754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3754_, 0, v___x_3751_);
v___x_3753_ = v_reuseFailAlloc_3754_;
goto v_reusejp_3752_;
}
v_reusejp_3752_:
{
return v___x_3753_;
}
}
else
{
lean_object* v_val_3755_; lean_object* v___x_3757_; 
lean_inc_ref(v_fst_3749_);
lean_dec(v_a_3745_);
v_val_3755_ = lean_ctor_get(v_fst_3749_, 0);
lean_inc(v_val_3755_);
lean_dec_ref(v_fst_3749_);
if (v_isShared_3748_ == 0)
{
lean_ctor_set(v___x_3747_, 0, v_val_3755_);
v___x_3757_ = v___x_3747_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v_val_3755_);
v___x_3757_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
return v___x_3757_;
}
}
}
}
else
{
lean_object* v_a_3760_; lean_object* v___x_3762_; uint8_t v_isShared_3763_; uint8_t v_isSharedCheck_3767_; 
v_a_3760_ = lean_ctor_get(v___x_3744_, 0);
v_isSharedCheck_3767_ = !lean_is_exclusive(v___x_3744_);
if (v_isSharedCheck_3767_ == 0)
{
v___x_3762_ = v___x_3744_;
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
else
{
lean_inc(v_a_3760_);
lean_dec(v___x_3744_);
v___x_3762_ = lean_box(0);
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
v_resetjp_3761_:
{
lean_object* v___x_3765_; 
if (v_isShared_3763_ == 0)
{
v___x_3765_ = v___x_3762_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v_a_3760_);
v___x_3765_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
return v___x_3765_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(lean_object* v_init_3768_, lean_object* v_mvarId_3769_, lean_object* v_as_3770_, size_t v_sz_3771_, size_t v_i_3772_, lean_object* v_b_3773_, lean_object* v___y_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_){
_start:
{
uint8_t v___x_3779_; 
v___x_3779_ = lean_usize_dec_lt(v_i_3772_, v_sz_3771_);
if (v___x_3779_ == 0)
{
lean_object* v___x_3780_; 
lean_dec(v_mvarId_3769_);
v___x_3780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3780_, 0, v_b_3773_);
return v___x_3780_;
}
else
{
lean_object* v_snd_3781_; lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3815_; 
v_snd_3781_ = lean_ctor_get(v_b_3773_, 1);
v_isSharedCheck_3815_ = !lean_is_exclusive(v_b_3773_);
if (v_isSharedCheck_3815_ == 0)
{
lean_object* v_unused_3816_; 
v_unused_3816_ = lean_ctor_get(v_b_3773_, 0);
lean_dec(v_unused_3816_);
v___x_3783_ = v_b_3773_;
v_isShared_3784_ = v_isSharedCheck_3815_;
goto v_resetjp_3782_;
}
else
{
lean_inc(v_snd_3781_);
lean_dec(v_b_3773_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3815_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
lean_object* v_a_3785_; lean_object* v___x_3786_; 
v_a_3785_ = lean_array_uget_borrowed(v_as_3770_, v_i_3772_);
lean_inc(v_snd_3781_);
lean_inc(v_mvarId_3769_);
v___x_3786_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(v_init_3768_, v_mvarId_3769_, v_a_3785_, v_snd_3781_, v___y_3774_, v___y_3775_, v___y_3776_, v___y_3777_);
if (lean_obj_tag(v___x_3786_) == 0)
{
lean_object* v_a_3787_; lean_object* v___x_3789_; uint8_t v_isShared_3790_; uint8_t v_isSharedCheck_3806_; 
v_a_3787_ = lean_ctor_get(v___x_3786_, 0);
v_isSharedCheck_3806_ = !lean_is_exclusive(v___x_3786_);
if (v_isSharedCheck_3806_ == 0)
{
v___x_3789_ = v___x_3786_;
v_isShared_3790_ = v_isSharedCheck_3806_;
goto v_resetjp_3788_;
}
else
{
lean_inc(v_a_3787_);
lean_dec(v___x_3786_);
v___x_3789_ = lean_box(0);
v_isShared_3790_ = v_isSharedCheck_3806_;
goto v_resetjp_3788_;
}
v_resetjp_3788_:
{
if (lean_obj_tag(v_a_3787_) == 0)
{
lean_object* v___x_3791_; lean_object* v___x_3793_; 
lean_dec(v_mvarId_3769_);
v___x_3791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3791_, 0, v_a_3787_);
if (v_isShared_3784_ == 0)
{
lean_ctor_set(v___x_3783_, 0, v___x_3791_);
v___x_3793_ = v___x_3783_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v___x_3791_);
lean_ctor_set(v_reuseFailAlloc_3797_, 1, v_snd_3781_);
v___x_3793_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
lean_object* v___x_3795_; 
if (v_isShared_3790_ == 0)
{
lean_ctor_set(v___x_3789_, 0, v___x_3793_);
v___x_3795_ = v___x_3789_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v___x_3793_);
v___x_3795_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
return v___x_3795_;
}
}
}
else
{
lean_object* v_a_3798_; lean_object* v___x_3799_; lean_object* v___x_3801_; 
lean_del_object(v___x_3789_);
lean_dec(v_snd_3781_);
v_a_3798_ = lean_ctor_get(v_a_3787_, 0);
lean_inc(v_a_3798_);
lean_dec_ref(v_a_3787_);
v___x_3799_ = lean_box(0);
if (v_isShared_3784_ == 0)
{
lean_ctor_set(v___x_3783_, 1, v_a_3798_);
lean_ctor_set(v___x_3783_, 0, v___x_3799_);
v___x_3801_ = v___x_3783_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v___x_3799_);
lean_ctor_set(v_reuseFailAlloc_3805_, 1, v_a_3798_);
v___x_3801_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
size_t v___x_3802_; size_t v___x_3803_; 
v___x_3802_ = ((size_t)1ULL);
v___x_3803_ = lean_usize_add(v_i_3772_, v___x_3802_);
v_i_3772_ = v___x_3803_;
v_b_3773_ = v___x_3801_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3807_; lean_object* v___x_3809_; uint8_t v_isShared_3810_; uint8_t v_isSharedCheck_3814_; 
lean_del_object(v___x_3783_);
lean_dec(v_snd_3781_);
lean_dec(v_mvarId_3769_);
v_a_3807_ = lean_ctor_get(v___x_3786_, 0);
v_isSharedCheck_3814_ = !lean_is_exclusive(v___x_3786_);
if (v_isSharedCheck_3814_ == 0)
{
v___x_3809_ = v___x_3786_;
v_isShared_3810_ = v_isSharedCheck_3814_;
goto v_resetjp_3808_;
}
else
{
lean_inc(v_a_3807_);
lean_dec(v___x_3786_);
v___x_3809_ = lean_box(0);
v_isShared_3810_ = v_isSharedCheck_3814_;
goto v_resetjp_3808_;
}
v_resetjp_3808_:
{
lean_object* v___x_3812_; 
if (v_isShared_3810_ == 0)
{
v___x_3812_ = v___x_3809_;
goto v_reusejp_3811_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v_a_3807_);
v___x_3812_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3811_;
}
v_reusejp_3811_:
{
return v___x_3812_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_init_3817_, lean_object* v_mvarId_3818_, lean_object* v_as_3819_, lean_object* v_sz_3820_, lean_object* v_i_3821_, lean_object* v_b_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_){
_start:
{
size_t v_sz_boxed_3828_; size_t v_i_boxed_3829_; lean_object* v_res_3830_; 
v_sz_boxed_3828_ = lean_unbox_usize(v_sz_3820_);
lean_dec(v_sz_3820_);
v_i_boxed_3829_ = lean_unbox_usize(v_i_3821_);
lean_dec(v_i_3821_);
v_res_3830_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(v_init_3817_, v_mvarId_3818_, v_as_3819_, v_sz_boxed_3828_, v_i_boxed_3829_, v_b_3822_, v___y_3823_, v___y_3824_, v___y_3825_, v___y_3826_);
lean_dec(v___y_3826_);
lean_dec_ref(v___y_3825_);
lean_dec(v___y_3824_);
lean_dec_ref(v___y_3823_);
lean_dec_ref(v_as_3819_);
lean_dec_ref(v_init_3817_);
return v_res_3830_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0___boxed(lean_object* v_init_3831_, lean_object* v_mvarId_3832_, lean_object* v_n_3833_, lean_object* v_b_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_){
_start:
{
lean_object* v_res_3840_; 
v_res_3840_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(v_init_3831_, v_mvarId_3832_, v_n_3833_, v_b_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_);
lean_dec(v___y_3838_);
lean_dec_ref(v___y_3837_);
lean_dec(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec_ref(v_n_3833_);
lean_dec_ref(v_init_3831_);
return v_res_3840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(lean_object* v_mvarId_3844_, lean_object* v_as_3845_, size_t v_sz_3846_, size_t v_i_3847_, lean_object* v_b_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_){
_start:
{
uint8_t v___x_3854_; 
v___x_3854_ = lean_usize_dec_lt(v_i_3847_, v_sz_3846_);
if (v___x_3854_ == 0)
{
lean_object* v___x_3855_; 
lean_dec(v_mvarId_3844_);
v___x_3855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3855_, 0, v_b_3848_);
return v___x_3855_;
}
else
{
lean_object* v_snd_3856_; lean_object* v___x_3858_; uint8_t v_isShared_3859_; uint8_t v_isSharedCheck_3908_; 
v_snd_3856_ = lean_ctor_get(v_b_3848_, 1);
v_isSharedCheck_3908_ = !lean_is_exclusive(v_b_3848_);
if (v_isSharedCheck_3908_ == 0)
{
lean_object* v_unused_3909_; 
v_unused_3909_ = lean_ctor_get(v_b_3848_, 0);
lean_dec(v_unused_3909_);
v___x_3858_ = v_b_3848_;
v_isShared_3859_ = v_isSharedCheck_3908_;
goto v_resetjp_3857_;
}
else
{
lean_inc(v_snd_3856_);
lean_dec(v_b_3848_);
v___x_3858_ = lean_box(0);
v_isShared_3859_ = v_isSharedCheck_3908_;
goto v_resetjp_3857_;
}
v_resetjp_3857_:
{
lean_object* v___x_3860_; lean_object* v_a_3862_; lean_object* v_a_3869_; 
v___x_3860_ = lean_box(0);
v_a_3869_ = lean_array_uget(v_as_3845_, v_i_3847_);
if (lean_obj_tag(v_a_3869_) == 0)
{
v_a_3862_ = v_snd_3856_;
goto v___jp_3861_;
}
else
{
lean_object* v_val_3870_; lean_object* v___x_3872_; uint8_t v_isShared_3873_; uint8_t v_isSharedCheck_3907_; 
v_val_3870_ = lean_ctor_get(v_a_3869_, 0);
v_isSharedCheck_3907_ = !lean_is_exclusive(v_a_3869_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3872_ = v_a_3869_;
v_isShared_3873_ = v_isSharedCheck_3907_;
goto v_resetjp_3871_;
}
else
{
lean_inc(v_val_3870_);
lean_dec(v_a_3869_);
v___x_3872_ = lean_box(0);
v_isShared_3873_ = v_isSharedCheck_3907_;
goto v_resetjp_3871_;
}
v_resetjp_3871_:
{
lean_object* v___x_3874_; lean_object* v___x_3875_; 
v___x_3874_ = l_Lean_LocalDecl_fvarId(v_val_3870_);
lean_dec(v_val_3870_);
lean_inc(v_mvarId_3844_);
v___x_3875_ = l_Lean_Meta_subst_x3f(v_mvarId_3844_, v___x_3874_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_);
if (lean_obj_tag(v___x_3875_) == 0)
{
lean_object* v_a_3876_; lean_object* v___x_3878_; uint8_t v_isShared_3879_; uint8_t v_isSharedCheck_3898_; 
v_a_3876_ = lean_ctor_get(v___x_3875_, 0);
v_isSharedCheck_3898_ = !lean_is_exclusive(v___x_3875_);
if (v_isSharedCheck_3898_ == 0)
{
v___x_3878_ = v___x_3875_;
v_isShared_3879_ = v_isSharedCheck_3898_;
goto v_resetjp_3877_;
}
else
{
lean_inc(v_a_3876_);
lean_dec(v___x_3875_);
v___x_3878_ = lean_box(0);
v_isShared_3879_ = v_isSharedCheck_3898_;
goto v_resetjp_3877_;
}
v_resetjp_3877_:
{
lean_object* v___x_3880_; 
v___x_3880_ = lean_box(0);
if (lean_obj_tag(v_a_3876_) == 1)
{
lean_object* v___x_3882_; 
lean_del_object(v___x_3858_);
lean_dec(v_mvarId_3844_);
lean_inc_ref(v_a_3876_);
if (v_isShared_3873_ == 0)
{
lean_ctor_set(v___x_3872_, 0, v_a_3876_);
v___x_3882_ = v___x_3872_;
goto v_reusejp_3881_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v_a_3876_);
v___x_3882_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3881_;
}
v_reusejp_3881_:
{
lean_object* v___x_3884_; uint8_t v_isShared_3885_; uint8_t v_isSharedCheck_3894_; 
v_isSharedCheck_3894_ = !lean_is_exclusive(v_a_3876_);
if (v_isSharedCheck_3894_ == 0)
{
lean_object* v_unused_3895_; 
v_unused_3895_ = lean_ctor_get(v_a_3876_, 0);
lean_dec(v_unused_3895_);
v___x_3884_ = v_a_3876_;
v_isShared_3885_ = v_isSharedCheck_3894_;
goto v_resetjp_3883_;
}
else
{
lean_dec(v_a_3876_);
v___x_3884_ = lean_box(0);
v_isShared_3885_ = v_isSharedCheck_3894_;
goto v_resetjp_3883_;
}
v_resetjp_3883_:
{
lean_object* v___x_3886_; lean_object* v___x_3888_; 
v___x_3886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3886_, 0, v___x_3882_);
lean_ctor_set(v___x_3886_, 1, v___x_3880_);
if (v_isShared_3885_ == 0)
{
lean_ctor_set(v___x_3884_, 0, v___x_3886_);
v___x_3888_ = v___x_3884_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3893_; 
v_reuseFailAlloc_3893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3893_, 0, v___x_3886_);
v___x_3888_ = v_reuseFailAlloc_3893_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
lean_object* v___x_3889_; lean_object* v___x_3891_; 
v___x_3889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3889_, 0, v___x_3888_);
lean_ctor_set(v___x_3889_, 1, v_snd_3856_);
if (v_isShared_3879_ == 0)
{
lean_ctor_set(v___x_3878_, 0, v___x_3889_);
v___x_3891_ = v___x_3878_;
goto v_reusejp_3890_;
}
else
{
lean_object* v_reuseFailAlloc_3892_; 
v_reuseFailAlloc_3892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3892_, 0, v___x_3889_);
v___x_3891_ = v_reuseFailAlloc_3892_;
goto v_reusejp_3890_;
}
v_reusejp_3890_:
{
return v___x_3891_;
}
}
}
}
}
else
{
lean_object* v___x_3897_; 
lean_del_object(v___x_3878_);
lean_dec(v_a_3876_);
lean_del_object(v___x_3872_);
lean_dec(v_snd_3856_);
v___x_3897_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0));
v_a_3862_ = v___x_3897_;
goto v___jp_3861_;
}
}
}
else
{
lean_object* v_a_3899_; lean_object* v___x_3901_; uint8_t v_isShared_3902_; uint8_t v_isSharedCheck_3906_; 
lean_del_object(v___x_3872_);
lean_del_object(v___x_3858_);
lean_dec(v_snd_3856_);
lean_dec(v_mvarId_3844_);
v_a_3899_ = lean_ctor_get(v___x_3875_, 0);
v_isSharedCheck_3906_ = !lean_is_exclusive(v___x_3875_);
if (v_isSharedCheck_3906_ == 0)
{
v___x_3901_ = v___x_3875_;
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
else
{
lean_inc(v_a_3899_);
lean_dec(v___x_3875_);
v___x_3901_ = lean_box(0);
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
v_resetjp_3900_:
{
lean_object* v___x_3904_; 
if (v_isShared_3902_ == 0)
{
v___x_3904_ = v___x_3901_;
goto v_reusejp_3903_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v_a_3899_);
v___x_3904_ = v_reuseFailAlloc_3905_;
goto v_reusejp_3903_;
}
v_reusejp_3903_:
{
return v___x_3904_;
}
}
}
}
}
v___jp_3861_:
{
lean_object* v___x_3864_; 
if (v_isShared_3859_ == 0)
{
lean_ctor_set(v___x_3858_, 1, v_a_3862_);
lean_ctor_set(v___x_3858_, 0, v___x_3860_);
v___x_3864_ = v___x_3858_;
goto v_reusejp_3863_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v___x_3860_);
lean_ctor_set(v_reuseFailAlloc_3868_, 1, v_a_3862_);
v___x_3864_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3863_;
}
v_reusejp_3863_:
{
size_t v___x_3865_; size_t v___x_3866_; 
v___x_3865_ = ((size_t)1ULL);
v___x_3866_ = lean_usize_add(v_i_3847_, v___x_3865_);
v_i_3847_ = v___x_3866_;
v_b_3848_ = v___x_3864_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___boxed(lean_object* v_mvarId_3910_, lean_object* v_as_3911_, lean_object* v_sz_3912_, lean_object* v_i_3913_, lean_object* v_b_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_){
_start:
{
size_t v_sz_boxed_3920_; size_t v_i_boxed_3921_; lean_object* v_res_3922_; 
v_sz_boxed_3920_ = lean_unbox_usize(v_sz_3912_);
lean_dec(v_sz_3912_);
v_i_boxed_3921_ = lean_unbox_usize(v_i_3913_);
lean_dec(v_i_3913_);
v_res_3922_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(v_mvarId_3910_, v_as_3911_, v_sz_boxed_3920_, v_i_boxed_3921_, v_b_3914_, v___y_3915_, v___y_3916_, v___y_3917_, v___y_3918_);
lean_dec(v___y_3918_);
lean_dec_ref(v___y_3917_);
lean_dec(v___y_3916_);
lean_dec_ref(v___y_3915_);
lean_dec_ref(v_as_3911_);
return v_res_3922_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(lean_object* v_mvarId_3923_, lean_object* v_as_3924_, size_t v_sz_3925_, size_t v_i_3926_, lean_object* v_b_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_){
_start:
{
uint8_t v___x_3933_; 
v___x_3933_ = lean_usize_dec_lt(v_i_3926_, v_sz_3925_);
if (v___x_3933_ == 0)
{
lean_object* v___x_3934_; 
lean_dec(v_mvarId_3923_);
v___x_3934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3934_, 0, v_b_3927_);
return v___x_3934_;
}
else
{
lean_object* v_snd_3935_; lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_3987_; 
v_snd_3935_ = lean_ctor_get(v_b_3927_, 1);
v_isSharedCheck_3987_ = !lean_is_exclusive(v_b_3927_);
if (v_isSharedCheck_3987_ == 0)
{
lean_object* v_unused_3988_; 
v_unused_3988_ = lean_ctor_get(v_b_3927_, 0);
lean_dec(v_unused_3988_);
v___x_3937_ = v_b_3927_;
v_isShared_3938_ = v_isSharedCheck_3987_;
goto v_resetjp_3936_;
}
else
{
lean_inc(v_snd_3935_);
lean_dec(v_b_3927_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_3987_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
lean_object* v___x_3939_; lean_object* v_a_3941_; lean_object* v_a_3948_; 
v___x_3939_ = lean_box(0);
v_a_3948_ = lean_array_uget(v_as_3924_, v_i_3926_);
if (lean_obj_tag(v_a_3948_) == 0)
{
v_a_3941_ = v_snd_3935_;
goto v___jp_3940_;
}
else
{
lean_object* v_val_3949_; lean_object* v___x_3951_; uint8_t v_isShared_3952_; uint8_t v_isSharedCheck_3986_; 
v_val_3949_ = lean_ctor_get(v_a_3948_, 0);
v_isSharedCheck_3986_ = !lean_is_exclusive(v_a_3948_);
if (v_isSharedCheck_3986_ == 0)
{
v___x_3951_ = v_a_3948_;
v_isShared_3952_ = v_isSharedCheck_3986_;
goto v_resetjp_3950_;
}
else
{
lean_inc(v_val_3949_);
lean_dec(v_a_3948_);
v___x_3951_ = lean_box(0);
v_isShared_3952_ = v_isSharedCheck_3986_;
goto v_resetjp_3950_;
}
v_resetjp_3950_:
{
lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___x_3953_ = l_Lean_LocalDecl_fvarId(v_val_3949_);
lean_dec(v_val_3949_);
lean_inc(v_mvarId_3923_);
v___x_3954_ = l_Lean_Meta_subst_x3f(v_mvarId_3923_, v___x_3953_, v___y_3928_, v___y_3929_, v___y_3930_, v___y_3931_);
if (lean_obj_tag(v___x_3954_) == 0)
{
lean_object* v_a_3955_; lean_object* v___x_3957_; uint8_t v_isShared_3958_; uint8_t v_isSharedCheck_3977_; 
v_a_3955_ = lean_ctor_get(v___x_3954_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3954_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3957_ = v___x_3954_;
v_isShared_3958_ = v_isSharedCheck_3977_;
goto v_resetjp_3956_;
}
else
{
lean_inc(v_a_3955_);
lean_dec(v___x_3954_);
v___x_3957_ = lean_box(0);
v_isShared_3958_ = v_isSharedCheck_3977_;
goto v_resetjp_3956_;
}
v_resetjp_3956_:
{
lean_object* v___x_3959_; 
v___x_3959_ = lean_box(0);
if (lean_obj_tag(v_a_3955_) == 1)
{
lean_object* v___x_3961_; 
lean_del_object(v___x_3937_);
lean_dec(v_mvarId_3923_);
lean_inc_ref(v_a_3955_);
if (v_isShared_3952_ == 0)
{
lean_ctor_set(v___x_3951_, 0, v_a_3955_);
v___x_3961_ = v___x_3951_;
goto v_reusejp_3960_;
}
else
{
lean_object* v_reuseFailAlloc_3975_; 
v_reuseFailAlloc_3975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3975_, 0, v_a_3955_);
v___x_3961_ = v_reuseFailAlloc_3975_;
goto v_reusejp_3960_;
}
v_reusejp_3960_:
{
lean_object* v___x_3963_; uint8_t v_isShared_3964_; uint8_t v_isSharedCheck_3973_; 
v_isSharedCheck_3973_ = !lean_is_exclusive(v_a_3955_);
if (v_isSharedCheck_3973_ == 0)
{
lean_object* v_unused_3974_; 
v_unused_3974_ = lean_ctor_get(v_a_3955_, 0);
lean_dec(v_unused_3974_);
v___x_3963_ = v_a_3955_;
v_isShared_3964_ = v_isSharedCheck_3973_;
goto v_resetjp_3962_;
}
else
{
lean_dec(v_a_3955_);
v___x_3963_ = lean_box(0);
v_isShared_3964_ = v_isSharedCheck_3973_;
goto v_resetjp_3962_;
}
v_resetjp_3962_:
{
lean_object* v___x_3965_; lean_object* v___x_3967_; 
v___x_3965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3961_);
lean_ctor_set(v___x_3965_, 1, v___x_3959_);
if (v_isShared_3964_ == 0)
{
lean_ctor_set(v___x_3963_, 0, v___x_3965_);
v___x_3967_ = v___x_3963_;
goto v_reusejp_3966_;
}
else
{
lean_object* v_reuseFailAlloc_3972_; 
v_reuseFailAlloc_3972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3972_, 0, v___x_3965_);
v___x_3967_ = v_reuseFailAlloc_3972_;
goto v_reusejp_3966_;
}
v_reusejp_3966_:
{
lean_object* v___x_3968_; lean_object* v___x_3970_; 
v___x_3968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3968_, 0, v___x_3967_);
lean_ctor_set(v___x_3968_, 1, v_snd_3935_);
if (v_isShared_3958_ == 0)
{
lean_ctor_set(v___x_3957_, 0, v___x_3968_);
v___x_3970_ = v___x_3957_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v___x_3968_);
v___x_3970_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
return v___x_3970_;
}
}
}
}
}
else
{
lean_object* v___x_3976_; 
lean_del_object(v___x_3957_);
lean_dec(v_a_3955_);
lean_del_object(v___x_3951_);
lean_dec(v_snd_3935_);
v___x_3976_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0));
v_a_3941_ = v___x_3976_;
goto v___jp_3940_;
}
}
}
else
{
lean_object* v_a_3978_; lean_object* v___x_3980_; uint8_t v_isShared_3981_; uint8_t v_isSharedCheck_3985_; 
lean_del_object(v___x_3951_);
lean_del_object(v___x_3937_);
lean_dec(v_snd_3935_);
lean_dec(v_mvarId_3923_);
v_a_3978_ = lean_ctor_get(v___x_3954_, 0);
v_isSharedCheck_3985_ = !lean_is_exclusive(v___x_3954_);
if (v_isSharedCheck_3985_ == 0)
{
v___x_3980_ = v___x_3954_;
v_isShared_3981_ = v_isSharedCheck_3985_;
goto v_resetjp_3979_;
}
else
{
lean_inc(v_a_3978_);
lean_dec(v___x_3954_);
v___x_3980_ = lean_box(0);
v_isShared_3981_ = v_isSharedCheck_3985_;
goto v_resetjp_3979_;
}
v_resetjp_3979_:
{
lean_object* v___x_3983_; 
if (v_isShared_3981_ == 0)
{
v___x_3983_ = v___x_3980_;
goto v_reusejp_3982_;
}
else
{
lean_object* v_reuseFailAlloc_3984_; 
v_reuseFailAlloc_3984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3984_, 0, v_a_3978_);
v___x_3983_ = v_reuseFailAlloc_3984_;
goto v_reusejp_3982_;
}
v_reusejp_3982_:
{
return v___x_3983_;
}
}
}
}
}
v___jp_3940_:
{
lean_object* v___x_3943_; 
if (v_isShared_3938_ == 0)
{
lean_ctor_set(v___x_3937_, 1, v_a_3941_);
lean_ctor_set(v___x_3937_, 0, v___x_3939_);
v___x_3943_ = v___x_3937_;
goto v_reusejp_3942_;
}
else
{
lean_object* v_reuseFailAlloc_3947_; 
v_reuseFailAlloc_3947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3947_, 0, v___x_3939_);
lean_ctor_set(v_reuseFailAlloc_3947_, 1, v_a_3941_);
v___x_3943_ = v_reuseFailAlloc_3947_;
goto v_reusejp_3942_;
}
v_reusejp_3942_:
{
size_t v___x_3944_; size_t v___x_3945_; lean_object* v___x_3946_; 
v___x_3944_ = ((size_t)1ULL);
v___x_3945_ = lean_usize_add(v_i_3926_, v___x_3944_);
v___x_3946_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(v_mvarId_3923_, v_as_3924_, v_sz_3925_, v___x_3945_, v___x_3943_, v___y_3928_, v___y_3929_, v___y_3930_, v___y_3931_);
return v___x_3946_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1___boxed(lean_object* v_mvarId_3989_, lean_object* v_as_3990_, lean_object* v_sz_3991_, lean_object* v_i_3992_, lean_object* v_b_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_){
_start:
{
size_t v_sz_boxed_3999_; size_t v_i_boxed_4000_; lean_object* v_res_4001_; 
v_sz_boxed_3999_ = lean_unbox_usize(v_sz_3991_);
lean_dec(v_sz_3991_);
v_i_boxed_4000_ = lean_unbox_usize(v_i_3992_);
lean_dec(v_i_3992_);
v_res_4001_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(v_mvarId_3989_, v_as_3990_, v_sz_boxed_3999_, v_i_boxed_4000_, v_b_3993_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_);
lean_dec(v___y_3997_);
lean_dec_ref(v___y_3996_);
lean_dec(v___y_3995_);
lean_dec_ref(v___y_3994_);
lean_dec_ref(v_as_3990_);
return v_res_4001_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(lean_object* v_mvarId_4002_, lean_object* v_t_4003_, lean_object* v_init_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_){
_start:
{
lean_object* v_root_4010_; lean_object* v_tail_4011_; lean_object* v___x_4012_; 
v_root_4010_ = lean_ctor_get(v_t_4003_, 0);
v_tail_4011_ = lean_ctor_get(v_t_4003_, 1);
lean_inc(v_mvarId_4002_);
lean_inc_ref(v_init_4004_);
v___x_4012_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(v_init_4004_, v_mvarId_4002_, v_root_4010_, v_init_4004_, v___y_4005_, v___y_4006_, v___y_4007_, v___y_4008_);
lean_dec_ref(v_init_4004_);
if (lean_obj_tag(v___x_4012_) == 0)
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4049_; 
v_a_4013_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4049_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4049_ == 0)
{
v___x_4015_ = v___x_4012_;
v_isShared_4016_ = v_isSharedCheck_4049_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v___x_4012_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4049_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
if (lean_obj_tag(v_a_4013_) == 0)
{
lean_object* v_a_4017_; lean_object* v___x_4019_; 
lean_dec(v_mvarId_4002_);
v_a_4017_ = lean_ctor_get(v_a_4013_, 0);
lean_inc(v_a_4017_);
lean_dec_ref(v_a_4013_);
if (v_isShared_4016_ == 0)
{
lean_ctor_set(v___x_4015_, 0, v_a_4017_);
v___x_4019_ = v___x_4015_;
goto v_reusejp_4018_;
}
else
{
lean_object* v_reuseFailAlloc_4020_; 
v_reuseFailAlloc_4020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4020_, 0, v_a_4017_);
v___x_4019_ = v_reuseFailAlloc_4020_;
goto v_reusejp_4018_;
}
v_reusejp_4018_:
{
return v___x_4019_;
}
}
else
{
lean_object* v_a_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; size_t v_sz_4024_; size_t v___x_4025_; lean_object* v___x_4026_; 
lean_del_object(v___x_4015_);
v_a_4021_ = lean_ctor_get(v_a_4013_, 0);
lean_inc(v_a_4021_);
lean_dec_ref(v_a_4013_);
v___x_4022_ = lean_box(0);
v___x_4023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4023_, 0, v___x_4022_);
lean_ctor_set(v___x_4023_, 1, v_a_4021_);
v_sz_4024_ = lean_array_size(v_tail_4011_);
v___x_4025_ = ((size_t)0ULL);
v___x_4026_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(v_mvarId_4002_, v_tail_4011_, v_sz_4024_, v___x_4025_, v___x_4023_, v___y_4005_, v___y_4006_, v___y_4007_, v___y_4008_);
if (lean_obj_tag(v___x_4026_) == 0)
{
lean_object* v_a_4027_; lean_object* v___x_4029_; uint8_t v_isShared_4030_; uint8_t v_isSharedCheck_4040_; 
v_a_4027_ = lean_ctor_get(v___x_4026_, 0);
v_isSharedCheck_4040_ = !lean_is_exclusive(v___x_4026_);
if (v_isSharedCheck_4040_ == 0)
{
v___x_4029_ = v___x_4026_;
v_isShared_4030_ = v_isSharedCheck_4040_;
goto v_resetjp_4028_;
}
else
{
lean_inc(v_a_4027_);
lean_dec(v___x_4026_);
v___x_4029_ = lean_box(0);
v_isShared_4030_ = v_isSharedCheck_4040_;
goto v_resetjp_4028_;
}
v_resetjp_4028_:
{
lean_object* v_fst_4031_; 
v_fst_4031_ = lean_ctor_get(v_a_4027_, 0);
if (lean_obj_tag(v_fst_4031_) == 0)
{
lean_object* v_snd_4032_; lean_object* v___x_4034_; 
v_snd_4032_ = lean_ctor_get(v_a_4027_, 1);
lean_inc(v_snd_4032_);
lean_dec(v_a_4027_);
if (v_isShared_4030_ == 0)
{
lean_ctor_set(v___x_4029_, 0, v_snd_4032_);
v___x_4034_ = v___x_4029_;
goto v_reusejp_4033_;
}
else
{
lean_object* v_reuseFailAlloc_4035_; 
v_reuseFailAlloc_4035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4035_, 0, v_snd_4032_);
v___x_4034_ = v_reuseFailAlloc_4035_;
goto v_reusejp_4033_;
}
v_reusejp_4033_:
{
return v___x_4034_;
}
}
else
{
lean_object* v_val_4036_; lean_object* v___x_4038_; 
lean_inc_ref(v_fst_4031_);
lean_dec(v_a_4027_);
v_val_4036_ = lean_ctor_get(v_fst_4031_, 0);
lean_inc(v_val_4036_);
lean_dec_ref(v_fst_4031_);
if (v_isShared_4030_ == 0)
{
lean_ctor_set(v___x_4029_, 0, v_val_4036_);
v___x_4038_ = v___x_4029_;
goto v_reusejp_4037_;
}
else
{
lean_object* v_reuseFailAlloc_4039_; 
v_reuseFailAlloc_4039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4039_, 0, v_val_4036_);
v___x_4038_ = v_reuseFailAlloc_4039_;
goto v_reusejp_4037_;
}
v_reusejp_4037_:
{
return v___x_4038_;
}
}
}
}
else
{
lean_object* v_a_4041_; lean_object* v___x_4043_; uint8_t v_isShared_4044_; uint8_t v_isSharedCheck_4048_; 
v_a_4041_ = lean_ctor_get(v___x_4026_, 0);
v_isSharedCheck_4048_ = !lean_is_exclusive(v___x_4026_);
if (v_isSharedCheck_4048_ == 0)
{
v___x_4043_ = v___x_4026_;
v_isShared_4044_ = v_isSharedCheck_4048_;
goto v_resetjp_4042_;
}
else
{
lean_inc(v_a_4041_);
lean_dec(v___x_4026_);
v___x_4043_ = lean_box(0);
v_isShared_4044_ = v_isSharedCheck_4048_;
goto v_resetjp_4042_;
}
v_resetjp_4042_:
{
lean_object* v___x_4046_; 
if (v_isShared_4044_ == 0)
{
v___x_4046_ = v___x_4043_;
goto v_reusejp_4045_;
}
else
{
lean_object* v_reuseFailAlloc_4047_; 
v_reuseFailAlloc_4047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4047_, 0, v_a_4041_);
v___x_4046_ = v_reuseFailAlloc_4047_;
goto v_reusejp_4045_;
}
v_reusejp_4045_:
{
return v___x_4046_;
}
}
}
}
}
}
else
{
lean_object* v_a_4050_; lean_object* v___x_4052_; uint8_t v_isShared_4053_; uint8_t v_isSharedCheck_4057_; 
lean_dec(v_mvarId_4002_);
v_a_4050_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4057_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4057_ == 0)
{
v___x_4052_ = v___x_4012_;
v_isShared_4053_ = v_isSharedCheck_4057_;
goto v_resetjp_4051_;
}
else
{
lean_inc(v_a_4050_);
lean_dec(v___x_4012_);
v___x_4052_ = lean_box(0);
v_isShared_4053_ = v_isSharedCheck_4057_;
goto v_resetjp_4051_;
}
v_resetjp_4051_:
{
lean_object* v___x_4055_; 
if (v_isShared_4053_ == 0)
{
v___x_4055_ = v___x_4052_;
goto v_reusejp_4054_;
}
else
{
lean_object* v_reuseFailAlloc_4056_; 
v_reuseFailAlloc_4056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4056_, 0, v_a_4050_);
v___x_4055_ = v_reuseFailAlloc_4056_;
goto v_reusejp_4054_;
}
v_reusejp_4054_:
{
return v___x_4055_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0___boxed(lean_object* v_mvarId_4058_, lean_object* v_t_4059_, lean_object* v_init_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_){
_start:
{
lean_object* v_res_4066_; 
v_res_4066_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(v_mvarId_4058_, v_t_4059_, v_init_4060_, v___y_4061_, v___y_4062_, v___y_4063_, v___y_4064_);
lean_dec(v___y_4064_);
lean_dec_ref(v___y_4063_);
lean_dec(v___y_4062_);
lean_dec_ref(v___y_4061_);
lean_dec_ref(v_t_4059_);
return v_res_4066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0(lean_object* v_mvarId_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_){
_start:
{
lean_object* v_lctx_4076_; lean_object* v_decls_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; 
v_lctx_4076_ = lean_ctor_get(v___y_4071_, 2);
v_decls_4077_ = lean_ctor_get(v_lctx_4076_, 1);
v___x_4078_ = lean_box(0);
v___x_4079_ = ((lean_object*)(l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0));
v___x_4080_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(v_mvarId_4070_, v_decls_4077_, v___x_4079_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_);
if (lean_obj_tag(v___x_4080_) == 0)
{
lean_object* v_a_4081_; lean_object* v___x_4083_; uint8_t v_isShared_4084_; uint8_t v_isSharedCheck_4093_; 
v_a_4081_ = lean_ctor_get(v___x_4080_, 0);
v_isSharedCheck_4093_ = !lean_is_exclusive(v___x_4080_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4083_ = v___x_4080_;
v_isShared_4084_ = v_isSharedCheck_4093_;
goto v_resetjp_4082_;
}
else
{
lean_inc(v_a_4081_);
lean_dec(v___x_4080_);
v___x_4083_ = lean_box(0);
v_isShared_4084_ = v_isSharedCheck_4093_;
goto v_resetjp_4082_;
}
v_resetjp_4082_:
{
lean_object* v_fst_4085_; 
v_fst_4085_ = lean_ctor_get(v_a_4081_, 0);
lean_inc(v_fst_4085_);
lean_dec(v_a_4081_);
if (lean_obj_tag(v_fst_4085_) == 0)
{
lean_object* v___x_4087_; 
if (v_isShared_4084_ == 0)
{
lean_ctor_set(v___x_4083_, 0, v___x_4078_);
v___x_4087_ = v___x_4083_;
goto v_reusejp_4086_;
}
else
{
lean_object* v_reuseFailAlloc_4088_; 
v_reuseFailAlloc_4088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4088_, 0, v___x_4078_);
v___x_4087_ = v_reuseFailAlloc_4088_;
goto v_reusejp_4086_;
}
v_reusejp_4086_:
{
return v___x_4087_;
}
}
else
{
lean_object* v_val_4089_; lean_object* v___x_4091_; 
v_val_4089_ = lean_ctor_get(v_fst_4085_, 0);
lean_inc(v_val_4089_);
lean_dec_ref(v_fst_4085_);
if (v_isShared_4084_ == 0)
{
lean_ctor_set(v___x_4083_, 0, v_val_4089_);
v___x_4091_ = v___x_4083_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v_val_4089_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
return v___x_4091_;
}
}
}
}
else
{
lean_object* v_a_4094_; lean_object* v___x_4096_; uint8_t v_isShared_4097_; uint8_t v_isSharedCheck_4101_; 
v_a_4094_ = lean_ctor_get(v___x_4080_, 0);
v_isSharedCheck_4101_ = !lean_is_exclusive(v___x_4080_);
if (v_isSharedCheck_4101_ == 0)
{
v___x_4096_ = v___x_4080_;
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
else
{
lean_inc(v_a_4094_);
lean_dec(v___x_4080_);
v___x_4096_ = lean_box(0);
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
v_resetjp_4095_:
{
lean_object* v___x_4099_; 
if (v_isShared_4097_ == 0)
{
v___x_4099_ = v___x_4096_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v_a_4094_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0___boxed(lean_object* v_mvarId_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_){
_start:
{
lean_object* v_res_4108_; 
v_res_4108_ = l_Lean_Meta_substSomeVar_x3f___lam__0(v_mvarId_4102_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_);
lean_dec(v___y_4106_);
lean_dec_ref(v___y_4105_);
lean_dec(v___y_4104_);
lean_dec_ref(v___y_4103_);
return v_res_4108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f(lean_object* v_mvarId_4109_, lean_object* v_a_4110_, lean_object* v_a_4111_, lean_object* v_a_4112_, lean_object* v_a_4113_){
_start:
{
lean_object* v___f_4115_; lean_object* v___x_4116_; 
lean_inc(v_mvarId_4109_);
v___f_4115_ = lean_alloc_closure((void*)(l_Lean_Meta_substSomeVar_x3f___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4115_, 0, v_mvarId_4109_);
v___x_4116_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_4109_, v___f_4115_, v_a_4110_, v_a_4111_, v_a_4112_, v_a_4113_);
return v___x_4116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___boxed(lean_object* v_mvarId_4117_, lean_object* v_a_4118_, lean_object* v_a_4119_, lean_object* v_a_4120_, lean_object* v_a_4121_, lean_object* v_a_4122_){
_start:
{
lean_object* v_res_4123_; 
v_res_4123_ = l_Lean_Meta_substSomeVar_x3f(v_mvarId_4117_, v_a_4118_, v_a_4119_, v_a_4120_, v_a_4121_);
lean_dec(v_a_4121_);
lean_dec_ref(v_a_4120_);
lean_dec(v_a_4119_);
lean_dec_ref(v_a_4118_);
return v_res_4123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVars(lean_object* v_mvarId_4124_, lean_object* v_a_4125_, lean_object* v_a_4126_, lean_object* v_a_4127_, lean_object* v_a_4128_){
_start:
{
lean_object* v___x_4130_; 
lean_inc(v_mvarId_4124_);
v___x_4130_ = l_Lean_Meta_substSomeVar_x3f(v_mvarId_4124_, v_a_4125_, v_a_4126_, v_a_4127_, v_a_4128_);
if (lean_obj_tag(v___x_4130_) == 0)
{
lean_object* v_a_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4140_; 
v_a_4131_ = lean_ctor_get(v___x_4130_, 0);
v_isSharedCheck_4140_ = !lean_is_exclusive(v___x_4130_);
if (v_isSharedCheck_4140_ == 0)
{
v___x_4133_ = v___x_4130_;
v_isShared_4134_ = v_isSharedCheck_4140_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_a_4131_);
lean_dec(v___x_4130_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4140_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
if (lean_obj_tag(v_a_4131_) == 1)
{
lean_object* v_val_4135_; 
lean_del_object(v___x_4133_);
lean_dec(v_mvarId_4124_);
v_val_4135_ = lean_ctor_get(v_a_4131_, 0);
lean_inc(v_val_4135_);
lean_dec_ref(v_a_4131_);
v_mvarId_4124_ = v_val_4135_;
goto _start;
}
else
{
lean_object* v___x_4138_; 
lean_dec(v_a_4131_);
if (v_isShared_4134_ == 0)
{
lean_ctor_set(v___x_4133_, 0, v_mvarId_4124_);
v___x_4138_ = v___x_4133_;
goto v_reusejp_4137_;
}
else
{
lean_object* v_reuseFailAlloc_4139_; 
v_reuseFailAlloc_4139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4139_, 0, v_mvarId_4124_);
v___x_4138_ = v_reuseFailAlloc_4139_;
goto v_reusejp_4137_;
}
v_reusejp_4137_:
{
return v___x_4138_;
}
}
}
}
else
{
lean_object* v_a_4141_; lean_object* v___x_4143_; uint8_t v_isShared_4144_; uint8_t v_isSharedCheck_4148_; 
lean_dec(v_mvarId_4124_);
v_a_4141_ = lean_ctor_get(v___x_4130_, 0);
v_isSharedCheck_4148_ = !lean_is_exclusive(v___x_4130_);
if (v_isSharedCheck_4148_ == 0)
{
v___x_4143_ = v___x_4130_;
v_isShared_4144_ = v_isSharedCheck_4148_;
goto v_resetjp_4142_;
}
else
{
lean_inc(v_a_4141_);
lean_dec(v___x_4130_);
v___x_4143_ = lean_box(0);
v_isShared_4144_ = v_isSharedCheck_4148_;
goto v_resetjp_4142_;
}
v_resetjp_4142_:
{
lean_object* v___x_4146_; 
if (v_isShared_4144_ == 0)
{
v___x_4146_ = v___x_4143_;
goto v_reusejp_4145_;
}
else
{
lean_object* v_reuseFailAlloc_4147_; 
v_reuseFailAlloc_4147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4147_, 0, v_a_4141_);
v___x_4146_ = v_reuseFailAlloc_4147_;
goto v_reusejp_4145_;
}
v_reusejp_4145_:
{
return v___x_4146_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVars___boxed(lean_object* v_mvarId_4149_, lean_object* v_a_4150_, lean_object* v_a_4151_, lean_object* v_a_4152_, lean_object* v_a_4153_, lean_object* v_a_4154_){
_start:
{
lean_object* v_res_4155_; 
v_res_4155_ = l_Lean_Meta_substVars(v_mvarId_4149_, v_a_4150_, v_a_4151_, v_a_4152_, v_a_4153_);
lean_dec(v_a_4153_);
lean_dec_ref(v_a_4152_);
lean_dec(v_a_4151_);
lean_dec_ref(v_a_4150_);
return v_res_4155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4218_; uint8_t v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; 
v___x_4218_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__22));
v___x_4219_ = 0;
v___x_4220_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_));
v___x_4221_ = l_Lean_registerTraceClass(v___x_4218_, v___x_4219_, v___x_4220_);
return v___x_4221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2____boxed(lean_object* v_a_4222_){
_start:
{
lean_object* v_res_4223_; 
v_res_4223_ = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_();
return v_res_4223_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_MatchUtil(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assert(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Subst(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_MatchUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Subst(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_MatchUtil(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assert(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Subst(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_MatchUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Subst(builtin);
}
#ifdef __cplusplus
}
#endif
