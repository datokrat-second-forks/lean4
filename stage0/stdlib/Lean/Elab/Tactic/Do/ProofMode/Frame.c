// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Frame
// Imports: public import Std.Tactic.Do.Syntax public import Lean.Elab.Tactic.Do.ProofMode.Focus
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_collectHyps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Elab.Tactic.Do.ProofMode.Frame"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 100, .m_capacity = 100, .m_length = 99, .m_data = "_private.Lean.Elab.Tactic.Do.ProofMode.Frame.0.Lean.Elab.Tactic.Do.ProofMode.transferHypNames.label"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Frame"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "frame"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HasFrame"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0___boxed(lean_object**);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1_value),LEAN_SCALAR_PTR_LITERAL(108, 148, 215, 79, 118, 195, 150, 87)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Could not infer frame"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__2;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "not in proof mode"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mframe"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(206, 145, 19, 234, 215, 109, 237, 186)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ProofMode"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elabMFrame"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(88, 236, 37, 169, 242, 201, 22, 247)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_collectHyps(lean_object* v_P_1_, lean_object* v_acc_2_){
_start:
{
lean_object* v___x_3_; 
lean_inc_ref(v_P_1_);
v___x_3_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_P_1_);
if (lean_obj_tag(v___x_3_) == 1)
{
lean_object* v_val_4_; lean_object* v___x_5_; 
lean_dec_ref(v_P_1_);
v_val_4_ = lean_ctor_get(v___x_3_, 0);
lean_inc(v_val_4_);
lean_dec_ref_known(v___x_3_, 1);
v___x_5_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5_, 0, v_val_4_);
lean_ctor_set(v___x_5_, 1, v_acc_2_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; 
lean_dec(v___x_3_);
v___x_6_ = l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(v_P_1_);
lean_dec_ref(v_P_1_);
if (lean_obj_tag(v___x_6_) == 1)
{
lean_object* v_val_7_; lean_object* v_snd_8_; lean_object* v_snd_9_; lean_object* v_fst_10_; lean_object* v_snd_11_; lean_object* v___x_12_; 
v_val_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_val_7_);
lean_dec_ref_known(v___x_6_, 1);
v_snd_8_ = lean_ctor_get(v_val_7_, 1);
lean_inc(v_snd_8_);
lean_dec(v_val_7_);
v_snd_9_ = lean_ctor_get(v_snd_8_, 1);
lean_inc(v_snd_9_);
lean_dec(v_snd_8_);
v_fst_10_ = lean_ctor_get(v_snd_9_, 0);
lean_inc(v_fst_10_);
v_snd_11_ = lean_ctor_get(v_snd_9_, 1);
lean_inc(v_snd_11_);
lean_dec(v_snd_9_);
v___x_12_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_collectHyps(v_snd_11_, v_acc_2_);
v_P_1_ = v_fst_10_;
v_acc_2_ = v___x_12_;
goto _start;
}
else
{
lean_dec(v___x_6_);
return v_acc_2_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(lean_object* v___y_14_){
_start:
{
lean_object* v___x_16_; lean_object* v_ngen_17_; lean_object* v_namePrefix_18_; lean_object* v_idx_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_48_; 
v___x_16_ = lean_st_ref_get(v___y_14_);
v_ngen_17_ = lean_ctor_get(v___x_16_, 2);
lean_inc_ref(v_ngen_17_);
lean_dec(v___x_16_);
v_namePrefix_18_ = lean_ctor_get(v_ngen_17_, 0);
v_idx_19_ = lean_ctor_get(v_ngen_17_, 1);
v_isSharedCheck_48_ = !lean_is_exclusive(v_ngen_17_);
if (v_isSharedCheck_48_ == 0)
{
v___x_21_ = v_ngen_17_;
v_isShared_22_ = v_isSharedCheck_48_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_idx_19_);
lean_inc(v_namePrefix_18_);
lean_dec(v_ngen_17_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_48_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v_r_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_27_; 
lean_inc(v_idx_19_);
lean_inc(v_namePrefix_18_);
v_r_23_ = l_Lean_Name_num___override(v_namePrefix_18_, v_idx_19_);
v___x_24_ = lean_unsigned_to_nat(1u);
v___x_25_ = lean_nat_add(v_idx_19_, v___x_24_);
lean_dec(v_idx_19_);
if (v_isShared_22_ == 0)
{
lean_ctor_set(v___x_21_, 1, v___x_25_);
v___x_27_ = v___x_21_;
goto v_reusejp_26_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v_namePrefix_18_);
lean_ctor_set(v_reuseFailAlloc_47_, 1, v___x_25_);
v___x_27_ = v_reuseFailAlloc_47_;
goto v_reusejp_26_;
}
v_reusejp_26_:
{
lean_object* v___x_28_; lean_object* v_env_29_; lean_object* v_nextMacroScope_30_; lean_object* v_auxDeclNGen_31_; lean_object* v_traceState_32_; lean_object* v_cache_33_; lean_object* v_messages_34_; lean_object* v_infoState_35_; lean_object* v_snapshotTasks_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_45_; 
v___x_28_ = lean_st_ref_take(v___y_14_);
v_env_29_ = lean_ctor_get(v___x_28_, 0);
v_nextMacroScope_30_ = lean_ctor_get(v___x_28_, 1);
v_auxDeclNGen_31_ = lean_ctor_get(v___x_28_, 3);
v_traceState_32_ = lean_ctor_get(v___x_28_, 4);
v_cache_33_ = lean_ctor_get(v___x_28_, 5);
v_messages_34_ = lean_ctor_get(v___x_28_, 6);
v_infoState_35_ = lean_ctor_get(v___x_28_, 7);
v_snapshotTasks_36_ = lean_ctor_get(v___x_28_, 8);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_28_);
if (v_isSharedCheck_45_ == 0)
{
lean_object* v_unused_46_; 
v_unused_46_ = lean_ctor_get(v___x_28_, 2);
lean_dec(v_unused_46_);
v___x_38_ = v___x_28_;
v_isShared_39_ = v_isSharedCheck_45_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_snapshotTasks_36_);
lean_inc(v_infoState_35_);
lean_inc(v_messages_34_);
lean_inc(v_cache_33_);
lean_inc(v_traceState_32_);
lean_inc(v_auxDeclNGen_31_);
lean_inc(v_nextMacroScope_30_);
lean_inc(v_env_29_);
lean_dec(v___x_28_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_45_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
lean_object* v___x_41_; 
if (v_isShared_39_ == 0)
{
lean_ctor_set(v___x_38_, 2, v___x_27_);
v___x_41_ = v___x_38_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_env_29_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v_nextMacroScope_30_);
lean_ctor_set(v_reuseFailAlloc_44_, 2, v___x_27_);
lean_ctor_set(v_reuseFailAlloc_44_, 3, v_auxDeclNGen_31_);
lean_ctor_set(v_reuseFailAlloc_44_, 4, v_traceState_32_);
lean_ctor_set(v_reuseFailAlloc_44_, 5, v_cache_33_);
lean_ctor_set(v_reuseFailAlloc_44_, 6, v_messages_34_);
lean_ctor_set(v_reuseFailAlloc_44_, 7, v_infoState_35_);
lean_ctor_set(v_reuseFailAlloc_44_, 8, v_snapshotTasks_36_);
v___x_41_ = v_reuseFailAlloc_44_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_st_ref_put(v___y_14_, v___x_41_);
v___x_43_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_43_, 0, v_r_23_);
return v___x_43_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg___boxed(lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(v___y_49_);
lean_dec(v___y_49_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0(lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(v___y_55_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___boxed(lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0(v___y_58_, v___y_59_, v___y_60_, v___y_61_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
return v_res_63_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___closed__0(void){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lean_Meta_instInhabitedMetaM___redArg();
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2(lean_object* v_msg_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___x_71_; lean_object* v___x_3469__overap_72_; lean_object* v___x_73_; 
v___x_71_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___closed__0, &l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___closed__0);
v___x_3469__overap_72_ = lean_panic_fn_borrowed(v___x_71_, v_msg_65_);
lean_inc(v___y_69_);
lean_inc_ref(v___y_68_);
lean_inc(v___y_67_);
lean_inc_ref(v___y_66_);
v___x_73_ = lean_apply_5(v___x_3469__overap_72_, v___y_66_, v___y_67_, v___y_68_, v___y_69_, lean_box(0));
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___boxed(lean_object* v_msg_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2(v_msg_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
lean_dec(v___y_76_);
lean_dec_ref(v___y_75_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg(lean_object* v_a_84_, lean_object* v_Ps_85_, lean_object* v_a_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
lean_object* v_snd_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_178_; 
v_snd_92_ = lean_ctor_get(v_a_86_, 1);
v_isSharedCheck_178_ = !lean_is_exclusive(v_a_86_);
if (v_isSharedCheck_178_ == 0)
{
lean_object* v_unused_179_; 
v_unused_179_ = lean_ctor_get(v_a_86_, 0);
lean_dec(v_unused_179_);
v___x_94_ = v_a_86_;
v_isShared_95_ = v_isSharedCheck_178_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_snd_92_);
lean_dec(v_a_86_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_178_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_box(0);
v___x_97_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1));
v___x_98_ = l_Lean_Core_mkFreshUserName(v___x_97_, v___y_89_, v___y_90_);
if (lean_obj_tag(v___x_98_) == 0)
{
lean_object* v_a_99_; lean_object* v___x_100_; 
v_a_99_ = lean_ctor_get(v___x_98_, 0);
lean_inc(v_a_99_);
lean_dec_ref_known(v___x_98_, 1);
v___x_100_ = l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(v___y_90_);
if (lean_obj_tag(v___x_100_) == 0)
{
if (lean_obj_tag(v_snd_92_) == 1)
{
lean_object* v_head_101_; lean_object* v_tail_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_146_; 
lean_dec_ref_known(v___x_100_, 1);
lean_dec(v_a_99_);
v_head_101_ = lean_ctor_get(v_snd_92_, 0);
v_tail_102_ = lean_ctor_get(v_snd_92_, 1);
v_isSharedCheck_146_ = !lean_is_exclusive(v_snd_92_);
if (v_isSharedCheck_146_ == 0)
{
v___x_104_ = v_snd_92_;
v_isShared_105_ = v_isSharedCheck_146_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_tail_102_);
lean_inc(v_head_101_);
lean_dec(v_snd_92_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_146_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v_name_106_; lean_object* v_uniq_107_; lean_object* v_p_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_145_; 
v_name_106_ = lean_ctor_get(v_head_101_, 0);
v_uniq_107_ = lean_ctor_get(v_head_101_, 1);
v_p_108_ = lean_ctor_get(v_head_101_, 2);
v_isSharedCheck_145_ = !lean_is_exclusive(v_head_101_);
if (v_isSharedCheck_145_ == 0)
{
v___x_110_ = v_head_101_;
v_isShared_111_ = v_isSharedCheck_145_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_p_108_);
lean_inc(v_uniq_107_);
lean_inc(v_name_106_);
lean_dec(v_head_101_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_145_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_112_; 
lean_inc_ref(v_a_84_);
v___x_112_ = l_Lean_Meta_isExprDefEq(v_p_108_, v_a_84_, v___y_87_, v___y_88_, v___y_89_, v___y_90_);
if (lean_obj_tag(v___x_112_) == 0)
{
lean_object* v_a_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_136_; 
v_a_113_ = lean_ctor_get(v___x_112_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v___x_112_);
if (v_isSharedCheck_136_ == 0)
{
v___x_115_ = v___x_112_;
v_isShared_116_ = v_isSharedCheck_136_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_a_113_);
lean_dec(v___x_112_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_136_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
uint8_t v___x_117_; 
v___x_117_ = lean_unbox(v_a_113_);
lean_dec(v_a_113_);
if (v___x_117_ == 0)
{
lean_object* v___x_119_; 
lean_del_object(v___x_115_);
lean_del_object(v___x_110_);
lean_dec(v_uniq_107_);
lean_dec(v_name_106_);
lean_del_object(v___x_104_);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 1, v_tail_102_);
lean_ctor_set(v___x_94_, 0, v___x_96_);
v___x_119_ = v___x_94_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v___x_96_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v_tail_102_);
v___x_119_ = v_reuseFailAlloc_121_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
v_a_86_ = v___x_119_;
goto _start;
}
}
else
{
lean_object* v___x_123_; 
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 2, v_a_84_);
v___x_123_ = v___x_110_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_name_106_);
lean_ctor_set(v_reuseFailAlloc_135_, 1, v_uniq_107_);
lean_ctor_set(v_reuseFailAlloc_135_, 2, v_a_84_);
v___x_123_ = v_reuseFailAlloc_135_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
lean_object* v___x_124_; lean_object* v___x_126_; 
v___x_124_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_123_);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 1, v___x_124_);
lean_ctor_set(v___x_94_, 0, v_Ps_85_);
v___x_126_ = v___x_94_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_Ps_85_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v___x_124_);
v___x_126_ = v_reuseFailAlloc_134_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
lean_object* v___x_127_; lean_object* v___x_129_; 
v___x_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
if (v_isShared_105_ == 0)
{
lean_ctor_set_tag(v___x_104_, 0);
lean_ctor_set(v___x_104_, 0, v___x_127_);
v___x_129_ = v___x_104_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_127_);
lean_ctor_set(v_reuseFailAlloc_133_, 1, v_tail_102_);
v___x_129_ = v_reuseFailAlloc_133_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
lean_object* v___x_131_; 
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 0, v___x_129_);
v___x_131_ = v___x_115_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_129_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_144_; 
lean_del_object(v___x_110_);
lean_dec(v_uniq_107_);
lean_dec(v_name_106_);
lean_del_object(v___x_104_);
lean_dec(v_tail_102_);
lean_del_object(v___x_94_);
lean_dec(v_Ps_85_);
lean_dec_ref(v_a_84_);
v_a_137_ = lean_ctor_get(v___x_112_, 0);
v_isSharedCheck_144_ = !lean_is_exclusive(v___x_112_);
if (v_isSharedCheck_144_ == 0)
{
v___x_139_ = v___x_112_;
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_a_137_);
lean_dec(v___x_112_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_142_; 
if (v_isShared_140_ == 0)
{
v___x_142_ = v___x_139_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v_a_137_);
v___x_142_ = v_reuseFailAlloc_143_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
return v___x_142_;
}
}
}
}
}
}
else
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_161_; 
v_a_147_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_161_ == 0)
{
v___x_149_ = v___x_100_;
v_isShared_150_ = v_isSharedCheck_161_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v___x_100_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_161_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_154_; 
v___x_151_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_151_, 0, v_a_99_);
lean_ctor_set(v___x_151_, 1, v_a_147_);
lean_ctor_set(v___x_151_, 2, v_a_84_);
v___x_152_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_151_);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 1, v___x_152_);
lean_ctor_set(v___x_94_, 0, v_Ps_85_);
v___x_154_ = v___x_94_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_Ps_85_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v___x_152_);
v___x_154_ = v_reuseFailAlloc_160_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
v___x_156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
lean_ctor_set(v___x_156_, 1, v_snd_92_);
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 0, v___x_156_);
v___x_158_ = v___x_149_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_156_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
}
}
else
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_169_; 
lean_dec(v_a_99_);
lean_del_object(v___x_94_);
lean_dec(v_snd_92_);
lean_dec(v_Ps_85_);
lean_dec_ref(v_a_84_);
v_a_162_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_169_ == 0)
{
v___x_164_ = v___x_100_;
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_100_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_167_; 
if (v_isShared_165_ == 0)
{
v___x_167_ = v___x_164_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_a_162_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
}
else
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
lean_del_object(v___x_94_);
lean_dec(v_snd_92_);
lean_dec(v_Ps_85_);
lean_dec_ref(v_a_84_);
v_a_170_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_177_ == 0)
{
v___x_172_ = v___x_98_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_98_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_a_170_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___boxed(lean_object* v_a_180_, lean_object* v_Ps_181_, lean_object* v_a_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg(v_a_180_, v_Ps_181_, v_a_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_);
lean_dec(v___y_186_);
lean_dec_ref(v___y_185_);
lean_dec(v___y_184_);
lean_dec_ref(v___y_183_);
return v_res_188_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_192_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__2));
v___x_193_ = lean_unsigned_to_nat(8u);
v___x_194_ = lean_unsigned_to_nat(51u);
v___x_195_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__1));
v___x_196_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__0));
v___x_197_ = l_mkPanicMessageWithDecl(v___x_196_, v___x_195_, v___x_194_, v___x_193_, v___x_192_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(lean_object* v_Ps_198_, lean_object* v_P_x27_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_P_x27_199_, v___y_201_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_269_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_269_ == 0)
{
v___x_208_ = v___x_205_;
v_isShared_209_ = v_isSharedCheck_269_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v___x_205_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_269_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; 
lean_inc(v_a_206_);
v___x_210_ = l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(v_a_206_);
if (lean_obj_tag(v___x_210_) == 1)
{
lean_object* v___x_211_; lean_object* v___x_213_; 
lean_dec_ref_known(v___x_210_, 1);
v___x_211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_211_, 0, v_Ps_198_);
lean_ctor_set(v___x_211_, 1, v_a_206_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_211_);
v___x_213_ = v___x_208_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_211_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
else
{
lean_object* v___x_215_; 
lean_dec(v___x_210_);
lean_del_object(v___x_208_);
v___x_215_ = l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(v_a_206_);
if (lean_obj_tag(v___x_215_) == 1)
{
lean_object* v_val_216_; lean_object* v_snd_217_; lean_object* v_snd_218_; lean_object* v_fst_219_; lean_object* v_fst_220_; lean_object* v_fst_221_; lean_object* v_snd_222_; lean_object* v___x_223_; 
lean_dec(v_a_206_);
v_val_216_ = lean_ctor_get(v___x_215_, 0);
lean_inc(v_val_216_);
lean_dec_ref_known(v___x_215_, 1);
v_snd_217_ = lean_ctor_get(v_val_216_, 1);
lean_inc(v_snd_217_);
v_snd_218_ = lean_ctor_get(v_snd_217_, 1);
lean_inc(v_snd_218_);
v_fst_219_ = lean_ctor_get(v_val_216_, 0);
lean_inc(v_fst_219_);
lean_dec(v_val_216_);
v_fst_220_ = lean_ctor_get(v_snd_217_, 0);
lean_inc(v_fst_220_);
lean_dec(v_snd_217_);
v_fst_221_ = lean_ctor_get(v_snd_218_, 0);
lean_inc(v_fst_221_);
v_snd_222_ = lean_ctor_get(v_snd_218_, 1);
lean_inc(v_snd_222_);
lean_dec(v_snd_218_);
v___x_223_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(v_Ps_198_, v_fst_221_, v___y_200_, v___y_201_, v___y_202_, v___y_203_);
if (lean_obj_tag(v___x_223_) == 0)
{
lean_object* v_a_224_; lean_object* v_fst_225_; lean_object* v_snd_226_; lean_object* v___x_227_; 
v_a_224_ = lean_ctor_get(v___x_223_, 0);
lean_inc(v_a_224_);
lean_dec_ref_known(v___x_223_, 1);
v_fst_225_ = lean_ctor_get(v_a_224_, 0);
lean_inc(v_fst_225_);
v_snd_226_ = lean_ctor_get(v_a_224_, 1);
lean_inc(v_snd_226_);
lean_dec(v_a_224_);
v___x_227_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(v_fst_225_, v_snd_222_, v___y_200_, v___y_201_, v___y_202_, v___y_203_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_object* v_a_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_245_; 
v_a_228_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_245_ == 0)
{
v___x_230_ = v___x_227_;
v_isShared_231_ = v_isSharedCheck_245_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_a_228_);
lean_dec(v___x_227_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_245_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v_fst_232_; lean_object* v_snd_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_244_; 
v_fst_232_ = lean_ctor_get(v_a_228_, 0);
v_snd_233_ = lean_ctor_get(v_a_228_, 1);
v_isSharedCheck_244_ = !lean_is_exclusive(v_a_228_);
if (v_isSharedCheck_244_ == 0)
{
v___x_235_ = v_a_228_;
v_isShared_236_ = v_isSharedCheck_244_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_snd_233_);
lean_inc(v_fst_232_);
lean_dec(v_a_228_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_244_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_237_; lean_object* v___x_239_; 
v___x_237_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_fst_219_, v_fst_220_, v_snd_226_, v_snd_233_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v___x_237_);
v___x_239_ = v___x_235_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_fst_232_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v___x_237_);
v___x_239_ = v_reuseFailAlloc_243_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
lean_object* v___x_241_; 
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 0, v___x_239_);
v___x_241_ = v___x_230_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_239_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
}
else
{
lean_dec(v_snd_226_);
lean_dec(v_fst_220_);
lean_dec(v_fst_219_);
return v___x_227_;
}
}
else
{
lean_dec(v_snd_222_);
lean_dec(v_fst_220_);
lean_dec(v_fst_219_);
return v___x_223_;
}
}
else
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
lean_dec(v___x_215_);
v___x_246_ = lean_box(0);
lean_inc(v_Ps_198_);
v___x_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
lean_ctor_set(v___x_247_, 1, v_Ps_198_);
v___x_248_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg(v_a_206_, v_Ps_198_, v___x_247_, v___y_200_, v___y_201_, v___y_202_, v___y_203_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_260_; 
v_a_249_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_260_ == 0)
{
v___x_251_ = v___x_248_;
v_isShared_252_ = v_isSharedCheck_260_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_248_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_260_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v_fst_253_; 
v_fst_253_ = lean_ctor_get(v_a_249_, 0);
lean_inc(v_fst_253_);
lean_dec(v_a_249_);
if (lean_obj_tag(v_fst_253_) == 0)
{
lean_object* v___x_254_; lean_object* v___x_255_; 
lean_del_object(v___x_251_);
v___x_254_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3, &l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3);
v___x_255_ = l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2(v___x_254_, v___y_200_, v___y_201_, v___y_202_, v___y_203_);
return v___x_255_;
}
else
{
lean_object* v_val_256_; lean_object* v___x_258_; 
v_val_256_ = lean_ctor_get(v_fst_253_, 0);
lean_inc(v_val_256_);
lean_dec_ref_known(v_fst_253_, 1);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 0, v_val_256_);
v___x_258_ = v___x_251_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_val_256_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
else
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_268_; 
v_a_261_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_268_ == 0)
{
v___x_263_ = v___x_248_;
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___x_248_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_261_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_277_; 
lean_dec(v_Ps_198_);
v_a_270_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_277_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_277_ == 0)
{
v___x_272_ = v___x_205_;
v_isShared_273_ = v_isSharedCheck_277_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_a_270_);
lean_dec(v___x_205_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_277_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_275_; 
if (v_isShared_273_ == 0)
{
v___x_275_ = v___x_272_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v_a_270_);
v___x_275_ = v_reuseFailAlloc_276_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
return v___x_275_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___boxed(lean_object* v_Ps_278_, lean_object* v_P_x27_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(v_Ps_278_, v_P_x27_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_);
lean_dec(v___y_283_);
lean_dec_ref(v___y_282_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1(lean_object* v_a_286_, lean_object* v_Ps_287_, lean_object* v_inst_288_, lean_object* v_a_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg(v_a_286_, v_Ps_287_, v_a_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___boxed(lean_object* v_a_296_, lean_object* v_Ps_297_, lean_object* v_inst_298_, lean_object* v_a_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1(v_a_296_, v_Ps_297_, v_inst_298_, v_a_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames(lean_object* v_P_306_, lean_object* v_P_x27_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_313_ = lean_box(0);
v___x_314_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_collectHyps(v_P_306_, v___x_313_);
v___x_315_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(v___x_314_, v_P_x27_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_);
if (lean_obj_tag(v___x_315_) == 0)
{
lean_object* v_a_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_324_; 
v_a_316_ = lean_ctor_get(v___x_315_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_315_);
if (v_isSharedCheck_324_ == 0)
{
v___x_318_ = v___x_315_;
v_isShared_319_ = v_isSharedCheck_324_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_a_316_);
lean_dec(v___x_315_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_324_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v_snd_320_; lean_object* v___x_322_; 
v_snd_320_ = lean_ctor_get(v_a_316_, 1);
lean_inc(v_snd_320_);
lean_dec(v_a_316_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 0, v_snd_320_);
v___x_322_ = v___x_318_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_snd_320_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
else
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
v_a_325_ = lean_ctor_get(v___x_315_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_315_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___x_315_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_315_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_a_325_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames___boxed(lean_object* v_P_333_, lean_object* v_P_x27_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames(v_P_333_, v_P_x27_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0(lean_object* v___x_343_, lean_object* v___x_344_, lean_object* v___x_345_, lean_object* v___x_346_, lean_object* v___x_347_, lean_object* v_00_u03c3s_348_, lean_object* v_hyps_349_, lean_object* v_P_x27_350_, lean_object* v_target_351_, lean_object* v_00_u03c6_352_, lean_object* v_a_353_, lean_object* v_toPure_354_, lean_object* v_prf_355_){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v_prf_360_; lean_object* v___x_361_; 
v___x_356_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0));
v___x_357_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1));
v___x_358_ = l_Lean_Name_mkStr6(v___x_343_, v___x_344_, v___x_345_, v___x_346_, v___x_356_, v___x_357_);
v___x_359_ = l_Lean_mkConst(v___x_358_, v___x_347_);
v_prf_360_ = l_Lean_mkApp7(v___x_359_, v_00_u03c3s_348_, v_hyps_349_, v_P_x27_350_, v_target_351_, v_00_u03c6_352_, v_a_353_, v_prf_355_);
v___x_361_ = lean_apply_2(v_toPure_354_, lean_box(0), v_prf_360_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1(lean_object* v_h_u03c6_362_, uint8_t v_____do__lift_363_, uint8_t v___x_364_, lean_object* v_inst_365_, lean_object* v_toBind_366_, lean_object* v___f_367_, lean_object* v_prf_368_){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; uint8_t v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_369_ = lean_unsigned_to_nat(1u);
v___x_370_ = lean_mk_empty_array_with_capacity(v___x_369_);
v___x_371_ = lean_array_push(v___x_370_, v_h_u03c6_362_);
v___x_372_ = 1;
v___x_373_ = lean_box(v_____do__lift_363_);
v___x_374_ = lean_box(v___x_364_);
v___x_375_ = lean_box(v_____do__lift_363_);
v___x_376_ = lean_box(v___x_364_);
v___x_377_ = lean_box(v___x_372_);
v___x_378_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_378_, 0, v___x_371_);
lean_closure_set(v___x_378_, 1, v_prf_368_);
lean_closure_set(v___x_378_, 2, v___x_373_);
lean_closure_set(v___x_378_, 3, v___x_374_);
lean_closure_set(v___x_378_, 4, v___x_375_);
lean_closure_set(v___x_378_, 5, v___x_376_);
lean_closure_set(v___x_378_, 6, v___x_377_);
v___x_379_ = lean_apply_2(v_inst_365_, lean_box(0), v___x_378_);
v___x_380_ = lean_apply_4(v_toBind_366_, lean_box(0), lean_box(0), v___x_379_, v___f_367_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1___boxed(lean_object* v_h_u03c6_381_, lean_object* v_____do__lift_382_, lean_object* v___x_383_, lean_object* v_inst_384_, lean_object* v_toBind_385_, lean_object* v___f_386_, lean_object* v_prf_387_){
_start:
{
uint8_t v_____do__lift_392__boxed_388_; uint8_t v___x_393__boxed_389_; lean_object* v_res_390_; 
v_____do__lift_392__boxed_388_ = lean_unbox(v_____do__lift_382_);
v___x_393__boxed_389_ = lean_unbox(v___x_383_);
v_res_390_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1(v_h_u03c6_381_, v_____do__lift_392__boxed_388_, v___x_393__boxed_389_, v_inst_384_, v_toBind_385_, v___f_386_, v_prf_387_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2(uint8_t v_____do__lift_391_, uint8_t v___x_392_, lean_object* v_inst_393_, lean_object* v_toBind_394_, lean_object* v___f_395_, lean_object* v_kSuccess_396_, lean_object* v_00_u03c6_397_, lean_object* v_goal_398_, lean_object* v_h_u03c6_399_){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___f_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_400_ = lean_box(v_____do__lift_391_);
v___x_401_ = lean_box(v___x_392_);
lean_inc(v_toBind_394_);
lean_inc_ref(v_h_u03c6_399_);
v___f_402_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_402_, 0, v_h_u03c6_399_);
lean_closure_set(v___f_402_, 1, v___x_400_);
lean_closure_set(v___f_402_, 2, v___x_401_);
lean_closure_set(v___f_402_, 3, v_inst_393_);
lean_closure_set(v___f_402_, 4, v_toBind_394_);
lean_closure_set(v___f_402_, 5, v___f_395_);
v___x_403_ = lean_apply_3(v_kSuccess_396_, v_00_u03c6_397_, v_h_u03c6_399_, v_goal_398_);
v___x_404_ = lean_apply_4(v_toBind_394_, lean_box(0), lean_box(0), v___x_403_, v___f_402_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2___boxed(lean_object* v_____do__lift_405_, lean_object* v___x_406_, lean_object* v_inst_407_, lean_object* v_toBind_408_, lean_object* v___f_409_, lean_object* v_kSuccess_410_, lean_object* v_00_u03c6_411_, lean_object* v_goal_412_, lean_object* v_h_u03c6_413_){
_start:
{
uint8_t v_____do__lift_428__boxed_414_; uint8_t v___x_429__boxed_415_; lean_object* v_res_416_; 
v_____do__lift_428__boxed_414_ = lean_unbox(v_____do__lift_405_);
v___x_429__boxed_415_ = lean_unbox(v___x_406_);
v_res_416_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2(v_____do__lift_428__boxed_414_, v___x_429__boxed_415_, v_inst_407_, v_toBind_408_, v___f_409_, v_kSuccess_410_, v_00_u03c6_411_, v_goal_412_, v_h_u03c6_413_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__3(lean_object* v_inst_417_, lean_object* v_inst_418_, lean_object* v_00_u03c6_419_, lean_object* v___f_420_, lean_object* v_____do__lift_421_){
_start:
{
lean_object* v___x_422_; 
v___x_422_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_417_, v_inst_418_, v_____do__lift_421_, v_00_u03c6_419_, v___f_420_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4(lean_object* v___x_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l_Lean_Core_mkFreshUserName(v___x_423_, v___y_426_, v___y_427_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4___boxed(lean_object* v___x_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4(v___x_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_);
lean_dec(v___y_434_);
lean_dec_ref(v___y_433_);
lean_dec(v___y_432_);
lean_dec_ref(v___y_431_);
return v_res_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5(lean_object* v___x_439_, lean_object* v___x_440_, lean_object* v___x_441_, lean_object* v___x_442_, lean_object* v___x_443_, lean_object* v_00_u03c3s_444_, lean_object* v_hyps_445_, lean_object* v_target_446_, lean_object* v_00_u03c6_447_, lean_object* v_a_448_, lean_object* v_toPure_449_, lean_object* v_u_450_, uint8_t v_____do__lift_451_, uint8_t v___x_452_, lean_object* v_inst_453_, lean_object* v_toBind_454_, lean_object* v_kSuccess_455_, lean_object* v_inst_456_, lean_object* v_inst_457_, lean_object* v_P_x27_458_){
_start:
{
lean_object* v___f_459_; lean_object* v_goal_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___f_463_; lean_object* v___f_464_; lean_object* v___f_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
lean_inc_ref_n(v_00_u03c6_447_, 2);
lean_inc_ref(v_target_446_);
lean_inc_ref(v_P_x27_458_);
lean_inc_ref(v_00_u03c3s_444_);
v___f_459_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0), 13, 12);
lean_closure_set(v___f_459_, 0, v___x_439_);
lean_closure_set(v___f_459_, 1, v___x_440_);
lean_closure_set(v___f_459_, 2, v___x_441_);
lean_closure_set(v___f_459_, 3, v___x_442_);
lean_closure_set(v___f_459_, 4, v___x_443_);
lean_closure_set(v___f_459_, 5, v_00_u03c3s_444_);
lean_closure_set(v___f_459_, 6, v_hyps_445_);
lean_closure_set(v___f_459_, 7, v_P_x27_458_);
lean_closure_set(v___f_459_, 8, v_target_446_);
lean_closure_set(v___f_459_, 9, v_00_u03c6_447_);
lean_closure_set(v___f_459_, 10, v_a_448_);
lean_closure_set(v___f_459_, 11, v_toPure_449_);
v_goal_460_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_goal_460_, 0, v_u_450_);
lean_ctor_set(v_goal_460_, 1, v_00_u03c3s_444_);
lean_ctor_set(v_goal_460_, 2, v_P_x27_458_);
lean_ctor_set(v_goal_460_, 3, v_target_446_);
v___x_461_ = lean_box(v_____do__lift_451_);
v___x_462_ = lean_box(v___x_452_);
lean_inc(v_toBind_454_);
lean_inc(v_inst_453_);
v___f_463_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_463_, 0, v___x_461_);
lean_closure_set(v___f_463_, 1, v___x_462_);
lean_closure_set(v___f_463_, 2, v_inst_453_);
lean_closure_set(v___f_463_, 3, v_toBind_454_);
lean_closure_set(v___f_463_, 4, v___f_459_);
lean_closure_set(v___f_463_, 5, v_kSuccess_455_);
lean_closure_set(v___f_463_, 6, v_00_u03c6_447_);
lean_closure_set(v___f_463_, 7, v_goal_460_);
v___f_464_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__3), 5, 4);
lean_closure_set(v___f_464_, 0, v_inst_456_);
lean_closure_set(v___f_464_, 1, v_inst_457_);
lean_closure_set(v___f_464_, 2, v_00_u03c6_447_);
lean_closure_set(v___f_464_, 3, v___f_463_);
v___f_465_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0));
v___x_466_ = lean_apply_2(v_inst_453_, lean_box(0), v___f_465_);
v___x_467_ = lean_apply_4(v_toBind_454_, lean_box(0), lean_box(0), v___x_466_, v___f_464_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___boxed(lean_object** _args){
lean_object* v___x_468_ = _args[0];
lean_object* v___x_469_ = _args[1];
lean_object* v___x_470_ = _args[2];
lean_object* v___x_471_ = _args[3];
lean_object* v___x_472_ = _args[4];
lean_object* v_00_u03c3s_473_ = _args[5];
lean_object* v_hyps_474_ = _args[6];
lean_object* v_target_475_ = _args[7];
lean_object* v_00_u03c6_476_ = _args[8];
lean_object* v_a_477_ = _args[9];
lean_object* v_toPure_478_ = _args[10];
lean_object* v_u_479_ = _args[11];
lean_object* v_____do__lift_480_ = _args[12];
lean_object* v___x_481_ = _args[13];
lean_object* v_inst_482_ = _args[14];
lean_object* v_toBind_483_ = _args[15];
lean_object* v_kSuccess_484_ = _args[16];
lean_object* v_inst_485_ = _args[17];
lean_object* v_inst_486_ = _args[18];
lean_object* v_P_x27_487_ = _args[19];
_start:
{
uint8_t v_____do__lift_493__boxed_488_; uint8_t v___x_494__boxed_489_; lean_object* v_res_490_; 
v_____do__lift_493__boxed_488_ = lean_unbox(v_____do__lift_480_);
v___x_494__boxed_489_ = lean_unbox(v___x_481_);
v_res_490_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5(v___x_468_, v___x_469_, v___x_470_, v___x_471_, v___x_472_, v_00_u03c3s_473_, v_hyps_474_, v_target_475_, v_00_u03c6_476_, v_a_477_, v_toPure_478_, v_u_479_, v_____do__lift_493__boxed_488_, v___x_494__boxed_489_, v_inst_482_, v_toBind_483_, v_kSuccess_484_, v_inst_485_, v_inst_486_, v_P_x27_487_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6(lean_object* v___x_491_, lean_object* v___x_492_, lean_object* v___x_493_, lean_object* v___x_494_, lean_object* v___x_495_, lean_object* v_00_u03c3s_496_, lean_object* v_hyps_497_, lean_object* v_target_498_, lean_object* v_00_u03c6_499_, lean_object* v_a_500_, lean_object* v_toPure_501_, lean_object* v_u_502_, lean_object* v_inst_503_, lean_object* v_toBind_504_, lean_object* v_kSuccess_505_, lean_object* v_inst_506_, lean_object* v_inst_507_, lean_object* v_P_x27_508_, lean_object* v_kFail_509_, uint8_t v_____do__lift_510_){
_start:
{
if (v_____do__lift_510_ == 0)
{
uint8_t v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___f_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_511_ = 1;
v___x_512_ = lean_box(v_____do__lift_510_);
v___x_513_ = lean_box(v___x_511_);
lean_inc(v_toBind_504_);
lean_inc(v_inst_503_);
lean_inc_ref(v_hyps_497_);
v___f_514_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___boxed), 20, 19);
lean_closure_set(v___f_514_, 0, v___x_491_);
lean_closure_set(v___f_514_, 1, v___x_492_);
lean_closure_set(v___f_514_, 2, v___x_493_);
lean_closure_set(v___f_514_, 3, v___x_494_);
lean_closure_set(v___f_514_, 4, v___x_495_);
lean_closure_set(v___f_514_, 5, v_00_u03c3s_496_);
lean_closure_set(v___f_514_, 6, v_hyps_497_);
lean_closure_set(v___f_514_, 7, v_target_498_);
lean_closure_set(v___f_514_, 8, v_00_u03c6_499_);
lean_closure_set(v___f_514_, 9, v_a_500_);
lean_closure_set(v___f_514_, 10, v_toPure_501_);
lean_closure_set(v___f_514_, 11, v_u_502_);
lean_closure_set(v___f_514_, 12, v___x_512_);
lean_closure_set(v___f_514_, 13, v___x_513_);
lean_closure_set(v___f_514_, 14, v_inst_503_);
lean_closure_set(v___f_514_, 15, v_toBind_504_);
lean_closure_set(v___f_514_, 16, v_kSuccess_505_);
lean_closure_set(v___f_514_, 17, v_inst_506_);
lean_closure_set(v___f_514_, 18, v_inst_507_);
v___x_515_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames___boxed), 7, 2);
lean_closure_set(v___x_515_, 0, v_hyps_497_);
lean_closure_set(v___x_515_, 1, v_P_x27_508_);
v___x_516_ = lean_apply_2(v_inst_503_, lean_box(0), v___x_515_);
v___x_517_ = lean_apply_4(v_toBind_504_, lean_box(0), lean_box(0), v___x_516_, v___f_514_);
return v___x_517_;
}
else
{
lean_dec_ref(v_P_x27_508_);
lean_dec_ref(v_inst_507_);
lean_dec_ref(v_inst_506_);
lean_dec(v_kSuccess_505_);
lean_dec(v_toBind_504_);
lean_dec(v_inst_503_);
lean_dec(v_u_502_);
lean_dec(v_toPure_501_);
lean_dec_ref(v_a_500_);
lean_dec_ref(v_00_u03c6_499_);
lean_dec_ref(v_target_498_);
lean_dec_ref(v_hyps_497_);
lean_dec_ref(v_00_u03c3s_496_);
lean_dec(v___x_495_);
lean_dec_ref(v___x_494_);
lean_dec_ref(v___x_493_);
lean_dec_ref(v___x_492_);
lean_dec_ref(v___x_491_);
lean_inc(v_kFail_509_);
return v_kFail_509_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6___boxed(lean_object** _args){
lean_object* v___x_518_ = _args[0];
lean_object* v___x_519_ = _args[1];
lean_object* v___x_520_ = _args[2];
lean_object* v___x_521_ = _args[3];
lean_object* v___x_522_ = _args[4];
lean_object* v_00_u03c3s_523_ = _args[5];
lean_object* v_hyps_524_ = _args[6];
lean_object* v_target_525_ = _args[7];
lean_object* v_00_u03c6_526_ = _args[8];
lean_object* v_a_527_ = _args[9];
lean_object* v_toPure_528_ = _args[10];
lean_object* v_u_529_ = _args[11];
lean_object* v_inst_530_ = _args[12];
lean_object* v_toBind_531_ = _args[13];
lean_object* v_kSuccess_532_ = _args[14];
lean_object* v_inst_533_ = _args[15];
lean_object* v_inst_534_ = _args[16];
lean_object* v_P_x27_535_ = _args[17];
lean_object* v_kFail_536_ = _args[18];
lean_object* v_____do__lift_537_ = _args[19];
_start:
{
uint8_t v_____do__lift_547__boxed_538_; lean_object* v_res_539_; 
v_____do__lift_547__boxed_538_ = lean_unbox(v_____do__lift_537_);
v_res_539_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6(v___x_518_, v___x_519_, v___x_520_, v___x_521_, v___x_522_, v_00_u03c3s_523_, v_hyps_524_, v_target_525_, v_00_u03c6_526_, v_a_527_, v_toPure_528_, v_u_529_, v_inst_530_, v_toBind_531_, v_kSuccess_532_, v_inst_533_, v_inst_534_, v_P_x27_535_, v_kFail_536_, v_____do__lift_547__boxed_538_);
lean_dec(v_kFail_536_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7(lean_object* v___x_543_, lean_object* v___x_544_, lean_object* v___x_545_, lean_object* v___x_546_, lean_object* v___x_547_, lean_object* v_00_u03c3s_548_, lean_object* v_hyps_549_, lean_object* v_target_550_, lean_object* v_00_u03c6_551_, lean_object* v_toPure_552_, lean_object* v_u_553_, lean_object* v_inst_554_, lean_object* v_toBind_555_, lean_object* v_kSuccess_556_, lean_object* v_inst_557_, lean_object* v_inst_558_, lean_object* v_P_x27_559_, lean_object* v_kFail_560_, lean_object* v___x_561_, lean_object* v_____do__lift_562_){
_start:
{
if (lean_obj_tag(v_____do__lift_562_) == 1)
{
lean_object* v_a_563_; lean_object* v___f_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v_a_563_ = lean_ctor_get(v_____do__lift_562_, 0);
lean_inc(v_a_563_);
lean_dec_ref_known(v_____do__lift_562_, 1);
lean_inc(v_toBind_555_);
lean_inc(v_inst_554_);
lean_inc_ref(v_00_u03c6_551_);
v___f_564_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6___boxed), 20, 19);
lean_closure_set(v___f_564_, 0, v___x_543_);
lean_closure_set(v___f_564_, 1, v___x_544_);
lean_closure_set(v___f_564_, 2, v___x_545_);
lean_closure_set(v___f_564_, 3, v___x_546_);
lean_closure_set(v___f_564_, 4, v___x_547_);
lean_closure_set(v___f_564_, 5, v_00_u03c3s_548_);
lean_closure_set(v___f_564_, 6, v_hyps_549_);
lean_closure_set(v___f_564_, 7, v_target_550_);
lean_closure_set(v___f_564_, 8, v_00_u03c6_551_);
lean_closure_set(v___f_564_, 9, v_a_563_);
lean_closure_set(v___f_564_, 10, v_toPure_552_);
lean_closure_set(v___f_564_, 11, v_u_553_);
lean_closure_set(v___f_564_, 12, v_inst_554_);
lean_closure_set(v___f_564_, 13, v_toBind_555_);
lean_closure_set(v___f_564_, 14, v_kSuccess_556_);
lean_closure_set(v___f_564_, 15, v_inst_557_);
lean_closure_set(v___f_564_, 16, v_inst_558_);
lean_closure_set(v___f_564_, 17, v_P_x27_559_);
lean_closure_set(v___f_564_, 18, v_kFail_560_);
v___x_565_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1));
v___x_566_ = l_Lean_mkConst(v___x_565_, v___x_561_);
v___x_567_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq___boxed), 7, 2);
lean_closure_set(v___x_567_, 0, v___x_566_);
lean_closure_set(v___x_567_, 1, v_00_u03c6_551_);
v___x_568_ = lean_apply_2(v_inst_554_, lean_box(0), v___x_567_);
v___x_569_ = lean_apply_4(v_toBind_555_, lean_box(0), lean_box(0), v___x_568_, v___f_564_);
return v___x_569_;
}
else
{
lean_dec(v_____do__lift_562_);
lean_dec(v___x_561_);
lean_dec_ref(v_P_x27_559_);
lean_dec_ref(v_inst_558_);
lean_dec_ref(v_inst_557_);
lean_dec(v_kSuccess_556_);
lean_dec(v_toBind_555_);
lean_dec(v_inst_554_);
lean_dec(v_u_553_);
lean_dec(v_toPure_552_);
lean_dec_ref(v_00_u03c6_551_);
lean_dec_ref(v_target_550_);
lean_dec_ref(v_hyps_549_);
lean_dec_ref(v_00_u03c3s_548_);
lean_dec(v___x_547_);
lean_dec_ref(v___x_546_);
lean_dec_ref(v___x_545_);
lean_dec_ref(v___x_544_);
lean_dec_ref(v___x_543_);
return v_kFail_560_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___boxed(lean_object** _args){
lean_object* v___x_570_ = _args[0];
lean_object* v___x_571_ = _args[1];
lean_object* v___x_572_ = _args[2];
lean_object* v___x_573_ = _args[3];
lean_object* v___x_574_ = _args[4];
lean_object* v_00_u03c3s_575_ = _args[5];
lean_object* v_hyps_576_ = _args[6];
lean_object* v_target_577_ = _args[7];
lean_object* v_00_u03c6_578_ = _args[8];
lean_object* v_toPure_579_ = _args[9];
lean_object* v_u_580_ = _args[10];
lean_object* v_inst_581_ = _args[11];
lean_object* v_toBind_582_ = _args[12];
lean_object* v_kSuccess_583_ = _args[13];
lean_object* v_inst_584_ = _args[14];
lean_object* v_inst_585_ = _args[15];
lean_object* v_P_x27_586_ = _args[16];
lean_object* v_kFail_587_ = _args[17];
lean_object* v___x_588_ = _args[18];
lean_object* v_____do__lift_589_ = _args[19];
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7(v___x_570_, v___x_571_, v___x_572_, v___x_573_, v___x_574_, v_00_u03c3s_575_, v_hyps_576_, v_target_577_, v_00_u03c6_578_, v_toPure_579_, v_u_580_, v_inst_581_, v_toBind_582_, v_kSuccess_583_, v_inst_584_, v_inst_585_, v_P_x27_586_, v_kFail_587_, v___x_588_, v_____do__lift_589_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8(lean_object* v___x_593_, lean_object* v___x_594_, lean_object* v___x_595_, lean_object* v___x_596_, lean_object* v_00_u03c3s_597_, lean_object* v_hyps_598_, lean_object* v_target_599_, lean_object* v_00_u03c6_600_, lean_object* v_toPure_601_, lean_object* v_u_602_, lean_object* v_inst_603_, lean_object* v_toBind_604_, lean_object* v_kSuccess_605_, lean_object* v_inst_606_, lean_object* v_inst_607_, lean_object* v_kFail_608_, lean_object* v___x_609_, lean_object* v_P_x27_610_){
_start:
{
lean_object* v___x_611_; lean_object* v___f_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_611_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0));
lean_inc_ref(v_P_x27_610_);
lean_inc(v_toBind_604_);
lean_inc(v_inst_603_);
lean_inc_ref(v_00_u03c6_600_);
lean_inc_ref(v_hyps_598_);
lean_inc_ref(v_00_u03c3s_597_);
lean_inc(v___x_596_);
lean_inc_ref(v___x_595_);
lean_inc_ref(v___x_594_);
lean_inc_ref(v___x_593_);
v___f_612_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___boxed), 20, 19);
lean_closure_set(v___f_612_, 0, v___x_593_);
lean_closure_set(v___f_612_, 1, v___x_594_);
lean_closure_set(v___f_612_, 2, v___x_595_);
lean_closure_set(v___f_612_, 3, v___x_611_);
lean_closure_set(v___f_612_, 4, v___x_596_);
lean_closure_set(v___f_612_, 5, v_00_u03c3s_597_);
lean_closure_set(v___f_612_, 6, v_hyps_598_);
lean_closure_set(v___f_612_, 7, v_target_599_);
lean_closure_set(v___f_612_, 8, v_00_u03c6_600_);
lean_closure_set(v___f_612_, 9, v_toPure_601_);
lean_closure_set(v___f_612_, 10, v_u_602_);
lean_closure_set(v___f_612_, 11, v_inst_603_);
lean_closure_set(v___f_612_, 12, v_toBind_604_);
lean_closure_set(v___f_612_, 13, v_kSuccess_605_);
lean_closure_set(v___f_612_, 14, v_inst_606_);
lean_closure_set(v___f_612_, 15, v_inst_607_);
lean_closure_set(v___f_612_, 16, v_P_x27_610_);
lean_closure_set(v___f_612_, 17, v_kFail_608_);
lean_closure_set(v___f_612_, 18, v___x_609_);
v___x_613_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1));
v___x_614_ = l_Lean_Name_mkStr5(v___x_593_, v___x_594_, v___x_595_, v___x_611_, v___x_613_);
v___x_615_ = l_Lean_mkConst(v___x_614_, v___x_596_);
v___x_616_ = l_Lean_mkApp4(v___x_615_, v_00_u03c3s_597_, v_hyps_598_, v_P_x27_610_, v_00_u03c6_600_);
v___x_617_ = lean_box(0);
v___x_618_ = lean_alloc_closure((void*)(l_Lean_Meta_trySynthInstance___boxed), 7, 2);
lean_closure_set(v___x_618_, 0, v___x_616_);
lean_closure_set(v___x_618_, 1, v___x_617_);
v___x_619_ = lean_apply_2(v_inst_603_, lean_box(0), v___x_618_);
v___x_620_ = lean_apply_4(v_toBind_604_, lean_box(0), lean_box(0), v___x_619_, v___f_612_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___boxed(lean_object** _args){
lean_object* v___x_621_ = _args[0];
lean_object* v___x_622_ = _args[1];
lean_object* v___x_623_ = _args[2];
lean_object* v___x_624_ = _args[3];
lean_object* v_00_u03c3s_625_ = _args[4];
lean_object* v_hyps_626_ = _args[5];
lean_object* v_target_627_ = _args[6];
lean_object* v_00_u03c6_628_ = _args[7];
lean_object* v_toPure_629_ = _args[8];
lean_object* v_u_630_ = _args[9];
lean_object* v_inst_631_ = _args[10];
lean_object* v_toBind_632_ = _args[11];
lean_object* v_kSuccess_633_ = _args[12];
lean_object* v_inst_634_ = _args[13];
lean_object* v_inst_635_ = _args[14];
lean_object* v_kFail_636_ = _args[15];
lean_object* v___x_637_ = _args[16];
lean_object* v_P_x27_638_ = _args[17];
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8(v___x_621_, v___x_622_, v___x_623_, v___x_624_, v_00_u03c3s_625_, v_hyps_626_, v_target_627_, v_00_u03c6_628_, v_toPure_629_, v_u_630_, v_inst_631_, v_toBind_632_, v_kSuccess_633_, v_inst_634_, v_inst_635_, v_kFail_636_, v___x_637_, v_P_x27_638_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9(lean_object* v_u_647_, lean_object* v_00_u03c3s_648_, lean_object* v_hyps_649_, lean_object* v_target_650_, lean_object* v_toPure_651_, lean_object* v_inst_652_, lean_object* v_toBind_653_, lean_object* v_kSuccess_654_, lean_object* v_inst_655_, lean_object* v_inst_656_, lean_object* v_kFail_657_, uint8_t v___x_658_, lean_object* v___x_659_, lean_object* v_00_u03c6_660_){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___f_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_661_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0));
v___x_662_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1));
v___x_663_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2));
v___x_664_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3));
v___x_665_ = lean_box(0);
lean_inc(v_u_647_);
v___x_666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_666_, 0, v_u_647_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
lean_inc(v_toBind_653_);
lean_inc(v_inst_652_);
lean_inc_ref(v_00_u03c3s_648_);
lean_inc_ref(v___x_666_);
v___f_667_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___boxed), 18, 17);
lean_closure_set(v___f_667_, 0, v___x_661_);
lean_closure_set(v___f_667_, 1, v___x_662_);
lean_closure_set(v___f_667_, 2, v___x_663_);
lean_closure_set(v___f_667_, 3, v___x_666_);
lean_closure_set(v___f_667_, 4, v_00_u03c3s_648_);
lean_closure_set(v___f_667_, 5, v_hyps_649_);
lean_closure_set(v___f_667_, 6, v_target_650_);
lean_closure_set(v___f_667_, 7, v_00_u03c6_660_);
lean_closure_set(v___f_667_, 8, v_toPure_651_);
lean_closure_set(v___f_667_, 9, v_u_647_);
lean_closure_set(v___f_667_, 10, v_inst_652_);
lean_closure_set(v___f_667_, 11, v_toBind_653_);
lean_closure_set(v___f_667_, 12, v_kSuccess_654_);
lean_closure_set(v___f_667_, 13, v_inst_655_);
lean_closure_set(v___f_667_, 14, v_inst_656_);
lean_closure_set(v___f_667_, 15, v_kFail_657_);
lean_closure_set(v___f_667_, 16, v___x_665_);
v___x_668_ = l_Lean_mkConst(v___x_664_, v___x_666_);
v___x_669_ = l_Lean_Expr_app___override(v___x_668_, v_00_u03c3s_648_);
v___x_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_670_, 0, v___x_669_);
v___x_671_ = lean_box(v___x_658_);
v___x_672_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVar___boxed), 8, 3);
lean_closure_set(v___x_672_, 0, v___x_670_);
lean_closure_set(v___x_672_, 1, v___x_671_);
lean_closure_set(v___x_672_, 2, v___x_659_);
v___x_673_ = lean_apply_2(v_inst_652_, lean_box(0), v___x_672_);
v___x_674_ = lean_apply_4(v_toBind_653_, lean_box(0), lean_box(0), v___x_673_, v___f_667_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___boxed(lean_object* v_u_675_, lean_object* v_00_u03c3s_676_, lean_object* v_hyps_677_, lean_object* v_target_678_, lean_object* v_toPure_679_, lean_object* v_inst_680_, lean_object* v_toBind_681_, lean_object* v_kSuccess_682_, lean_object* v_inst_683_, lean_object* v_inst_684_, lean_object* v_kFail_685_, lean_object* v___x_686_, lean_object* v___x_687_, lean_object* v_00_u03c6_688_){
_start:
{
uint8_t v___x_702__boxed_689_; lean_object* v_res_690_; 
v___x_702__boxed_689_ = lean_unbox(v___x_686_);
v_res_690_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9(v_u_675_, v_00_u03c3s_676_, v_hyps_677_, v_target_678_, v_toPure_679_, v_inst_680_, v_toBind_681_, v_kSuccess_682_, v_inst_683_, v_inst_684_, v_kFail_685_, v___x_702__boxed_689_, v___x_687_, v_00_u03c6_688_);
return v_res_690_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0(void){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = lean_box(0);
v___x_692_ = l_Lean_mkSort(v___x_691_);
return v___x_692_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1(void){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_693_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0);
v___x_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
return v___x_694_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2(void){
_start:
{
lean_object* v___x_695_; uint8_t v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_695_ = lean_box(0);
v___x_696_ = 0;
v___x_697_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1);
v___x_698_ = lean_box(v___x_696_);
v___x_699_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVar___boxed), 8, 3);
lean_closure_set(v___x_699_, 0, v___x_697_);
lean_closure_set(v___x_699_, 1, v___x_698_);
lean_closure_set(v___x_699_, 2, v___x_695_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg(lean_object* v_inst_700_, lean_object* v_inst_701_, lean_object* v_inst_702_, lean_object* v_goal_703_, lean_object* v_kFail_704_, lean_object* v_kSuccess_705_){
_start:
{
lean_object* v_toApplicative_706_; lean_object* v_u_707_; lean_object* v_00_u03c3s_708_; lean_object* v_hyps_709_; lean_object* v_target_710_; lean_object* v_toBind_711_; lean_object* v_toPure_712_; uint8_t v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___f_718_; lean_object* v___x_719_; 
v_toApplicative_706_ = lean_ctor_get(v_inst_700_, 0);
v_u_707_ = lean_ctor_get(v_goal_703_, 0);
lean_inc(v_u_707_);
v_00_u03c3s_708_ = lean_ctor_get(v_goal_703_, 1);
lean_inc_ref(v_00_u03c3s_708_);
v_hyps_709_ = lean_ctor_get(v_goal_703_, 2);
lean_inc_ref(v_hyps_709_);
v_target_710_ = lean_ctor_get(v_goal_703_, 3);
lean_inc_ref(v_target_710_);
lean_dec_ref(v_goal_703_);
v_toBind_711_ = lean_ctor_get(v_inst_700_, 1);
lean_inc_n(v_toBind_711_, 2);
v_toPure_712_ = lean_ctor_get(v_toApplicative_706_, 1);
lean_inc(v_toPure_712_);
v___x_713_ = 0;
v___x_714_ = lean_box(0);
v___x_715_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2);
lean_inc(v_inst_702_);
v___x_716_ = lean_apply_2(v_inst_702_, lean_box(0), v___x_715_);
v___x_717_ = lean_box(v___x_713_);
v___f_718_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___boxed), 14, 13);
lean_closure_set(v___f_718_, 0, v_u_707_);
lean_closure_set(v___f_718_, 1, v_00_u03c3s_708_);
lean_closure_set(v___f_718_, 2, v_hyps_709_);
lean_closure_set(v___f_718_, 3, v_target_710_);
lean_closure_set(v___f_718_, 4, v_toPure_712_);
lean_closure_set(v___f_718_, 5, v_inst_702_);
lean_closure_set(v___f_718_, 6, v_toBind_711_);
lean_closure_set(v___f_718_, 7, v_kSuccess_705_);
lean_closure_set(v___f_718_, 8, v_inst_701_);
lean_closure_set(v___f_718_, 9, v_inst_700_);
lean_closure_set(v___f_718_, 10, v_kFail_704_);
lean_closure_set(v___f_718_, 11, v___x_717_);
lean_closure_set(v___f_718_, 12, v___x_714_);
v___x_719_ = lean_apply_4(v_toBind_711_, lean_box(0), lean_box(0), v___x_716_, v___f_718_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore(lean_object* v_m_720_, lean_object* v_inst_721_, lean_object* v_inst_722_, lean_object* v_inst_723_, lean_object* v_goal_724_, lean_object* v_kFail_725_, lean_object* v_kSuccess_726_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg(v_inst_721_, v_inst_722_, v_inst_723_, v_goal_724_, v_kFail_725_, v_kSuccess_726_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0(lean_object* v_k_728_, lean_object* v_x_729_, lean_object* v_x_730_, lean_object* v_goal_731_){
_start:
{
lean_object* v___x_732_; 
v___x_732_ = lean_apply_1(v_k_728_, v_goal_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0___boxed(lean_object* v_k_733_, lean_object* v_x_734_, lean_object* v_x_735_, lean_object* v_goal_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0(v_k_733_, v_x_734_, v_x_735_, v_goal_736_);
lean_dec_ref(v_x_735_);
lean_dec_ref(v_x_734_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg(lean_object* v_inst_738_, lean_object* v_inst_739_, lean_object* v_inst_740_, lean_object* v_goal_741_, lean_object* v_k_742_){
_start:
{
lean_object* v___f_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
lean_inc(v_k_742_);
v___f_743_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_743_, 0, v_k_742_);
lean_inc_ref(v_goal_741_);
v___x_744_ = lean_apply_1(v_k_742_, v_goal_741_);
v___x_745_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg(v_inst_738_, v_inst_739_, v_inst_740_, v_goal_741_, v___x_744_, v___f_743_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame(lean_object* v_m_746_, lean_object* v_inst_747_, lean_object* v_inst_748_, lean_object* v_inst_749_, lean_object* v_goal_750_, lean_object* v_k_751_){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg(v_inst_747_, v_inst_748_, v_inst_749_, v_goal_750_, v_k_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(lean_object* v_e_753_, lean_object* v___y_754_){
_start:
{
uint8_t v___x_756_; 
v___x_756_ = l_Lean_Expr_hasMVar(v_e_753_);
if (v___x_756_ == 0)
{
lean_object* v___x_757_; 
v___x_757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_757_, 0, v_e_753_);
return v___x_757_;
}
else
{
lean_object* v___x_758_; lean_object* v_mctx_759_; lean_object* v___x_760_; lean_object* v_fst_761_; lean_object* v_snd_762_; lean_object* v___x_763_; lean_object* v_cache_764_; lean_object* v_zetaDeltaFVarIds_765_; lean_object* v_postponed_766_; lean_object* v_diag_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_776_; 
v___x_758_ = lean_st_ref_get(v___y_754_);
v_mctx_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc_ref(v_mctx_759_);
lean_dec(v___x_758_);
v___x_760_ = l_Lean_instantiateMVarsCore(v_mctx_759_, v_e_753_);
v_fst_761_ = lean_ctor_get(v___x_760_, 0);
lean_inc(v_fst_761_);
v_snd_762_ = lean_ctor_get(v___x_760_, 1);
lean_inc(v_snd_762_);
lean_dec_ref(v___x_760_);
v___x_763_ = lean_st_ref_take(v___y_754_);
v_cache_764_ = lean_ctor_get(v___x_763_, 1);
v_zetaDeltaFVarIds_765_ = lean_ctor_get(v___x_763_, 2);
v_postponed_766_ = lean_ctor_get(v___x_763_, 3);
v_diag_767_ = lean_ctor_get(v___x_763_, 4);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_776_ == 0)
{
lean_object* v_unused_777_; 
v_unused_777_ = lean_ctor_get(v___x_763_, 0);
lean_dec(v_unused_777_);
v___x_769_ = v___x_763_;
v_isShared_770_ = v_isSharedCheck_776_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_diag_767_);
lean_inc(v_postponed_766_);
lean_inc(v_zetaDeltaFVarIds_765_);
lean_inc(v_cache_764_);
lean_dec(v___x_763_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_776_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 0, v_snd_762_);
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_snd_762_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v_cache_764_);
lean_ctor_set(v_reuseFailAlloc_775_, 2, v_zetaDeltaFVarIds_765_);
lean_ctor_set(v_reuseFailAlloc_775_, 3, v_postponed_766_);
lean_ctor_set(v_reuseFailAlloc_775_, 4, v_diag_767_);
v___x_772_ = v_reuseFailAlloc_775_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = lean_st_ref_put(v___y_754_, v___x_772_);
v___x_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_774_, 0, v_fst_761_);
return v___x_774_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg___boxed(lean_object* v_e_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(v_e_778_, v___y_779_);
lean_dec(v___y_779_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0(lean_object* v_e_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(v_e_782_, v___y_788_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___boxed(lean_object* v_e_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0(v_e_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec(v___y_797_);
lean_dec_ref(v___y_796_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg___lam__0(lean_object* v_x_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
lean_object* v___x_814_; 
lean_inc(v___y_808_);
lean_inc_ref(v___y_807_);
lean_inc(v___y_806_);
lean_inc_ref(v___y_805_);
v___x_814_ = lean_apply_9(v_x_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_, lean_box(0));
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg___lam__0___boxed(lean_object* v_x_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg___lam__0(v_x_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_818_);
lean_dec(v___y_817_);
lean_dec_ref(v___y_816_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(lean_object* v_mvarId_826_, lean_object* v_x_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_){
_start:
{
lean_object* v___f_837_; lean_object* v___x_838_; 
lean_inc(v___y_831_);
lean_inc_ref(v___y_830_);
lean_inc(v___y_829_);
lean_inc_ref(v___y_828_);
v___f_837_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_837_, 0, v_x_827_);
lean_closure_set(v___f_837_, 1, v___y_828_);
lean_closure_set(v___f_837_, 2, v___y_829_);
lean_closure_set(v___f_837_, 3, v___y_830_);
lean_closure_set(v___f_837_, 4, v___y_831_);
v___x_838_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_826_, v___f_837_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
if (lean_obj_tag(v___x_838_) == 0)
{
return v___x_838_;
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
v_a_839_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_838_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_838_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg___boxed(lean_object* v_mvarId_847_, lean_object* v_x_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(v_mvarId_847_, v_x_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
lean_dec(v___y_854_);
lean_dec_ref(v___y_853_);
lean_dec(v___y_852_);
lean_dec_ref(v___y_851_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4(lean_object* v_00_u03b1_859_, lean_object* v_mvarId_860_, lean_object* v_x_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_){
_start:
{
lean_object* v___x_871_; 
v___x_871_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(v_mvarId_860_, v_x_861_, v___y_862_, v___y_863_, v___y_864_, v___y_865_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___boxed(lean_object* v_00_u03b1_872_, lean_object* v_mvarId_873_, lean_object* v_x_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4(v_00_u03b1_872_, v_mvarId_873_, v_x_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_);
lean_dec(v___y_882_);
lean_dec_ref(v___y_881_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec(v___y_878_);
lean_dec_ref(v___y_877_);
lean_dec(v___y_876_);
lean_dec_ref(v___y_875_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0(lean_object* v_x_885_, lean_object* v_x_886_, lean_object* v_goal_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_897_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v_goal_887_);
v___x_898_ = lean_box(0);
v___x_899_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_897_, v___x_898_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_900_);
lean_dec_ref_known(v___x_899_, 1);
v___x_901_ = l_Lean_Expr_mvarId_x21(v_a_900_);
v___x_902_ = lean_box(0);
v___x_903_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_903_, 0, v___x_901_);
lean_ctor_set(v___x_903_, 1, v___x_902_);
v___x_904_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_903_, v___y_889_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_911_ == 0)
{
lean_object* v_unused_912_; 
v_unused_912_ = lean_ctor_get(v___x_904_, 0);
lean_dec(v_unused_912_);
v___x_906_ = v___x_904_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_dec(v___x_904_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 0, v_a_900_);
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_900_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
lean_dec(v_a_900_);
v_a_913_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_904_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_904_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
else
{
return v___x_899_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___boxed(lean_object* v_x_921_, lean_object* v_x_922_, lean_object* v_goal_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0(v_x_921_, v_x_922_, v_goal_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_);
lean_dec(v___y_931_);
lean_dec_ref(v___y_930_);
lean_dec(v___y_929_);
lean_dec_ref(v___y_928_);
lean_dec(v___y_927_);
lean_dec_ref(v___y_926_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec_ref(v_x_922_);
lean_dec_ref(v_x_921_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1_spec__1(lean_object* v_msgData_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_){
_start:
{
lean_object* v___x_940_; lean_object* v_env_941_; lean_object* v___x_942_; lean_object* v_toCold_943_; lean_object* v_mctx_944_; lean_object* v_lctx_945_; lean_object* v_options_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_940_ = lean_st_ref_get(v___y_938_);
v_env_941_ = lean_ctor_get(v___x_940_, 0);
lean_inc_ref(v_env_941_);
lean_dec(v___x_940_);
v___x_942_ = lean_st_ref_get(v___y_936_);
v_toCold_943_ = lean_ctor_get(v___y_937_, 0);
v_mctx_944_ = lean_ctor_get(v___x_942_, 0);
lean_inc_ref(v_mctx_944_);
lean_dec(v___x_942_);
v_lctx_945_ = lean_ctor_get(v___y_935_, 2);
v_options_946_ = lean_ctor_get(v_toCold_943_, 2);
lean_inc_ref(v_options_946_);
lean_inc_ref(v_lctx_945_);
v___x_947_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_947_, 0, v_env_941_);
lean_ctor_set(v___x_947_, 1, v_mctx_944_);
lean_ctor_set(v___x_947_, 2, v_lctx_945_);
lean_ctor_set(v___x_947_, 3, v_options_946_);
v___x_948_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_947_);
lean_ctor_set(v___x_948_, 1, v_msgData_934_);
v___x_949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
return v___x_949_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1_spec__1___boxed(lean_object* v_msgData_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1_spec__1(v_msgData_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_);
lean_dec(v___y_954_);
lean_dec_ref(v___y_953_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(lean_object* v_msg_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_){
_start:
{
lean_object* v_ref_963_; lean_object* v___x_964_; lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_973_; 
v_ref_963_ = lean_ctor_get(v___y_960_, 2);
v___x_964_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1_spec__1(v_msg_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
v_a_965_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_973_ == 0)
{
v___x_967_ = v___x_964_;
v_isShared_968_ = v_isSharedCheck_973_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_964_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_973_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_969_; lean_object* v___x_971_; 
lean_inc(v_ref_963_);
v___x_969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_969_, 0, v_ref_963_);
lean_ctor_set(v___x_969_, 1, v_a_965_);
if (v_isShared_968_ == 0)
{
lean_ctor_set_tag(v___x_967_, 1);
lean_ctor_set(v___x_967_, 0, v___x_969_);
v___x_971_ = v___x_967_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v___x_969_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg___boxed(lean_object* v_msg_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(v_msg_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_);
lean_dec(v___y_978_);
lean_dec_ref(v___y_977_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1(lean_object* v_00_u03b1_981_, lean_object* v_msg_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
lean_object* v___x_992_; 
v___x_992_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(v_msg_982_, v___y_987_, v___y_988_, v___y_989_, v___y_990_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___boxed(lean_object* v_00_u03b1_993_, lean_object* v_msg_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1(v_00_u03b1_993_, v_msg_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_);
lean_dec(v___y_1002_);
lean_dec_ref(v___y_1001_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__9_spec__10___redArg(lean_object* v_x_1005_, lean_object* v_x_1006_, lean_object* v_x_1007_, lean_object* v_x_1008_){
_start:
{
lean_object* v_ks_1009_; lean_object* v_vs_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1034_; 
v_ks_1009_ = lean_ctor_get(v_x_1005_, 0);
v_vs_1010_ = lean_ctor_get(v_x_1005_, 1);
v_isSharedCheck_1034_ = !lean_is_exclusive(v_x_1005_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1012_ = v_x_1005_;
v_isShared_1013_ = v_isSharedCheck_1034_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_vs_1010_);
lean_inc(v_ks_1009_);
lean_dec(v_x_1005_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1034_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1014_; uint8_t v___x_1015_; 
v___x_1014_ = lean_array_get_size(v_ks_1009_);
v___x_1015_ = lean_nat_dec_lt(v_x_1006_, v___x_1014_);
if (v___x_1015_ == 0)
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1019_; 
lean_dec(v_x_1006_);
v___x_1016_ = lean_array_push(v_ks_1009_, v_x_1007_);
v___x_1017_ = lean_array_push(v_vs_1010_, v_x_1008_);
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 1, v___x_1017_);
lean_ctor_set(v___x_1012_, 0, v___x_1016_);
v___x_1019_ = v___x_1012_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1016_);
lean_ctor_set(v_reuseFailAlloc_1020_, 1, v___x_1017_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
else
{
lean_object* v_k_x27_1021_; uint8_t v___x_1022_; 
v_k_x27_1021_ = lean_array_fget_borrowed(v_ks_1009_, v_x_1006_);
v___x_1022_ = l_Lean_instBEqMVarId_beq(v_x_1007_, v_k_x27_1021_);
if (v___x_1022_ == 0)
{
lean_object* v___x_1024_; 
if (v_isShared_1013_ == 0)
{
v___x_1024_ = v___x_1012_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_ks_1009_);
lean_ctor_set(v_reuseFailAlloc_1028_, 1, v_vs_1010_);
v___x_1024_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = lean_unsigned_to_nat(1u);
v___x_1026_ = lean_nat_add(v_x_1006_, v___x_1025_);
lean_dec(v_x_1006_);
v_x_1005_ = v___x_1024_;
v_x_1006_ = v___x_1026_;
goto _start;
}
}
else
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1032_; 
v___x_1029_ = lean_array_fset(v_ks_1009_, v_x_1006_, v_x_1007_);
v___x_1030_ = lean_array_fset(v_vs_1010_, v_x_1006_, v_x_1008_);
lean_dec(v_x_1006_);
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 1, v___x_1030_);
lean_ctor_set(v___x_1012_, 0, v___x_1029_);
v___x_1032_ = v___x_1012_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v___x_1029_);
lean_ctor_set(v_reuseFailAlloc_1033_, 1, v___x_1030_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__9___redArg(lean_object* v_n_1035_, lean_object* v_k_1036_, lean_object* v_v_1037_){
_start:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1038_ = lean_unsigned_to_nat(0u);
v___x_1039_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__9_spec__10___redArg(v_n_1035_, v___x_1038_, v_k_1036_, v_v_1037_);
return v___x_1039_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(lean_object* v_x_1041_, size_t v_x_1042_, size_t v_x_1043_, lean_object* v_x_1044_, lean_object* v_x_1045_){
_start:
{
if (lean_obj_tag(v_x_1041_) == 0)
{
lean_object* v_es_1046_; size_t v___x_1047_; size_t v___x_1048_; lean_object* v_j_1049_; lean_object* v___x_1050_; uint8_t v___x_1051_; 
v_es_1046_ = lean_ctor_get(v_x_1041_, 0);
v___x_1047_ = ((size_t)31ULL);
v___x_1048_ = lean_usize_land(v_x_1042_, v___x_1047_);
v_j_1049_ = lean_usize_to_nat(v___x_1048_);
v___x_1050_ = lean_array_get_size(v_es_1046_);
v___x_1051_ = lean_nat_dec_lt(v_j_1049_, v___x_1050_);
if (v___x_1051_ == 0)
{
lean_dec(v_j_1049_);
lean_dec(v_x_1045_);
lean_dec(v_x_1044_);
return v_x_1041_;
}
else
{
lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1090_; 
lean_inc_ref(v_es_1046_);
v_isSharedCheck_1090_ = !lean_is_exclusive(v_x_1041_);
if (v_isSharedCheck_1090_ == 0)
{
lean_object* v_unused_1091_; 
v_unused_1091_ = lean_ctor_get(v_x_1041_, 0);
lean_dec(v_unused_1091_);
v___x_1053_ = v_x_1041_;
v_isShared_1054_ = v_isSharedCheck_1090_;
goto v_resetjp_1052_;
}
else
{
lean_dec(v_x_1041_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1090_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v_v_1055_; lean_object* v___x_1056_; lean_object* v_xs_x27_1057_; lean_object* v___y_1059_; 
v_v_1055_ = lean_array_fget(v_es_1046_, v_j_1049_);
v___x_1056_ = lean_box(0);
v_xs_x27_1057_ = lean_array_fset(v_es_1046_, v_j_1049_, v___x_1056_);
switch(lean_obj_tag(v_v_1055_))
{
case 0:
{
lean_object* v_key_1064_; lean_object* v_val_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1075_; 
v_key_1064_ = lean_ctor_get(v_v_1055_, 0);
v_val_1065_ = lean_ctor_get(v_v_1055_, 1);
v_isSharedCheck_1075_ = !lean_is_exclusive(v_v_1055_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1067_ = v_v_1055_;
v_isShared_1068_ = v_isSharedCheck_1075_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_val_1065_);
lean_inc(v_key_1064_);
lean_dec(v_v_1055_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1075_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
uint8_t v___x_1069_; 
v___x_1069_ = l_Lean_instBEqMVarId_beq(v_x_1044_, v_key_1064_);
if (v___x_1069_ == 0)
{
lean_object* v___x_1070_; lean_object* v___x_1071_; 
lean_del_object(v___x_1067_);
v___x_1070_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1064_, v_val_1065_, v_x_1044_, v_x_1045_);
v___x_1071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1070_);
v___y_1059_ = v___x_1071_;
goto v___jp_1058_;
}
else
{
lean_object* v___x_1073_; 
lean_dec(v_val_1065_);
lean_dec(v_key_1064_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 1, v_x_1045_);
lean_ctor_set(v___x_1067_, 0, v_x_1044_);
v___x_1073_ = v___x_1067_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_x_1044_);
lean_ctor_set(v_reuseFailAlloc_1074_, 1, v_x_1045_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
v___y_1059_ = v___x_1073_;
goto v___jp_1058_;
}
}
}
}
case 1:
{
lean_object* v_node_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1088_; 
v_node_1076_ = lean_ctor_get(v_v_1055_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v_v_1055_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1078_ = v_v_1055_;
v_isShared_1079_ = v_isSharedCheck_1088_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_node_1076_);
lean_dec(v_v_1055_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1088_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
size_t v___x_1080_; size_t v___x_1081_; size_t v___x_1082_; size_t v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1086_; 
v___x_1080_ = ((size_t)5ULL);
v___x_1081_ = lean_usize_shift_right(v_x_1042_, v___x_1080_);
v___x_1082_ = ((size_t)1ULL);
v___x_1083_ = lean_usize_add(v_x_1043_, v___x_1082_);
v___x_1084_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(v_node_1076_, v___x_1081_, v___x_1083_, v_x_1044_, v_x_1045_);
if (v_isShared_1079_ == 0)
{
lean_ctor_set(v___x_1078_, 0, v___x_1084_);
v___x_1086_ = v___x_1078_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1084_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
v___y_1059_ = v___x_1086_;
goto v___jp_1058_;
}
}
}
default: 
{
lean_object* v___x_1089_; 
v___x_1089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1089_, 0, v_x_1044_);
lean_ctor_set(v___x_1089_, 1, v_x_1045_);
v___y_1059_ = v___x_1089_;
goto v___jp_1058_;
}
}
v___jp_1058_:
{
lean_object* v___x_1060_; lean_object* v___x_1062_; 
v___x_1060_ = lean_array_fset(v_xs_x27_1057_, v_j_1049_, v___y_1059_);
lean_dec(v_j_1049_);
if (v_isShared_1054_ == 0)
{
lean_ctor_set(v___x_1053_, 0, v___x_1060_);
v___x_1062_ = v___x_1053_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v___x_1060_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
return v___x_1062_;
}
}
}
}
}
else
{
lean_object* v_ks_1092_; lean_object* v_vs_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1111_; 
v_ks_1092_ = lean_ctor_get(v_x_1041_, 0);
v_vs_1093_ = lean_ctor_get(v_x_1041_, 1);
v_isSharedCheck_1111_ = !lean_is_exclusive(v_x_1041_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1095_ = v_x_1041_;
v_isShared_1096_ = v_isSharedCheck_1111_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_vs_1093_);
lean_inc(v_ks_1092_);
lean_dec(v_x_1041_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1111_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1098_; 
if (v_isShared_1096_ == 0)
{
v___x_1098_ = v___x_1095_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_ks_1092_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v_vs_1093_);
v___x_1098_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
lean_object* v_newNode_1099_; size_t v___x_1100_; uint8_t v___x_1101_; 
v_newNode_1099_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__9___redArg(v___x_1098_, v_x_1044_, v_x_1045_);
v___x_1100_ = ((size_t)7ULL);
v___x_1101_ = lean_usize_dec_le(v___x_1100_, v_x_1043_);
if (v___x_1101_ == 0)
{
lean_object* v___x_1102_; lean_object* v___x_1103_; uint8_t v___x_1104_; 
v___x_1102_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1099_);
v___x_1103_ = lean_unsigned_to_nat(4u);
v___x_1104_ = lean_nat_dec_lt(v___x_1102_, v___x_1103_);
lean_dec(v___x_1102_);
if (v___x_1104_ == 0)
{
lean_object* v_ks_1105_; lean_object* v_vs_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; 
v_ks_1105_ = lean_ctor_get(v_newNode_1099_, 0);
lean_inc_ref(v_ks_1105_);
v_vs_1106_ = lean_ctor_get(v_newNode_1099_, 1);
lean_inc_ref(v_vs_1106_);
lean_dec_ref(v_newNode_1099_);
v___x_1107_ = lean_unsigned_to_nat(0u);
v___x_1108_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0);
v___x_1109_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___redArg(v_x_1043_, v_ks_1105_, v_vs_1106_, v___x_1107_, v___x_1108_);
lean_dec_ref(v_vs_1106_);
lean_dec_ref(v_ks_1105_);
return v___x_1109_;
}
else
{
return v_newNode_1099_;
}
}
else
{
return v_newNode_1099_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___redArg(size_t v_depth_1112_, lean_object* v_keys_1113_, lean_object* v_vals_1114_, lean_object* v_i_1115_, lean_object* v_entries_1116_){
_start:
{
lean_object* v___x_1117_; uint8_t v___x_1118_; 
v___x_1117_ = lean_array_get_size(v_keys_1113_);
v___x_1118_ = lean_nat_dec_lt(v_i_1115_, v___x_1117_);
if (v___x_1118_ == 0)
{
lean_dec(v_i_1115_);
return v_entries_1116_;
}
else
{
lean_object* v_k_1119_; lean_object* v_v_1120_; uint64_t v___x_1121_; size_t v_h_1122_; size_t v___x_1123_; lean_object* v___x_1124_; size_t v___x_1125_; size_t v___x_1126_; size_t v___x_1127_; size_t v_h_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v_k_1119_ = lean_array_fget_borrowed(v_keys_1113_, v_i_1115_);
v_v_1120_ = lean_array_fget_borrowed(v_vals_1114_, v_i_1115_);
v___x_1121_ = l_Lean_instHashableMVarId_hash(v_k_1119_);
v_h_1122_ = lean_uint64_to_usize(v___x_1121_);
v___x_1123_ = ((size_t)5ULL);
v___x_1124_ = lean_unsigned_to_nat(1u);
v___x_1125_ = ((size_t)1ULL);
v___x_1126_ = lean_usize_sub(v_depth_1112_, v___x_1125_);
v___x_1127_ = lean_usize_mul(v___x_1123_, v___x_1126_);
v_h_1128_ = lean_usize_shift_right(v_h_1122_, v___x_1127_);
v___x_1129_ = lean_nat_add(v_i_1115_, v___x_1124_);
lean_dec(v_i_1115_);
lean_inc(v_v_1120_);
lean_inc(v_k_1119_);
v___x_1130_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(v_entries_1116_, v_h_1128_, v_depth_1112_, v_k_1119_, v_v_1120_);
v_i_1115_ = v___x_1129_;
v_entries_1116_ = v___x_1130_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___redArg___boxed(lean_object* v_depth_1132_, lean_object* v_keys_1133_, lean_object* v_vals_1134_, lean_object* v_i_1135_, lean_object* v_entries_1136_){
_start:
{
size_t v_depth_boxed_1137_; lean_object* v_res_1138_; 
v_depth_boxed_1137_ = lean_unbox_usize(v_depth_1132_);
lean_dec(v_depth_1132_);
v_res_1138_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___redArg(v_depth_boxed_1137_, v_keys_1133_, v_vals_1134_, v_i_1135_, v_entries_1136_);
lean_dec_ref(v_vals_1134_);
lean_dec_ref(v_keys_1133_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___boxed(lean_object* v_x_1139_, lean_object* v_x_1140_, lean_object* v_x_1141_, lean_object* v_x_1142_, lean_object* v_x_1143_){
_start:
{
size_t v_x_9784__boxed_1144_; size_t v_x_9785__boxed_1145_; lean_object* v_res_1146_; 
v_x_9784__boxed_1144_ = lean_unbox_usize(v_x_1140_);
lean_dec(v_x_1140_);
v_x_9785__boxed_1145_ = lean_unbox_usize(v_x_1141_);
lean_dec(v_x_1141_);
v_res_1146_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(v_x_1139_, v_x_9784__boxed_1144_, v_x_9785__boxed_1145_, v_x_1142_, v_x_1143_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5___redArg(lean_object* v_x_1147_, lean_object* v_x_1148_, lean_object* v_x_1149_){
_start:
{
uint64_t v___x_1150_; size_t v___x_1151_; size_t v___x_1152_; lean_object* v___x_1153_; 
v___x_1150_ = l_Lean_instHashableMVarId_hash(v_x_1148_);
v___x_1151_ = lean_uint64_to_usize(v___x_1150_);
v___x_1152_ = ((size_t)1ULL);
v___x_1153_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(v_x_1147_, v___x_1151_, v___x_1152_, v_x_1148_, v_x_1149_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(lean_object* v_mvarId_1154_, lean_object* v_val_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v___x_1158_; lean_object* v_mctx_1159_; lean_object* v_cache_1160_; lean_object* v_zetaDeltaFVarIds_1161_; lean_object* v_postponed_1162_; lean_object* v_diag_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1192_; 
v___x_1158_ = lean_st_ref_take(v___y_1156_);
v_mctx_1159_ = lean_ctor_get(v___x_1158_, 0);
v_cache_1160_ = lean_ctor_get(v___x_1158_, 1);
v_zetaDeltaFVarIds_1161_ = lean_ctor_get(v___x_1158_, 2);
v_postponed_1162_ = lean_ctor_get(v___x_1158_, 3);
v_diag_1163_ = lean_ctor_get(v___x_1158_, 4);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1165_ = v___x_1158_;
v_isShared_1166_ = v_isSharedCheck_1192_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_diag_1163_);
lean_inc(v_postponed_1162_);
lean_inc(v_zetaDeltaFVarIds_1161_);
lean_inc(v_cache_1160_);
lean_inc(v_mctx_1159_);
lean_dec(v___x_1158_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1192_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v_depth_1167_; lean_object* v_levelAssignDepth_1168_; lean_object* v_lmvarCounter_1169_; lean_object* v_mvarCounter_1170_; lean_object* v_lDecls_1171_; lean_object* v_decls_1172_; lean_object* v_userNames_1173_; lean_object* v_lAssignment_1174_; lean_object* v_eAssignment_1175_; lean_object* v_dAssignment_1176_; lean_object* v_instanceTypedMVars_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1191_; 
v_depth_1167_ = lean_ctor_get(v_mctx_1159_, 0);
v_levelAssignDepth_1168_ = lean_ctor_get(v_mctx_1159_, 1);
v_lmvarCounter_1169_ = lean_ctor_get(v_mctx_1159_, 2);
v_mvarCounter_1170_ = lean_ctor_get(v_mctx_1159_, 3);
v_lDecls_1171_ = lean_ctor_get(v_mctx_1159_, 4);
v_decls_1172_ = lean_ctor_get(v_mctx_1159_, 5);
v_userNames_1173_ = lean_ctor_get(v_mctx_1159_, 6);
v_lAssignment_1174_ = lean_ctor_get(v_mctx_1159_, 7);
v_eAssignment_1175_ = lean_ctor_get(v_mctx_1159_, 8);
v_dAssignment_1176_ = lean_ctor_get(v_mctx_1159_, 9);
v_instanceTypedMVars_1177_ = lean_ctor_get(v_mctx_1159_, 10);
v_isSharedCheck_1191_ = !lean_is_exclusive(v_mctx_1159_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1179_ = v_mctx_1159_;
v_isShared_1180_ = v_isSharedCheck_1191_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_instanceTypedMVars_1177_);
lean_inc(v_dAssignment_1176_);
lean_inc(v_eAssignment_1175_);
lean_inc(v_lAssignment_1174_);
lean_inc(v_userNames_1173_);
lean_inc(v_decls_1172_);
lean_inc(v_lDecls_1171_);
lean_inc(v_mvarCounter_1170_);
lean_inc(v_lmvarCounter_1169_);
lean_inc(v_levelAssignDepth_1168_);
lean_inc(v_depth_1167_);
lean_dec(v_mctx_1159_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1191_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1184_; 
v___x_1181_ = lean_box(0);
v___x_1182_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5___redArg(v_eAssignment_1175_, v_mvarId_1154_, v_val_1155_);
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 8, v___x_1182_);
v___x_1184_ = v___x_1179_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_depth_1167_);
lean_ctor_set(v_reuseFailAlloc_1190_, 1, v_levelAssignDepth_1168_);
lean_ctor_set(v_reuseFailAlloc_1190_, 2, v_lmvarCounter_1169_);
lean_ctor_set(v_reuseFailAlloc_1190_, 3, v_mvarCounter_1170_);
lean_ctor_set(v_reuseFailAlloc_1190_, 4, v_lDecls_1171_);
lean_ctor_set(v_reuseFailAlloc_1190_, 5, v_decls_1172_);
lean_ctor_set(v_reuseFailAlloc_1190_, 6, v_userNames_1173_);
lean_ctor_set(v_reuseFailAlloc_1190_, 7, v_lAssignment_1174_);
lean_ctor_set(v_reuseFailAlloc_1190_, 8, v___x_1182_);
lean_ctor_set(v_reuseFailAlloc_1190_, 9, v_dAssignment_1176_);
lean_ctor_set(v_reuseFailAlloc_1190_, 10, v_instanceTypedMVars_1177_);
v___x_1184_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
lean_object* v___x_1186_; 
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 0, v___x_1184_);
v___x_1186_ = v___x_1165_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v___x_1184_);
lean_ctor_set(v_reuseFailAlloc_1189_, 1, v_cache_1160_);
lean_ctor_set(v_reuseFailAlloc_1189_, 2, v_zetaDeltaFVarIds_1161_);
lean_ctor_set(v_reuseFailAlloc_1189_, 3, v_postponed_1162_);
lean_ctor_set(v_reuseFailAlloc_1189_, 4, v_diag_1163_);
v___x_1186_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1187_ = lean_st_ref_put(v___y_1156_, v___x_1186_);
v___x_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1181_);
return v___x_1188_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg___boxed(lean_object* v_mvarId_1193_, lean_object* v_val_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(v_mvarId_1193_, v_val_1194_, v___y_1195_);
lean_dec(v___y_1195_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0(lean_object* v_k_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v_b_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_){
_start:
{
lean_object* v___x_1209_; 
lean_inc(v___y_1207_);
lean_inc_ref(v___y_1206_);
lean_inc(v___y_1205_);
lean_inc_ref(v___y_1204_);
lean_inc(v___y_1202_);
lean_inc_ref(v___y_1201_);
lean_inc(v___y_1200_);
lean_inc_ref(v___y_1199_);
v___x_1209_ = lean_apply_10(v_k_1198_, v_b_1203_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_, lean_box(0));
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0___boxed(lean_object* v_k_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v_b_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_){
_start:
{
lean_object* v_res_1221_; 
v_res_1221_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0(v_k_1210_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_, v_b_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_);
lean_dec(v___y_1219_);
lean_dec_ref(v___y_1218_);
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1216_);
lean_dec(v___y_1214_);
lean_dec_ref(v___y_1213_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg(lean_object* v_name_1222_, uint8_t v_bi_1223_, lean_object* v_type_1224_, lean_object* v_k_1225_, uint8_t v_kind_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
lean_object* v___f_1236_; lean_object* v___x_1237_; 
lean_inc(v___y_1230_);
lean_inc_ref(v___y_1229_);
lean_inc(v___y_1228_);
lean_inc_ref(v___y_1227_);
v___f_1236_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_1236_, 0, v_k_1225_);
lean_closure_set(v___f_1236_, 1, v___y_1227_);
lean_closure_set(v___f_1236_, 2, v___y_1228_);
lean_closure_set(v___f_1236_, 3, v___y_1229_);
lean_closure_set(v___f_1236_, 4, v___y_1230_);
v___x_1237_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1222_, v_bi_1223_, v_type_1224_, v___f_1236_, v_kind_1226_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_);
if (lean_obj_tag(v___x_1237_) == 0)
{
return v___x_1237_;
}
else
{
lean_object* v_a_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1245_; 
v_a_1238_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1245_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1245_ == 0)
{
v___x_1240_ = v___x_1237_;
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_a_1238_);
lean_dec(v___x_1237_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1243_; 
if (v_isShared_1241_ == 0)
{
v___x_1243_ = v___x_1240_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v_a_1238_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_name_1246_, lean_object* v_bi_1247_, lean_object* v_type_1248_, lean_object* v_k_1249_, lean_object* v_kind_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_){
_start:
{
uint8_t v_bi_boxed_1260_; uint8_t v_kind_boxed_1261_; lean_object* v_res_1262_; 
v_bi_boxed_1260_ = lean_unbox(v_bi_1247_);
v_kind_boxed_1261_ = lean_unbox(v_kind_1250_);
v_res_1262_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg(v_name_1246_, v_bi_boxed_1260_, v_type_1248_, v_k_1249_, v_kind_boxed_1261_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
lean_dec(v___y_1256_);
lean_dec_ref(v___y_1255_);
lean_dec(v___y_1254_);
lean_dec_ref(v___y_1253_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(lean_object* v_name_1263_, lean_object* v_type_1264_, lean_object* v_k_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
uint8_t v___x_1275_; uint8_t v___x_1276_; lean_object* v___x_1277_; 
v___x_1275_ = 0;
v___x_1276_ = 0;
v___x_1277_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg(v_name_1263_, v___x_1275_, v_type_1264_, v_k_1265_, v___x_1276_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg___boxed(lean_object* v_name_1278_, lean_object* v_type_1279_, lean_object* v_k_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(v_name_1278_, v_type_1279_, v_k_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
lean_dec(v___y_1284_);
lean_dec_ref(v___y_1283_);
lean_dec(v___y_1282_);
lean_dec_ref(v___y_1281_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0(lean_object* v_kSuccess_1291_, lean_object* v_a_1292_, lean_object* v_goal_1293_, uint8_t v_a_1294_, uint8_t v___x_1295_, lean_object* v___x_1296_, lean_object* v___x_1297_, lean_object* v___x_1298_, lean_object* v___x_1299_, lean_object* v___x_1300_, lean_object* v_00_u03c3s_1301_, lean_object* v_hyps_1302_, lean_object* v_a_1303_, lean_object* v_target_1304_, lean_object* v_a_1305_, lean_object* v_h_u03c6_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
lean_object* v___x_1316_; 
lean_inc(v___y_1314_);
lean_inc_ref(v___y_1313_);
lean_inc(v___y_1312_);
lean_inc_ref(v___y_1311_);
lean_inc(v___y_1310_);
lean_inc_ref(v___y_1309_);
lean_inc(v___y_1308_);
lean_inc_ref(v___y_1307_);
lean_inc_ref(v_h_u03c6_1306_);
lean_inc_ref(v_a_1292_);
v___x_1316_ = lean_apply_12(v_kSuccess_1291_, v_a_1292_, v_h_u03c6_1306_, v_goal_1293_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, lean_box(0));
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v_a_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; uint8_t v___x_1321_; lean_object* v___x_1322_; 
v_a_1317_ = lean_ctor_get(v___x_1316_, 0);
lean_inc(v_a_1317_);
lean_dec_ref_known(v___x_1316_, 1);
v___x_1318_ = lean_unsigned_to_nat(1u);
v___x_1319_ = lean_mk_empty_array_with_capacity(v___x_1318_);
v___x_1320_ = lean_array_push(v___x_1319_, v_h_u03c6_1306_);
v___x_1321_ = 1;
v___x_1322_ = l_Lean_Meta_mkLambdaFVars(v___x_1320_, v_a_1317_, v_a_1294_, v___x_1295_, v_a_1294_, v___x_1295_, v___x_1321_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
lean_dec_ref(v___x_1320_);
if (lean_obj_tag(v___x_1322_) == 0)
{
lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1335_; 
v_a_1323_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1325_ = v___x_1322_;
v_isShared_1326_ = v_isSharedCheck_1335_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1322_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1335_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v_prf_1331_; lean_object* v___x_1333_; 
v___x_1327_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0));
v___x_1328_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1));
v___x_1329_ = l_Lean_Name_mkStr6(v___x_1296_, v___x_1297_, v___x_1298_, v___x_1299_, v___x_1327_, v___x_1328_);
v___x_1330_ = l_Lean_mkConst(v___x_1329_, v___x_1300_);
v_prf_1331_ = l_Lean_mkApp7(v___x_1330_, v_00_u03c3s_1301_, v_hyps_1302_, v_a_1303_, v_target_1304_, v_a_1292_, v_a_1305_, v_a_1323_);
if (v_isShared_1326_ == 0)
{
lean_ctor_set(v___x_1325_, 0, v_prf_1331_);
v___x_1333_ = v___x_1325_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_prf_1331_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
else
{
lean_dec_ref(v_a_1305_);
lean_dec_ref(v_target_1304_);
lean_dec_ref(v_a_1303_);
lean_dec_ref(v_hyps_1302_);
lean_dec_ref(v_00_u03c3s_1301_);
lean_dec(v___x_1300_);
lean_dec_ref(v___x_1299_);
lean_dec_ref(v___x_1298_);
lean_dec_ref(v___x_1297_);
lean_dec_ref(v___x_1296_);
lean_dec_ref(v_a_1292_);
return v___x_1322_;
}
}
else
{
lean_dec_ref(v_h_u03c6_1306_);
lean_dec_ref(v_a_1305_);
lean_dec_ref(v_target_1304_);
lean_dec_ref(v_a_1303_);
lean_dec_ref(v_hyps_1302_);
lean_dec_ref(v_00_u03c3s_1301_);
lean_dec(v___x_1300_);
lean_dec_ref(v___x_1299_);
lean_dec_ref(v___x_1298_);
lean_dec_ref(v___x_1297_);
lean_dec_ref(v___x_1296_);
lean_dec_ref(v_a_1292_);
return v___x_1316_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0___boxed(lean_object** _args){
lean_object* v_kSuccess_1336_ = _args[0];
lean_object* v_a_1337_ = _args[1];
lean_object* v_goal_1338_ = _args[2];
lean_object* v_a_1339_ = _args[3];
lean_object* v___x_1340_ = _args[4];
lean_object* v___x_1341_ = _args[5];
lean_object* v___x_1342_ = _args[6];
lean_object* v___x_1343_ = _args[7];
lean_object* v___x_1344_ = _args[8];
lean_object* v___x_1345_ = _args[9];
lean_object* v_00_u03c3s_1346_ = _args[10];
lean_object* v_hyps_1347_ = _args[11];
lean_object* v_a_1348_ = _args[12];
lean_object* v_target_1349_ = _args[13];
lean_object* v_a_1350_ = _args[14];
lean_object* v_h_u03c6_1351_ = _args[15];
lean_object* v___y_1352_ = _args[16];
lean_object* v___y_1353_ = _args[17];
lean_object* v___y_1354_ = _args[18];
lean_object* v___y_1355_ = _args[19];
lean_object* v___y_1356_ = _args[20];
lean_object* v___y_1357_ = _args[21];
lean_object* v___y_1358_ = _args[22];
lean_object* v___y_1359_ = _args[23];
lean_object* v___y_1360_ = _args[24];
_start:
{
uint8_t v_a_10106__boxed_1361_; uint8_t v___x_10107__boxed_1362_; lean_object* v_res_1363_; 
v_a_10106__boxed_1361_ = lean_unbox(v_a_1339_);
v___x_10107__boxed_1362_ = lean_unbox(v___x_1340_);
v_res_1363_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0(v_kSuccess_1336_, v_a_1337_, v_goal_1338_, v_a_10106__boxed_1361_, v___x_10107__boxed_1362_, v___x_1341_, v___x_1342_, v___x_1343_, v___x_1344_, v___x_1345_, v_00_u03c3s_1346_, v_hyps_1347_, v_a_1348_, v_target_1349_, v_a_1350_, v_h_u03c6_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
lean_dec(v___y_1359_);
lean_dec_ref(v___y_1358_);
lean_dec(v___y_1357_);
lean_dec_ref(v___y_1356_);
lean_dec(v___y_1355_);
lean_dec_ref(v___y_1354_);
lean_dec(v___y_1353_);
lean_dec_ref(v___y_1352_);
return v_res_1363_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1370_ = lean_box(0);
v___x_1371_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1));
v___x_1372_ = l_Lean_mkConst(v___x_1371_, v___x_1370_);
return v___x_1372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2(lean_object* v_goal_1373_, lean_object* v_kFail_1374_, lean_object* v_kSuccess_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_){
_start:
{
lean_object* v_u_1385_; lean_object* v_00_u03c3s_1386_; lean_object* v_hyps_1387_; lean_object* v_target_1388_; lean_object* v___x_1390_; uint8_t v_isShared_1391_; uint8_t v_isSharedCheck_1464_; 
v_u_1385_ = lean_ctor_get(v_goal_1373_, 0);
v_00_u03c3s_1386_ = lean_ctor_get(v_goal_1373_, 1);
v_hyps_1387_ = lean_ctor_get(v_goal_1373_, 2);
v_target_1388_ = lean_ctor_get(v_goal_1373_, 3);
v_isSharedCheck_1464_ = !lean_is_exclusive(v_goal_1373_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1390_ = v_goal_1373_;
v_isShared_1391_ = v_isSharedCheck_1464_;
goto v_resetjp_1389_;
}
else
{
lean_inc(v_target_1388_);
lean_inc(v_hyps_1387_);
lean_inc(v_00_u03c3s_1386_);
lean_inc(v_u_1385_);
lean_dec(v_goal_1373_);
v___x_1390_ = lean_box(0);
v_isShared_1391_ = v_isSharedCheck_1464_;
goto v_resetjp_1389_;
}
v_resetjp_1389_:
{
lean_object* v___x_1392_; uint8_t v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1392_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1);
v___x_1393_ = 0;
v___x_1394_ = lean_box(0);
v___x_1395_ = l_Lean_Meta_mkFreshExprMVar(v___x_1392_, v___x_1393_, v___x_1394_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_object* v_a_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1463_; 
v_a_1396_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1398_ = v___x_1395_;
v_isShared_1399_ = v_isSharedCheck_1463_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_a_1396_);
lean_dec(v___x_1395_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1463_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1409_; 
v___x_1400_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0));
v___x_1401_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1));
v___x_1402_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2));
v___x_1403_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3));
v___x_1404_ = lean_box(0);
lean_inc(v_u_1385_);
v___x_1405_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1405_, 0, v_u_1385_);
lean_ctor_set(v___x_1405_, 1, v___x_1404_);
lean_inc_ref(v___x_1405_);
v___x_1406_ = l_Lean_mkConst(v___x_1403_, v___x_1405_);
lean_inc_ref(v_00_u03c3s_1386_);
v___x_1407_ = l_Lean_Expr_app___override(v___x_1406_, v_00_u03c3s_1386_);
if (v_isShared_1399_ == 0)
{
lean_ctor_set_tag(v___x_1398_, 1);
lean_ctor_set(v___x_1398_, 0, v___x_1407_);
v___x_1409_ = v___x_1398_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v___x_1407_);
v___x_1409_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
lean_object* v___x_1410_; 
v___x_1410_ = l_Lean_Meta_mkFreshExprMVar(v___x_1409_, v___x_1393_, v___x_1394_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v_a_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; 
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
lean_inc_n(v_a_1411_, 2);
lean_dec_ref_known(v___x_1410_, 1);
v___x_1412_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0));
v___x_1413_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0));
lean_inc_ref(v___x_1405_);
v___x_1414_ = l_Lean_mkConst(v___x_1413_, v___x_1405_);
lean_inc(v_a_1396_);
lean_inc_ref(v_hyps_1387_);
lean_inc_ref(v_00_u03c3s_1386_);
v___x_1415_ = l_Lean_mkApp4(v___x_1414_, v_00_u03c3s_1386_, v_hyps_1387_, v_a_1411_, v_a_1396_);
v___x_1416_ = lean_box(0);
v___x_1417_ = l_Lean_Meta_trySynthInstance(v___x_1415_, v___x_1416_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v_a_1418_; 
v_a_1418_ = lean_ctor_get(v___x_1417_, 0);
lean_inc(v_a_1418_);
lean_dec_ref_known(v___x_1417_, 1);
if (lean_obj_tag(v_a_1418_) == 1)
{
lean_object* v_a_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v_a_1419_ = lean_ctor_get(v_a_1418_, 0);
lean_inc(v_a_1419_);
lean_dec_ref_known(v_a_1418_, 1);
v___x_1420_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1);
lean_inc(v_a_1396_);
v___x_1421_ = l_Lean_Meta_isExprDefEq(v___x_1420_, v_a_1396_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; uint8_t v___x_1423_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc(v_a_1422_);
lean_dec_ref_known(v___x_1421_, 1);
v___x_1423_ = lean_unbox(v_a_1422_);
if (v___x_1423_ == 0)
{
uint8_t v___x_1424_; lean_object* v___x_1425_; 
lean_dec_ref(v_kFail_1374_);
v___x_1424_ = 1;
lean_inc_ref(v_hyps_1387_);
v___x_1425_ = l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames(v_hyps_1387_, v_a_1411_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; lean_object* v_goal_1428_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
lean_inc_n(v_a_1426_, 2);
lean_dec_ref_known(v___x_1425_, 1);
lean_inc_ref(v_target_1388_);
lean_inc_ref(v_00_u03c3s_1386_);
if (v_isShared_1391_ == 0)
{
lean_ctor_set(v___x_1390_, 2, v_a_1426_);
v_goal_1428_ = v___x_1390_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v_u_1385_);
lean_ctor_set(v_reuseFailAlloc_1443_, 1, v_00_u03c3s_1386_);
lean_ctor_set(v_reuseFailAlloc_1443_, 2, v_a_1426_);
lean_ctor_set(v_reuseFailAlloc_1443_, 3, v_target_1388_);
v_goal_1428_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
lean_object* v___x_1429_; lean_object* v___f_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1429_ = lean_box(v___x_1424_);
lean_inc(v_a_1396_);
v___f_1430_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0___boxed), 25, 15);
lean_closure_set(v___f_1430_, 0, v_kSuccess_1375_);
lean_closure_set(v___f_1430_, 1, v_a_1396_);
lean_closure_set(v___f_1430_, 2, v_goal_1428_);
lean_closure_set(v___f_1430_, 3, v_a_1422_);
lean_closure_set(v___f_1430_, 4, v___x_1429_);
lean_closure_set(v___f_1430_, 5, v___x_1400_);
lean_closure_set(v___f_1430_, 6, v___x_1401_);
lean_closure_set(v___f_1430_, 7, v___x_1402_);
lean_closure_set(v___f_1430_, 8, v___x_1412_);
lean_closure_set(v___f_1430_, 9, v___x_1405_);
lean_closure_set(v___f_1430_, 10, v_00_u03c3s_1386_);
lean_closure_set(v___f_1430_, 11, v_hyps_1387_);
lean_closure_set(v___f_1430_, 12, v_a_1426_);
lean_closure_set(v___f_1430_, 13, v_target_1388_);
lean_closure_set(v___f_1430_, 14, v_a_1419_);
v___x_1431_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1));
v___x_1432_ = l_Lean_Core_mkFreshUserName(v___x_1431_, v___y_1382_, v___y_1383_);
if (lean_obj_tag(v___x_1432_) == 0)
{
lean_object* v_a_1433_; lean_object* v___x_1434_; 
v_a_1433_ = lean_ctor_get(v___x_1432_, 0);
lean_inc(v_a_1433_);
lean_dec_ref_known(v___x_1432_, 1);
v___x_1434_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(v_a_1433_, v_a_1396_, v___f_1430_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_);
return v___x_1434_;
}
else
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1442_; 
lean_dec_ref(v___f_1430_);
lean_dec(v_a_1396_);
v_a_1435_ = lean_ctor_get(v___x_1432_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1432_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1437_ = v___x_1432_;
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1432_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1440_; 
if (v_isShared_1438_ == 0)
{
v___x_1440_ = v___x_1437_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_a_1435_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
}
}
else
{
lean_dec(v_a_1422_);
lean_dec(v_a_1419_);
lean_dec_ref_known(v___x_1405_, 2);
lean_dec(v_a_1396_);
lean_del_object(v___x_1390_);
lean_dec_ref(v_target_1388_);
lean_dec_ref(v_hyps_1387_);
lean_dec_ref(v_00_u03c3s_1386_);
lean_dec(v_u_1385_);
lean_dec_ref(v_kSuccess_1375_);
return v___x_1425_;
}
}
else
{
lean_object* v___x_1444_; 
lean_dec(v_a_1422_);
lean_dec(v_a_1419_);
lean_dec(v_a_1411_);
lean_dec_ref_known(v___x_1405_, 2);
lean_dec(v_a_1396_);
lean_del_object(v___x_1390_);
lean_dec_ref(v_target_1388_);
lean_dec_ref(v_hyps_1387_);
lean_dec_ref(v_00_u03c3s_1386_);
lean_dec(v_u_1385_);
lean_dec_ref(v_kSuccess_1375_);
lean_inc(v___y_1383_);
lean_inc_ref(v___y_1382_);
lean_inc(v___y_1381_);
lean_inc_ref(v___y_1380_);
lean_inc(v___y_1379_);
lean_inc_ref(v___y_1378_);
lean_inc(v___y_1377_);
lean_inc_ref(v___y_1376_);
v___x_1444_ = lean_apply_9(v_kFail_1374_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, lean_box(0));
return v___x_1444_;
}
}
else
{
lean_object* v_a_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1452_; 
lean_dec(v_a_1419_);
lean_dec(v_a_1411_);
lean_dec_ref_known(v___x_1405_, 2);
lean_dec(v_a_1396_);
lean_del_object(v___x_1390_);
lean_dec_ref(v_target_1388_);
lean_dec_ref(v_hyps_1387_);
lean_dec_ref(v_00_u03c3s_1386_);
lean_dec(v_u_1385_);
lean_dec_ref(v_kSuccess_1375_);
lean_dec_ref(v_kFail_1374_);
v_a_1445_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1452_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1447_ = v___x_1421_;
v_isShared_1448_ = v_isSharedCheck_1452_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_a_1445_);
lean_dec(v___x_1421_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1452_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1450_; 
if (v_isShared_1448_ == 0)
{
v___x_1450_ = v___x_1447_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v_a_1445_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
return v___x_1450_;
}
}
}
}
else
{
lean_object* v___x_1453_; 
lean_dec(v_a_1418_);
lean_dec(v_a_1411_);
lean_dec_ref_known(v___x_1405_, 2);
lean_dec(v_a_1396_);
lean_del_object(v___x_1390_);
lean_dec_ref(v_target_1388_);
lean_dec_ref(v_hyps_1387_);
lean_dec_ref(v_00_u03c3s_1386_);
lean_dec(v_u_1385_);
lean_dec_ref(v_kSuccess_1375_);
lean_inc(v___y_1383_);
lean_inc_ref(v___y_1382_);
lean_inc(v___y_1381_);
lean_inc_ref(v___y_1380_);
lean_inc(v___y_1379_);
lean_inc_ref(v___y_1378_);
lean_inc(v___y_1377_);
lean_inc_ref(v___y_1376_);
v___x_1453_ = lean_apply_9(v_kFail_1374_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, lean_box(0));
return v___x_1453_;
}
}
else
{
lean_object* v_a_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1461_; 
lean_dec(v_a_1411_);
lean_dec_ref_known(v___x_1405_, 2);
lean_dec(v_a_1396_);
lean_del_object(v___x_1390_);
lean_dec_ref(v_target_1388_);
lean_dec_ref(v_hyps_1387_);
lean_dec_ref(v_00_u03c3s_1386_);
lean_dec(v_u_1385_);
lean_dec_ref(v_kSuccess_1375_);
lean_dec_ref(v_kFail_1374_);
v_a_1454_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1456_ = v___x_1417_;
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_a_1454_);
lean_dec(v___x_1417_);
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
else
{
lean_dec_ref_known(v___x_1405_, 2);
lean_dec(v_a_1396_);
lean_del_object(v___x_1390_);
lean_dec_ref(v_target_1388_);
lean_dec_ref(v_hyps_1387_);
lean_dec_ref(v_00_u03c3s_1386_);
lean_dec(v_u_1385_);
lean_dec_ref(v_kSuccess_1375_);
lean_dec_ref(v_kFail_1374_);
return v___x_1410_;
}
}
}
}
else
{
lean_del_object(v___x_1390_);
lean_dec_ref(v_target_1388_);
lean_dec_ref(v_hyps_1387_);
lean_dec_ref(v_00_u03c3s_1386_);
lean_dec(v_u_1385_);
lean_dec_ref(v_kSuccess_1375_);
lean_dec_ref(v_kFail_1374_);
return v___x_1395_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___boxed(lean_object* v_goal_1465_, lean_object* v_kFail_1466_, lean_object* v_kSuccess_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_){
_start:
{
lean_object* v_res_1477_; 
v_res_1477_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2(v_goal_1465_, v_kFail_1466_, v_kSuccess_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_);
lean_dec(v___y_1475_);
lean_dec_ref(v___y_1474_);
lean_dec(v___y_1473_);
lean_dec_ref(v___y_1472_);
lean_dec(v___y_1471_);
lean_dec_ref(v___y_1470_);
lean_dec(v___y_1469_);
lean_dec_ref(v___y_1468_);
return v_res_1477_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1479_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__0));
v___x_1480_ = l_Lean_stringToMessageData(v___x_1479_);
return v___x_1480_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1481_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__1);
v___x_1482_ = lean_alloc_closure((void*)(l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___boxed), 11, 2);
lean_closure_set(v___x_1482_, 0, lean_box(0));
lean_closure_set(v___x_1482_, 1, v___x_1481_);
return v___x_1482_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1484_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__3));
v___x_1485_ = l_Lean_stringToMessageData(v___x_1484_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1(lean_object* v_a_1486_, lean_object* v___f_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v___x_1497_; 
lean_inc(v_a_1486_);
v___x_1497_ = l_Lean_MVarId_getType(v_a_1486_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_);
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v_a_1498_; lean_object* v___x_1499_; lean_object* v_a_1500_; lean_object* v___x_1501_; 
v_a_1498_ = lean_ctor_get(v___x_1497_, 0);
lean_inc(v_a_1498_);
lean_dec_ref_known(v___x_1497_, 1);
v___x_1499_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(v_a_1498_, v___y_1493_);
v_a_1500_ = lean_ctor_get(v___x_1499_, 0);
lean_inc(v_a_1500_);
lean_dec_ref(v___x_1499_);
v___x_1501_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_1500_);
lean_dec(v_a_1500_);
if (lean_obj_tag(v___x_1501_) == 1)
{
lean_object* v_val_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
v_val_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_val_1502_);
lean_dec_ref_known(v___x_1501_, 1);
v___x_1503_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__2);
v___x_1504_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2(v_val_1502_, v___x_1503_, v___f_1487_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_);
if (lean_obj_tag(v___x_1504_) == 0)
{
lean_object* v_a_1505_; lean_object* v___x_1506_; 
v_a_1505_ = lean_ctor_get(v___x_1504_, 0);
lean_inc(v_a_1505_);
lean_dec_ref_known(v___x_1504_, 1);
v___x_1506_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(v_a_1486_, v_a_1505_, v___y_1493_);
return v___x_1506_;
}
else
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1514_; 
lean_dec(v_a_1486_);
v_a_1507_ = lean_ctor_get(v___x_1504_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1504_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1509_ = v___x_1504_;
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1504_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_a_1507_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
else
{
lean_object* v___x_1515_; lean_object* v___x_1516_; 
lean_dec(v___x_1501_);
lean_dec_ref(v___f_1487_);
lean_dec(v_a_1486_);
v___x_1515_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___closed__4);
v___x_1516_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(v___x_1515_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_);
return v___x_1516_;
}
}
else
{
lean_object* v_a_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1524_; 
lean_dec_ref(v___f_1487_);
lean_dec(v_a_1486_);
v_a_1517_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1524_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1519_ = v___x_1497_;
v_isShared_1520_ = v_isSharedCheck_1524_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_a_1517_);
lean_dec(v___x_1497_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1524_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1522_; 
if (v_isShared_1520_ == 0)
{
v___x_1522_ = v___x_1519_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v_a_1517_);
v___x_1522_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
return v___x_1522_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___boxed(lean_object* v_a_1525_, lean_object* v___f_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1(v_a_1525_, v___f_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
lean_dec(v___y_1528_);
lean_dec_ref(v___y_1527_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg(lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_){
_start:
{
lean_object* v___f_1547_; lean_object* v___x_1548_; 
v___f_1547_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__0));
v___x_1548_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_1539_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_);
if (lean_obj_tag(v___x_1548_) == 0)
{
lean_object* v_a_1549_; lean_object* v___f_1550_; lean_object* v___x_1551_; 
v_a_1549_ = lean_ctor_get(v___x_1548_, 0);
lean_inc_n(v_a_1549_, 2);
lean_dec_ref_known(v___x_1548_, 1);
v___f_1550_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___boxed), 11, 2);
lean_closure_set(v___f_1550_, 0, v_a_1549_);
lean_closure_set(v___f_1550_, 1, v___f_1547_);
v___x_1551_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(v_a_1549_, v___f_1550_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_);
return v___x_1551_;
}
else
{
lean_object* v_a_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1559_; 
v_a_1552_ = lean_ctor_get(v___x_1548_, 0);
v_isSharedCheck_1559_ = !lean_is_exclusive(v___x_1548_);
if (v_isSharedCheck_1559_ == 0)
{
v___x_1554_ = v___x_1548_;
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_a_1552_);
lean_dec(v___x_1548_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v___x_1557_; 
if (v_isShared_1555_ == 0)
{
v___x_1557_ = v___x_1554_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1558_; 
v_reuseFailAlloc_1558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1558_, 0, v_a_1552_);
v___x_1557_ = v_reuseFailAlloc_1558_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
return v___x_1557_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___boxed(lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg(v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec(v___y_1561_);
lean_dec_ref(v___y_1560_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame(lean_object* v_x_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_){
_start:
{
lean_object* v___x_1580_; 
v___x_1580_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg(v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_);
return v___x_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___boxed(lean_object* v_x_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame(v_x_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
lean_dec(v___y_1585_);
lean_dec_ref(v___y_1584_);
lean_dec(v___y_1583_);
lean_dec_ref(v___y_1582_);
lean_dec(v_x_1581_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3(lean_object* v_mvarId_1592_, lean_object* v_val_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(v_mvarId_1592_, v_val_1593_, v___y_1599_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___boxed(lean_object* v_mvarId_1604_, lean_object* v_val_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
lean_object* v_res_1615_; 
v_res_1615_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3(v_mvarId_1604_, v_val_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
return v_res_1615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5(lean_object* v_00_u03b1_1616_, lean_object* v_name_1617_, uint8_t v_bi_1618_, lean_object* v_type_1619_, lean_object* v_k_1620_, uint8_t v_kind_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_){
_start:
{
lean_object* v___x_1631_; 
v___x_1631_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg(v_name_1617_, v_bi_1618_, v_type_1619_, v_k_1620_, v_kind_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1632_, lean_object* v_name_1633_, lean_object* v_bi_1634_, lean_object* v_type_1635_, lean_object* v_k_1636_, lean_object* v_kind_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_){
_start:
{
uint8_t v_bi_boxed_1647_; uint8_t v_kind_boxed_1648_; lean_object* v_res_1649_; 
v_bi_boxed_1647_ = lean_unbox(v_bi_1634_);
v_kind_boxed_1648_ = lean_unbox(v_kind_1637_);
v_res_1649_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5(v_00_u03b1_1632_, v_name_1633_, v_bi_boxed_1647_, v_type_1635_, v_k_1636_, v_kind_boxed_1648_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
lean_dec(v___y_1639_);
lean_dec_ref(v___y_1638_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3(lean_object* v_00_u03b1_1650_, lean_object* v_name_1651_, lean_object* v_type_1652_, lean_object* v_k_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(v_name_1651_, v_type_1652_, v_k_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1664_, lean_object* v_name_1665_, lean_object* v_type_1666_, lean_object* v_k_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
lean_object* v_res_1677_; 
v_res_1677_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3(v_00_u03b1_1664_, v_name_1665_, v_type_1666_, v_k_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
lean_dec(v___y_1673_);
lean_dec_ref(v___y_1672_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
lean_dec(v___y_1669_);
lean_dec_ref(v___y_1668_);
return v_res_1677_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5(lean_object* v_00_u03b2_1678_, lean_object* v_x_1679_, lean_object* v_x_1680_, lean_object* v_x_1681_){
_start:
{
lean_object* v___x_1682_; 
v___x_1682_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5___redArg(v_x_1679_, v_x_1680_, v_x_1681_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8(lean_object* v_00_u03b2_1683_, lean_object* v_x_1684_, size_t v_x_1685_, size_t v_x_1686_, lean_object* v_x_1687_, lean_object* v_x_1688_){
_start:
{
lean_object* v___x_1689_; 
v___x_1689_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(v_x_1684_, v_x_1685_, v_x_1686_, v_x_1687_, v_x_1688_);
return v___x_1689_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___boxed(lean_object* v_00_u03b2_1690_, lean_object* v_x_1691_, lean_object* v_x_1692_, lean_object* v_x_1693_, lean_object* v_x_1694_, lean_object* v_x_1695_){
_start:
{
size_t v_x_10726__boxed_1696_; size_t v_x_10727__boxed_1697_; lean_object* v_res_1698_; 
v_x_10726__boxed_1696_ = lean_unbox_usize(v_x_1692_);
lean_dec(v_x_1692_);
v_x_10727__boxed_1697_ = lean_unbox_usize(v_x_1693_);
lean_dec(v_x_1693_);
v_res_1698_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8(v_00_u03b2_1690_, v_x_1691_, v_x_10726__boxed_1696_, v_x_10727__boxed_1697_, v_x_1694_, v_x_1695_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__9(lean_object* v_00_u03b2_1699_, lean_object* v_n_1700_, lean_object* v_k_1701_, lean_object* v_v_1702_){
_start:
{
lean_object* v___x_1703_; 
v___x_1703_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__9___redArg(v_n_1700_, v_k_1701_, v_v_1702_);
return v___x_1703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10(lean_object* v_00_u03b2_1704_, size_t v_depth_1705_, lean_object* v_keys_1706_, lean_object* v_vals_1707_, lean_object* v_heq_1708_, lean_object* v_i_1709_, lean_object* v_entries_1710_){
_start:
{
lean_object* v___x_1711_; 
v___x_1711_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___redArg(v_depth_1705_, v_keys_1706_, v_vals_1707_, v_i_1709_, v_entries_1710_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___boxed(lean_object* v_00_u03b2_1712_, lean_object* v_depth_1713_, lean_object* v_keys_1714_, lean_object* v_vals_1715_, lean_object* v_heq_1716_, lean_object* v_i_1717_, lean_object* v_entries_1718_){
_start:
{
size_t v_depth_boxed_1719_; lean_object* v_res_1720_; 
v_depth_boxed_1719_ = lean_unbox_usize(v_depth_1713_);
lean_dec(v_depth_1713_);
v_res_1720_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10(v_00_u03b2_1712_, v_depth_boxed_1719_, v_keys_1714_, v_vals_1715_, v_heq_1716_, v_i_1717_, v_entries_1718_);
lean_dec_ref(v_vals_1715_);
lean_dec_ref(v_keys_1714_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__9_spec__10(lean_object* v_00_u03b2_1721_, lean_object* v_x_1722_, lean_object* v_x_1723_, lean_object* v_x_1724_, lean_object* v_x_1725_){
_start:
{
lean_object* v___x_1726_; 
v___x_1726_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__9_spec__10___redArg(v_x_1722_, v_x_1723_, v_x_1724_, v_x_1725_);
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1(){
_start:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; 
v___x_1746_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1747_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3));
v___x_1748_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7));
v___x_1749_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___boxed), 10, 0);
v___x_1750_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1746_, v___x_1747_, v___x_1748_, v___x_1749_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___boxed(lean_object* v___y_1751_){
_start:
{
lean_object* v_res_1752_; 
v_res_1752_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1();
return v_res_1752_;
}
}
lean_object* runtime_initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(builtin);
}
#ifdef __cplusplus
}
#endif
