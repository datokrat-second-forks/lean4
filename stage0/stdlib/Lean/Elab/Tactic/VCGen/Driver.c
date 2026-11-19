// Lean compiler output
// Module: Lean.Elab.Tactic.VCGen.Driver
// Imports: public import Lean.Elab.Tactic.Meta public import Lean.Elab.Tactic.VCGen.Context public import Lean.Elab.Tactic.VCGen.Solve public import Lean.Meta.Sym.Grind
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_get(lean_object*);
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setTag___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_runSimp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_toSimpGoalResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_unfoldReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Elab_runTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_processHypotheses___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_cleanupVC(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setKind___redArg(lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateMVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_MVarId_replaceTargetDefEqFast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Tactic_Do_SpecAttr_isSpecInvariantType(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Sym_preprocessMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_finalizeJoinPoint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__1_value;
static const lean_array_object l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "invariantDotAlt"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__4_value),LEAN_SCALAR_PTR_LITERAL(174, 218, 225, 197, 89, 244, 133, 64)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "invariantCaseAlt"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__6_value),LEAN_SCALAR_PTR_LITERAL(163, 146, 32, 128, 83, 151, 179, 6)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caseArg"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__8_value),LEAN_SCALAR_PTR_LITERAL(151, 119, 254, 229, 232, 21, 225, 201)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__10_value),LEAN_SCALAR_PTR_LITERAL(117, 253, 122, 28, 77, 248, 149, 120)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__14_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__13_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__14_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__16_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__16_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__16_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__15_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__16_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__17_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__18_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "renameI"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__19_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__20_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__20_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__20_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__19_value),LEAN_SCALAR_PTR_LITERAL(20, 41, 101, 89, 107, 117, 242, 244)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__20_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rename_i"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__22;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__23_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__25_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__25_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__25_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__24_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__25_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__26 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__26_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cdotTk"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__27 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__27_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__28_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__27_value),LEAN_SCALAR_PTR_LITERAL(117, 126, 44, 217, 38, 3, 69, 145)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__28 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__28_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__1___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_emitVC(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_emitVC___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_work_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_work_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_work_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_work_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_work(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_work___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_work_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_work_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutFoldProjsCheck___at___00Lean_Elab_Tactic_VCGen_run_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutFoldProjsCheck___at___00Lean_Elab_Tactic_VCGen_run_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutFoldProjsCheck___at___00Lean_Elab_Tactic_VCGen_run_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutFoldProjsCheck___at___00Lean_Elab_Tactic_VCGen_run_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_run___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_run___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_run_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_run_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_VCGen_run_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_VCGen_run_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "vc"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inv"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_run___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_run___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_run___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_run___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_run___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_run___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_run___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_run___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_run_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_run_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__2___redArg(lean_object* v_mvarId_1_, lean_object* v___y_2_){
_start:
{
lean_object* v___x_4_; lean_object* v_mctx_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_4_ = lean_st_ref_get(v___y_2_);
v_mctx_5_ = lean_ctor_get(v___x_4_, 0);
lean_inc_ref(v_mctx_5_);
lean_dec(v___x_4_);
v___x_6_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_5_, v_mvarId_1_);
lean_dec_ref(v_mctx_5_);
v___x_7_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__2___redArg___boxed(lean_object* v_mvarId_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__2___redArg(v_mvarId_8_, v___y_9_);
lean_dec(v___y_9_);
lean_dec(v_mvarId_8_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__2(lean_object* v_mvarId_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__2___redArg(v_mvarId_12_, v___y_16_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__2___boxed(lean_object* v_mvarId_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__2(v_mvarId_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_);
lean_dec(v___y_27_);
lean_dec_ref(v___y_26_);
lean_dec(v___y_25_);
lean_dec_ref(v___y_24_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v_mvarId_21_);
return v_res_29_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__0(lean_object* v_x_30_){
_start:
{
uint8_t v___x_31_; 
v___x_31_ = 0;
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__0___boxed(lean_object* v_x_32_){
_start:
{
uint8_t v_res_33_; lean_object* v_r_34_; 
v_res_33_ = l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__0(v_x_32_);
lean_dec(v_x_32_);
v_r_34_ = lean_box(v_res_33_);
return v_r_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(lean_object* v_x_35_, lean_object* v_x_36_, lean_object* v_x_37_, lean_object* v_x_38_){
_start:
{
lean_object* v_ks_39_; lean_object* v_vs_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_64_; 
v_ks_39_ = lean_ctor_get(v_x_35_, 0);
v_vs_40_ = lean_ctor_get(v_x_35_, 1);
v_isSharedCheck_64_ = !lean_is_exclusive(v_x_35_);
if (v_isSharedCheck_64_ == 0)
{
v___x_42_ = v_x_35_;
v_isShared_43_ = v_isSharedCheck_64_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_vs_40_);
lean_inc(v_ks_39_);
lean_dec(v_x_35_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_64_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___x_44_; uint8_t v___x_45_; 
v___x_44_ = lean_array_get_size(v_ks_39_);
v___x_45_ = lean_nat_dec_lt(v_x_36_, v___x_44_);
if (v___x_45_ == 0)
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_49_; 
lean_dec(v_x_36_);
v___x_46_ = lean_array_push(v_ks_39_, v_x_37_);
v___x_47_ = lean_array_push(v_vs_40_, v_x_38_);
if (v_isShared_43_ == 0)
{
lean_ctor_set(v___x_42_, 1, v___x_47_);
lean_ctor_set(v___x_42_, 0, v___x_46_);
v___x_49_ = v___x_42_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v___x_46_);
lean_ctor_set(v_reuseFailAlloc_50_, 1, v___x_47_);
v___x_49_ = v_reuseFailAlloc_50_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
return v___x_49_;
}
}
else
{
lean_object* v_k_x27_51_; uint8_t v___x_52_; 
v_k_x27_51_ = lean_array_fget_borrowed(v_ks_39_, v_x_36_);
v___x_52_ = l_Lean_instBEqMVarId_beq(v_x_37_, v_k_x27_51_);
if (v___x_52_ == 0)
{
lean_object* v___x_54_; 
if (v_isShared_43_ == 0)
{
v___x_54_ = v___x_42_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v_ks_39_);
lean_ctor_set(v_reuseFailAlloc_58_, 1, v_vs_40_);
v___x_54_ = v_reuseFailAlloc_58_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_unsigned_to_nat(1u);
v___x_56_ = lean_nat_add(v_x_36_, v___x_55_);
lean_dec(v_x_36_);
v_x_35_ = v___x_54_;
v_x_36_ = v___x_56_;
goto _start;
}
}
else
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_62_; 
v___x_59_ = lean_array_fset(v_ks_39_, v_x_36_, v_x_37_);
v___x_60_ = lean_array_fset(v_vs_40_, v_x_36_, v_x_38_);
lean_dec(v_x_36_);
if (v_isShared_43_ == 0)
{
lean_ctor_set(v___x_42_, 1, v___x_60_);
lean_ctor_set(v___x_42_, 0, v___x_59_);
v___x_62_ = v___x_42_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v___x_59_);
lean_ctor_set(v_reuseFailAlloc_63_, 1, v___x_60_);
v___x_62_ = v_reuseFailAlloc_63_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
return v___x_62_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9___redArg(lean_object* v_n_65_, lean_object* v_k_66_, lean_object* v_v_67_){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_unsigned_to_nat(0u);
v___x_69_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(v_n_65_, v___x_68_, v_k_66_, v_v_67_);
return v___x_69_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(lean_object* v_x_71_, size_t v_x_72_, size_t v_x_73_, lean_object* v_x_74_, lean_object* v_x_75_){
_start:
{
if (lean_obj_tag(v_x_71_) == 0)
{
lean_object* v_es_76_; size_t v___x_77_; size_t v___x_78_; lean_object* v_j_79_; lean_object* v___x_80_; uint8_t v___x_81_; 
v_es_76_ = lean_ctor_get(v_x_71_, 0);
v___x_77_ = ((size_t)31ULL);
v___x_78_ = lean_usize_land(v_x_72_, v___x_77_);
v_j_79_ = lean_usize_to_nat(v___x_78_);
v___x_80_ = lean_array_get_size(v_es_76_);
v___x_81_ = lean_nat_dec_lt(v_j_79_, v___x_80_);
if (v___x_81_ == 0)
{
lean_dec(v_j_79_);
lean_dec(v_x_75_);
lean_dec(v_x_74_);
return v_x_71_;
}
else
{
lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_120_; 
lean_inc_ref(v_es_76_);
v_isSharedCheck_120_ = !lean_is_exclusive(v_x_71_);
if (v_isSharedCheck_120_ == 0)
{
lean_object* v_unused_121_; 
v_unused_121_ = lean_ctor_get(v_x_71_, 0);
lean_dec(v_unused_121_);
v___x_83_ = v_x_71_;
v_isShared_84_ = v_isSharedCheck_120_;
goto v_resetjp_82_;
}
else
{
lean_dec(v_x_71_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_120_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v_v_85_; lean_object* v___x_86_; lean_object* v_xs_x27_87_; lean_object* v___y_89_; 
v_v_85_ = lean_array_fget(v_es_76_, v_j_79_);
v___x_86_ = lean_box(0);
v_xs_x27_87_ = lean_array_fset(v_es_76_, v_j_79_, v___x_86_);
switch(lean_obj_tag(v_v_85_))
{
case 0:
{
lean_object* v_key_94_; lean_object* v_val_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_105_; 
v_key_94_ = lean_ctor_get(v_v_85_, 0);
v_val_95_ = lean_ctor_get(v_v_85_, 1);
v_isSharedCheck_105_ = !lean_is_exclusive(v_v_85_);
if (v_isSharedCheck_105_ == 0)
{
v___x_97_ = v_v_85_;
v_isShared_98_ = v_isSharedCheck_105_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_val_95_);
lean_inc(v_key_94_);
lean_dec(v_v_85_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_105_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
uint8_t v___x_99_; 
v___x_99_ = l_Lean_instBEqMVarId_beq(v_x_74_, v_key_94_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; lean_object* v___x_101_; 
lean_del_object(v___x_97_);
v___x_100_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_94_, v_val_95_, v_x_74_, v_x_75_);
v___x_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
v___y_89_ = v___x_101_;
goto v___jp_88_;
}
else
{
lean_object* v___x_103_; 
lean_dec(v_val_95_);
lean_dec(v_key_94_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 1, v_x_75_);
lean_ctor_set(v___x_97_, 0, v_x_74_);
v___x_103_ = v___x_97_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_x_74_);
lean_ctor_set(v_reuseFailAlloc_104_, 1, v_x_75_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
v___y_89_ = v___x_103_;
goto v___jp_88_;
}
}
}
}
case 1:
{
lean_object* v_node_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_118_; 
v_node_106_ = lean_ctor_get(v_v_85_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v_v_85_);
if (v_isSharedCheck_118_ == 0)
{
v___x_108_ = v_v_85_;
v_isShared_109_ = v_isSharedCheck_118_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_node_106_);
lean_dec(v_v_85_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_118_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
size_t v___x_110_; size_t v___x_111_; size_t v___x_112_; size_t v___x_113_; lean_object* v___x_114_; lean_object* v___x_116_; 
v___x_110_ = ((size_t)5ULL);
v___x_111_ = lean_usize_shift_right(v_x_72_, v___x_110_);
v___x_112_ = ((size_t)1ULL);
v___x_113_ = lean_usize_add(v_x_73_, v___x_112_);
v___x_114_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(v_node_106_, v___x_111_, v___x_113_, v_x_74_, v_x_75_);
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 0, v___x_114_);
v___x_116_ = v___x_108_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v___x_114_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
v___y_89_ = v___x_116_;
goto v___jp_88_;
}
}
}
default: 
{
lean_object* v___x_119_; 
v___x_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_119_, 0, v_x_74_);
lean_ctor_set(v___x_119_, 1, v_x_75_);
v___y_89_ = v___x_119_;
goto v___jp_88_;
}
}
v___jp_88_:
{
lean_object* v___x_90_; lean_object* v___x_92_; 
v___x_90_ = lean_array_fset(v_xs_x27_87_, v_j_79_, v___y_89_);
lean_dec(v_j_79_);
if (v_isShared_84_ == 0)
{
lean_ctor_set(v___x_83_, 0, v___x_90_);
v___x_92_ = v___x_83_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v___x_90_);
v___x_92_ = v_reuseFailAlloc_93_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
return v___x_92_;
}
}
}
}
}
else
{
lean_object* v_ks_122_; lean_object* v_vs_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_141_; 
v_ks_122_ = lean_ctor_get(v_x_71_, 0);
v_vs_123_ = lean_ctor_get(v_x_71_, 1);
v_isSharedCheck_141_ = !lean_is_exclusive(v_x_71_);
if (v_isSharedCheck_141_ == 0)
{
v___x_125_ = v_x_71_;
v_isShared_126_ = v_isSharedCheck_141_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_vs_123_);
lean_inc(v_ks_122_);
lean_dec(v_x_71_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_141_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_ks_122_);
lean_ctor_set(v_reuseFailAlloc_140_, 1, v_vs_123_);
v___x_128_ = v_reuseFailAlloc_140_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
lean_object* v_newNode_129_; size_t v___x_130_; uint8_t v___x_131_; 
v_newNode_129_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9___redArg(v___x_128_, v_x_74_, v_x_75_);
v___x_130_ = ((size_t)7ULL);
v___x_131_ = lean_usize_dec_le(v___x_130_, v_x_73_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_132_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_129_);
v___x_133_ = lean_unsigned_to_nat(4u);
v___x_134_ = lean_nat_dec_lt(v___x_132_, v___x_133_);
lean_dec(v___x_132_);
if (v___x_134_ == 0)
{
lean_object* v_ks_135_; lean_object* v_vs_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v_ks_135_ = lean_ctor_get(v_newNode_129_, 0);
lean_inc_ref(v_ks_135_);
v_vs_136_ = lean_ctor_get(v_newNode_129_, 1);
lean_inc_ref(v_vs_136_);
lean_dec_ref(v_newNode_129_);
v___x_137_ = lean_unsigned_to_nat(0u);
v___x_138_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0);
v___x_139_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg(v_x_73_, v_ks_135_, v_vs_136_, v___x_137_, v___x_138_);
lean_dec_ref(v_vs_136_);
lean_dec_ref(v_ks_135_);
return v___x_139_;
}
else
{
return v_newNode_129_;
}
}
else
{
return v_newNode_129_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg(size_t v_depth_142_, lean_object* v_keys_143_, lean_object* v_vals_144_, lean_object* v_i_145_, lean_object* v_entries_146_){
_start:
{
lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_147_ = lean_array_get_size(v_keys_143_);
v___x_148_ = lean_nat_dec_lt(v_i_145_, v___x_147_);
if (v___x_148_ == 0)
{
lean_dec(v_i_145_);
return v_entries_146_;
}
else
{
lean_object* v_k_149_; lean_object* v_v_150_; uint64_t v___x_151_; size_t v_h_152_; size_t v___x_153_; lean_object* v___x_154_; size_t v___x_155_; size_t v___x_156_; size_t v___x_157_; size_t v_h_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v_k_149_ = lean_array_fget_borrowed(v_keys_143_, v_i_145_);
v_v_150_ = lean_array_fget_borrowed(v_vals_144_, v_i_145_);
v___x_151_ = l_Lean_instHashableMVarId_hash(v_k_149_);
v_h_152_ = lean_uint64_to_usize(v___x_151_);
v___x_153_ = ((size_t)5ULL);
v___x_154_ = lean_unsigned_to_nat(1u);
v___x_155_ = ((size_t)1ULL);
v___x_156_ = lean_usize_sub(v_depth_142_, v___x_155_);
v___x_157_ = lean_usize_mul(v___x_153_, v___x_156_);
v_h_158_ = lean_usize_shift_right(v_h_152_, v___x_157_);
v___x_159_ = lean_nat_add(v_i_145_, v___x_154_);
lean_dec(v_i_145_);
lean_inc(v_v_150_);
lean_inc(v_k_149_);
v___x_160_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(v_entries_146_, v_h_158_, v_depth_142_, v_k_149_, v_v_150_);
v_i_145_ = v___x_159_;
v_entries_146_ = v___x_160_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg___boxed(lean_object* v_depth_162_, lean_object* v_keys_163_, lean_object* v_vals_164_, lean_object* v_i_165_, lean_object* v_entries_166_){
_start:
{
size_t v_depth_boxed_167_; lean_object* v_res_168_; 
v_depth_boxed_167_ = lean_unbox_usize(v_depth_162_);
lean_dec(v_depth_162_);
v_res_168_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg(v_depth_boxed_167_, v_keys_163_, v_vals_164_, v_i_165_, v_entries_166_);
lean_dec_ref(v_vals_164_);
lean_dec_ref(v_keys_163_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___boxed(lean_object* v_x_169_, lean_object* v_x_170_, lean_object* v_x_171_, lean_object* v_x_172_, lean_object* v_x_173_){
_start:
{
size_t v_x_14576__boxed_174_; size_t v_x_14577__boxed_175_; lean_object* v_res_176_; 
v_x_14576__boxed_174_ = lean_unbox_usize(v_x_170_);
lean_dec(v_x_170_);
v_x_14577__boxed_175_ = lean_unbox_usize(v_x_171_);
lean_dec(v_x_171_);
v_res_176_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(v_x_169_, v_x_14576__boxed_174_, v_x_14577__boxed_175_, v_x_172_, v_x_173_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5___redArg(lean_object* v_x_177_, lean_object* v_x_178_, lean_object* v_x_179_){
_start:
{
uint64_t v___x_180_; size_t v___x_181_; size_t v___x_182_; lean_object* v___x_183_; 
v___x_180_ = l_Lean_instHashableMVarId_hash(v_x_178_);
v___x_181_ = lean_uint64_to_usize(v___x_180_);
v___x_182_ = ((size_t)1ULL);
v___x_183_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(v_x_177_, v___x_181_, v___x_182_, v_x_178_, v_x_179_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3___redArg(lean_object* v_mvarId_184_, lean_object* v_val_185_, lean_object* v___y_186_){
_start:
{
lean_object* v___x_188_; lean_object* v_mctx_189_; lean_object* v_cache_190_; lean_object* v_zetaDeltaFVarIds_191_; lean_object* v_postponed_192_; lean_object* v_diag_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_221_; 
v___x_188_ = lean_st_ref_take(v___y_186_);
v_mctx_189_ = lean_ctor_get(v___x_188_, 0);
v_cache_190_ = lean_ctor_get(v___x_188_, 1);
v_zetaDeltaFVarIds_191_ = lean_ctor_get(v___x_188_, 2);
v_postponed_192_ = lean_ctor_get(v___x_188_, 3);
v_diag_193_ = lean_ctor_get(v___x_188_, 4);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_221_ == 0)
{
v___x_195_ = v___x_188_;
v_isShared_196_ = v_isSharedCheck_221_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_diag_193_);
lean_inc(v_postponed_192_);
lean_inc(v_zetaDeltaFVarIds_191_);
lean_inc(v_cache_190_);
lean_inc(v_mctx_189_);
lean_dec(v___x_188_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_221_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v_depth_197_; lean_object* v_levelAssignDepth_198_; lean_object* v_lmvarCounter_199_; lean_object* v_mvarCounter_200_; lean_object* v_lDecls_201_; lean_object* v_decls_202_; lean_object* v_userNames_203_; lean_object* v_lAssignment_204_; lean_object* v_eAssignment_205_; lean_object* v_dAssignment_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_220_; 
v_depth_197_ = lean_ctor_get(v_mctx_189_, 0);
v_levelAssignDepth_198_ = lean_ctor_get(v_mctx_189_, 1);
v_lmvarCounter_199_ = lean_ctor_get(v_mctx_189_, 2);
v_mvarCounter_200_ = lean_ctor_get(v_mctx_189_, 3);
v_lDecls_201_ = lean_ctor_get(v_mctx_189_, 4);
v_decls_202_ = lean_ctor_get(v_mctx_189_, 5);
v_userNames_203_ = lean_ctor_get(v_mctx_189_, 6);
v_lAssignment_204_ = lean_ctor_get(v_mctx_189_, 7);
v_eAssignment_205_ = lean_ctor_get(v_mctx_189_, 8);
v_dAssignment_206_ = lean_ctor_get(v_mctx_189_, 9);
v_isSharedCheck_220_ = !lean_is_exclusive(v_mctx_189_);
if (v_isSharedCheck_220_ == 0)
{
v___x_208_ = v_mctx_189_;
v_isShared_209_ = v_isSharedCheck_220_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_dAssignment_206_);
lean_inc(v_eAssignment_205_);
lean_inc(v_lAssignment_204_);
lean_inc(v_userNames_203_);
lean_inc(v_decls_202_);
lean_inc(v_lDecls_201_);
lean_inc(v_mvarCounter_200_);
lean_inc(v_lmvarCounter_199_);
lean_inc(v_levelAssignDepth_198_);
lean_inc(v_depth_197_);
lean_dec(v_mctx_189_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_220_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_213_; 
v___x_210_ = lean_box(0);
v___x_211_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5___redArg(v_eAssignment_205_, v_mvarId_184_, v_val_185_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 8, v___x_211_);
v___x_213_ = v___x_208_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_depth_197_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v_levelAssignDepth_198_);
lean_ctor_set(v_reuseFailAlloc_219_, 2, v_lmvarCounter_199_);
lean_ctor_set(v_reuseFailAlloc_219_, 3, v_mvarCounter_200_);
lean_ctor_set(v_reuseFailAlloc_219_, 4, v_lDecls_201_);
lean_ctor_set(v_reuseFailAlloc_219_, 5, v_decls_202_);
lean_ctor_set(v_reuseFailAlloc_219_, 6, v_userNames_203_);
lean_ctor_set(v_reuseFailAlloc_219_, 7, v_lAssignment_204_);
lean_ctor_set(v_reuseFailAlloc_219_, 8, v___x_211_);
lean_ctor_set(v_reuseFailAlloc_219_, 9, v_dAssignment_206_);
v___x_213_ = v_reuseFailAlloc_219_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
lean_object* v___x_215_; 
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 0, v___x_213_);
v___x_215_ = v___x_195_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v___x_213_);
lean_ctor_set(v_reuseFailAlloc_218_, 1, v_cache_190_);
lean_ctor_set(v_reuseFailAlloc_218_, 2, v_zetaDeltaFVarIds_191_);
lean_ctor_set(v_reuseFailAlloc_218_, 3, v_postponed_192_);
lean_ctor_set(v_reuseFailAlloc_218_, 4, v_diag_193_);
v___x_215_ = v_reuseFailAlloc_218_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = lean_st_ref_put(v___y_186_, v___x_215_);
v___x_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_210_);
return v___x_217_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3___redArg___boxed(lean_object* v_mvarId_222_, lean_object* v_val_223_, lean_object* v___y_224_, lean_object* v___y_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3___redArg(v_mvarId_222_, v_val_223_, v___y_224_);
lean_dec(v___y_224_);
return v_res_226_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg(lean_object* v_keys_227_, lean_object* v_i_228_, lean_object* v_k_229_){
_start:
{
lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_230_ = lean_array_get_size(v_keys_227_);
v___x_231_ = lean_nat_dec_lt(v_i_228_, v___x_230_);
if (v___x_231_ == 0)
{
lean_dec(v_i_228_);
return v___x_231_;
}
else
{
lean_object* v_k_x27_232_; uint8_t v___x_233_; 
v_k_x27_232_ = lean_array_fget_borrowed(v_keys_227_, v_i_228_);
v___x_233_ = l_Lean_instBEqMVarId_beq(v_k_229_, v_k_x27_232_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_234_ = lean_unsigned_to_nat(1u);
v___x_235_ = lean_nat_add(v_i_228_, v___x_234_);
lean_dec(v_i_228_);
v_i_228_ = v___x_235_;
goto _start;
}
else
{
lean_dec(v_i_228_);
return v___x_231_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_keys_237_, lean_object* v_i_238_, lean_object* v_k_239_){
_start:
{
uint8_t v_res_240_; lean_object* v_r_241_; 
v_res_240_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg(v_keys_237_, v_i_238_, v_k_239_);
lean_dec(v_k_239_);
lean_dec_ref(v_keys_237_);
v_r_241_ = lean_box(v_res_240_);
return v_r_241_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg(lean_object* v_x_242_, size_t v_x_243_, lean_object* v_x_244_){
_start:
{
if (lean_obj_tag(v_x_242_) == 0)
{
lean_object* v_es_245_; lean_object* v___x_246_; size_t v___x_247_; size_t v___x_248_; lean_object* v_j_249_; lean_object* v___x_250_; 
v_es_245_ = lean_ctor_get(v_x_242_, 0);
v___x_246_ = lean_box(2);
v___x_247_ = ((size_t)31ULL);
v___x_248_ = lean_usize_land(v_x_243_, v___x_247_);
v_j_249_ = lean_usize_to_nat(v___x_248_);
v___x_250_ = lean_array_get_borrowed(v___x_246_, v_es_245_, v_j_249_);
lean_dec(v_j_249_);
switch(lean_obj_tag(v___x_250_))
{
case 0:
{
lean_object* v_key_251_; uint8_t v___x_252_; 
v_key_251_ = lean_ctor_get(v___x_250_, 0);
v___x_252_ = l_Lean_instBEqMVarId_beq(v_x_244_, v_key_251_);
return v___x_252_;
}
case 1:
{
lean_object* v_node_253_; size_t v___x_254_; size_t v___x_255_; 
v_node_253_ = lean_ctor_get(v___x_250_, 0);
v___x_254_ = ((size_t)5ULL);
v___x_255_ = lean_usize_shift_right(v_x_243_, v___x_254_);
v_x_242_ = v_node_253_;
v_x_243_ = v___x_255_;
goto _start;
}
default: 
{
uint8_t v___x_257_; 
v___x_257_ = 0;
return v___x_257_;
}
}
}
else
{
lean_object* v_ks_258_; lean_object* v___x_259_; uint8_t v___x_260_; 
v_ks_258_ = lean_ctor_get(v_x_242_, 0);
v___x_259_ = lean_unsigned_to_nat(0u);
v___x_260_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg(v_ks_258_, v___x_259_, v_x_244_);
return v___x_260_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_x_261_, lean_object* v_x_262_, lean_object* v_x_263_){
_start:
{
size_t v_x_14798__boxed_264_; uint8_t v_res_265_; lean_object* v_r_266_; 
v_x_14798__boxed_264_ = lean_unbox_usize(v_x_262_);
lean_dec(v_x_262_);
v_res_265_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg(v_x_261_, v_x_14798__boxed_264_, v_x_263_);
lean_dec(v_x_263_);
lean_dec_ref(v_x_261_);
v_r_266_ = lean_box(v_res_265_);
return v_r_266_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2___redArg(lean_object* v_x_267_, lean_object* v_x_268_){
_start:
{
uint64_t v___x_269_; size_t v___x_270_; uint8_t v___x_271_; 
v___x_269_ = l_Lean_instHashableMVarId_hash(v_x_268_);
v___x_270_ = lean_uint64_to_usize(v___x_269_);
v___x_271_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg(v_x_267_, v___x_270_, v_x_268_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2___redArg___boxed(lean_object* v_x_272_, lean_object* v_x_273_){
_start:
{
uint8_t v_res_274_; lean_object* v_r_275_; 
v_res_274_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2___redArg(v_x_272_, v_x_273_);
lean_dec(v_x_273_);
lean_dec_ref(v_x_272_);
v_r_275_ = lean_box(v_res_274_);
return v_r_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1___redArg(lean_object* v_mvarId_276_, lean_object* v___y_277_){
_start:
{
lean_object* v___x_279_; lean_object* v_mctx_280_; lean_object* v_eAssignment_281_; uint8_t v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_279_ = lean_st_ref_get(v___y_277_);
v_mctx_280_ = lean_ctor_get(v___x_279_, 0);
lean_inc_ref(v_mctx_280_);
lean_dec(v___x_279_);
v_eAssignment_281_ = lean_ctor_get(v_mctx_280_, 8);
lean_inc_ref(v_eAssignment_281_);
lean_dec_ref(v_mctx_280_);
v___x_282_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2___redArg(v_eAssignment_281_, v_mvarId_276_);
lean_dec_ref(v_eAssignment_281_);
v___x_283_ = lean_box(v___x_282_);
v___x_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1___redArg___boxed(lean_object* v_mvarId_285_, lean_object* v___y_286_, lean_object* v___y_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1___redArg(v_mvarId_285_, v___y_286_);
lean_dec(v___y_286_);
lean_dec(v_mvarId_285_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1(lean_object* v___f_300_, lean_object* v_mv_301_, lean_object* v_val_302_, lean_object* v_tac_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; uint8_t v___x_313_; lean_object* v___x_317_; uint8_t v___x_318_; lean_object* v___y_320_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v_toCold_366_; lean_object* v_currRecDepth_367_; lean_object* v_ref_368_; uint16_t v_optionFlags_369_; uint8_t v_suppressElabErrors_370_; uint8_t v_checkDeprecated_371_; uint8_t v_isRecordingDeps_372_; lean_object* v___x_373_; uint8_t v_transparency_374_; lean_object* v___x_375_; uint8_t v___x_376_; lean_object* v_ref_377_; lean_object* v___x_378_; uint8_t v___x_379_; 
v___x_311_ = lean_box(0);
v___x_312_ = lean_box(0);
v___x_313_ = 1;
v___x_317_ = lean_box(1);
v___x_318_ = 0;
v___x_364_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__2));
v___x_365_ = lean_alloc_ctor(0, 8, 10);
lean_ctor_set(v___x_365_, 0, v___x_311_);
lean_ctor_set(v___x_365_, 1, v___x_312_);
lean_ctor_set(v___x_365_, 2, v___x_311_);
lean_ctor_set(v___x_365_, 3, v___f_300_);
lean_ctor_set(v___x_365_, 4, v___x_317_);
lean_ctor_set(v___x_365_, 5, v___x_317_);
lean_ctor_set(v___x_365_, 6, v___x_311_);
lean_ctor_set(v___x_365_, 7, v___x_364_);
lean_ctor_set_uint8(v___x_365_, sizeof(void*)*8, v___x_313_);
lean_ctor_set_uint8(v___x_365_, sizeof(void*)*8 + 1, v___x_313_);
lean_ctor_set_uint8(v___x_365_, sizeof(void*)*8 + 2, v___x_313_);
lean_ctor_set_uint8(v___x_365_, sizeof(void*)*8 + 3, v___x_313_);
lean_ctor_set_uint8(v___x_365_, sizeof(void*)*8 + 4, v___x_318_);
lean_ctor_set_uint8(v___x_365_, sizeof(void*)*8 + 5, v___x_318_);
lean_ctor_set_uint8(v___x_365_, sizeof(void*)*8 + 6, v___x_318_);
lean_ctor_set_uint8(v___x_365_, sizeof(void*)*8 + 7, v___x_318_);
lean_ctor_set_uint8(v___x_365_, sizeof(void*)*8 + 8, v___x_313_);
lean_ctor_set_uint8(v___x_365_, sizeof(void*)*8 + 9, v___x_318_);
v_toCold_366_ = lean_ctor_get(v___y_308_, 0);
v_currRecDepth_367_ = lean_ctor_get(v___y_308_, 1);
v_ref_368_ = lean_ctor_get(v___y_308_, 2);
v_optionFlags_369_ = lean_ctor_get_uint16(v___y_308_, sizeof(void*)*3);
v_suppressElabErrors_370_ = lean_ctor_get_uint8(v___y_308_, sizeof(void*)*3 + 2);
v_checkDeprecated_371_ = lean_ctor_get_uint8(v___y_308_, sizeof(void*)*3 + 3);
v_isRecordingDeps_372_ = lean_ctor_get_uint8(v___y_308_, sizeof(void*)*3 + 4);
v___x_373_ = l_Lean_Meta_Context_config(v___y_306_);
v_transparency_374_ = lean_ctor_get_uint8(v___x_373_, 9);
lean_dec_ref(v___x_373_);
v___x_375_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__3));
v___x_376_ = 1;
v_ref_377_ = l_Lean_replaceRef(v_val_302_, v_ref_368_);
lean_inc(v_currRecDepth_367_);
lean_inc_ref(v_toCold_366_);
v___x_378_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_378_, 0, v_toCold_366_);
lean_ctor_set(v___x_378_, 1, v_currRecDepth_367_);
lean_ctor_set(v___x_378_, 2, v_ref_377_);
lean_ctor_set_uint16(v___x_378_, sizeof(void*)*3, v_optionFlags_369_);
lean_ctor_set_uint8(v___x_378_, sizeof(void*)*3 + 2, v_suppressElabErrors_370_);
lean_ctor_set_uint8(v___x_378_, sizeof(void*)*3 + 3, v_checkDeprecated_371_);
lean_ctor_set_uint8(v___x_378_, sizeof(void*)*3 + 4, v_isRecordingDeps_372_);
v___x_379_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_374_, v___x_376_);
if (v___x_379_ == 0)
{
lean_object* v_keyedConfig_380_; uint8_t v_trackZetaDelta_381_; lean_object* v_zetaDeltaSet_382_; lean_object* v_lctx_383_; lean_object* v_localInstances_384_; lean_object* v_defEqCtx_x3f_385_; lean_object* v_synthPendingDepth_386_; lean_object* v_customCanUnfoldPredicate_x3f_387_; uint8_t v_univApprox_388_; uint8_t v_inTypeClassResolution_389_; uint8_t v_cacheInferType_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v_keyedConfig_380_ = lean_ctor_get(v___y_306_, 0);
v_trackZetaDelta_381_ = lean_ctor_get_uint8(v___y_306_, sizeof(void*)*7);
v_zetaDeltaSet_382_ = lean_ctor_get(v___y_306_, 1);
v_lctx_383_ = lean_ctor_get(v___y_306_, 2);
v_localInstances_384_ = lean_ctor_get(v___y_306_, 3);
v_defEqCtx_x3f_385_ = lean_ctor_get(v___y_306_, 4);
v_synthPendingDepth_386_ = lean_ctor_get(v___y_306_, 5);
v_customCanUnfoldPredicate_x3f_387_ = lean_ctor_get(v___y_306_, 6);
v_univApprox_388_ = lean_ctor_get_uint8(v___y_306_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_389_ = lean_ctor_get_uint8(v___y_306_, sizeof(void*)*7 + 2);
v_cacheInferType_390_ = lean_ctor_get_uint8(v___y_306_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_380_);
v___x_391_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_376_, v_keyedConfig_380_);
lean_inc(v_customCanUnfoldPredicate_x3f_387_);
lean_inc(v_synthPendingDepth_386_);
lean_inc(v_defEqCtx_x3f_385_);
lean_inc_ref(v_localInstances_384_);
lean_inc_ref(v_lctx_383_);
lean_inc(v_zetaDeltaSet_382_);
v___x_392_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_392_, 0, v___x_391_);
lean_ctor_set(v___x_392_, 1, v_zetaDeltaSet_382_);
lean_ctor_set(v___x_392_, 2, v_lctx_383_);
lean_ctor_set(v___x_392_, 3, v_localInstances_384_);
lean_ctor_set(v___x_392_, 4, v_defEqCtx_x3f_385_);
lean_ctor_set(v___x_392_, 5, v_synthPendingDepth_386_);
lean_ctor_set(v___x_392_, 6, v_customCanUnfoldPredicate_x3f_387_);
lean_ctor_set_uint8(v___x_392_, sizeof(void*)*7, v_trackZetaDelta_381_);
lean_ctor_set_uint8(v___x_392_, sizeof(void*)*7 + 1, v_univApprox_388_);
lean_ctor_set_uint8(v___x_392_, sizeof(void*)*7 + 2, v_inTypeClassResolution_389_);
lean_ctor_set_uint8(v___x_392_, sizeof(void*)*7 + 3, v_cacheInferType_390_);
lean_inc(v_mv_301_);
v___x_393_ = l_Lean_Elab_runTactic(v_mv_301_, v_tac_303_, v___x_365_, v___x_375_, v___x_392_, v___y_307_, v___x_378_, v___y_309_);
lean_dec_ref_known(v___x_378_, 3);
lean_dec_ref_known(v___x_392_, 7);
v___y_320_ = v___x_393_;
goto v___jp_319_;
}
else
{
lean_object* v___x_394_; 
lean_inc(v_mv_301_);
v___x_394_ = l_Lean_Elab_runTactic(v_mv_301_, v_tac_303_, v___x_365_, v___x_375_, v___y_306_, v___y_307_, v___x_378_, v___y_309_);
lean_dec_ref_known(v___x_378_, 3);
v___y_320_ = v___x_394_;
goto v___jp_319_;
}
v___jp_314_:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__0));
v___x_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
return v___x_316_;
}
v___jp_319_:
{
if (lean_obj_tag(v___y_320_) == 0)
{
lean_object* v___x_321_; lean_object* v_a_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_355_; 
lean_dec_ref_known(v___y_320_, 1);
v___x_321_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1___redArg(v_mv_301_, v___y_307_);
v_a_322_ = lean_ctor_get(v___x_321_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_321_);
if (v_isSharedCheck_355_ == 0)
{
v___x_324_ = v___x_321_;
v_isShared_325_ = v_isSharedCheck_355_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_a_322_);
lean_dec(v___x_321_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_355_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
uint8_t v___x_326_; 
v___x_326_ = lean_unbox(v_a_322_);
lean_dec(v_a_322_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; lean_object* v___x_329_; 
lean_dec(v_mv_301_);
v___x_327_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___closed__1));
if (v_isShared_325_ == 0)
{
lean_ctor_set(v___x_324_, 0, v___x_327_);
v___x_329_ = v___x_324_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v___x_327_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
else
{
lean_object* v___x_331_; lean_object* v_a_332_; 
lean_del_object(v___x_324_);
v___x_331_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__2___redArg(v_mv_301_, v___y_307_);
v_a_332_ = lean_ctor_get(v___x_331_, 0);
lean_inc(v_a_332_);
lean_dec_ref(v___x_331_);
if (lean_obj_tag(v_a_332_) == 1)
{
lean_object* v_val_333_; lean_object* v___x_334_; 
v_val_333_ = lean_ctor_get(v_a_332_, 0);
lean_inc(v_val_333_);
lean_dec_ref_known(v_a_332_, 1);
v___x_334_ = l_Lean_Meta_Sym_unfoldReducible(v_val_333_, v___y_306_, v___y_307_, v___y_308_, v___y_309_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_336_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
lean_inc(v_a_335_);
lean_dec_ref_known(v___x_334_, 1);
v___x_336_ = l_Lean_Meta_Sym_shareCommon(v_a_335_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_, v___y_309_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_338_; 
v_a_337_ = lean_ctor_get(v___x_336_, 0);
lean_inc(v_a_337_);
lean_dec_ref_known(v___x_336_, 1);
v___x_338_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3___redArg(v_mv_301_, v_a_337_, v___y_307_);
lean_dec_ref(v___x_338_);
goto v___jp_314_;
}
else
{
lean_object* v_a_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_346_; 
lean_dec(v_mv_301_);
v_a_339_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_346_ == 0)
{
v___x_341_ = v___x_336_;
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_a_339_);
lean_dec(v___x_336_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_344_; 
if (v_isShared_342_ == 0)
{
v___x_344_ = v___x_341_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_a_339_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
}
else
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_354_; 
lean_dec(v_mv_301_);
v_a_347_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_354_ == 0)
{
v___x_349_ = v___x_334_;
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_334_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_352_; 
if (v_isShared_350_ == 0)
{
v___x_352_ = v___x_349_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_a_347_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
else
{
lean_dec(v_a_332_);
lean_dec(v_mv_301_);
goto v___jp_314_;
}
}
}
}
else
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
lean_dec(v_mv_301_);
v_a_356_ = lean_ctor_get(v___y_320_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___y_320_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___y_320_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___y_320_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1___boxed(lean_object* v___f_395_, lean_object* v_mv_396_, lean_object* v_val_397_, lean_object* v_tac_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1(v___f_395_, v_mv_396_, v_val_397_, v_tac_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
lean_dec(v_val_397_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0_spec__0___redArg(lean_object* v_a_407_, lean_object* v_x_408_){
_start:
{
if (lean_obj_tag(v_x_408_) == 0)
{
lean_object* v___x_409_; 
v___x_409_ = lean_box(0);
return v___x_409_;
}
else
{
lean_object* v_key_410_; lean_object* v_value_411_; lean_object* v_tail_412_; uint8_t v___x_413_; 
v_key_410_ = lean_ctor_get(v_x_408_, 0);
v_value_411_ = lean_ctor_get(v_x_408_, 1);
v_tail_412_ = lean_ctor_get(v_x_408_, 2);
v___x_413_ = lean_nat_dec_eq(v_key_410_, v_a_407_);
if (v___x_413_ == 0)
{
v_x_408_ = v_tail_412_;
goto _start;
}
else
{
lean_object* v___x_415_; 
lean_inc(v_value_411_);
v___x_415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_415_, 0, v_value_411_);
return v___x_415_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0_spec__0___redArg___boxed(lean_object* v_a_416_, lean_object* v_x_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0_spec__0___redArg(v_a_416_, v_x_417_);
lean_dec(v_x_417_);
lean_dec(v_a_416_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0___redArg(lean_object* v_m_419_, lean_object* v_a_420_){
_start:
{
lean_object* v_buckets_421_; lean_object* v___x_422_; uint64_t v___x_423_; uint64_t v___x_424_; uint64_t v___x_425_; uint64_t v_fold_426_; uint64_t v___x_427_; uint64_t v___x_428_; uint64_t v___x_429_; size_t v___x_430_; size_t v___x_431_; size_t v___x_432_; size_t v___x_433_; size_t v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
v_buckets_421_ = lean_ctor_get(v_m_419_, 1);
v___x_422_ = lean_array_get_size(v_buckets_421_);
v___x_423_ = lean_uint64_of_nat(v_a_420_);
v___x_424_ = 32ULL;
v___x_425_ = lean_uint64_shift_right(v___x_423_, v___x_424_);
v_fold_426_ = lean_uint64_xor(v___x_423_, v___x_425_);
v___x_427_ = 16ULL;
v___x_428_ = lean_uint64_shift_right(v_fold_426_, v___x_427_);
v___x_429_ = lean_uint64_xor(v_fold_426_, v___x_428_);
v___x_430_ = lean_uint64_to_usize(v___x_429_);
v___x_431_ = lean_usize_of_nat(v___x_422_);
v___x_432_ = ((size_t)1ULL);
v___x_433_ = lean_usize_sub(v___x_431_, v___x_432_);
v___x_434_ = lean_usize_land(v___x_430_, v___x_433_);
v___x_435_ = lean_array_uget_borrowed(v_buckets_421_, v___x_434_);
v___x_436_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0_spec__0___redArg(v_a_420_, v___x_435_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0___redArg___boxed(lean_object* v_m_437_, lean_object* v_a_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0___redArg(v_m_437_, v_a_438_);
lean_dec(v_a_438_);
lean_dec_ref(v_m_437_);
return v_res_439_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__22(void){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = l_Array_mkArray0___redArg();
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant(lean_object* v_invariantAlts_504_, lean_object* v_n_505_, lean_object* v_mv_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_){
_start:
{
lean_object* v___y_515_; lean_object* v___x_542_; 
v___x_542_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0___redArg(v_invariantAlts_504_, v_n_505_);
if (lean_obj_tag(v___x_542_) == 1)
{
lean_object* v_val_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_614_; 
v_val_543_ = lean_ctor_get(v___x_542_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_614_ == 0)
{
v___x_545_ = v___x_542_;
v_isShared_546_ = v_isSharedCheck_614_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_val_543_);
lean_dec(v___x_542_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_614_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___f_547_; lean_object* v___x_548_; uint8_t v___x_549_; 
v___f_547_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__0));
v___x_548_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__5));
lean_inc(v_val_543_);
v___x_549_ = l_Lean_Syntax_isOfKind(v_val_543_, v___x_548_);
if (v___x_549_ == 0)
{
lean_object* v___x_550_; uint8_t v___x_551_; 
v___x_550_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__7));
lean_inc(v_val_543_);
v___x_551_ = l_Lean_Syntax_isOfKind(v_val_543_, v___x_550_);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; lean_object* v___x_554_; 
lean_dec(v_val_543_);
lean_dec(v_mv_506_);
v___x_552_ = lean_box(v___x_551_);
if (v_isShared_546_ == 0)
{
lean_ctor_set_tag(v___x_545_, 0);
lean_ctor_set(v___x_545_, 0, v___x_552_);
v___x_554_ = v___x_545_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v___x_552_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
else
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; uint8_t v___x_559_; 
v___x_556_ = lean_unsigned_to_nat(1u);
v___x_557_ = l_Lean_Syntax_getArg(v_val_543_, v___x_556_);
v___x_558_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__9));
lean_inc(v___x_557_);
v___x_559_ = l_Lean_Syntax_isOfKind(v___x_557_, v___x_558_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; lean_object* v___x_562_; 
lean_dec(v___x_557_);
lean_dec(v_val_543_);
lean_dec(v_mv_506_);
v___x_560_ = lean_box(v___x_559_);
if (v_isShared_546_ == 0)
{
lean_ctor_set_tag(v___x_545_, 0);
lean_ctor_set(v___x_545_, 0, v___x_560_);
v___x_562_ = v___x_545_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___x_560_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
else
{
lean_object* v_ref_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v_args_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
lean_del_object(v___x_545_);
v_ref_564_ = lean_ctor_get(v_a_511_, 2);
v___x_565_ = l_Lean_Syntax_getArg(v___x_557_, v___x_556_);
lean_dec(v___x_557_);
v___x_566_ = lean_unsigned_to_nat(3u);
v___x_567_ = l_Lean_Syntax_getArg(v_val_543_, v___x_566_);
v_args_568_ = l_Lean_Syntax_getArgs(v___x_565_);
lean_dec(v___x_565_);
v___x_569_ = l_Lean_SourceInfo_fromRef(v_ref_564_, v___x_549_);
v___x_570_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__11));
v___x_571_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__12));
lean_inc_n(v___x_569_, 11);
v___x_572_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_569_);
lean_ctor_set(v___x_572_, 1, v___x_571_);
v___x_573_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__14));
v___x_574_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__16));
v___x_575_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__18));
v___x_576_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__20));
v___x_577_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__21));
v___x_578_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_578_, 0, v___x_569_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
v___x_579_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__22, &l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__22_once, _init_l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__22);
v___x_580_ = l_Array_append___redArg(v___x_579_, v_args_568_);
lean_dec_ref(v_args_568_);
v___x_581_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_581_, 0, v___x_569_);
lean_ctor_set(v___x_581_, 1, v___x_575_);
lean_ctor_set(v___x_581_, 2, v___x_580_);
v___x_582_ = l_Lean_Syntax_node2(v___x_569_, v___x_576_, v___x_578_, v___x_581_);
v___x_583_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__23));
v___x_584_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_569_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
v___x_585_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__24));
v___x_586_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__25));
v___x_587_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_587_, 0, v___x_569_);
lean_ctor_set(v___x_587_, 1, v___x_585_);
v___x_588_ = l_Lean_Syntax_node2(v___x_569_, v___x_586_, v___x_587_, v___x_567_);
v___x_589_ = l_Lean_Syntax_node3(v___x_569_, v___x_575_, v___x_582_, v___x_584_, v___x_588_);
v___x_590_ = l_Lean_Syntax_node1(v___x_569_, v___x_574_, v___x_589_);
v___x_591_ = l_Lean_Syntax_node1(v___x_569_, v___x_573_, v___x_590_);
v___x_592_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__26));
v___x_593_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_569_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___x_594_ = l_Lean_Syntax_node3(v___x_569_, v___x_570_, v___x_572_, v___x_591_, v___x_593_);
v___x_595_ = l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1(v___f_547_, v_mv_506_, v_val_543_, v___x_594_, v_a_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_, v_a_512_);
lean_dec(v_val_543_);
v___y_515_ = v___x_595_;
goto v___jp_514_;
}
}
}
else
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; uint8_t v___x_599_; 
v___x_596_ = lean_unsigned_to_nat(0u);
v___x_597_ = l_Lean_Syntax_getArg(v_val_543_, v___x_596_);
v___x_598_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__28));
v___x_599_ = l_Lean_Syntax_isOfKind(v___x_597_, v___x_598_);
if (v___x_599_ == 0)
{
lean_object* v___x_600_; lean_object* v___x_602_; 
lean_dec(v_val_543_);
lean_dec(v_mv_506_);
v___x_600_ = lean_box(v___x_599_);
if (v_isShared_546_ == 0)
{
lean_ctor_set_tag(v___x_545_, 0);
lean_ctor_set(v___x_545_, 0, v___x_600_);
v___x_602_ = v___x_545_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v___x_600_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
else
{
lean_object* v_ref_604_; lean_object* v___x_605_; lean_object* v___x_606_; uint8_t v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
lean_del_object(v___x_545_);
v_ref_604_ = lean_ctor_get(v_a_511_, 2);
v___x_605_ = lean_unsigned_to_nat(1u);
v___x_606_ = l_Lean_Syntax_getArg(v_val_543_, v___x_605_);
v___x_607_ = 0;
v___x_608_ = l_Lean_SourceInfo_fromRef(v_ref_604_, v___x_607_);
v___x_609_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__24));
v___x_610_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_elabInvariant___closed__25));
lean_inc(v___x_608_);
v___x_611_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_608_);
lean_ctor_set(v___x_611_, 1, v___x_609_);
v___x_612_ = l_Lean_Syntax_node2(v___x_608_, v___x_610_, v___x_611_, v___x_606_);
v___x_613_ = l_Lean_Elab_Tactic_VCGen_elabInvariant___lam__1(v___f_547_, v_mv_506_, v_val_543_, v___x_612_, v_a_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_, v_a_512_);
lean_dec(v_val_543_);
v___y_515_ = v___x_613_;
goto v___jp_514_;
}
}
}
}
else
{
uint8_t v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
lean_dec(v___x_542_);
lean_dec(v_mv_506_);
v___x_615_ = 0;
v___x_616_ = lean_box(v___x_615_);
v___x_617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
return v___x_617_;
}
v___jp_514_:
{
if (lean_obj_tag(v___y_515_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_524_; 
v_a_516_ = lean_ctor_get(v___y_515_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___y_515_);
if (v_isSharedCheck_524_ == 0)
{
v___x_518_ = v___y_515_;
v_isShared_519_ = v_isSharedCheck_524_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___y_515_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_524_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v_a_520_; lean_object* v___x_522_; 
v_a_520_ = lean_ctor_get(v_a_516_, 0);
lean_inc(v_a_520_);
lean_dec(v_a_516_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 0, v_a_520_);
v___x_522_ = v___x_518_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_a_520_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_541_; 
v_a_525_ = lean_ctor_get(v___y_515_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___y_515_);
if (v_isSharedCheck_541_ == 0)
{
v___x_527_ = v___y_515_;
v_isShared_528_ = v_isSharedCheck_541_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___y_515_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_541_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
uint8_t v___x_529_; 
v___x_529_ = l_Lean_Exception_isInterrupt(v_a_525_);
if (v___x_529_ == 0)
{
uint8_t v___x_530_; 
lean_inc(v_a_525_);
v___x_530_ = l_Lean_Exception_isRuntime(v_a_525_);
if (v___x_530_ == 0)
{
lean_object* v___x_531_; lean_object* v___x_533_; 
lean_dec(v_a_525_);
v___x_531_ = lean_box(v___x_530_);
if (v_isShared_528_ == 0)
{
lean_ctor_set_tag(v___x_527_, 0);
lean_ctor_set(v___x_527_, 0, v___x_531_);
v___x_533_ = v___x_527_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v___x_531_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
else
{
lean_object* v___x_536_; 
if (v_isShared_528_ == 0)
{
v___x_536_ = v___x_527_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v_a_525_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
}
else
{
lean_object* v___x_539_; 
if (v_isShared_528_ == 0)
{
v___x_539_ = v___x_527_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_525_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_elabInvariant___boxed(lean_object* v_invariantAlts_618_, lean_object* v_n_619_, lean_object* v_mv_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_Lean_Elab_Tactic_VCGen_elabInvariant(v_invariantAlts_618_, v_n_619_, v_mv_620_, v_a_621_, v_a_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_);
lean_dec(v_a_626_);
lean_dec_ref(v_a_625_);
lean_dec(v_a_624_);
lean_dec_ref(v_a_623_);
lean_dec(v_a_622_);
lean_dec_ref(v_a_621_);
lean_dec(v_n_619_);
lean_dec_ref(v_invariantAlts_618_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0(lean_object* v_00_u03b2_629_, lean_object* v_m_630_, lean_object* v_a_631_){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0___redArg(v_m_630_, v_a_631_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0___boxed(lean_object* v_00_u03b2_633_, lean_object* v_m_634_, lean_object* v_a_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0(v_00_u03b2_633_, v_m_634_, v_a_635_);
lean_dec(v_a_635_);
lean_dec_ref(v_m_634_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1(lean_object* v_mvarId_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1___redArg(v_mvarId_637_, v___y_641_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1___boxed(lean_object* v_mvarId_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1(v_mvarId_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_);
lean_dec(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec(v_mvarId_646_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3(lean_object* v_mvarId_655_, lean_object* v_val_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3___redArg(v_mvarId_655_, v_val_656_, v___y_660_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3___boxed(lean_object* v_mvarId_665_, lean_object* v_val_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3(v_mvarId_665_, v_val_666_, v___y_667_, v___y_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_);
lean_dec(v___y_672_);
lean_dec_ref(v___y_671_);
lean_dec(v___y_670_);
lean_dec_ref(v___y_669_);
lean_dec(v___y_668_);
lean_dec_ref(v___y_667_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0_spec__0(lean_object* v_00_u03b2_675_, lean_object* v_a_676_, lean_object* v_x_677_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0_spec__0___redArg(v_a_676_, v_x_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0_spec__0___boxed(lean_object* v_00_u03b2_679_, lean_object* v_a_680_, lean_object* v_x_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__0_spec__0(v_00_u03b2_679_, v_a_680_, v_x_681_);
lean_dec(v_x_681_);
lean_dec(v_a_680_);
return v_res_682_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2(lean_object* v_00_u03b2_683_, lean_object* v_x_684_, lean_object* v_x_685_){
_start:
{
uint8_t v___x_686_; 
v___x_686_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2___redArg(v_x_684_, v_x_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2___boxed(lean_object* v_00_u03b2_687_, lean_object* v_x_688_, lean_object* v_x_689_){
_start:
{
uint8_t v_res_690_; lean_object* v_r_691_; 
v_res_690_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2(v_00_u03b2_687_, v_x_688_, v_x_689_);
lean_dec(v_x_689_);
lean_dec_ref(v_x_688_);
v_r_691_ = lean_box(v_res_690_);
return v_r_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5(lean_object* v_00_u03b2_692_, lean_object* v_x_693_, lean_object* v_x_694_, lean_object* v_x_695_){
_start:
{
lean_object* v___x_696_; 
v___x_696_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5___redArg(v_x_693_, v_x_694_, v_x_695_);
return v___x_696_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_697_, lean_object* v_x_698_, size_t v_x_699_, lean_object* v_x_700_){
_start:
{
uint8_t v___x_701_; 
v___x_701_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg(v_x_698_, v_x_699_, v_x_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_702_, lean_object* v_x_703_, lean_object* v_x_704_, lean_object* v_x_705_){
_start:
{
size_t v_x_15590__boxed_706_; uint8_t v_res_707_; lean_object* v_r_708_; 
v_x_15590__boxed_706_ = lean_unbox_usize(v_x_704_);
lean_dec(v_x_704_);
v_res_707_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4(v_00_u03b2_702_, v_x_703_, v_x_15590__boxed_706_, v_x_705_);
lean_dec(v_x_705_);
lean_dec_ref(v_x_703_);
v_r_708_ = lean_box(v_res_707_);
return v_r_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7(lean_object* v_00_u03b2_709_, lean_object* v_x_710_, size_t v_x_711_, size_t v_x_712_, lean_object* v_x_713_, lean_object* v_x_714_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(v_x_710_, v_x_711_, v_x_712_, v_x_713_, v_x_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7___boxed(lean_object* v_00_u03b2_716_, lean_object* v_x_717_, lean_object* v_x_718_, lean_object* v_x_719_, lean_object* v_x_720_, lean_object* v_x_721_){
_start:
{
size_t v_x_15601__boxed_722_; size_t v_x_15602__boxed_723_; lean_object* v_res_724_; 
v_x_15601__boxed_722_ = lean_unbox_usize(v_x_718_);
lean_dec(v_x_718_);
v_x_15602__boxed_723_ = lean_unbox_usize(v_x_719_);
lean_dec(v_x_719_);
v_res_724_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7(v_00_u03b2_716_, v_x_717_, v_x_15601__boxed_722_, v_x_15602__boxed_723_, v_x_720_, v_x_721_);
return v_res_724_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_725_, lean_object* v_keys_726_, lean_object* v_vals_727_, lean_object* v_heq_728_, lean_object* v_i_729_, lean_object* v_k_730_){
_start:
{
uint8_t v___x_731_; 
v___x_731_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg(v_keys_726_, v_i_729_, v_k_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___boxed(lean_object* v_00_u03b2_732_, lean_object* v_keys_733_, lean_object* v_vals_734_, lean_object* v_heq_735_, lean_object* v_i_736_, lean_object* v_k_737_){
_start:
{
uint8_t v_res_738_; lean_object* v_r_739_; 
v_res_738_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6(v_00_u03b2_732_, v_keys_733_, v_vals_734_, v_heq_735_, v_i_736_, v_k_737_);
lean_dec(v_k_737_);
lean_dec_ref(v_vals_734_);
lean_dec_ref(v_keys_733_);
v_r_739_ = lean_box(v_res_738_);
return v_r_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9(lean_object* v_00_u03b2_740_, lean_object* v_n_741_, lean_object* v_k_742_, lean_object* v_v_743_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9___redArg(v_n_741_, v_k_742_, v_v_743_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10(lean_object* v_00_u03b2_745_, size_t v_depth_746_, lean_object* v_keys_747_, lean_object* v_vals_748_, lean_object* v_heq_749_, lean_object* v_i_750_, lean_object* v_entries_751_){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg(v_depth_746_, v_keys_747_, v_vals_748_, v_i_750_, v_entries_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___boxed(lean_object* v_00_u03b2_753_, lean_object* v_depth_754_, lean_object* v_keys_755_, lean_object* v_vals_756_, lean_object* v_heq_757_, lean_object* v_i_758_, lean_object* v_entries_759_){
_start:
{
size_t v_depth_boxed_760_; lean_object* v_res_761_; 
v_depth_boxed_760_ = lean_unbox_usize(v_depth_754_);
lean_dec(v_depth_754_);
v_res_761_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10(v_00_u03b2_753_, v_depth_boxed_760_, v_keys_755_, v_vals_756_, v_heq_757_, v_i_758_, v_entries_759_);
lean_dec_ref(v_vals_756_);
lean_dec_ref(v_keys_755_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10(lean_object* v_00_u03b2_762_, lean_object* v_x_763_, lean_object* v_x_764_, lean_object* v_x_765_, lean_object* v_x_766_){
_start:
{
lean_object* v___x_767_; 
v___x_767_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(v_x_763_, v_x_764_, v_x_765_, v_x_766_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_768_, lean_object* v_x_769_){
_start:
{
if (lean_obj_tag(v_x_769_) == 0)
{
return v_x_768_;
}
else
{
lean_object* v_key_770_; lean_object* v_value_771_; lean_object* v_tail_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_795_; 
v_key_770_ = lean_ctor_get(v_x_769_, 0);
v_value_771_ = lean_ctor_get(v_x_769_, 1);
v_tail_772_ = lean_ctor_get(v_x_769_, 2);
v_isSharedCheck_795_ = !lean_is_exclusive(v_x_769_);
if (v_isSharedCheck_795_ == 0)
{
v___x_774_ = v_x_769_;
v_isShared_775_ = v_isSharedCheck_795_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_tail_772_);
lean_inc(v_value_771_);
lean_inc(v_key_770_);
lean_dec(v_x_769_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_795_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_776_; uint64_t v___x_777_; uint64_t v___x_778_; uint64_t v___x_779_; uint64_t v_fold_780_; uint64_t v___x_781_; uint64_t v___x_782_; uint64_t v___x_783_; size_t v___x_784_; size_t v___x_785_; size_t v___x_786_; size_t v___x_787_; size_t v___x_788_; lean_object* v___x_789_; lean_object* v___x_791_; 
v___x_776_ = lean_array_get_size(v_x_768_);
v___x_777_ = lean_uint64_of_nat(v_key_770_);
v___x_778_ = 32ULL;
v___x_779_ = lean_uint64_shift_right(v___x_777_, v___x_778_);
v_fold_780_ = lean_uint64_xor(v___x_777_, v___x_779_);
v___x_781_ = 16ULL;
v___x_782_ = lean_uint64_shift_right(v_fold_780_, v___x_781_);
v___x_783_ = lean_uint64_xor(v_fold_780_, v___x_782_);
v___x_784_ = lean_uint64_to_usize(v___x_783_);
v___x_785_ = lean_usize_of_nat(v___x_776_);
v___x_786_ = ((size_t)1ULL);
v___x_787_ = lean_usize_sub(v___x_785_, v___x_786_);
v___x_788_ = lean_usize_land(v___x_784_, v___x_787_);
v___x_789_ = lean_array_uget_borrowed(v_x_768_, v___x_788_);
lean_inc(v___x_789_);
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 2, v___x_789_);
v___x_791_ = v___x_774_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_key_770_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v_value_771_);
lean_ctor_set(v_reuseFailAlloc_794_, 2, v___x_789_);
v___x_791_ = v_reuseFailAlloc_794_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
lean_object* v___x_792_; 
v___x_792_ = lean_array_uset(v_x_768_, v___x_788_, v___x_791_);
v_x_768_ = v___x_792_;
v_x_769_ = v_tail_772_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(lean_object* v_i_796_, lean_object* v_source_797_, lean_object* v_target_798_){
_start:
{
lean_object* v___x_799_; uint8_t v___x_800_; 
v___x_799_ = lean_array_get_size(v_source_797_);
v___x_800_ = lean_nat_dec_lt(v_i_796_, v___x_799_);
if (v___x_800_ == 0)
{
lean_dec_ref(v_source_797_);
lean_dec(v_i_796_);
return v_target_798_;
}
else
{
lean_object* v_es_801_; lean_object* v___x_802_; lean_object* v_source_803_; lean_object* v_target_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v_es_801_ = lean_array_fget(v_source_797_, v_i_796_);
v___x_802_ = lean_box(0);
v_source_803_ = lean_array_fset(v_source_797_, v_i_796_, v___x_802_);
v_target_804_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(v_target_798_, v_es_801_);
v___x_805_ = lean_unsigned_to_nat(1u);
v___x_806_ = lean_nat_add(v_i_796_, v___x_805_);
lean_dec(v_i_796_);
v_i_796_ = v___x_806_;
v_source_797_ = v_source_803_;
v_target_798_ = v_target_804_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(lean_object* v_data_808_){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v_nbuckets_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_809_ = lean_array_get_size(v_data_808_);
v___x_810_ = lean_unsigned_to_nat(2u);
v_nbuckets_811_ = lean_nat_mul(v___x_809_, v___x_810_);
v___x_812_ = lean_unsigned_to_nat(0u);
v___x_813_ = lean_box(0);
v___x_814_ = lean_mk_array(v_nbuckets_811_, v___x_813_);
v___x_815_ = lean_array_propagate_mark(v_data_808_, v___x_814_);
v___x_816_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(v___x_812_, v_data_808_, v___x_815_);
return v___x_816_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(lean_object* v_a_817_, lean_object* v_x_818_){
_start:
{
if (lean_obj_tag(v_x_818_) == 0)
{
uint8_t v___x_819_; 
v___x_819_ = 0;
return v___x_819_;
}
else
{
lean_object* v_key_820_; lean_object* v_tail_821_; uint8_t v___x_822_; 
v_key_820_ = lean_ctor_get(v_x_818_, 0);
v_tail_821_ = lean_ctor_get(v_x_818_, 2);
v___x_822_ = lean_nat_dec_eq(v_key_820_, v_a_817_);
if (v___x_822_ == 0)
{
v_x_818_ = v_tail_821_;
goto _start;
}
else
{
return v___x_822_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg___boxed(lean_object* v_a_824_, lean_object* v_x_825_){
_start:
{
uint8_t v_res_826_; lean_object* v_r_827_; 
v_res_826_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(v_a_824_, v_x_825_);
lean_dec(v_x_825_);
lean_dec(v_a_824_);
v_r_827_ = lean_box(v_res_826_);
return v_r_827_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0___redArg(lean_object* v_m_828_, lean_object* v_a_829_, lean_object* v_b_830_){
_start:
{
lean_object* v_size_831_; lean_object* v_buckets_832_; lean_object* v___x_833_; uint64_t v___x_834_; uint64_t v___x_835_; uint64_t v___x_836_; uint64_t v_fold_837_; uint64_t v___x_838_; uint64_t v___x_839_; uint64_t v___x_840_; size_t v___x_841_; size_t v___x_842_; size_t v___x_843_; size_t v___x_844_; size_t v___x_845_; lean_object* v_bkt_846_; uint8_t v___x_847_; 
v_size_831_ = lean_ctor_get(v_m_828_, 0);
v_buckets_832_ = lean_ctor_get(v_m_828_, 1);
v___x_833_ = lean_array_get_size(v_buckets_832_);
v___x_834_ = lean_uint64_of_nat(v_a_829_);
v___x_835_ = 32ULL;
v___x_836_ = lean_uint64_shift_right(v___x_834_, v___x_835_);
v_fold_837_ = lean_uint64_xor(v___x_834_, v___x_836_);
v___x_838_ = 16ULL;
v___x_839_ = lean_uint64_shift_right(v_fold_837_, v___x_838_);
v___x_840_ = lean_uint64_xor(v_fold_837_, v___x_839_);
v___x_841_ = lean_uint64_to_usize(v___x_840_);
v___x_842_ = lean_usize_of_nat(v___x_833_);
v___x_843_ = ((size_t)1ULL);
v___x_844_ = lean_usize_sub(v___x_842_, v___x_843_);
v___x_845_ = lean_usize_land(v___x_841_, v___x_844_);
v_bkt_846_ = lean_array_uget_borrowed(v_buckets_832_, v___x_845_);
v___x_847_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(v_a_829_, v_bkt_846_);
if (v___x_847_ == 0)
{
lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_868_; 
lean_inc_ref(v_buckets_832_);
lean_inc(v_size_831_);
v_isSharedCheck_868_ = !lean_is_exclusive(v_m_828_);
if (v_isSharedCheck_868_ == 0)
{
lean_object* v_unused_869_; lean_object* v_unused_870_; 
v_unused_869_ = lean_ctor_get(v_m_828_, 1);
lean_dec(v_unused_869_);
v_unused_870_ = lean_ctor_get(v_m_828_, 0);
lean_dec(v_unused_870_);
v___x_849_ = v_m_828_;
v_isShared_850_ = v_isSharedCheck_868_;
goto v_resetjp_848_;
}
else
{
lean_dec(v_m_828_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_868_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_851_; lean_object* v_size_x27_852_; lean_object* v___x_853_; lean_object* v_buckets_x27_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; uint8_t v___x_860_; 
v___x_851_ = lean_unsigned_to_nat(1u);
v_size_x27_852_ = lean_nat_add(v_size_831_, v___x_851_);
lean_dec(v_size_831_);
lean_inc(v_bkt_846_);
v___x_853_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_853_, 0, v_a_829_);
lean_ctor_set(v___x_853_, 1, v_b_830_);
lean_ctor_set(v___x_853_, 2, v_bkt_846_);
v_buckets_x27_854_ = lean_array_uset(v_buckets_832_, v___x_845_, v___x_853_);
v___x_855_ = lean_unsigned_to_nat(4u);
v___x_856_ = lean_nat_mul(v_size_x27_852_, v___x_855_);
v___x_857_ = lean_unsigned_to_nat(3u);
v___x_858_ = lean_nat_div(v___x_856_, v___x_857_);
lean_dec(v___x_856_);
v___x_859_ = lean_array_get_size(v_buckets_x27_854_);
v___x_860_ = lean_nat_dec_le(v___x_858_, v___x_859_);
lean_dec(v___x_858_);
if (v___x_860_ == 0)
{
lean_object* v_val_861_; lean_object* v___x_863_; 
v_val_861_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(v_buckets_x27_854_);
if (v_isShared_850_ == 0)
{
lean_ctor_set(v___x_849_, 1, v_val_861_);
lean_ctor_set(v___x_849_, 0, v_size_x27_852_);
v___x_863_ = v___x_849_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_size_x27_852_);
lean_ctor_set(v_reuseFailAlloc_864_, 1, v_val_861_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
else
{
lean_object* v___x_866_; 
if (v_isShared_850_ == 0)
{
lean_ctor_set(v___x_849_, 1, v_buckets_x27_854_);
lean_ctor_set(v___x_849_, 0, v_size_x27_852_);
v___x_866_ = v___x_849_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_size_x27_852_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v_buckets_x27_854_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
}
}
else
{
lean_dec(v_b_830_);
lean_dec(v_a_829_);
return v_m_828_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__1___redArg(lean_object* v___x_871_, lean_object* v_as_x27_872_, lean_object* v_b_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_){
_start:
{
if (lean_obj_tag(v_as_x27_872_) == 0)
{
lean_object* v___x_883_; 
lean_dec_ref(v___x_871_);
v___x_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_883_, 0, v_b_873_);
return v___x_883_;
}
else
{
lean_object* v_head_884_; lean_object* v_tail_885_; lean_object* v___x_886_; 
v_head_884_ = lean_ctor_get(v_as_x27_872_, 0);
v_tail_885_ = lean_ctor_get(v_as_x27_872_, 1);
lean_inc(v_head_884_);
v___x_886_ = l_Lean_MVarId_getType(v_head_884_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v_a_887_; uint8_t v___x_888_; 
v_a_887_ = lean_ctor_get(v___x_886_, 0);
lean_inc(v_a_887_);
lean_dec_ref_known(v___x_886_, 1);
lean_inc_ref(v___x_871_);
v___x_888_ = l_Lean_Elab_Tactic_Do_SpecAttr_isSpecInvariantType(v___x_871_, v_a_887_);
lean_dec(v_a_887_);
if (v___x_888_ == 0)
{
lean_object* v___x_889_; 
lean_inc(v_head_884_);
v___x_889_ = lean_array_push(v_b_873_, v_head_884_);
v_as_x27_872_ = v_tail_885_;
v_b_873_ = v___x_889_;
goto _start;
}
else
{
lean_object* v___x_891_; lean_object* v_invariants_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v_specBackwardRuleCache_897_; lean_object* v_splitBackwardRuleCache_898_; lean_object* v_latticeBackwardRuleCache_899_; lean_object* v_frameBackwardRuleCache_900_; lean_object* v_rintroBackwardRuleCache_901_; lean_object* v_frameDB_902_; lean_object* v_invariants_903_; lean_object* v_vcs_904_; lean_object* v_simpState_905_; lean_object* v_fuel_906_; lean_object* v_inlineHandledInvariants_907_; lean_object* v_pendingJoinPoints_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_964_; 
v___x_891_ = lean_st_ref_get(v___y_875_);
v_invariants_892_ = lean_ctor_get(v___x_891_, 6);
lean_inc_ref(v_invariants_892_);
lean_dec(v___x_891_);
v___x_893_ = lean_array_get_size(v_invariants_892_);
lean_dec_ref(v_invariants_892_);
v___x_894_ = lean_unsigned_to_nat(1u);
v___x_895_ = lean_nat_add(v___x_893_, v___x_894_);
v___x_896_ = lean_st_ref_take(v___y_875_);
v_specBackwardRuleCache_897_ = lean_ctor_get(v___x_896_, 0);
v_splitBackwardRuleCache_898_ = lean_ctor_get(v___x_896_, 1);
v_latticeBackwardRuleCache_899_ = lean_ctor_get(v___x_896_, 2);
v_frameBackwardRuleCache_900_ = lean_ctor_get(v___x_896_, 3);
v_rintroBackwardRuleCache_901_ = lean_ctor_get(v___x_896_, 4);
v_frameDB_902_ = lean_ctor_get(v___x_896_, 5);
v_invariants_903_ = lean_ctor_get(v___x_896_, 6);
v_vcs_904_ = lean_ctor_get(v___x_896_, 7);
v_simpState_905_ = lean_ctor_get(v___x_896_, 8);
v_fuel_906_ = lean_ctor_get(v___x_896_, 9);
v_inlineHandledInvariants_907_ = lean_ctor_get(v___x_896_, 10);
v_pendingJoinPoints_908_ = lean_ctor_get(v___x_896_, 11);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_964_ == 0)
{
v___x_910_ = v___x_896_;
v_isShared_911_ = v_isSharedCheck_964_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_pendingJoinPoints_908_);
lean_inc(v_inlineHandledInvariants_907_);
lean_inc(v_fuel_906_);
lean_inc(v_simpState_905_);
lean_inc(v_vcs_904_);
lean_inc(v_invariants_903_);
lean_inc(v_frameDB_902_);
lean_inc(v_rintroBackwardRuleCache_901_);
lean_inc(v_frameBackwardRuleCache_900_);
lean_inc(v_latticeBackwardRuleCache_899_);
lean_inc(v_splitBackwardRuleCache_898_);
lean_inc(v_specBackwardRuleCache_897_);
lean_dec(v___x_896_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_964_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_912_; lean_object* v___x_914_; 
lean_inc(v_head_884_);
v___x_912_ = lean_array_push(v_invariants_903_, v_head_884_);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 6, v___x_912_);
v___x_914_ = v___x_910_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_specBackwardRuleCache_897_);
lean_ctor_set(v_reuseFailAlloc_963_, 1, v_splitBackwardRuleCache_898_);
lean_ctor_set(v_reuseFailAlloc_963_, 2, v_latticeBackwardRuleCache_899_);
lean_ctor_set(v_reuseFailAlloc_963_, 3, v_frameBackwardRuleCache_900_);
lean_ctor_set(v_reuseFailAlloc_963_, 4, v_rintroBackwardRuleCache_901_);
lean_ctor_set(v_reuseFailAlloc_963_, 5, v_frameDB_902_);
lean_ctor_set(v_reuseFailAlloc_963_, 6, v___x_912_);
lean_ctor_set(v_reuseFailAlloc_963_, 7, v_vcs_904_);
lean_ctor_set(v_reuseFailAlloc_963_, 8, v_simpState_905_);
lean_ctor_set(v_reuseFailAlloc_963_, 9, v_fuel_906_);
lean_ctor_set(v_reuseFailAlloc_963_, 10, v_inlineHandledInvariants_907_);
lean_ctor_set(v_reuseFailAlloc_963_, 11, v_pendingJoinPoints_908_);
v___x_914_ = v_reuseFailAlloc_963_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
lean_object* v___x_915_; lean_object* v_invariantAlts_916_; lean_object* v___x_917_; 
v___x_915_ = lean_st_ref_put(v___y_875_, v___x_914_);
v_invariantAlts_916_ = lean_ctor_get(v___y_874_, 4);
lean_inc(v_head_884_);
v___x_917_ = l_Lean_Elab_Tactic_VCGen_elabInvariant(v_invariantAlts_916_, v___x_895_, v_head_884_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; uint8_t v___x_919_; 
v_a_918_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_918_);
lean_dec_ref_known(v___x_917_, 1);
v___x_919_ = lean_unbox(v_a_918_);
lean_dec(v_a_918_);
if (v___x_919_ == 0)
{
uint8_t v___x_920_; lean_object* v___x_921_; 
lean_dec(v___x_895_);
v___x_920_ = 2;
lean_inc(v_head_884_);
v___x_921_ = l_Lean_MVarId_setKind___redArg(v_head_884_, v___x_920_, v___y_879_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_dec_ref_known(v___x_921_, 1);
v_as_x27_872_ = v_tail_885_;
goto _start;
}
else
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
lean_dec_ref(v_b_873_);
lean_dec_ref(v___x_871_);
v_a_923_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_921_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_921_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
else
{
lean_object* v___x_931_; lean_object* v_specBackwardRuleCache_932_; lean_object* v_splitBackwardRuleCache_933_; lean_object* v_latticeBackwardRuleCache_934_; lean_object* v_frameBackwardRuleCache_935_; lean_object* v_rintroBackwardRuleCache_936_; lean_object* v_frameDB_937_; lean_object* v_invariants_938_; lean_object* v_vcs_939_; lean_object* v_simpState_940_; lean_object* v_fuel_941_; lean_object* v_inlineHandledInvariants_942_; lean_object* v_pendingJoinPoints_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_954_; 
v___x_931_ = lean_st_ref_take(v___y_875_);
v_specBackwardRuleCache_932_ = lean_ctor_get(v___x_931_, 0);
v_splitBackwardRuleCache_933_ = lean_ctor_get(v___x_931_, 1);
v_latticeBackwardRuleCache_934_ = lean_ctor_get(v___x_931_, 2);
v_frameBackwardRuleCache_935_ = lean_ctor_get(v___x_931_, 3);
v_rintroBackwardRuleCache_936_ = lean_ctor_get(v___x_931_, 4);
v_frameDB_937_ = lean_ctor_get(v___x_931_, 5);
v_invariants_938_ = lean_ctor_get(v___x_931_, 6);
v_vcs_939_ = lean_ctor_get(v___x_931_, 7);
v_simpState_940_ = lean_ctor_get(v___x_931_, 8);
v_fuel_941_ = lean_ctor_get(v___x_931_, 9);
v_inlineHandledInvariants_942_ = lean_ctor_get(v___x_931_, 10);
v_pendingJoinPoints_943_ = lean_ctor_get(v___x_931_, 11);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_954_ == 0)
{
v___x_945_ = v___x_931_;
v_isShared_946_ = v_isSharedCheck_954_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_pendingJoinPoints_943_);
lean_inc(v_inlineHandledInvariants_942_);
lean_inc(v_fuel_941_);
lean_inc(v_simpState_940_);
lean_inc(v_vcs_939_);
lean_inc(v_invariants_938_);
lean_inc(v_frameDB_937_);
lean_inc(v_rintroBackwardRuleCache_936_);
lean_inc(v_frameBackwardRuleCache_935_);
lean_inc(v_latticeBackwardRuleCache_934_);
lean_inc(v_splitBackwardRuleCache_933_);
lean_inc(v_specBackwardRuleCache_932_);
lean_dec(v___x_931_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_954_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_950_; 
v___x_947_ = lean_box(0);
v___x_948_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0___redArg(v_inlineHandledInvariants_942_, v___x_895_, v___x_947_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 10, v___x_948_);
v___x_950_ = v___x_945_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_specBackwardRuleCache_932_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v_splitBackwardRuleCache_933_);
lean_ctor_set(v_reuseFailAlloc_953_, 2, v_latticeBackwardRuleCache_934_);
lean_ctor_set(v_reuseFailAlloc_953_, 3, v_frameBackwardRuleCache_935_);
lean_ctor_set(v_reuseFailAlloc_953_, 4, v_rintroBackwardRuleCache_936_);
lean_ctor_set(v_reuseFailAlloc_953_, 5, v_frameDB_937_);
lean_ctor_set(v_reuseFailAlloc_953_, 6, v_invariants_938_);
lean_ctor_set(v_reuseFailAlloc_953_, 7, v_vcs_939_);
lean_ctor_set(v_reuseFailAlloc_953_, 8, v_simpState_940_);
lean_ctor_set(v_reuseFailAlloc_953_, 9, v_fuel_941_);
lean_ctor_set(v_reuseFailAlloc_953_, 10, v___x_948_);
lean_ctor_set(v_reuseFailAlloc_953_, 11, v_pendingJoinPoints_943_);
v___x_950_ = v_reuseFailAlloc_953_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
lean_object* v___x_951_; 
v___x_951_ = lean_st_ref_put(v___y_875_, v___x_950_);
v_as_x27_872_ = v_tail_885_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_962_; 
lean_dec(v___x_895_);
lean_dec_ref(v_b_873_);
lean_dec_ref(v___x_871_);
v_a_955_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_962_ == 0)
{
v___x_957_ = v___x_917_;
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_917_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_960_; 
if (v_isShared_958_ == 0)
{
v___x_960_ = v___x_957_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_a_955_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_972_; 
lean_dec_ref(v_b_873_);
lean_dec_ref(v___x_871_);
v_a_965_ = lean_ctor_get(v___x_886_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_972_ == 0)
{
v___x_967_ = v___x_886_;
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_886_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
if (v_isShared_968_ == 0)
{
v___x_970_ = v___x_967_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_a_965_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__1___redArg___boxed(lean_object* v___x_973_, lean_object* v_as_x27_974_, lean_object* v_b_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__1___redArg(v___x_973_, v_as_x27_974_, v_b_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_);
lean_dec(v___y_983_);
lean_dec_ref(v___y_982_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
lean_dec(v___y_979_);
lean_dec_ref(v___y_978_);
lean_dec(v___y_977_);
lean_dec_ref(v___y_976_);
lean_dec(v_as_x27_974_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals(lean_object* v_subgoals_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_){
_start:
{
lean_object* v___x_1001_; lean_object* v_env_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1001_ = lean_st_ref_get(v_a_999_);
v_env_1002_ = lean_ctor_get(v___x_1001_, 0);
lean_inc_ref(v_env_1002_);
lean_dec(v___x_1001_);
v___x_1003_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals___closed__0));
v___x_1004_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__1___redArg(v_env_1002_, v_subgoals_988_, v___x_1003_, v_a_989_, v_a_990_, v_a_994_, v_a_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals___boxed(lean_object* v_subgoals_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals(v_subgoals_1005_, v_a_1006_, v_a_1007_, v_a_1008_, v_a_1009_, v_a_1010_, v_a_1011_, v_a_1012_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
lean_dec(v_a_1016_);
lean_dec_ref(v_a_1015_);
lean_dec(v_a_1014_);
lean_dec_ref(v_a_1013_);
lean_dec(v_a_1012_);
lean_dec_ref(v_a_1011_);
lean_dec(v_a_1010_);
lean_dec_ref(v_a_1009_);
lean_dec(v_a_1008_);
lean_dec(v_a_1007_);
lean_dec_ref(v_a_1006_);
lean_dec(v_subgoals_1005_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0(lean_object* v_00_u03b2_1019_, lean_object* v_m_1020_, lean_object* v_a_1021_, lean_object* v_b_1022_){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0___redArg(v_m_1020_, v_a_1021_, v_b_1022_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__1(lean_object* v___x_1024_, lean_object* v_as_1025_, lean_object* v_as_x27_1026_, lean_object* v_b_1027_, lean_object* v_a_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_){
_start:
{
lean_object* v___x_1041_; 
v___x_1041_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__1___redArg(v___x_1024_, v_as_x27_1026_, v_b_1027_, v___y_1029_, v___y_1030_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__1___boxed(lean_object** _args){
lean_object* v___x_1042_ = _args[0];
lean_object* v_as_1043_ = _args[1];
lean_object* v_as_x27_1044_ = _args[2];
lean_object* v_b_1045_ = _args[3];
lean_object* v_a_1046_ = _args[4];
lean_object* v___y_1047_ = _args[5];
lean_object* v___y_1048_ = _args[6];
lean_object* v___y_1049_ = _args[7];
lean_object* v___y_1050_ = _args[8];
lean_object* v___y_1051_ = _args[9];
lean_object* v___y_1052_ = _args[10];
lean_object* v___y_1053_ = _args[11];
lean_object* v___y_1054_ = _args[12];
lean_object* v___y_1055_ = _args[13];
lean_object* v___y_1056_ = _args[14];
lean_object* v___y_1057_ = _args[15];
lean_object* v___y_1058_ = _args[16];
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__1(v___x_1042_, v_as_1043_, v_as_x27_1044_, v_b_1045_, v_a_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
lean_dec(v___y_1057_);
lean_dec_ref(v___y_1056_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
lean_dec(v___y_1049_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec(v_as_x27_1044_);
lean_dec(v_as_1043_);
return v_res_1059_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__0(lean_object* v_00_u03b2_1060_, lean_object* v_a_1061_, lean_object* v_x_1062_){
_start:
{
uint8_t v___x_1063_; 
v___x_1063_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(v_a_1061_, v_x_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1064_, lean_object* v_a_1065_, lean_object* v_x_1066_){
_start:
{
uint8_t v_res_1067_; lean_object* v_r_1068_; 
v_res_1067_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__0(v_00_u03b2_1064_, v_a_1065_, v_x_1066_);
lean_dec(v_x_1066_);
lean_dec(v_a_1065_);
v_r_1068_ = lean_box(v_res_1067_);
return v_r_1068_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1(lean_object* v_00_u03b2_1069_, lean_object* v_data_1070_){
_start:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(v_data_1070_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1072_, lean_object* v_i_1073_, lean_object* v_source_1074_, lean_object* v_target_1075_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(v_i_1073_, v_source_1074_, v_target_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1077_, lean_object* v_x_1078_, lean_object* v_x_1079_){
_start:
{
lean_object* v___x_1080_; 
v___x_1080_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(v_x_1078_, v_x_1079_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0___redArg___lam__0(lean_object* v_x_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_){
_start:
{
lean_object* v___x_1094_; 
lean_inc(v___y_1088_);
lean_inc_ref(v___y_1087_);
lean_inc(v___y_1086_);
lean_inc_ref(v___y_1085_);
lean_inc(v___y_1084_);
lean_inc(v___y_1083_);
lean_inc_ref(v___y_1082_);
v___x_1094_ = lean_apply_12(v_x_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, lean_box(0));
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0___redArg___lam__0___boxed(lean_object* v_x_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0___redArg___lam__0(v_x_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
lean_dec(v___y_1102_);
lean_dec_ref(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec(v___y_1097_);
lean_dec_ref(v___y_1096_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0___redArg(lean_object* v_mvarId_1109_, lean_object* v_x_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v___f_1123_; lean_object* v___x_1124_; 
lean_inc(v___y_1117_);
lean_inc_ref(v___y_1116_);
lean_inc(v___y_1115_);
lean_inc_ref(v___y_1114_);
lean_inc(v___y_1113_);
lean_inc(v___y_1112_);
lean_inc_ref(v___y_1111_);
v___f_1123_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_1123_, 0, v_x_1110_);
lean_closure_set(v___f_1123_, 1, v___y_1111_);
lean_closure_set(v___f_1123_, 2, v___y_1112_);
lean_closure_set(v___f_1123_, 3, v___y_1113_);
lean_closure_set(v___f_1123_, 4, v___y_1114_);
lean_closure_set(v___f_1123_, 5, v___y_1115_);
lean_closure_set(v___f_1123_, 6, v___y_1116_);
lean_closure_set(v___f_1123_, 7, v___y_1117_);
v___x_1124_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1109_, v___f_1123_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
if (lean_obj_tag(v___x_1124_) == 0)
{
return v___x_1124_;
}
else
{
lean_object* v_a_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1132_; 
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1132_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1127_ = v___x_1124_;
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_a_1125_);
lean_dec(v___x_1124_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_a_1125_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0___redArg___boxed(lean_object* v_mvarId_1133_, lean_object* v_x_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0___redArg(v_mvarId_1133_, v_x_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec(v___y_1137_);
lean_dec(v___y_1136_);
lean_dec_ref(v___y_1135_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0(lean_object* v_00_u03b1_1148_, lean_object* v_mvarId_1149_, lean_object* v_x_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_){
_start:
{
lean_object* v___x_1163_; 
v___x_1163_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0___redArg(v_mvarId_1149_, v_x_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0___boxed(lean_object* v_00_u03b1_1164_, lean_object* v_mvarId_1165_, lean_object* v_x_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_){
_start:
{
lean_object* v_res_1179_; 
v_res_1179_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0(v_00_u03b1_1164_, v_mvarId_1165_, v_x_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
lean_dec(v___y_1177_);
lean_dec_ref(v___y_1176_);
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
lean_dec(v___y_1173_);
lean_dec_ref(v___y_1172_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec(v___y_1169_);
lean_dec(v___y_1168_);
lean_dec_ref(v___y_1167_);
return v_res_1179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC___lam__0(lean_object* v_goal_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_){
_start:
{
lean_object* v_simpMethods_1193_; 
v_simpMethods_1193_ = lean_ctor_get(v___y_1181_, 3);
if (lean_obj_tag(v_simpMethods_1193_) == 1)
{
lean_object* v_val_1194_; lean_object* v___x_1195_; 
v_val_1194_ = lean_ctor_get(v_simpMethods_1193_, 0);
lean_inc(v_goal_1180_);
v___x_1195_ = l_Lean_MVarId_getType(v_goal_1180_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_);
if (lean_obj_tag(v___x_1195_) == 0)
{
lean_object* v_a_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v_a_1196_ = lean_ctor_get(v___x_1195_, 0);
lean_inc(v_a_1196_);
lean_dec_ref_known(v___x_1195_, 1);
v___x_1197_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_1197_, 0, v_a_1196_);
lean_inc(v_val_1194_);
v___x_1198_ = l_Lean_Elab_Tactic_VCGen_runSimp___redArg(v_val_1194_, v___x_1197_, v___y_1182_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_);
if (lean_obj_tag(v___x_1198_) == 0)
{
lean_object* v_a_1199_; lean_object* v___x_1200_; 
v_a_1199_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_a_1199_);
lean_dec_ref_known(v___x_1198_, 1);
v___x_1200_ = l_Lean_Meta_Sym_Simp_Result_toSimpGoalResult(v_a_1199_, v_goal_1180_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_);
return v___x_1200_;
}
else
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1208_; 
lean_dec(v_goal_1180_);
v_a_1201_ = lean_ctor_get(v___x_1198_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1203_ = v___x_1198_;
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1198_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1206_; 
if (v_isShared_1204_ == 0)
{
v___x_1206_ = v___x_1203_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_a_1201_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
lean_dec(v_goal_1180_);
v_a_1209_ = lean_ctor_get(v___x_1195_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1195_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1195_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1195_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1214_; 
if (v_isShared_1212_ == 0)
{
v___x_1214_ = v___x_1211_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_a_1209_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
}
else
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
lean_dec(v_goal_1180_);
v___x_1217_ = lean_box(0);
v___x_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
return v___x_1218_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC___lam__0___boxed(lean_object* v_goal_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC___lam__0(v_goal_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_);
lean_dec(v___y_1230_);
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1228_);
lean_dec_ref(v___y_1227_);
lean_dec(v___y_1226_);
lean_dec_ref(v___y_1225_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec(v___y_1221_);
lean_dec_ref(v___y_1220_);
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC(lean_object* v_goal_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_){
_start:
{
lean_object* v___f_1246_; lean_object* v___x_1247_; 
lean_inc(v_goal_1233_);
v___f_1246_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC___lam__0___boxed), 13, 1);
lean_closure_set(v___f_1246_, 0, v_goal_1233_);
v___x_1247_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC_spec__0___redArg(v_goal_1233_, v___f_1246_, v_a_1234_, v_a_1235_, v_a_1236_, v_a_1237_, v_a_1238_, v_a_1239_, v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_, v_a_1244_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC___boxed(lean_object* v_goal_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC(v_goal_1248_, v_a_1249_, v_a_1250_, v_a_1251_, v_a_1252_, v_a_1253_, v_a_1254_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_);
lean_dec(v_a_1259_);
lean_dec_ref(v_a_1258_);
lean_dec(v_a_1257_);
lean_dec_ref(v_a_1256_);
lean_dec(v_a_1255_);
lean_dec_ref(v_a_1254_);
lean_dec(v_a_1253_);
lean_dec_ref(v_a_1252_);
lean_dec(v_a_1251_);
lean_dec(v_a_1250_);
lean_dec_ref(v_a_1249_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_emitVC(lean_object* v_goal_1262_, lean_object* v_reason_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_){
_start:
{
lean_object* v_goal_1277_; lean_object* v___y_1278_; lean_object* v___y_1279_; lean_object* v___y_1280_; lean_object* v___y_1281_; lean_object* v___y_1282_; lean_object* v___y_1283_; lean_object* v___y_1284_; lean_object* v___y_1285_; lean_object* v___y_1286_; lean_object* v___y_1287_; lean_object* v___y_1288_; lean_object* v_goal_1371_; lean_object* v_toGoalState_1372_; lean_object* v_mvarId_1373_; lean_object* v___y_1374_; lean_object* v___y_1375_; lean_object* v___y_1376_; lean_object* v___y_1377_; lean_object* v___y_1378_; lean_object* v___y_1379_; lean_object* v___y_1380_; lean_object* v___y_1381_; lean_object* v___y_1382_; lean_object* v___y_1383_; lean_object* v___y_1384_; lean_object* v_toGoalState_1405_; lean_object* v_mvarId_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1458_; 
v_toGoalState_1405_ = lean_ctor_get(v_goal_1262_, 0);
v_mvarId_1406_ = lean_ctor_get(v_goal_1262_, 1);
v_isSharedCheck_1458_ = !lean_is_exclusive(v_goal_1262_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1408_ = v_goal_1262_;
v_isShared_1409_ = v_isSharedCheck_1458_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_mvarId_1406_);
lean_inc(v_toGoalState_1405_);
lean_dec(v_goal_1262_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1458_;
goto v_resetjp_1407_;
}
v___jp_1276_:
{
lean_object* v___x_1289_; 
v___x_1289_ = l_Lean_Elab_Tactic_VCGen_processHypotheses___redArg(v_goal_1277_, v___y_1278_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1361_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1361_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1292_ = v___x_1289_;
v_isShared_1293_ = v_isSharedCheck_1361_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1289_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1361_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v_toGoalState_1294_; uint8_t v_inconsistent_1295_; 
v_toGoalState_1294_ = lean_ctor_get(v_a_1290_, 0);
lean_inc_ref(v_toGoalState_1294_);
v_inconsistent_1295_ = lean_ctor_get_uint8(v_toGoalState_1294_, sizeof(void*)*20 + 8);
if (v_inconsistent_1295_ == 0)
{
lean_object* v_mvarId_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1355_; 
lean_del_object(v___x_1292_);
v_mvarId_1296_ = lean_ctor_get(v_a_1290_, 1);
v_isSharedCheck_1355_ = !lean_is_exclusive(v_a_1290_);
if (v_isSharedCheck_1355_ == 0)
{
lean_object* v_unused_1356_; 
v_unused_1356_ = lean_ctor_get(v_a_1290_, 0);
lean_dec(v_unused_1356_);
v___x_1298_ = v_a_1290_;
v_isShared_1299_ = v_isSharedCheck_1355_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_mvarId_1296_);
lean_dec(v_a_1290_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1355_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1300_; 
v___x_1300_ = l_Lean_Elab_Tactic_VCGen_cleanupVC(v_mvarId_1296_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_);
if (lean_obj_tag(v___x_1300_) == 0)
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1346_; 
v_a_1301_ = lean_ctor_get(v___x_1300_, 0);
v_isSharedCheck_1346_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1346_ == 0)
{
v___x_1303_ = v___x_1300_;
v_isShared_1304_ = v_isSharedCheck_1346_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v___x_1300_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1346_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
if (lean_obj_tag(v_a_1301_) == 1)
{
lean_object* v_val_1305_; uint8_t v___x_1306_; lean_object* v___x_1307_; 
lean_del_object(v___x_1303_);
v_val_1305_ = lean_ctor_get(v_a_1301_, 0);
lean_inc_n(v_val_1305_, 2);
lean_dec_ref_known(v_a_1301_, 1);
v___x_1306_ = 2;
v___x_1307_ = l_Lean_MVarId_setKind___redArg(v_val_1305_, v___x_1306_, v___y_1286_);
if (lean_obj_tag(v___x_1307_) == 0)
{
lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1340_; 
v_isSharedCheck_1340_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1340_ == 0)
{
lean_object* v_unused_1341_; 
v_unused_1341_ = lean_ctor_get(v___x_1307_, 0);
lean_dec(v_unused_1341_);
v___x_1309_ = v___x_1307_;
v_isShared_1310_ = v_isSharedCheck_1340_;
goto v_resetjp_1308_;
}
else
{
lean_dec(v___x_1307_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1340_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1311_; lean_object* v_specBackwardRuleCache_1312_; lean_object* v_splitBackwardRuleCache_1313_; lean_object* v_latticeBackwardRuleCache_1314_; lean_object* v_frameBackwardRuleCache_1315_; lean_object* v_rintroBackwardRuleCache_1316_; lean_object* v_frameDB_1317_; lean_object* v_invariants_1318_; lean_object* v_vcs_1319_; lean_object* v_simpState_1320_; lean_object* v_fuel_1321_; lean_object* v_inlineHandledInvariants_1322_; lean_object* v_pendingJoinPoints_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1339_; 
v___x_1311_ = lean_st_ref_take(v___y_1279_);
v_specBackwardRuleCache_1312_ = lean_ctor_get(v___x_1311_, 0);
v_splitBackwardRuleCache_1313_ = lean_ctor_get(v___x_1311_, 1);
v_latticeBackwardRuleCache_1314_ = lean_ctor_get(v___x_1311_, 2);
v_frameBackwardRuleCache_1315_ = lean_ctor_get(v___x_1311_, 3);
v_rintroBackwardRuleCache_1316_ = lean_ctor_get(v___x_1311_, 4);
v_frameDB_1317_ = lean_ctor_get(v___x_1311_, 5);
v_invariants_1318_ = lean_ctor_get(v___x_1311_, 6);
v_vcs_1319_ = lean_ctor_get(v___x_1311_, 7);
v_simpState_1320_ = lean_ctor_get(v___x_1311_, 8);
v_fuel_1321_ = lean_ctor_get(v___x_1311_, 9);
v_inlineHandledInvariants_1322_ = lean_ctor_get(v___x_1311_, 10);
v_pendingJoinPoints_1323_ = lean_ctor_get(v___x_1311_, 11);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1325_ = v___x_1311_;
v_isShared_1326_ = v_isSharedCheck_1339_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_pendingJoinPoints_1323_);
lean_inc(v_inlineHandledInvariants_1322_);
lean_inc(v_fuel_1321_);
lean_inc(v_simpState_1320_);
lean_inc(v_vcs_1319_);
lean_inc(v_invariants_1318_);
lean_inc(v_frameDB_1317_);
lean_inc(v_rintroBackwardRuleCache_1316_);
lean_inc(v_frameBackwardRuleCache_1315_);
lean_inc(v_latticeBackwardRuleCache_1314_);
lean_inc(v_splitBackwardRuleCache_1313_);
lean_inc(v_specBackwardRuleCache_1312_);
lean_dec(v___x_1311_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1339_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1327_; lean_object* v___x_1329_; 
v___x_1327_ = lean_box(0);
if (v_isShared_1299_ == 0)
{
lean_ctor_set(v___x_1298_, 1, v_val_1305_);
v___x_1329_ = v___x_1298_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_toGoalState_1294_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v_val_1305_);
v___x_1329_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
lean_object* v___x_1330_; lean_object* v___x_1332_; 
v___x_1330_ = lean_array_push(v_vcs_1319_, v___x_1329_);
if (v_isShared_1326_ == 0)
{
lean_ctor_set(v___x_1325_, 7, v___x_1330_);
v___x_1332_ = v___x_1325_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v_specBackwardRuleCache_1312_);
lean_ctor_set(v_reuseFailAlloc_1337_, 1, v_splitBackwardRuleCache_1313_);
lean_ctor_set(v_reuseFailAlloc_1337_, 2, v_latticeBackwardRuleCache_1314_);
lean_ctor_set(v_reuseFailAlloc_1337_, 3, v_frameBackwardRuleCache_1315_);
lean_ctor_set(v_reuseFailAlloc_1337_, 4, v_rintroBackwardRuleCache_1316_);
lean_ctor_set(v_reuseFailAlloc_1337_, 5, v_frameDB_1317_);
lean_ctor_set(v_reuseFailAlloc_1337_, 6, v_invariants_1318_);
lean_ctor_set(v_reuseFailAlloc_1337_, 7, v___x_1330_);
lean_ctor_set(v_reuseFailAlloc_1337_, 8, v_simpState_1320_);
lean_ctor_set(v_reuseFailAlloc_1337_, 9, v_fuel_1321_);
lean_ctor_set(v_reuseFailAlloc_1337_, 10, v_inlineHandledInvariants_1322_);
lean_ctor_set(v_reuseFailAlloc_1337_, 11, v_pendingJoinPoints_1323_);
v___x_1332_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
lean_object* v___x_1333_; lean_object* v___x_1335_; 
v___x_1333_ = lean_st_ref_put(v___y_1279_, v___x_1332_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 0, v___x_1327_);
v___x_1335_ = v___x_1309_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v___x_1327_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
}
}
}
}
else
{
lean_dec(v_val_1305_);
lean_del_object(v___x_1298_);
lean_dec_ref(v_toGoalState_1294_);
return v___x_1307_;
}
}
else
{
lean_object* v___x_1342_; lean_object* v___x_1344_; 
lean_dec(v_a_1301_);
lean_del_object(v___x_1298_);
lean_dec_ref(v_toGoalState_1294_);
v___x_1342_ = lean_box(0);
if (v_isShared_1304_ == 0)
{
lean_ctor_set(v___x_1303_, 0, v___x_1342_);
v___x_1344_ = v___x_1303_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v___x_1342_);
v___x_1344_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
return v___x_1344_;
}
}
}
}
else
{
lean_object* v_a_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1354_; 
lean_del_object(v___x_1298_);
lean_dec_ref(v_toGoalState_1294_);
v_a_1347_ = lean_ctor_get(v___x_1300_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1349_ = v___x_1300_;
v_isShared_1350_ = v_isSharedCheck_1354_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_a_1347_);
lean_dec(v___x_1300_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1354_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
lean_object* v___x_1352_; 
if (v_isShared_1350_ == 0)
{
v___x_1352_ = v___x_1349_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_a_1347_);
v___x_1352_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
return v___x_1352_;
}
}
}
}
}
else
{
lean_object* v___x_1357_; lean_object* v___x_1359_; 
lean_dec_ref(v_toGoalState_1294_);
lean_dec(v_a_1290_);
v___x_1357_ = lean_box(0);
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 0, v___x_1357_);
v___x_1359_ = v___x_1292_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v___x_1357_);
v___x_1359_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
return v___x_1359_;
}
}
}
}
else
{
lean_object* v_a_1362_; lean_object* v___x_1364_; uint8_t v_isShared_1365_; uint8_t v_isSharedCheck_1369_; 
v_a_1362_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1369_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1369_ == 0)
{
v___x_1364_ = v___x_1289_;
v_isShared_1365_ = v_isSharedCheck_1369_;
goto v_resetjp_1363_;
}
else
{
lean_inc(v_a_1362_);
lean_dec(v___x_1289_);
v___x_1364_ = lean_box(0);
v_isShared_1365_ = v_isSharedCheck_1369_;
goto v_resetjp_1363_;
}
v_resetjp_1363_:
{
lean_object* v___x_1367_; 
if (v_isShared_1365_ == 0)
{
v___x_1367_ = v___x_1364_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v_a_1362_);
v___x_1367_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
return v___x_1367_;
}
}
}
}
v___jp_1370_:
{
lean_object* v___x_1385_; 
v___x_1385_ = l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_simpVC(v_mvarId_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1396_; 
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1388_ = v___x_1385_;
v_isShared_1389_ = v_isSharedCheck_1396_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1385_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1396_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
switch(lean_obj_tag(v_a_1386_))
{
case 0:
{
lean_del_object(v___x_1388_);
lean_dec_ref(v_toGoalState_1372_);
v_goal_1277_ = v_goal_1371_;
v___y_1278_ = v___y_1374_;
v___y_1279_ = v___y_1375_;
v___y_1280_ = v___y_1376_;
v___y_1281_ = v___y_1377_;
v___y_1282_ = v___y_1378_;
v___y_1283_ = v___y_1379_;
v___y_1284_ = v___y_1380_;
v___y_1285_ = v___y_1381_;
v___y_1286_ = v___y_1382_;
v___y_1287_ = v___y_1383_;
v___y_1288_ = v___y_1384_;
goto v___jp_1276_;
}
case 1:
{
lean_object* v___x_1390_; lean_object* v___x_1392_; 
lean_dec_ref(v_toGoalState_1372_);
lean_dec_ref(v_goal_1371_);
v___x_1390_ = lean_box(0);
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 0, v___x_1390_);
v___x_1392_ = v___x_1388_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v___x_1390_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
default: 
{
lean_object* v_mvarId_1394_; lean_object* v___x_1395_; 
lean_del_object(v___x_1388_);
lean_dec_ref(v_goal_1371_);
v_mvarId_1394_ = lean_ctor_get(v_a_1386_, 0);
lean_inc(v_mvarId_1394_);
lean_dec_ref_known(v_a_1386_, 1);
v___x_1395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1395_, 0, v_toGoalState_1372_);
lean_ctor_set(v___x_1395_, 1, v_mvarId_1394_);
v_goal_1277_ = v___x_1395_;
v___y_1278_ = v___y_1374_;
v___y_1279_ = v___y_1375_;
v___y_1280_ = v___y_1376_;
v___y_1281_ = v___y_1377_;
v___y_1282_ = v___y_1378_;
v___y_1283_ = v___y_1379_;
v___y_1284_ = v___y_1380_;
v___y_1285_ = v___y_1381_;
v___y_1286_ = v___y_1382_;
v___y_1287_ = v___y_1383_;
v___y_1288_ = v___y_1384_;
goto v___jp_1276_;
}
}
}
}
else
{
lean_object* v_a_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1404_; 
lean_dec_ref(v_toGoalState_1372_);
lean_dec_ref(v_goal_1371_);
v_a_1397_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1399_ = v___x_1385_;
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_a_1397_);
lean_dec(v___x_1385_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1402_; 
if (v_isShared_1400_ == 0)
{
v___x_1402_ = v___x_1399_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v_a_1397_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
return v___x_1402_;
}
}
}
}
v_resetjp_1407_:
{
lean_object* v___x_1410_; 
v___x_1410_ = l_Lean_Elab_Tactic_VCGen_elimTopPre___redArg(v_mvarId_1406_, v_a_1264_, v_a_1269_, v_a_1270_, v_a_1271_, v_a_1272_, v_a_1273_, v_a_1274_);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v_a_1411_; lean_object* v___x_1413_; 
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
lean_inc_n(v_a_1411_, 2);
lean_dec_ref_known(v___x_1410_, 1);
lean_inc_ref(v_toGoalState_1405_);
if (v_isShared_1409_ == 0)
{
lean_ctor_set(v___x_1408_, 1, v_a_1411_);
v___x_1413_ = v___x_1408_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_toGoalState_1405_);
lean_ctor_set(v_reuseFailAlloc_1449_, 1, v_a_1411_);
v___x_1413_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
switch(lean_obj_tag(v_reason_1263_))
{
case 2:
{
goto v___jp_1414_;
}
case 3:
{
goto v___jp_1414_;
}
default: 
{
lean_dec(v_a_1411_);
lean_dec_ref(v_toGoalState_1405_);
v_goal_1277_ = v___x_1413_;
v___y_1278_ = v_a_1264_;
v___y_1279_ = v_a_1265_;
v___y_1280_ = v_a_1266_;
v___y_1281_ = v_a_1267_;
v___y_1282_ = v_a_1268_;
v___y_1283_ = v_a_1269_;
v___y_1284_ = v_a_1270_;
v___y_1285_ = v_a_1271_;
v___y_1286_ = v_a_1272_;
v___y_1287_ = v_a_1273_;
v___y_1288_ = v_a_1274_;
goto v___jp_1276_;
}
}
v___jp_1414_:
{
lean_object* v___x_1415_; 
lean_inc(v_a_1411_);
v___x_1415_ = l_Lean_MVarId_getType(v_a_1411_, v_a_1271_, v_a_1272_, v_a_1273_, v_a_1274_);
if (lean_obj_tag(v___x_1415_) == 0)
{
lean_object* v_a_1416_; lean_object* v___x_1417_; 
v_a_1416_ = lean_ctor_get(v___x_1415_, 0);
lean_inc_n(v_a_1416_, 2);
lean_dec_ref_known(v___x_1415_, 1);
v___x_1417_ = l_Lean_Meta_Sym_instantiateMVarsS(v_a_1416_, v_a_1269_, v_a_1270_, v_a_1271_, v_a_1272_, v_a_1273_, v_a_1274_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v_a_1418_; size_t v___x_1419_; size_t v___x_1420_; uint8_t v___x_1421_; 
v_a_1418_ = lean_ctor_get(v___x_1417_, 0);
lean_inc(v_a_1418_);
lean_dec_ref_known(v___x_1417_, 1);
v___x_1419_ = lean_ptr_addr(v_a_1416_);
lean_dec(v_a_1416_);
v___x_1420_ = lean_ptr_addr(v_a_1418_);
v___x_1421_ = lean_usize_dec_eq(v___x_1419_, v___x_1420_);
if (v___x_1421_ == 0)
{
lean_object* v___x_1422_; 
lean_dec_ref(v___x_1413_);
v___x_1422_ = l_Lean_MVarId_replaceTargetDefEqFast(v_a_1411_, v_a_1418_, v_a_1271_, v_a_1272_, v_a_1273_, v_a_1274_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; lean_object* v___x_1424_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc_n(v_a_1423_, 2);
lean_dec_ref_known(v___x_1422_, 1);
lean_inc_ref(v_toGoalState_1405_);
v___x_1424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1424_, 0, v_toGoalState_1405_);
lean_ctor_set(v___x_1424_, 1, v_a_1423_);
v_goal_1371_ = v___x_1424_;
v_toGoalState_1372_ = v_toGoalState_1405_;
v_mvarId_1373_ = v_a_1423_;
v___y_1374_ = v_a_1264_;
v___y_1375_ = v_a_1265_;
v___y_1376_ = v_a_1266_;
v___y_1377_ = v_a_1267_;
v___y_1378_ = v_a_1268_;
v___y_1379_ = v_a_1269_;
v___y_1380_ = v_a_1270_;
v___y_1381_ = v_a_1271_;
v___y_1382_ = v_a_1272_;
v___y_1383_ = v_a_1273_;
v___y_1384_ = v_a_1274_;
goto v___jp_1370_;
}
else
{
lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1432_; 
lean_dec_ref(v_toGoalState_1405_);
v_a_1425_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1432_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1432_ == 0)
{
v___x_1427_ = v___x_1422_;
v_isShared_1428_ = v_isSharedCheck_1432_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1422_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1432_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v___x_1430_; 
if (v_isShared_1428_ == 0)
{
v___x_1430_ = v___x_1427_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v_a_1425_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
}
}
}
}
else
{
lean_dec(v_a_1418_);
v_goal_1371_ = v___x_1413_;
v_toGoalState_1372_ = v_toGoalState_1405_;
v_mvarId_1373_ = v_a_1411_;
v___y_1374_ = v_a_1264_;
v___y_1375_ = v_a_1265_;
v___y_1376_ = v_a_1266_;
v___y_1377_ = v_a_1267_;
v___y_1378_ = v_a_1268_;
v___y_1379_ = v_a_1269_;
v___y_1380_ = v_a_1270_;
v___y_1381_ = v_a_1271_;
v___y_1382_ = v_a_1272_;
v___y_1383_ = v_a_1273_;
v___y_1384_ = v_a_1274_;
goto v___jp_1370_;
}
}
else
{
lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1440_; 
lean_dec(v_a_1416_);
lean_dec_ref(v___x_1413_);
lean_dec(v_a_1411_);
lean_dec_ref(v_toGoalState_1405_);
v_a_1433_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1435_ = v___x_1417_;
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_dec(v___x_1417_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1438_; 
if (v_isShared_1436_ == 0)
{
v___x_1438_ = v___x_1435_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_a_1433_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
}
else
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1448_; 
lean_dec_ref(v___x_1413_);
lean_dec(v_a_1411_);
lean_dec_ref(v_toGoalState_1405_);
v_a_1441_ = lean_ctor_get(v___x_1415_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1415_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1443_ = v___x_1415_;
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1415_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1448_;
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
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_a_1441_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
}
}
}
else
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
lean_del_object(v___x_1408_);
lean_dec_ref(v_toGoalState_1405_);
v_a_1450_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1410_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1410_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_emitVC___boxed(lean_object* v_goal_1459_, lean_object* v_reason_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_){
_start:
{
lean_object* v_res_1473_; 
v_res_1473_ = l_Lean_Elab_Tactic_VCGen_emitVC(v_goal_1459_, v_reason_1460_, v_a_1461_, v_a_1462_, v_a_1463_, v_a_1464_, v_a_1465_, v_a_1466_, v_a_1467_, v_a_1468_, v_a_1469_, v_a_1470_, v_a_1471_);
lean_dec(v_a_1471_);
lean_dec_ref(v_a_1470_);
lean_dec(v_a_1469_);
lean_dec_ref(v_a_1468_);
lean_dec(v_a_1467_);
lean_dec_ref(v_a_1466_);
lean_dec(v_a_1465_);
lean_dec_ref(v_a_1464_);
lean_dec(v_a_1463_);
lean_dec(v_a_1462_);
lean_dec_ref(v_a_1461_);
lean_dec(v_reason_1460_);
return v_res_1473_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__4___redArg(lean_object* v_a_1474_, lean_object* v_x_1475_){
_start:
{
if (lean_obj_tag(v_x_1475_) == 0)
{
uint8_t v___x_1476_; 
v___x_1476_ = 0;
return v___x_1476_;
}
else
{
lean_object* v_key_1477_; lean_object* v_tail_1478_; uint8_t v___x_1479_; 
v_key_1477_ = lean_ctor_get(v_x_1475_, 0);
v_tail_1478_ = lean_ctor_get(v_x_1475_, 2);
v___x_1479_ = l_Lean_instBEqMVarId_beq(v_key_1477_, v_a_1474_);
if (v___x_1479_ == 0)
{
v_x_1475_ = v_tail_1478_;
goto _start;
}
else
{
return v___x_1479_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__4___redArg___boxed(lean_object* v_a_1481_, lean_object* v_x_1482_){
_start:
{
uint8_t v_res_1483_; lean_object* v_r_1484_; 
v_res_1483_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__4___redArg(v_a_1481_, v_x_1482_);
lean_dec(v_x_1482_);
lean_dec(v_a_1481_);
v_r_1484_ = lean_box(v_res_1483_);
return v_r_1484_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__5___redArg(lean_object* v_a_1485_, lean_object* v_x_1486_){
_start:
{
if (lean_obj_tag(v_x_1486_) == 0)
{
return v_x_1486_;
}
else
{
lean_object* v_key_1487_; lean_object* v_value_1488_; lean_object* v_tail_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1498_; 
v_key_1487_ = lean_ctor_get(v_x_1486_, 0);
v_value_1488_ = lean_ctor_get(v_x_1486_, 1);
v_tail_1489_ = lean_ctor_get(v_x_1486_, 2);
v_isSharedCheck_1498_ = !lean_is_exclusive(v_x_1486_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1491_ = v_x_1486_;
v_isShared_1492_ = v_isSharedCheck_1498_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_tail_1489_);
lean_inc(v_value_1488_);
lean_inc(v_key_1487_);
lean_dec(v_x_1486_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1498_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
uint8_t v___x_1493_; 
v___x_1493_ = l_Lean_instBEqMVarId_beq(v_key_1487_, v_a_1485_);
if (v___x_1493_ == 0)
{
lean_object* v___x_1494_; lean_object* v___x_1496_; 
v___x_1494_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__5___redArg(v_a_1485_, v_tail_1489_);
if (v_isShared_1492_ == 0)
{
lean_ctor_set(v___x_1491_, 2, v___x_1494_);
v___x_1496_ = v___x_1491_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_key_1487_);
lean_ctor_set(v_reuseFailAlloc_1497_, 1, v_value_1488_);
lean_ctor_set(v_reuseFailAlloc_1497_, 2, v___x_1494_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
else
{
lean_del_object(v___x_1491_);
lean_dec(v_value_1488_);
lean_dec(v_key_1487_);
return v_tail_1489_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__5___redArg___boxed(lean_object* v_a_1499_, lean_object* v_x_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__5___redArg(v_a_1499_, v_x_1500_);
lean_dec(v_a_1499_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3___redArg(lean_object* v_m_1502_, lean_object* v_a_1503_){
_start:
{
lean_object* v_size_1504_; lean_object* v_buckets_1505_; lean_object* v___x_1506_; uint64_t v___x_1507_; uint64_t v___x_1508_; uint64_t v___x_1509_; uint64_t v_fold_1510_; uint64_t v___x_1511_; uint64_t v___x_1512_; uint64_t v___x_1513_; size_t v___x_1514_; size_t v___x_1515_; size_t v___x_1516_; size_t v___x_1517_; size_t v___x_1518_; lean_object* v_bkt_1519_; uint8_t v___x_1520_; 
v_size_1504_ = lean_ctor_get(v_m_1502_, 0);
v_buckets_1505_ = lean_ctor_get(v_m_1502_, 1);
v___x_1506_ = lean_array_get_size(v_buckets_1505_);
v___x_1507_ = l_Lean_instHashableMVarId_hash(v_a_1503_);
v___x_1508_ = 32ULL;
v___x_1509_ = lean_uint64_shift_right(v___x_1507_, v___x_1508_);
v_fold_1510_ = lean_uint64_xor(v___x_1507_, v___x_1509_);
v___x_1511_ = 16ULL;
v___x_1512_ = lean_uint64_shift_right(v_fold_1510_, v___x_1511_);
v___x_1513_ = lean_uint64_xor(v_fold_1510_, v___x_1512_);
v___x_1514_ = lean_uint64_to_usize(v___x_1513_);
v___x_1515_ = lean_usize_of_nat(v___x_1506_);
v___x_1516_ = ((size_t)1ULL);
v___x_1517_ = lean_usize_sub(v___x_1515_, v___x_1516_);
v___x_1518_ = lean_usize_land(v___x_1514_, v___x_1517_);
v_bkt_1519_ = lean_array_uget_borrowed(v_buckets_1505_, v___x_1518_);
v___x_1520_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__4___redArg(v_a_1503_, v_bkt_1519_);
if (v___x_1520_ == 0)
{
return v_m_1502_;
}
else
{
lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1533_; 
lean_inc(v_bkt_1519_);
lean_inc_ref(v_buckets_1505_);
lean_inc(v_size_1504_);
v_isSharedCheck_1533_ = !lean_is_exclusive(v_m_1502_);
if (v_isSharedCheck_1533_ == 0)
{
lean_object* v_unused_1534_; lean_object* v_unused_1535_; 
v_unused_1534_ = lean_ctor_get(v_m_1502_, 1);
lean_dec(v_unused_1534_);
v_unused_1535_ = lean_ctor_get(v_m_1502_, 0);
lean_dec(v_unused_1535_);
v___x_1522_ = v_m_1502_;
v_isShared_1523_ = v_isSharedCheck_1533_;
goto v_resetjp_1521_;
}
else
{
lean_dec(v_m_1502_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1533_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1524_; lean_object* v_buckets_x27_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1531_; 
v___x_1524_ = lean_box(0);
v_buckets_x27_1525_ = lean_array_uset(v_buckets_1505_, v___x_1518_, v___x_1524_);
v___x_1526_ = lean_unsigned_to_nat(1u);
v___x_1527_ = lean_nat_sub(v_size_1504_, v___x_1526_);
lean_dec(v_size_1504_);
v___x_1528_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__5___redArg(v_a_1503_, v_bkt_1519_);
v___x_1529_ = lean_array_uset(v_buckets_x27_1525_, v___x_1518_, v___x_1528_);
if (v_isShared_1523_ == 0)
{
lean_ctor_set(v___x_1522_, 1, v___x_1529_);
lean_ctor_set(v___x_1522_, 0, v___x_1527_);
v___x_1531_ = v___x_1522_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v___x_1527_);
lean_ctor_set(v_reuseFailAlloc_1532_, 1, v___x_1529_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
return v___x_1531_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3___redArg___boxed(lean_object* v_m_1536_, lean_object* v_a_1537_){
_start:
{
lean_object* v_res_1538_; 
v_res_1538_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3___redArg(v_m_1536_, v_a_1537_);
lean_dec(v_a_1537_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_work_spec__1___redArg(lean_object* v_mvarId_1539_, lean_object* v___y_1540_){
_start:
{
lean_object* v___x_1542_; lean_object* v_mctx_1543_; lean_object* v_eAssignment_1544_; uint8_t v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___x_1542_ = lean_st_ref_get(v___y_1540_);
v_mctx_1543_ = lean_ctor_get(v___x_1542_, 0);
lean_inc_ref(v_mctx_1543_);
lean_dec(v___x_1542_);
v_eAssignment_1544_ = lean_ctor_get(v_mctx_1543_, 8);
lean_inc_ref(v_eAssignment_1544_);
lean_dec_ref(v_mctx_1543_);
v___x_1545_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2___redArg(v_eAssignment_1544_, v_mvarId_1539_);
lean_dec_ref(v_eAssignment_1544_);
v___x_1546_ = lean_box(v___x_1545_);
v___x_1547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1546_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_work_spec__1___redArg___boxed(lean_object* v_mvarId_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_work_spec__1___redArg(v_mvarId_1548_, v___y_1549_);
lean_dec(v___y_1549_);
lean_dec(v_mvarId_1548_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2_spec__2___redArg(lean_object* v_a_1552_, lean_object* v_x_1553_){
_start:
{
if (lean_obj_tag(v_x_1553_) == 0)
{
lean_object* v___x_1554_; 
v___x_1554_ = lean_box(0);
return v___x_1554_;
}
else
{
lean_object* v_key_1555_; lean_object* v_value_1556_; lean_object* v_tail_1557_; uint8_t v___x_1558_; 
v_key_1555_ = lean_ctor_get(v_x_1553_, 0);
v_value_1556_ = lean_ctor_get(v_x_1553_, 1);
v_tail_1557_ = lean_ctor_get(v_x_1553_, 2);
v___x_1558_ = l_Lean_instBEqMVarId_beq(v_key_1555_, v_a_1552_);
if (v___x_1558_ == 0)
{
v_x_1553_ = v_tail_1557_;
goto _start;
}
else
{
lean_object* v___x_1560_; 
lean_inc(v_value_1556_);
v___x_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1560_, 0, v_value_1556_);
return v___x_1560_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2_spec__2___redArg___boxed(lean_object* v_a_1561_, lean_object* v_x_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2_spec__2___redArg(v_a_1561_, v_x_1562_);
lean_dec(v_x_1562_);
lean_dec(v_a_1561_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2___redArg(lean_object* v_m_1564_, lean_object* v_a_1565_){
_start:
{
lean_object* v_buckets_1566_; lean_object* v___x_1567_; uint64_t v___x_1568_; uint64_t v___x_1569_; uint64_t v___x_1570_; uint64_t v_fold_1571_; uint64_t v___x_1572_; uint64_t v___x_1573_; uint64_t v___x_1574_; size_t v___x_1575_; size_t v___x_1576_; size_t v___x_1577_; size_t v___x_1578_; size_t v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
v_buckets_1566_ = lean_ctor_get(v_m_1564_, 1);
v___x_1567_ = lean_array_get_size(v_buckets_1566_);
v___x_1568_ = l_Lean_instHashableMVarId_hash(v_a_1565_);
v___x_1569_ = 32ULL;
v___x_1570_ = lean_uint64_shift_right(v___x_1568_, v___x_1569_);
v_fold_1571_ = lean_uint64_xor(v___x_1568_, v___x_1570_);
v___x_1572_ = 16ULL;
v___x_1573_ = lean_uint64_shift_right(v_fold_1571_, v___x_1572_);
v___x_1574_ = lean_uint64_xor(v_fold_1571_, v___x_1573_);
v___x_1575_ = lean_uint64_to_usize(v___x_1574_);
v___x_1576_ = lean_usize_of_nat(v___x_1567_);
v___x_1577_ = ((size_t)1ULL);
v___x_1578_ = lean_usize_sub(v___x_1576_, v___x_1577_);
v___x_1579_ = lean_usize_land(v___x_1575_, v___x_1578_);
v___x_1580_ = lean_array_uget_borrowed(v_buckets_1566_, v___x_1579_);
v___x_1581_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2_spec__2___redArg(v_a_1565_, v___x_1580_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2___redArg___boxed(lean_object* v_m_1582_, lean_object* v_a_1583_){
_start:
{
lean_object* v_res_1584_; 
v_res_1584_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2___redArg(v_m_1582_, v_a_1583_);
lean_dec(v_a_1583_);
lean_dec_ref(v_m_1582_);
return v_res_1584_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_work_spec__0(lean_object* v___x_1585_, lean_object* v_scope_1586_, size_t v_sz_1587_, size_t v_i_1588_, lean_object* v_bs_1589_){
_start:
{
uint8_t v___x_1590_; 
v___x_1590_ = lean_usize_dec_lt(v_i_1588_, v_sz_1587_);
if (v___x_1590_ == 0)
{
lean_dec_ref(v_scope_1586_);
lean_dec_ref(v___x_1585_);
return v_bs_1589_;
}
else
{
lean_object* v_v_1591_; lean_object* v___x_1592_; lean_object* v_bs_x27_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; size_t v___x_1596_; size_t v___x_1597_; lean_object* v___x_1598_; 
v_v_1591_ = lean_array_uget(v_bs_1589_, v_i_1588_);
v___x_1592_ = lean_unsigned_to_nat(0u);
v_bs_x27_1593_ = lean_array_uset(v_bs_1589_, v_i_1588_, v___x_1592_);
lean_inc_ref(v___x_1585_);
v___x_1594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1594_, 0, v___x_1585_);
lean_ctor_set(v___x_1594_, 1, v_v_1591_);
lean_inc_ref(v_scope_1586_);
v___x_1595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1594_);
lean_ctor_set(v___x_1595_, 1, v_scope_1586_);
v___x_1596_ = ((size_t)1ULL);
v___x_1597_ = lean_usize_add(v_i_1588_, v___x_1596_);
v___x_1598_ = lean_array_uset(v_bs_x27_1593_, v_i_1588_, v___x_1595_);
v_i_1588_ = v___x_1597_;
v_bs_1589_ = v___x_1598_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_work_spec__0___boxed(lean_object* v___x_1600_, lean_object* v_scope_1601_, lean_object* v_sz_1602_, lean_object* v_i_1603_, lean_object* v_bs_1604_){
_start:
{
size_t v_sz_boxed_1605_; size_t v_i_boxed_1606_; lean_object* v_res_1607_; 
v_sz_boxed_1605_ = lean_unbox_usize(v_sz_1602_);
lean_dec(v_sz_1602_);
v_i_boxed_1606_ = lean_unbox_usize(v_i_1603_);
lean_dec(v_i_1603_);
v_res_1607_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_work_spec__0(v___x_1600_, v_scope_1601_, v_sz_boxed_1605_, v_i_boxed_1606_, v_bs_1604_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___redArg___lam__0(lean_object* v_goal_1608_, lean_object* v_scope_1609_, lean_object* v___x_1610_, lean_object* v_____r_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_){
_start:
{
lean_object* v___x_1624_; 
v___x_1624_ = l_Lean_Elab_Tactic_VCGen_processHypotheses___redArg(v_goal_1608_, v___y_1612_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_);
if (lean_obj_tag(v___x_1624_) == 0)
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1696_; 
v_a_1625_ = lean_ctor_get(v___x_1624_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1624_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1627_ = v___x_1624_;
v_isShared_1628_ = v_isSharedCheck_1696_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1624_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1696_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v_toGoalState_1629_; uint8_t v_inconsistent_1630_; 
v_toGoalState_1629_ = lean_ctor_get(v_a_1625_, 0);
v_inconsistent_1630_ = lean_ctor_get_uint8(v_toGoalState_1629_, sizeof(void*)*20 + 8);
if (v_inconsistent_1630_ == 0)
{
lean_object* v_mvarId_1631_; lean_object* v___x_1632_; 
lean_del_object(v___x_1627_);
v_mvarId_1631_ = lean_ctor_get(v_a_1625_, 1);
lean_inc(v_mvarId_1631_);
v___x_1632_ = l_Lean_Elab_Tactic_VCGen_solve(v_scope_1609_, v_mvarId_1631_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_);
if (lean_obj_tag(v___x_1632_) == 0)
{
lean_object* v_a_1633_; 
v_a_1633_ = lean_ctor_get(v___x_1632_, 0);
lean_inc(v_a_1633_);
lean_dec_ref_known(v___x_1632_, 1);
if (lean_obj_tag(v_a_1633_) == 0)
{
lean_object* v_scope_1634_; lean_object* v_subgoals_1635_; lean_object* v___x_1636_; 
lean_inc_ref(v_toGoalState_1629_);
lean_dec(v_a_1625_);
v_scope_1634_ = lean_ctor_get(v_a_1633_, 0);
lean_inc_ref(v_scope_1634_);
v_subgoals_1635_ = lean_ctor_get(v_a_1633_, 1);
lean_inc(v_subgoals_1635_);
lean_dec_ref_known(v_a_1633_, 2);
v___x_1636_ = l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals(v_subgoals_1635_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_);
lean_dec(v_subgoals_1635_);
if (lean_obj_tag(v___x_1636_) == 0)
{
lean_object* v_a_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1650_; 
v_a_1637_ = lean_ctor_get(v___x_1636_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1636_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1639_ = v___x_1636_;
v_isShared_1640_ = v_isSharedCheck_1650_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_a_1637_);
lean_dec(v___x_1636_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1650_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1641_; size_t v_sz_1642_; size_t v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1648_; 
v___x_1641_ = l_Array_reverse___redArg(v_a_1637_);
v_sz_1642_ = lean_array_size(v___x_1641_);
v___x_1643_ = ((size_t)0ULL);
v___x_1644_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_work_spec__0(v_toGoalState_1629_, v_scope_1634_, v_sz_1642_, v___x_1643_, v___x_1641_);
v___x_1645_ = l_Array_append___redArg(v___x_1610_, v___x_1644_);
lean_dec_ref(v___x_1644_);
v___x_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1646_, 0, v___x_1645_);
if (v_isShared_1640_ == 0)
{
lean_ctor_set(v___x_1639_, 0, v___x_1646_);
v___x_1648_ = v___x_1639_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v___x_1646_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
else
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1658_; 
lean_dec_ref(v_scope_1634_);
lean_dec_ref(v_toGoalState_1629_);
lean_dec_ref(v___x_1610_);
v_a_1651_ = lean_ctor_get(v___x_1636_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1636_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1653_ = v___x_1636_;
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1636_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
}
}
else
{
lean_object* v_reason_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1683_; 
v_reason_1659_ = lean_ctor_get(v_a_1633_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v_a_1633_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1661_ = v_a_1633_;
v_isShared_1662_ = v_isSharedCheck_1683_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_reason_1659_);
lean_dec(v_a_1633_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1683_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1663_; 
v___x_1663_ = l_Lean_Elab_Tactic_VCGen_emitVC(v_a_1625_, v_reason_1659_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_);
lean_dec(v_reason_1659_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1673_; 
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1673_ == 0)
{
lean_object* v_unused_1674_; 
v_unused_1674_ = lean_ctor_get(v___x_1663_, 0);
lean_dec(v_unused_1674_);
v___x_1665_ = v___x_1663_;
v_isShared_1666_ = v_isSharedCheck_1673_;
goto v_resetjp_1664_;
}
else
{
lean_dec(v___x_1663_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1673_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v___x_1668_; 
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 0, v___x_1610_);
v___x_1668_ = v___x_1661_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v___x_1610_);
v___x_1668_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
lean_object* v___x_1670_; 
if (v_isShared_1666_ == 0)
{
lean_ctor_set(v___x_1665_, 0, v___x_1668_);
v___x_1670_ = v___x_1665_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v___x_1668_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
}
else
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1682_; 
lean_del_object(v___x_1661_);
lean_dec_ref(v___x_1610_);
v_a_1675_ = lean_ctor_get(v___x_1663_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1677_ = v___x_1663_;
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1663_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1680_; 
if (v_isShared_1678_ == 0)
{
v___x_1680_ = v___x_1677_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_a_1675_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
}
}
}
else
{
lean_object* v_a_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1691_; 
lean_dec(v_a_1625_);
lean_dec_ref(v___x_1610_);
v_a_1684_ = lean_ctor_get(v___x_1632_, 0);
v_isSharedCheck_1691_ = !lean_is_exclusive(v___x_1632_);
if (v_isSharedCheck_1691_ == 0)
{
v___x_1686_ = v___x_1632_;
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_a_1684_);
lean_dec(v___x_1632_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v___x_1689_; 
if (v_isShared_1687_ == 0)
{
v___x_1689_ = v___x_1686_;
goto v_reusejp_1688_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v_a_1684_);
v___x_1689_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1688_;
}
v_reusejp_1688_:
{
return v___x_1689_;
}
}
}
}
else
{
lean_object* v___x_1692_; lean_object* v___x_1694_; 
lean_dec(v_a_1625_);
lean_dec_ref(v_scope_1609_);
v___x_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1610_);
if (v_isShared_1628_ == 0)
{
lean_ctor_set(v___x_1627_, 0, v___x_1692_);
v___x_1694_ = v___x_1627_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v___x_1692_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
else
{
lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1704_; 
lean_dec_ref(v___x_1610_);
lean_dec_ref(v_scope_1609_);
v_a_1697_ = lean_ctor_get(v___x_1624_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1624_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1699_ = v___x_1624_;
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v___x_1624_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1702_; 
if (v_isShared_1700_ == 0)
{
v___x_1702_ = v___x_1699_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_a_1697_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___redArg___lam__0___boxed(lean_object* v_goal_1705_, lean_object* v_scope_1706_, lean_object* v___x_1707_, lean_object* v_____r_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___redArg___lam__0(v_goal_1705_, v_scope_1706_, v___x_1707_, v_____r_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1711_);
lean_dec(v___y_1710_);
lean_dec_ref(v___y_1709_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___redArg(lean_object* v_a_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_){
_start:
{
lean_object* v___y_1736_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; uint8_t v___x_1759_; 
v___x_1756_ = lean_array_get_size(v_a_1722_);
v___x_1757_ = lean_unsigned_to_nat(1u);
v___x_1758_ = lean_nat_sub(v___x_1756_, v___x_1757_);
v___x_1759_ = lean_nat_dec_lt(v___x_1758_, v___x_1756_);
if (v___x_1759_ == 0)
{
lean_object* v___x_1760_; 
lean_dec(v___x_1758_);
v___x_1760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1760_, 0, v_a_1722_);
return v___x_1760_;
}
else
{
lean_object* v___x_1761_; lean_object* v_goal_1762_; lean_object* v_scope_1763_; lean_object* v_mvarId_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1761_ = lean_array_fget_borrowed(v_a_1722_, v___x_1758_);
lean_dec(v___x_1758_);
v_goal_1762_ = lean_ctor_get(v___x_1761_, 0);
lean_inc_ref(v_goal_1762_);
v_scope_1763_ = lean_ctor_get(v___x_1761_, 1);
lean_inc_ref(v_scope_1763_);
v_mvarId_1764_ = lean_ctor_get(v_goal_1762_, 1);
v___x_1765_ = lean_array_pop(v_a_1722_);
v___x_1766_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_work_spec__1___redArg(v_mvarId_1764_, v___y_1731_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_object* v_a_1767_; uint8_t v___x_1768_; 
v_a_1767_ = lean_ctor_get(v___x_1766_, 0);
lean_inc(v_a_1767_);
lean_dec_ref_known(v___x_1766_, 1);
v___x_1768_ = lean_unbox(v_a_1767_);
lean_dec(v_a_1767_);
if (v___x_1768_ == 0)
{
lean_object* v___x_1769_; lean_object* v_pendingJoinPoints_1770_; lean_object* v___x_1771_; 
v___x_1769_ = lean_st_ref_get(v___y_1724_);
v_pendingJoinPoints_1770_ = lean_ctor_get(v___x_1769_, 11);
lean_inc_ref(v_pendingJoinPoints_1770_);
lean_dec(v___x_1769_);
v___x_1771_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2___redArg(v_pendingJoinPoints_1770_, v_mvarId_1764_);
lean_dec_ref(v_pendingJoinPoints_1770_);
if (lean_obj_tag(v___x_1771_) == 1)
{
lean_object* v_val_1772_; lean_object* v_fst_1773_; lean_object* v_snd_1774_; lean_object* v___x_1775_; lean_object* v_specBackwardRuleCache_1776_; lean_object* v_splitBackwardRuleCache_1777_; lean_object* v_latticeBackwardRuleCache_1778_; lean_object* v_frameBackwardRuleCache_1779_; lean_object* v_rintroBackwardRuleCache_1780_; lean_object* v_frameDB_1781_; lean_object* v_invariants_1782_; lean_object* v_vcs_1783_; lean_object* v_simpState_1784_; lean_object* v_fuel_1785_; lean_object* v_inlineHandledInvariants_1786_; lean_object* v_pendingJoinPoints_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1807_; 
v_val_1772_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_val_1772_);
lean_dec_ref_known(v___x_1771_, 1);
v_fst_1773_ = lean_ctor_get(v_val_1772_, 0);
lean_inc(v_fst_1773_);
v_snd_1774_ = lean_ctor_get(v_val_1772_, 1);
lean_inc(v_snd_1774_);
lean_dec(v_val_1772_);
v___x_1775_ = lean_st_ref_take(v___y_1724_);
v_specBackwardRuleCache_1776_ = lean_ctor_get(v___x_1775_, 0);
v_splitBackwardRuleCache_1777_ = lean_ctor_get(v___x_1775_, 1);
v_latticeBackwardRuleCache_1778_ = lean_ctor_get(v___x_1775_, 2);
v_frameBackwardRuleCache_1779_ = lean_ctor_get(v___x_1775_, 3);
v_rintroBackwardRuleCache_1780_ = lean_ctor_get(v___x_1775_, 4);
v_frameDB_1781_ = lean_ctor_get(v___x_1775_, 5);
v_invariants_1782_ = lean_ctor_get(v___x_1775_, 6);
v_vcs_1783_ = lean_ctor_get(v___x_1775_, 7);
v_simpState_1784_ = lean_ctor_get(v___x_1775_, 8);
v_fuel_1785_ = lean_ctor_get(v___x_1775_, 9);
v_inlineHandledInvariants_1786_ = lean_ctor_get(v___x_1775_, 10);
v_pendingJoinPoints_1787_ = lean_ctor_get(v___x_1775_, 11);
v_isSharedCheck_1807_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1789_ = v___x_1775_;
v_isShared_1790_ = v_isSharedCheck_1807_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_pendingJoinPoints_1787_);
lean_inc(v_inlineHandledInvariants_1786_);
lean_inc(v_fuel_1785_);
lean_inc(v_simpState_1784_);
lean_inc(v_vcs_1783_);
lean_inc(v_invariants_1782_);
lean_inc(v_frameDB_1781_);
lean_inc(v_rintroBackwardRuleCache_1780_);
lean_inc(v_frameBackwardRuleCache_1779_);
lean_inc(v_latticeBackwardRuleCache_1778_);
lean_inc(v_splitBackwardRuleCache_1777_);
lean_inc(v_specBackwardRuleCache_1776_);
lean_dec(v___x_1775_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1807_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1791_; lean_object* v___x_1793_; 
v___x_1791_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3___redArg(v_pendingJoinPoints_1787_, v_mvarId_1764_);
if (v_isShared_1790_ == 0)
{
lean_ctor_set(v___x_1789_, 11, v___x_1791_);
v___x_1793_ = v___x_1789_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v_specBackwardRuleCache_1776_);
lean_ctor_set(v_reuseFailAlloc_1806_, 1, v_splitBackwardRuleCache_1777_);
lean_ctor_set(v_reuseFailAlloc_1806_, 2, v_latticeBackwardRuleCache_1778_);
lean_ctor_set(v_reuseFailAlloc_1806_, 3, v_frameBackwardRuleCache_1779_);
lean_ctor_set(v_reuseFailAlloc_1806_, 4, v_rintroBackwardRuleCache_1780_);
lean_ctor_set(v_reuseFailAlloc_1806_, 5, v_frameDB_1781_);
lean_ctor_set(v_reuseFailAlloc_1806_, 6, v_invariants_1782_);
lean_ctor_set(v_reuseFailAlloc_1806_, 7, v_vcs_1783_);
lean_ctor_set(v_reuseFailAlloc_1806_, 8, v_simpState_1784_);
lean_ctor_set(v_reuseFailAlloc_1806_, 9, v_fuel_1785_);
lean_ctor_set(v_reuseFailAlloc_1806_, 10, v_inlineHandledInvariants_1786_);
lean_ctor_set(v_reuseFailAlloc_1806_, 11, v___x_1791_);
v___x_1793_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1794_ = lean_st_ref_put(v___y_1724_, v___x_1793_);
v___x_1795_ = l_Lean_Elab_Tactic_VCGen_finalizeJoinPoint(v_fst_1773_, v_snd_1774_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
if (lean_obj_tag(v___x_1795_) == 0)
{
lean_object* v_a_1796_; lean_object* v___x_1797_; 
v_a_1796_ = lean_ctor_get(v___x_1795_, 0);
lean_inc(v_a_1796_);
lean_dec_ref_known(v___x_1795_, 1);
v___x_1797_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___redArg___lam__0(v_goal_1762_, v_scope_1763_, v___x_1765_, v_a_1796_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
v___y_1736_ = v___x_1797_;
goto v___jp_1735_;
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1805_; 
lean_dec_ref(v___x_1765_);
lean_dec_ref(v_scope_1763_);
lean_dec_ref(v_goal_1762_);
v_a_1798_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1800_ = v___x_1795_;
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v___x_1795_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1803_; 
if (v_isShared_1801_ == 0)
{
v___x_1803_ = v___x_1800_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1798_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
}
}
}
}
else
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
lean_dec(v___x_1771_);
v___x_1808_ = lean_box(0);
v___x_1809_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___redArg___lam__0(v_goal_1762_, v_scope_1763_, v___x_1765_, v___x_1808_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
v___y_1736_ = v___x_1809_;
goto v___jp_1735_;
}
}
else
{
lean_dec_ref(v_scope_1763_);
lean_dec_ref(v_goal_1762_);
v_a_1722_ = v___x_1765_;
goto _start;
}
}
else
{
lean_object* v_a_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1818_; 
lean_dec_ref(v___x_1765_);
lean_dec_ref(v_scope_1763_);
lean_dec_ref(v_goal_1762_);
v_a_1811_ = lean_ctor_get(v___x_1766_, 0);
v_isSharedCheck_1818_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_1818_ == 0)
{
v___x_1813_ = v___x_1766_;
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_a_1811_);
lean_dec(v___x_1766_);
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
v___jp_1735_:
{
if (lean_obj_tag(v___y_1736_) == 0)
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1747_; 
v_a_1737_ = lean_ctor_get(v___y_1736_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___y_1736_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1739_ = v___y_1736_;
v_isShared_1740_ = v_isSharedCheck_1747_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v___y_1736_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1747_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
if (lean_obj_tag(v_a_1737_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1743_; 
v_a_1741_ = lean_ctor_get(v_a_1737_, 0);
lean_inc(v_a_1741_);
lean_dec_ref_known(v_a_1737_, 1);
if (v_isShared_1740_ == 0)
{
lean_ctor_set(v___x_1739_, 0, v_a_1741_);
v___x_1743_ = v___x_1739_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v_a_1741_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
return v___x_1743_;
}
}
else
{
lean_object* v_a_1745_; 
lean_del_object(v___x_1739_);
v_a_1745_ = lean_ctor_get(v_a_1737_, 0);
lean_inc(v_a_1745_);
lean_dec_ref_known(v_a_1737_, 1);
v_a_1722_ = v_a_1745_;
goto _start;
}
}
}
else
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1755_; 
v_a_1748_ = lean_ctor_get(v___y_1736_, 0);
v_isSharedCheck_1755_ = !lean_is_exclusive(v___y_1736_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1750_ = v___y_1736_;
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___y_1736_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___redArg___boxed(lean_object* v_a_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___redArg(v_a_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_);
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec(v___y_1826_);
lean_dec_ref(v___y_1825_);
lean_dec(v___y_1824_);
lean_dec_ref(v___y_1823_);
lean_dec(v___y_1822_);
lean_dec(v___y_1821_);
lean_dec_ref(v___y_1820_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_work(lean_object* v_scope_1833_, lean_object* v_goal_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_){
_start:
{
lean_object* v_toGoalState_1847_; lean_object* v_mvarId_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1887_; 
v_toGoalState_1847_ = lean_ctor_get(v_goal_1834_, 0);
v_mvarId_1848_ = lean_ctor_get(v_goal_1834_, 1);
v_isSharedCheck_1887_ = !lean_is_exclusive(v_goal_1834_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1850_ = v_goal_1834_;
v_isShared_1851_ = v_isSharedCheck_1887_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_mvarId_1848_);
lean_inc(v_toGoalState_1847_);
lean_dec(v_goal_1834_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1887_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1852_; 
v___x_1852_ = l_Lean_Meta_Sym_preprocessMVar(v_mvarId_1848_, v_a_1840_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_);
if (lean_obj_tag(v___x_1852_) == 0)
{
lean_object* v_a_1853_; lean_object* v___x_1855_; 
v_a_1853_ = lean_ctor_get(v___x_1852_, 0);
lean_inc(v_a_1853_);
lean_dec_ref_known(v___x_1852_, 1);
if (v_isShared_1851_ == 0)
{
lean_ctor_set(v___x_1850_, 1, v_a_1853_);
v___x_1855_ = v___x_1850_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_toGoalState_1847_);
lean_ctor_set(v_reuseFailAlloc_1878_, 1, v_a_1853_);
v___x_1855_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1855_);
lean_ctor_set(v___x_1856_, 1, v_scope_1833_);
v___x_1857_ = lean_unsigned_to_nat(1u);
v___x_1858_ = lean_mk_empty_array_with_capacity(v___x_1857_);
v___x_1859_ = lean_array_push(v___x_1858_, v___x_1856_);
v___x_1860_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___redArg(v___x_1859_, v_a_1835_, v_a_1836_, v_a_1837_, v_a_1838_, v_a_1839_, v_a_1840_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_);
if (lean_obj_tag(v___x_1860_) == 0)
{
lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1868_; 
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1868_ == 0)
{
lean_object* v_unused_1869_; 
v_unused_1869_ = lean_ctor_get(v___x_1860_, 0);
lean_dec(v_unused_1869_);
v___x_1862_ = v___x_1860_;
v_isShared_1863_ = v_isSharedCheck_1868_;
goto v_resetjp_1861_;
}
else
{
lean_dec(v___x_1860_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1868_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1864_; lean_object* v___x_1866_; 
v___x_1864_ = lean_box(0);
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 0, v___x_1864_);
v___x_1866_ = v___x_1862_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v___x_1864_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
return v___x_1866_;
}
}
}
else
{
lean_object* v_a_1870_; lean_object* v___x_1872_; uint8_t v_isShared_1873_; uint8_t v_isSharedCheck_1877_; 
v_a_1870_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1872_ = v___x_1860_;
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_a_1870_);
lean_dec(v___x_1860_);
v___x_1872_ = lean_box(0);
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
v_resetjp_1871_:
{
lean_object* v___x_1875_; 
if (v_isShared_1873_ == 0)
{
v___x_1875_ = v___x_1872_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_a_1870_);
v___x_1875_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
return v___x_1875_;
}
}
}
}
}
else
{
lean_object* v_a_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1886_; 
lean_del_object(v___x_1850_);
lean_dec_ref(v_toGoalState_1847_);
lean_dec_ref(v_scope_1833_);
v_a_1879_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1886_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1881_ = v___x_1852_;
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_a_1879_);
lean_dec(v___x_1852_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1884_; 
if (v_isShared_1882_ == 0)
{
v___x_1884_ = v___x_1881_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v_a_1879_);
v___x_1884_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
return v___x_1884_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_work___boxed(lean_object* v_scope_1888_, lean_object* v_goal_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_){
_start:
{
lean_object* v_res_1902_; 
v_res_1902_ = l_Lean_Elab_Tactic_VCGen_work(v_scope_1888_, v_goal_1889_, v_a_1890_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_, v_a_1896_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_);
lean_dec(v_a_1900_);
lean_dec_ref(v_a_1899_);
lean_dec(v_a_1898_);
lean_dec_ref(v_a_1897_);
lean_dec(v_a_1896_);
lean_dec_ref(v_a_1895_);
lean_dec(v_a_1894_);
lean_dec_ref(v_a_1893_);
lean_dec(v_a_1892_);
lean_dec(v_a_1891_);
lean_dec_ref(v_a_1890_);
return v_res_1902_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_work_spec__1(lean_object* v_mvarId_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_){
_start:
{
lean_object* v___x_1916_; 
v___x_1916_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_work_spec__1___redArg(v_mvarId_1903_, v___y_1912_);
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_work_spec__1___boxed(lean_object* v_mvarId_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_){
_start:
{
lean_object* v_res_1930_; 
v_res_1930_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_work_spec__1(v_mvarId_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_);
lean_dec(v___y_1928_);
lean_dec_ref(v___y_1927_);
lean_dec(v___y_1926_);
lean_dec_ref(v___y_1925_);
lean_dec(v___y_1924_);
lean_dec_ref(v___y_1923_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
lean_dec(v_mvarId_1917_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2(lean_object* v_00_u03b2_1931_, lean_object* v_m_1932_, lean_object* v_a_1933_){
_start:
{
lean_object* v___x_1934_; 
v___x_1934_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2___redArg(v_m_1932_, v_a_1933_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2___boxed(lean_object* v_00_u03b2_1935_, lean_object* v_m_1936_, lean_object* v_a_1937_){
_start:
{
lean_object* v_res_1938_; 
v_res_1938_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2(v_00_u03b2_1935_, v_m_1936_, v_a_1937_);
lean_dec(v_a_1937_);
lean_dec_ref(v_m_1936_);
return v_res_1938_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3(lean_object* v_00_u03b2_1939_, lean_object* v_m_1940_, lean_object* v_a_1941_){
_start:
{
lean_object* v___x_1942_; 
v___x_1942_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3___redArg(v_m_1940_, v_a_1941_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3___boxed(lean_object* v_00_u03b2_1943_, lean_object* v_m_1944_, lean_object* v_a_1945_){
_start:
{
lean_object* v_res_1946_; 
v_res_1946_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3(v_00_u03b2_1943_, v_m_1944_, v_a_1945_);
lean_dec(v_a_1945_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4(lean_object* v_inst_1947_, lean_object* v_a_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_){
_start:
{
lean_object* v___x_1961_; 
v___x_1961_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___redArg(v_a_1948_, v___y_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_);
return v___x_1961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4___boxed(lean_object* v_inst_1962_, lean_object* v_a_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_){
_start:
{
lean_object* v_res_1976_; 
v_res_1976_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_VCGen_work_spec__4(v_inst_1962_, v_a_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
lean_dec(v___y_1974_);
lean_dec_ref(v___y_1973_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v___y_1968_);
lean_dec_ref(v___y_1967_);
lean_dec(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
return v_res_1976_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2_spec__2(lean_object* v_00_u03b2_1977_, lean_object* v_a_1978_, lean_object* v_x_1979_){
_start:
{
lean_object* v___x_1980_; 
v___x_1980_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2_spec__2___redArg(v_a_1978_, v_x_1979_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2_spec__2___boxed(lean_object* v_00_u03b2_1981_, lean_object* v_a_1982_, lean_object* v_x_1983_){
_start:
{
lean_object* v_res_1984_; 
v_res_1984_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_work_spec__2_spec__2(v_00_u03b2_1981_, v_a_1982_, v_x_1983_);
lean_dec(v_x_1983_);
lean_dec(v_a_1982_);
return v_res_1984_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__4(lean_object* v_00_u03b2_1985_, lean_object* v_a_1986_, lean_object* v_x_1987_){
_start:
{
uint8_t v___x_1988_; 
v___x_1988_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__4___redArg(v_a_1986_, v_x_1987_);
return v___x_1988_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__4___boxed(lean_object* v_00_u03b2_1989_, lean_object* v_a_1990_, lean_object* v_x_1991_){
_start:
{
uint8_t v_res_1992_; lean_object* v_r_1993_; 
v_res_1992_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__4(v_00_u03b2_1989_, v_a_1990_, v_x_1991_);
lean_dec(v_x_1991_);
lean_dec(v_a_1990_);
v_r_1993_ = lean_box(v_res_1992_);
return v_r_1993_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__5(lean_object* v_00_u03b2_1994_, lean_object* v_a_1995_, lean_object* v_x_1996_){
_start:
{
lean_object* v___x_1997_; 
v___x_1997_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__5___redArg(v_a_1995_, v_x_1996_);
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__5___boxed(lean_object* v_00_u03b2_1998_, lean_object* v_a_1999_, lean_object* v_x_2000_){
_start:
{
lean_object* v_res_2001_; 
v_res_2001_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_VCGen_work_spec__3_spec__5(v_00_u03b2_1998_, v_a_1999_, v_x_2000_);
lean_dec(v_a_1999_);
return v_res_2001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutFoldProjsCheck___at___00Lean_Elab_Tactic_VCGen_run_spec__1___redArg(lean_object* v_x_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_){
_start:
{
lean_object* v_config_2013_; lean_object* v_sharedExprs_2014_; uint8_t v_verbose_2015_; uint8_t v_enforceUnfoldReducible_2016_; uint8_t v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; 
v_config_2013_ = lean_ctor_get(v___y_2006_, 1);
v_sharedExprs_2014_ = lean_ctor_get(v___y_2006_, 0);
v_verbose_2015_ = lean_ctor_get_uint8(v_config_2013_, 0);
v_enforceUnfoldReducible_2016_ = lean_ctor_get_uint8(v_config_2013_, 1);
v___x_2017_ = 0;
v___x_2018_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_2018_, 0, v_verbose_2015_);
lean_ctor_set_uint8(v___x_2018_, 1, v_enforceUnfoldReducible_2016_);
lean_ctor_set_uint8(v___x_2018_, 2, v___x_2017_);
lean_inc_ref(v_sharedExprs_2014_);
v___x_2019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2019_, 0, v_sharedExprs_2014_);
lean_ctor_set(v___x_2019_, 1, v___x_2018_);
lean_inc(v___y_2011_);
lean_inc_ref(v___y_2010_);
lean_inc(v___y_2009_);
lean_inc_ref(v___y_2008_);
lean_inc(v___y_2007_);
lean_inc(v___y_2005_);
lean_inc_ref(v___y_2004_);
lean_inc(v___y_2003_);
v___x_2020_ = lean_apply_10(v_x_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___x_2019_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_, lean_box(0));
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutFoldProjsCheck___at___00Lean_Elab_Tactic_VCGen_run_spec__1___redArg___boxed(lean_object* v_x_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_Lean_Meta_Sym_withoutFoldProjsCheck___at___00Lean_Elab_Tactic_VCGen_run_spec__1___redArg(v_x_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
lean_dec(v___y_2026_);
lean_dec_ref(v___y_2025_);
lean_dec(v___y_2024_);
lean_dec_ref(v___y_2023_);
lean_dec(v___y_2022_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutFoldProjsCheck___at___00Lean_Elab_Tactic_VCGen_run_spec__1(lean_object* v_00_u03b1_2033_, lean_object* v_x_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_){
_start:
{
lean_object* v___x_2045_; 
v___x_2045_ = l_Lean_Meta_Sym_withoutFoldProjsCheck___at___00Lean_Elab_Tactic_VCGen_run_spec__1___redArg(v_x_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_);
return v___x_2045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutFoldProjsCheck___at___00Lean_Elab_Tactic_VCGen_run_spec__1___boxed(lean_object* v_00_u03b1_2046_, lean_object* v_x_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_){
_start:
{
lean_object* v_res_2058_; 
v_res_2058_ = l_Lean_Meta_Sym_withoutFoldProjsCheck___at___00Lean_Elab_Tactic_VCGen_run_spec__1(v_00_u03b1_2046_, v_x_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_);
lean_dec(v___y_2056_);
lean_dec_ref(v___y_2055_);
lean_dec(v___y_2054_);
lean_dec_ref(v___y_2053_);
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec(v___y_2048_);
return v_res_2058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_run___lam__0(lean_object* v_initState_2059_, lean_object* v_scope_2060_, lean_object* v_goal_2061_, lean_object* v_ctx_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_){
_start:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; 
v___x_2073_ = lean_st_mk_ref(v_initState_2059_);
v___x_2074_ = l_Lean_Elab_Tactic_VCGen_work(v_scope_2060_, v_goal_2061_, v_ctx_2062_, v___x_2073_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_);
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v_a_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2084_; 
v_a_2075_ = lean_ctor_get(v___x_2074_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2077_ = v___x_2074_;
v_isShared_2078_ = v_isSharedCheck_2084_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_a_2075_);
lean_dec(v___x_2074_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2084_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2082_; 
v___x_2079_ = lean_st_ref_get(v___x_2073_);
lean_dec(v___x_2073_);
v___x_2080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2080_, 0, v_a_2075_);
lean_ctor_set(v___x_2080_, 1, v___x_2079_);
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 0, v___x_2080_);
v___x_2082_ = v___x_2077_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v___x_2080_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
}
else
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2092_; 
lean_dec(v___x_2073_);
v_a_2085_ = lean_ctor_get(v___x_2074_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2087_ = v___x_2074_;
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2074_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_run___lam__0___boxed(lean_object* v_initState_2093_, lean_object* v_scope_2094_, lean_object* v_goal_2095_, lean_object* v_ctx_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = l_Lean_Elab_Tactic_VCGen_run___lam__0(v_initState_2093_, v_scope_2094_, v_goal_2095_, v_ctx_2096_, v___y_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_);
lean_dec(v___y_2105_);
lean_dec_ref(v___y_2104_);
lean_dec(v___y_2103_);
lean_dec_ref(v___y_2102_);
lean_dec(v___y_2101_);
lean_dec_ref(v___y_2100_);
lean_dec(v___y_2099_);
lean_dec_ref(v___y_2098_);
lean_dec(v___y_2097_);
lean_dec_ref(v_ctx_2096_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_run_spec__0___redArg(lean_object* v_mvarId_2108_, lean_object* v___y_2109_){
_start:
{
lean_object* v___x_2111_; lean_object* v_mctx_2112_; lean_object* v_eAssignment_2113_; uint8_t v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2111_ = lean_st_ref_get(v___y_2109_);
v_mctx_2112_ = lean_ctor_get(v___x_2111_, 0);
lean_inc_ref(v_mctx_2112_);
lean_dec(v___x_2111_);
v_eAssignment_2113_ = lean_ctor_get(v_mctx_2112_, 8);
lean_inc_ref(v_eAssignment_2113_);
lean_dec_ref(v_mctx_2112_);
v___x_2114_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_elabInvariant_spec__1_spec__2___redArg(v_eAssignment_2113_, v_mvarId_2108_);
lean_dec_ref(v_eAssignment_2113_);
v___x_2115_ = lean_box(v___x_2114_);
v___x_2116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2115_);
return v___x_2116_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_run_spec__0___redArg___boxed(lean_object* v_mvarId_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_){
_start:
{
lean_object* v_res_2120_; 
v_res_2120_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_run_spec__0___redArg(v_mvarId_2117_, v___y_2118_);
lean_dec(v___y_2118_);
lean_dec(v_mvarId_2117_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_VCGen_run_spec__5(lean_object* v_as_2121_, size_t v_i_2122_, size_t v_stop_2123_, lean_object* v_b_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_){
_start:
{
lean_object* v_a_2136_; uint8_t v___x_2140_; 
v___x_2140_ = lean_usize_dec_eq(v_i_2122_, v_stop_2123_);
if (v___x_2140_ == 0)
{
lean_object* v___x_2141_; lean_object* v_mvarId_2142_; lean_object* v___x_2143_; 
v___x_2141_ = lean_array_uget_borrowed(v_as_2121_, v_i_2122_);
v_mvarId_2142_ = lean_ctor_get(v___x_2141_, 1);
v___x_2143_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_run_spec__0___redArg(v_mvarId_2142_, v___y_2131_);
if (lean_obj_tag(v___x_2143_) == 0)
{
lean_object* v_a_2144_; uint8_t v___x_2145_; 
v_a_2144_ = lean_ctor_get(v___x_2143_, 0);
lean_inc(v_a_2144_);
lean_dec_ref_known(v___x_2143_, 1);
v___x_2145_ = lean_unbox(v_a_2144_);
lean_dec(v_a_2144_);
if (v___x_2145_ == 0)
{
lean_object* v___x_2146_; 
lean_inc(v___x_2141_);
v___x_2146_ = lean_array_push(v_b_2124_, v___x_2141_);
v_a_2136_ = v___x_2146_;
goto v___jp_2135_;
}
else
{
v_a_2136_ = v_b_2124_;
goto v___jp_2135_;
}
}
else
{
lean_object* v_a_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2154_; 
lean_dec_ref(v_b_2124_);
v_a_2147_ = lean_ctor_get(v___x_2143_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2143_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2149_ = v___x_2143_;
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_a_2147_);
lean_dec(v___x_2143_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2152_; 
if (v_isShared_2150_ == 0)
{
v___x_2152_ = v___x_2149_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_a_2147_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
}
else
{
lean_object* v___x_2155_; 
v___x_2155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2155_, 0, v_b_2124_);
return v___x_2155_;
}
v___jp_2135_:
{
size_t v___x_2137_; size_t v___x_2138_; 
v___x_2137_ = ((size_t)1ULL);
v___x_2138_ = lean_usize_add(v_i_2122_, v___x_2137_);
v_i_2122_ = v___x_2138_;
v_b_2124_ = v_a_2136_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_VCGen_run_spec__5___boxed(lean_object* v_as_2156_, lean_object* v_i_2157_, lean_object* v_stop_2158_, lean_object* v_b_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_){
_start:
{
size_t v_i_boxed_2170_; size_t v_stop_boxed_2171_; lean_object* v_res_2172_; 
v_i_boxed_2170_ = lean_unbox_usize(v_i_2157_);
lean_dec(v_i_2157_);
v_stop_boxed_2171_ = lean_unbox_usize(v_stop_2158_);
lean_dec(v_stop_2158_);
v_res_2172_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_VCGen_run_spec__5(v_as_2156_, v_i_boxed_2170_, v_stop_boxed_2171_, v_b_2159_, v___y_2160_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
lean_dec(v___y_2168_);
lean_dec_ref(v___y_2167_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2163_);
lean_dec(v___y_2162_);
lean_dec_ref(v___y_2161_);
lean_dec(v___y_2160_);
lean_dec_ref(v_as_2156_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4___redArg(size_t v_sz_2174_, size_t v_i_2175_, lean_object* v_bs_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_){
_start:
{
uint8_t v___x_2182_; 
v___x_2182_ = lean_usize_dec_lt(v_i_2175_, v_sz_2174_);
if (v___x_2182_ == 0)
{
lean_object* v___x_2183_; 
v___x_2183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2183_, 0, v_bs_2176_);
return v___x_2183_;
}
else
{
lean_object* v_v_2184_; lean_object* v_mvarId_2185_; lean_object* v___x_2186_; lean_object* v_bs_x27_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; 
v_v_2184_ = lean_array_uget_borrowed(v_bs_2176_, v_i_2175_);
v_mvarId_2185_ = lean_ctor_get(v_v_2184_, 1);
lean_inc_n(v_mvarId_2185_, 2);
v___x_2186_ = lean_unsigned_to_nat(0u);
v_bs_x27_2187_ = lean_array_uset(v_bs_2176_, v_i_2175_, v___x_2186_);
v___x_2188_ = lean_usize_to_nat(v_i_2175_);
v___x_2189_ = l_Lean_MVarId_getTag(v_mvarId_2185_, v___y_2177_, v___y_2178_, v___y_2179_, v___y_2180_);
if (lean_obj_tag(v___x_2189_) == 0)
{
lean_object* v_a_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v_a_2190_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_a_2190_);
lean_dec_ref_known(v___x_2189_, 1);
v___x_2191_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4___redArg___closed__0));
v___x_2192_ = lean_unsigned_to_nat(1u);
v___x_2193_ = lean_nat_add(v___x_2188_, v___x_2192_);
lean_dec(v___x_2188_);
v___x_2194_ = l_Nat_reprFast(v___x_2193_);
v___x_2195_ = lean_string_append(v___x_2191_, v___x_2194_);
lean_dec_ref(v___x_2194_);
v___x_2196_ = lean_box(0);
v___x_2197_ = l_Lean_Name_str___override(v___x_2196_, v___x_2195_);
v___x_2198_ = l_Lean_Name_eraseMacroScopes(v_a_2190_);
lean_dec(v_a_2190_);
v___x_2199_ = l_Lean_Name_append(v___x_2197_, v___x_2198_);
v___x_2200_ = l_Lean_MVarId_setTag___redArg(v_mvarId_2185_, v___x_2199_, v___y_2178_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v_a_2201_; size_t v___x_2202_; size_t v___x_2203_; lean_object* v___x_2204_; 
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
lean_inc(v_a_2201_);
lean_dec_ref_known(v___x_2200_, 1);
v___x_2202_ = ((size_t)1ULL);
v___x_2203_ = lean_usize_add(v_i_2175_, v___x_2202_);
v___x_2204_ = lean_array_uset(v_bs_x27_2187_, v_i_2175_, v_a_2201_);
v_i_2175_ = v___x_2203_;
v_bs_2176_ = v___x_2204_;
goto _start;
}
else
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
lean_dec_ref(v_bs_x27_2187_);
v_a_2206_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2200_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2200_);
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
lean_dec(v___x_2188_);
lean_dec_ref(v_bs_x27_2187_);
lean_dec(v_mvarId_2185_);
v_a_2214_ = lean_ctor_get(v___x_2189_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2189_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2216_ = v___x_2189_;
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2189_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4___redArg___boxed(lean_object* v_sz_2222_, lean_object* v_i_2223_, lean_object* v_bs_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_){
_start:
{
size_t v_sz_boxed_2230_; size_t v_i_boxed_2231_; lean_object* v_res_2232_; 
v_sz_boxed_2230_ = lean_unbox_usize(v_sz_2222_);
lean_dec(v_sz_2222_);
v_i_boxed_2231_ = lean_unbox_usize(v_i_2223_);
lean_dec(v_i_2223_);
v_res_2232_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4___redArg(v_sz_boxed_2230_, v_i_boxed_2231_, v_bs_2224_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
lean_dec(v___y_2226_);
lean_dec_ref(v___y_2225_);
return v_res_2232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3___redArg(size_t v_sz_2234_, size_t v_i_2235_, lean_object* v_bs_2236_, lean_object* v___y_2237_){
_start:
{
uint8_t v___x_2239_; 
v___x_2239_ = lean_usize_dec_lt(v_i_2235_, v_sz_2234_);
if (v___x_2239_ == 0)
{
lean_object* v___x_2240_; 
v___x_2240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2240_, 0, v_bs_2236_);
return v___x_2240_;
}
else
{
lean_object* v_v_2241_; lean_object* v___x_2242_; lean_object* v_bs_x27_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
v_v_2241_ = lean_array_uget(v_bs_2236_, v_i_2235_);
v___x_2242_ = lean_unsigned_to_nat(0u);
v_bs_x27_2243_ = lean_array_uset(v_bs_2236_, v_i_2235_, v___x_2242_);
v___x_2244_ = lean_usize_to_nat(v_i_2235_);
v___x_2245_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3___redArg___closed__0));
v___x_2246_ = lean_unsigned_to_nat(1u);
v___x_2247_ = lean_nat_add(v___x_2244_, v___x_2246_);
lean_dec(v___x_2244_);
v___x_2248_ = l_Nat_reprFast(v___x_2247_);
v___x_2249_ = lean_string_append(v___x_2245_, v___x_2248_);
lean_dec_ref(v___x_2248_);
v___x_2250_ = lean_box(0);
v___x_2251_ = l_Lean_Name_str___override(v___x_2250_, v___x_2249_);
v___x_2252_ = l_Lean_MVarId_setTag___redArg(v_v_2241_, v___x_2251_, v___y_2237_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_a_2253_; size_t v___x_2254_; size_t v___x_2255_; lean_object* v___x_2256_; 
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
lean_inc(v_a_2253_);
lean_dec_ref_known(v___x_2252_, 1);
v___x_2254_ = ((size_t)1ULL);
v___x_2255_ = lean_usize_add(v_i_2235_, v___x_2254_);
v___x_2256_ = lean_array_uset(v_bs_x27_2243_, v_i_2235_, v_a_2253_);
v_i_2235_ = v___x_2255_;
v_bs_2236_ = v___x_2256_;
goto _start;
}
else
{
lean_object* v_a_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2265_; 
lean_dec_ref(v_bs_x27_2243_);
v_a_2258_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2265_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2265_ == 0)
{
v___x_2260_ = v___x_2252_;
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_a_2258_);
lean_dec(v___x_2252_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2263_; 
if (v_isShared_2261_ == 0)
{
v___x_2263_ = v___x_2260_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v_a_2258_);
v___x_2263_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
return v___x_2263_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3___redArg___boxed(lean_object* v_sz_2266_, lean_object* v_i_2267_, lean_object* v_bs_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_){
_start:
{
size_t v_sz_boxed_2271_; size_t v_i_boxed_2272_; lean_object* v_res_2273_; 
v_sz_boxed_2271_ = lean_unbox_usize(v_sz_2266_);
lean_dec(v_sz_2266_);
v_i_boxed_2272_ = lean_unbox_usize(v_i_2267_);
lean_dec(v_i_2267_);
v_res_2273_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3___redArg(v_sz_boxed_2271_, v_i_boxed_2272_, v_bs_2268_, v___y_2269_);
lean_dec(v___y_2269_);
return v_res_2273_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2_spec__2(lean_object* v_as_2274_, size_t v_i_2275_, size_t v_stop_2276_, lean_object* v_b_2277_){
_start:
{
lean_object* v___y_2279_; uint8_t v___x_2283_; 
v___x_2283_ = lean_usize_dec_eq(v_i_2275_, v_stop_2276_);
if (v___x_2283_ == 0)
{
lean_object* v___x_2284_; uint8_t v_retired_2285_; 
v___x_2284_ = lean_array_uget_borrowed(v_as_2274_, v_i_2275_);
v_retired_2285_ = lean_ctor_get_uint8(v___x_2284_, sizeof(void*)*4);
if (v_retired_2285_ == 0)
{
lean_object* v_frameStx_2286_; lean_object* v___x_2287_; 
v_frameStx_2286_ = lean_ctor_get(v___x_2284_, 2);
lean_inc(v_frameStx_2286_);
v___x_2287_ = lean_array_push(v_b_2277_, v_frameStx_2286_);
v___y_2279_ = v___x_2287_;
goto v___jp_2278_;
}
else
{
v___y_2279_ = v_b_2277_;
goto v___jp_2278_;
}
}
else
{
return v_b_2277_;
}
v___jp_2278_:
{
size_t v___x_2280_; size_t v___x_2281_; 
v___x_2280_ = ((size_t)1ULL);
v___x_2281_ = lean_usize_add(v_i_2275_, v___x_2280_);
v_i_2275_ = v___x_2281_;
v_b_2277_ = v___y_2279_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2_spec__2___boxed(lean_object* v_as_2288_, lean_object* v_i_2289_, lean_object* v_stop_2290_, lean_object* v_b_2291_){
_start:
{
size_t v_i_boxed_2292_; size_t v_stop_boxed_2293_; lean_object* v_res_2294_; 
v_i_boxed_2292_ = lean_unbox_usize(v_i_2289_);
lean_dec(v_i_2289_);
v_stop_boxed_2293_ = lean_unbox_usize(v_stop_2290_);
lean_dec(v_stop_2290_);
v_res_2294_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2_spec__2(v_as_2288_, v_i_boxed_2292_, v_stop_boxed_2293_, v_b_2291_);
lean_dec_ref(v_as_2288_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2(lean_object* v_as_2297_, lean_object* v_start_2298_, lean_object* v_stop_2299_){
_start:
{
lean_object* v___x_2300_; uint8_t v___x_2301_; 
v___x_2300_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2___closed__0));
v___x_2301_ = lean_nat_dec_lt(v_start_2298_, v_stop_2299_);
if (v___x_2301_ == 0)
{
return v___x_2300_;
}
else
{
lean_object* v___x_2302_; uint8_t v___x_2303_; 
v___x_2302_ = lean_array_get_size(v_as_2297_);
v___x_2303_ = lean_nat_dec_le(v_stop_2299_, v___x_2302_);
if (v___x_2303_ == 0)
{
uint8_t v___x_2304_; 
v___x_2304_ = lean_nat_dec_lt(v_start_2298_, v___x_2302_);
if (v___x_2304_ == 0)
{
return v___x_2300_;
}
else
{
size_t v___x_2305_; size_t v___x_2306_; lean_object* v___x_2307_; 
v___x_2305_ = lean_usize_of_nat(v_start_2298_);
v___x_2306_ = lean_usize_of_nat(v___x_2302_);
v___x_2307_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2_spec__2(v_as_2297_, v___x_2305_, v___x_2306_, v___x_2300_);
return v___x_2307_;
}
}
else
{
size_t v___x_2308_; size_t v___x_2309_; lean_object* v___x_2310_; 
v___x_2308_ = lean_usize_of_nat(v_start_2298_);
v___x_2309_ = lean_usize_of_nat(v_stop_2299_);
v___x_2310_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2_spec__2(v_as_2297_, v___x_2308_, v___x_2309_, v___x_2300_);
return v___x_2310_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2___boxed(lean_object* v_as_2311_, lean_object* v_start_2312_, lean_object* v_stop_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2(v_as_2311_, v_start_2312_, v_stop_2313_);
lean_dec(v_stop_2313_);
lean_dec(v_start_2312_);
lean_dec_ref(v_as_2311_);
return v_res_2314_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_run___closed__0(void){
_start:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2315_ = lean_box(0);
v___x_2316_ = lean_unsigned_to_nat(16u);
v___x_2317_ = lean_mk_array(v___x_2316_, v___x_2315_);
return v___x_2317_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_run___closed__1(void){
_start:
{
lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2318_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_run___closed__0, &l_Lean_Elab_Tactic_VCGen_run___closed__0_once, _init_l_Lean_Elab_Tactic_VCGen_run___closed__0);
v___x_2319_ = lean_unsigned_to_nat(0u);
v___x_2320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2319_);
lean_ctor_set(v___x_2320_, 1, v___x_2318_);
return v___x_2320_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_run___closed__2(void){
_start:
{
lean_object* v___x_2321_; 
v___x_2321_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2321_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_run___closed__3(void){
_start:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2322_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_run___closed__2, &l_Lean_Elab_Tactic_VCGen_run___closed__2_once, _init_l_Lean_Elab_Tactic_VCGen_run___closed__2);
v___x_2323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2322_);
return v___x_2323_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_run___closed__4(void){
_start:
{
lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2324_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_run___closed__3, &l_Lean_Elab_Tactic_VCGen_run___closed__3_once, _init_l_Lean_Elab_Tactic_VCGen_run___closed__3);
v___x_2325_ = lean_unsigned_to_nat(0u);
v___x_2326_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2325_);
lean_ctor_set(v___x_2326_, 1, v___x_2324_);
lean_ctor_set(v___x_2326_, 2, v___x_2324_);
lean_ctor_set(v___x_2326_, 3, v___x_2324_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_run(lean_object* v_goal_2327_, lean_object* v_ctx_2328_, lean_object* v_scope_2329_, lean_object* v_stepLimit_x3f_2330_, lean_object* v_frameDB_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_){
_start:
{
lean_object* v___x_2342_; lean_object* v___y_2344_; lean_object* v___y_2345_; lean_object* v___y_2346_; lean_object* v_a_2347_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___y_2357_; 
v___x_2342_ = lean_unsigned_to_nat(0u);
v___x_2353_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_run___closed__1, &l_Lean_Elab_Tactic_VCGen_run___closed__1_once, _init_l_Lean_Elab_Tactic_VCGen_run___closed__1);
v___x_2354_ = ((lean_object*)(l___private_Lean_Elab_Tactic_VCGen_Driver_0__Lean_Elab_Tactic_VCGen_handleInvariantSubgoals___closed__0));
v___x_2355_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_run___closed__4, &l_Lean_Elab_Tactic_VCGen_run___closed__4_once, _init_l_Lean_Elab_Tactic_VCGen_run___closed__4);
if (lean_obj_tag(v_stepLimit_x3f_2330_) == 0)
{
lean_object* v___x_2409_; 
v___x_2409_ = lean_box(1);
v___y_2357_ = v___x_2409_;
goto v___jp_2356_;
}
else
{
lean_object* v_val_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2417_; 
v_val_2410_ = lean_ctor_get(v_stepLimit_x3f_2330_, 0);
v_isSharedCheck_2417_ = !lean_is_exclusive(v_stepLimit_x3f_2330_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2412_ = v_stepLimit_x3f_2330_;
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_val_2410_);
lean_dec(v_stepLimit_x3f_2330_);
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
v___y_2357_ = v___x_2415_;
goto v___jp_2356_;
}
}
}
v___jp_2343_:
{
lean_object* v_entries_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; 
v_entries_2348_ = lean_ctor_get(v___y_2346_, 1);
lean_inc_ref(v_entries_2348_);
lean_dec_ref(v___y_2346_);
v___x_2349_ = lean_array_get_size(v_entries_2348_);
v___x_2350_ = l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_run_spec__2(v_entries_2348_, v___x_2342_, v___x_2349_);
lean_dec_ref(v_entries_2348_);
v___x_2351_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2351_, 0, v___y_2345_);
lean_ctor_set(v___x_2351_, 1, v_a_2347_);
lean_ctor_set(v___x_2351_, 2, v___y_2344_);
lean_ctor_set(v___x_2351_, 3, v___x_2350_);
v___x_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2352_, 0, v___x_2351_);
return v___x_2352_;
}
v___jp_2356_:
{
lean_object* v_initState_2358_; lean_object* v___f_2359_; lean_object* v___x_2360_; 
v_initState_2358_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_initState_2358_, 0, v___x_2353_);
lean_ctor_set(v_initState_2358_, 1, v___x_2353_);
lean_ctor_set(v_initState_2358_, 2, v___x_2353_);
lean_ctor_set(v_initState_2358_, 3, v___x_2353_);
lean_ctor_set(v_initState_2358_, 4, v___x_2353_);
lean_ctor_set(v_initState_2358_, 5, v_frameDB_2331_);
lean_ctor_set(v_initState_2358_, 6, v___x_2354_);
lean_ctor_set(v_initState_2358_, 7, v___x_2354_);
lean_ctor_set(v_initState_2358_, 8, v___x_2355_);
lean_ctor_set(v_initState_2358_, 9, v___y_2357_);
lean_ctor_set(v_initState_2358_, 10, v___x_2353_);
lean_ctor_set(v_initState_2358_, 11, v___x_2353_);
v___f_2359_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_VCGen_run___lam__0___boxed), 14, 4);
lean_closure_set(v___f_2359_, 0, v_initState_2358_);
lean_closure_set(v___f_2359_, 1, v_scope_2329_);
lean_closure_set(v___f_2359_, 2, v_goal_2327_);
lean_closure_set(v___f_2359_, 3, v_ctx_2328_);
v___x_2360_ = l_Lean_Meta_Sym_withoutFoldProjsCheck___at___00Lean_Elab_Tactic_VCGen_run_spec__1___redArg(v___f_2359_, v_a_2332_, v_a_2333_, v_a_2334_, v_a_2335_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_);
if (lean_obj_tag(v___x_2360_) == 0)
{
lean_object* v_a_2361_; lean_object* v_snd_2362_; lean_object* v_frameDB_2363_; lean_object* v_invariants_2364_; lean_object* v_vcs_2365_; lean_object* v_inlineHandledInvariants_2366_; size_t v_sz_2367_; size_t v___x_2368_; lean_object* v___x_2369_; 
v_a_2361_ = lean_ctor_get(v___x_2360_, 0);
lean_inc(v_a_2361_);
lean_dec_ref_known(v___x_2360_, 1);
v_snd_2362_ = lean_ctor_get(v_a_2361_, 1);
lean_inc(v_snd_2362_);
lean_dec(v_a_2361_);
v_frameDB_2363_ = lean_ctor_get(v_snd_2362_, 5);
lean_inc_ref(v_frameDB_2363_);
v_invariants_2364_ = lean_ctor_get(v_snd_2362_, 6);
lean_inc_ref_n(v_invariants_2364_, 2);
v_vcs_2365_ = lean_ctor_get(v_snd_2362_, 7);
lean_inc_ref(v_vcs_2365_);
v_inlineHandledInvariants_2366_ = lean_ctor_get(v_snd_2362_, 10);
lean_inc_ref(v_inlineHandledInvariants_2366_);
lean_dec(v_snd_2362_);
v_sz_2367_ = lean_array_size(v_invariants_2364_);
v___x_2368_ = ((size_t)0ULL);
v___x_2369_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3___redArg(v_sz_2367_, v___x_2368_, v_invariants_2364_, v_a_2338_);
if (lean_obj_tag(v___x_2369_) == 0)
{
size_t v_sz_2370_; lean_object* v___x_2371_; 
lean_dec_ref_known(v___x_2369_, 1);
v_sz_2370_ = lean_array_size(v_vcs_2365_);
lean_inc_ref(v_vcs_2365_);
v___x_2371_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4___redArg(v_sz_2370_, v___x_2368_, v_vcs_2365_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_);
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v___x_2372_; uint8_t v___x_2373_; 
lean_dec_ref_known(v___x_2371_, 1);
v___x_2372_ = lean_array_get_size(v_vcs_2365_);
v___x_2373_ = lean_nat_dec_lt(v___x_2342_, v___x_2372_);
if (v___x_2373_ == 0)
{
lean_dec_ref(v_vcs_2365_);
v___y_2344_ = v_inlineHandledInvariants_2366_;
v___y_2345_ = v_invariants_2364_;
v___y_2346_ = v_frameDB_2363_;
v_a_2347_ = v___x_2354_;
goto v___jp_2343_;
}
else
{
size_t v___x_2374_; lean_object* v___x_2375_; 
v___x_2374_ = lean_usize_of_nat(v___x_2372_);
v___x_2375_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_VCGen_run_spec__5(v_vcs_2365_, v___x_2368_, v___x_2374_, v___x_2354_, v_a_2332_, v_a_2333_, v_a_2334_, v_a_2335_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_);
lean_dec_ref(v_vcs_2365_);
if (lean_obj_tag(v___x_2375_) == 0)
{
lean_object* v_a_2376_; 
v_a_2376_ = lean_ctor_get(v___x_2375_, 0);
lean_inc(v_a_2376_);
lean_dec_ref_known(v___x_2375_, 1);
v___y_2344_ = v_inlineHandledInvariants_2366_;
v___y_2345_ = v_invariants_2364_;
v___y_2346_ = v_frameDB_2363_;
v_a_2347_ = v_a_2376_;
goto v___jp_2343_;
}
else
{
lean_object* v_a_2377_; lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2384_; 
lean_dec_ref(v_inlineHandledInvariants_2366_);
lean_dec_ref(v_invariants_2364_);
lean_dec_ref(v_frameDB_2363_);
v_a_2377_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2384_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2384_ == 0)
{
v___x_2379_ = v___x_2375_;
v_isShared_2380_ = v_isSharedCheck_2384_;
goto v_resetjp_2378_;
}
else
{
lean_inc(v_a_2377_);
lean_dec(v___x_2375_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2384_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v___x_2382_; 
if (v_isShared_2380_ == 0)
{
v___x_2382_ = v___x_2379_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v_a_2377_);
v___x_2382_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
return v___x_2382_;
}
}
}
}
}
else
{
lean_object* v_a_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2392_; 
lean_dec_ref(v_inlineHandledInvariants_2366_);
lean_dec_ref(v_vcs_2365_);
lean_dec_ref(v_invariants_2364_);
lean_dec_ref(v_frameDB_2363_);
v_a_2385_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2392_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2392_ == 0)
{
v___x_2387_ = v___x_2371_;
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_a_2385_);
lean_dec(v___x_2371_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2390_; 
if (v_isShared_2388_ == 0)
{
v___x_2390_ = v___x_2387_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v_a_2385_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
}
}
else
{
lean_object* v_a_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2400_; 
lean_dec_ref(v_inlineHandledInvariants_2366_);
lean_dec_ref(v_vcs_2365_);
lean_dec_ref(v_invariants_2364_);
lean_dec_ref(v_frameDB_2363_);
v_a_2393_ = lean_ctor_get(v___x_2369_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2369_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2395_ = v___x_2369_;
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_a_2393_);
lean_dec(v___x_2369_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2398_; 
if (v_isShared_2396_ == 0)
{
v___x_2398_ = v___x_2395_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_a_2393_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
}
else
{
lean_object* v_a_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2408_; 
v_a_2401_ = lean_ctor_get(v___x_2360_, 0);
v_isSharedCheck_2408_ = !lean_is_exclusive(v___x_2360_);
if (v_isSharedCheck_2408_ == 0)
{
v___x_2403_ = v___x_2360_;
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_a_2401_);
lean_dec(v___x_2360_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
lean_object* v___x_2406_; 
if (v_isShared_2404_ == 0)
{
v___x_2406_ = v___x_2403_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v_a_2401_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_run___boxed(lean_object* v_goal_2418_, lean_object* v_ctx_2419_, lean_object* v_scope_2420_, lean_object* v_stepLimit_x3f_2421_, lean_object* v_frameDB_2422_, lean_object* v_a_2423_, lean_object* v_a_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_){
_start:
{
lean_object* v_res_2433_; 
v_res_2433_ = l_Lean_Elab_Tactic_VCGen_run(v_goal_2418_, v_ctx_2419_, v_scope_2420_, v_stepLimit_x3f_2421_, v_frameDB_2422_, v_a_2423_, v_a_2424_, v_a_2425_, v_a_2426_, v_a_2427_, v_a_2428_, v_a_2429_, v_a_2430_, v_a_2431_);
lean_dec(v_a_2431_);
lean_dec_ref(v_a_2430_);
lean_dec(v_a_2429_);
lean_dec_ref(v_a_2428_);
lean_dec(v_a_2427_);
lean_dec_ref(v_a_2426_);
lean_dec(v_a_2425_);
lean_dec_ref(v_a_2424_);
lean_dec(v_a_2423_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_run_spec__0(lean_object* v_mvarId_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_){
_start:
{
lean_object* v___x_2445_; 
v___x_2445_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_run_spec__0___redArg(v_mvarId_2434_, v___y_2441_);
return v___x_2445_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_run_spec__0___boxed(lean_object* v_mvarId_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_){
_start:
{
lean_object* v_res_2457_; 
v_res_2457_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_VCGen_run_spec__0(v_mvarId_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec(v___y_2451_);
lean_dec_ref(v___y_2450_);
lean_dec(v___y_2449_);
lean_dec_ref(v___y_2448_);
lean_dec(v___y_2447_);
lean_dec(v_mvarId_2446_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3(lean_object* v_as_2458_, size_t v_sz_2459_, size_t v_i_2460_, lean_object* v_bs_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_){
_start:
{
lean_object* v___x_2472_; 
v___x_2472_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3___redArg(v_sz_2459_, v_i_2460_, v_bs_2461_, v___y_2468_);
return v___x_2472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3___boxed(lean_object* v_as_2473_, lean_object* v_sz_2474_, lean_object* v_i_2475_, lean_object* v_bs_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_){
_start:
{
size_t v_sz_boxed_2487_; size_t v_i_boxed_2488_; lean_object* v_res_2489_; 
v_sz_boxed_2487_ = lean_unbox_usize(v_sz_2474_);
lean_dec(v_sz_2474_);
v_i_boxed_2488_ = lean_unbox_usize(v_i_2475_);
lean_dec(v_i_2475_);
v_res_2489_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__3(v_as_2473_, v_sz_boxed_2487_, v_i_boxed_2488_, v_bs_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
lean_dec(v___y_2485_);
lean_dec_ref(v___y_2484_);
lean_dec(v___y_2483_);
lean_dec_ref(v___y_2482_);
lean_dec(v___y_2481_);
lean_dec_ref(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec(v___y_2477_);
lean_dec_ref(v_as_2473_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4(lean_object* v_as_2490_, size_t v_sz_2491_, size_t v_i_2492_, lean_object* v_bs_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_){
_start:
{
lean_object* v___x_2504_; 
v___x_2504_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4___redArg(v_sz_2491_, v_i_2492_, v_bs_2493_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_);
return v___x_2504_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4___boxed(lean_object* v_as_2505_, lean_object* v_sz_2506_, lean_object* v_i_2507_, lean_object* v_bs_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_){
_start:
{
size_t v_sz_boxed_2519_; size_t v_i_boxed_2520_; lean_object* v_res_2521_; 
v_sz_boxed_2519_ = lean_unbox_usize(v_sz_2506_);
lean_dec(v_sz_2506_);
v_i_boxed_2520_ = lean_unbox_usize(v_i_2507_);
lean_dec(v_i_2507_);
v_res_2521_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_VCGen_run_spec__4(v_as_2505_, v_sz_boxed_2519_, v_i_boxed_2520_, v_bs_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
lean_dec(v___y_2517_);
lean_dec_ref(v___y_2516_);
lean_dec(v___y_2515_);
lean_dec_ref(v___y_2514_);
lean_dec(v___y_2513_);
lean_dec_ref(v___y_2512_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec(v___y_2509_);
lean_dec_ref(v_as_2505_);
return v_res_2521_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_Context(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_Solve(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Grind(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_Driver(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_Solve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_VCGen_Driver(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_VCGen_Context(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_VCGen_Solve(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Grind(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_VCGen_Driver(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_VCGen_Solve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_Driver(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_VCGen_Driver(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_VCGen_Driver(builtin);
}
#ifdef __cplusplus
}
#endif
