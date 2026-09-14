// Lean compiler output
// Module: Lean.Meta.Transform
// Imports: public import Lean.Meta.FunInfo import Init.Data.Range.Polymorphic.Iterators
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*);
lean_object* l_Lean_MonadCacheT_instMonadControl___redArg();
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Core_checkSystem___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_withAppAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_withIncRecDepth___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Expr_constName_x21(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_ConstantInfo_hasValue(lean_object*, uint8_t);
lean_object* l_Lean_Core_instantiateValueLevelParams(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_mkForallFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Meta_mkLetFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_patternWithRef_x3f(lean_object*);
lean_object* l_Lean_instReprExpr_repr(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_findDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
uint8_t l_Lean_Expr_isHeadBetaTarget(lean_object*, uint8_t);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getValue_x3f___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Core_liftIOCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_num_indices(lean_object*);
lean_object* l_Lean_inaccessible_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instInhabitedTransformStep_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_instInhabitedTransformStep_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedTransformStep_default___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedTransformStep_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedTransformStep_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_instInhabitedTransformStep_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedTransformStep_default___closed__1_value;
static lean_once_cell_t l_Lean_instInhabitedTransformStep_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTransformStep_default___closed__2;
static lean_once_cell_t l_Lean_instInhabitedTransformStep_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTransformStep_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTransformStep_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTransformStep;
static const lean_string_object l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprTransformStep_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.TransformStep.done"};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__0 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__1 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__1_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__2 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__2_value;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__3;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__4;
static const lean_string_object l_Lean_instReprTransformStep_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.TransformStep.visit"};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__5 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__5_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__5_value)}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__6 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__6_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__7 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__7_value;
static const lean_string_object l_Lean_instReprTransformStep_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.TransformStep.continue"};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__8 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__8_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__8_value)}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__9 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__9_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__10 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprTransformStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprTransformStep_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprTransformStep___closed__0 = (const lean_object*)&l_Lean_instReprTransformStep___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprTransformStep = (const lean_object*)&l_Lean_instReprTransformStep___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0;
static const lean_closure_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_checkSystem___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20___closed__0_value)} };
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20___closed__1 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_transform___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___redArg___closed__0;
static lean_once_cell_t l_Lean_Core_transform___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___redArg___closed__1;
static lean_once_cell_t l_Lean_Core_transform___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Core_betaReduce___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Core_betaReduce___lam__0___closed__0 = (const lean_object*)&l_Lean_Core_betaReduce___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Core_betaReduce___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_betaReduce___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Core_betaReduce___closed__0 = (const lean_object*)&l_Lean_Core_betaReduce___closed__0_value;
static const lean_closure_object l_Lean_Core_betaReduce___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_betaReduce___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Core_betaReduce___closed__1 = (const lean_object*)&l_Lean_Core_betaReduce___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9___boxed(lean_object**);
static const lean_closure_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20___closed__0_value)} };
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_zetaReduce___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_zetaReduce___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_zetaReduce___closed__0 = (const lean_object*)&l_Lean_Meta_zetaReduce___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_eraseInaccessibleAnnotations___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_eraseInaccessibleAnnotations___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___closed__0 = (const lean_object*)&l_Lean_Meta_eraseInaccessibleAnnotations___closed__0_value;
static const lean_closure_object l_Lean_Meta_eraseInaccessibleAnnotations___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_eraseInaccessibleAnnotations___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___closed__1 = (const lean_object*)&l_Lean_Meta_eraseInaccessibleAnnotations___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_erasePatternRefAnnotations___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_erasePatternRefAnnotations___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_erasePatternRefAnnotations___closed__0 = (const lean_object*)&l_Lean_Meta_erasePatternRefAnnotations___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_TransformStep_ctorIdx(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 2)
{
lean_object* v_e_x3f_9_; lean_object* v___x_10_; 
v_e_x3f_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_e_x3f_9_);
lean_dec_ref_known(v_t_7_, 1);
v___x_10_ = lean_apply_1(v_k_8_, v_e_x3f_9_);
return v___x_10_;
}
else
{
lean_object* v_e_11_; lean_object* v___x_12_; 
v_e_11_ = lean_ctor_get(v_t_7_, 0);
lean_inc_ref(v_e_11_);
lean_dec_ref(v_t_7_);
v___x_12_ = lean_apply_1(v_k_8_, v_e_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_TransformStep_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_TransformStep_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim___redArg(lean_object* v_t_25_, lean_object* v_done_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_TransformStep_ctorElim___redArg(v_t_25_, v_done_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_done_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_TransformStep_ctorElim___redArg(v_t_29_, v_done_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim___redArg(lean_object* v_t_33_, lean_object* v_visit_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_TransformStep_ctorElim___redArg(v_t_33_, v_visit_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_visit_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_TransformStep_ctorElim___redArg(v_t_37_, v_visit_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim___redArg(lean_object* v_t_41_, lean_object* v_continue_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_TransformStep_ctorElim___redArg(v_t_41_, v_continue_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim(lean_object* v_motive_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_continue_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_TransformStep_ctorElim___redArg(v_t_45_, v_continue_47_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep_default___closed__2(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = lean_box(0);
v___x_53_ = ((lean_object*)(l_Lean_instInhabitedTransformStep_default___closed__1));
v___x_54_ = l_Lean_Expr_const___override(v___x_53_, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep_default___closed__3(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&l_Lean_instInhabitedTransformStep_default___closed__2, &l_Lean_instInhabitedTransformStep_default___closed__2_once, _init_l_Lean_instInhabitedTransformStep_default___closed__2);
v___x_56_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep_default(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_obj_once(&l_Lean_instInhabitedTransformStep_default___closed__3, &l_Lean_instInhabitedTransformStep_default___closed__3_once, _init_l_Lean_instInhabitedTransformStep_default___closed__3);
return v___x_57_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep(void){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_instInhabitedTransformStep_default;
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(lean_object* v_x_65_, lean_object* v_x_66_){
_start:
{
if (lean_obj_tag(v_x_65_) == 0)
{
lean_object* v___x_67_; 
v___x_67_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1));
return v___x_67_;
}
else
{
lean_object* v_val_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v_val_68_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_val_68_);
lean_dec_ref_known(v_x_65_, 1);
v___x_69_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3));
v___x_70_ = lean_unsigned_to_nat(1024u);
v___x_71_ = l_Lean_instReprExpr_repr(v_val_68_, v___x_70_);
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_69_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = l_Repr_addAppParen(v___x_72_, v_x_66_);
return v___x_73_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___boxed(lean_object* v_x_74_, lean_object* v_x_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(v_x_74_, v_x_75_);
lean_dec(v_x_75_);
return v_res_76_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__3(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_unsigned_to_nat(2u);
v___x_84_ = lean_nat_to_int(v___x_83_);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__4(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_unsigned_to_nat(1u);
v___x_86_ = lean_nat_to_int(v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr(lean_object* v_x_99_, lean_object* v_prec_100_){
_start:
{
switch(lean_obj_tag(v_x_99_))
{
case 0:
{
lean_object* v_e_101_; lean_object* v___y_103_; lean_object* v___x_112_; uint8_t v___x_113_; 
v_e_101_ = lean_ctor_get(v_x_99_, 0);
lean_inc_ref(v_e_101_);
lean_dec_ref_known(v_x_99_, 1);
v___x_112_ = lean_unsigned_to_nat(1024u);
v___x_113_ = lean_nat_dec_le(v___x_112_, v_prec_100_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; 
v___x_114_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__3, &l_Lean_instReprTransformStep_repr___closed__3_once, _init_l_Lean_instReprTransformStep_repr___closed__3);
v___y_103_ = v___x_114_;
goto v___jp_102_;
}
else
{
lean_object* v___x_115_; 
v___x_115_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__4, &l_Lean_instReprTransformStep_repr___closed__4_once, _init_l_Lean_instReprTransformStep_repr___closed__4);
v___y_103_ = v___x_115_;
goto v___jp_102_;
}
v___jp_102_:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_104_ = ((lean_object*)(l_Lean_instReprTransformStep_repr___closed__2));
v___x_105_ = lean_unsigned_to_nat(1024u);
v___x_106_ = l_Lean_instReprExpr_repr(v_e_101_, v___x_105_);
v___x_107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_104_);
lean_ctor_set(v___x_107_, 1, v___x_106_);
lean_inc(v___y_103_);
v___x_108_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_108_, 0, v___y_103_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = 0;
v___x_110_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_110_, 0, v___x_108_);
lean_ctor_set_uint8(v___x_110_, sizeof(void*)*1, v___x_109_);
v___x_111_ = l_Repr_addAppParen(v___x_110_, v_prec_100_);
return v___x_111_;
}
}
case 1:
{
lean_object* v_e_116_; lean_object* v___y_118_; lean_object* v___x_127_; uint8_t v___x_128_; 
v_e_116_ = lean_ctor_get(v_x_99_, 0);
lean_inc_ref(v_e_116_);
lean_dec_ref_known(v_x_99_, 1);
v___x_127_ = lean_unsigned_to_nat(1024u);
v___x_128_ = lean_nat_dec_le(v___x_127_, v_prec_100_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; 
v___x_129_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__3, &l_Lean_instReprTransformStep_repr___closed__3_once, _init_l_Lean_instReprTransformStep_repr___closed__3);
v___y_118_ = v___x_129_;
goto v___jp_117_;
}
else
{
lean_object* v___x_130_; 
v___x_130_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__4, &l_Lean_instReprTransformStep_repr___closed__4_once, _init_l_Lean_instReprTransformStep_repr___closed__4);
v___y_118_ = v___x_130_;
goto v___jp_117_;
}
v___jp_117_:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; uint8_t v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_119_ = ((lean_object*)(l_Lean_instReprTransformStep_repr___closed__7));
v___x_120_ = lean_unsigned_to_nat(1024u);
v___x_121_ = l_Lean_instReprExpr_repr(v_e_116_, v___x_120_);
v___x_122_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_119_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
lean_inc(v___y_118_);
v___x_123_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_123_, 0, v___y_118_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = 0;
v___x_125_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_125_, 0, v___x_123_);
lean_ctor_set_uint8(v___x_125_, sizeof(void*)*1, v___x_124_);
v___x_126_ = l_Repr_addAppParen(v___x_125_, v_prec_100_);
return v___x_126_;
}
}
default: 
{
lean_object* v_e_x3f_131_; lean_object* v___y_133_; lean_object* v___x_142_; uint8_t v___x_143_; 
v_e_x3f_131_ = lean_ctor_get(v_x_99_, 0);
lean_inc(v_e_x3f_131_);
lean_dec_ref_known(v_x_99_, 1);
v___x_142_ = lean_unsigned_to_nat(1024u);
v___x_143_ = lean_nat_dec_le(v___x_142_, v_prec_100_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; 
v___x_144_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__3, &l_Lean_instReprTransformStep_repr___closed__3_once, _init_l_Lean_instReprTransformStep_repr___closed__3);
v___y_133_ = v___x_144_;
goto v___jp_132_;
}
else
{
lean_object* v___x_145_; 
v___x_145_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__4, &l_Lean_instReprTransformStep_repr___closed__4_once, _init_l_Lean_instReprTransformStep_repr___closed__4);
v___y_133_ = v___x_145_;
goto v___jp_132_;
}
v___jp_132_:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_134_ = ((lean_object*)(l_Lean_instReprTransformStep_repr___closed__10));
v___x_135_ = lean_unsigned_to_nat(1024u);
v___x_136_ = l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(v_e_x3f_131_, v___x_135_);
v___x_137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_134_);
lean_ctor_set(v___x_137_, 1, v___x_136_);
lean_inc(v___y_133_);
v___x_138_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_138_, 0, v___y_133_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = 0;
v___x_140_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_140_, 0, v___x_138_);
lean_ctor_set_uint8(v___x_140_, sizeof(void*)*1, v___x_139_);
v___x_141_ = l_Repr_addAppParen(v___x_140_, v_prec_100_);
return v___x_141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr___boxed(lean_object* v_x_146_, lean_object* v_prec_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_Lean_instReprTransformStep_repr(v_x_146_, v_prec_147_);
lean_dec(v_prec_147_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0(lean_object* v_toApplicative_151_, lean_object* v___x_152_, lean_object* v___x_153_, lean_object* v_e_154_, lean_object* v_a_155_){
_start:
{
lean_object* v_toPure_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v_toPure_156_ = lean_ctor_get(v_toApplicative_151_, 1);
lean_inc(v_toPure_156_);
lean_dec_ref(v_toApplicative_151_);
v___x_157_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_152_, v___x_153_, v_a_155_, v_e_154_);
v___x_158_ = lean_apply_2(v_toPure_156_, lean_box(0), v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0___boxed(lean_object* v_toApplicative_159_, lean_object* v___x_160_, lean_object* v___x_161_, lean_object* v_e_162_, lean_object* v_a_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0(v_toApplicative_159_, v___x_160_, v___x_161_, v_e_162_, v_a_163_);
lean_dec_ref(v_a_163_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__1(lean_object* v_toApplicative_165_, lean_object* v_a_166_, lean_object* v_a_167_){
_start:
{
lean_object* v_toPure_168_; lean_object* v___x_169_; 
v_toPure_168_ = lean_ctor_get(v_toApplicative_165_, 1);
lean_inc(v_toPure_168_);
lean_dec_ref(v_toApplicative_165_);
v___x_169_ = lean_apply_2(v_toPure_168_, lean_box(0), v_a_166_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2(lean_object* v___x_170_, lean_object* v___x_171_, lean_object* v_e_172_, lean_object* v_a_173_, lean_object* v_s_174_){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_175_ = lean_box(0);
v___x_176_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_170_, v___x_171_, v_s_174_, v_e_172_, v_a_173_);
v___x_177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_175_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3(lean_object* v_toApplicative_178_, lean_object* v___x_179_, lean_object* v___x_180_, lean_object* v_e_181_, lean_object* v___y_182_, lean_object* v_x_183_, lean_object* v_toBind_184_, lean_object* v_a_185_){
_start:
{
lean_object* v___f_186_; lean_object* v___f_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
lean_inc_ref(v_a_185_);
v___f_186_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__1), 3, 2);
lean_closure_set(v___f_186_, 0, v_toApplicative_178_);
lean_closure_set(v___f_186_, 1, v_a_185_);
v___f_187_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2), 5, 4);
lean_closure_set(v___f_187_, 0, v___x_179_);
lean_closure_set(v___f_187_, 1, v___x_180_);
lean_closure_set(v___f_187_, 2, v_e_181_);
lean_closure_set(v___f_187_, 3, v_a_185_);
lean_inc(v___y_182_);
v___x_188_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_188_, 0, lean_box(0));
lean_closure_set(v___x_188_, 1, lean_box(0));
lean_closure_set(v___x_188_, 2, lean_box(0));
lean_closure_set(v___x_188_, 3, v___y_182_);
lean_closure_set(v___x_188_, 4, v___f_187_);
v___x_189_ = lean_apply_2(v_x_183_, lean_box(0), v___x_188_);
v___x_190_ = lean_apply_4(v_toBind_184_, lean_box(0), lean_box(0), v___x_189_, v___f_186_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed(lean_object* v_toApplicative_191_, lean_object* v___x_192_, lean_object* v___x_193_, lean_object* v_e_194_, lean_object* v___y_195_, lean_object* v_x_196_, lean_object* v_toBind_197_, lean_object* v_a_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3(v_toApplicative_191_, v___x_192_, v___x_193_, v_e_194_, v___y_195_, v_x_196_, v_toBind_197_, v_a_198_);
lean_dec(v___y_195_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18(lean_object* v_pre_200_, lean_object* v_e_201_, lean_object* v_toBind_202_, lean_object* v___f_203_, lean_object* v_a_204_){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_205_ = lean_apply_1(v_pre_200_, v_e_201_);
v___x_206_ = lean_apply_4(v_toBind_202_, lean_box(0), lean_box(0), v___x_205_, v___f_203_);
return v___x_206_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0(void){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l_Lean_MonadCacheT_instMonadControl___redArg();
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4(lean_object* v_a_210_, lean_object* v_inst_211_, lean_object* v_inst_212_, lean_object* v_inst_213_, lean_object* v_pre_214_, lean_object* v_post_215_, lean_object* v_x_216_, lean_object* v_x_217_, lean_object* v___y_218_, lean_object* v_a_219_){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = l_Lean_mkAppN(v_a_210_, v_a_219_);
v___x_221_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_211_, v_inst_212_, v_inst_213_, v_pre_214_, v_post_215_, v_x_216_, v_x_217_, v___x_220_, v___y_218_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4___boxed(lean_object* v_a_222_, lean_object* v_inst_223_, lean_object* v_inst_224_, lean_object* v_inst_225_, lean_object* v_pre_226_, lean_object* v_post_227_, lean_object* v_x_228_, lean_object* v_x_229_, lean_object* v___y_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4(v_a_222_, v_inst_223_, v_inst_224_, v_inst_225_, v_pre_226_, v_post_227_, v_x_228_, v_x_229_, v___y_230_, v_a_231_);
lean_dec_ref(v_a_231_);
lean_dec(v___y_230_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___boxed(lean_object* v_inst_233_, lean_object* v_inst_234_, lean_object* v_inst_235_, lean_object* v_pre_236_, lean_object* v_post_237_, lean_object* v_x_238_, lean_object* v_x_239_, lean_object* v_e_240_, lean_object* v___y_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_233_, v_inst_234_, v_inst_235_, v_pre_236_, v_post_237_, v_x_238_, v_x_239_, v_e_240_, v___y_241_);
lean_dec(v___y_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5(lean_object* v_inst_243_, lean_object* v_inst_244_, lean_object* v_inst_245_, lean_object* v_pre_246_, lean_object* v_post_247_, lean_object* v_x_248_, lean_object* v_x_249_, lean_object* v___y_250_, lean_object* v_args_251_, lean_object* v___x_252_, lean_object* v_toBind_253_, lean_object* v_a_254_){
_start:
{
lean_object* v___f_255_; lean_object* v___x_256_; size_t v_sz_257_; size_t v___x_258_; lean_object* v___x_3990__overap_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
lean_inc_n(v___y_250_, 2);
lean_inc(v_x_249_);
lean_inc(v_post_247_);
lean_inc(v_pre_246_);
lean_inc_ref(v_inst_245_);
lean_inc(v_inst_244_);
lean_inc_ref(v_inst_243_);
v___f_255_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4___boxed), 10, 9);
lean_closure_set(v___f_255_, 0, v_a_254_);
lean_closure_set(v___f_255_, 1, v_inst_243_);
lean_closure_set(v___f_255_, 2, v_inst_244_);
lean_closure_set(v___f_255_, 3, v_inst_245_);
lean_closure_set(v___f_255_, 4, v_pre_246_);
lean_closure_set(v___f_255_, 5, v_post_247_);
lean_closure_set(v___f_255_, 6, v_x_248_);
lean_closure_set(v___f_255_, 7, v_x_249_);
lean_closure_set(v___f_255_, 8, v___y_250_);
v___x_256_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___boxed), 9, 7);
lean_closure_set(v___x_256_, 0, v_inst_243_);
lean_closure_set(v___x_256_, 1, v_inst_244_);
lean_closure_set(v___x_256_, 2, v_inst_245_);
lean_closure_set(v___x_256_, 3, v_pre_246_);
lean_closure_set(v___x_256_, 4, v_post_247_);
lean_closure_set(v___x_256_, 5, v_x_248_);
lean_closure_set(v___x_256_, 6, v_x_249_);
v_sz_257_ = lean_array_size(v_args_251_);
v___x_258_ = ((size_t)0ULL);
v___x_3990__overap_259_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_252_, v___x_256_, v_sz_257_, v___x_258_, v_args_251_);
v___x_260_ = lean_apply_1(v___x_3990__overap_259_, v___y_250_);
v___x_261_ = lean_apply_4(v_toBind_253_, lean_box(0), lean_box(0), v___x_260_, v___f_255_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5___boxed(lean_object* v_inst_262_, lean_object* v_inst_263_, lean_object* v_inst_264_, lean_object* v_pre_265_, lean_object* v_post_266_, lean_object* v_x_267_, lean_object* v_x_268_, lean_object* v___y_269_, lean_object* v_args_270_, lean_object* v___x_271_, lean_object* v_toBind_272_, lean_object* v_a_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5(v_inst_262_, v_inst_263_, v_inst_264_, v_pre_265_, v_post_266_, v_x_267_, v_x_268_, v___y_269_, v_args_270_, v___x_271_, v_toBind_272_, v_a_273_);
lean_dec(v___y_269_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6(lean_object* v_inst_275_, lean_object* v_inst_276_, lean_object* v_inst_277_, lean_object* v_pre_278_, lean_object* v_post_279_, lean_object* v_x_280_, lean_object* v_x_281_, lean_object* v___x_282_, lean_object* v_toBind_283_, lean_object* v_f_284_, lean_object* v_args_285_, lean_object* v___y_286_){
_start:
{
lean_object* v___f_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
lean_inc(v_toBind_283_);
lean_inc(v___y_286_);
lean_inc(v_x_281_);
lean_inc(v_post_279_);
lean_inc(v_pre_278_);
lean_inc_ref(v_inst_277_);
lean_inc(v_inst_276_);
lean_inc_ref(v_inst_275_);
v___f_287_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5___boxed), 12, 11);
lean_closure_set(v___f_287_, 0, v_inst_275_);
lean_closure_set(v___f_287_, 1, v_inst_276_);
lean_closure_set(v___f_287_, 2, v_inst_277_);
lean_closure_set(v___f_287_, 3, v_pre_278_);
lean_closure_set(v___f_287_, 4, v_post_279_);
lean_closure_set(v___f_287_, 5, v_x_280_);
lean_closure_set(v___f_287_, 6, v_x_281_);
lean_closure_set(v___f_287_, 7, v___y_286_);
lean_closure_set(v___f_287_, 8, v_args_285_);
lean_closure_set(v___f_287_, 9, v___x_282_);
lean_closure_set(v___f_287_, 10, v_toBind_283_);
v___x_288_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_275_, v_inst_276_, v_inst_277_, v_pre_278_, v_post_279_, v_x_280_, v_x_281_, v_f_284_, v___y_286_);
v___x_289_ = lean_apply_4(v_toBind_283_, lean_box(0), lean_box(0), v___x_288_, v___f_287_);
return v___x_289_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6___boxed(lean_object* v_inst_290_, lean_object* v_inst_291_, lean_object* v_inst_292_, lean_object* v_pre_293_, lean_object* v_post_294_, lean_object* v_x_295_, lean_object* v_x_296_, lean_object* v___x_297_, lean_object* v_toBind_298_, lean_object* v_f_299_, lean_object* v_args_300_, lean_object* v___y_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6(v_inst_290_, v_inst_291_, v_inst_292_, v_pre_293_, v_post_294_, v_x_295_, v_x_296_, v___x_297_, v_toBind_298_, v_f_299_, v_args_300_, v___y_301_);
lean_dec(v___y_301_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7___boxed(lean_object* v_inst_306_, lean_object* v_inst_307_, lean_object* v_inst_308_, lean_object* v_pre_309_, lean_object* v_post_310_, lean_object* v_x_311_, lean_object* v_x_312_, lean_object* v___y_313_, lean_object* v_a_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7(v_inst_306_, v_inst_307_, v_inst_308_, v_pre_309_, v_post_310_, v_x_311_, v_x_312_, v___y_313_, v_a_314_);
lean_dec(v___y_313_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8(lean_object* v_binderType_316_, lean_object* v_a_317_, lean_object* v_binderName_318_, uint8_t v_binderInfo_319_, lean_object* v_inst_320_, lean_object* v_inst_321_, lean_object* v_inst_322_, lean_object* v_pre_323_, lean_object* v_post_324_, lean_object* v_x_325_, lean_object* v_x_326_, lean_object* v___y_327_, lean_object* v_body_328_, lean_object* v___y_329_, lean_object* v_a_330_){
_start:
{
size_t v___x_331_; size_t v___x_332_; uint8_t v___x_333_; 
v___x_331_ = lean_ptr_addr(v_binderType_316_);
v___x_332_ = lean_ptr_addr(v_a_317_);
v___x_333_ = lean_usize_dec_eq(v___x_331_, v___x_332_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; lean_object* v___x_335_; 
lean_dec_ref(v___y_329_);
v___x_334_ = l_Lean_Expr_forallE___override(v_binderName_318_, v_a_317_, v_a_330_, v_binderInfo_319_);
v___x_335_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_320_, v_inst_321_, v_inst_322_, v_pre_323_, v_post_324_, v_x_325_, v_x_326_, v___x_334_, v___y_327_);
return v___x_335_;
}
else
{
size_t v___x_336_; size_t v___x_337_; uint8_t v___x_338_; 
v___x_336_ = lean_ptr_addr(v_body_328_);
v___x_337_ = lean_ptr_addr(v_a_330_);
v___x_338_ = lean_usize_dec_eq(v___x_336_, v___x_337_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; lean_object* v___x_340_; 
lean_dec_ref(v___y_329_);
v___x_339_ = l_Lean_Expr_forallE___override(v_binderName_318_, v_a_317_, v_a_330_, v_binderInfo_319_);
v___x_340_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_320_, v_inst_321_, v_inst_322_, v_pre_323_, v_post_324_, v_x_325_, v_x_326_, v___x_339_, v___y_327_);
return v___x_340_;
}
else
{
uint8_t v___x_341_; 
v___x_341_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_319_, v_binderInfo_319_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; lean_object* v___x_343_; 
lean_dec_ref(v___y_329_);
v___x_342_ = l_Lean_Expr_forallE___override(v_binderName_318_, v_a_317_, v_a_330_, v_binderInfo_319_);
v___x_343_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_320_, v_inst_321_, v_inst_322_, v_pre_323_, v_post_324_, v_x_325_, v_x_326_, v___x_342_, v___y_327_);
return v___x_343_;
}
else
{
lean_object* v___x_344_; 
lean_dec_ref(v_a_330_);
lean_dec(v_binderName_318_);
lean_dec_ref(v_a_317_);
v___x_344_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_320_, v_inst_321_, v_inst_322_, v_pre_323_, v_post_324_, v_x_325_, v_x_326_, v___y_329_, v___y_327_);
return v___x_344_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8___boxed(lean_object* v_binderType_345_, lean_object* v_a_346_, lean_object* v_binderName_347_, lean_object* v_binderInfo_348_, lean_object* v_inst_349_, lean_object* v_inst_350_, lean_object* v_inst_351_, lean_object* v_pre_352_, lean_object* v_post_353_, lean_object* v_x_354_, lean_object* v_x_355_, lean_object* v___y_356_, lean_object* v_body_357_, lean_object* v___y_358_, lean_object* v_a_359_){
_start:
{
uint8_t v_binderInfo_4572__boxed_360_; lean_object* v_res_361_; 
v_binderInfo_4572__boxed_360_ = lean_unbox(v_binderInfo_348_);
v_res_361_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8(v_binderType_345_, v_a_346_, v_binderName_347_, v_binderInfo_4572__boxed_360_, v_inst_349_, v_inst_350_, v_inst_351_, v_pre_352_, v_post_353_, v_x_354_, v_x_355_, v___y_356_, v_body_357_, v___y_358_, v_a_359_);
lean_dec_ref(v_body_357_);
lean_dec(v___y_356_);
lean_dec_ref(v_binderType_345_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9(lean_object* v_binderType_362_, lean_object* v_binderName_363_, uint8_t v_binderInfo_364_, lean_object* v_inst_365_, lean_object* v_inst_366_, lean_object* v_inst_367_, lean_object* v_pre_368_, lean_object* v_post_369_, lean_object* v_x_370_, lean_object* v_x_371_, lean_object* v___y_372_, lean_object* v_body_373_, lean_object* v___y_374_, lean_object* v_toBind_375_, lean_object* v_a_376_){
_start:
{
lean_object* v___x_377_; lean_object* v___f_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_377_ = lean_box(v_binderInfo_364_);
lean_inc_ref(v_body_373_);
lean_inc(v___y_372_);
lean_inc(v_x_371_);
lean_inc(v_post_369_);
lean_inc(v_pre_368_);
lean_inc_ref(v_inst_367_);
lean_inc(v_inst_366_);
lean_inc_ref(v_inst_365_);
v___f_378_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8___boxed), 15, 14);
lean_closure_set(v___f_378_, 0, v_binderType_362_);
lean_closure_set(v___f_378_, 1, v_a_376_);
lean_closure_set(v___f_378_, 2, v_binderName_363_);
lean_closure_set(v___f_378_, 3, v___x_377_);
lean_closure_set(v___f_378_, 4, v_inst_365_);
lean_closure_set(v___f_378_, 5, v_inst_366_);
lean_closure_set(v___f_378_, 6, v_inst_367_);
lean_closure_set(v___f_378_, 7, v_pre_368_);
lean_closure_set(v___f_378_, 8, v_post_369_);
lean_closure_set(v___f_378_, 9, v_x_370_);
lean_closure_set(v___f_378_, 10, v_x_371_);
lean_closure_set(v___f_378_, 11, v___y_372_);
lean_closure_set(v___f_378_, 12, v_body_373_);
lean_closure_set(v___f_378_, 13, v___y_374_);
v___x_379_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_365_, v_inst_366_, v_inst_367_, v_pre_368_, v_post_369_, v_x_370_, v_x_371_, v_body_373_, v___y_372_);
lean_dec(v___y_372_);
v___x_380_ = lean_apply_4(v_toBind_375_, lean_box(0), lean_box(0), v___x_379_, v___f_378_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9___boxed(lean_object* v_binderType_381_, lean_object* v_binderName_382_, lean_object* v_binderInfo_383_, lean_object* v_inst_384_, lean_object* v_inst_385_, lean_object* v_inst_386_, lean_object* v_pre_387_, lean_object* v_post_388_, lean_object* v_x_389_, lean_object* v_x_390_, lean_object* v___y_391_, lean_object* v_body_392_, lean_object* v___y_393_, lean_object* v_toBind_394_, lean_object* v_a_395_){
_start:
{
uint8_t v_binderInfo_4410__boxed_396_; lean_object* v_res_397_; 
v_binderInfo_4410__boxed_396_ = lean_unbox(v_binderInfo_383_);
v_res_397_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9(v_binderType_381_, v_binderName_382_, v_binderInfo_4410__boxed_396_, v_inst_384_, v_inst_385_, v_inst_386_, v_pre_387_, v_post_388_, v_x_389_, v_x_390_, v___y_391_, v_body_392_, v___y_393_, v_toBind_394_, v_a_395_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10(lean_object* v_binderType_398_, lean_object* v_a_399_, lean_object* v_binderName_400_, uint8_t v_binderInfo_401_, lean_object* v_inst_402_, lean_object* v_inst_403_, lean_object* v_inst_404_, lean_object* v_pre_405_, lean_object* v_post_406_, lean_object* v_x_407_, lean_object* v_x_408_, lean_object* v___y_409_, lean_object* v_body_410_, lean_object* v___y_411_, lean_object* v_a_412_){
_start:
{
size_t v___x_413_; size_t v___x_414_; uint8_t v___x_415_; 
v___x_413_ = lean_ptr_addr(v_binderType_398_);
v___x_414_ = lean_ptr_addr(v_a_399_);
v___x_415_ = lean_usize_dec_eq(v___x_413_, v___x_414_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; lean_object* v___x_417_; 
lean_dec_ref(v___y_411_);
v___x_416_ = l_Lean_Expr_lam___override(v_binderName_400_, v_a_399_, v_a_412_, v_binderInfo_401_);
v___x_417_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_402_, v_inst_403_, v_inst_404_, v_pre_405_, v_post_406_, v_x_407_, v_x_408_, v___x_416_, v___y_409_);
return v___x_417_;
}
else
{
size_t v___x_418_; size_t v___x_419_; uint8_t v___x_420_; 
v___x_418_ = lean_ptr_addr(v_body_410_);
v___x_419_ = lean_ptr_addr(v_a_412_);
v___x_420_ = lean_usize_dec_eq(v___x_418_, v___x_419_);
if (v___x_420_ == 0)
{
lean_object* v___x_421_; lean_object* v___x_422_; 
lean_dec_ref(v___y_411_);
v___x_421_ = l_Lean_Expr_lam___override(v_binderName_400_, v_a_399_, v_a_412_, v_binderInfo_401_);
v___x_422_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_402_, v_inst_403_, v_inst_404_, v_pre_405_, v_post_406_, v_x_407_, v_x_408_, v___x_421_, v___y_409_);
return v___x_422_;
}
else
{
uint8_t v___x_423_; 
v___x_423_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_401_, v_binderInfo_401_);
if (v___x_423_ == 0)
{
lean_object* v___x_424_; lean_object* v___x_425_; 
lean_dec_ref(v___y_411_);
v___x_424_ = l_Lean_Expr_lam___override(v_binderName_400_, v_a_399_, v_a_412_, v_binderInfo_401_);
v___x_425_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_402_, v_inst_403_, v_inst_404_, v_pre_405_, v_post_406_, v_x_407_, v_x_408_, v___x_424_, v___y_409_);
return v___x_425_;
}
else
{
lean_object* v___x_426_; 
lean_dec_ref(v_a_412_);
lean_dec(v_binderName_400_);
lean_dec_ref(v_a_399_);
v___x_426_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_402_, v_inst_403_, v_inst_404_, v_pre_405_, v_post_406_, v_x_407_, v_x_408_, v___y_411_, v___y_409_);
return v___x_426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10___boxed(lean_object* v_binderType_427_, lean_object* v_a_428_, lean_object* v_binderName_429_, lean_object* v_binderInfo_430_, lean_object* v_inst_431_, lean_object* v_inst_432_, lean_object* v_inst_433_, lean_object* v_pre_434_, lean_object* v_post_435_, lean_object* v_x_436_, lean_object* v_x_437_, lean_object* v___y_438_, lean_object* v_body_439_, lean_object* v___y_440_, lean_object* v_a_441_){
_start:
{
uint8_t v_binderInfo_4547__boxed_442_; lean_object* v_res_443_; 
v_binderInfo_4547__boxed_442_ = lean_unbox(v_binderInfo_430_);
v_res_443_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10(v_binderType_427_, v_a_428_, v_binderName_429_, v_binderInfo_4547__boxed_442_, v_inst_431_, v_inst_432_, v_inst_433_, v_pre_434_, v_post_435_, v_x_436_, v_x_437_, v___y_438_, v_body_439_, v___y_440_, v_a_441_);
lean_dec_ref(v_body_439_);
lean_dec(v___y_438_);
lean_dec_ref(v_binderType_427_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11(lean_object* v_binderType_444_, lean_object* v_binderName_445_, uint8_t v_binderInfo_446_, lean_object* v_inst_447_, lean_object* v_inst_448_, lean_object* v_inst_449_, lean_object* v_pre_450_, lean_object* v_post_451_, lean_object* v_x_452_, lean_object* v_x_453_, lean_object* v___y_454_, lean_object* v_body_455_, lean_object* v___y_456_, lean_object* v_toBind_457_, lean_object* v_a_458_){
_start:
{
lean_object* v___x_459_; lean_object* v___f_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_459_ = lean_box(v_binderInfo_446_);
lean_inc_ref(v_body_455_);
lean_inc(v___y_454_);
lean_inc(v_x_453_);
lean_inc(v_post_451_);
lean_inc(v_pre_450_);
lean_inc_ref(v_inst_449_);
lean_inc(v_inst_448_);
lean_inc_ref(v_inst_447_);
v___f_460_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10___boxed), 15, 14);
lean_closure_set(v___f_460_, 0, v_binderType_444_);
lean_closure_set(v___f_460_, 1, v_a_458_);
lean_closure_set(v___f_460_, 2, v_binderName_445_);
lean_closure_set(v___f_460_, 3, v___x_459_);
lean_closure_set(v___f_460_, 4, v_inst_447_);
lean_closure_set(v___f_460_, 5, v_inst_448_);
lean_closure_set(v___f_460_, 6, v_inst_449_);
lean_closure_set(v___f_460_, 7, v_pre_450_);
lean_closure_set(v___f_460_, 8, v_post_451_);
lean_closure_set(v___f_460_, 9, v_x_452_);
lean_closure_set(v___f_460_, 10, v_x_453_);
lean_closure_set(v___f_460_, 11, v___y_454_);
lean_closure_set(v___f_460_, 12, v_body_455_);
lean_closure_set(v___f_460_, 13, v___y_456_);
v___x_461_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_447_, v_inst_448_, v_inst_449_, v_pre_450_, v_post_451_, v_x_452_, v_x_453_, v_body_455_, v___y_454_);
lean_dec(v___y_454_);
v___x_462_ = lean_apply_4(v_toBind_457_, lean_box(0), lean_box(0), v___x_461_, v___f_460_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11___boxed(lean_object* v_binderType_463_, lean_object* v_binderName_464_, lean_object* v_binderInfo_465_, lean_object* v_inst_466_, lean_object* v_inst_467_, lean_object* v_inst_468_, lean_object* v_pre_469_, lean_object* v_post_470_, lean_object* v_x_471_, lean_object* v_x_472_, lean_object* v___y_473_, lean_object* v_body_474_, lean_object* v___y_475_, lean_object* v_toBind_476_, lean_object* v_a_477_){
_start:
{
uint8_t v_binderInfo_4356__boxed_478_; lean_object* v_res_479_; 
v_binderInfo_4356__boxed_478_ = lean_unbox(v_binderInfo_465_);
v_res_479_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11(v_binderType_463_, v_binderName_464_, v_binderInfo_4356__boxed_478_, v_inst_466_, v_inst_467_, v_inst_468_, v_pre_469_, v_post_470_, v_x_471_, v_x_472_, v___y_473_, v_body_474_, v___y_475_, v_toBind_476_, v_a_477_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12(lean_object* v_type_480_, lean_object* v_a_481_, lean_object* v_declName_482_, lean_object* v_a_483_, uint8_t v_nondep_484_, lean_object* v_inst_485_, lean_object* v_inst_486_, lean_object* v_inst_487_, lean_object* v_pre_488_, lean_object* v_post_489_, lean_object* v_x_490_, lean_object* v_x_491_, lean_object* v___y_492_, lean_object* v_value_493_, lean_object* v_body_494_, lean_object* v___y_495_, lean_object* v_a_496_){
_start:
{
size_t v___x_497_; size_t v___x_498_; uint8_t v___x_499_; 
v___x_497_ = lean_ptr_addr(v_type_480_);
v___x_498_ = lean_ptr_addr(v_a_481_);
v___x_499_ = lean_usize_dec_eq(v___x_497_, v___x_498_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; lean_object* v___x_501_; 
lean_dec_ref(v___y_495_);
v___x_500_ = l_Lean_Expr_letE___override(v_declName_482_, v_a_481_, v_a_483_, v_a_496_, v_nondep_484_);
v___x_501_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_485_, v_inst_486_, v_inst_487_, v_pre_488_, v_post_489_, v_x_490_, v_x_491_, v___x_500_, v___y_492_);
return v___x_501_;
}
else
{
size_t v___x_502_; size_t v___x_503_; uint8_t v___x_504_; 
v___x_502_ = lean_ptr_addr(v_value_493_);
v___x_503_ = lean_ptr_addr(v_a_483_);
v___x_504_ = lean_usize_dec_eq(v___x_502_, v___x_503_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; lean_object* v___x_506_; 
lean_dec_ref(v___y_495_);
v___x_505_ = l_Lean_Expr_letE___override(v_declName_482_, v_a_481_, v_a_483_, v_a_496_, v_nondep_484_);
v___x_506_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_485_, v_inst_486_, v_inst_487_, v_pre_488_, v_post_489_, v_x_490_, v_x_491_, v___x_505_, v___y_492_);
return v___x_506_;
}
else
{
size_t v___x_507_; size_t v___x_508_; uint8_t v___x_509_; 
v___x_507_ = lean_ptr_addr(v_body_494_);
v___x_508_ = lean_ptr_addr(v_a_496_);
v___x_509_ = lean_usize_dec_eq(v___x_507_, v___x_508_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; lean_object* v___x_511_; 
lean_dec_ref(v___y_495_);
v___x_510_ = l_Lean_Expr_letE___override(v_declName_482_, v_a_481_, v_a_483_, v_a_496_, v_nondep_484_);
v___x_511_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_485_, v_inst_486_, v_inst_487_, v_pre_488_, v_post_489_, v_x_490_, v_x_491_, v___x_510_, v___y_492_);
return v___x_511_;
}
else
{
lean_object* v___x_512_; 
lean_dec_ref(v_a_496_);
lean_dec_ref(v_a_483_);
lean_dec(v_declName_482_);
lean_dec_ref(v_a_481_);
v___x_512_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_485_, v_inst_486_, v_inst_487_, v_pre_488_, v_post_489_, v_x_490_, v_x_491_, v___y_495_, v___y_492_);
return v___x_512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12___boxed(lean_object** _args){
lean_object* v_type_513_ = _args[0];
lean_object* v_a_514_ = _args[1];
lean_object* v_declName_515_ = _args[2];
lean_object* v_a_516_ = _args[3];
lean_object* v_nondep_517_ = _args[4];
lean_object* v_inst_518_ = _args[5];
lean_object* v_inst_519_ = _args[6];
lean_object* v_inst_520_ = _args[7];
lean_object* v_pre_521_ = _args[8];
lean_object* v_post_522_ = _args[9];
lean_object* v_x_523_ = _args[10];
lean_object* v_x_524_ = _args[11];
lean_object* v___y_525_ = _args[12];
lean_object* v_value_526_ = _args[13];
lean_object* v_body_527_ = _args[14];
lean_object* v___y_528_ = _args[15];
lean_object* v_a_529_ = _args[16];
_start:
{
uint8_t v_nondep_4597__boxed_530_; lean_object* v_res_531_; 
v_nondep_4597__boxed_530_ = lean_unbox(v_nondep_517_);
v_res_531_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12(v_type_513_, v_a_514_, v_declName_515_, v_a_516_, v_nondep_4597__boxed_530_, v_inst_518_, v_inst_519_, v_inst_520_, v_pre_521_, v_post_522_, v_x_523_, v_x_524_, v___y_525_, v_value_526_, v_body_527_, v___y_528_, v_a_529_);
lean_dec_ref(v_body_527_);
lean_dec_ref(v_value_526_);
lean_dec(v___y_525_);
lean_dec_ref(v_type_513_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13(lean_object* v_type_532_, lean_object* v_a_533_, lean_object* v_declName_534_, uint8_t v_nondep_535_, lean_object* v_inst_536_, lean_object* v_inst_537_, lean_object* v_inst_538_, lean_object* v_pre_539_, lean_object* v_post_540_, lean_object* v_x_541_, lean_object* v_x_542_, lean_object* v___y_543_, lean_object* v_value_544_, lean_object* v_body_545_, lean_object* v___y_546_, lean_object* v_toBind_547_, lean_object* v_a_548_){
_start:
{
lean_object* v___x_549_; lean_object* v___f_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_549_ = lean_box(v_nondep_535_);
lean_inc_ref(v_body_545_);
lean_inc(v___y_543_);
lean_inc(v_x_542_);
lean_inc(v_post_540_);
lean_inc(v_pre_539_);
lean_inc_ref(v_inst_538_);
lean_inc(v_inst_537_);
lean_inc_ref(v_inst_536_);
v___f_550_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12___boxed), 17, 16);
lean_closure_set(v___f_550_, 0, v_type_532_);
lean_closure_set(v___f_550_, 1, v_a_533_);
lean_closure_set(v___f_550_, 2, v_declName_534_);
lean_closure_set(v___f_550_, 3, v_a_548_);
lean_closure_set(v___f_550_, 4, v___x_549_);
lean_closure_set(v___f_550_, 5, v_inst_536_);
lean_closure_set(v___f_550_, 6, v_inst_537_);
lean_closure_set(v___f_550_, 7, v_inst_538_);
lean_closure_set(v___f_550_, 8, v_pre_539_);
lean_closure_set(v___f_550_, 9, v_post_540_);
lean_closure_set(v___f_550_, 10, v_x_541_);
lean_closure_set(v___f_550_, 11, v_x_542_);
lean_closure_set(v___f_550_, 12, v___y_543_);
lean_closure_set(v___f_550_, 13, v_value_544_);
lean_closure_set(v___f_550_, 14, v_body_545_);
lean_closure_set(v___f_550_, 15, v___y_546_);
v___x_551_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_536_, v_inst_537_, v_inst_538_, v_pre_539_, v_post_540_, v_x_541_, v_x_542_, v_body_545_, v___y_543_);
lean_dec(v___y_543_);
v___x_552_ = lean_apply_4(v_toBind_547_, lean_box(0), lean_box(0), v___x_551_, v___f_550_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13___boxed(lean_object** _args){
lean_object* v_type_553_ = _args[0];
lean_object* v_a_554_ = _args[1];
lean_object* v_declName_555_ = _args[2];
lean_object* v_nondep_556_ = _args[3];
lean_object* v_inst_557_ = _args[4];
lean_object* v_inst_558_ = _args[5];
lean_object* v_inst_559_ = _args[6];
lean_object* v_pre_560_ = _args[7];
lean_object* v_post_561_ = _args[8];
lean_object* v_x_562_ = _args[9];
lean_object* v_x_563_ = _args[10];
lean_object* v___y_564_ = _args[11];
lean_object* v_value_565_ = _args[12];
lean_object* v_body_566_ = _args[13];
lean_object* v___y_567_ = _args[14];
lean_object* v_toBind_568_ = _args[15];
lean_object* v_a_569_ = _args[16];
_start:
{
uint8_t v_nondep_4370__boxed_570_; lean_object* v_res_571_; 
v_nondep_4370__boxed_570_ = lean_unbox(v_nondep_556_);
v_res_571_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13(v_type_553_, v_a_554_, v_declName_555_, v_nondep_4370__boxed_570_, v_inst_557_, v_inst_558_, v_inst_559_, v_pre_560_, v_post_561_, v_x_562_, v_x_563_, v___y_564_, v_value_565_, v_body_566_, v___y_567_, v_toBind_568_, v_a_569_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14(lean_object* v_type_572_, lean_object* v_declName_573_, uint8_t v_nondep_574_, lean_object* v_inst_575_, lean_object* v_inst_576_, lean_object* v_inst_577_, lean_object* v_pre_578_, lean_object* v_post_579_, lean_object* v_x_580_, lean_object* v_x_581_, lean_object* v___y_582_, lean_object* v_value_583_, lean_object* v_body_584_, lean_object* v___y_585_, lean_object* v_toBind_586_, lean_object* v_a_587_){
_start:
{
lean_object* v___x_588_; lean_object* v___f_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_588_ = lean_box(v_nondep_574_);
lean_inc(v_toBind_586_);
lean_inc_ref(v_value_583_);
lean_inc(v___y_582_);
lean_inc(v_x_581_);
lean_inc(v_post_579_);
lean_inc(v_pre_578_);
lean_inc_ref(v_inst_577_);
lean_inc(v_inst_576_);
lean_inc_ref(v_inst_575_);
v___f_589_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13___boxed), 17, 16);
lean_closure_set(v___f_589_, 0, v_type_572_);
lean_closure_set(v___f_589_, 1, v_a_587_);
lean_closure_set(v___f_589_, 2, v_declName_573_);
lean_closure_set(v___f_589_, 3, v___x_588_);
lean_closure_set(v___f_589_, 4, v_inst_575_);
lean_closure_set(v___f_589_, 5, v_inst_576_);
lean_closure_set(v___f_589_, 6, v_inst_577_);
lean_closure_set(v___f_589_, 7, v_pre_578_);
lean_closure_set(v___f_589_, 8, v_post_579_);
lean_closure_set(v___f_589_, 9, v_x_580_);
lean_closure_set(v___f_589_, 10, v_x_581_);
lean_closure_set(v___f_589_, 11, v___y_582_);
lean_closure_set(v___f_589_, 12, v_value_583_);
lean_closure_set(v___f_589_, 13, v_body_584_);
lean_closure_set(v___f_589_, 14, v___y_585_);
lean_closure_set(v___f_589_, 15, v_toBind_586_);
v___x_590_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_575_, v_inst_576_, v_inst_577_, v_pre_578_, v_post_579_, v_x_580_, v_x_581_, v_value_583_, v___y_582_);
lean_dec(v___y_582_);
v___x_591_ = lean_apply_4(v_toBind_586_, lean_box(0), lean_box(0), v___x_590_, v___f_589_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14___boxed(lean_object* v_type_592_, lean_object* v_declName_593_, lean_object* v_nondep_594_, lean_object* v_inst_595_, lean_object* v_inst_596_, lean_object* v_inst_597_, lean_object* v_pre_598_, lean_object* v_post_599_, lean_object* v_x_600_, lean_object* v_x_601_, lean_object* v___y_602_, lean_object* v_value_603_, lean_object* v_body_604_, lean_object* v___y_605_, lean_object* v_toBind_606_, lean_object* v_a_607_){
_start:
{
uint8_t v_nondep_4385__boxed_608_; lean_object* v_res_609_; 
v_nondep_4385__boxed_608_ = lean_unbox(v_nondep_594_);
v_res_609_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14(v_type_592_, v_declName_593_, v_nondep_4385__boxed_608_, v_inst_595_, v_inst_596_, v_inst_597_, v_pre_598_, v_post_599_, v_x_600_, v_x_601_, v___y_602_, v_value_603_, v_body_604_, v___y_605_, v_toBind_606_, v_a_607_);
return v_res_609_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0(void){
_start:
{
lean_object* v___x_610_; lean_object* v_dummy_611_; 
v___x_610_ = lean_box(0);
v_dummy_611_ = l_Lean_Expr_sort___override(v___x_610_);
return v_dummy_611_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15(lean_object* v_expr_612_, lean_object* v_data_613_, lean_object* v_inst_614_, lean_object* v_inst_615_, lean_object* v_inst_616_, lean_object* v_pre_617_, lean_object* v_post_618_, lean_object* v_x_619_, lean_object* v_x_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v_a_623_){
_start:
{
size_t v___x_624_; size_t v___x_625_; uint8_t v___x_626_; 
v___x_624_ = lean_ptr_addr(v_expr_612_);
v___x_625_ = lean_ptr_addr(v_a_623_);
v___x_626_ = lean_usize_dec_eq(v___x_624_, v___x_625_);
if (v___x_626_ == 0)
{
lean_object* v___x_627_; lean_object* v___x_628_; 
lean_dec_ref(v___y_622_);
v___x_627_ = l_Lean_Expr_mdata___override(v_data_613_, v_a_623_);
v___x_628_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_614_, v_inst_615_, v_inst_616_, v_pre_617_, v_post_618_, v_x_619_, v_x_620_, v___x_627_, v___y_621_);
return v___x_628_;
}
else
{
lean_object* v___x_629_; 
lean_dec_ref(v_a_623_);
lean_dec(v_data_613_);
v___x_629_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_614_, v_inst_615_, v_inst_616_, v_pre_617_, v_post_618_, v_x_619_, v_x_620_, v___y_622_, v___y_621_);
return v___x_629_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15___boxed(lean_object* v_expr_630_, lean_object* v_data_631_, lean_object* v_inst_632_, lean_object* v_inst_633_, lean_object* v_inst_634_, lean_object* v_pre_635_, lean_object* v_post_636_, lean_object* v_x_637_, lean_object* v_x_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v_a_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15(v_expr_630_, v_data_631_, v_inst_632_, v_inst_633_, v_inst_634_, v_pre_635_, v_post_636_, v_x_637_, v_x_638_, v___y_639_, v___y_640_, v_a_641_);
lean_dec(v___y_639_);
lean_dec_ref(v_expr_630_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16(lean_object* v_struct_643_, lean_object* v_typeName_644_, lean_object* v_idx_645_, lean_object* v_inst_646_, lean_object* v_inst_647_, lean_object* v_inst_648_, lean_object* v_pre_649_, lean_object* v_post_650_, lean_object* v_x_651_, lean_object* v_x_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v_a_655_){
_start:
{
size_t v___x_656_; size_t v___x_657_; uint8_t v___x_658_; 
v___x_656_ = lean_ptr_addr(v_struct_643_);
v___x_657_ = lean_ptr_addr(v_a_655_);
v___x_658_ = lean_usize_dec_eq(v___x_656_, v___x_657_);
if (v___x_658_ == 0)
{
lean_object* v___x_659_; lean_object* v___x_660_; 
lean_dec_ref(v___y_654_);
v___x_659_ = l_Lean_Expr_proj___override(v_typeName_644_, v_idx_645_, v_a_655_);
v___x_660_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_646_, v_inst_647_, v_inst_648_, v_pre_649_, v_post_650_, v_x_651_, v_x_652_, v___x_659_, v___y_653_);
return v___x_660_;
}
else
{
lean_object* v___x_661_; 
lean_dec_ref(v_a_655_);
lean_dec(v_idx_645_);
lean_dec(v_typeName_644_);
v___x_661_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_646_, v_inst_647_, v_inst_648_, v_pre_649_, v_post_650_, v_x_651_, v_x_652_, v___y_654_, v___y_653_);
return v___x_661_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16___boxed(lean_object* v_struct_662_, lean_object* v_typeName_663_, lean_object* v_idx_664_, lean_object* v_inst_665_, lean_object* v_inst_666_, lean_object* v_inst_667_, lean_object* v_pre_668_, lean_object* v_post_669_, lean_object* v_x_670_, lean_object* v_x_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v_a_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16(v_struct_662_, v_typeName_663_, v_idx_664_, v_inst_665_, v_inst_666_, v_inst_667_, v_pre_668_, v_post_669_, v_x_670_, v_x_671_, v___y_672_, v___y_673_, v_a_674_);
lean_dec(v___y_672_);
lean_dec_ref(v_struct_662_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17(lean_object* v_toApplicative_676_, lean_object* v_inst_677_, lean_object* v_inst_678_, lean_object* v_inst_679_, lean_object* v_pre_680_, lean_object* v_post_681_, lean_object* v_x_682_, lean_object* v_x_683_, lean_object* v___y_684_, lean_object* v_toBind_685_, lean_object* v___f_686_, lean_object* v___f_687_, lean_object* v_e_688_, lean_object* v_a_689_){
_start:
{
lean_object* v___y_691_; 
switch(lean_obj_tag(v_a_689_))
{
case 0:
{
lean_object* v_e_736_; lean_object* v_toPure_737_; lean_object* v___x_738_; 
lean_dec_ref(v_e_688_);
lean_dec(v___f_687_);
lean_dec(v___f_686_);
lean_dec(v_toBind_685_);
lean_dec(v___y_684_);
lean_dec(v_x_683_);
lean_dec(v_post_681_);
lean_dec(v_pre_680_);
lean_dec_ref(v_inst_679_);
lean_dec(v_inst_678_);
lean_dec_ref(v_inst_677_);
v_e_736_ = lean_ctor_get(v_a_689_, 0);
lean_inc_ref(v_e_736_);
lean_dec_ref_known(v_a_689_, 1);
v_toPure_737_ = lean_ctor_get(v_toApplicative_676_, 1);
lean_inc(v_toPure_737_);
lean_dec_ref(v_toApplicative_676_);
v___x_738_ = lean_apply_2(v_toPure_737_, lean_box(0), v_e_736_);
return v___x_738_;
}
case 1:
{
lean_object* v_e_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
lean_dec_ref(v_e_688_);
lean_dec(v___f_687_);
lean_dec_ref(v_toApplicative_676_);
v_e_739_ = lean_ctor_get(v_a_689_, 0);
lean_inc_ref(v_e_739_);
lean_dec_ref_known(v_a_689_, 1);
v___x_740_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_677_, v_inst_678_, v_inst_679_, v_pre_680_, v_post_681_, v_x_682_, v_x_683_, v_e_739_, v___y_684_);
lean_dec(v___y_684_);
v___x_741_ = lean_apply_4(v_toBind_685_, lean_box(0), lean_box(0), v___x_740_, v___f_686_);
return v___x_741_;
}
default: 
{
lean_object* v_e_x3f_742_; 
lean_dec(v___f_686_);
lean_dec_ref(v_toApplicative_676_);
v_e_x3f_742_ = lean_ctor_get(v_a_689_, 0);
lean_inc(v_e_x3f_742_);
lean_dec_ref_known(v_a_689_, 1);
if (lean_obj_tag(v_e_x3f_742_) == 0)
{
v___y_691_ = v_e_688_;
goto v___jp_690_;
}
else
{
lean_object* v_val_743_; 
lean_dec_ref(v_e_688_);
v_val_743_ = lean_ctor_get(v_e_x3f_742_, 0);
lean_inc(v_val_743_);
lean_dec_ref_known(v_e_x3f_742_, 1);
v___y_691_ = v_val_743_;
goto v___jp_690_;
}
}
}
v___jp_690_:
{
switch(lean_obj_tag(v___y_691_))
{
case 7:
{
lean_object* v_binderName_692_; lean_object* v_binderType_693_; lean_object* v_body_694_; uint8_t v_binderInfo_695_; lean_object* v___x_696_; lean_object* v___f_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
lean_dec(v___f_687_);
v_binderName_692_ = lean_ctor_get(v___y_691_, 0);
lean_inc(v_binderName_692_);
v_binderType_693_ = lean_ctor_get(v___y_691_, 1);
lean_inc_ref_n(v_binderType_693_, 2);
v_body_694_ = lean_ctor_get(v___y_691_, 2);
lean_inc_ref(v_body_694_);
v_binderInfo_695_ = lean_ctor_get_uint8(v___y_691_, sizeof(void*)*3 + 8);
v___x_696_ = lean_box(v_binderInfo_695_);
lean_inc(v_toBind_685_);
lean_inc(v___y_684_);
lean_inc(v_x_683_);
lean_inc(v_post_681_);
lean_inc(v_pre_680_);
lean_inc_ref(v_inst_679_);
lean_inc(v_inst_678_);
lean_inc_ref(v_inst_677_);
v___f_697_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9___boxed), 15, 14);
lean_closure_set(v___f_697_, 0, v_binderType_693_);
lean_closure_set(v___f_697_, 1, v_binderName_692_);
lean_closure_set(v___f_697_, 2, v___x_696_);
lean_closure_set(v___f_697_, 3, v_inst_677_);
lean_closure_set(v___f_697_, 4, v_inst_678_);
lean_closure_set(v___f_697_, 5, v_inst_679_);
lean_closure_set(v___f_697_, 6, v_pre_680_);
lean_closure_set(v___f_697_, 7, v_post_681_);
lean_closure_set(v___f_697_, 8, v_x_682_);
lean_closure_set(v___f_697_, 9, v_x_683_);
lean_closure_set(v___f_697_, 10, v___y_684_);
lean_closure_set(v___f_697_, 11, v_body_694_);
lean_closure_set(v___f_697_, 12, v___y_691_);
lean_closure_set(v___f_697_, 13, v_toBind_685_);
v___x_698_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_677_, v_inst_678_, v_inst_679_, v_pre_680_, v_post_681_, v_x_682_, v_x_683_, v_binderType_693_, v___y_684_);
lean_dec(v___y_684_);
v___x_699_ = lean_apply_4(v_toBind_685_, lean_box(0), lean_box(0), v___x_698_, v___f_697_);
return v___x_699_;
}
case 6:
{
lean_object* v_binderName_700_; lean_object* v_binderType_701_; lean_object* v_body_702_; uint8_t v_binderInfo_703_; lean_object* v___x_704_; lean_object* v___f_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
lean_dec(v___f_687_);
v_binderName_700_ = lean_ctor_get(v___y_691_, 0);
lean_inc(v_binderName_700_);
v_binderType_701_ = lean_ctor_get(v___y_691_, 1);
lean_inc_ref_n(v_binderType_701_, 2);
v_body_702_ = lean_ctor_get(v___y_691_, 2);
lean_inc_ref(v_body_702_);
v_binderInfo_703_ = lean_ctor_get_uint8(v___y_691_, sizeof(void*)*3 + 8);
v___x_704_ = lean_box(v_binderInfo_703_);
lean_inc(v_toBind_685_);
lean_inc(v___y_684_);
lean_inc(v_x_683_);
lean_inc(v_post_681_);
lean_inc(v_pre_680_);
lean_inc_ref(v_inst_679_);
lean_inc(v_inst_678_);
lean_inc_ref(v_inst_677_);
v___f_705_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11___boxed), 15, 14);
lean_closure_set(v___f_705_, 0, v_binderType_701_);
lean_closure_set(v___f_705_, 1, v_binderName_700_);
lean_closure_set(v___f_705_, 2, v___x_704_);
lean_closure_set(v___f_705_, 3, v_inst_677_);
lean_closure_set(v___f_705_, 4, v_inst_678_);
lean_closure_set(v___f_705_, 5, v_inst_679_);
lean_closure_set(v___f_705_, 6, v_pre_680_);
lean_closure_set(v___f_705_, 7, v_post_681_);
lean_closure_set(v___f_705_, 8, v_x_682_);
lean_closure_set(v___f_705_, 9, v_x_683_);
lean_closure_set(v___f_705_, 10, v___y_684_);
lean_closure_set(v___f_705_, 11, v_body_702_);
lean_closure_set(v___f_705_, 12, v___y_691_);
lean_closure_set(v___f_705_, 13, v_toBind_685_);
v___x_706_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_677_, v_inst_678_, v_inst_679_, v_pre_680_, v_post_681_, v_x_682_, v_x_683_, v_binderType_701_, v___y_684_);
lean_dec(v___y_684_);
v___x_707_ = lean_apply_4(v_toBind_685_, lean_box(0), lean_box(0), v___x_706_, v___f_705_);
return v___x_707_;
}
case 8:
{
lean_object* v_declName_708_; lean_object* v_type_709_; lean_object* v_value_710_; lean_object* v_body_711_; uint8_t v_nondep_712_; lean_object* v___x_713_; lean_object* v___f_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
lean_dec(v___f_687_);
v_declName_708_ = lean_ctor_get(v___y_691_, 0);
lean_inc(v_declName_708_);
v_type_709_ = lean_ctor_get(v___y_691_, 1);
lean_inc_ref_n(v_type_709_, 2);
v_value_710_ = lean_ctor_get(v___y_691_, 2);
lean_inc_ref(v_value_710_);
v_body_711_ = lean_ctor_get(v___y_691_, 3);
lean_inc_ref(v_body_711_);
v_nondep_712_ = lean_ctor_get_uint8(v___y_691_, sizeof(void*)*4 + 8);
v___x_713_ = lean_box(v_nondep_712_);
lean_inc(v_toBind_685_);
lean_inc(v___y_684_);
lean_inc(v_x_683_);
lean_inc(v_post_681_);
lean_inc(v_pre_680_);
lean_inc_ref(v_inst_679_);
lean_inc(v_inst_678_);
lean_inc_ref(v_inst_677_);
v___f_714_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14___boxed), 16, 15);
lean_closure_set(v___f_714_, 0, v_type_709_);
lean_closure_set(v___f_714_, 1, v_declName_708_);
lean_closure_set(v___f_714_, 2, v___x_713_);
lean_closure_set(v___f_714_, 3, v_inst_677_);
lean_closure_set(v___f_714_, 4, v_inst_678_);
lean_closure_set(v___f_714_, 5, v_inst_679_);
lean_closure_set(v___f_714_, 6, v_pre_680_);
lean_closure_set(v___f_714_, 7, v_post_681_);
lean_closure_set(v___f_714_, 8, v_x_682_);
lean_closure_set(v___f_714_, 9, v_x_683_);
lean_closure_set(v___f_714_, 10, v___y_684_);
lean_closure_set(v___f_714_, 11, v_value_710_);
lean_closure_set(v___f_714_, 12, v_body_711_);
lean_closure_set(v___f_714_, 13, v___y_691_);
lean_closure_set(v___f_714_, 14, v_toBind_685_);
v___x_715_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_677_, v_inst_678_, v_inst_679_, v_pre_680_, v_post_681_, v_x_682_, v_x_683_, v_type_709_, v___y_684_);
lean_dec(v___y_684_);
v___x_716_ = lean_apply_4(v_toBind_685_, lean_box(0), lean_box(0), v___x_715_, v___f_714_);
return v___x_716_;
}
case 5:
{
lean_object* v_dummy_717_; lean_object* v_nargs_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_4220__overap_722_; lean_object* v___x_723_; 
lean_dec(v_toBind_685_);
lean_dec(v_x_683_);
lean_dec(v_post_681_);
lean_dec(v_pre_680_);
lean_dec_ref(v_inst_679_);
lean_dec(v_inst_678_);
lean_dec_ref(v_inst_677_);
v_dummy_717_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_718_ = l_Lean_Expr_getAppNumArgs(v___y_691_);
lean_inc(v_nargs_718_);
v___x_719_ = lean_mk_array(v_nargs_718_, v_dummy_717_);
v___x_720_ = lean_unsigned_to_nat(1u);
v___x_721_ = lean_nat_sub(v_nargs_718_, v___x_720_);
lean_dec(v_nargs_718_);
v___x_4220__overap_722_ = l_Lean_Expr_withAppAux___redArg(v___f_687_, v___y_691_, v___x_719_, v___x_721_);
v___x_723_ = lean_apply_1(v___x_4220__overap_722_, v___y_684_);
return v___x_723_;
}
case 10:
{
lean_object* v_data_724_; lean_object* v_expr_725_; lean_object* v___f_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
lean_dec(v___f_687_);
v_data_724_ = lean_ctor_get(v___y_691_, 0);
lean_inc(v_data_724_);
v_expr_725_ = lean_ctor_get(v___y_691_, 1);
lean_inc_ref_n(v_expr_725_, 2);
lean_inc(v___y_684_);
lean_inc(v_x_683_);
lean_inc(v_post_681_);
lean_inc(v_pre_680_);
lean_inc_ref(v_inst_679_);
lean_inc(v_inst_678_);
lean_inc_ref(v_inst_677_);
v___f_726_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15___boxed), 12, 11);
lean_closure_set(v___f_726_, 0, v_expr_725_);
lean_closure_set(v___f_726_, 1, v_data_724_);
lean_closure_set(v___f_726_, 2, v_inst_677_);
lean_closure_set(v___f_726_, 3, v_inst_678_);
lean_closure_set(v___f_726_, 4, v_inst_679_);
lean_closure_set(v___f_726_, 5, v_pre_680_);
lean_closure_set(v___f_726_, 6, v_post_681_);
lean_closure_set(v___f_726_, 7, v_x_682_);
lean_closure_set(v___f_726_, 8, v_x_683_);
lean_closure_set(v___f_726_, 9, v___y_684_);
lean_closure_set(v___f_726_, 10, v___y_691_);
v___x_727_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_677_, v_inst_678_, v_inst_679_, v_pre_680_, v_post_681_, v_x_682_, v_x_683_, v_expr_725_, v___y_684_);
lean_dec(v___y_684_);
v___x_728_ = lean_apply_4(v_toBind_685_, lean_box(0), lean_box(0), v___x_727_, v___f_726_);
return v___x_728_;
}
case 11:
{
lean_object* v_typeName_729_; lean_object* v_idx_730_; lean_object* v_struct_731_; lean_object* v___f_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
lean_dec(v___f_687_);
v_typeName_729_ = lean_ctor_get(v___y_691_, 0);
lean_inc(v_typeName_729_);
v_idx_730_ = lean_ctor_get(v___y_691_, 1);
lean_inc(v_idx_730_);
v_struct_731_ = lean_ctor_get(v___y_691_, 2);
lean_inc_ref_n(v_struct_731_, 2);
lean_inc(v___y_684_);
lean_inc(v_x_683_);
lean_inc(v_post_681_);
lean_inc(v_pre_680_);
lean_inc_ref(v_inst_679_);
lean_inc(v_inst_678_);
lean_inc_ref(v_inst_677_);
v___f_732_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16___boxed), 13, 12);
lean_closure_set(v___f_732_, 0, v_struct_731_);
lean_closure_set(v___f_732_, 1, v_typeName_729_);
lean_closure_set(v___f_732_, 2, v_idx_730_);
lean_closure_set(v___f_732_, 3, v_inst_677_);
lean_closure_set(v___f_732_, 4, v_inst_678_);
lean_closure_set(v___f_732_, 5, v_inst_679_);
lean_closure_set(v___f_732_, 6, v_pre_680_);
lean_closure_set(v___f_732_, 7, v_post_681_);
lean_closure_set(v___f_732_, 8, v_x_682_);
lean_closure_set(v___f_732_, 9, v_x_683_);
lean_closure_set(v___f_732_, 10, v___y_684_);
lean_closure_set(v___f_732_, 11, v___y_691_);
v___x_733_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_677_, v_inst_678_, v_inst_679_, v_pre_680_, v_post_681_, v_x_682_, v_x_683_, v_struct_731_, v___y_684_);
lean_dec(v___y_684_);
v___x_734_ = lean_apply_4(v_toBind_685_, lean_box(0), lean_box(0), v___x_733_, v___f_732_);
return v___x_734_;
}
default: 
{
lean_object* v___x_735_; 
lean_dec(v___f_687_);
lean_dec(v_toBind_685_);
v___x_735_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_677_, v_inst_678_, v_inst_679_, v_pre_680_, v_post_681_, v_x_682_, v_x_683_, v___y_691_, v___y_684_);
lean_dec(v___y_684_);
return v___x_735_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19(lean_object* v_inst_744_, lean_object* v_inst_745_, lean_object* v_inst_746_, lean_object* v_pre_747_, lean_object* v_post_748_, lean_object* v_x_749_, lean_object* v_x_750_, lean_object* v_toApplicative_751_, lean_object* v_toBind_752_, lean_object* v___f_753_, lean_object* v_e_754_, lean_object* v___x_755_, lean_object* v___y_756_){
_start:
{
lean_object* v___f_757_; lean_object* v___f_758_; lean_object* v___f_759_; lean_object* v___x_760_; 
lean_inc(v___y_756_);
lean_inc(v_x_750_);
lean_inc(v_post_748_);
lean_inc_n(v_pre_747_, 2);
lean_inc_ref(v_inst_746_);
lean_inc(v_inst_745_);
lean_inc_ref(v_inst_744_);
v___f_757_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7___boxed), 9, 8);
lean_closure_set(v___f_757_, 0, v_inst_744_);
lean_closure_set(v___f_757_, 1, v_inst_745_);
lean_closure_set(v___f_757_, 2, v_inst_746_);
lean_closure_set(v___f_757_, 3, v_pre_747_);
lean_closure_set(v___f_757_, 4, v_post_748_);
lean_closure_set(v___f_757_, 5, v_x_749_);
lean_closure_set(v___f_757_, 6, v_x_750_);
lean_closure_set(v___f_757_, 7, v___y_756_);
lean_inc_ref(v_e_754_);
lean_inc_n(v_toBind_752_, 2);
v___f_758_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17), 14, 13);
lean_closure_set(v___f_758_, 0, v_toApplicative_751_);
lean_closure_set(v___f_758_, 1, v_inst_744_);
lean_closure_set(v___f_758_, 2, v_inst_745_);
lean_closure_set(v___f_758_, 3, v_inst_746_);
lean_closure_set(v___f_758_, 4, v_pre_747_);
lean_closure_set(v___f_758_, 5, v_post_748_);
lean_closure_set(v___f_758_, 6, v_x_749_);
lean_closure_set(v___f_758_, 7, v_x_750_);
lean_closure_set(v___f_758_, 8, v___y_756_);
lean_closure_set(v___f_758_, 9, v_toBind_752_);
lean_closure_set(v___f_758_, 10, v___f_757_);
lean_closure_set(v___f_758_, 11, v___f_753_);
lean_closure_set(v___f_758_, 12, v_e_754_);
v___f_759_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18), 5, 4);
lean_closure_set(v___f_759_, 0, v_pre_747_);
lean_closure_set(v___f_759_, 1, v_e_754_);
lean_closure_set(v___f_759_, 2, v_toBind_752_);
lean_closure_set(v___f_759_, 3, v___f_758_);
v___x_760_ = lean_apply_4(v_toBind_752_, lean_box(0), lean_box(0), v___x_755_, v___f_759_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20(lean_object* v_inst_761_, lean_object* v_inst_762_, lean_object* v_inst_763_, lean_object* v_pre_764_, lean_object* v_post_765_, lean_object* v_x_766_, lean_object* v_x_767_, lean_object* v_toApplicative_768_, lean_object* v_toBind_769_, lean_object* v___f_770_, lean_object* v_e_771_, lean_object* v___x_772_, lean_object* v___x_773_, lean_object* v___y_774_, lean_object* v___f_775_, lean_object* v_a_776_){
_start:
{
if (lean_obj_tag(v_a_776_) == 0)
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___f_779_; lean_object* v___x_4263__overap_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_777_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20___closed__1));
lean_inc(v_inst_761_);
v___x_778_ = lean_apply_2(v_inst_761_, lean_box(0), v___x_777_);
lean_inc(v_toBind_769_);
v___f_779_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19), 13, 12);
lean_closure_set(v___f_779_, 0, v_inst_762_);
lean_closure_set(v___f_779_, 1, v_inst_761_);
lean_closure_set(v___f_779_, 2, v_inst_763_);
lean_closure_set(v___f_779_, 3, v_pre_764_);
lean_closure_set(v___f_779_, 4, v_post_765_);
lean_closure_set(v___f_779_, 5, v_x_766_);
lean_closure_set(v___f_779_, 6, v_x_767_);
lean_closure_set(v___f_779_, 7, v_toApplicative_768_);
lean_closure_set(v___f_779_, 8, v_toBind_769_);
lean_closure_set(v___f_779_, 9, v___f_770_);
lean_closure_set(v___f_779_, 10, v_e_771_);
lean_closure_set(v___f_779_, 11, v___x_778_);
v___x_4263__overap_780_ = l_Lean_Core_withIncRecDepth___redArg(v___x_772_, v___x_773_, v___f_779_);
lean_inc(v___y_774_);
v___x_781_ = lean_apply_1(v___x_4263__overap_780_, v___y_774_);
v___x_782_ = lean_apply_4(v_toBind_769_, lean_box(0), lean_box(0), v___x_781_, v___f_775_);
return v___x_782_;
}
else
{
lean_object* v_val_783_; lean_object* v_toPure_784_; lean_object* v___x_785_; 
lean_dec(v___f_775_);
lean_dec_ref(v___x_773_);
lean_dec_ref(v___x_772_);
lean_dec_ref(v_e_771_);
lean_dec(v___f_770_);
lean_dec(v_toBind_769_);
lean_dec(v_x_767_);
lean_dec(v_post_765_);
lean_dec(v_pre_764_);
lean_dec_ref(v_inst_763_);
lean_dec_ref(v_inst_762_);
lean_dec(v_inst_761_);
v_val_783_ = lean_ctor_get(v_a_776_, 0);
lean_inc(v_val_783_);
lean_dec_ref_known(v_a_776_, 1);
v_toPure_784_ = lean_ctor_get(v_toApplicative_768_, 1);
lean_inc(v_toPure_784_);
lean_dec_ref(v_toApplicative_768_);
v___x_785_ = lean_apply_2(v_toPure_784_, lean_box(0), v_val_783_);
return v___x_785_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20___boxed(lean_object* v_inst_786_, lean_object* v_inst_787_, lean_object* v_inst_788_, lean_object* v_pre_789_, lean_object* v_post_790_, lean_object* v_x_791_, lean_object* v_x_792_, lean_object* v_toApplicative_793_, lean_object* v_toBind_794_, lean_object* v___f_795_, lean_object* v_e_796_, lean_object* v___x_797_, lean_object* v___x_798_, lean_object* v___y_799_, lean_object* v___f_800_, lean_object* v_a_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20(v_inst_786_, v_inst_787_, v_inst_788_, v_pre_789_, v_post_790_, v_x_791_, v_x_792_, v_toApplicative_793_, v_toBind_794_, v___f_795_, v_e_796_, v___x_797_, v___x_798_, v___y_799_, v___f_800_, v_a_801_);
lean_dec(v___y_799_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(lean_object* v_inst_803_, lean_object* v_inst_804_, lean_object* v_inst_805_, lean_object* v_pre_806_, lean_object* v_post_807_, lean_object* v_x_808_, lean_object* v_x_809_, lean_object* v_e_810_, lean_object* v___y_811_){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___f_814_; lean_object* v___f_815_; lean_object* v___x_816_; lean_object* v_toApplicative_817_; lean_object* v_toBind_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___f_821_; lean_object* v___f_822_; lean_object* v___f_823_; lean_object* v___f_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
lean_inc_ref_n(v_inst_803_, 2);
v___x_812_ = l_Lean_MonadCacheT_instMonad___redArg(v_inst_803_);
v___x_813_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0);
lean_inc_ref_n(v_inst_805_, 3);
v___f_814_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_814_, 0, v___x_813_);
lean_closure_set(v___f_814_, 1, v_inst_805_);
v___f_815_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_815_, 0, v___x_813_);
lean_closure_set(v___f_815_, 1, v_inst_805_);
v___x_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_816_, 0, v___f_814_);
lean_ctor_set(v___x_816_, 1, v___f_815_);
v_toApplicative_817_ = lean_ctor_get(v_inst_803_, 0);
lean_inc_ref_n(v_toApplicative_817_, 3);
v_toBind_818_ = lean_ctor_get(v_inst_803_, 1);
lean_inc_n(v_toBind_818_, 5);
v___x_819_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
v___x_820_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__2));
lean_inc_ref_n(v_e_810_, 2);
v___f_821_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_821_, 0, v_toApplicative_817_);
lean_closure_set(v___f_821_, 1, v___x_819_);
lean_closure_set(v___f_821_, 2, v___x_820_);
lean_closure_set(v___f_821_, 3, v_e_810_);
lean_inc_n(v_x_809_, 3);
lean_inc_n(v___y_811_, 3);
v___f_822_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_822_, 0, v_toApplicative_817_);
lean_closure_set(v___f_822_, 1, v___x_819_);
lean_closure_set(v___f_822_, 2, v___x_820_);
lean_closure_set(v___f_822_, 3, v_e_810_);
lean_closure_set(v___f_822_, 4, v___y_811_);
lean_closure_set(v___f_822_, 5, v_x_809_);
lean_closure_set(v___f_822_, 6, v_toBind_818_);
lean_inc_ref(v___x_812_);
lean_inc(v_post_807_);
lean_inc(v_pre_806_);
lean_inc(v_inst_804_);
v___f_823_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6___boxed), 12, 9);
lean_closure_set(v___f_823_, 0, v_inst_803_);
lean_closure_set(v___f_823_, 1, v_inst_804_);
lean_closure_set(v___f_823_, 2, v_inst_805_);
lean_closure_set(v___f_823_, 3, v_pre_806_);
lean_closure_set(v___f_823_, 4, v_post_807_);
lean_closure_set(v___f_823_, 5, v_x_808_);
lean_closure_set(v___f_823_, 6, v_x_809_);
lean_closure_set(v___f_823_, 7, v___x_812_);
lean_closure_set(v___f_823_, 8, v_toBind_818_);
v___f_824_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20___boxed), 16, 15);
lean_closure_set(v___f_824_, 0, v_inst_804_);
lean_closure_set(v___f_824_, 1, v_inst_803_);
lean_closure_set(v___f_824_, 2, v_inst_805_);
lean_closure_set(v___f_824_, 3, v_pre_806_);
lean_closure_set(v___f_824_, 4, v_post_807_);
lean_closure_set(v___f_824_, 5, v_x_808_);
lean_closure_set(v___f_824_, 6, v_x_809_);
lean_closure_set(v___f_824_, 7, v_toApplicative_817_);
lean_closure_set(v___f_824_, 8, v_toBind_818_);
lean_closure_set(v___f_824_, 9, v___f_823_);
lean_closure_set(v___f_824_, 10, v_e_810_);
lean_closure_set(v___f_824_, 11, v___x_812_);
lean_closure_set(v___f_824_, 12, v___x_816_);
lean_closure_set(v___f_824_, 13, v___y_811_);
lean_closure_set(v___f_824_, 14, v___f_822_);
v___x_825_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_825_, 0, lean_box(0));
lean_closure_set(v___x_825_, 1, lean_box(0));
lean_closure_set(v___x_825_, 2, v___y_811_);
v___x_826_ = lean_apply_2(v_x_809_, lean_box(0), v___x_825_);
v___x_827_ = lean_apply_4(v_toBind_818_, lean_box(0), lean_box(0), v___x_826_, v___f_821_);
v___x_828_ = lean_apply_4(v_toBind_818_, lean_box(0), lean_box(0), v___x_827_, v___f_824_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0(lean_object* v_toApplicative_829_, lean_object* v_inst_830_, lean_object* v_inst_831_, lean_object* v_inst_832_, lean_object* v_pre_833_, lean_object* v_post_834_, lean_object* v_x_835_, lean_object* v_x_836_, lean_object* v___y_837_, lean_object* v_e_838_, lean_object* v_a_839_){
_start:
{
lean_object* v___y_841_; 
switch(lean_obj_tag(v_a_839_))
{
case 0:
{
lean_object* v_e_844_; lean_object* v_toPure_845_; lean_object* v___x_846_; 
lean_dec_ref(v_e_838_);
lean_dec(v_x_836_);
lean_dec(v_post_834_);
lean_dec(v_pre_833_);
lean_dec_ref(v_inst_832_);
lean_dec(v_inst_831_);
lean_dec_ref(v_inst_830_);
v_e_844_ = lean_ctor_get(v_a_839_, 0);
lean_inc_ref(v_e_844_);
lean_dec_ref_known(v_a_839_, 1);
v_toPure_845_ = lean_ctor_get(v_toApplicative_829_, 1);
lean_inc(v_toPure_845_);
lean_dec_ref(v_toApplicative_829_);
v___x_846_ = lean_apply_2(v_toPure_845_, lean_box(0), v_e_844_);
return v___x_846_;
}
case 1:
{
lean_object* v_e_847_; lean_object* v___x_848_; 
lean_dec_ref(v_e_838_);
lean_dec_ref(v_toApplicative_829_);
v_e_847_ = lean_ctor_get(v_a_839_, 0);
lean_inc_ref(v_e_847_);
lean_dec_ref_known(v_a_839_, 1);
v___x_848_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_830_, v_inst_831_, v_inst_832_, v_pre_833_, v_post_834_, v_x_835_, v_x_836_, v_e_847_, v___y_837_);
return v___x_848_;
}
default: 
{
lean_object* v_e_x3f_849_; 
lean_dec(v_x_836_);
lean_dec(v_post_834_);
lean_dec(v_pre_833_);
lean_dec_ref(v_inst_832_);
lean_dec(v_inst_831_);
lean_dec_ref(v_inst_830_);
v_e_x3f_849_ = lean_ctor_get(v_a_839_, 0);
lean_inc(v_e_x3f_849_);
lean_dec_ref_known(v_a_839_, 1);
if (lean_obj_tag(v_e_x3f_849_) == 0)
{
v___y_841_ = v_e_838_;
goto v___jp_840_;
}
else
{
lean_object* v_val_850_; 
lean_dec_ref(v_e_838_);
v_val_850_ = lean_ctor_get(v_e_x3f_849_, 0);
lean_inc(v_val_850_);
lean_dec_ref_known(v_e_x3f_849_, 1);
v___y_841_ = v_val_850_;
goto v___jp_840_;
}
}
}
v___jp_840_:
{
lean_object* v_toPure_842_; lean_object* v___x_843_; 
v_toPure_842_ = lean_ctor_get(v_toApplicative_829_, 1);
lean_inc(v_toPure_842_);
lean_dec_ref(v_toApplicative_829_);
v___x_843_ = lean_apply_2(v_toPure_842_, lean_box(0), v___y_841_);
return v___x_843_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0___boxed(lean_object* v_toApplicative_851_, lean_object* v_inst_852_, lean_object* v_inst_853_, lean_object* v_inst_854_, lean_object* v_pre_855_, lean_object* v_post_856_, lean_object* v_x_857_, lean_object* v_x_858_, lean_object* v___y_859_, lean_object* v_e_860_, lean_object* v_a_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0(v_toApplicative_851_, v_inst_852_, v_inst_853_, v_inst_854_, v_pre_855_, v_post_856_, v_x_857_, v_x_858_, v___y_859_, v_e_860_, v_a_861_);
lean_dec(v___y_859_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(lean_object* v_inst_863_, lean_object* v_inst_864_, lean_object* v_inst_865_, lean_object* v_pre_866_, lean_object* v_post_867_, lean_object* v_x_868_, lean_object* v_x_869_, lean_object* v_e_870_, lean_object* v___y_871_){
_start:
{
lean_object* v_toApplicative_872_; lean_object* v_toBind_873_; lean_object* v___f_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v_toApplicative_872_ = lean_ctor_get(v_inst_863_, 0);
lean_inc_ref(v_toApplicative_872_);
v_toBind_873_ = lean_ctor_get(v_inst_863_, 1);
lean_inc(v_toBind_873_);
lean_inc_ref(v_e_870_);
lean_inc(v___y_871_);
lean_inc(v_post_867_);
v___f_874_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0___boxed), 11, 10);
lean_closure_set(v___f_874_, 0, v_toApplicative_872_);
lean_closure_set(v___f_874_, 1, v_inst_863_);
lean_closure_set(v___f_874_, 2, v_inst_864_);
lean_closure_set(v___f_874_, 3, v_inst_865_);
lean_closure_set(v___f_874_, 4, v_pre_866_);
lean_closure_set(v___f_874_, 5, v_post_867_);
lean_closure_set(v___f_874_, 6, v_x_868_);
lean_closure_set(v___f_874_, 7, v_x_869_);
lean_closure_set(v___f_874_, 8, v___y_871_);
lean_closure_set(v___f_874_, 9, v_e_870_);
v___x_875_ = lean_apply_1(v_post_867_, v_e_870_);
v___x_876_ = lean_apply_4(v_toBind_873_, lean_box(0), lean_box(0), v___x_875_, v___f_874_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7(lean_object* v_inst_877_, lean_object* v_inst_878_, lean_object* v_inst_879_, lean_object* v_pre_880_, lean_object* v_post_881_, lean_object* v_x_882_, lean_object* v_x_883_, lean_object* v___y_884_, lean_object* v_a_885_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_877_, v_inst_878_, v_inst_879_, v_pre_880_, v_post_881_, v_x_882_, v_x_883_, v_a_885_, v___y_884_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___boxed(lean_object* v_inst_887_, lean_object* v_inst_888_, lean_object* v_inst_889_, lean_object* v_pre_890_, lean_object* v_post_891_, lean_object* v_x_892_, lean_object* v_x_893_, lean_object* v_e_894_, lean_object* v___y_895_){
_start:
{
lean_object* v_res_896_; 
v_res_896_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_887_, v_inst_888_, v_inst_889_, v_pre_890_, v_post_891_, v_x_892_, v_x_893_, v_e_894_, v___y_895_);
lean_dec(v___y_895_);
return v_res_896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit(lean_object* v_m_897_, lean_object* v_inst_898_, lean_object* v_inst_899_, lean_object* v_inst_900_, lean_object* v_pre_901_, lean_object* v_post_902_, lean_object* v_x_903_, lean_object* v_x_904_, lean_object* v_e_905_, lean_object* v___y_906_){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_898_, v_inst_899_, v_inst_900_, v_pre_901_, v_post_902_, v_x_903_, v_x_904_, v_e_905_, v___y_906_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___boxed(lean_object* v_m_908_, lean_object* v_inst_909_, lean_object* v_inst_910_, lean_object* v_inst_911_, lean_object* v_pre_912_, lean_object* v_post_913_, lean_object* v_x_914_, lean_object* v_x_915_, lean_object* v_e_916_, lean_object* v___y_917_){
_start:
{
lean_object* v_res_918_; 
v_res_918_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit(v_m_908_, v_inst_909_, v_inst_910_, v_inst_911_, v_pre_912_, v_post_913_, v_x_914_, v_x_915_, v_e_916_, v___y_917_);
lean_dec(v___y_917_);
return v_res_918_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost(lean_object* v_m_919_, lean_object* v_inst_920_, lean_object* v_inst_921_, lean_object* v_inst_922_, lean_object* v_pre_923_, lean_object* v_post_924_, lean_object* v_x_925_, lean_object* v_x_926_, lean_object* v_e_927_, lean_object* v___y_928_){
_start:
{
lean_object* v___x_929_; 
v___x_929_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_920_, v_inst_921_, v_inst_922_, v_pre_923_, v_post_924_, v_x_925_, v_x_926_, v_e_927_, v___y_928_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___boxed(lean_object* v_m_930_, lean_object* v_inst_931_, lean_object* v_inst_932_, lean_object* v_inst_933_, lean_object* v_pre_934_, lean_object* v_post_935_, lean_object* v_x_936_, lean_object* v_x_937_, lean_object* v_e_938_, lean_object* v___y_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost(v_m_930_, v_inst_931_, v_inst_932_, v_inst_933_, v_pre_934_, v_post_935_, v_x_936_, v_x_937_, v_e_938_, v___y_939_);
lean_dec(v___y_939_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0(lean_object* v_x_941_){
_start:
{
lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_943_ = lean_apply_1(v_x_941_, lean_box(0));
v___x_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_944_, 0, v___x_943_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0___boxed(lean_object* v_x_945_, lean_object* v___y_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_Lean_Core_transform___redArg___lam__0(v_x_945_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__1(lean_object* v_inst_948_, lean_object* v_00_u03b1_949_, lean_object* v_x_950_){
_start:
{
lean_object* v___f_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___f_951_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_951_, 0, v_x_950_);
v___x_952_ = lean_alloc_closure((void*)(l_Lean_Core_liftIOCore___boxed), 5, 2);
lean_closure_set(v___x_952_, 0, lean_box(0));
lean_closure_set(v___x_952_, 1, v___f_951_);
v___x_953_ = lean_apply_2(v_inst_948_, lean_box(0), v___x_952_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__2(lean_object* v_toPure_954_, lean_object* v_____x_955_){
_start:
{
lean_object* v_fst_956_; lean_object* v___x_957_; 
v_fst_956_ = lean_ctor_get(v_____x_955_, 0);
lean_inc(v_fst_956_);
lean_dec_ref(v_____x_955_);
v___x_957_ = lean_apply_2(v_toPure_954_, lean_box(0), v_fst_956_);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__3(lean_object* v_a_958_, lean_object* v_toPure_959_, lean_object* v_s_960_){
_start:
{
lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_961_, 0, v_a_958_);
lean_ctor_set(v___x_961_, 1, v_s_960_);
v___x_962_ = lean_apply_2(v_toPure_959_, lean_box(0), v___x_961_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__4(lean_object* v_toPure_963_, lean_object* v_ref_964_, lean_object* v_x_965_, lean_object* v_toBind_966_, lean_object* v_a_967_){
_start:
{
lean_object* v___f_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v___f_968_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__3), 3, 2);
lean_closure_set(v___f_968_, 0, v_a_967_);
lean_closure_set(v___f_968_, 1, v_toPure_963_);
v___x_969_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_969_, 0, lean_box(0));
lean_closure_set(v___x_969_, 1, lean_box(0));
lean_closure_set(v___x_969_, 2, v_ref_964_);
v___x_970_ = lean_apply_2(v_x_965_, lean_box(0), v___x_969_);
v___x_971_ = lean_apply_4(v_toBind_966_, lean_box(0), lean_box(0), v___x_970_, v___f_968_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__5(lean_object* v_toPure_972_, lean_object* v_x_973_, lean_object* v_toBind_974_, lean_object* v_inst_975_, lean_object* v_inst_976_, lean_object* v_inst_977_, lean_object* v_pre_978_, lean_object* v_post_979_, lean_object* v_x_980_, lean_object* v_input_981_, lean_object* v_ref_982_){
_start:
{
lean_object* v___f_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
lean_inc(v_toBind_974_);
lean_inc(v_x_973_);
lean_inc(v_ref_982_);
v___f_983_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__4), 5, 4);
lean_closure_set(v___f_983_, 0, v_toPure_972_);
lean_closure_set(v___f_983_, 1, v_ref_982_);
lean_closure_set(v___f_983_, 2, v_x_973_);
lean_closure_set(v___f_983_, 3, v_toBind_974_);
v___x_984_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_975_, v_inst_976_, v_inst_977_, v_pre_978_, v_post_979_, v_x_980_, v_x_973_, v_input_981_, v_ref_982_);
lean_dec(v_ref_982_);
v___x_985_ = lean_apply_4(v_toBind_974_, lean_box(0), lean_box(0), v___x_984_, v___f_983_);
return v___x_985_;
}
}
static lean_object* _init_l_Lean_Core_transform___redArg___closed__0(void){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_986_ = lean_box(0);
v___x_987_ = lean_unsigned_to_nat(16u);
v___x_988_ = lean_mk_array(v___x_987_, v___x_986_);
return v___x_988_;
}
}
static lean_object* _init_l_Lean_Core_transform___redArg___closed__1(void){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_989_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__0, &l_Lean_Core_transform___redArg___closed__0_once, _init_l_Lean_Core_transform___redArg___closed__0);
v___x_990_ = lean_unsigned_to_nat(0u);
v___x_991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_990_);
lean_ctor_set(v___x_991_, 1, v___x_989_);
return v___x_991_;
}
}
static lean_object* _init_l_Lean_Core_transform___redArg___closed__2(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__1, &l_Lean_Core_transform___redArg___closed__1_once, _init_l_Lean_Core_transform___redArg___closed__1);
v___x_993_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_993_, 0, lean_box(0));
lean_closure_set(v___x_993_, 1, lean_box(0));
lean_closure_set(v___x_993_, 2, v___x_992_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg(lean_object* v_inst_994_, lean_object* v_inst_995_, lean_object* v_inst_996_, lean_object* v_input_997_, lean_object* v_pre_998_, lean_object* v_post_999_){
_start:
{
lean_object* v_x_1000_; lean_object* v_toApplicative_1001_; lean_object* v_toBind_1002_; lean_object* v_toPure_1003_; lean_object* v_x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___f_1007_; lean_object* v___f_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v_x_1000_ = lean_box(0);
v_toApplicative_1001_ = lean_ctor_get(v_inst_994_, 0);
v_toBind_1002_ = lean_ctor_get(v_inst_994_, 1);
lean_inc_n(v_toBind_1002_, 3);
v_toPure_1003_ = lean_ctor_get(v_toApplicative_1001_, 1);
lean_inc_n(v_toPure_1003_, 2);
lean_inc_n(v_inst_995_, 2);
v_x_1004_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__1), 3, 1);
lean_closure_set(v_x_1004_, 0, v_inst_995_);
v___x_1005_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_1006_ = l_Lean_Core_transform___redArg___lam__1(v_inst_995_, lean_box(0), v___x_1005_);
v___f_1007_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1007_, 0, v_toPure_1003_);
v___f_1008_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__5), 11, 10);
lean_closure_set(v___f_1008_, 0, v_toPure_1003_);
lean_closure_set(v___f_1008_, 1, v_x_1004_);
lean_closure_set(v___f_1008_, 2, v_toBind_1002_);
lean_closure_set(v___f_1008_, 3, v_inst_994_);
lean_closure_set(v___f_1008_, 4, v_inst_995_);
lean_closure_set(v___f_1008_, 5, v_inst_996_);
lean_closure_set(v___f_1008_, 6, v_pre_998_);
lean_closure_set(v___f_1008_, 7, v_post_999_);
lean_closure_set(v___f_1008_, 8, v_x_1000_);
lean_closure_set(v___f_1008_, 9, v_input_997_);
v___x_1009_ = lean_apply_4(v_toBind_1002_, lean_box(0), lean_box(0), v___x_1006_, v___f_1008_);
v___x_1010_ = lean_apply_4(v_toBind_1002_, lean_box(0), lean_box(0), v___x_1009_, v___f_1007_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform(lean_object* v_m_1011_, lean_object* v_inst_1012_, lean_object* v_inst_1013_, lean_object* v_inst_1014_, lean_object* v_input_1015_, lean_object* v_pre_1016_, lean_object* v_post_1017_){
_start:
{
lean_object* v___x_1018_; 
v___x_1018_ = l_Lean_Core_transform___redArg(v_inst_1012_, v_inst_1013_, v_inst_1014_, v_input_1015_, v_pre_1016_, v_post_1017_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0(lean_object* v_e_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_){
_start:
{
uint8_t v___x_1025_; uint8_t v___x_1026_; 
v___x_1025_ = 0;
v___x_1026_ = l_Lean_Expr_isHeadBetaTarget(v_e_1021_, v___x_1025_);
if (v___x_1026_ == 0)
{
lean_object* v___x_1027_; lean_object* v___x_1028_; 
lean_dec_ref(v_e_1021_);
v___x_1027_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1027_);
return v___x_1028_;
}
else
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1029_ = l_Lean_Expr_headBeta(v_e_1021_);
v___x_1030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1029_);
v___x_1031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
return v___x_1031_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0___boxed(lean_object* v_e_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_Lean_Core_betaReduce___lam__0(v_e_1032_, v___y_1033_, v___y_1034_);
lean_dec(v___y_1034_);
lean_dec_ref(v___y_1033_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1(lean_object* v_e_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_){
_start:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1041_, 0, v_e_1037_);
v___x_1042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1041_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1___boxed(lean_object* v_e_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l_Lean_Core_betaReduce___lam__1(v_e_1043_, v___y_1044_, v___y_1045_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
return v_res_1047_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1048_ = lean_box(0);
v___x_1049_ = l_Lean_interruptExceptionId;
v___x_1050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1049_);
lean_ctor_set(v___x_1050_, 1, v___x_1048_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg(){
_start:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1052_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0);
v___x_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object* v___y_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg();
return v_res_1055_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_1061_ = l_Lean_maxRecDepthErrorMessage;
v___x_1062_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1061_);
return v___x_1062_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3);
v___x_1064_ = l_Lean_MessageData_ofFormat(v___x_1063_);
return v___x_1064_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1065_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4);
v___x_1066_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2));
v___x_1067_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
lean_ctor_set(v___x_1067_, 1, v___x_1065_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_ref_1068_){
_start:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1070_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1071_, 0, v_ref_1068_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
v___x_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_ref_1073_, lean_object* v___y_1074_){
_start:
{
lean_object* v_res_1075_; 
v_res_1075_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1073_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(lean_object* v_x_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v___y_1082_; lean_object* v___y_1092_; uint8_t v___y_1093_; lean_object* v___y_1094_; lean_object* v___y_1095_; uint8_t v___y_1096_; lean_object* v_toCold_1101_; lean_object* v_currRecDepth_1102_; lean_object* v_ref_1103_; uint8_t v_diag_1104_; uint8_t v_suppressElabErrors_1105_; lean_object* v_maxRecDepth_1106_; lean_object* v_cancelTk_x3f_1107_; 
v_toCold_1101_ = lean_ctor_get(v___y_1078_, 0);
v_currRecDepth_1102_ = lean_ctor_get(v___y_1078_, 1);
v_ref_1103_ = lean_ctor_get(v___y_1078_, 2);
v_diag_1104_ = lean_ctor_get_uint8(v___y_1078_, sizeof(void*)*3);
v_suppressElabErrors_1105_ = lean_ctor_get_uint8(v___y_1078_, sizeof(void*)*3 + 1);
v_maxRecDepth_1106_ = lean_ctor_get(v_toCold_1101_, 3);
v_cancelTk_x3f_1107_ = lean_ctor_get(v_toCold_1101_, 10);
if (lean_obj_tag(v_cancelTk_x3f_1107_) == 1)
{
lean_object* v_val_1113_; uint8_t v___x_1114_; 
v_val_1113_ = lean_ctor_get(v_cancelTk_x3f_1107_, 0);
v___x_1114_ = l_IO_CancelToken_isSet(v_val_1113_);
if (v___x_1114_ == 0)
{
goto v___jp_1108_;
}
else
{
lean_object* v___x_1115_; lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
lean_dec_ref(v_x_1076_);
v___x_1115_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg();
v_a_1116_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1118_ = v___x_1115_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1115_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1116_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
else
{
goto v___jp_1108_;
}
v___jp_1081_:
{
if (lean_obj_tag(v___y_1082_) == 0)
{
return v___y_1082_;
}
else
{
lean_object* v_a_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1090_; 
v_a_1083_ = lean_ctor_get(v___y_1082_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___y_1082_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1085_ = v___y_1082_;
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_a_1083_);
lean_dec(v___y_1082_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1088_; 
if (v_isShared_1086_ == 0)
{
v___x_1088_ = v___x_1085_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v_a_1083_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
}
v___jp_1091_:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1097_ = lean_unsigned_to_nat(1u);
v___x_1098_ = lean_nat_add(v___y_1095_, v___x_1097_);
lean_inc_ref(v___y_1092_);
v___x_1099_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1099_, 0, v___y_1092_);
lean_ctor_set(v___x_1099_, 1, v___x_1098_);
lean_ctor_set(v___x_1099_, 2, v___y_1094_);
lean_ctor_set_uint8(v___x_1099_, sizeof(void*)*3, v___y_1096_);
lean_ctor_set_uint8(v___x_1099_, sizeof(void*)*3 + 1, v___y_1093_);
lean_inc(v___y_1079_);
lean_inc(v___y_1077_);
v___x_1100_ = lean_apply_4(v_x_1076_, v___y_1077_, v___x_1099_, v___y_1079_, lean_box(0));
v___y_1082_ = v___x_1100_;
goto v___jp_1081_;
}
v___jp_1108_:
{
lean_object* v___x_1109_; uint8_t v___x_1110_; 
v___x_1109_ = lean_unsigned_to_nat(0u);
v___x_1110_ = lean_nat_dec_eq(v_maxRecDepth_1106_, v___x_1109_);
if (v___x_1110_ == 0)
{
uint8_t v___x_1111_; 
v___x_1111_ = lean_nat_dec_eq(v_currRecDepth_1102_, v_maxRecDepth_1106_);
if (v___x_1111_ == 0)
{
lean_inc(v_ref_1103_);
v___y_1092_ = v_toCold_1101_;
v___y_1093_ = v_suppressElabErrors_1105_;
v___y_1094_ = v_ref_1103_;
v___y_1095_ = v_currRecDepth_1102_;
v___y_1096_ = v_diag_1104_;
goto v___jp_1091_;
}
else
{
lean_object* v___x_1112_; 
lean_dec_ref(v_x_1076_);
lean_inc(v_ref_1103_);
v___x_1112_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1103_);
v___y_1082_ = v___x_1112_;
goto v___jp_1081_;
}
}
else
{
lean_inc(v_ref_1103_);
v___y_1092_ = v_toCold_1101_;
v___y_1093_ = v_suppressElabErrors_1105_;
v___y_1094_ = v_ref_1103_;
v___y_1095_ = v_currRecDepth_1102_;
v___y_1096_ = v_diag_1104_;
goto v___jp_1091_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_x_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(v_x_1124_, v___y_1125_, v___y_1126_, v___y_1127_);
lean_dec(v___y_1127_);
lean_dec_ref(v___y_1126_);
lean_dec(v___y_1125_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_1130_, lean_object* v_x_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = lean_apply_1(v_x_1131_, lean_box(0));
v___x_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_1137_, lean_object* v_x_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(v_00_u03b1_1137_, v_x_1138_, v___y_1139_, v___y_1140_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
return v_res_1142_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(lean_object* v_a_1143_, lean_object* v_x_1144_){
_start:
{
if (lean_obj_tag(v_x_1144_) == 0)
{
uint8_t v___x_1145_; 
v___x_1145_ = 0;
return v___x_1145_;
}
else
{
lean_object* v_key_1146_; lean_object* v_tail_1147_; uint8_t v___x_1148_; 
v_key_1146_ = lean_ctor_get(v_x_1144_, 0);
v_tail_1147_ = lean_ctor_get(v_x_1144_, 2);
v___x_1148_ = l_Lean_ExprStructEq_beq(v_key_1146_, v_a_1143_);
if (v___x_1148_ == 0)
{
v_x_1144_ = v_tail_1147_;
goto _start;
}
else
{
return v___x_1148_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object* v_a_1150_, lean_object* v_x_1151_){
_start:
{
uint8_t v_res_1152_; lean_object* v_r_1153_; 
v_res_1152_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(v_a_1150_, v_x_1151_);
lean_dec(v_x_1151_);
lean_dec_ref(v_a_1150_);
v_r_1153_ = lean_box(v_res_1152_);
return v_r_1153_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object* v_x_1154_, lean_object* v_x_1155_){
_start:
{
if (lean_obj_tag(v_x_1155_) == 0)
{
return v_x_1154_;
}
else
{
lean_object* v_key_1156_; lean_object* v_value_1157_; lean_object* v_tail_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1181_; 
v_key_1156_ = lean_ctor_get(v_x_1155_, 0);
v_value_1157_ = lean_ctor_get(v_x_1155_, 1);
v_tail_1158_ = lean_ctor_get(v_x_1155_, 2);
v_isSharedCheck_1181_ = !lean_is_exclusive(v_x_1155_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1160_ = v_x_1155_;
v_isShared_1161_ = v_isSharedCheck_1181_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_tail_1158_);
lean_inc(v_value_1157_);
lean_inc(v_key_1156_);
lean_dec(v_x_1155_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1181_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1162_; uint64_t v___x_1163_; uint64_t v___x_1164_; uint64_t v___x_1165_; uint64_t v_fold_1166_; uint64_t v___x_1167_; uint64_t v___x_1168_; uint64_t v___x_1169_; size_t v___x_1170_; size_t v___x_1171_; size_t v___x_1172_; size_t v___x_1173_; size_t v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1177_; 
v___x_1162_ = lean_array_get_size(v_x_1154_);
v___x_1163_ = l_Lean_ExprStructEq_hash(v_key_1156_);
v___x_1164_ = 32ULL;
v___x_1165_ = lean_uint64_shift_right(v___x_1163_, v___x_1164_);
v_fold_1166_ = lean_uint64_xor(v___x_1163_, v___x_1165_);
v___x_1167_ = 16ULL;
v___x_1168_ = lean_uint64_shift_right(v_fold_1166_, v___x_1167_);
v___x_1169_ = lean_uint64_xor(v_fold_1166_, v___x_1168_);
v___x_1170_ = lean_uint64_to_usize(v___x_1169_);
v___x_1171_ = lean_usize_of_nat(v___x_1162_);
v___x_1172_ = ((size_t)1ULL);
v___x_1173_ = lean_usize_sub(v___x_1171_, v___x_1172_);
v___x_1174_ = lean_usize_land(v___x_1170_, v___x_1173_);
v___x_1175_ = lean_array_uget_borrowed(v_x_1154_, v___x_1174_);
lean_inc(v___x_1175_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 2, v___x_1175_);
v___x_1177_ = v___x_1160_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_key_1156_);
lean_ctor_set(v_reuseFailAlloc_1180_, 1, v_value_1157_);
lean_ctor_set(v_reuseFailAlloc_1180_, 2, v___x_1175_);
v___x_1177_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
lean_object* v___x_1178_; 
v___x_1178_ = lean_array_uset(v_x_1154_, v___x_1174_, v___x_1177_);
v_x_1154_ = v___x_1178_;
v_x_1155_ = v_tail_1158_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object* v_i_1182_, lean_object* v_source_1183_, lean_object* v_target_1184_){
_start:
{
lean_object* v___x_1185_; uint8_t v___x_1186_; 
v___x_1185_ = lean_array_get_size(v_source_1183_);
v___x_1186_ = lean_nat_dec_lt(v_i_1182_, v___x_1185_);
if (v___x_1186_ == 0)
{
lean_dec_ref(v_source_1183_);
lean_dec(v_i_1182_);
return v_target_1184_;
}
else
{
lean_object* v_es_1187_; lean_object* v___x_1188_; lean_object* v_source_1189_; lean_object* v_target_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v_es_1187_ = lean_array_fget(v_source_1183_, v_i_1182_);
v___x_1188_ = lean_box(0);
v_source_1189_ = lean_array_fset(v_source_1183_, v_i_1182_, v___x_1188_);
v_target_1190_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_target_1184_, v_es_1187_);
v___x_1191_ = lean_unsigned_to_nat(1u);
v___x_1192_ = lean_nat_add(v_i_1182_, v___x_1191_);
lean_dec(v_i_1182_);
v_i_1182_ = v___x_1192_;
v_source_1183_ = v_source_1189_;
v_target_1184_ = v_target_1190_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(lean_object* v_data_1194_){
_start:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v_nbuckets_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1195_ = lean_array_get_size(v_data_1194_);
v___x_1196_ = lean_unsigned_to_nat(2u);
v_nbuckets_1197_ = lean_nat_mul(v___x_1195_, v___x_1196_);
v___x_1198_ = lean_unsigned_to_nat(0u);
v___x_1199_ = lean_box(0);
v___x_1200_ = lean_mk_array(v_nbuckets_1197_, v___x_1199_);
v___x_1201_ = lean_array_propagate_mark(v_data_1194_, v___x_1200_);
v___x_1202_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v___x_1198_, v_data_1194_, v___x_1201_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12___redArg(lean_object* v_a_1203_, lean_object* v_b_1204_, lean_object* v_x_1205_){
_start:
{
if (lean_obj_tag(v_x_1205_) == 0)
{
lean_dec(v_b_1204_);
lean_dec_ref(v_a_1203_);
return v_x_1205_;
}
else
{
lean_object* v_key_1206_; lean_object* v_value_1207_; lean_object* v_tail_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1220_; 
v_key_1206_ = lean_ctor_get(v_x_1205_, 0);
v_value_1207_ = lean_ctor_get(v_x_1205_, 1);
v_tail_1208_ = lean_ctor_get(v_x_1205_, 2);
v_isSharedCheck_1220_ = !lean_is_exclusive(v_x_1205_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1210_ = v_x_1205_;
v_isShared_1211_ = v_isSharedCheck_1220_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_tail_1208_);
lean_inc(v_value_1207_);
lean_inc(v_key_1206_);
lean_dec(v_x_1205_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1220_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
uint8_t v___x_1212_; 
v___x_1212_ = l_Lean_ExprStructEq_beq(v_key_1206_, v_a_1203_);
if (v___x_1212_ == 0)
{
lean_object* v___x_1213_; lean_object* v___x_1215_; 
v___x_1213_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12___redArg(v_a_1203_, v_b_1204_, v_tail_1208_);
if (v_isShared_1211_ == 0)
{
lean_ctor_set(v___x_1210_, 2, v___x_1213_);
v___x_1215_ = v___x_1210_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_key_1206_);
lean_ctor_set(v_reuseFailAlloc_1216_, 1, v_value_1207_);
lean_ctor_set(v_reuseFailAlloc_1216_, 2, v___x_1213_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
else
{
lean_object* v___x_1218_; 
lean_dec(v_value_1207_);
lean_dec(v_key_1206_);
if (v_isShared_1211_ == 0)
{
lean_ctor_set(v___x_1210_, 1, v_b_1204_);
lean_ctor_set(v___x_1210_, 0, v_a_1203_);
v___x_1218_ = v___x_1210_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_a_1203_);
lean_ctor_set(v_reuseFailAlloc_1219_, 1, v_b_1204_);
lean_ctor_set(v_reuseFailAlloc_1219_, 2, v_tail_1208_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(lean_object* v_m_1221_, lean_object* v_a_1222_, lean_object* v_b_1223_){
_start:
{
lean_object* v_size_1224_; lean_object* v_buckets_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1268_; 
v_size_1224_ = lean_ctor_get(v_m_1221_, 0);
v_buckets_1225_ = lean_ctor_get(v_m_1221_, 1);
v_isSharedCheck_1268_ = !lean_is_exclusive(v_m_1221_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1227_ = v_m_1221_;
v_isShared_1228_ = v_isSharedCheck_1268_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_buckets_1225_);
lean_inc(v_size_1224_);
lean_dec(v_m_1221_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1268_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1229_; uint64_t v___x_1230_; uint64_t v___x_1231_; uint64_t v___x_1232_; uint64_t v_fold_1233_; uint64_t v___x_1234_; uint64_t v___x_1235_; uint64_t v___x_1236_; size_t v___x_1237_; size_t v___x_1238_; size_t v___x_1239_; size_t v___x_1240_; size_t v___x_1241_; lean_object* v_bkt_1242_; uint8_t v___x_1243_; 
v___x_1229_ = lean_array_get_size(v_buckets_1225_);
v___x_1230_ = l_Lean_ExprStructEq_hash(v_a_1222_);
v___x_1231_ = 32ULL;
v___x_1232_ = lean_uint64_shift_right(v___x_1230_, v___x_1231_);
v_fold_1233_ = lean_uint64_xor(v___x_1230_, v___x_1232_);
v___x_1234_ = 16ULL;
v___x_1235_ = lean_uint64_shift_right(v_fold_1233_, v___x_1234_);
v___x_1236_ = lean_uint64_xor(v_fold_1233_, v___x_1235_);
v___x_1237_ = lean_uint64_to_usize(v___x_1236_);
v___x_1238_ = lean_usize_of_nat(v___x_1229_);
v___x_1239_ = ((size_t)1ULL);
v___x_1240_ = lean_usize_sub(v___x_1238_, v___x_1239_);
v___x_1241_ = lean_usize_land(v___x_1237_, v___x_1240_);
v_bkt_1242_ = lean_array_uget_borrowed(v_buckets_1225_, v___x_1241_);
v___x_1243_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(v_a_1222_, v_bkt_1242_);
if (v___x_1243_ == 0)
{
lean_object* v___x_1244_; lean_object* v_size_x27_1245_; lean_object* v___x_1246_; lean_object* v_buckets_x27_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; uint8_t v___x_1253_; 
v___x_1244_ = lean_unsigned_to_nat(1u);
v_size_x27_1245_ = lean_nat_add(v_size_1224_, v___x_1244_);
lean_dec(v_size_1224_);
lean_inc(v_bkt_1242_);
v___x_1246_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1246_, 0, v_a_1222_);
lean_ctor_set(v___x_1246_, 1, v_b_1223_);
lean_ctor_set(v___x_1246_, 2, v_bkt_1242_);
v_buckets_x27_1247_ = lean_array_uset(v_buckets_1225_, v___x_1241_, v___x_1246_);
v___x_1248_ = lean_unsigned_to_nat(4u);
v___x_1249_ = lean_nat_mul(v_size_x27_1245_, v___x_1248_);
v___x_1250_ = lean_unsigned_to_nat(3u);
v___x_1251_ = lean_nat_div(v___x_1249_, v___x_1250_);
lean_dec(v___x_1249_);
v___x_1252_ = lean_array_get_size(v_buckets_x27_1247_);
v___x_1253_ = lean_nat_dec_le(v___x_1251_, v___x_1252_);
lean_dec(v___x_1251_);
if (v___x_1253_ == 0)
{
lean_object* v_val_1254_; lean_object* v___x_1256_; 
v_val_1254_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(v_buckets_x27_1247_);
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 1, v_val_1254_);
lean_ctor_set(v___x_1227_, 0, v_size_x27_1245_);
v___x_1256_ = v___x_1227_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_size_x27_1245_);
lean_ctor_set(v_reuseFailAlloc_1257_, 1, v_val_1254_);
v___x_1256_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
return v___x_1256_;
}
}
else
{
lean_object* v___x_1259_; 
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 1, v_buckets_x27_1247_);
lean_ctor_set(v___x_1227_, 0, v_size_x27_1245_);
v___x_1259_ = v___x_1227_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v_size_x27_1245_);
lean_ctor_set(v_reuseFailAlloc_1260_, 1, v_buckets_x27_1247_);
v___x_1259_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
return v___x_1259_;
}
}
}
else
{
lean_object* v___x_1261_; lean_object* v_buckets_x27_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1266_; 
lean_inc(v_bkt_1242_);
v___x_1261_ = lean_box(0);
v_buckets_x27_1262_ = lean_array_uset(v_buckets_1225_, v___x_1241_, v___x_1261_);
v___x_1263_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12___redArg(v_a_1222_, v_b_1223_, v_bkt_1242_);
v___x_1264_ = lean_array_uset(v_buckets_x27_1262_, v___x_1241_, v___x_1263_);
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 1, v___x_1264_);
v___x_1266_ = v___x_1227_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_size_1224_);
lean_ctor_set(v_reuseFailAlloc_1267_, 1, v___x_1264_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2(lean_object* v___y_1269_, lean_object* v_e_1270_, lean_object* v_a_1271_){
_start:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1273_ = lean_st_ref_take(v___y_1269_);
v___x_1274_ = lean_box(0);
v___x_1275_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(v___x_1273_, v_e_1270_, v_a_1271_);
v___x_1276_ = lean_st_ref_put(v___y_1269_, v___x_1275_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed(lean_object* v___y_1277_, lean_object* v_e_1278_, lean_object* v_a_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2(v___y_1277_, v_e_1278_, v_a_1279_);
lean_dec(v___y_1277_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_a_1282_, lean_object* v_x_1283_){
_start:
{
if (lean_obj_tag(v_x_1283_) == 0)
{
lean_object* v___x_1284_; 
v___x_1284_ = lean_box(0);
return v___x_1284_;
}
else
{
lean_object* v_key_1285_; lean_object* v_value_1286_; lean_object* v_tail_1287_; uint8_t v___x_1288_; 
v_key_1285_ = lean_ctor_get(v_x_1283_, 0);
v_value_1286_ = lean_ctor_get(v_x_1283_, 1);
v_tail_1287_ = lean_ctor_get(v_x_1283_, 2);
v___x_1288_ = l_Lean_ExprStructEq_beq(v_key_1285_, v_a_1282_);
if (v___x_1288_ == 0)
{
v_x_1283_ = v_tail_1287_;
goto _start;
}
else
{
lean_object* v___x_1290_; 
lean_inc(v_value_1286_);
v___x_1290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1290_, 0, v_value_1286_);
return v___x_1290_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object* v_a_1291_, lean_object* v_x_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1291_, v_x_1292_);
lean_dec(v_x_1292_);
lean_dec_ref(v_a_1291_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(lean_object* v_m_1294_, lean_object* v_a_1295_){
_start:
{
lean_object* v_buckets_1296_; lean_object* v___x_1297_; uint64_t v___x_1298_; uint64_t v___x_1299_; uint64_t v___x_1300_; uint64_t v_fold_1301_; uint64_t v___x_1302_; uint64_t v___x_1303_; uint64_t v___x_1304_; size_t v___x_1305_; size_t v___x_1306_; size_t v___x_1307_; size_t v___x_1308_; size_t v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v_buckets_1296_ = lean_ctor_get(v_m_1294_, 1);
v___x_1297_ = lean_array_get_size(v_buckets_1296_);
v___x_1298_ = l_Lean_ExprStructEq_hash(v_a_1295_);
v___x_1299_ = 32ULL;
v___x_1300_ = lean_uint64_shift_right(v___x_1298_, v___x_1299_);
v_fold_1301_ = lean_uint64_xor(v___x_1298_, v___x_1300_);
v___x_1302_ = 16ULL;
v___x_1303_ = lean_uint64_shift_right(v_fold_1301_, v___x_1302_);
v___x_1304_ = lean_uint64_xor(v_fold_1301_, v___x_1303_);
v___x_1305_ = lean_uint64_to_usize(v___x_1304_);
v___x_1306_ = lean_usize_of_nat(v___x_1297_);
v___x_1307_ = ((size_t)1ULL);
v___x_1308_ = lean_usize_sub(v___x_1306_, v___x_1307_);
v___x_1309_ = lean_usize_land(v___x_1305_, v___x_1308_);
v___x_1310_ = lean_array_uget_borrowed(v_buckets_1296_, v___x_1309_);
v___x_1311_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1295_, v___x_1310_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_m_1312_, lean_object* v_a_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_m_1312_, v_a_1313_);
lean_dec_ref(v_a_1313_);
lean_dec_ref(v_m_1312_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(lean_object* v_pre_1315_, lean_object* v_post_1316_, size_t v_sz_1317_, size_t v_i_1318_, lean_object* v_bs_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_){
_start:
{
uint8_t v___x_1324_; 
v___x_1324_ = lean_usize_dec_lt(v_i_1318_, v_sz_1317_);
if (v___x_1324_ == 0)
{
lean_object* v___x_1325_; 
lean_dec_ref(v_post_1316_);
lean_dec_ref(v_pre_1315_);
v___x_1325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1325_, 0, v_bs_1319_);
return v___x_1325_;
}
else
{
lean_object* v_v_1326_; lean_object* v___x_1327_; lean_object* v_bs_x27_1328_; lean_object* v___x_1329_; 
v_v_1326_ = lean_array_uget(v_bs_1319_, v_i_1318_);
v___x_1327_ = lean_unsigned_to_nat(0u);
v_bs_x27_1328_ = lean_array_uset(v_bs_1319_, v_i_1318_, v___x_1327_);
lean_inc_ref(v_post_1316_);
lean_inc_ref(v_pre_1315_);
v___x_1329_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1315_, v_post_1316_, v_v_1326_, v___y_1320_, v___y_1321_, v___y_1322_);
if (lean_obj_tag(v___x_1329_) == 0)
{
lean_object* v_a_1330_; size_t v___x_1331_; size_t v___x_1332_; lean_object* v___x_1333_; 
v_a_1330_ = lean_ctor_get(v___x_1329_, 0);
lean_inc(v_a_1330_);
lean_dec_ref_known(v___x_1329_, 1);
v___x_1331_ = ((size_t)1ULL);
v___x_1332_ = lean_usize_add(v_i_1318_, v___x_1331_);
v___x_1333_ = lean_array_uset(v_bs_x27_1328_, v_i_1318_, v_a_1330_);
v_i_1318_ = v___x_1332_;
v_bs_1319_ = v___x_1333_;
goto _start;
}
else
{
lean_object* v_a_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1342_; 
lean_dec_ref(v_bs_x27_1328_);
lean_dec_ref(v_post_1316_);
lean_dec_ref(v_pre_1315_);
v_a_1335_ = lean_ctor_get(v___x_1329_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1329_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1337_ = v___x_1329_;
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_a_1335_);
lean_dec(v___x_1329_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_a_1335_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(lean_object* v_pre_1343_, lean_object* v_post_1344_, lean_object* v_x_1345_, lean_object* v_x_1346_, lean_object* v_x_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_){
_start:
{
if (lean_obj_tag(v_x_1345_) == 5)
{
lean_object* v_fn_1352_; lean_object* v_arg_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; 
v_fn_1352_ = lean_ctor_get(v_x_1345_, 0);
lean_inc_ref(v_fn_1352_);
v_arg_1353_ = lean_ctor_get(v_x_1345_, 1);
lean_inc_ref(v_arg_1353_);
lean_dec_ref_known(v_x_1345_, 2);
v___x_1354_ = lean_array_set(v_x_1346_, v_x_1347_, v_arg_1353_);
v___x_1355_ = lean_unsigned_to_nat(1u);
v___x_1356_ = lean_nat_sub(v_x_1347_, v___x_1355_);
lean_dec(v_x_1347_);
v_x_1345_ = v_fn_1352_;
v_x_1346_ = v___x_1354_;
v_x_1347_ = v___x_1356_;
goto _start;
}
else
{
lean_object* v___x_1358_; 
lean_dec(v_x_1347_);
lean_inc_ref(v_post_1344_);
lean_inc_ref(v_pre_1343_);
v___x_1358_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1343_, v_post_1344_, v_x_1345_, v___y_1348_, v___y_1349_, v___y_1350_);
if (lean_obj_tag(v___x_1358_) == 0)
{
lean_object* v_a_1359_; size_t v_sz_1360_; size_t v___x_1361_; lean_object* v___x_1362_; 
v_a_1359_ = lean_ctor_get(v___x_1358_, 0);
lean_inc(v_a_1359_);
lean_dec_ref_known(v___x_1358_, 1);
v_sz_1360_ = lean_array_size(v_x_1346_);
v___x_1361_ = ((size_t)0ULL);
lean_inc_ref(v_post_1344_);
lean_inc_ref(v_pre_1343_);
v___x_1362_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(v_pre_1343_, v_post_1344_, v_sz_1360_, v___x_1361_, v_x_1346_, v___y_1348_, v___y_1349_, v___y_1350_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
lean_inc(v_a_1363_);
lean_dec_ref_known(v___x_1362_, 1);
v___x_1364_ = l_Lean_mkAppN(v_a_1359_, v_a_1363_);
lean_dec(v_a_1363_);
v___x_1365_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1343_, v_post_1344_, v___x_1364_, v___y_1348_, v___y_1349_, v___y_1350_);
return v___x_1365_;
}
else
{
lean_object* v_a_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1373_; 
lean_dec(v_a_1359_);
lean_dec_ref(v_post_1344_);
lean_dec_ref(v_pre_1343_);
v_a_1366_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1373_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1368_ = v___x_1362_;
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_a_1366_);
lean_dec(v___x_1362_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1371_; 
if (v_isShared_1369_ == 0)
{
v___x_1371_ = v___x_1368_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_a_1366_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
return v___x_1371_;
}
}
}
}
else
{
lean_dec_ref(v_x_1346_);
lean_dec_ref(v_post_1344_);
lean_dec_ref(v_pre_1343_);
return v___x_1358_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1(lean_object* v___x_1374_, lean_object* v_pre_1375_, lean_object* v_e_1376_, lean_object* v_post_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_){
_start:
{
lean_object* v___x_1382_; 
v___x_1382_ = l_Lean_Core_checkSystem(v___x_1374_, v___y_1379_, v___y_1380_);
if (lean_obj_tag(v___x_1382_) == 0)
{
lean_object* v___x_1383_; 
lean_dec_ref_known(v___x_1382_, 1);
lean_inc_ref(v_pre_1375_);
lean_inc(v___y_1380_);
lean_inc_ref(v___y_1379_);
lean_inc_ref(v_e_1376_);
v___x_1383_ = lean_apply_4(v_pre_1375_, v_e_1376_, v___y_1379_, v___y_1380_, lean_box(0));
if (lean_obj_tag(v___x_1383_) == 0)
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1499_; 
v_a_1384_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1499_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1499_ == 0)
{
v___x_1386_ = v___x_1383_;
v_isShared_1387_ = v_isSharedCheck_1499_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___x_1383_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1499_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___y_1389_; 
switch(lean_obj_tag(v_a_1384_))
{
case 0:
{
lean_object* v_e_1489_; lean_object* v___x_1491_; 
lean_dec_ref(v_post_1377_);
lean_dec_ref(v_e_1376_);
lean_dec_ref(v_pre_1375_);
v_e_1489_ = lean_ctor_get(v_a_1384_, 0);
lean_inc_ref(v_e_1489_);
lean_dec_ref_known(v_a_1384_, 1);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 0, v_e_1489_);
v___x_1491_ = v___x_1386_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_e_1489_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
case 1:
{
lean_object* v_e_1493_; lean_object* v___x_1494_; 
lean_del_object(v___x_1386_);
lean_dec_ref(v_e_1376_);
v_e_1493_ = lean_ctor_get(v_a_1384_, 0);
lean_inc_ref(v_e_1493_);
lean_dec_ref_known(v_a_1384_, 1);
lean_inc_ref(v_post_1377_);
lean_inc_ref(v_pre_1375_);
v___x_1494_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1375_, v_post_1377_, v_e_1493_, v___y_1378_, v___y_1379_, v___y_1380_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v_a_1495_; lean_object* v___x_1496_; 
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
lean_inc(v_a_1495_);
lean_dec_ref_known(v___x_1494_, 1);
v___x_1496_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v_a_1495_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1496_;
}
else
{
lean_dec_ref(v_post_1377_);
lean_dec_ref(v_pre_1375_);
return v___x_1494_;
}
}
default: 
{
lean_object* v_e_x3f_1497_; 
lean_del_object(v___x_1386_);
v_e_x3f_1497_ = lean_ctor_get(v_a_1384_, 0);
lean_inc(v_e_x3f_1497_);
lean_dec_ref_known(v_a_1384_, 1);
if (lean_obj_tag(v_e_x3f_1497_) == 0)
{
v___y_1389_ = v_e_1376_;
goto v___jp_1388_;
}
else
{
lean_object* v_val_1498_; 
lean_dec_ref(v_e_1376_);
v_val_1498_ = lean_ctor_get(v_e_x3f_1497_, 0);
lean_inc(v_val_1498_);
lean_dec_ref_known(v_e_x3f_1497_, 1);
v___y_1389_ = v_val_1498_;
goto v___jp_1388_;
}
}
}
v___jp_1388_:
{
switch(lean_obj_tag(v___y_1389_))
{
case 7:
{
lean_object* v_binderName_1390_; lean_object* v_binderType_1391_; lean_object* v_body_1392_; uint8_t v_binderInfo_1393_; lean_object* v___x_1394_; 
v_binderName_1390_ = lean_ctor_get(v___y_1389_, 0);
v_binderType_1391_ = lean_ctor_get(v___y_1389_, 1);
v_body_1392_ = lean_ctor_get(v___y_1389_, 2);
v_binderInfo_1393_ = lean_ctor_get_uint8(v___y_1389_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1391_);
lean_inc_ref(v_post_1377_);
lean_inc_ref(v_pre_1375_);
v___x_1394_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1375_, v_post_1377_, v_binderType_1391_, v___y_1378_, v___y_1379_, v___y_1380_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v_a_1395_; lean_object* v___x_1396_; 
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_a_1395_);
lean_dec_ref_known(v___x_1394_, 1);
lean_inc_ref(v_body_1392_);
lean_inc_ref(v_post_1377_);
lean_inc_ref(v_pre_1375_);
v___x_1396_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1375_, v_post_1377_, v_body_1392_, v___y_1378_, v___y_1379_, v___y_1380_);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_object* v_a_1397_; size_t v___x_1398_; size_t v___x_1399_; uint8_t v___x_1400_; 
v_a_1397_ = lean_ctor_get(v___x_1396_, 0);
lean_inc(v_a_1397_);
lean_dec_ref_known(v___x_1396_, 1);
v___x_1398_ = lean_ptr_addr(v_binderType_1391_);
v___x_1399_ = lean_ptr_addr(v_a_1395_);
v___x_1400_ = lean_usize_dec_eq(v___x_1398_, v___x_1399_);
if (v___x_1400_ == 0)
{
lean_object* v___x_1401_; lean_object* v___x_1402_; 
lean_inc(v_binderName_1390_);
lean_dec_ref_known(v___y_1389_, 3);
v___x_1401_ = l_Lean_Expr_forallE___override(v_binderName_1390_, v_a_1395_, v_a_1397_, v_binderInfo_1393_);
v___x_1402_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___x_1401_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1402_;
}
else
{
size_t v___x_1403_; size_t v___x_1404_; uint8_t v___x_1405_; 
v___x_1403_ = lean_ptr_addr(v_body_1392_);
v___x_1404_ = lean_ptr_addr(v_a_1397_);
v___x_1405_ = lean_usize_dec_eq(v___x_1403_, v___x_1404_);
if (v___x_1405_ == 0)
{
lean_object* v___x_1406_; lean_object* v___x_1407_; 
lean_inc(v_binderName_1390_);
lean_dec_ref_known(v___y_1389_, 3);
v___x_1406_ = l_Lean_Expr_forallE___override(v_binderName_1390_, v_a_1395_, v_a_1397_, v_binderInfo_1393_);
v___x_1407_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___x_1406_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1407_;
}
else
{
uint8_t v___x_1408_; 
v___x_1408_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1393_, v_binderInfo_1393_);
if (v___x_1408_ == 0)
{
lean_object* v___x_1409_; lean_object* v___x_1410_; 
lean_inc(v_binderName_1390_);
lean_dec_ref_known(v___y_1389_, 3);
v___x_1409_ = l_Lean_Expr_forallE___override(v_binderName_1390_, v_a_1395_, v_a_1397_, v_binderInfo_1393_);
v___x_1410_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___x_1409_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1410_;
}
else
{
lean_object* v___x_1411_; 
lean_dec(v_a_1397_);
lean_dec(v_a_1395_);
v___x_1411_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___y_1389_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1411_;
}
}
}
}
else
{
lean_dec(v_a_1395_);
lean_dec_ref_known(v___y_1389_, 3);
lean_dec_ref(v_post_1377_);
lean_dec_ref(v_pre_1375_);
return v___x_1396_;
}
}
else
{
lean_dec_ref_known(v___y_1389_, 3);
lean_dec_ref(v_post_1377_);
lean_dec_ref(v_pre_1375_);
return v___x_1394_;
}
}
case 6:
{
lean_object* v_binderName_1412_; lean_object* v_binderType_1413_; lean_object* v_body_1414_; uint8_t v_binderInfo_1415_; lean_object* v___x_1416_; 
v_binderName_1412_ = lean_ctor_get(v___y_1389_, 0);
v_binderType_1413_ = lean_ctor_get(v___y_1389_, 1);
v_body_1414_ = lean_ctor_get(v___y_1389_, 2);
v_binderInfo_1415_ = lean_ctor_get_uint8(v___y_1389_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1413_);
lean_inc_ref(v_post_1377_);
lean_inc_ref(v_pre_1375_);
v___x_1416_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1375_, v_post_1377_, v_binderType_1413_, v___y_1378_, v___y_1379_, v___y_1380_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; lean_object* v___x_1418_; 
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_a_1417_);
lean_dec_ref_known(v___x_1416_, 1);
lean_inc_ref(v_body_1414_);
lean_inc_ref(v_post_1377_);
lean_inc_ref(v_pre_1375_);
v___x_1418_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1375_, v_post_1377_, v_body_1414_, v___y_1378_, v___y_1379_, v___y_1380_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; size_t v___x_1420_; size_t v___x_1421_; uint8_t v___x_1422_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
lean_inc(v_a_1419_);
lean_dec_ref_known(v___x_1418_, 1);
v___x_1420_ = lean_ptr_addr(v_binderType_1413_);
v___x_1421_ = lean_ptr_addr(v_a_1417_);
v___x_1422_ = lean_usize_dec_eq(v___x_1420_, v___x_1421_);
if (v___x_1422_ == 0)
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
lean_inc(v_binderName_1412_);
lean_dec_ref_known(v___y_1389_, 3);
v___x_1423_ = l_Lean_Expr_lam___override(v_binderName_1412_, v_a_1417_, v_a_1419_, v_binderInfo_1415_);
v___x_1424_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___x_1423_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1424_;
}
else
{
size_t v___x_1425_; size_t v___x_1426_; uint8_t v___x_1427_; 
v___x_1425_ = lean_ptr_addr(v_body_1414_);
v___x_1426_ = lean_ptr_addr(v_a_1419_);
v___x_1427_ = lean_usize_dec_eq(v___x_1425_, v___x_1426_);
if (v___x_1427_ == 0)
{
lean_object* v___x_1428_; lean_object* v___x_1429_; 
lean_inc(v_binderName_1412_);
lean_dec_ref_known(v___y_1389_, 3);
v___x_1428_ = l_Lean_Expr_lam___override(v_binderName_1412_, v_a_1417_, v_a_1419_, v_binderInfo_1415_);
v___x_1429_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___x_1428_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1429_;
}
else
{
uint8_t v___x_1430_; 
v___x_1430_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1415_, v_binderInfo_1415_);
if (v___x_1430_ == 0)
{
lean_object* v___x_1431_; lean_object* v___x_1432_; 
lean_inc(v_binderName_1412_);
lean_dec_ref_known(v___y_1389_, 3);
v___x_1431_ = l_Lean_Expr_lam___override(v_binderName_1412_, v_a_1417_, v_a_1419_, v_binderInfo_1415_);
v___x_1432_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___x_1431_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1432_;
}
else
{
lean_object* v___x_1433_; 
lean_dec(v_a_1419_);
lean_dec(v_a_1417_);
v___x_1433_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___y_1389_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1433_;
}
}
}
}
else
{
lean_dec(v_a_1417_);
lean_dec_ref_known(v___y_1389_, 3);
lean_dec_ref(v_post_1377_);
lean_dec_ref(v_pre_1375_);
return v___x_1418_;
}
}
else
{
lean_dec_ref_known(v___y_1389_, 3);
lean_dec_ref(v_post_1377_);
lean_dec_ref(v_pre_1375_);
return v___x_1416_;
}
}
case 8:
{
lean_object* v_declName_1434_; lean_object* v_type_1435_; lean_object* v_value_1436_; lean_object* v_body_1437_; uint8_t v_nondep_1438_; lean_object* v___x_1439_; 
v_declName_1434_ = lean_ctor_get(v___y_1389_, 0);
v_type_1435_ = lean_ctor_get(v___y_1389_, 1);
v_value_1436_ = lean_ctor_get(v___y_1389_, 2);
v_body_1437_ = lean_ctor_get(v___y_1389_, 3);
v_nondep_1438_ = lean_ctor_get_uint8(v___y_1389_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_1435_);
lean_inc_ref(v_post_1377_);
lean_inc_ref(v_pre_1375_);
v___x_1439_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1375_, v_post_1377_, v_type_1435_, v___y_1378_, v___y_1379_, v___y_1380_);
if (lean_obj_tag(v___x_1439_) == 0)
{
lean_object* v_a_1440_; lean_object* v___x_1441_; 
v_a_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc(v_a_1440_);
lean_dec_ref_known(v___x_1439_, 1);
lean_inc_ref(v_value_1436_);
lean_inc_ref(v_post_1377_);
lean_inc_ref(v_pre_1375_);
v___x_1441_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1375_, v_post_1377_, v_value_1436_, v___y_1378_, v___y_1379_, v___y_1380_);
if (lean_obj_tag(v___x_1441_) == 0)
{
lean_object* v_a_1442_; lean_object* v___x_1443_; 
v_a_1442_ = lean_ctor_get(v___x_1441_, 0);
lean_inc(v_a_1442_);
lean_dec_ref_known(v___x_1441_, 1);
lean_inc_ref(v_body_1437_);
lean_inc_ref(v_post_1377_);
lean_inc_ref(v_pre_1375_);
v___x_1443_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1375_, v_post_1377_, v_body_1437_, v___y_1378_, v___y_1379_, v___y_1380_);
if (lean_obj_tag(v___x_1443_) == 0)
{
lean_object* v_a_1444_; size_t v___x_1445_; size_t v___x_1446_; uint8_t v___x_1447_; 
v_a_1444_ = lean_ctor_get(v___x_1443_, 0);
lean_inc(v_a_1444_);
lean_dec_ref_known(v___x_1443_, 1);
v___x_1445_ = lean_ptr_addr(v_type_1435_);
v___x_1446_ = lean_ptr_addr(v_a_1440_);
v___x_1447_ = lean_usize_dec_eq(v___x_1445_, v___x_1446_);
if (v___x_1447_ == 0)
{
lean_object* v___x_1448_; lean_object* v___x_1449_; 
lean_inc(v_declName_1434_);
lean_dec_ref_known(v___y_1389_, 4);
v___x_1448_ = l_Lean_Expr_letE___override(v_declName_1434_, v_a_1440_, v_a_1442_, v_a_1444_, v_nondep_1438_);
v___x_1449_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___x_1448_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1449_;
}
else
{
size_t v___x_1450_; size_t v___x_1451_; uint8_t v___x_1452_; 
v___x_1450_ = lean_ptr_addr(v_value_1436_);
v___x_1451_ = lean_ptr_addr(v_a_1442_);
v___x_1452_ = lean_usize_dec_eq(v___x_1450_, v___x_1451_);
if (v___x_1452_ == 0)
{
lean_object* v___x_1453_; lean_object* v___x_1454_; 
lean_inc(v_declName_1434_);
lean_dec_ref_known(v___y_1389_, 4);
v___x_1453_ = l_Lean_Expr_letE___override(v_declName_1434_, v_a_1440_, v_a_1442_, v_a_1444_, v_nondep_1438_);
v___x_1454_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___x_1453_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1454_;
}
else
{
size_t v___x_1455_; size_t v___x_1456_; uint8_t v___x_1457_; 
v___x_1455_ = lean_ptr_addr(v_body_1437_);
v___x_1456_ = lean_ptr_addr(v_a_1444_);
v___x_1457_ = lean_usize_dec_eq(v___x_1455_, v___x_1456_);
if (v___x_1457_ == 0)
{
lean_object* v___x_1458_; lean_object* v___x_1459_; 
lean_inc(v_declName_1434_);
lean_dec_ref_known(v___y_1389_, 4);
v___x_1458_ = l_Lean_Expr_letE___override(v_declName_1434_, v_a_1440_, v_a_1442_, v_a_1444_, v_nondep_1438_);
v___x_1459_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___x_1458_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1459_;
}
else
{
lean_object* v___x_1460_; 
lean_dec(v_a_1444_);
lean_dec(v_a_1442_);
lean_dec(v_a_1440_);
v___x_1460_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___y_1389_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1460_;
}
}
}
}
else
{
lean_dec(v_a_1442_);
lean_dec(v_a_1440_);
lean_dec_ref_known(v___y_1389_, 4);
lean_dec_ref(v_post_1377_);
lean_dec_ref(v_pre_1375_);
return v___x_1443_;
}
}
else
{
lean_dec(v_a_1440_);
lean_dec_ref_known(v___y_1389_, 4);
lean_dec_ref(v_post_1377_);
lean_dec_ref(v_pre_1375_);
return v___x_1441_;
}
}
else
{
lean_dec_ref_known(v___y_1389_, 4);
lean_dec_ref(v_post_1377_);
lean_dec_ref(v_pre_1375_);
return v___x_1439_;
}
}
case 5:
{
lean_object* v_dummy_1461_; lean_object* v_nargs_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
v_dummy_1461_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_1462_ = l_Lean_Expr_getAppNumArgs(v___y_1389_);
lean_inc(v_nargs_1462_);
v___x_1463_ = lean_mk_array(v_nargs_1462_, v_dummy_1461_);
v___x_1464_ = lean_unsigned_to_nat(1u);
v___x_1465_ = lean_nat_sub(v_nargs_1462_, v___x_1464_);
lean_dec(v_nargs_1462_);
v___x_1466_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(v_pre_1375_, v_post_1377_, v___y_1389_, v___x_1463_, v___x_1465_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1466_;
}
case 10:
{
lean_object* v_data_1467_; lean_object* v_expr_1468_; lean_object* v___x_1469_; 
v_data_1467_ = lean_ctor_get(v___y_1389_, 0);
v_expr_1468_ = lean_ctor_get(v___y_1389_, 1);
lean_inc_ref(v_expr_1468_);
lean_inc_ref(v_post_1377_);
lean_inc_ref(v_pre_1375_);
v___x_1469_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1375_, v_post_1377_, v_expr_1468_, v___y_1378_, v___y_1379_, v___y_1380_);
if (lean_obj_tag(v___x_1469_) == 0)
{
lean_object* v_a_1470_; size_t v___x_1471_; size_t v___x_1472_; uint8_t v___x_1473_; 
v_a_1470_ = lean_ctor_get(v___x_1469_, 0);
lean_inc(v_a_1470_);
lean_dec_ref_known(v___x_1469_, 1);
v___x_1471_ = lean_ptr_addr(v_expr_1468_);
v___x_1472_ = lean_ptr_addr(v_a_1470_);
v___x_1473_ = lean_usize_dec_eq(v___x_1471_, v___x_1472_);
if (v___x_1473_ == 0)
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
lean_inc(v_data_1467_);
lean_dec_ref_known(v___y_1389_, 2);
v___x_1474_ = l_Lean_Expr_mdata___override(v_data_1467_, v_a_1470_);
v___x_1475_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___x_1474_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1475_;
}
else
{
lean_object* v___x_1476_; 
lean_dec(v_a_1470_);
v___x_1476_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___y_1389_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1476_;
}
}
else
{
lean_dec_ref_known(v___y_1389_, 2);
lean_dec_ref(v_post_1377_);
lean_dec_ref(v_pre_1375_);
return v___x_1469_;
}
}
case 11:
{
lean_object* v_typeName_1477_; lean_object* v_idx_1478_; lean_object* v_struct_1479_; lean_object* v___x_1480_; 
v_typeName_1477_ = lean_ctor_get(v___y_1389_, 0);
v_idx_1478_ = lean_ctor_get(v___y_1389_, 1);
v_struct_1479_ = lean_ctor_get(v___y_1389_, 2);
lean_inc_ref(v_struct_1479_);
lean_inc_ref(v_post_1377_);
lean_inc_ref(v_pre_1375_);
v___x_1480_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1375_, v_post_1377_, v_struct_1479_, v___y_1378_, v___y_1379_, v___y_1380_);
if (lean_obj_tag(v___x_1480_) == 0)
{
lean_object* v_a_1481_; size_t v___x_1482_; size_t v___x_1483_; uint8_t v___x_1484_; 
v_a_1481_ = lean_ctor_get(v___x_1480_, 0);
lean_inc(v_a_1481_);
lean_dec_ref_known(v___x_1480_, 1);
v___x_1482_ = lean_ptr_addr(v_struct_1479_);
v___x_1483_ = lean_ptr_addr(v_a_1481_);
v___x_1484_ = lean_usize_dec_eq(v___x_1482_, v___x_1483_);
if (v___x_1484_ == 0)
{
lean_object* v___x_1485_; lean_object* v___x_1486_; 
lean_inc(v_idx_1478_);
lean_inc(v_typeName_1477_);
lean_dec_ref_known(v___y_1389_, 3);
v___x_1485_ = l_Lean_Expr_proj___override(v_typeName_1477_, v_idx_1478_, v_a_1481_);
v___x_1486_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___x_1485_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1486_;
}
else
{
lean_object* v___x_1487_; 
lean_dec(v_a_1481_);
v___x_1487_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___y_1389_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1487_;
}
}
else
{
lean_dec_ref_known(v___y_1389_, 3);
lean_dec_ref(v_post_1377_);
lean_dec_ref(v_pre_1375_);
return v___x_1480_;
}
}
default: 
{
lean_object* v___x_1488_; 
v___x_1488_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1375_, v_post_1377_, v___y_1389_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1488_;
}
}
}
}
}
else
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1507_; 
lean_dec_ref(v_post_1377_);
lean_dec_ref(v_e_1376_);
lean_dec_ref(v_pre_1375_);
v_a_1500_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1502_ = v___x_1383_;
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1383_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1505_; 
if (v_isShared_1503_ == 0)
{
v___x_1505_ = v___x_1502_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v_a_1500_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
}
}
else
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1515_; 
lean_dec_ref(v_post_1377_);
lean_dec_ref(v_e_1376_);
lean_dec_ref(v_pre_1375_);
v_a_1508_ = lean_ctor_get(v___x_1382_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1382_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1510_ = v___x_1382_;
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___x_1382_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1513_; 
if (v_isShared_1511_ == 0)
{
v___x_1513_ = v___x_1510_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_a_1508_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1___boxed(lean_object* v___x_1516_, lean_object* v_pre_1517_, lean_object* v_e_1518_, lean_object* v_post_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
lean_object* v_res_1524_; 
v_res_1524_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1(v___x_1516_, v_pre_1517_, v_e_1518_, v_post_1519_, v___y_1520_, v___y_1521_, v___y_1522_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
lean_dec(v___y_1520_);
return v_res_1524_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(lean_object* v_pre_1525_, lean_object* v_post_1526_, lean_object* v_e_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
lean_inc(v___y_1528_);
v___x_1532_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1532_, 0, lean_box(0));
lean_closure_set(v___x_1532_, 1, lean_box(0));
lean_closure_set(v___x_1532_, 2, v___y_1528_);
v___x_1533_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_box(0), v___x_1532_, v___y_1529_, v___y_1530_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1565_; 
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1536_ = v___x_1533_;
v_isShared_1537_ = v_isSharedCheck_1565_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1533_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1565_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1538_; 
v___x_1538_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_a_1534_, v_e_1527_);
lean_dec(v_a_1534_);
if (lean_obj_tag(v___x_1538_) == 0)
{
lean_object* v___x_1539_; lean_object* v___f_1540_; lean_object* v___x_1541_; 
lean_del_object(v___x_1536_);
v___x_1539_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20___closed__0));
lean_inc_ref(v_e_1527_);
v___f_1540_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1___boxed), 8, 4);
lean_closure_set(v___f_1540_, 0, v___x_1539_);
lean_closure_set(v___f_1540_, 1, v_pre_1525_);
lean_closure_set(v___f_1540_, 2, v_e_1527_);
lean_closure_set(v___f_1540_, 3, v_post_1526_);
v___x_1541_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(v___f_1540_, v___y_1528_, v___y_1529_, v___y_1530_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v_a_1542_; lean_object* v___f_1543_; lean_object* v___x_1544_; 
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
lean_inc_n(v_a_1542_, 2);
lean_dec_ref_known(v___x_1541_, 1);
lean_inc(v___y_1528_);
v___f_1543_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1543_, 0, v___y_1528_);
lean_closure_set(v___f_1543_, 1, v_e_1527_);
lean_closure_set(v___f_1543_, 2, v_a_1542_);
v___x_1544_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_box(0), v___f_1543_, v___y_1529_, v___y_1530_);
if (lean_obj_tag(v___x_1544_) == 0)
{
lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1551_; 
v_isSharedCheck_1551_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1551_ == 0)
{
lean_object* v_unused_1552_; 
v_unused_1552_ = lean_ctor_get(v___x_1544_, 0);
lean_dec(v_unused_1552_);
v___x_1546_ = v___x_1544_;
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
else
{
lean_dec(v___x_1544_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1549_; 
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 0, v_a_1542_);
v___x_1549_ = v___x_1546_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_a_1542_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1560_; 
lean_dec(v_a_1542_);
v_a_1553_ = lean_ctor_get(v___x_1544_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1555_ = v___x_1544_;
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v___x_1544_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1556_ == 0)
{
v___x_1558_ = v___x_1555_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_a_1553_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
}
else
{
lean_dec_ref(v_e_1527_);
return v___x_1541_;
}
}
else
{
lean_object* v_val_1561_; lean_object* v___x_1563_; 
lean_dec_ref(v_e_1527_);
lean_dec_ref(v_post_1526_);
lean_dec_ref(v_pre_1525_);
v_val_1561_ = lean_ctor_get(v___x_1538_, 0);
lean_inc(v_val_1561_);
lean_dec_ref_known(v___x_1538_, 1);
if (v_isShared_1537_ == 0)
{
lean_ctor_set(v___x_1536_, 0, v_val_1561_);
v___x_1563_ = v___x_1536_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_val_1561_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
}
else
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1573_; 
lean_dec_ref(v_e_1527_);
lean_dec_ref(v_post_1526_);
lean_dec_ref(v_pre_1525_);
v_a_1566_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1568_ = v___x_1533_;
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v___x_1533_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1571_; 
if (v_isShared_1569_ == 0)
{
v___x_1571_ = v___x_1568_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_a_1566_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
return v___x_1571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(lean_object* v_pre_1574_, lean_object* v_post_1575_, lean_object* v_e_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_){
_start:
{
lean_object* v___x_1581_; 
lean_inc_ref(v_post_1575_);
lean_inc(v___y_1579_);
lean_inc_ref(v___y_1578_);
lean_inc_ref(v_e_1576_);
v___x_1581_ = lean_apply_4(v_post_1575_, v_e_1576_, v___y_1578_, v___y_1579_, lean_box(0));
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1600_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1584_ = v___x_1581_;
v_isShared_1585_ = v_isSharedCheck_1600_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1581_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1600_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
switch(lean_obj_tag(v_a_1582_))
{
case 0:
{
lean_object* v_e_1586_; lean_object* v___x_1588_; 
lean_dec_ref(v_e_1576_);
lean_dec_ref(v_post_1575_);
lean_dec_ref(v_pre_1574_);
v_e_1586_ = lean_ctor_get(v_a_1582_, 0);
lean_inc_ref(v_e_1586_);
lean_dec_ref_known(v_a_1582_, 1);
if (v_isShared_1585_ == 0)
{
lean_ctor_set(v___x_1584_, 0, v_e_1586_);
v___x_1588_ = v___x_1584_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_e_1586_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
case 1:
{
lean_object* v_e_1590_; lean_object* v___x_1591_; 
lean_del_object(v___x_1584_);
lean_dec_ref(v_e_1576_);
v_e_1590_ = lean_ctor_get(v_a_1582_, 0);
lean_inc_ref(v_e_1590_);
lean_dec_ref_known(v_a_1582_, 1);
v___x_1591_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1574_, v_post_1575_, v_e_1590_, v___y_1577_, v___y_1578_, v___y_1579_);
return v___x_1591_;
}
default: 
{
lean_object* v_e_x3f_1592_; 
lean_dec_ref(v_post_1575_);
lean_dec_ref(v_pre_1574_);
v_e_x3f_1592_ = lean_ctor_get(v_a_1582_, 0);
lean_inc(v_e_x3f_1592_);
lean_dec_ref_known(v_a_1582_, 1);
if (lean_obj_tag(v_e_x3f_1592_) == 0)
{
lean_object* v___x_1594_; 
if (v_isShared_1585_ == 0)
{
lean_ctor_set(v___x_1584_, 0, v_e_1576_);
v___x_1594_ = v___x_1584_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v_e_1576_);
v___x_1594_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
return v___x_1594_;
}
}
else
{
lean_object* v_val_1596_; lean_object* v___x_1598_; 
lean_dec_ref(v_e_1576_);
v_val_1596_ = lean_ctor_get(v_e_x3f_1592_, 0);
lean_inc(v_val_1596_);
lean_dec_ref_known(v_e_x3f_1592_, 1);
if (v_isShared_1585_ == 0)
{
lean_ctor_set(v___x_1584_, 0, v_val_1596_);
v___x_1598_ = v___x_1584_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v_val_1596_);
v___x_1598_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
return v___x_1598_;
}
}
}
}
}
}
else
{
lean_object* v_a_1601_; lean_object* v___x_1603_; uint8_t v_isShared_1604_; uint8_t v_isSharedCheck_1608_; 
lean_dec_ref(v_e_1576_);
lean_dec_ref(v_post_1575_);
lean_dec_ref(v_pre_1574_);
v_a_1601_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1608_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1608_ == 0)
{
v___x_1603_ = v___x_1581_;
v_isShared_1604_ = v_isSharedCheck_1608_;
goto v_resetjp_1602_;
}
else
{
lean_inc(v_a_1601_);
lean_dec(v___x_1581_);
v___x_1603_ = lean_box(0);
v_isShared_1604_ = v_isSharedCheck_1608_;
goto v_resetjp_1602_;
}
v_resetjp_1602_:
{
lean_object* v___x_1606_; 
if (v_isShared_1604_ == 0)
{
v___x_1606_ = v___x_1603_;
goto v_reusejp_1605_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v_a_1601_);
v___x_1606_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1605_;
}
v_reusejp_1605_:
{
return v___x_1606_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_1609_, lean_object* v_post_1610_, lean_object* v_e_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1609_, v_post_1610_, v_e_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
lean_dec(v___y_1614_);
lean_dec_ref(v___y_1613_);
lean_dec(v___y_1612_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_1617_, lean_object* v_post_1618_, lean_object* v_sz_1619_, lean_object* v_i_1620_, lean_object* v_bs_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
size_t v_sz_boxed_1626_; size_t v_i_boxed_1627_; lean_object* v_res_1628_; 
v_sz_boxed_1626_ = lean_unbox_usize(v_sz_1619_);
lean_dec(v_sz_1619_);
v_i_boxed_1627_ = lean_unbox_usize(v_i_1620_);
lean_dec(v_i_1620_);
v_res_1628_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(v_pre_1617_, v_post_1618_, v_sz_boxed_1626_, v_i_boxed_1627_, v_bs_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
lean_dec(v___y_1624_);
lean_dec_ref(v___y_1623_);
lean_dec(v___y_1622_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4___boxed(lean_object* v_pre_1629_, lean_object* v_post_1630_, lean_object* v_x_1631_, lean_object* v_x_1632_, lean_object* v_x_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_){
_start:
{
lean_object* v_res_1638_; 
v_res_1638_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(v_pre_1629_, v_post_1630_, v_x_1631_, v_x_1632_, v_x_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
lean_dec(v___y_1636_);
lean_dec_ref(v___y_1635_);
lean_dec(v___y_1634_);
return v_res_1638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___boxed(lean_object* v_pre_1639_, lean_object* v_post_1640_, lean_object* v_e_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_){
_start:
{
lean_object* v_res_1646_; 
v_res_1646_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1639_, v_post_1640_, v_e_1641_, v___y_1642_, v___y_1643_, v___y_1644_);
lean_dec(v___y_1644_);
lean_dec_ref(v___y_1643_);
lean_dec(v___y_1642_);
return v_res_1646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_object* v_00_u03b1_1647_, lean_object* v_x_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_){
_start:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___x_1652_ = lean_apply_1(v_x_1648_, lean_box(0));
v___x_1653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1652_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0___boxed(lean_object* v_00_u03b1_1654_, lean_object* v_x_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(v_00_u03b1_1654_, v_x_1655_, v___y_1656_, v___y_1657_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1656_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(lean_object* v_input_1660_, lean_object* v_pre_1661_, lean_object* v_post_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_){
_start:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v_a_1668_; lean_object* v___x_1669_; 
v___x_1666_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_1667_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_box(0), v___x_1666_, v___y_1663_, v___y_1664_);
v_a_1668_ = lean_ctor_get(v___x_1667_, 0);
lean_inc(v_a_1668_);
lean_dec_ref(v___x_1667_);
v___x_1669_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1661_, v_post_1662_, v_input_1660_, v_a_1668_, v___y_1663_, v___y_1664_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1679_; 
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
lean_inc(v_a_1670_);
lean_dec_ref_known(v___x_1669_, 1);
v___x_1671_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1671_, 0, lean_box(0));
lean_closure_set(v___x_1671_, 1, lean_box(0));
lean_closure_set(v___x_1671_, 2, v_a_1668_);
v___x_1672_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_box(0), v___x_1671_, v___y_1663_, v___y_1664_);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1679_ == 0)
{
lean_object* v_unused_1680_; 
v_unused_1680_ = lean_ctor_get(v___x_1672_, 0);
lean_dec(v_unused_1680_);
v___x_1674_ = v___x_1672_;
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
else
{
lean_dec(v___x_1672_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v___x_1677_; 
if (v_isShared_1675_ == 0)
{
lean_ctor_set(v___x_1674_, 0, v_a_1670_);
v___x_1677_ = v___x_1674_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_a_1670_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
}
else
{
lean_dec(v_a_1668_);
return v___x_1669_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___boxed(lean_object* v_input_1681_, lean_object* v_pre_1682_, lean_object* v_post_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_){
_start:
{
lean_object* v_res_1687_; 
v_res_1687_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_input_1681_, v_pre_1682_, v_post_1683_, v___y_1684_, v___y_1685_);
lean_dec(v___y_1685_);
lean_dec_ref(v___y_1684_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce(lean_object* v_e_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v___f_1694_; lean_object* v___f_1695_; lean_object* v___x_1696_; 
v___f_1694_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__0));
v___f_1695_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__1));
v___x_1696_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_1690_, v___f_1694_, v___f_1695_, v___y_1691_, v___y_1692_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___boxed(lean_object* v_e_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_){
_start:
{
lean_object* v_res_1701_; 
v_res_1701_ = l_Lean_Core_betaReduce(v_e_1697_, v___y_1698_, v___y_1699_);
lean_dec(v___y_1699_);
lean_dec_ref(v___y_1698_);
return v_res_1701_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1702_, lean_object* v_m_1703_, lean_object* v_a_1704_){
_start:
{
lean_object* v___x_1705_; 
v___x_1705_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_m_1703_, v_a_1704_);
return v___x_1705_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1706_, lean_object* v_m_1707_, lean_object* v_a_1708_){
_start:
{
lean_object* v_res_1709_; 
v_res_1709_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3(v_00_u03b2_1706_, v_m_1707_, v_a_1708_);
lean_dec_ref(v_a_1708_);
lean_dec_ref(v_m_1707_);
return v_res_1709_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_1710_, lean_object* v_ref_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_){
_start:
{
lean_object* v___x_1715_; 
v___x_1715_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1711_);
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1716_, lean_object* v_ref_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_1716_, v_ref_1717_, v___y_1718_, v___y_1719_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8(lean_object* v_00_u03b1_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_){
_start:
{
lean_object* v___x_1726_; 
v___x_1726_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg();
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___boxed(lean_object* v_00_u03b1_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8(v_00_u03b1_1727_, v___y_1728_, v___y_1729_);
lean_dec(v___y_1729_);
lean_dec_ref(v___y_1728_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_1732_, lean_object* v_x_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_){
_start:
{
lean_object* v___x_1738_; 
v___x_1738_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(v_x_1733_, v___y_1734_, v___y_1735_, v___y_1736_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_1739_, lean_object* v_x_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
lean_object* v_res_1745_; 
v_res_1745_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5(v_00_u03b1_1739_, v_x_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
lean_dec(v___y_1741_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6(lean_object* v_00_u03b2_1746_, lean_object* v_m_1747_, lean_object* v_a_1748_, lean_object* v_b_1749_){
_start:
{
lean_object* v___x_1750_; 
v___x_1750_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(v_m_1747_, v_a_1748_, v_b_1749_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4(lean_object* v_00_u03b2_1751_, lean_object* v_a_1752_, lean_object* v_x_1753_){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1752_, v_x_1753_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___boxed(lean_object* v_00_u03b2_1755_, lean_object* v_a_1756_, lean_object* v_x_1757_){
_start:
{
lean_object* v_res_1758_; 
v_res_1758_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4(v_00_u03b2_1755_, v_a_1756_, v_x_1757_);
lean_dec(v_x_1757_);
lean_dec_ref(v_a_1756_);
return v_res_1758_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10(lean_object* v_00_u03b2_1759_, lean_object* v_a_1760_, lean_object* v_x_1761_){
_start:
{
uint8_t v___x_1762_; 
v___x_1762_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(v_a_1760_, v_x_1761_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___boxed(lean_object* v_00_u03b2_1763_, lean_object* v_a_1764_, lean_object* v_x_1765_){
_start:
{
uint8_t v_res_1766_; lean_object* v_r_1767_; 
v_res_1766_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10(v_00_u03b2_1763_, v_a_1764_, v_x_1765_);
lean_dec(v_x_1765_);
lean_dec_ref(v_a_1764_);
v_r_1767_ = lean_box(v_res_1766_);
return v_r_1767_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11(lean_object* v_00_u03b2_1768_, lean_object* v_data_1769_){
_start:
{
lean_object* v___x_1770_; 
v___x_1770_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(v_data_1769_);
return v___x_1770_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12(lean_object* v_00_u03b2_1771_, lean_object* v_a_1772_, lean_object* v_b_1773_, lean_object* v_x_1774_){
_start:
{
lean_object* v___x_1775_; 
v___x_1775_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12___redArg(v_a_1772_, v_b_1773_, v_x_1774_);
return v___x_1775_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object* v_00_u03b2_1776_, lean_object* v_i_1777_, lean_object* v_source_1778_, lean_object* v_target_1779_){
_start:
{
lean_object* v___x_1780_; 
v___x_1780_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v_i_1777_, v_source_1778_, v_target_1779_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object* v_00_u03b2_1781_, lean_object* v_x_1782_, lean_object* v_x_1783_){
_start:
{
lean_object* v___x_1784_; 
v___x_1784_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_x_1782_, v_x_1783_);
return v___x_1784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__0(lean_object* v_toApplicative_1785_, lean_object* v_a_1786_){
_start:
{
lean_object* v_toPure_1787_; lean_object* v___x_1788_; 
v_toPure_1787_ = lean_ctor_get(v_toApplicative_1785_, 1);
lean_inc(v_toPure_1787_);
lean_dec_ref(v_toApplicative_1785_);
v___x_1788_ = lean_apply_2(v_toPure_1787_, lean_box(0), v_a_1786_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1(lean_object* v___x_1789_, lean_object* v___x_1790_, lean_object* v_declName_1791_, lean_object* v_a_1792_, lean_object* v___f_1793_, uint8_t v_nondep_1794_, lean_object* v___y_1795_, lean_object* v_a_1796_){
_start:
{
uint8_t v___x_1797_; lean_object* v___x_6450__overap_1798_; lean_object* v___x_1799_; 
v___x_1797_ = 0;
v___x_6450__overap_1798_ = l_Lean_Meta_withLetDecl___redArg(v___x_1789_, v___x_1790_, v_declName_1791_, v_a_1792_, v_a_1796_, v___f_1793_, v_nondep_1794_, v___x_1797_);
lean_inc(v___y_1795_);
v___x_1799_ = lean_apply_1(v___x_6450__overap_1798_, v___y_1795_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1___boxed(lean_object* v___x_1800_, lean_object* v___x_1801_, lean_object* v_declName_1802_, lean_object* v_a_1803_, lean_object* v___f_1804_, lean_object* v_nondep_1805_, lean_object* v___y_1806_, lean_object* v_a_1807_){
_start:
{
uint8_t v_nondep_6566__boxed_1808_; lean_object* v_res_1809_; 
v_nondep_6566__boxed_1808_ = lean_unbox(v_nondep_1805_);
v_res_1809_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1(v___x_1800_, v___x_1801_, v_declName_1802_, v_a_1803_, v___f_1804_, v_nondep_6566__boxed_1808_, v___y_1806_, v_a_1807_);
lean_dec(v___y_1806_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4(lean_object* v_fvars_1810_, uint8_t v_usedLetOnly_1811_, lean_object* v_inst_1812_, lean_object* v_toBind_1813_, lean_object* v___f_1814_, lean_object* v_a_1815_){
_start:
{
uint8_t v___x_1816_; uint8_t v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1816_ = 0;
v___x_1817_ = 1;
v___x_1818_ = lean_box(v_usedLetOnly_1811_);
v___x_1819_ = lean_box(v___x_1816_);
v___x_1820_ = lean_box(v___x_1817_);
v___x_1821_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLetFVars___boxed), 10, 5);
lean_closure_set(v___x_1821_, 0, v_fvars_1810_);
lean_closure_set(v___x_1821_, 1, v_a_1815_);
lean_closure_set(v___x_1821_, 2, v___x_1818_);
lean_closure_set(v___x_1821_, 3, v___x_1819_);
lean_closure_set(v___x_1821_, 4, v___x_1820_);
v___x_1822_ = lean_apply_2(v_inst_1812_, lean_box(0), v___x_1821_);
v___x_1823_ = lean_apply_4(v_toBind_1813_, lean_box(0), lean_box(0), v___x_1822_, v___f_1814_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4___boxed(lean_object* v_fvars_1824_, lean_object* v_usedLetOnly_1825_, lean_object* v_inst_1826_, lean_object* v_toBind_1827_, lean_object* v___f_1828_, lean_object* v_a_1829_){
_start:
{
uint8_t v_usedLetOnly_boxed_1830_; lean_object* v_res_1831_; 
v_usedLetOnly_boxed_1830_ = lean_unbox(v_usedLetOnly_1825_);
v_res_1831_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4(v_fvars_1824_, v_usedLetOnly_boxed_1830_, v_inst_1826_, v_toBind_1827_, v___f_1828_, v_a_1829_);
return v_res_1831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3(lean_object* v_fvars_1832_, uint8_t v_usedLetOnly_1833_, lean_object* v_inst_1834_, lean_object* v_toBind_1835_, lean_object* v___f_1836_, lean_object* v_a_1837_){
_start:
{
uint8_t v___x_1838_; uint8_t v___x_1839_; uint8_t v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1838_ = 0;
v___x_1839_ = 1;
v___x_1840_ = 1;
v___x_1841_ = lean_box(v___x_1838_);
v___x_1842_ = lean_box(v_usedLetOnly_1833_);
v___x_1843_ = lean_box(v___x_1838_);
v___x_1844_ = lean_box(v___x_1839_);
v___x_1845_ = lean_box(v___x_1840_);
v___x_1846_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1846_, 0, v_fvars_1832_);
lean_closure_set(v___x_1846_, 1, v_a_1837_);
lean_closure_set(v___x_1846_, 2, v___x_1841_);
lean_closure_set(v___x_1846_, 3, v___x_1842_);
lean_closure_set(v___x_1846_, 4, v___x_1843_);
lean_closure_set(v___x_1846_, 5, v___x_1844_);
lean_closure_set(v___x_1846_, 6, v___x_1845_);
v___x_1847_ = lean_apply_2(v_inst_1834_, lean_box(0), v___x_1846_);
v___x_1848_ = lean_apply_4(v_toBind_1835_, lean_box(0), lean_box(0), v___x_1847_, v___f_1836_);
return v___x_1848_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3___boxed(lean_object* v_fvars_1849_, lean_object* v_usedLetOnly_1850_, lean_object* v_inst_1851_, lean_object* v_toBind_1852_, lean_object* v___f_1853_, lean_object* v_a_1854_){
_start:
{
uint8_t v_usedLetOnly_boxed_1855_; lean_object* v_res_1856_; 
v_usedLetOnly_boxed_1855_ = lean_unbox(v_usedLetOnly_1850_);
v_res_1856_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3(v_fvars_1849_, v_usedLetOnly_boxed_1855_, v_inst_1851_, v_toBind_1852_, v___f_1853_, v_a_1854_);
return v_res_1856_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1(lean_object* v___x_1857_, lean_object* v___x_1858_, lean_object* v_binderName_1859_, uint8_t v_binderInfo_1860_, lean_object* v___f_1861_, lean_object* v___y_1862_, lean_object* v_a_1863_){
_start:
{
uint8_t v___x_1864_; lean_object* v___x_6512__overap_1865_; lean_object* v___x_1866_; 
v___x_1864_ = 0;
v___x_6512__overap_1865_ = l_Lean_Meta_withLocalDecl___redArg(v___x_1857_, v___x_1858_, v_binderName_1859_, v_binderInfo_1860_, v_a_1863_, v___f_1861_, v___x_1864_);
lean_inc(v___y_1862_);
v___x_1866_ = lean_apply_1(v___x_6512__overap_1865_, v___y_1862_);
return v___x_1866_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed(lean_object* v___x_1867_, lean_object* v___x_1868_, lean_object* v_binderName_1869_, lean_object* v_binderInfo_1870_, lean_object* v___f_1871_, lean_object* v___y_1872_, lean_object* v_a_1873_){
_start:
{
uint8_t v_binderInfo_6637__boxed_1874_; lean_object* v_res_1875_; 
v_binderInfo_6637__boxed_1874_ = lean_unbox(v_binderInfo_1870_);
v_res_1875_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1(v___x_1867_, v___x_1868_, v_binderName_1869_, v_binderInfo_6637__boxed_1874_, v___f_1871_, v___y_1872_, v_a_1873_);
lean_dec(v___y_1872_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3(lean_object* v_fvars_1876_, uint8_t v_usedLetOnly_1877_, lean_object* v_inst_1878_, lean_object* v_toBind_1879_, lean_object* v___f_1880_, lean_object* v_a_1881_){
_start:
{
uint8_t v___x_1882_; uint8_t v___x_1883_; uint8_t v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1882_ = 0;
v___x_1883_ = 1;
v___x_1884_ = 1;
v___x_1885_ = lean_box(v___x_1882_);
v___x_1886_ = lean_box(v_usedLetOnly_1877_);
v___x_1887_ = lean_box(v___x_1883_);
v___x_1888_ = lean_box(v___x_1884_);
v___x_1889_ = lean_alloc_closure((void*)(l_Lean_Meta_mkForallFVars___boxed), 11, 6);
lean_closure_set(v___x_1889_, 0, v_fvars_1876_);
lean_closure_set(v___x_1889_, 1, v_a_1881_);
lean_closure_set(v___x_1889_, 2, v___x_1885_);
lean_closure_set(v___x_1889_, 3, v___x_1886_);
lean_closure_set(v___x_1889_, 4, v___x_1887_);
lean_closure_set(v___x_1889_, 5, v___x_1888_);
v___x_1890_ = lean_apply_2(v_inst_1878_, lean_box(0), v___x_1889_);
v___x_1891_ = lean_apply_4(v_toBind_1879_, lean_box(0), lean_box(0), v___x_1890_, v___f_1880_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3___boxed(lean_object* v_fvars_1892_, lean_object* v_usedLetOnly_1893_, lean_object* v_inst_1894_, lean_object* v_toBind_1895_, lean_object* v___f_1896_, lean_object* v_a_1897_){
_start:
{
uint8_t v_usedLetOnly_boxed_1898_; lean_object* v_res_1899_; 
v_usedLetOnly_boxed_1898_ = lean_unbox(v_usedLetOnly_1893_);
v_res_1899_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3(v_fvars_1892_, v_usedLetOnly_boxed_1898_, v_inst_1894_, v_toBind_1895_, v___f_1896_, v_a_1897_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8(lean_object* v___x_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_){
_start:
{
lean_object* v___x_1906_; 
v___x_1906_ = l_Lean_Core_checkSystem(v___x_1900_, v___y_1903_, v___y_1904_);
return v___x_1906_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8___boxed(lean_object* v___x_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_){
_start:
{
lean_object* v_res_1913_; 
v_res_1913_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8(v___x_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
lean_dec(v___y_1911_);
lean_dec_ref(v___y_1910_);
lean_dec(v___y_1909_);
lean_dec_ref(v___y_1908_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7(lean_object* v___f_1914_, lean_object* v___y_1915_, lean_object* v_a_1916_){
_start:
{
lean_object* v___x_1917_; 
lean_inc(v___y_1915_);
v___x_1917_ = lean_apply_2(v___f_1914_, v_a_1916_, v___y_1915_);
return v___x_1917_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7___boxed(lean_object* v___f_1918_, lean_object* v___y_1919_, lean_object* v_a_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7(v___f_1918_, v___y_1919_, v_a_1920_);
lean_dec(v___y_1919_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1(lean_object* v_toApplicative_1922_, lean_object* v_acc_1923_, lean_object* v_next_1924_, lean_object* v_a_1925_){
_start:
{
lean_object* v_toPure_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v_toPure_1926_ = lean_ctor_get(v_toApplicative_1922_, 1);
lean_inc(v_toPure_1926_);
lean_dec_ref(v_toApplicative_1922_);
v___x_1927_ = lean_array_fset(v_acc_1923_, v_next_1924_, v_a_1925_);
v___x_1928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1928_, 0, v___x_1927_);
v___x_1929_ = lean_apply_2(v_toPure_1926_, lean_box(0), v___x_1928_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed(lean_object* v_toApplicative_1930_, lean_object* v_acc_1931_, lean_object* v_next_1932_, lean_object* v_a_1933_){
_start:
{
lean_object* v_res_1934_; 
v_res_1934_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1(v_toApplicative_1930_, v_acc_1931_, v_next_1932_, v_a_1933_);
lean_dec(v_next_1932_);
return v_res_1934_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2(lean_object* v_toApplicative_1935_, lean_object* v_next_1936_, lean_object* v_G_1937_, lean_object* v___y_1938_, lean_object* v_a_1939_){
_start:
{
if (lean_obj_tag(v_a_1939_) == 0)
{
lean_object* v_a_1940_; lean_object* v_toPure_1941_; lean_object* v___x_1942_; 
lean_dec(v_G_1937_);
v_a_1940_ = lean_ctor_get(v_a_1939_, 0);
lean_inc(v_a_1940_);
lean_dec_ref_known(v_a_1939_, 1);
v_toPure_1941_ = lean_ctor_get(v_toApplicative_1935_, 1);
lean_inc(v_toPure_1941_);
lean_dec_ref(v_toApplicative_1935_);
v___x_1942_ = lean_apply_2(v_toPure_1941_, lean_box(0), v_a_1940_);
return v___x_1942_;
}
else
{
lean_object* v_a_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; 
lean_dec_ref(v_toApplicative_1935_);
v_a_1943_ = lean_ctor_get(v_a_1939_, 0);
lean_inc(v_a_1943_);
lean_dec_ref_known(v_a_1939_, 1);
v___x_1944_ = lean_unsigned_to_nat(1u);
v___x_1945_ = lean_nat_add(v_next_1936_, v___x_1944_);
lean_inc(v___y_1938_);
v___x_1946_ = lean_apply_5(v_G_1937_, v___x_1945_, v_a_1943_, lean_box(0), lean_box(0), v___y_1938_);
return v___x_1946_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2___boxed(lean_object* v_toApplicative_1947_, lean_object* v_next_1948_, lean_object* v_G_1949_, lean_object* v___y_1950_, lean_object* v_a_1951_){
_start:
{
lean_object* v_res_1952_; 
v_res_1952_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2(v_toApplicative_1947_, v_next_1948_, v_G_1949_, v___y_1950_, v_a_1951_);
lean_dec(v___y_1950_);
lean_dec(v_next_1948_);
return v_res_1952_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5(lean_object* v_f_1953_, lean_object* v_inst_1954_, lean_object* v_inst_1955_, lean_object* v_inst_1956_, lean_object* v_pre_1957_, lean_object* v_post_1958_, uint8_t v_usedLetOnly_1959_, uint8_t v_skipConstInApp_1960_, uint8_t v_skipInstances_1961_, lean_object* v_x_1962_, lean_object* v_x_1963_, lean_object* v___y_1964_, lean_object* v_a_1965_){
_start:
{
lean_object* v___x_1966_; lean_object* v___x_1967_; 
v___x_1966_ = l_Lean_mkAppN(v_f_1953_, v_a_1965_);
v___x_1967_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_1954_, v_inst_1955_, v_inst_1956_, v_pre_1957_, v_post_1958_, v_usedLetOnly_1959_, v_skipConstInApp_1960_, v_skipInstances_1961_, v_x_1962_, v_x_1963_, v___x_1966_, v___y_1964_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed(lean_object* v_f_1968_, lean_object* v_inst_1969_, lean_object* v_inst_1970_, lean_object* v_inst_1971_, lean_object* v_pre_1972_, lean_object* v_post_1973_, lean_object* v_usedLetOnly_1974_, lean_object* v_skipConstInApp_1975_, lean_object* v_skipInstances_1976_, lean_object* v_x_1977_, lean_object* v_x_1978_, lean_object* v___y_1979_, lean_object* v_a_1980_){
_start:
{
uint8_t v_usedLetOnly_boxed_1981_; uint8_t v_skipConstInApp_boxed_1982_; uint8_t v_skipInstances_boxed_1983_; lean_object* v_res_1984_; 
v_usedLetOnly_boxed_1981_ = lean_unbox(v_usedLetOnly_1974_);
v_skipConstInApp_boxed_1982_ = lean_unbox(v_skipConstInApp_1975_);
v_skipInstances_boxed_1983_ = lean_unbox(v_skipInstances_1976_);
v_res_1984_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5(v_f_1968_, v_inst_1969_, v_inst_1970_, v_inst_1971_, v_pre_1972_, v_post_1973_, v_usedLetOnly_boxed_1981_, v_skipConstInApp_boxed_1982_, v_skipInstances_boxed_1983_, v_x_1977_, v_x_1978_, v___y_1979_, v_a_1980_);
lean_dec_ref(v_a_1980_);
lean_dec(v___y_1979_);
return v_res_1984_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___boxed(lean_object* v_inst_1985_, lean_object* v_inst_1986_, lean_object* v_inst_1987_, lean_object* v_pre_1988_, lean_object* v_post_1989_, lean_object* v_usedLetOnly_1990_, lean_object* v_skipConstInApp_1991_, lean_object* v_skipInstances_1992_, lean_object* v_x_1993_, lean_object* v_x_1994_, lean_object* v_e_1995_, lean_object* v___y_1996_){
_start:
{
uint8_t v_usedLetOnly_boxed_1997_; uint8_t v_skipConstInApp_boxed_1998_; uint8_t v_skipInstances_boxed_1999_; lean_object* v_res_2000_; 
v_usedLetOnly_boxed_1997_ = lean_unbox(v_usedLetOnly_1990_);
v_skipConstInApp_boxed_1998_ = lean_unbox(v_skipConstInApp_1991_);
v_skipInstances_boxed_1999_ = lean_unbox(v_skipInstances_1992_);
v_res_2000_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_1985_, v_inst_1986_, v_inst_1987_, v_pre_1988_, v_post_1989_, v_usedLetOnly_boxed_1997_, v_skipConstInApp_boxed_1998_, v_skipInstances_boxed_1999_, v_x_1993_, v_x_1994_, v_e_1995_, v___y_1996_);
lean_dec(v___y_1996_);
return v_res_2000_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4(lean_object* v___x_2001_, lean_object* v_toApplicative_2002_, lean_object* v_paramInfo_2003_, lean_object* v_inst_2004_, lean_object* v_inst_2005_, lean_object* v_inst_2006_, lean_object* v_pre_2007_, lean_object* v_post_2008_, uint8_t v_usedLetOnly_2009_, uint8_t v_skipConstInApp_2010_, uint8_t v_skipInstances_2011_, lean_object* v_x_2012_, lean_object* v_x_2013_, lean_object* v_toBind_2014_, lean_object* v___f_2015_, lean_object* v_next_2016_, lean_object* v_acc_2017_, lean_object* v_h_2018_, lean_object* v_G_2019_, lean_object* v___y_2020_){
_start:
{
uint8_t v___x_2021_; 
v___x_2021_ = lean_nat_dec_lt(v_next_2016_, v___x_2001_);
if (v___x_2021_ == 0)
{
lean_object* v_toPure_2022_; lean_object* v___x_2023_; 
lean_dec(v_G_2019_);
lean_dec(v_next_2016_);
lean_dec(v___f_2015_);
lean_dec(v_toBind_2014_);
lean_dec(v_x_2013_);
lean_dec(v_post_2008_);
lean_dec(v_pre_2007_);
lean_dec_ref(v_inst_2006_);
lean_dec(v_inst_2005_);
lean_dec_ref(v_inst_2004_);
v_toPure_2022_ = lean_ctor_get(v_toApplicative_2002_, 1);
lean_inc(v_toPure_2022_);
lean_dec_ref(v_toApplicative_2002_);
v___x_2023_ = lean_apply_2(v_toPure_2022_, lean_box(0), v_acc_2017_);
return v___x_2023_;
}
else
{
lean_object* v___f_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; uint8_t v___x_2027_; 
lean_inc(v___y_2020_);
lean_inc(v_next_2016_);
lean_inc_ref(v_toApplicative_2002_);
v___f_2024_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_2024_, 0, v_toApplicative_2002_);
lean_closure_set(v___f_2024_, 1, v_next_2016_);
lean_closure_set(v___f_2024_, 2, v_G_2019_);
lean_closure_set(v___f_2024_, 3, v___y_2020_);
v___x_2025_ = lean_array_fget_borrowed(v_acc_2017_, v_next_2016_);
v___x_2026_ = lean_array_get_size(v_paramInfo_2003_);
v___x_2027_ = lean_nat_dec_lt(v_next_2016_, v___x_2026_);
if (v___x_2027_ == 0)
{
lean_object* v___f_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; 
lean_inc(v___x_2025_);
v___f_2028_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2028_, 0, v_toApplicative_2002_);
lean_closure_set(v___f_2028_, 1, v_acc_2017_);
lean_closure_set(v___f_2028_, 2, v_next_2016_);
v___x_2029_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2004_, v_inst_2005_, v_inst_2006_, v_pre_2007_, v_post_2008_, v_usedLetOnly_2009_, v_skipConstInApp_2010_, v_skipInstances_2011_, v_x_2012_, v_x_2013_, v___x_2025_, v___y_2020_);
lean_inc_n(v_toBind_2014_, 2);
v___x_2030_ = lean_apply_4(v_toBind_2014_, lean_box(0), lean_box(0), v___x_2029_, v___f_2028_);
v___x_2031_ = lean_apply_4(v_toBind_2014_, lean_box(0), lean_box(0), v___x_2030_, v___f_2015_);
v___x_2032_ = lean_apply_4(v_toBind_2014_, lean_box(0), lean_box(0), v___x_2031_, v___f_2024_);
return v___x_2032_;
}
else
{
lean_object* v___x_2033_; uint8_t v_isInstance_2034_; 
v___x_2033_ = lean_array_fget_borrowed(v_paramInfo_2003_, v_next_2016_);
v_isInstance_2034_ = lean_ctor_get_uint8(v___x_2033_, sizeof(void*)*1 + 4);
if (v_isInstance_2034_ == 0)
{
lean_object* v___f_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
lean_inc(v___x_2025_);
v___f_2035_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2035_, 0, v_toApplicative_2002_);
lean_closure_set(v___f_2035_, 1, v_acc_2017_);
lean_closure_set(v___f_2035_, 2, v_next_2016_);
v___x_2036_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2004_, v_inst_2005_, v_inst_2006_, v_pre_2007_, v_post_2008_, v_usedLetOnly_2009_, v_skipConstInApp_2010_, v_skipInstances_2011_, v_x_2012_, v_x_2013_, v___x_2025_, v___y_2020_);
lean_inc_n(v_toBind_2014_, 2);
v___x_2037_ = lean_apply_4(v_toBind_2014_, lean_box(0), lean_box(0), v___x_2036_, v___f_2035_);
v___x_2038_ = lean_apply_4(v_toBind_2014_, lean_box(0), lean_box(0), v___x_2037_, v___f_2015_);
v___x_2039_ = lean_apply_4(v_toBind_2014_, lean_box(0), lean_box(0), v___x_2038_, v___f_2024_);
return v___x_2039_;
}
else
{
lean_object* v_toPure_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; 
lean_dec(v_next_2016_);
lean_dec(v_x_2013_);
lean_dec(v_post_2008_);
lean_dec(v_pre_2007_);
lean_dec_ref(v_inst_2006_);
lean_dec(v_inst_2005_);
lean_dec_ref(v_inst_2004_);
v_toPure_2040_ = lean_ctor_get(v_toApplicative_2002_, 1);
lean_inc(v_toPure_2040_);
lean_dec_ref(v_toApplicative_2002_);
v___x_2041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2041_, 0, v_acc_2017_);
v___x_2042_ = lean_apply_2(v_toPure_2040_, lean_box(0), v___x_2041_);
lean_inc(v_toBind_2014_);
v___x_2043_ = lean_apply_4(v_toBind_2014_, lean_box(0), lean_box(0), v___x_2042_, v___f_2015_);
v___x_2044_ = lean_apply_4(v_toBind_2014_, lean_box(0), lean_box(0), v___x_2043_, v___f_2024_);
return v___x_2044_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4___boxed(lean_object** _args){
lean_object* v___x_2045_ = _args[0];
lean_object* v_toApplicative_2046_ = _args[1];
lean_object* v_paramInfo_2047_ = _args[2];
lean_object* v_inst_2048_ = _args[3];
lean_object* v_inst_2049_ = _args[4];
lean_object* v_inst_2050_ = _args[5];
lean_object* v_pre_2051_ = _args[6];
lean_object* v_post_2052_ = _args[7];
lean_object* v_usedLetOnly_2053_ = _args[8];
lean_object* v_skipConstInApp_2054_ = _args[9];
lean_object* v_skipInstances_2055_ = _args[10];
lean_object* v_x_2056_ = _args[11];
lean_object* v_x_2057_ = _args[12];
lean_object* v_toBind_2058_ = _args[13];
lean_object* v___f_2059_ = _args[14];
lean_object* v_next_2060_ = _args[15];
lean_object* v_acc_2061_ = _args[16];
lean_object* v_h_2062_ = _args[17];
lean_object* v_G_2063_ = _args[18];
lean_object* v___y_2064_ = _args[19];
_start:
{
uint8_t v_usedLetOnly_boxed_2065_; uint8_t v_skipConstInApp_boxed_2066_; uint8_t v_skipInstances_boxed_2067_; lean_object* v_res_2068_; 
v_usedLetOnly_boxed_2065_ = lean_unbox(v_usedLetOnly_2053_);
v_skipConstInApp_boxed_2066_ = lean_unbox(v_skipConstInApp_2054_);
v_skipInstances_boxed_2067_ = lean_unbox(v_skipInstances_2055_);
v_res_2068_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4(v___x_2045_, v_toApplicative_2046_, v_paramInfo_2047_, v_inst_2048_, v_inst_2049_, v_inst_2050_, v_pre_2051_, v_post_2052_, v_usedLetOnly_boxed_2065_, v_skipConstInApp_boxed_2066_, v_skipInstances_boxed_2067_, v_x_2056_, v_x_2057_, v_toBind_2058_, v___f_2059_, v_next_2060_, v_acc_2061_, v_h_2062_, v_G_2063_, v___y_2064_);
lean_dec(v___y_2064_);
lean_dec_ref(v_paramInfo_2047_);
lean_dec(v___x_2045_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3(lean_object* v___x_2069_, lean_object* v_toApplicative_2070_, lean_object* v_inst_2071_, lean_object* v_inst_2072_, lean_object* v_inst_2073_, lean_object* v_pre_2074_, lean_object* v_post_2075_, uint8_t v_usedLetOnly_2076_, uint8_t v_skipConstInApp_2077_, uint8_t v_skipInstances_2078_, lean_object* v_x_2079_, lean_object* v_x_2080_, lean_object* v_toBind_2081_, lean_object* v___f_2082_, lean_object* v_args_2083_, lean_object* v___y_2084_, lean_object* v___f_2085_, lean_object* v_a_2086_){
_start:
{
lean_object* v_paramInfo_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___f_2092_; lean_object* v___x_6264__overap_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v_paramInfo_2087_ = lean_ctor_get(v_a_2086_, 0);
lean_inc_ref(v_paramInfo_2087_);
lean_dec_ref(v_a_2086_);
v___x_2088_ = lean_unsigned_to_nat(0u);
v___x_2089_ = lean_box(v_usedLetOnly_2076_);
v___x_2090_ = lean_box(v_skipConstInApp_2077_);
v___x_2091_ = lean_box(v_skipInstances_2078_);
lean_inc(v_toBind_2081_);
v___f_2092_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4___boxed), 20, 15);
lean_closure_set(v___f_2092_, 0, v___x_2069_);
lean_closure_set(v___f_2092_, 1, v_toApplicative_2070_);
lean_closure_set(v___f_2092_, 2, v_paramInfo_2087_);
lean_closure_set(v___f_2092_, 3, v_inst_2071_);
lean_closure_set(v___f_2092_, 4, v_inst_2072_);
lean_closure_set(v___f_2092_, 5, v_inst_2073_);
lean_closure_set(v___f_2092_, 6, v_pre_2074_);
lean_closure_set(v___f_2092_, 7, v_post_2075_);
lean_closure_set(v___f_2092_, 8, v___x_2089_);
lean_closure_set(v___f_2092_, 9, v___x_2090_);
lean_closure_set(v___f_2092_, 10, v___x_2091_);
lean_closure_set(v___f_2092_, 11, v_x_2079_);
lean_closure_set(v___f_2092_, 12, v_x_2080_);
lean_closure_set(v___f_2092_, 13, v_toBind_2081_);
lean_closure_set(v___f_2092_, 14, v___f_2082_);
v___x_6264__overap_2093_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_2092_, v___x_2088_, v_args_2083_, lean_box(0));
lean_inc(v___y_2084_);
v___x_2094_ = lean_apply_1(v___x_6264__overap_2093_, v___y_2084_);
v___x_2095_ = lean_apply_4(v_toBind_2081_, lean_box(0), lean_box(0), v___x_2094_, v___f_2085_);
return v___x_2095_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3___boxed(lean_object** _args){
lean_object* v___x_2096_ = _args[0];
lean_object* v_toApplicative_2097_ = _args[1];
lean_object* v_inst_2098_ = _args[2];
lean_object* v_inst_2099_ = _args[3];
lean_object* v_inst_2100_ = _args[4];
lean_object* v_pre_2101_ = _args[5];
lean_object* v_post_2102_ = _args[6];
lean_object* v_usedLetOnly_2103_ = _args[7];
lean_object* v_skipConstInApp_2104_ = _args[8];
lean_object* v_skipInstances_2105_ = _args[9];
lean_object* v_x_2106_ = _args[10];
lean_object* v_x_2107_ = _args[11];
lean_object* v_toBind_2108_ = _args[12];
lean_object* v___f_2109_ = _args[13];
lean_object* v_args_2110_ = _args[14];
lean_object* v___y_2111_ = _args[15];
lean_object* v___f_2112_ = _args[16];
lean_object* v_a_2113_ = _args[17];
_start:
{
uint8_t v_usedLetOnly_boxed_2114_; uint8_t v_skipConstInApp_boxed_2115_; uint8_t v_skipInstances_boxed_2116_; lean_object* v_res_2117_; 
v_usedLetOnly_boxed_2114_ = lean_unbox(v_usedLetOnly_2103_);
v_skipConstInApp_boxed_2115_ = lean_unbox(v_skipConstInApp_2104_);
v_skipInstances_boxed_2116_ = lean_unbox(v_skipInstances_2105_);
v_res_2117_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3(v___x_2096_, v_toApplicative_2097_, v_inst_2098_, v_inst_2099_, v_inst_2100_, v_pre_2101_, v_post_2102_, v_usedLetOnly_boxed_2114_, v_skipConstInApp_boxed_2115_, v_skipInstances_boxed_2116_, v_x_2106_, v_x_2107_, v_toBind_2108_, v___f_2109_, v_args_2110_, v___y_2111_, v___f_2112_, v_a_2113_);
lean_dec(v___y_2111_);
return v_res_2117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6(uint8_t v_skipInstances_2118_, lean_object* v_inst_2119_, lean_object* v_inst_2120_, lean_object* v_inst_2121_, lean_object* v_pre_2122_, lean_object* v_post_2123_, uint8_t v_usedLetOnly_2124_, uint8_t v_skipConstInApp_2125_, lean_object* v_x_2126_, lean_object* v_x_2127_, lean_object* v_args_2128_, lean_object* v___x_2129_, lean_object* v_toBind_2130_, lean_object* v_toApplicative_2131_, lean_object* v___f_2132_, lean_object* v_f_2133_, lean_object* v___y_2134_){
_start:
{
if (v_skipInstances_2118_ == 0)
{
lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___f_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; size_t v_sz_2143_; size_t v___x_2144_; lean_object* v___x_6277__overap_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; 
lean_dec(v___f_2132_);
lean_dec_ref(v_toApplicative_2131_);
v___x_2135_ = lean_box(v_usedLetOnly_2124_);
v___x_2136_ = lean_box(v_skipConstInApp_2125_);
v___x_2137_ = lean_box(v_skipInstances_2118_);
lean_inc_n(v___y_2134_, 2);
lean_inc(v_x_2127_);
lean_inc(v_post_2123_);
lean_inc(v_pre_2122_);
lean_inc_ref(v_inst_2121_);
lean_inc(v_inst_2120_);
lean_inc_ref(v_inst_2119_);
v___f_2138_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed), 13, 12);
lean_closure_set(v___f_2138_, 0, v_f_2133_);
lean_closure_set(v___f_2138_, 1, v_inst_2119_);
lean_closure_set(v___f_2138_, 2, v_inst_2120_);
lean_closure_set(v___f_2138_, 3, v_inst_2121_);
lean_closure_set(v___f_2138_, 4, v_pre_2122_);
lean_closure_set(v___f_2138_, 5, v_post_2123_);
lean_closure_set(v___f_2138_, 6, v___x_2135_);
lean_closure_set(v___f_2138_, 7, v___x_2136_);
lean_closure_set(v___f_2138_, 8, v___x_2137_);
lean_closure_set(v___f_2138_, 9, v_x_2126_);
lean_closure_set(v___f_2138_, 10, v_x_2127_);
lean_closure_set(v___f_2138_, 11, v___y_2134_);
v___x_2139_ = lean_box(v_usedLetOnly_2124_);
v___x_2140_ = lean_box(v_skipConstInApp_2125_);
v___x_2141_ = lean_box(v_skipInstances_2118_);
v___x_2142_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___boxed), 12, 10);
lean_closure_set(v___x_2142_, 0, v_inst_2119_);
lean_closure_set(v___x_2142_, 1, v_inst_2120_);
lean_closure_set(v___x_2142_, 2, v_inst_2121_);
lean_closure_set(v___x_2142_, 3, v_pre_2122_);
lean_closure_set(v___x_2142_, 4, v_post_2123_);
lean_closure_set(v___x_2142_, 5, v___x_2139_);
lean_closure_set(v___x_2142_, 6, v___x_2140_);
lean_closure_set(v___x_2142_, 7, v___x_2141_);
lean_closure_set(v___x_2142_, 8, v_x_2126_);
lean_closure_set(v___x_2142_, 9, v_x_2127_);
v_sz_2143_ = lean_array_size(v_args_2128_);
v___x_2144_ = ((size_t)0ULL);
v___x_6277__overap_2145_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2129_, v___x_2142_, v_sz_2143_, v___x_2144_, v_args_2128_);
v___x_2146_ = lean_apply_1(v___x_6277__overap_2145_, v___y_2134_);
v___x_2147_ = lean_apply_4(v_toBind_2130_, lean_box(0), lean_box(0), v___x_2146_, v___f_2138_);
return v___x_2147_;
}
else
{
lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___f_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___f_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; 
lean_dec_ref(v___x_2129_);
v___x_2148_ = lean_box(v_usedLetOnly_2124_);
v___x_2149_ = lean_box(v_skipConstInApp_2125_);
v___x_2150_ = lean_box(v_skipInstances_2118_);
lean_inc_n(v___y_2134_, 2);
lean_inc(v_x_2127_);
lean_inc(v_post_2123_);
lean_inc(v_pre_2122_);
lean_inc_ref(v_inst_2121_);
lean_inc_n(v_inst_2120_, 2);
lean_inc_ref(v_inst_2119_);
lean_inc_ref(v_f_2133_);
v___f_2151_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed), 13, 12);
lean_closure_set(v___f_2151_, 0, v_f_2133_);
lean_closure_set(v___f_2151_, 1, v_inst_2119_);
lean_closure_set(v___f_2151_, 2, v_inst_2120_);
lean_closure_set(v___f_2151_, 3, v_inst_2121_);
lean_closure_set(v___f_2151_, 4, v_pre_2122_);
lean_closure_set(v___f_2151_, 5, v_post_2123_);
lean_closure_set(v___f_2151_, 6, v___x_2148_);
lean_closure_set(v___f_2151_, 7, v___x_2149_);
lean_closure_set(v___f_2151_, 8, v___x_2150_);
lean_closure_set(v___f_2151_, 9, v_x_2126_);
lean_closure_set(v___f_2151_, 10, v_x_2127_);
lean_closure_set(v___f_2151_, 11, v___y_2134_);
v___x_2152_ = lean_array_get_size(v_args_2128_);
v___x_2153_ = lean_box(v_usedLetOnly_2124_);
v___x_2154_ = lean_box(v_skipConstInApp_2125_);
v___x_2155_ = lean_box(v_skipInstances_2118_);
lean_inc(v_toBind_2130_);
v___f_2156_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3___boxed), 18, 17);
lean_closure_set(v___f_2156_, 0, v___x_2152_);
lean_closure_set(v___f_2156_, 1, v_toApplicative_2131_);
lean_closure_set(v___f_2156_, 2, v_inst_2119_);
lean_closure_set(v___f_2156_, 3, v_inst_2120_);
lean_closure_set(v___f_2156_, 4, v_inst_2121_);
lean_closure_set(v___f_2156_, 5, v_pre_2122_);
lean_closure_set(v___f_2156_, 6, v_post_2123_);
lean_closure_set(v___f_2156_, 7, v___x_2153_);
lean_closure_set(v___f_2156_, 8, v___x_2154_);
lean_closure_set(v___f_2156_, 9, v___x_2155_);
lean_closure_set(v___f_2156_, 10, v_x_2126_);
lean_closure_set(v___f_2156_, 11, v_x_2127_);
lean_closure_set(v___f_2156_, 12, v_toBind_2130_);
lean_closure_set(v___f_2156_, 13, v___f_2132_);
lean_closure_set(v___f_2156_, 14, v_args_2128_);
lean_closure_set(v___f_2156_, 15, v___y_2134_);
lean_closure_set(v___f_2156_, 16, v___f_2151_);
v___x_2157_ = lean_alloc_closure((void*)(l_Lean_Meta_getFunInfoNArgs___boxed), 7, 2);
lean_closure_set(v___x_2157_, 0, v_f_2133_);
lean_closure_set(v___x_2157_, 1, v___x_2152_);
v___x_2158_ = lean_apply_2(v_inst_2120_, lean_box(0), v___x_2157_);
v___x_2159_ = lean_apply_4(v_toBind_2130_, lean_box(0), lean_box(0), v___x_2158_, v___f_2156_);
return v___x_2159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_skipInstances_2160_ = _args[0];
lean_object* v_inst_2161_ = _args[1];
lean_object* v_inst_2162_ = _args[2];
lean_object* v_inst_2163_ = _args[3];
lean_object* v_pre_2164_ = _args[4];
lean_object* v_post_2165_ = _args[5];
lean_object* v_usedLetOnly_2166_ = _args[6];
lean_object* v_skipConstInApp_2167_ = _args[7];
lean_object* v_x_2168_ = _args[8];
lean_object* v_x_2169_ = _args[9];
lean_object* v_args_2170_ = _args[10];
lean_object* v___x_2171_ = _args[11];
lean_object* v_toBind_2172_ = _args[12];
lean_object* v_toApplicative_2173_ = _args[13];
lean_object* v___f_2174_ = _args[14];
lean_object* v_f_2175_ = _args[15];
lean_object* v___y_2176_ = _args[16];
_start:
{
uint8_t v_skipInstances_boxed_2177_; uint8_t v_usedLetOnly_boxed_2178_; uint8_t v_skipConstInApp_boxed_2179_; lean_object* v_res_2180_; 
v_skipInstances_boxed_2177_ = lean_unbox(v_skipInstances_2160_);
v_usedLetOnly_boxed_2178_ = lean_unbox(v_usedLetOnly_2166_);
v_skipConstInApp_boxed_2179_ = lean_unbox(v_skipConstInApp_2167_);
v_res_2180_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6(v_skipInstances_boxed_2177_, v_inst_2161_, v_inst_2162_, v_inst_2163_, v_pre_2164_, v_post_2165_, v_usedLetOnly_boxed_2178_, v_skipConstInApp_boxed_2179_, v_x_2168_, v_x_2169_, v_args_2170_, v___x_2171_, v_toBind_2172_, v_toApplicative_2173_, v___f_2174_, v_f_2175_, v___y_2176_);
lean_dec(v___y_2176_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9(uint8_t v_skipInstances_2181_, lean_object* v_inst_2182_, lean_object* v_inst_2183_, lean_object* v_inst_2184_, lean_object* v_pre_2185_, lean_object* v_post_2186_, uint8_t v_usedLetOnly_2187_, uint8_t v_skipConstInApp_2188_, lean_object* v_x_2189_, lean_object* v_x_2190_, lean_object* v___x_2191_, lean_object* v_toBind_2192_, lean_object* v_toApplicative_2193_, lean_object* v___f_2194_, lean_object* v_f_2195_, lean_object* v_args_2196_, lean_object* v___y_2197_){
_start:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___f_2201_; lean_object* v___f_2202_; 
v___x_2198_ = lean_box(v_skipInstances_2181_);
v___x_2199_ = lean_box(v_usedLetOnly_2187_);
v___x_2200_ = lean_box(v_skipConstInApp_2188_);
lean_inc_ref(v_toApplicative_2193_);
lean_inc(v_toBind_2192_);
lean_inc(v_x_2190_);
lean_inc(v_post_2186_);
lean_inc(v_pre_2185_);
lean_inc_ref(v_inst_2184_);
lean_inc(v_inst_2183_);
lean_inc_ref(v_inst_2182_);
v___f_2201_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6___boxed), 17, 15);
lean_closure_set(v___f_2201_, 0, v___x_2198_);
lean_closure_set(v___f_2201_, 1, v_inst_2182_);
lean_closure_set(v___f_2201_, 2, v_inst_2183_);
lean_closure_set(v___f_2201_, 3, v_inst_2184_);
lean_closure_set(v___f_2201_, 4, v_pre_2185_);
lean_closure_set(v___f_2201_, 5, v_post_2186_);
lean_closure_set(v___f_2201_, 6, v___x_2199_);
lean_closure_set(v___f_2201_, 7, v___x_2200_);
lean_closure_set(v___f_2201_, 8, v_x_2189_);
lean_closure_set(v___f_2201_, 9, v_x_2190_);
lean_closure_set(v___f_2201_, 10, v_args_2196_);
lean_closure_set(v___f_2201_, 11, v___x_2191_);
lean_closure_set(v___f_2201_, 12, v_toBind_2192_);
lean_closure_set(v___f_2201_, 13, v_toApplicative_2193_);
lean_closure_set(v___f_2201_, 14, v___f_2194_);
lean_inc(v___y_2197_);
v___f_2202_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7___boxed), 3, 2);
lean_closure_set(v___f_2202_, 0, v___f_2201_);
lean_closure_set(v___f_2202_, 1, v___y_2197_);
if (v_skipConstInApp_2188_ == 0)
{
lean_dec_ref(v_toApplicative_2193_);
goto v___jp_2203_;
}
else
{
uint8_t v___x_2206_; 
v___x_2206_ = l_Lean_Expr_isConst(v_f_2195_);
if (v___x_2206_ == 0)
{
lean_dec_ref(v_toApplicative_2193_);
goto v___jp_2203_;
}
else
{
lean_object* v_toPure_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
lean_dec(v_x_2190_);
lean_dec(v_post_2186_);
lean_dec(v_pre_2185_);
lean_dec_ref(v_inst_2184_);
lean_dec(v_inst_2183_);
lean_dec_ref(v_inst_2182_);
v_toPure_2207_ = lean_ctor_get(v_toApplicative_2193_, 1);
lean_inc(v_toPure_2207_);
lean_dec_ref(v_toApplicative_2193_);
v___x_2208_ = lean_apply_2(v_toPure_2207_, lean_box(0), v_f_2195_);
v___x_2209_ = lean_apply_4(v_toBind_2192_, lean_box(0), lean_box(0), v___x_2208_, v___f_2202_);
return v___x_2209_;
}
}
v___jp_2203_:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2182_, v_inst_2183_, v_inst_2184_, v_pre_2185_, v_post_2186_, v_usedLetOnly_2187_, v_skipConstInApp_2188_, v_skipInstances_2181_, v_x_2189_, v_x_2190_, v_f_2195_, v___y_2197_);
v___x_2205_ = lean_apply_4(v_toBind_2192_, lean_box(0), lean_box(0), v___x_2204_, v___f_2202_);
return v___x_2205_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9___boxed(lean_object** _args){
lean_object* v_skipInstances_2210_ = _args[0];
lean_object* v_inst_2211_ = _args[1];
lean_object* v_inst_2212_ = _args[2];
lean_object* v_inst_2213_ = _args[3];
lean_object* v_pre_2214_ = _args[4];
lean_object* v_post_2215_ = _args[5];
lean_object* v_usedLetOnly_2216_ = _args[6];
lean_object* v_skipConstInApp_2217_ = _args[7];
lean_object* v_x_2218_ = _args[8];
lean_object* v_x_2219_ = _args[9];
lean_object* v___x_2220_ = _args[10];
lean_object* v_toBind_2221_ = _args[11];
lean_object* v_toApplicative_2222_ = _args[12];
lean_object* v___f_2223_ = _args[13];
lean_object* v_f_2224_ = _args[14];
lean_object* v_args_2225_ = _args[15];
lean_object* v___y_2226_ = _args[16];
_start:
{
uint8_t v_skipInstances_boxed_2227_; uint8_t v_usedLetOnly_boxed_2228_; uint8_t v_skipConstInApp_boxed_2229_; lean_object* v_res_2230_; 
v_skipInstances_boxed_2227_ = lean_unbox(v_skipInstances_2210_);
v_usedLetOnly_boxed_2228_ = lean_unbox(v_usedLetOnly_2216_);
v_skipConstInApp_boxed_2229_ = lean_unbox(v_skipConstInApp_2217_);
v_res_2230_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9(v_skipInstances_boxed_2227_, v_inst_2211_, v_inst_2212_, v_inst_2213_, v_pre_2214_, v_post_2215_, v_usedLetOnly_boxed_2228_, v_skipConstInApp_boxed_2229_, v_x_2218_, v_x_2219_, v___x_2220_, v_toBind_2221_, v_toApplicative_2222_, v___f_2223_, v_f_2224_, v_args_2225_, v___y_2226_);
lean_dec(v___y_2226_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0(lean_object* v_fvars_2235_, lean_object* v_inst_2236_, lean_object* v_inst_2237_, lean_object* v_inst_2238_, lean_object* v_pre_2239_, lean_object* v_post_2240_, uint8_t v_usedLetOnly_2241_, uint8_t v_skipConstInApp_2242_, uint8_t v_skipInstances_2243_, lean_object* v_x_2244_, lean_object* v_x_2245_, lean_object* v_body_2246_, lean_object* v_x_2247_, lean_object* v___y_2248_){
_start:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2249_ = lean_array_push(v_fvars_2235_, v_x_2247_);
v___x_2250_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2236_, v_inst_2237_, v_inst_2238_, v_pre_2239_, v_post_2240_, v_usedLetOnly_2241_, v_skipConstInApp_2242_, v_skipInstances_2243_, v_x_2244_, v_x_2245_, v___x_2249_, v_body_2246_, v___y_2248_);
return v___x_2250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0___boxed(lean_object* v_fvars_2251_, lean_object* v_inst_2252_, lean_object* v_inst_2253_, lean_object* v_inst_2254_, lean_object* v_pre_2255_, lean_object* v_post_2256_, lean_object* v_usedLetOnly_2257_, lean_object* v_skipConstInApp_2258_, lean_object* v_skipInstances_2259_, lean_object* v_x_2260_, lean_object* v_x_2261_, lean_object* v_body_2262_, lean_object* v_x_2263_, lean_object* v___y_2264_){
_start:
{
uint8_t v_usedLetOnly_boxed_2265_; uint8_t v_skipConstInApp_boxed_2266_; uint8_t v_skipInstances_boxed_2267_; lean_object* v_res_2268_; 
v_usedLetOnly_boxed_2265_ = lean_unbox(v_usedLetOnly_2257_);
v_skipConstInApp_boxed_2266_ = lean_unbox(v_skipConstInApp_2258_);
v_skipInstances_boxed_2267_ = lean_unbox(v_skipInstances_2259_);
v_res_2268_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0(v_fvars_2251_, v_inst_2252_, v_inst_2253_, v_inst_2254_, v_pre_2255_, v_post_2256_, v_usedLetOnly_boxed_2265_, v_skipConstInApp_boxed_2266_, v_skipInstances_boxed_2267_, v_x_2260_, v_x_2261_, v_body_2262_, v_x_2263_, v___y_2264_);
lean_dec(v___y_2264_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed(lean_object* v_inst_2269_, lean_object* v_inst_2270_, lean_object* v_inst_2271_, lean_object* v_pre_2272_, lean_object* v_post_2273_, lean_object* v_usedLetOnly_2274_, lean_object* v_skipConstInApp_2275_, lean_object* v_skipInstances_2276_, lean_object* v_x_2277_, lean_object* v_x_2278_, lean_object* v___y_2279_, lean_object* v_a_2280_){
_start:
{
uint8_t v_usedLetOnly_boxed_2281_; uint8_t v_skipConstInApp_boxed_2282_; uint8_t v_skipInstances_boxed_2283_; lean_object* v_res_2284_; 
v_usedLetOnly_boxed_2281_ = lean_unbox(v_usedLetOnly_2274_);
v_skipConstInApp_boxed_2282_ = lean_unbox(v_skipConstInApp_2275_);
v_skipInstances_boxed_2283_ = lean_unbox(v_skipInstances_2276_);
v_res_2284_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3(v_inst_2269_, v_inst_2270_, v_inst_2271_, v_pre_2272_, v_post_2273_, v_usedLetOnly_boxed_2281_, v_skipConstInApp_boxed_2282_, v_skipInstances_boxed_2283_, v_x_2277_, v_x_2278_, v___y_2279_, v_a_2280_);
lean_dec(v___y_2279_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(lean_object* v_inst_2285_, lean_object* v_inst_2286_, lean_object* v_inst_2287_, lean_object* v_pre_2288_, lean_object* v_post_2289_, uint8_t v_usedLetOnly_2290_, uint8_t v_skipConstInApp_2291_, uint8_t v_skipInstances_2292_, lean_object* v_x_2293_, lean_object* v_x_2294_, lean_object* v_fvars_2295_, lean_object* v_e_2296_, lean_object* v___y_2297_){
_start:
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___f_2300_; lean_object* v___f_2301_; lean_object* v___x_2302_; 
lean_inc_ref(v_inst_2285_);
v___x_2298_ = l_Lean_MonadCacheT_instMonad___redArg(v_inst_2285_);
v___x_2299_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0);
lean_inc_ref_n(v_inst_2287_, 2);
v___f_2300_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2300_, 0, v___x_2299_);
lean_closure_set(v___f_2300_, 1, v_inst_2287_);
v___f_2301_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2301_, 0, v___x_2299_);
lean_closure_set(v___f_2301_, 1, v_inst_2287_);
v___x_2302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2302_, 0, v___f_2300_);
lean_ctor_set(v___x_2302_, 1, v___f_2301_);
if (lean_obj_tag(v_e_2296_) == 7)
{
lean_object* v_binderName_2303_; lean_object* v_binderType_2304_; lean_object* v_body_2305_; uint8_t v_binderInfo_2306_; lean_object* v_toBind_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___f_2311_; lean_object* v___x_2312_; lean_object* v___f_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v_binderName_2303_ = lean_ctor_get(v_e_2296_, 0);
lean_inc(v_binderName_2303_);
v_binderType_2304_ = lean_ctor_get(v_e_2296_, 1);
lean_inc_ref(v_binderType_2304_);
v_body_2305_ = lean_ctor_get(v_e_2296_, 2);
lean_inc_ref(v_body_2305_);
v_binderInfo_2306_ = lean_ctor_get_uint8(v_e_2296_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2296_, 3);
v_toBind_2307_ = lean_ctor_get(v_inst_2285_, 1);
lean_inc(v_toBind_2307_);
v___x_2308_ = lean_box(v_usedLetOnly_2290_);
v___x_2309_ = lean_box(v_skipConstInApp_2291_);
v___x_2310_ = lean_box(v_skipInstances_2292_);
lean_inc(v_x_2294_);
lean_inc(v_post_2289_);
lean_inc(v_pre_2288_);
lean_inc_ref(v_inst_2287_);
lean_inc(v_inst_2286_);
lean_inc_ref(v_inst_2285_);
lean_inc_ref(v_fvars_2295_);
v___f_2311_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0___boxed), 14, 12);
lean_closure_set(v___f_2311_, 0, v_fvars_2295_);
lean_closure_set(v___f_2311_, 1, v_inst_2285_);
lean_closure_set(v___f_2311_, 2, v_inst_2286_);
lean_closure_set(v___f_2311_, 3, v_inst_2287_);
lean_closure_set(v___f_2311_, 4, v_pre_2288_);
lean_closure_set(v___f_2311_, 5, v_post_2289_);
lean_closure_set(v___f_2311_, 6, v___x_2308_);
lean_closure_set(v___f_2311_, 7, v___x_2309_);
lean_closure_set(v___f_2311_, 8, v___x_2310_);
lean_closure_set(v___f_2311_, 9, v_x_2293_);
lean_closure_set(v___f_2311_, 10, v_x_2294_);
lean_closure_set(v___f_2311_, 11, v_body_2305_);
v___x_2312_ = lean_box(v_binderInfo_2306_);
lean_inc(v___y_2297_);
v___f_2313_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_2313_, 0, v___x_2302_);
lean_closure_set(v___f_2313_, 1, v___x_2298_);
lean_closure_set(v___f_2313_, 2, v_binderName_2303_);
lean_closure_set(v___f_2313_, 3, v___x_2312_);
lean_closure_set(v___f_2313_, 4, v___f_2311_);
lean_closure_set(v___f_2313_, 5, v___y_2297_);
v___x_2314_ = lean_expr_instantiate_rev(v_binderType_2304_, v_fvars_2295_);
lean_dec_ref(v_fvars_2295_);
lean_dec_ref(v_binderType_2304_);
v___x_2315_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2285_, v_inst_2286_, v_inst_2287_, v_pre_2288_, v_post_2289_, v_usedLetOnly_2290_, v_skipConstInApp_2291_, v_skipInstances_2292_, v_x_2293_, v_x_2294_, v___x_2314_, v___y_2297_);
v___x_2316_ = lean_apply_4(v_toBind_2307_, lean_box(0), lean_box(0), v___x_2315_, v___f_2313_);
return v___x_2316_;
}
else
{
lean_object* v_toBind_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___f_2321_; lean_object* v___x_2322_; lean_object* v___f_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
lean_dec_ref_known(v___x_2302_, 2);
lean_dec_ref(v___x_2298_);
v_toBind_2317_ = lean_ctor_get(v_inst_2285_, 1);
lean_inc_n(v_toBind_2317_, 2);
v___x_2318_ = lean_box(v_usedLetOnly_2290_);
v___x_2319_ = lean_box(v_skipConstInApp_2291_);
v___x_2320_ = lean_box(v_skipInstances_2292_);
lean_inc(v___y_2297_);
lean_inc(v_x_2294_);
lean_inc(v_post_2289_);
lean_inc(v_pre_2288_);
lean_inc_ref(v_inst_2287_);
lean_inc_n(v_inst_2286_, 2);
lean_inc_ref(v_inst_2285_);
v___f_2321_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_2321_, 0, v_inst_2285_);
lean_closure_set(v___f_2321_, 1, v_inst_2286_);
lean_closure_set(v___f_2321_, 2, v_inst_2287_);
lean_closure_set(v___f_2321_, 3, v_pre_2288_);
lean_closure_set(v___f_2321_, 4, v_post_2289_);
lean_closure_set(v___f_2321_, 5, v___x_2318_);
lean_closure_set(v___f_2321_, 6, v___x_2319_);
lean_closure_set(v___f_2321_, 7, v___x_2320_);
lean_closure_set(v___f_2321_, 8, v_x_2293_);
lean_closure_set(v___f_2321_, 9, v_x_2294_);
lean_closure_set(v___f_2321_, 10, v___y_2297_);
v___x_2322_ = lean_box(v_usedLetOnly_2290_);
lean_inc_ref(v_fvars_2295_);
v___f_2323_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_2323_, 0, v_fvars_2295_);
lean_closure_set(v___f_2323_, 1, v___x_2322_);
lean_closure_set(v___f_2323_, 2, v_inst_2286_);
lean_closure_set(v___f_2323_, 3, v_toBind_2317_);
lean_closure_set(v___f_2323_, 4, v___f_2321_);
v___x_2324_ = lean_expr_instantiate_rev(v_e_2296_, v_fvars_2295_);
lean_dec_ref(v_fvars_2295_);
lean_dec_ref(v_e_2296_);
v___x_2325_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2285_, v_inst_2286_, v_inst_2287_, v_pre_2288_, v_post_2289_, v_usedLetOnly_2290_, v_skipConstInApp_2291_, v_skipInstances_2292_, v_x_2293_, v_x_2294_, v___x_2324_, v___y_2297_);
v___x_2326_ = lean_apply_4(v_toBind_2317_, lean_box(0), lean_box(0), v___x_2325_, v___f_2323_);
return v___x_2326_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0(lean_object* v_fvars_2327_, lean_object* v_inst_2328_, lean_object* v_inst_2329_, lean_object* v_inst_2330_, lean_object* v_pre_2331_, lean_object* v_post_2332_, uint8_t v_usedLetOnly_2333_, uint8_t v_skipConstInApp_2334_, uint8_t v_skipInstances_2335_, lean_object* v_x_2336_, lean_object* v_x_2337_, lean_object* v_body_2338_, lean_object* v_x_2339_, lean_object* v___y_2340_){
_start:
{
lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2341_ = lean_array_push(v_fvars_2327_, v_x_2339_);
v___x_2342_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2328_, v_inst_2329_, v_inst_2330_, v_pre_2331_, v_post_2332_, v_usedLetOnly_2333_, v_skipConstInApp_2334_, v_skipInstances_2335_, v_x_2336_, v_x_2337_, v___x_2341_, v_body_2338_, v___y_2340_);
return v___x_2342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0___boxed(lean_object* v_fvars_2343_, lean_object* v_inst_2344_, lean_object* v_inst_2345_, lean_object* v_inst_2346_, lean_object* v_pre_2347_, lean_object* v_post_2348_, lean_object* v_usedLetOnly_2349_, lean_object* v_skipConstInApp_2350_, lean_object* v_skipInstances_2351_, lean_object* v_x_2352_, lean_object* v_x_2353_, lean_object* v_body_2354_, lean_object* v_x_2355_, lean_object* v___y_2356_){
_start:
{
uint8_t v_usedLetOnly_boxed_2357_; uint8_t v_skipConstInApp_boxed_2358_; uint8_t v_skipInstances_boxed_2359_; lean_object* v_res_2360_; 
v_usedLetOnly_boxed_2357_ = lean_unbox(v_usedLetOnly_2349_);
v_skipConstInApp_boxed_2358_ = lean_unbox(v_skipConstInApp_2350_);
v_skipInstances_boxed_2359_ = lean_unbox(v_skipInstances_2351_);
v_res_2360_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0(v_fvars_2343_, v_inst_2344_, v_inst_2345_, v_inst_2346_, v_pre_2347_, v_post_2348_, v_usedLetOnly_boxed_2357_, v_skipConstInApp_boxed_2358_, v_skipInstances_boxed_2359_, v_x_2352_, v_x_2353_, v_body_2354_, v_x_2355_, v___y_2356_);
lean_dec(v___y_2356_);
return v_res_2360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(lean_object* v_inst_2361_, lean_object* v_inst_2362_, lean_object* v_inst_2363_, lean_object* v_pre_2364_, lean_object* v_post_2365_, uint8_t v_usedLetOnly_2366_, uint8_t v_skipConstInApp_2367_, uint8_t v_skipInstances_2368_, lean_object* v_x_2369_, lean_object* v_x_2370_, lean_object* v_fvars_2371_, lean_object* v_e_2372_, lean_object* v___y_2373_){
_start:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___f_2376_; lean_object* v___f_2377_; lean_object* v___x_2378_; 
lean_inc_ref(v_inst_2361_);
v___x_2374_ = l_Lean_MonadCacheT_instMonad___redArg(v_inst_2361_);
v___x_2375_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0);
lean_inc_ref_n(v_inst_2363_, 2);
v___f_2376_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2376_, 0, v___x_2375_);
lean_closure_set(v___f_2376_, 1, v_inst_2363_);
v___f_2377_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2377_, 0, v___x_2375_);
lean_closure_set(v___f_2377_, 1, v_inst_2363_);
v___x_2378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2378_, 0, v___f_2376_);
lean_ctor_set(v___x_2378_, 1, v___f_2377_);
if (lean_obj_tag(v_e_2372_) == 6)
{
lean_object* v_binderName_2379_; lean_object* v_binderType_2380_; lean_object* v_body_2381_; uint8_t v_binderInfo_2382_; lean_object* v_toBind_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___f_2387_; lean_object* v___x_2388_; lean_object* v___f_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; 
v_binderName_2379_ = lean_ctor_get(v_e_2372_, 0);
lean_inc(v_binderName_2379_);
v_binderType_2380_ = lean_ctor_get(v_e_2372_, 1);
lean_inc_ref(v_binderType_2380_);
v_body_2381_ = lean_ctor_get(v_e_2372_, 2);
lean_inc_ref(v_body_2381_);
v_binderInfo_2382_ = lean_ctor_get_uint8(v_e_2372_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2372_, 3);
v_toBind_2383_ = lean_ctor_get(v_inst_2361_, 1);
lean_inc(v_toBind_2383_);
v___x_2384_ = lean_box(v_usedLetOnly_2366_);
v___x_2385_ = lean_box(v_skipConstInApp_2367_);
v___x_2386_ = lean_box(v_skipInstances_2368_);
lean_inc(v_x_2370_);
lean_inc(v_post_2365_);
lean_inc(v_pre_2364_);
lean_inc_ref(v_inst_2363_);
lean_inc(v_inst_2362_);
lean_inc_ref(v_inst_2361_);
lean_inc_ref(v_fvars_2371_);
v___f_2387_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0___boxed), 14, 12);
lean_closure_set(v___f_2387_, 0, v_fvars_2371_);
lean_closure_set(v___f_2387_, 1, v_inst_2361_);
lean_closure_set(v___f_2387_, 2, v_inst_2362_);
lean_closure_set(v___f_2387_, 3, v_inst_2363_);
lean_closure_set(v___f_2387_, 4, v_pre_2364_);
lean_closure_set(v___f_2387_, 5, v_post_2365_);
lean_closure_set(v___f_2387_, 6, v___x_2384_);
lean_closure_set(v___f_2387_, 7, v___x_2385_);
lean_closure_set(v___f_2387_, 8, v___x_2386_);
lean_closure_set(v___f_2387_, 9, v_x_2369_);
lean_closure_set(v___f_2387_, 10, v_x_2370_);
lean_closure_set(v___f_2387_, 11, v_body_2381_);
v___x_2388_ = lean_box(v_binderInfo_2382_);
lean_inc(v___y_2373_);
v___f_2389_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_2389_, 0, v___x_2378_);
lean_closure_set(v___f_2389_, 1, v___x_2374_);
lean_closure_set(v___f_2389_, 2, v_binderName_2379_);
lean_closure_set(v___f_2389_, 3, v___x_2388_);
lean_closure_set(v___f_2389_, 4, v___f_2387_);
lean_closure_set(v___f_2389_, 5, v___y_2373_);
v___x_2390_ = lean_expr_instantiate_rev(v_binderType_2380_, v_fvars_2371_);
lean_dec_ref(v_fvars_2371_);
lean_dec_ref(v_binderType_2380_);
v___x_2391_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2361_, v_inst_2362_, v_inst_2363_, v_pre_2364_, v_post_2365_, v_usedLetOnly_2366_, v_skipConstInApp_2367_, v_skipInstances_2368_, v_x_2369_, v_x_2370_, v___x_2390_, v___y_2373_);
v___x_2392_ = lean_apply_4(v_toBind_2383_, lean_box(0), lean_box(0), v___x_2391_, v___f_2389_);
return v___x_2392_;
}
else
{
lean_object* v_toBind_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___f_2397_; lean_object* v___x_2398_; lean_object* v___f_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
lean_dec_ref_known(v___x_2378_, 2);
lean_dec_ref(v___x_2374_);
v_toBind_2393_ = lean_ctor_get(v_inst_2361_, 1);
lean_inc_n(v_toBind_2393_, 2);
v___x_2394_ = lean_box(v_usedLetOnly_2366_);
v___x_2395_ = lean_box(v_skipConstInApp_2367_);
v___x_2396_ = lean_box(v_skipInstances_2368_);
lean_inc(v___y_2373_);
lean_inc(v_x_2370_);
lean_inc(v_post_2365_);
lean_inc(v_pre_2364_);
lean_inc_ref(v_inst_2363_);
lean_inc_n(v_inst_2362_, 2);
lean_inc_ref(v_inst_2361_);
v___f_2397_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_2397_, 0, v_inst_2361_);
lean_closure_set(v___f_2397_, 1, v_inst_2362_);
lean_closure_set(v___f_2397_, 2, v_inst_2363_);
lean_closure_set(v___f_2397_, 3, v_pre_2364_);
lean_closure_set(v___f_2397_, 4, v_post_2365_);
lean_closure_set(v___f_2397_, 5, v___x_2394_);
lean_closure_set(v___f_2397_, 6, v___x_2395_);
lean_closure_set(v___f_2397_, 7, v___x_2396_);
lean_closure_set(v___f_2397_, 8, v_x_2369_);
lean_closure_set(v___f_2397_, 9, v_x_2370_);
lean_closure_set(v___f_2397_, 10, v___y_2373_);
v___x_2398_ = lean_box(v_usedLetOnly_2366_);
lean_inc_ref(v_fvars_2371_);
v___f_2399_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_2399_, 0, v_fvars_2371_);
lean_closure_set(v___f_2399_, 1, v___x_2398_);
lean_closure_set(v___f_2399_, 2, v_inst_2362_);
lean_closure_set(v___f_2399_, 3, v_toBind_2393_);
lean_closure_set(v___f_2399_, 4, v___f_2397_);
v___x_2400_ = lean_expr_instantiate_rev(v_e_2372_, v_fvars_2371_);
lean_dec_ref(v_fvars_2371_);
lean_dec_ref(v_e_2372_);
v___x_2401_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2361_, v_inst_2362_, v_inst_2363_, v_pre_2364_, v_post_2365_, v_usedLetOnly_2366_, v_skipConstInApp_2367_, v_skipInstances_2368_, v_x_2369_, v_x_2370_, v___x_2400_, v___y_2373_);
v___x_2402_ = lean_apply_4(v_toBind_2393_, lean_box(0), lean_box(0), v___x_2401_, v___f_2399_);
return v___x_2402_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0(lean_object* v_fvars_2403_, lean_object* v_inst_2404_, lean_object* v_inst_2405_, lean_object* v_inst_2406_, lean_object* v_pre_2407_, lean_object* v_post_2408_, uint8_t v_usedLetOnly_2409_, uint8_t v_skipConstInApp_2410_, uint8_t v_skipInstances_2411_, lean_object* v_x_2412_, lean_object* v_x_2413_, lean_object* v_body_2414_, lean_object* v_x_2415_, lean_object* v___y_2416_){
_start:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2417_ = lean_array_push(v_fvars_2403_, v_x_2415_);
v___x_2418_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2404_, v_inst_2405_, v_inst_2406_, v_pre_2407_, v_post_2408_, v_usedLetOnly_2409_, v_skipConstInApp_2410_, v_skipInstances_2411_, v_x_2412_, v_x_2413_, v___x_2417_, v_body_2414_, v___y_2416_);
return v___x_2418_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0___boxed(lean_object* v_fvars_2419_, lean_object* v_inst_2420_, lean_object* v_inst_2421_, lean_object* v_inst_2422_, lean_object* v_pre_2423_, lean_object* v_post_2424_, lean_object* v_usedLetOnly_2425_, lean_object* v_skipConstInApp_2426_, lean_object* v_skipInstances_2427_, lean_object* v_x_2428_, lean_object* v_x_2429_, lean_object* v_body_2430_, lean_object* v_x_2431_, lean_object* v___y_2432_){
_start:
{
uint8_t v_usedLetOnly_boxed_2433_; uint8_t v_skipConstInApp_boxed_2434_; uint8_t v_skipInstances_boxed_2435_; lean_object* v_res_2436_; 
v_usedLetOnly_boxed_2433_ = lean_unbox(v_usedLetOnly_2425_);
v_skipConstInApp_boxed_2434_ = lean_unbox(v_skipConstInApp_2426_);
v_skipInstances_boxed_2435_ = lean_unbox(v_skipInstances_2427_);
v_res_2436_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0(v_fvars_2419_, v_inst_2420_, v_inst_2421_, v_inst_2422_, v_pre_2423_, v_post_2424_, v_usedLetOnly_boxed_2433_, v_skipConstInApp_boxed_2434_, v_skipInstances_boxed_2435_, v_x_2428_, v_x_2429_, v_body_2430_, v_x_2431_, v___y_2432_);
lean_dec(v___y_2432_);
return v_res_2436_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2(lean_object* v___x_2437_, lean_object* v___x_2438_, lean_object* v_declName_2439_, lean_object* v___f_2440_, uint8_t v_nondep_2441_, lean_object* v___y_2442_, lean_object* v_value_2443_, lean_object* v_fvars_2444_, lean_object* v_inst_2445_, lean_object* v_inst_2446_, lean_object* v_inst_2447_, lean_object* v_pre_2448_, lean_object* v_post_2449_, uint8_t v_usedLetOnly_2450_, uint8_t v_skipConstInApp_2451_, uint8_t v_skipInstances_2452_, lean_object* v_x_2453_, lean_object* v_x_2454_, lean_object* v_toBind_2455_, lean_object* v_a_2456_){
_start:
{
lean_object* v___x_2457_; lean_object* v___f_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v___x_2457_ = lean_box(v_nondep_2441_);
lean_inc(v___y_2442_);
v___f_2458_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_2458_, 0, v___x_2437_);
lean_closure_set(v___f_2458_, 1, v___x_2438_);
lean_closure_set(v___f_2458_, 2, v_declName_2439_);
lean_closure_set(v___f_2458_, 3, v_a_2456_);
lean_closure_set(v___f_2458_, 4, v___f_2440_);
lean_closure_set(v___f_2458_, 5, v___x_2457_);
lean_closure_set(v___f_2458_, 6, v___y_2442_);
v___x_2459_ = lean_expr_instantiate_rev(v_value_2443_, v_fvars_2444_);
v___x_2460_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2445_, v_inst_2446_, v_inst_2447_, v_pre_2448_, v_post_2449_, v_usedLetOnly_2450_, v_skipConstInApp_2451_, v_skipInstances_2452_, v_x_2453_, v_x_2454_, v___x_2459_, v___y_2442_);
v___x_2461_ = lean_apply_4(v_toBind_2455_, lean_box(0), lean_box(0), v___x_2460_, v___f_2458_);
return v___x_2461_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2___boxed(lean_object** _args){
lean_object* v___x_2462_ = _args[0];
lean_object* v___x_2463_ = _args[1];
lean_object* v_declName_2464_ = _args[2];
lean_object* v___f_2465_ = _args[3];
lean_object* v_nondep_2466_ = _args[4];
lean_object* v___y_2467_ = _args[5];
lean_object* v_value_2468_ = _args[6];
lean_object* v_fvars_2469_ = _args[7];
lean_object* v_inst_2470_ = _args[8];
lean_object* v_inst_2471_ = _args[9];
lean_object* v_inst_2472_ = _args[10];
lean_object* v_pre_2473_ = _args[11];
lean_object* v_post_2474_ = _args[12];
lean_object* v_usedLetOnly_2475_ = _args[13];
lean_object* v_skipConstInApp_2476_ = _args[14];
lean_object* v_skipInstances_2477_ = _args[15];
lean_object* v_x_2478_ = _args[16];
lean_object* v_x_2479_ = _args[17];
lean_object* v_toBind_2480_ = _args[18];
lean_object* v_a_2481_ = _args[19];
_start:
{
uint8_t v_nondep_6804__boxed_2482_; uint8_t v_usedLetOnly_boxed_2483_; uint8_t v_skipConstInApp_boxed_2484_; uint8_t v_skipInstances_boxed_2485_; lean_object* v_res_2486_; 
v_nondep_6804__boxed_2482_ = lean_unbox(v_nondep_2466_);
v_usedLetOnly_boxed_2483_ = lean_unbox(v_usedLetOnly_2475_);
v_skipConstInApp_boxed_2484_ = lean_unbox(v_skipConstInApp_2476_);
v_skipInstances_boxed_2485_ = lean_unbox(v_skipInstances_2477_);
v_res_2486_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2(v___x_2462_, v___x_2463_, v_declName_2464_, v___f_2465_, v_nondep_6804__boxed_2482_, v___y_2467_, v_value_2468_, v_fvars_2469_, v_inst_2470_, v_inst_2471_, v_inst_2472_, v_pre_2473_, v_post_2474_, v_usedLetOnly_boxed_2483_, v_skipConstInApp_boxed_2484_, v_skipInstances_boxed_2485_, v_x_2478_, v_x_2479_, v_toBind_2480_, v_a_2481_);
lean_dec_ref(v_fvars_2469_);
lean_dec_ref(v_value_2468_);
lean_dec(v___y_2467_);
return v_res_2486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(lean_object* v_inst_2487_, lean_object* v_inst_2488_, lean_object* v_inst_2489_, lean_object* v_pre_2490_, lean_object* v_post_2491_, uint8_t v_usedLetOnly_2492_, uint8_t v_skipConstInApp_2493_, uint8_t v_skipInstances_2494_, lean_object* v_x_2495_, lean_object* v_x_2496_, lean_object* v_fvars_2497_, lean_object* v_e_2498_, lean_object* v___y_2499_){
_start:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___f_2502_; lean_object* v___f_2503_; lean_object* v___x_2504_; 
lean_inc_ref(v_inst_2487_);
v___x_2500_ = l_Lean_MonadCacheT_instMonad___redArg(v_inst_2487_);
v___x_2501_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0);
lean_inc_ref_n(v_inst_2489_, 2);
v___f_2502_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2502_, 0, v___x_2501_);
lean_closure_set(v___f_2502_, 1, v_inst_2489_);
v___f_2503_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2503_, 0, v___x_2501_);
lean_closure_set(v___f_2503_, 1, v_inst_2489_);
v___x_2504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2504_, 0, v___f_2502_);
lean_ctor_set(v___x_2504_, 1, v___f_2503_);
if (lean_obj_tag(v_e_2498_) == 8)
{
lean_object* v_declName_2505_; lean_object* v_type_2506_; lean_object* v_value_2507_; lean_object* v_body_2508_; uint8_t v_nondep_2509_; lean_object* v_toBind_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___f_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___f_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; 
v_declName_2505_ = lean_ctor_get(v_e_2498_, 0);
lean_inc(v_declName_2505_);
v_type_2506_ = lean_ctor_get(v_e_2498_, 1);
lean_inc_ref(v_type_2506_);
v_value_2507_ = lean_ctor_get(v_e_2498_, 2);
lean_inc_ref(v_value_2507_);
v_body_2508_ = lean_ctor_get(v_e_2498_, 3);
lean_inc_ref(v_body_2508_);
v_nondep_2509_ = lean_ctor_get_uint8(v_e_2498_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_2498_, 4);
v_toBind_2510_ = lean_ctor_get(v_inst_2487_, 1);
lean_inc_n(v_toBind_2510_, 2);
v___x_2511_ = lean_box(v_usedLetOnly_2492_);
v___x_2512_ = lean_box(v_skipConstInApp_2493_);
v___x_2513_ = lean_box(v_skipInstances_2494_);
lean_inc_n(v_x_2496_, 2);
lean_inc_n(v_post_2491_, 2);
lean_inc_n(v_pre_2490_, 2);
lean_inc_ref_n(v_inst_2489_, 2);
lean_inc_n(v_inst_2488_, 2);
lean_inc_ref_n(v_inst_2487_, 2);
lean_inc_ref_n(v_fvars_2497_, 2);
v___f_2514_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0___boxed), 14, 12);
lean_closure_set(v___f_2514_, 0, v_fvars_2497_);
lean_closure_set(v___f_2514_, 1, v_inst_2487_);
lean_closure_set(v___f_2514_, 2, v_inst_2488_);
lean_closure_set(v___f_2514_, 3, v_inst_2489_);
lean_closure_set(v___f_2514_, 4, v_pre_2490_);
lean_closure_set(v___f_2514_, 5, v_post_2491_);
lean_closure_set(v___f_2514_, 6, v___x_2511_);
lean_closure_set(v___f_2514_, 7, v___x_2512_);
lean_closure_set(v___f_2514_, 8, v___x_2513_);
lean_closure_set(v___f_2514_, 9, v_x_2495_);
lean_closure_set(v___f_2514_, 10, v_x_2496_);
lean_closure_set(v___f_2514_, 11, v_body_2508_);
v___x_2515_ = lean_box(v_nondep_2509_);
v___x_2516_ = lean_box(v_usedLetOnly_2492_);
v___x_2517_ = lean_box(v_skipConstInApp_2493_);
v___x_2518_ = lean_box(v_skipInstances_2494_);
lean_inc(v___y_2499_);
v___f_2519_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2___boxed), 20, 19);
lean_closure_set(v___f_2519_, 0, v___x_2504_);
lean_closure_set(v___f_2519_, 1, v___x_2500_);
lean_closure_set(v___f_2519_, 2, v_declName_2505_);
lean_closure_set(v___f_2519_, 3, v___f_2514_);
lean_closure_set(v___f_2519_, 4, v___x_2515_);
lean_closure_set(v___f_2519_, 5, v___y_2499_);
lean_closure_set(v___f_2519_, 6, v_value_2507_);
lean_closure_set(v___f_2519_, 7, v_fvars_2497_);
lean_closure_set(v___f_2519_, 8, v_inst_2487_);
lean_closure_set(v___f_2519_, 9, v_inst_2488_);
lean_closure_set(v___f_2519_, 10, v_inst_2489_);
lean_closure_set(v___f_2519_, 11, v_pre_2490_);
lean_closure_set(v___f_2519_, 12, v_post_2491_);
lean_closure_set(v___f_2519_, 13, v___x_2516_);
lean_closure_set(v___f_2519_, 14, v___x_2517_);
lean_closure_set(v___f_2519_, 15, v___x_2518_);
lean_closure_set(v___f_2519_, 16, v_x_2495_);
lean_closure_set(v___f_2519_, 17, v_x_2496_);
lean_closure_set(v___f_2519_, 18, v_toBind_2510_);
v___x_2520_ = lean_expr_instantiate_rev(v_type_2506_, v_fvars_2497_);
lean_dec_ref(v_fvars_2497_);
lean_dec_ref(v_type_2506_);
v___x_2521_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2487_, v_inst_2488_, v_inst_2489_, v_pre_2490_, v_post_2491_, v_usedLetOnly_2492_, v_skipConstInApp_2493_, v_skipInstances_2494_, v_x_2495_, v_x_2496_, v___x_2520_, v___y_2499_);
v___x_2522_ = lean_apply_4(v_toBind_2510_, lean_box(0), lean_box(0), v___x_2521_, v___f_2519_);
return v___x_2522_;
}
else
{
lean_object* v_toBind_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___f_2527_; lean_object* v___x_2528_; lean_object* v___f_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
lean_dec_ref_known(v___x_2504_, 2);
lean_dec_ref(v___x_2500_);
v_toBind_2523_ = lean_ctor_get(v_inst_2487_, 1);
lean_inc_n(v_toBind_2523_, 2);
v___x_2524_ = lean_box(v_usedLetOnly_2492_);
v___x_2525_ = lean_box(v_skipConstInApp_2493_);
v___x_2526_ = lean_box(v_skipInstances_2494_);
lean_inc(v___y_2499_);
lean_inc(v_x_2496_);
lean_inc(v_post_2491_);
lean_inc(v_pre_2490_);
lean_inc_ref(v_inst_2489_);
lean_inc_n(v_inst_2488_, 2);
lean_inc_ref(v_inst_2487_);
v___f_2527_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_2527_, 0, v_inst_2487_);
lean_closure_set(v___f_2527_, 1, v_inst_2488_);
lean_closure_set(v___f_2527_, 2, v_inst_2489_);
lean_closure_set(v___f_2527_, 3, v_pre_2490_);
lean_closure_set(v___f_2527_, 4, v_post_2491_);
lean_closure_set(v___f_2527_, 5, v___x_2524_);
lean_closure_set(v___f_2527_, 6, v___x_2525_);
lean_closure_set(v___f_2527_, 7, v___x_2526_);
lean_closure_set(v___f_2527_, 8, v_x_2495_);
lean_closure_set(v___f_2527_, 9, v_x_2496_);
lean_closure_set(v___f_2527_, 10, v___y_2499_);
v___x_2528_ = lean_box(v_usedLetOnly_2492_);
lean_inc_ref(v_fvars_2497_);
v___f_2529_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4___boxed), 6, 5);
lean_closure_set(v___f_2529_, 0, v_fvars_2497_);
lean_closure_set(v___f_2529_, 1, v___x_2528_);
lean_closure_set(v___f_2529_, 2, v_inst_2488_);
lean_closure_set(v___f_2529_, 3, v_toBind_2523_);
lean_closure_set(v___f_2529_, 4, v___f_2527_);
v___x_2530_ = lean_expr_instantiate_rev(v_e_2498_, v_fvars_2497_);
lean_dec_ref(v_fvars_2497_);
lean_dec_ref(v_e_2498_);
v___x_2531_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2487_, v_inst_2488_, v_inst_2489_, v_pre_2490_, v_post_2491_, v_usedLetOnly_2492_, v_skipConstInApp_2493_, v_skipInstances_2494_, v_x_2495_, v_x_2496_, v___x_2530_, v___y_2499_);
v___x_2532_ = lean_apply_4(v_toBind_2523_, lean_box(0), lean_box(0), v___x_2531_, v___f_2529_);
return v___x_2532_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10(lean_object* v_expr_2533_, lean_object* v_data_2534_, lean_object* v_inst_2535_, lean_object* v_inst_2536_, lean_object* v_inst_2537_, lean_object* v_pre_2538_, lean_object* v_post_2539_, uint8_t v_usedLetOnly_2540_, uint8_t v_skipConstInApp_2541_, uint8_t v_skipInstances_2542_, lean_object* v_x_2543_, lean_object* v_x_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v_a_2547_){
_start:
{
size_t v___x_2548_; size_t v___x_2549_; uint8_t v___x_2550_; 
v___x_2548_ = lean_ptr_addr(v_expr_2533_);
v___x_2549_ = lean_ptr_addr(v_a_2547_);
v___x_2550_ = lean_usize_dec_eq(v___x_2548_, v___x_2549_);
if (v___x_2550_ == 0)
{
lean_object* v___x_2551_; lean_object* v___x_2552_; 
lean_dec_ref(v___y_2546_);
v___x_2551_ = l_Lean_Expr_mdata___override(v_data_2534_, v_a_2547_);
v___x_2552_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2535_, v_inst_2536_, v_inst_2537_, v_pre_2538_, v_post_2539_, v_usedLetOnly_2540_, v_skipConstInApp_2541_, v_skipInstances_2542_, v_x_2543_, v_x_2544_, v___x_2551_, v___y_2545_);
return v___x_2552_;
}
else
{
lean_object* v___x_2553_; 
lean_dec_ref(v_a_2547_);
lean_dec(v_data_2534_);
v___x_2553_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2535_, v_inst_2536_, v_inst_2537_, v_pre_2538_, v_post_2539_, v_usedLetOnly_2540_, v_skipConstInApp_2541_, v_skipInstances_2542_, v_x_2543_, v_x_2544_, v___y_2546_, v___y_2545_);
return v___x_2553_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10___boxed(lean_object* v_expr_2554_, lean_object* v_data_2555_, lean_object* v_inst_2556_, lean_object* v_inst_2557_, lean_object* v_inst_2558_, lean_object* v_pre_2559_, lean_object* v_post_2560_, lean_object* v_usedLetOnly_2561_, lean_object* v_skipConstInApp_2562_, lean_object* v_skipInstances_2563_, lean_object* v_x_2564_, lean_object* v_x_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v_a_2568_){
_start:
{
uint8_t v_usedLetOnly_boxed_2569_; uint8_t v_skipConstInApp_boxed_2570_; uint8_t v_skipInstances_boxed_2571_; lean_object* v_res_2572_; 
v_usedLetOnly_boxed_2569_ = lean_unbox(v_usedLetOnly_2561_);
v_skipConstInApp_boxed_2570_ = lean_unbox(v_skipConstInApp_2562_);
v_skipInstances_boxed_2571_ = lean_unbox(v_skipInstances_2563_);
v_res_2572_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10(v_expr_2554_, v_data_2555_, v_inst_2556_, v_inst_2557_, v_inst_2558_, v_pre_2559_, v_post_2560_, v_usedLetOnly_boxed_2569_, v_skipConstInApp_boxed_2570_, v_skipInstances_boxed_2571_, v_x_2564_, v_x_2565_, v___y_2566_, v___y_2567_, v_a_2568_);
lean_dec(v___y_2566_);
lean_dec_ref(v_expr_2554_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11(lean_object* v_struct_2573_, lean_object* v_typeName_2574_, lean_object* v_idx_2575_, lean_object* v_inst_2576_, lean_object* v_inst_2577_, lean_object* v_inst_2578_, lean_object* v_pre_2579_, lean_object* v_post_2580_, uint8_t v_usedLetOnly_2581_, uint8_t v_skipConstInApp_2582_, uint8_t v_skipInstances_2583_, lean_object* v_x_2584_, lean_object* v_x_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v_a_2588_){
_start:
{
size_t v___x_2589_; size_t v___x_2590_; uint8_t v___x_2591_; 
v___x_2589_ = lean_ptr_addr(v_struct_2573_);
v___x_2590_ = lean_ptr_addr(v_a_2588_);
v___x_2591_ = lean_usize_dec_eq(v___x_2589_, v___x_2590_);
if (v___x_2591_ == 0)
{
lean_object* v___x_2592_; lean_object* v___x_2593_; 
lean_dec_ref(v___y_2587_);
v___x_2592_ = l_Lean_Expr_proj___override(v_typeName_2574_, v_idx_2575_, v_a_2588_);
v___x_2593_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2576_, v_inst_2577_, v_inst_2578_, v_pre_2579_, v_post_2580_, v_usedLetOnly_2581_, v_skipConstInApp_2582_, v_skipInstances_2583_, v_x_2584_, v_x_2585_, v___x_2592_, v___y_2586_);
return v___x_2593_;
}
else
{
lean_object* v___x_2594_; 
lean_dec_ref(v_a_2588_);
lean_dec(v_idx_2575_);
lean_dec(v_typeName_2574_);
v___x_2594_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2576_, v_inst_2577_, v_inst_2578_, v_pre_2579_, v_post_2580_, v_usedLetOnly_2581_, v_skipConstInApp_2582_, v_skipInstances_2583_, v_x_2584_, v_x_2585_, v___y_2587_, v___y_2586_);
return v___x_2594_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___boxed(lean_object* v_struct_2595_, lean_object* v_typeName_2596_, lean_object* v_idx_2597_, lean_object* v_inst_2598_, lean_object* v_inst_2599_, lean_object* v_inst_2600_, lean_object* v_pre_2601_, lean_object* v_post_2602_, lean_object* v_usedLetOnly_2603_, lean_object* v_skipConstInApp_2604_, lean_object* v_skipInstances_2605_, lean_object* v_x_2606_, lean_object* v_x_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v_a_2610_){
_start:
{
uint8_t v_usedLetOnly_boxed_2611_; uint8_t v_skipConstInApp_boxed_2612_; uint8_t v_skipInstances_boxed_2613_; lean_object* v_res_2614_; 
v_usedLetOnly_boxed_2611_ = lean_unbox(v_usedLetOnly_2603_);
v_skipConstInApp_boxed_2612_ = lean_unbox(v_skipConstInApp_2604_);
v_skipInstances_boxed_2613_ = lean_unbox(v_skipInstances_2605_);
v_res_2614_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11(v_struct_2595_, v_typeName_2596_, v_idx_2597_, v_inst_2598_, v_inst_2599_, v_inst_2600_, v_pre_2601_, v_post_2602_, v_usedLetOnly_boxed_2611_, v_skipConstInApp_boxed_2612_, v_skipInstances_boxed_2613_, v_x_2606_, v_x_2607_, v___y_2608_, v___y_2609_, v_a_2610_);
lean_dec(v___y_2608_);
lean_dec_ref(v_struct_2595_);
return v_res_2614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12(lean_object* v_toApplicative_2615_, lean_object* v_inst_2616_, lean_object* v_inst_2617_, lean_object* v_inst_2618_, lean_object* v_pre_2619_, lean_object* v_post_2620_, uint8_t v_usedLetOnly_2621_, uint8_t v_skipConstInApp_2622_, uint8_t v_skipInstances_2623_, lean_object* v_x_2624_, lean_object* v_x_2625_, lean_object* v___y_2626_, lean_object* v___f_2627_, lean_object* v_toBind_2628_, lean_object* v_e_2629_, lean_object* v_a_2630_){
_start:
{
lean_object* v___y_2632_; 
switch(lean_obj_tag(v_a_2630_))
{
case 0:
{
lean_object* v_e_2664_; lean_object* v_toPure_2665_; lean_object* v___x_2666_; 
lean_dec_ref(v_e_2629_);
lean_dec(v_toBind_2628_);
lean_dec(v___f_2627_);
lean_dec(v___y_2626_);
lean_dec(v_x_2625_);
lean_dec(v_post_2620_);
lean_dec(v_pre_2619_);
lean_dec_ref(v_inst_2618_);
lean_dec(v_inst_2617_);
lean_dec_ref(v_inst_2616_);
v_e_2664_ = lean_ctor_get(v_a_2630_, 0);
lean_inc_ref(v_e_2664_);
lean_dec_ref_known(v_a_2630_, 1);
v_toPure_2665_ = lean_ctor_get(v_toApplicative_2615_, 1);
lean_inc(v_toPure_2665_);
lean_dec_ref(v_toApplicative_2615_);
v___x_2666_ = lean_apply_2(v_toPure_2665_, lean_box(0), v_e_2664_);
return v___x_2666_;
}
case 1:
{
lean_object* v_e_2667_; lean_object* v___x_2668_; 
lean_dec_ref(v_e_2629_);
lean_dec(v_toBind_2628_);
lean_dec(v___f_2627_);
lean_dec_ref(v_toApplicative_2615_);
v_e_2667_ = lean_ctor_get(v_a_2630_, 0);
lean_inc_ref(v_e_2667_);
lean_dec_ref_known(v_a_2630_, 1);
v___x_2668_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2616_, v_inst_2617_, v_inst_2618_, v_pre_2619_, v_post_2620_, v_usedLetOnly_2621_, v_skipConstInApp_2622_, v_skipInstances_2623_, v_x_2624_, v_x_2625_, v_e_2667_, v___y_2626_);
lean_dec(v___y_2626_);
return v___x_2668_;
}
default: 
{
lean_object* v_e_x3f_2669_; 
lean_dec_ref(v_toApplicative_2615_);
v_e_x3f_2669_ = lean_ctor_get(v_a_2630_, 0);
lean_inc(v_e_x3f_2669_);
lean_dec_ref_known(v_a_2630_, 1);
if (lean_obj_tag(v_e_x3f_2669_) == 0)
{
v___y_2632_ = v_e_2629_;
goto v___jp_2631_;
}
else
{
lean_object* v_val_2670_; 
lean_dec_ref(v_e_2629_);
v_val_2670_ = lean_ctor_get(v_e_x3f_2669_, 0);
lean_inc(v_val_2670_);
lean_dec_ref_known(v_e_x3f_2669_, 1);
v___y_2632_ = v_val_2670_;
goto v___jp_2631_;
}
}
}
v___jp_2631_:
{
switch(lean_obj_tag(v___y_2632_))
{
case 7:
{
lean_object* v___x_2633_; lean_object* v___x_2634_; 
lean_dec(v_toBind_2628_);
lean_dec(v___f_2627_);
v___x_2633_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___closed__0));
v___x_2634_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2616_, v_inst_2617_, v_inst_2618_, v_pre_2619_, v_post_2620_, v_usedLetOnly_2621_, v_skipConstInApp_2622_, v_skipInstances_2623_, v_x_2624_, v_x_2625_, v___x_2633_, v___y_2632_, v___y_2626_);
lean_dec(v___y_2626_);
return v___x_2634_;
}
case 6:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; 
lean_dec(v_toBind_2628_);
lean_dec(v___f_2627_);
v___x_2635_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___closed__0));
v___x_2636_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2616_, v_inst_2617_, v_inst_2618_, v_pre_2619_, v_post_2620_, v_usedLetOnly_2621_, v_skipConstInApp_2622_, v_skipInstances_2623_, v_x_2624_, v_x_2625_, v___x_2635_, v___y_2632_, v___y_2626_);
lean_dec(v___y_2626_);
return v___x_2636_;
}
case 8:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; 
lean_dec(v_toBind_2628_);
lean_dec(v___f_2627_);
v___x_2637_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___closed__0));
v___x_2638_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2616_, v_inst_2617_, v_inst_2618_, v_pre_2619_, v_post_2620_, v_usedLetOnly_2621_, v_skipConstInApp_2622_, v_skipInstances_2623_, v_x_2624_, v_x_2625_, v___x_2637_, v___y_2632_, v___y_2626_);
lean_dec(v___y_2626_);
return v___x_2638_;
}
case 5:
{
lean_object* v_dummy_2639_; lean_object* v_nargs_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_6388__overap_2644_; lean_object* v___x_2645_; 
lean_dec(v_toBind_2628_);
lean_dec(v_x_2625_);
lean_dec(v_post_2620_);
lean_dec(v_pre_2619_);
lean_dec_ref(v_inst_2618_);
lean_dec(v_inst_2617_);
lean_dec_ref(v_inst_2616_);
v_dummy_2639_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_2640_ = l_Lean_Expr_getAppNumArgs(v___y_2632_);
lean_inc(v_nargs_2640_);
v___x_2641_ = lean_mk_array(v_nargs_2640_, v_dummy_2639_);
v___x_2642_ = lean_unsigned_to_nat(1u);
v___x_2643_ = lean_nat_sub(v_nargs_2640_, v___x_2642_);
lean_dec(v_nargs_2640_);
v___x_6388__overap_2644_ = l_Lean_Expr_withAppAux___redArg(v___f_2627_, v___y_2632_, v___x_2641_, v___x_2643_);
v___x_2645_ = lean_apply_1(v___x_6388__overap_2644_, v___y_2626_);
return v___x_2645_;
}
case 10:
{
lean_object* v_data_2646_; lean_object* v_expr_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___f_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; 
lean_dec(v___f_2627_);
v_data_2646_ = lean_ctor_get(v___y_2632_, 0);
lean_inc(v_data_2646_);
v_expr_2647_ = lean_ctor_get(v___y_2632_, 1);
lean_inc_ref_n(v_expr_2647_, 2);
v___x_2648_ = lean_box(v_usedLetOnly_2621_);
v___x_2649_ = lean_box(v_skipConstInApp_2622_);
v___x_2650_ = lean_box(v_skipInstances_2623_);
lean_inc(v___y_2626_);
lean_inc(v_x_2625_);
lean_inc(v_post_2620_);
lean_inc(v_pre_2619_);
lean_inc_ref(v_inst_2618_);
lean_inc(v_inst_2617_);
lean_inc_ref(v_inst_2616_);
v___f_2651_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10___boxed), 15, 14);
lean_closure_set(v___f_2651_, 0, v_expr_2647_);
lean_closure_set(v___f_2651_, 1, v_data_2646_);
lean_closure_set(v___f_2651_, 2, v_inst_2616_);
lean_closure_set(v___f_2651_, 3, v_inst_2617_);
lean_closure_set(v___f_2651_, 4, v_inst_2618_);
lean_closure_set(v___f_2651_, 5, v_pre_2619_);
lean_closure_set(v___f_2651_, 6, v_post_2620_);
lean_closure_set(v___f_2651_, 7, v___x_2648_);
lean_closure_set(v___f_2651_, 8, v___x_2649_);
lean_closure_set(v___f_2651_, 9, v___x_2650_);
lean_closure_set(v___f_2651_, 10, v_x_2624_);
lean_closure_set(v___f_2651_, 11, v_x_2625_);
lean_closure_set(v___f_2651_, 12, v___y_2626_);
lean_closure_set(v___f_2651_, 13, v___y_2632_);
v___x_2652_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2616_, v_inst_2617_, v_inst_2618_, v_pre_2619_, v_post_2620_, v_usedLetOnly_2621_, v_skipConstInApp_2622_, v_skipInstances_2623_, v_x_2624_, v_x_2625_, v_expr_2647_, v___y_2626_);
lean_dec(v___y_2626_);
v___x_2653_ = lean_apply_4(v_toBind_2628_, lean_box(0), lean_box(0), v___x_2652_, v___f_2651_);
return v___x_2653_;
}
case 11:
{
lean_object* v_typeName_2654_; lean_object* v_idx_2655_; lean_object* v_struct_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___f_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; 
lean_dec(v___f_2627_);
v_typeName_2654_ = lean_ctor_get(v___y_2632_, 0);
lean_inc(v_typeName_2654_);
v_idx_2655_ = lean_ctor_get(v___y_2632_, 1);
lean_inc(v_idx_2655_);
v_struct_2656_ = lean_ctor_get(v___y_2632_, 2);
lean_inc_ref_n(v_struct_2656_, 2);
v___x_2657_ = lean_box(v_usedLetOnly_2621_);
v___x_2658_ = lean_box(v_skipConstInApp_2622_);
v___x_2659_ = lean_box(v_skipInstances_2623_);
lean_inc(v___y_2626_);
lean_inc(v_x_2625_);
lean_inc(v_post_2620_);
lean_inc(v_pre_2619_);
lean_inc_ref(v_inst_2618_);
lean_inc(v_inst_2617_);
lean_inc_ref(v_inst_2616_);
v___f_2660_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___boxed), 16, 15);
lean_closure_set(v___f_2660_, 0, v_struct_2656_);
lean_closure_set(v___f_2660_, 1, v_typeName_2654_);
lean_closure_set(v___f_2660_, 2, v_idx_2655_);
lean_closure_set(v___f_2660_, 3, v_inst_2616_);
lean_closure_set(v___f_2660_, 4, v_inst_2617_);
lean_closure_set(v___f_2660_, 5, v_inst_2618_);
lean_closure_set(v___f_2660_, 6, v_pre_2619_);
lean_closure_set(v___f_2660_, 7, v_post_2620_);
lean_closure_set(v___f_2660_, 8, v___x_2657_);
lean_closure_set(v___f_2660_, 9, v___x_2658_);
lean_closure_set(v___f_2660_, 10, v___x_2659_);
lean_closure_set(v___f_2660_, 11, v_x_2624_);
lean_closure_set(v___f_2660_, 12, v_x_2625_);
lean_closure_set(v___f_2660_, 13, v___y_2626_);
lean_closure_set(v___f_2660_, 14, v___y_2632_);
v___x_2661_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2616_, v_inst_2617_, v_inst_2618_, v_pre_2619_, v_post_2620_, v_usedLetOnly_2621_, v_skipConstInApp_2622_, v_skipInstances_2623_, v_x_2624_, v_x_2625_, v_struct_2656_, v___y_2626_);
lean_dec(v___y_2626_);
v___x_2662_ = lean_apply_4(v_toBind_2628_, lean_box(0), lean_box(0), v___x_2661_, v___f_2660_);
return v___x_2662_;
}
default: 
{
lean_object* v___x_2663_; 
lean_dec(v_toBind_2628_);
lean_dec(v___f_2627_);
v___x_2663_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2616_, v_inst_2617_, v_inst_2618_, v_pre_2619_, v_post_2620_, v_usedLetOnly_2621_, v_skipConstInApp_2622_, v_skipInstances_2623_, v_x_2624_, v_x_2625_, v___y_2632_, v___y_2626_);
lean_dec(v___y_2626_);
return v___x_2663_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___boxed(lean_object* v_toApplicative_2671_, lean_object* v_inst_2672_, lean_object* v_inst_2673_, lean_object* v_inst_2674_, lean_object* v_pre_2675_, lean_object* v_post_2676_, lean_object* v_usedLetOnly_2677_, lean_object* v_skipConstInApp_2678_, lean_object* v_skipInstances_2679_, lean_object* v_x_2680_, lean_object* v_x_2681_, lean_object* v___y_2682_, lean_object* v___f_2683_, lean_object* v_toBind_2684_, lean_object* v_e_2685_, lean_object* v_a_2686_){
_start:
{
uint8_t v_usedLetOnly_boxed_2687_; uint8_t v_skipConstInApp_boxed_2688_; uint8_t v_skipInstances_boxed_2689_; lean_object* v_res_2690_; 
v_usedLetOnly_boxed_2687_ = lean_unbox(v_usedLetOnly_2677_);
v_skipConstInApp_boxed_2688_ = lean_unbox(v_skipConstInApp_2678_);
v_skipInstances_boxed_2689_ = lean_unbox(v_skipInstances_2679_);
v_res_2690_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12(v_toApplicative_2671_, v_inst_2672_, v_inst_2673_, v_inst_2674_, v_pre_2675_, v_post_2676_, v_usedLetOnly_boxed_2687_, v_skipConstInApp_boxed_2688_, v_skipInstances_boxed_2689_, v_x_2680_, v_x_2681_, v___y_2682_, v___f_2683_, v_toBind_2684_, v_e_2685_, v_a_2686_);
return v_res_2690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14(lean_object* v_toApplicative_2691_, lean_object* v_inst_2692_, lean_object* v_inst_2693_, lean_object* v_inst_2694_, lean_object* v_pre_2695_, lean_object* v_post_2696_, uint8_t v_usedLetOnly_2697_, uint8_t v_skipConstInApp_2698_, uint8_t v_skipInstances_2699_, lean_object* v_x_2700_, lean_object* v_x_2701_, lean_object* v___f_2702_, lean_object* v_toBind_2703_, lean_object* v_e_2704_, lean_object* v___x_2705_, lean_object* v___y_2706_){
_start:
{
lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___f_2710_; lean_object* v___f_2711_; lean_object* v___x_2712_; 
v___x_2707_ = lean_box(v_usedLetOnly_2697_);
v___x_2708_ = lean_box(v_skipConstInApp_2698_);
v___x_2709_ = lean_box(v_skipInstances_2699_);
lean_inc_ref(v_e_2704_);
lean_inc_n(v_toBind_2703_, 2);
lean_inc(v_pre_2695_);
v___f_2710_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___boxed), 16, 15);
lean_closure_set(v___f_2710_, 0, v_toApplicative_2691_);
lean_closure_set(v___f_2710_, 1, v_inst_2692_);
lean_closure_set(v___f_2710_, 2, v_inst_2693_);
lean_closure_set(v___f_2710_, 3, v_inst_2694_);
lean_closure_set(v___f_2710_, 4, v_pre_2695_);
lean_closure_set(v___f_2710_, 5, v_post_2696_);
lean_closure_set(v___f_2710_, 6, v___x_2707_);
lean_closure_set(v___f_2710_, 7, v___x_2708_);
lean_closure_set(v___f_2710_, 8, v___x_2709_);
lean_closure_set(v___f_2710_, 9, v_x_2700_);
lean_closure_set(v___f_2710_, 10, v_x_2701_);
lean_closure_set(v___f_2710_, 11, v___y_2706_);
lean_closure_set(v___f_2710_, 12, v___f_2702_);
lean_closure_set(v___f_2710_, 13, v_toBind_2703_);
lean_closure_set(v___f_2710_, 14, v_e_2704_);
v___f_2711_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18), 5, 4);
lean_closure_set(v___f_2711_, 0, v_pre_2695_);
lean_closure_set(v___f_2711_, 1, v_e_2704_);
lean_closure_set(v___f_2711_, 2, v_toBind_2703_);
lean_closure_set(v___f_2711_, 3, v___f_2710_);
v___x_2712_ = lean_apply_4(v_toBind_2703_, lean_box(0), lean_box(0), v___x_2705_, v___f_2711_);
return v___x_2712_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___boxed(lean_object* v_toApplicative_2713_, lean_object* v_inst_2714_, lean_object* v_inst_2715_, lean_object* v_inst_2716_, lean_object* v_pre_2717_, lean_object* v_post_2718_, lean_object* v_usedLetOnly_2719_, lean_object* v_skipConstInApp_2720_, lean_object* v_skipInstances_2721_, lean_object* v_x_2722_, lean_object* v_x_2723_, lean_object* v___f_2724_, lean_object* v_toBind_2725_, lean_object* v_e_2726_, lean_object* v___x_2727_, lean_object* v___y_2728_){
_start:
{
uint8_t v_usedLetOnly_boxed_2729_; uint8_t v_skipConstInApp_boxed_2730_; uint8_t v_skipInstances_boxed_2731_; lean_object* v_res_2732_; 
v_usedLetOnly_boxed_2729_ = lean_unbox(v_usedLetOnly_2719_);
v_skipConstInApp_boxed_2730_ = lean_unbox(v_skipConstInApp_2720_);
v_skipInstances_boxed_2731_ = lean_unbox(v_skipInstances_2721_);
v_res_2732_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14(v_toApplicative_2713_, v_inst_2714_, v_inst_2715_, v_inst_2716_, v_pre_2717_, v_post_2718_, v_usedLetOnly_boxed_2729_, v_skipConstInApp_boxed_2730_, v_skipInstances_boxed_2731_, v_x_2722_, v_x_2723_, v___f_2724_, v_toBind_2725_, v_e_2726_, v___x_2727_, v___y_2728_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13(lean_object* v_inst_2733_, lean_object* v_toApplicative_2734_, lean_object* v_inst_2735_, lean_object* v_inst_2736_, lean_object* v_pre_2737_, lean_object* v_post_2738_, uint8_t v_usedLetOnly_2739_, uint8_t v_skipConstInApp_2740_, uint8_t v_skipInstances_2741_, lean_object* v_x_2742_, lean_object* v_x_2743_, lean_object* v___f_2744_, lean_object* v_toBind_2745_, lean_object* v_e_2746_, lean_object* v___x_2747_, lean_object* v___x_2748_, lean_object* v___y_2749_, lean_object* v___f_2750_, lean_object* v_a_2751_){
_start:
{
if (lean_obj_tag(v_a_2751_) == 0)
{
lean_object* v___f_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___f_2757_; lean_object* v___x_6430__overap_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; 
v___f_2752_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13___closed__0));
lean_inc(v_inst_2733_);
v___x_2753_ = lean_apply_2(v_inst_2733_, lean_box(0), v___f_2752_);
v___x_2754_ = lean_box(v_usedLetOnly_2739_);
v___x_2755_ = lean_box(v_skipConstInApp_2740_);
v___x_2756_ = lean_box(v_skipInstances_2741_);
lean_inc(v_toBind_2745_);
v___f_2757_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___boxed), 16, 15);
lean_closure_set(v___f_2757_, 0, v_toApplicative_2734_);
lean_closure_set(v___f_2757_, 1, v_inst_2735_);
lean_closure_set(v___f_2757_, 2, v_inst_2733_);
lean_closure_set(v___f_2757_, 3, v_inst_2736_);
lean_closure_set(v___f_2757_, 4, v_pre_2737_);
lean_closure_set(v___f_2757_, 5, v_post_2738_);
lean_closure_set(v___f_2757_, 6, v___x_2754_);
lean_closure_set(v___f_2757_, 7, v___x_2755_);
lean_closure_set(v___f_2757_, 8, v___x_2756_);
lean_closure_set(v___f_2757_, 9, v_x_2742_);
lean_closure_set(v___f_2757_, 10, v_x_2743_);
lean_closure_set(v___f_2757_, 11, v___f_2744_);
lean_closure_set(v___f_2757_, 12, v_toBind_2745_);
lean_closure_set(v___f_2757_, 13, v_e_2746_);
lean_closure_set(v___f_2757_, 14, v___x_2753_);
v___x_6430__overap_2758_ = l_Lean_Meta_withIncRecDepth___redArg(v___x_2747_, v___x_2748_, v___f_2757_);
lean_inc(v___y_2749_);
v___x_2759_ = lean_apply_1(v___x_6430__overap_2758_, v___y_2749_);
v___x_2760_ = lean_apply_4(v_toBind_2745_, lean_box(0), lean_box(0), v___x_2759_, v___f_2750_);
return v___x_2760_;
}
else
{
lean_object* v_val_2761_; lean_object* v_toPure_2762_; lean_object* v___x_2763_; 
lean_dec(v___f_2750_);
lean_dec_ref(v___x_2748_);
lean_dec_ref(v___x_2747_);
lean_dec_ref(v_e_2746_);
lean_dec(v_toBind_2745_);
lean_dec(v___f_2744_);
lean_dec(v_x_2743_);
lean_dec(v_post_2738_);
lean_dec(v_pre_2737_);
lean_dec_ref(v_inst_2736_);
lean_dec_ref(v_inst_2735_);
lean_dec(v_inst_2733_);
v_val_2761_ = lean_ctor_get(v_a_2751_, 0);
lean_inc(v_val_2761_);
lean_dec_ref_known(v_a_2751_, 1);
v_toPure_2762_ = lean_ctor_get(v_toApplicative_2734_, 1);
lean_inc(v_toPure_2762_);
lean_dec_ref(v_toApplicative_2734_);
v___x_2763_ = lean_apply_2(v_toPure_2762_, lean_box(0), v_val_2761_);
return v___x_2763_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13___boxed(lean_object** _args){
lean_object* v_inst_2764_ = _args[0];
lean_object* v_toApplicative_2765_ = _args[1];
lean_object* v_inst_2766_ = _args[2];
lean_object* v_inst_2767_ = _args[3];
lean_object* v_pre_2768_ = _args[4];
lean_object* v_post_2769_ = _args[5];
lean_object* v_usedLetOnly_2770_ = _args[6];
lean_object* v_skipConstInApp_2771_ = _args[7];
lean_object* v_skipInstances_2772_ = _args[8];
lean_object* v_x_2773_ = _args[9];
lean_object* v_x_2774_ = _args[10];
lean_object* v___f_2775_ = _args[11];
lean_object* v_toBind_2776_ = _args[12];
lean_object* v_e_2777_ = _args[13];
lean_object* v___x_2778_ = _args[14];
lean_object* v___x_2779_ = _args[15];
lean_object* v___y_2780_ = _args[16];
lean_object* v___f_2781_ = _args[17];
lean_object* v_a_2782_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_2783_; uint8_t v_skipConstInApp_boxed_2784_; uint8_t v_skipInstances_boxed_2785_; lean_object* v_res_2786_; 
v_usedLetOnly_boxed_2783_ = lean_unbox(v_usedLetOnly_2770_);
v_skipConstInApp_boxed_2784_ = lean_unbox(v_skipConstInApp_2771_);
v_skipInstances_boxed_2785_ = lean_unbox(v_skipInstances_2772_);
v_res_2786_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13(v_inst_2764_, v_toApplicative_2765_, v_inst_2766_, v_inst_2767_, v_pre_2768_, v_post_2769_, v_usedLetOnly_boxed_2783_, v_skipConstInApp_boxed_2784_, v_skipInstances_boxed_2785_, v_x_2773_, v_x_2774_, v___f_2775_, v_toBind_2776_, v_e_2777_, v___x_2778_, v___x_2779_, v___y_2780_, v___f_2781_, v_a_2782_);
lean_dec(v___y_2780_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(lean_object* v_inst_2787_, lean_object* v_inst_2788_, lean_object* v_inst_2789_, lean_object* v_pre_2790_, lean_object* v_post_2791_, uint8_t v_usedLetOnly_2792_, uint8_t v_skipConstInApp_2793_, uint8_t v_skipInstances_2794_, lean_object* v_x_2795_, lean_object* v_x_2796_, lean_object* v_e_2797_, lean_object* v___y_2798_){
_start:
{
lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___f_2801_; lean_object* v___f_2802_; lean_object* v___x_2803_; lean_object* v_toApplicative_2804_; lean_object* v_toBind_2805_; lean_object* v___f_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___f_2809_; lean_object* v___f_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___f_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___f_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; 
lean_inc_ref_n(v_inst_2787_, 2);
v___x_2799_ = l_Lean_MonadCacheT_instMonad___redArg(v_inst_2787_);
v___x_2800_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0);
lean_inc_ref_n(v_inst_2789_, 3);
v___f_2801_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2801_, 0, v___x_2800_);
lean_closure_set(v___f_2801_, 1, v_inst_2789_);
v___f_2802_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2802_, 0, v___x_2800_);
lean_closure_set(v___f_2802_, 1, v_inst_2789_);
v___x_2803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2803_, 0, v___f_2801_);
lean_ctor_set(v___x_2803_, 1, v___f_2802_);
v_toApplicative_2804_ = lean_ctor_get(v_inst_2787_, 0);
lean_inc_ref_n(v_toApplicative_2804_, 5);
v_toBind_2805_ = lean_ctor_get(v_inst_2787_, 1);
lean_inc_n(v_toBind_2805_, 5);
v___f_2806_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2806_, 0, v_toApplicative_2804_);
v___x_2807_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
v___x_2808_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__2));
lean_inc_ref_n(v_e_2797_, 2);
v___f_2809_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2809_, 0, v_toApplicative_2804_);
lean_closure_set(v___f_2809_, 1, v___x_2807_);
lean_closure_set(v___f_2809_, 2, v___x_2808_);
lean_closure_set(v___f_2809_, 3, v_e_2797_);
lean_inc_n(v_x_2796_, 3);
lean_inc_n(v___y_2798_, 3);
v___f_2810_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_2810_, 0, v_toApplicative_2804_);
lean_closure_set(v___f_2810_, 1, v___x_2807_);
lean_closure_set(v___f_2810_, 2, v___x_2808_);
lean_closure_set(v___f_2810_, 3, v_e_2797_);
lean_closure_set(v___f_2810_, 4, v___y_2798_);
lean_closure_set(v___f_2810_, 5, v_x_2796_);
lean_closure_set(v___f_2810_, 6, v_toBind_2805_);
v___x_2811_ = lean_box(v_skipInstances_2794_);
v___x_2812_ = lean_box(v_usedLetOnly_2792_);
v___x_2813_ = lean_box(v_skipConstInApp_2793_);
lean_inc_ref(v___x_2799_);
lean_inc(v_post_2791_);
lean_inc(v_pre_2790_);
lean_inc(v_inst_2788_);
v___f_2814_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9___boxed), 17, 14);
lean_closure_set(v___f_2814_, 0, v___x_2811_);
lean_closure_set(v___f_2814_, 1, v_inst_2787_);
lean_closure_set(v___f_2814_, 2, v_inst_2788_);
lean_closure_set(v___f_2814_, 3, v_inst_2789_);
lean_closure_set(v___f_2814_, 4, v_pre_2790_);
lean_closure_set(v___f_2814_, 5, v_post_2791_);
lean_closure_set(v___f_2814_, 6, v___x_2812_);
lean_closure_set(v___f_2814_, 7, v___x_2813_);
lean_closure_set(v___f_2814_, 8, v_x_2795_);
lean_closure_set(v___f_2814_, 9, v_x_2796_);
lean_closure_set(v___f_2814_, 10, v___x_2799_);
lean_closure_set(v___f_2814_, 11, v_toBind_2805_);
lean_closure_set(v___f_2814_, 12, v_toApplicative_2804_);
lean_closure_set(v___f_2814_, 13, v___f_2806_);
v___x_2815_ = lean_box(v_usedLetOnly_2792_);
v___x_2816_ = lean_box(v_skipConstInApp_2793_);
v___x_2817_ = lean_box(v_skipInstances_2794_);
v___f_2818_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13___boxed), 19, 18);
lean_closure_set(v___f_2818_, 0, v_inst_2788_);
lean_closure_set(v___f_2818_, 1, v_toApplicative_2804_);
lean_closure_set(v___f_2818_, 2, v_inst_2787_);
lean_closure_set(v___f_2818_, 3, v_inst_2789_);
lean_closure_set(v___f_2818_, 4, v_pre_2790_);
lean_closure_set(v___f_2818_, 5, v_post_2791_);
lean_closure_set(v___f_2818_, 6, v___x_2815_);
lean_closure_set(v___f_2818_, 7, v___x_2816_);
lean_closure_set(v___f_2818_, 8, v___x_2817_);
lean_closure_set(v___f_2818_, 9, v_x_2795_);
lean_closure_set(v___f_2818_, 10, v_x_2796_);
lean_closure_set(v___f_2818_, 11, v___f_2814_);
lean_closure_set(v___f_2818_, 12, v_toBind_2805_);
lean_closure_set(v___f_2818_, 13, v_e_2797_);
lean_closure_set(v___f_2818_, 14, v___x_2803_);
lean_closure_set(v___f_2818_, 15, v___x_2799_);
lean_closure_set(v___f_2818_, 16, v___y_2798_);
lean_closure_set(v___f_2818_, 17, v___f_2810_);
v___x_2819_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2819_, 0, lean_box(0));
lean_closure_set(v___x_2819_, 1, lean_box(0));
lean_closure_set(v___x_2819_, 2, v___y_2798_);
v___x_2820_ = lean_apply_2(v_x_2796_, lean_box(0), v___x_2819_);
v___x_2821_ = lean_apply_4(v_toBind_2805_, lean_box(0), lean_box(0), v___x_2820_, v___f_2809_);
v___x_2822_ = lean_apply_4(v_toBind_2805_, lean_box(0), lean_box(0), v___x_2821_, v___f_2818_);
return v___x_2822_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0(lean_object* v_toApplicative_2823_, lean_object* v_inst_2824_, lean_object* v_inst_2825_, lean_object* v_inst_2826_, lean_object* v_pre_2827_, lean_object* v_post_2828_, uint8_t v_usedLetOnly_2829_, uint8_t v_skipConstInApp_2830_, uint8_t v_skipInstances_2831_, lean_object* v_x_2832_, lean_object* v_x_2833_, lean_object* v___y_2834_, lean_object* v_e_2835_, lean_object* v_a_2836_){
_start:
{
lean_object* v___y_2838_; 
switch(lean_obj_tag(v_a_2836_))
{
case 0:
{
lean_object* v_e_2841_; lean_object* v_toPure_2842_; lean_object* v___x_2843_; 
lean_dec_ref(v_e_2835_);
lean_dec(v_x_2833_);
lean_dec(v_post_2828_);
lean_dec(v_pre_2827_);
lean_dec_ref(v_inst_2826_);
lean_dec(v_inst_2825_);
lean_dec_ref(v_inst_2824_);
v_e_2841_ = lean_ctor_get(v_a_2836_, 0);
lean_inc_ref(v_e_2841_);
lean_dec_ref_known(v_a_2836_, 1);
v_toPure_2842_ = lean_ctor_get(v_toApplicative_2823_, 1);
lean_inc(v_toPure_2842_);
lean_dec_ref(v_toApplicative_2823_);
v___x_2843_ = lean_apply_2(v_toPure_2842_, lean_box(0), v_e_2841_);
return v___x_2843_;
}
case 1:
{
lean_object* v_e_2844_; lean_object* v___x_2845_; 
lean_dec_ref(v_e_2835_);
lean_dec_ref(v_toApplicative_2823_);
v_e_2844_ = lean_ctor_get(v_a_2836_, 0);
lean_inc_ref(v_e_2844_);
lean_dec_ref_known(v_a_2836_, 1);
v___x_2845_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2824_, v_inst_2825_, v_inst_2826_, v_pre_2827_, v_post_2828_, v_usedLetOnly_2829_, v_skipConstInApp_2830_, v_skipInstances_2831_, v_x_2832_, v_x_2833_, v_e_2844_, v___y_2834_);
return v___x_2845_;
}
default: 
{
lean_object* v_e_x3f_2846_; 
lean_dec(v_x_2833_);
lean_dec(v_post_2828_);
lean_dec(v_pre_2827_);
lean_dec_ref(v_inst_2826_);
lean_dec(v_inst_2825_);
lean_dec_ref(v_inst_2824_);
v_e_x3f_2846_ = lean_ctor_get(v_a_2836_, 0);
lean_inc(v_e_x3f_2846_);
lean_dec_ref_known(v_a_2836_, 1);
if (lean_obj_tag(v_e_x3f_2846_) == 0)
{
v___y_2838_ = v_e_2835_;
goto v___jp_2837_;
}
else
{
lean_object* v_val_2847_; 
lean_dec_ref(v_e_2835_);
v_val_2847_ = lean_ctor_get(v_e_x3f_2846_, 0);
lean_inc(v_val_2847_);
lean_dec_ref_known(v_e_x3f_2846_, 1);
v___y_2838_ = v_val_2847_;
goto v___jp_2837_;
}
}
}
v___jp_2837_:
{
lean_object* v_toPure_2839_; lean_object* v___x_2840_; 
v_toPure_2839_ = lean_ctor_get(v_toApplicative_2823_, 1);
lean_inc(v_toPure_2839_);
lean_dec_ref(v_toApplicative_2823_);
v___x_2840_ = lean_apply_2(v_toPure_2839_, lean_box(0), v___y_2838_);
return v___x_2840_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0___boxed(lean_object* v_toApplicative_2848_, lean_object* v_inst_2849_, lean_object* v_inst_2850_, lean_object* v_inst_2851_, lean_object* v_pre_2852_, lean_object* v_post_2853_, lean_object* v_usedLetOnly_2854_, lean_object* v_skipConstInApp_2855_, lean_object* v_skipInstances_2856_, lean_object* v_x_2857_, lean_object* v_x_2858_, lean_object* v___y_2859_, lean_object* v_e_2860_, lean_object* v_a_2861_){
_start:
{
uint8_t v_usedLetOnly_boxed_2862_; uint8_t v_skipConstInApp_boxed_2863_; uint8_t v_skipInstances_boxed_2864_; lean_object* v_res_2865_; 
v_usedLetOnly_boxed_2862_ = lean_unbox(v_usedLetOnly_2854_);
v_skipConstInApp_boxed_2863_ = lean_unbox(v_skipConstInApp_2855_);
v_skipInstances_boxed_2864_ = lean_unbox(v_skipInstances_2856_);
v_res_2865_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0(v_toApplicative_2848_, v_inst_2849_, v_inst_2850_, v_inst_2851_, v_pre_2852_, v_post_2853_, v_usedLetOnly_boxed_2862_, v_skipConstInApp_boxed_2863_, v_skipInstances_boxed_2864_, v_x_2857_, v_x_2858_, v___y_2859_, v_e_2860_, v_a_2861_);
lean_dec(v___y_2859_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(lean_object* v_inst_2866_, lean_object* v_inst_2867_, lean_object* v_inst_2868_, lean_object* v_pre_2869_, lean_object* v_post_2870_, uint8_t v_usedLetOnly_2871_, uint8_t v_skipConstInApp_2872_, uint8_t v_skipInstances_2873_, lean_object* v_x_2874_, lean_object* v_x_2875_, lean_object* v_e_2876_, lean_object* v___y_2877_){
_start:
{
lean_object* v_toApplicative_2878_; lean_object* v_toBind_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___f_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; 
v_toApplicative_2878_ = lean_ctor_get(v_inst_2866_, 0);
lean_inc_ref(v_toApplicative_2878_);
v_toBind_2879_ = lean_ctor_get(v_inst_2866_, 1);
lean_inc(v_toBind_2879_);
v___x_2880_ = lean_box(v_usedLetOnly_2871_);
v___x_2881_ = lean_box(v_skipConstInApp_2872_);
v___x_2882_ = lean_box(v_skipInstances_2873_);
lean_inc_ref(v_e_2876_);
lean_inc(v___y_2877_);
lean_inc(v_post_2870_);
v___f_2883_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0___boxed), 14, 13);
lean_closure_set(v___f_2883_, 0, v_toApplicative_2878_);
lean_closure_set(v___f_2883_, 1, v_inst_2866_);
lean_closure_set(v___f_2883_, 2, v_inst_2867_);
lean_closure_set(v___f_2883_, 3, v_inst_2868_);
lean_closure_set(v___f_2883_, 4, v_pre_2869_);
lean_closure_set(v___f_2883_, 5, v_post_2870_);
lean_closure_set(v___f_2883_, 6, v___x_2880_);
lean_closure_set(v___f_2883_, 7, v___x_2881_);
lean_closure_set(v___f_2883_, 8, v___x_2882_);
lean_closure_set(v___f_2883_, 9, v_x_2874_);
lean_closure_set(v___f_2883_, 10, v_x_2875_);
lean_closure_set(v___f_2883_, 11, v___y_2877_);
lean_closure_set(v___f_2883_, 12, v_e_2876_);
v___x_2884_ = lean_apply_1(v_post_2870_, v_e_2876_);
v___x_2885_ = lean_apply_4(v_toBind_2879_, lean_box(0), lean_box(0), v___x_2884_, v___f_2883_);
return v___x_2885_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3(lean_object* v_inst_2886_, lean_object* v_inst_2887_, lean_object* v_inst_2888_, lean_object* v_pre_2889_, lean_object* v_post_2890_, uint8_t v_usedLetOnly_2891_, uint8_t v_skipConstInApp_2892_, uint8_t v_skipInstances_2893_, lean_object* v_x_2894_, lean_object* v_x_2895_, lean_object* v___y_2896_, lean_object* v_a_2897_){
_start:
{
lean_object* v___x_2898_; 
v___x_2898_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2886_, v_inst_2887_, v_inst_2888_, v_pre_2889_, v_post_2890_, v_usedLetOnly_2891_, v_skipConstInApp_2892_, v_skipInstances_2893_, v_x_2894_, v_x_2895_, v_a_2897_, v___y_2896_);
return v___x_2898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___boxed(lean_object* v_inst_2899_, lean_object* v_inst_2900_, lean_object* v_inst_2901_, lean_object* v_pre_2902_, lean_object* v_post_2903_, lean_object* v_usedLetOnly_2904_, lean_object* v_skipConstInApp_2905_, lean_object* v_skipInstances_2906_, lean_object* v_x_2907_, lean_object* v_x_2908_, lean_object* v_e_2909_, lean_object* v___y_2910_){
_start:
{
uint8_t v_usedLetOnly_boxed_2911_; uint8_t v_skipConstInApp_boxed_2912_; uint8_t v_skipInstances_boxed_2913_; lean_object* v_res_2914_; 
v_usedLetOnly_boxed_2911_ = lean_unbox(v_usedLetOnly_2904_);
v_skipConstInApp_boxed_2912_ = lean_unbox(v_skipConstInApp_2905_);
v_skipInstances_boxed_2913_ = lean_unbox(v_skipInstances_2906_);
v_res_2914_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2899_, v_inst_2900_, v_inst_2901_, v_pre_2902_, v_post_2903_, v_usedLetOnly_boxed_2911_, v_skipConstInApp_boxed_2912_, v_skipInstances_boxed_2913_, v_x_2907_, v_x_2908_, v_e_2909_, v___y_2910_);
lean_dec(v___y_2910_);
return v_res_2914_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___boxed(lean_object* v_inst_2915_, lean_object* v_inst_2916_, lean_object* v_inst_2917_, lean_object* v_pre_2918_, lean_object* v_post_2919_, lean_object* v_usedLetOnly_2920_, lean_object* v_skipConstInApp_2921_, lean_object* v_skipInstances_2922_, lean_object* v_x_2923_, lean_object* v_x_2924_, lean_object* v_fvars_2925_, lean_object* v_e_2926_, lean_object* v___y_2927_){
_start:
{
uint8_t v_usedLetOnly_boxed_2928_; uint8_t v_skipConstInApp_boxed_2929_; uint8_t v_skipInstances_boxed_2930_; lean_object* v_res_2931_; 
v_usedLetOnly_boxed_2928_ = lean_unbox(v_usedLetOnly_2920_);
v_skipConstInApp_boxed_2929_ = lean_unbox(v_skipConstInApp_2921_);
v_skipInstances_boxed_2930_ = lean_unbox(v_skipInstances_2922_);
v_res_2931_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2915_, v_inst_2916_, v_inst_2917_, v_pre_2918_, v_post_2919_, v_usedLetOnly_boxed_2928_, v_skipConstInApp_boxed_2929_, v_skipInstances_boxed_2930_, v_x_2923_, v_x_2924_, v_fvars_2925_, v_e_2926_, v___y_2927_);
lean_dec(v___y_2927_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___boxed(lean_object* v_inst_2932_, lean_object* v_inst_2933_, lean_object* v_inst_2934_, lean_object* v_pre_2935_, lean_object* v_post_2936_, lean_object* v_usedLetOnly_2937_, lean_object* v_skipConstInApp_2938_, lean_object* v_skipInstances_2939_, lean_object* v_x_2940_, lean_object* v_x_2941_, lean_object* v_fvars_2942_, lean_object* v_e_2943_, lean_object* v___y_2944_){
_start:
{
uint8_t v_usedLetOnly_boxed_2945_; uint8_t v_skipConstInApp_boxed_2946_; uint8_t v_skipInstances_boxed_2947_; lean_object* v_res_2948_; 
v_usedLetOnly_boxed_2945_ = lean_unbox(v_usedLetOnly_2937_);
v_skipConstInApp_boxed_2946_ = lean_unbox(v_skipConstInApp_2938_);
v_skipInstances_boxed_2947_ = lean_unbox(v_skipInstances_2939_);
v_res_2948_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2932_, v_inst_2933_, v_inst_2934_, v_pre_2935_, v_post_2936_, v_usedLetOnly_boxed_2945_, v_skipConstInApp_boxed_2946_, v_skipInstances_boxed_2947_, v_x_2940_, v_x_2941_, v_fvars_2942_, v_e_2943_, v___y_2944_);
lean_dec(v___y_2944_);
return v_res_2948_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___boxed(lean_object* v_inst_2949_, lean_object* v_inst_2950_, lean_object* v_inst_2951_, lean_object* v_pre_2952_, lean_object* v_post_2953_, lean_object* v_usedLetOnly_2954_, lean_object* v_skipConstInApp_2955_, lean_object* v_skipInstances_2956_, lean_object* v_x_2957_, lean_object* v_x_2958_, lean_object* v_fvars_2959_, lean_object* v_e_2960_, lean_object* v___y_2961_){
_start:
{
uint8_t v_usedLetOnly_boxed_2962_; uint8_t v_skipConstInApp_boxed_2963_; uint8_t v_skipInstances_boxed_2964_; lean_object* v_res_2965_; 
v_usedLetOnly_boxed_2962_ = lean_unbox(v_usedLetOnly_2954_);
v_skipConstInApp_boxed_2963_ = lean_unbox(v_skipConstInApp_2955_);
v_skipInstances_boxed_2964_ = lean_unbox(v_skipInstances_2956_);
v_res_2965_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2949_, v_inst_2950_, v_inst_2951_, v_pre_2952_, v_post_2953_, v_usedLetOnly_boxed_2962_, v_skipConstInApp_boxed_2963_, v_skipInstances_boxed_2964_, v_x_2957_, v_x_2958_, v_fvars_2959_, v_e_2960_, v___y_2961_);
lean_dec(v___y_2961_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit(lean_object* v_m_2966_, lean_object* v_inst_2967_, lean_object* v_inst_2968_, lean_object* v_inst_2969_, lean_object* v_pre_2970_, lean_object* v_post_2971_, uint8_t v_usedLetOnly_2972_, uint8_t v_skipConstInApp_2973_, uint8_t v_skipInstances_2974_, lean_object* v_x_2975_, lean_object* v_x_2976_, lean_object* v_e_2977_, lean_object* v___y_2978_){
_start:
{
lean_object* v___x_2979_; 
v___x_2979_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2967_, v_inst_2968_, v_inst_2969_, v_pre_2970_, v_post_2971_, v_usedLetOnly_2972_, v_skipConstInApp_2973_, v_skipInstances_2974_, v_x_2975_, v_x_2976_, v_e_2977_, v___y_2978_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___boxed(lean_object* v_m_2980_, lean_object* v_inst_2981_, lean_object* v_inst_2982_, lean_object* v_inst_2983_, lean_object* v_pre_2984_, lean_object* v_post_2985_, lean_object* v_usedLetOnly_2986_, lean_object* v_skipConstInApp_2987_, lean_object* v_skipInstances_2988_, lean_object* v_x_2989_, lean_object* v_x_2990_, lean_object* v_e_2991_, lean_object* v___y_2992_){
_start:
{
uint8_t v_usedLetOnly_boxed_2993_; uint8_t v_skipConstInApp_boxed_2994_; uint8_t v_skipInstances_boxed_2995_; lean_object* v_res_2996_; 
v_usedLetOnly_boxed_2993_ = lean_unbox(v_usedLetOnly_2986_);
v_skipConstInApp_boxed_2994_ = lean_unbox(v_skipConstInApp_2987_);
v_skipInstances_boxed_2995_ = lean_unbox(v_skipInstances_2988_);
v_res_2996_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit(v_m_2980_, v_inst_2981_, v_inst_2982_, v_inst_2983_, v_pre_2984_, v_post_2985_, v_usedLetOnly_boxed_2993_, v_skipConstInApp_boxed_2994_, v_skipInstances_boxed_2995_, v_x_2989_, v_x_2990_, v_e_2991_, v___y_2992_);
lean_dec(v___y_2992_);
return v_res_2996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet(lean_object* v_m_2997_, lean_object* v_inst_2998_, lean_object* v_inst_2999_, lean_object* v_inst_3000_, lean_object* v_pre_3001_, lean_object* v_post_3002_, uint8_t v_usedLetOnly_3003_, uint8_t v_skipConstInApp_3004_, uint8_t v_skipInstances_3005_, lean_object* v_x_3006_, lean_object* v_x_3007_, lean_object* v_fvars_3008_, lean_object* v_e_3009_, lean_object* v___y_3010_){
_start:
{
lean_object* v___x_3011_; 
v___x_3011_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2998_, v_inst_2999_, v_inst_3000_, v_pre_3001_, v_post_3002_, v_usedLetOnly_3003_, v_skipConstInApp_3004_, v_skipInstances_3005_, v_x_3006_, v_x_3007_, v_fvars_3008_, v_e_3009_, v___y_3010_);
return v___x_3011_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___boxed(lean_object* v_m_3012_, lean_object* v_inst_3013_, lean_object* v_inst_3014_, lean_object* v_inst_3015_, lean_object* v_pre_3016_, lean_object* v_post_3017_, lean_object* v_usedLetOnly_3018_, lean_object* v_skipConstInApp_3019_, lean_object* v_skipInstances_3020_, lean_object* v_x_3021_, lean_object* v_x_3022_, lean_object* v_fvars_3023_, lean_object* v_e_3024_, lean_object* v___y_3025_){
_start:
{
uint8_t v_usedLetOnly_boxed_3026_; uint8_t v_skipConstInApp_boxed_3027_; uint8_t v_skipInstances_boxed_3028_; lean_object* v_res_3029_; 
v_usedLetOnly_boxed_3026_ = lean_unbox(v_usedLetOnly_3018_);
v_skipConstInApp_boxed_3027_ = lean_unbox(v_skipConstInApp_3019_);
v_skipInstances_boxed_3028_ = lean_unbox(v_skipInstances_3020_);
v_res_3029_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet(v_m_3012_, v_inst_3013_, v_inst_3014_, v_inst_3015_, v_pre_3016_, v_post_3017_, v_usedLetOnly_boxed_3026_, v_skipConstInApp_boxed_3027_, v_skipInstances_boxed_3028_, v_x_3021_, v_x_3022_, v_fvars_3023_, v_e_3024_, v___y_3025_);
lean_dec(v___y_3025_);
return v_res_3029_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost(lean_object* v_m_3030_, lean_object* v_inst_3031_, lean_object* v_inst_3032_, lean_object* v_inst_3033_, lean_object* v_pre_3034_, lean_object* v_post_3035_, uint8_t v_usedLetOnly_3036_, uint8_t v_skipConstInApp_3037_, uint8_t v_skipInstances_3038_, lean_object* v_x_3039_, lean_object* v_x_3040_, lean_object* v_e_3041_, lean_object* v___y_3042_){
_start:
{
lean_object* v___x_3043_; 
v___x_3043_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_3031_, v_inst_3032_, v_inst_3033_, v_pre_3034_, v_post_3035_, v_usedLetOnly_3036_, v_skipConstInApp_3037_, v_skipInstances_3038_, v_x_3039_, v_x_3040_, v_e_3041_, v___y_3042_);
return v___x_3043_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___boxed(lean_object* v_m_3044_, lean_object* v_inst_3045_, lean_object* v_inst_3046_, lean_object* v_inst_3047_, lean_object* v_pre_3048_, lean_object* v_post_3049_, lean_object* v_usedLetOnly_3050_, lean_object* v_skipConstInApp_3051_, lean_object* v_skipInstances_3052_, lean_object* v_x_3053_, lean_object* v_x_3054_, lean_object* v_e_3055_, lean_object* v___y_3056_){
_start:
{
uint8_t v_usedLetOnly_boxed_3057_; uint8_t v_skipConstInApp_boxed_3058_; uint8_t v_skipInstances_boxed_3059_; lean_object* v_res_3060_; 
v_usedLetOnly_boxed_3057_ = lean_unbox(v_usedLetOnly_3050_);
v_skipConstInApp_boxed_3058_ = lean_unbox(v_skipConstInApp_3051_);
v_skipInstances_boxed_3059_ = lean_unbox(v_skipInstances_3052_);
v_res_3060_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost(v_m_3044_, v_inst_3045_, v_inst_3046_, v_inst_3047_, v_pre_3048_, v_post_3049_, v_usedLetOnly_boxed_3057_, v_skipConstInApp_boxed_3058_, v_skipInstances_boxed_3059_, v_x_3053_, v_x_3054_, v_e_3055_, v___y_3056_);
lean_dec(v___y_3056_);
return v_res_3060_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda(lean_object* v_m_3061_, lean_object* v_inst_3062_, lean_object* v_inst_3063_, lean_object* v_inst_3064_, lean_object* v_pre_3065_, lean_object* v_post_3066_, uint8_t v_usedLetOnly_3067_, uint8_t v_skipConstInApp_3068_, uint8_t v_skipInstances_3069_, lean_object* v_x_3070_, lean_object* v_x_3071_, lean_object* v_fvars_3072_, lean_object* v_e_3073_, lean_object* v___y_3074_){
_start:
{
lean_object* v___x_3075_; 
v___x_3075_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_3062_, v_inst_3063_, v_inst_3064_, v_pre_3065_, v_post_3066_, v_usedLetOnly_3067_, v_skipConstInApp_3068_, v_skipInstances_3069_, v_x_3070_, v_x_3071_, v_fvars_3072_, v_e_3073_, v___y_3074_);
return v___x_3075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___boxed(lean_object* v_m_3076_, lean_object* v_inst_3077_, lean_object* v_inst_3078_, lean_object* v_inst_3079_, lean_object* v_pre_3080_, lean_object* v_post_3081_, lean_object* v_usedLetOnly_3082_, lean_object* v_skipConstInApp_3083_, lean_object* v_skipInstances_3084_, lean_object* v_x_3085_, lean_object* v_x_3086_, lean_object* v_fvars_3087_, lean_object* v_e_3088_, lean_object* v___y_3089_){
_start:
{
uint8_t v_usedLetOnly_boxed_3090_; uint8_t v_skipConstInApp_boxed_3091_; uint8_t v_skipInstances_boxed_3092_; lean_object* v_res_3093_; 
v_usedLetOnly_boxed_3090_ = lean_unbox(v_usedLetOnly_3082_);
v_skipConstInApp_boxed_3091_ = lean_unbox(v_skipConstInApp_3083_);
v_skipInstances_boxed_3092_ = lean_unbox(v_skipInstances_3084_);
v_res_3093_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda(v_m_3076_, v_inst_3077_, v_inst_3078_, v_inst_3079_, v_pre_3080_, v_post_3081_, v_usedLetOnly_boxed_3090_, v_skipConstInApp_boxed_3091_, v_skipInstances_boxed_3092_, v_x_3085_, v_x_3086_, v_fvars_3087_, v_e_3088_, v___y_3089_);
lean_dec(v___y_3089_);
return v_res_3093_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall(lean_object* v_m_3094_, lean_object* v_inst_3095_, lean_object* v_inst_3096_, lean_object* v_inst_3097_, lean_object* v_pre_3098_, lean_object* v_post_3099_, uint8_t v_usedLetOnly_3100_, uint8_t v_skipConstInApp_3101_, uint8_t v_skipInstances_3102_, lean_object* v_x_3103_, lean_object* v_x_3104_, lean_object* v_fvars_3105_, lean_object* v_e_3106_, lean_object* v___y_3107_){
_start:
{
lean_object* v___x_3108_; 
v___x_3108_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_3095_, v_inst_3096_, v_inst_3097_, v_pre_3098_, v_post_3099_, v_usedLetOnly_3100_, v_skipConstInApp_3101_, v_skipInstances_3102_, v_x_3103_, v_x_3104_, v_fvars_3105_, v_e_3106_, v___y_3107_);
return v___x_3108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___boxed(lean_object* v_m_3109_, lean_object* v_inst_3110_, lean_object* v_inst_3111_, lean_object* v_inst_3112_, lean_object* v_pre_3113_, lean_object* v_post_3114_, lean_object* v_usedLetOnly_3115_, lean_object* v_skipConstInApp_3116_, lean_object* v_skipInstances_3117_, lean_object* v_x_3118_, lean_object* v_x_3119_, lean_object* v_fvars_3120_, lean_object* v_e_3121_, lean_object* v___y_3122_){
_start:
{
uint8_t v_usedLetOnly_boxed_3123_; uint8_t v_skipConstInApp_boxed_3124_; uint8_t v_skipInstances_boxed_3125_; lean_object* v_res_3126_; 
v_usedLetOnly_boxed_3123_ = lean_unbox(v_usedLetOnly_3115_);
v_skipConstInApp_boxed_3124_ = lean_unbox(v_skipConstInApp_3116_);
v_skipInstances_boxed_3125_ = lean_unbox(v_skipInstances_3117_);
v_res_3126_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall(v_m_3109_, v_inst_3110_, v_inst_3111_, v_inst_3112_, v_pre_3113_, v_post_3114_, v_usedLetOnly_boxed_3123_, v_skipConstInApp_boxed_3124_, v_skipInstances_boxed_3125_, v_x_3118_, v_x_3119_, v_fvars_3120_, v_e_3121_, v___y_3122_);
lean_dec(v___y_3122_);
return v_res_3126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0(lean_object* v_x_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_){
_start:
{
lean_object* v___x_3133_; lean_object* v___x_3134_; 
v___x_3133_ = lean_apply_1(v_x_3127_, lean_box(0));
v___x_3134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3134_, 0, v___x_3133_);
return v___x_3134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0___boxed(lean_object* v_x_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_){
_start:
{
lean_object* v_res_3141_; 
v_res_3141_ = l_Lean_Meta_transformWithCache___redArg___lam__0(v_x_3135_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_);
lean_dec(v___y_3139_);
lean_dec_ref(v___y_3138_);
lean_dec(v___y_3137_);
lean_dec_ref(v___y_3136_);
return v_res_3141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__1(lean_object* v_inst_3142_, lean_object* v_00_u03b1_3143_, lean_object* v_x_3144_){
_start:
{
lean_object* v___f_3145_; lean_object* v___x_3146_; 
v___f_3145_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3145_, 0, v_x_3144_);
v___x_3146_ = lean_apply_2(v_inst_3142_, lean_box(0), v___f_3145_);
return v___x_3146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4(lean_object* v_toPure_3147_, lean_object* v_x_3148_, lean_object* v_toBind_3149_, lean_object* v_inst_3150_, lean_object* v_inst_3151_, lean_object* v_inst_3152_, lean_object* v_pre_3153_, lean_object* v_post_3154_, uint8_t v_usedLetOnly_3155_, uint8_t v_skipConstInApp_3156_, uint8_t v_skipInstances_3157_, lean_object* v_x_3158_, lean_object* v_input_3159_, lean_object* v_ref_3160_){
_start:
{
lean_object* v___f_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
lean_inc(v_toBind_3149_);
lean_inc(v_x_3148_);
lean_inc(v_ref_3160_);
v___f_3161_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__4), 5, 4);
lean_closure_set(v___f_3161_, 0, v_toPure_3147_);
lean_closure_set(v___f_3161_, 1, v_ref_3160_);
lean_closure_set(v___f_3161_, 2, v_x_3148_);
lean_closure_set(v___f_3161_, 3, v_toBind_3149_);
v___x_3162_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_3150_, v_inst_3151_, v_inst_3152_, v_pre_3153_, v_post_3154_, v_usedLetOnly_3155_, v_skipConstInApp_3156_, v_skipInstances_3157_, v_x_3158_, v_x_3148_, v_input_3159_, v_ref_3160_);
lean_dec(v_ref_3160_);
v___x_3163_ = lean_apply_4(v_toBind_3149_, lean_box(0), lean_box(0), v___x_3162_, v___f_3161_);
return v___x_3163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4___boxed(lean_object* v_toPure_3164_, lean_object* v_x_3165_, lean_object* v_toBind_3166_, lean_object* v_inst_3167_, lean_object* v_inst_3168_, lean_object* v_inst_3169_, lean_object* v_pre_3170_, lean_object* v_post_3171_, lean_object* v_usedLetOnly_3172_, lean_object* v_skipConstInApp_3173_, lean_object* v_skipInstances_3174_, lean_object* v_x_3175_, lean_object* v_input_3176_, lean_object* v_ref_3177_){
_start:
{
uint8_t v_usedLetOnly_boxed_3178_; uint8_t v_skipConstInApp_boxed_3179_; uint8_t v_skipInstances_boxed_3180_; lean_object* v_res_3181_; 
v_usedLetOnly_boxed_3178_ = lean_unbox(v_usedLetOnly_3172_);
v_skipConstInApp_boxed_3179_ = lean_unbox(v_skipConstInApp_3173_);
v_skipInstances_boxed_3180_ = lean_unbox(v_skipInstances_3174_);
v_res_3181_ = l_Lean_Meta_transformWithCache___redArg___lam__4(v_toPure_3164_, v_x_3165_, v_toBind_3166_, v_inst_3167_, v_inst_3168_, v_inst_3169_, v_pre_3170_, v_post_3171_, v_usedLetOnly_boxed_3178_, v_skipConstInApp_boxed_3179_, v_skipInstances_boxed_3180_, v_x_3175_, v_input_3176_, v_ref_3177_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg(lean_object* v_inst_3182_, lean_object* v_inst_3183_, lean_object* v_inst_3184_, lean_object* v_input_3185_, lean_object* v_cache_3186_, lean_object* v_pre_3187_, lean_object* v_post_3188_, uint8_t v_usedLetOnly_3189_, uint8_t v_skipConstInApp_3190_, uint8_t v_skipInstances_3191_){
_start:
{
lean_object* v_x_3192_; lean_object* v_toApplicative_3193_; lean_object* v_toBind_3194_; lean_object* v_toPure_3195_; lean_object* v_x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___f_3202_; lean_object* v___x_3203_; 
v_x_3192_ = lean_box(0);
v_toApplicative_3193_ = lean_ctor_get(v_inst_3182_, 0);
v_toBind_3194_ = lean_ctor_get(v_inst_3182_, 1);
lean_inc_n(v_toBind_3194_, 2);
v_toPure_3195_ = lean_ctor_get(v_toApplicative_3193_, 1);
lean_inc(v_toPure_3195_);
lean_inc_n(v_inst_3183_, 2);
v_x_3196_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__1), 3, 1);
lean_closure_set(v_x_3196_, 0, v_inst_3183_);
v___x_3197_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_3197_, 0, lean_box(0));
lean_closure_set(v___x_3197_, 1, lean_box(0));
lean_closure_set(v___x_3197_, 2, v_cache_3186_);
v___x_3198_ = l_Lean_Meta_transformWithCache___redArg___lam__1(v_inst_3183_, lean_box(0), v___x_3197_);
v___x_3199_ = lean_box(v_usedLetOnly_3189_);
v___x_3200_ = lean_box(v_skipConstInApp_3190_);
v___x_3201_ = lean_box(v_skipInstances_3191_);
v___f_3202_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__4___boxed), 14, 13);
lean_closure_set(v___f_3202_, 0, v_toPure_3195_);
lean_closure_set(v___f_3202_, 1, v_x_3196_);
lean_closure_set(v___f_3202_, 2, v_toBind_3194_);
lean_closure_set(v___f_3202_, 3, v_inst_3182_);
lean_closure_set(v___f_3202_, 4, v_inst_3183_);
lean_closure_set(v___f_3202_, 5, v_inst_3184_);
lean_closure_set(v___f_3202_, 6, v_pre_3187_);
lean_closure_set(v___f_3202_, 7, v_post_3188_);
lean_closure_set(v___f_3202_, 8, v___x_3199_);
lean_closure_set(v___f_3202_, 9, v___x_3200_);
lean_closure_set(v___f_3202_, 10, v___x_3201_);
lean_closure_set(v___f_3202_, 11, v_x_3192_);
lean_closure_set(v___f_3202_, 12, v_input_3185_);
v___x_3203_ = lean_apply_4(v_toBind_3194_, lean_box(0), lean_box(0), v___x_3198_, v___f_3202_);
return v___x_3203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___boxed(lean_object* v_inst_3204_, lean_object* v_inst_3205_, lean_object* v_inst_3206_, lean_object* v_input_3207_, lean_object* v_cache_3208_, lean_object* v_pre_3209_, lean_object* v_post_3210_, lean_object* v_usedLetOnly_3211_, lean_object* v_skipConstInApp_3212_, lean_object* v_skipInstances_3213_){
_start:
{
uint8_t v_usedLetOnly_boxed_3214_; uint8_t v_skipConstInApp_boxed_3215_; uint8_t v_skipInstances_boxed_3216_; lean_object* v_res_3217_; 
v_usedLetOnly_boxed_3214_ = lean_unbox(v_usedLetOnly_3211_);
v_skipConstInApp_boxed_3215_ = lean_unbox(v_skipConstInApp_3212_);
v_skipInstances_boxed_3216_ = lean_unbox(v_skipInstances_3213_);
v_res_3217_ = l_Lean_Meta_transformWithCache___redArg(v_inst_3204_, v_inst_3205_, v_inst_3206_, v_input_3207_, v_cache_3208_, v_pre_3209_, v_post_3210_, v_usedLetOnly_boxed_3214_, v_skipConstInApp_boxed_3215_, v_skipInstances_boxed_3216_);
return v_res_3217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache(lean_object* v_m_3218_, lean_object* v_inst_3219_, lean_object* v_inst_3220_, lean_object* v_inst_3221_, lean_object* v_input_3222_, lean_object* v_cache_3223_, lean_object* v_pre_3224_, lean_object* v_post_3225_, uint8_t v_usedLetOnly_3226_, uint8_t v_skipConstInApp_3227_, uint8_t v_skipInstances_3228_){
_start:
{
lean_object* v_x_3229_; lean_object* v_toApplicative_3230_; lean_object* v_toBind_3231_; lean_object* v_toPure_3232_; lean_object* v_x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___f_3239_; lean_object* v___x_3240_; 
v_x_3229_ = lean_box(0);
v_toApplicative_3230_ = lean_ctor_get(v_inst_3219_, 0);
v_toBind_3231_ = lean_ctor_get(v_inst_3219_, 1);
lean_inc_n(v_toBind_3231_, 2);
v_toPure_3232_ = lean_ctor_get(v_toApplicative_3230_, 1);
lean_inc(v_toPure_3232_);
lean_inc_n(v_inst_3220_, 2);
v_x_3233_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__1), 3, 1);
lean_closure_set(v_x_3233_, 0, v_inst_3220_);
v___x_3234_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_3234_, 0, lean_box(0));
lean_closure_set(v___x_3234_, 1, lean_box(0));
lean_closure_set(v___x_3234_, 2, v_cache_3223_);
v___x_3235_ = l_Lean_Meta_transformWithCache___redArg___lam__1(v_inst_3220_, lean_box(0), v___x_3234_);
v___x_3236_ = lean_box(v_usedLetOnly_3226_);
v___x_3237_ = lean_box(v_skipConstInApp_3227_);
v___x_3238_ = lean_box(v_skipInstances_3228_);
v___f_3239_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__4___boxed), 14, 13);
lean_closure_set(v___f_3239_, 0, v_toPure_3232_);
lean_closure_set(v___f_3239_, 1, v_x_3233_);
lean_closure_set(v___f_3239_, 2, v_toBind_3231_);
lean_closure_set(v___f_3239_, 3, v_inst_3219_);
lean_closure_set(v___f_3239_, 4, v_inst_3220_);
lean_closure_set(v___f_3239_, 5, v_inst_3221_);
lean_closure_set(v___f_3239_, 6, v_pre_3224_);
lean_closure_set(v___f_3239_, 7, v_post_3225_);
lean_closure_set(v___f_3239_, 8, v___x_3236_);
lean_closure_set(v___f_3239_, 9, v___x_3237_);
lean_closure_set(v___f_3239_, 10, v___x_3238_);
lean_closure_set(v___f_3239_, 11, v_x_3229_);
lean_closure_set(v___f_3239_, 12, v_input_3222_);
v___x_3240_ = lean_apply_4(v_toBind_3231_, lean_box(0), lean_box(0), v___x_3235_, v___f_3239_);
return v___x_3240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___boxed(lean_object* v_m_3241_, lean_object* v_inst_3242_, lean_object* v_inst_3243_, lean_object* v_inst_3244_, lean_object* v_input_3245_, lean_object* v_cache_3246_, lean_object* v_pre_3247_, lean_object* v_post_3248_, lean_object* v_usedLetOnly_3249_, lean_object* v_skipConstInApp_3250_, lean_object* v_skipInstances_3251_){
_start:
{
uint8_t v_usedLetOnly_boxed_3252_; uint8_t v_skipConstInApp_boxed_3253_; uint8_t v_skipInstances_boxed_3254_; lean_object* v_res_3255_; 
v_usedLetOnly_boxed_3252_ = lean_unbox(v_usedLetOnly_3249_);
v_skipConstInApp_boxed_3253_ = lean_unbox(v_skipConstInApp_3250_);
v_skipInstances_boxed_3254_ = lean_unbox(v_skipInstances_3251_);
v_res_3255_ = l_Lean_Meta_transformWithCache(v_m_3241_, v_inst_3242_, v_inst_3243_, v_inst_3244_, v_input_3245_, v_cache_3246_, v_pre_3247_, v_post_3248_, v_usedLetOnly_boxed_3252_, v_skipConstInApp_boxed_3253_, v_skipInstances_boxed_3254_);
return v_res_3255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5(lean_object* v_toPure_3256_, lean_object* v_x_3257_, lean_object* v_toBind_3258_, lean_object* v_inst_3259_, lean_object* v_inst_3260_, lean_object* v_inst_3261_, lean_object* v_pre_3262_, lean_object* v_post_3263_, uint8_t v_usedLetOnly_3264_, uint8_t v_skipConstInApp_3265_, uint8_t v___x_3266_, lean_object* v_x_3267_, lean_object* v_input_3268_, lean_object* v_ref_3269_){
_start:
{
lean_object* v___f_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; 
lean_inc(v_toBind_3258_);
lean_inc(v_x_3257_);
lean_inc(v_ref_3269_);
v___f_3270_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__4), 5, 4);
lean_closure_set(v___f_3270_, 0, v_toPure_3256_);
lean_closure_set(v___f_3270_, 1, v_ref_3269_);
lean_closure_set(v___f_3270_, 2, v_x_3257_);
lean_closure_set(v___f_3270_, 3, v_toBind_3258_);
v___x_3271_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_3259_, v_inst_3260_, v_inst_3261_, v_pre_3262_, v_post_3263_, v_usedLetOnly_3264_, v_skipConstInApp_3265_, v___x_3266_, v_x_3267_, v_x_3257_, v_input_3268_, v_ref_3269_);
lean_dec(v_ref_3269_);
v___x_3272_ = lean_apply_4(v_toBind_3258_, lean_box(0), lean_box(0), v___x_3271_, v___f_3270_);
return v___x_3272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5___boxed(lean_object* v_toPure_3273_, lean_object* v_x_3274_, lean_object* v_toBind_3275_, lean_object* v_inst_3276_, lean_object* v_inst_3277_, lean_object* v_inst_3278_, lean_object* v_pre_3279_, lean_object* v_post_3280_, lean_object* v_usedLetOnly_3281_, lean_object* v_skipConstInApp_3282_, lean_object* v___x_3283_, lean_object* v_x_3284_, lean_object* v_input_3285_, lean_object* v_ref_3286_){
_start:
{
uint8_t v_usedLetOnly_boxed_3287_; uint8_t v_skipConstInApp_boxed_3288_; uint8_t v___x_115__boxed_3289_; lean_object* v_res_3290_; 
v_usedLetOnly_boxed_3287_ = lean_unbox(v_usedLetOnly_3281_);
v_skipConstInApp_boxed_3288_ = lean_unbox(v_skipConstInApp_3282_);
v___x_115__boxed_3289_ = lean_unbox(v___x_3283_);
v_res_3290_ = l_Lean_Meta_transform___redArg___lam__5(v_toPure_3273_, v_x_3274_, v_toBind_3275_, v_inst_3276_, v_inst_3277_, v_inst_3278_, v_pre_3279_, v_post_3280_, v_usedLetOnly_boxed_3287_, v_skipConstInApp_boxed_3288_, v___x_115__boxed_3289_, v_x_3284_, v_input_3285_, v_ref_3286_);
return v_res_3290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg(lean_object* v_inst_3291_, lean_object* v_inst_3292_, lean_object* v_inst_3293_, lean_object* v_input_3294_, lean_object* v_pre_3295_, lean_object* v_post_3296_, uint8_t v_usedLetOnly_3297_, uint8_t v_skipConstInApp_3298_){
_start:
{
lean_object* v_toApplicative_3299_; lean_object* v_toBind_3300_; lean_object* v_x_3301_; lean_object* v_toPure_3302_; lean_object* v_x_3303_; uint8_t v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___f_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___f_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; 
v_toApplicative_3299_ = lean_ctor_get(v_inst_3291_, 0);
v_toBind_3300_ = lean_ctor_get(v_inst_3291_, 1);
lean_inc_n(v_toBind_3300_, 3);
v_x_3301_ = lean_box(0);
v_toPure_3302_ = lean_ctor_get(v_toApplicative_3299_, 1);
lean_inc_n(v_toPure_3302_, 2);
lean_inc_n(v_inst_3292_, 2);
v_x_3303_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__1), 3, 1);
lean_closure_set(v_x_3303_, 0, v_inst_3292_);
v___x_3304_ = 0;
v___x_3305_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_3306_ = l_Lean_Meta_transformWithCache___redArg___lam__1(v_inst_3292_, lean_box(0), v___x_3305_);
v___f_3307_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3307_, 0, v_toPure_3302_);
v___x_3308_ = lean_box(v_usedLetOnly_3297_);
v___x_3309_ = lean_box(v_skipConstInApp_3298_);
v___x_3310_ = lean_box(v___x_3304_);
v___f_3311_ = lean_alloc_closure((void*)(l_Lean_Meta_transform___redArg___lam__5___boxed), 14, 13);
lean_closure_set(v___f_3311_, 0, v_toPure_3302_);
lean_closure_set(v___f_3311_, 1, v_x_3303_);
lean_closure_set(v___f_3311_, 2, v_toBind_3300_);
lean_closure_set(v___f_3311_, 3, v_inst_3291_);
lean_closure_set(v___f_3311_, 4, v_inst_3292_);
lean_closure_set(v___f_3311_, 5, v_inst_3293_);
lean_closure_set(v___f_3311_, 6, v_pre_3295_);
lean_closure_set(v___f_3311_, 7, v_post_3296_);
lean_closure_set(v___f_3311_, 8, v___x_3308_);
lean_closure_set(v___f_3311_, 9, v___x_3309_);
lean_closure_set(v___f_3311_, 10, v___x_3310_);
lean_closure_set(v___f_3311_, 11, v_x_3301_);
lean_closure_set(v___f_3311_, 12, v_input_3294_);
v___x_3312_ = lean_apply_4(v_toBind_3300_, lean_box(0), lean_box(0), v___x_3306_, v___f_3311_);
v___x_3313_ = lean_apply_4(v_toBind_3300_, lean_box(0), lean_box(0), v___x_3312_, v___f_3307_);
return v___x_3313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___boxed(lean_object* v_inst_3314_, lean_object* v_inst_3315_, lean_object* v_inst_3316_, lean_object* v_input_3317_, lean_object* v_pre_3318_, lean_object* v_post_3319_, lean_object* v_usedLetOnly_3320_, lean_object* v_skipConstInApp_3321_){
_start:
{
uint8_t v_usedLetOnly_boxed_3322_; uint8_t v_skipConstInApp_boxed_3323_; lean_object* v_res_3324_; 
v_usedLetOnly_boxed_3322_ = lean_unbox(v_usedLetOnly_3320_);
v_skipConstInApp_boxed_3323_ = lean_unbox(v_skipConstInApp_3321_);
v_res_3324_ = l_Lean_Meta_transform___redArg(v_inst_3314_, v_inst_3315_, v_inst_3316_, v_input_3317_, v_pre_3318_, v_post_3319_, v_usedLetOnly_boxed_3322_, v_skipConstInApp_boxed_3323_);
return v_res_3324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform(lean_object* v_m_3325_, lean_object* v_inst_3326_, lean_object* v_inst_3327_, lean_object* v_inst_3328_, lean_object* v_input_3329_, lean_object* v_pre_3330_, lean_object* v_post_3331_, uint8_t v_usedLetOnly_3332_, uint8_t v_skipConstInApp_3333_){
_start:
{
lean_object* v___x_3334_; 
v___x_3334_ = l_Lean_Meta_transform___redArg(v_inst_3326_, v_inst_3327_, v_inst_3328_, v_input_3329_, v_pre_3330_, v_post_3331_, v_usedLetOnly_3332_, v_skipConstInApp_3333_);
return v___x_3334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___boxed(lean_object* v_m_3335_, lean_object* v_inst_3336_, lean_object* v_inst_3337_, lean_object* v_inst_3338_, lean_object* v_input_3339_, lean_object* v_pre_3340_, lean_object* v_post_3341_, lean_object* v_usedLetOnly_3342_, lean_object* v_skipConstInApp_3343_){
_start:
{
uint8_t v_usedLetOnly_boxed_3344_; uint8_t v_skipConstInApp_boxed_3345_; lean_object* v_res_3346_; 
v_usedLetOnly_boxed_3344_ = lean_unbox(v_usedLetOnly_3342_);
v_skipConstInApp_boxed_3345_ = lean_unbox(v_skipConstInApp_3343_);
v_res_3346_ = l_Lean_Meta_transform(v_m_3335_, v_inst_3336_, v_inst_3337_, v_inst_3338_, v_input_3339_, v_pre_3340_, v_post_3341_, v_usedLetOnly_boxed_3344_, v_skipConstInApp_boxed_3345_);
return v_res_3346_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(lean_object* v_e_3347_, lean_object* v___y_3348_){
_start:
{
uint8_t v___x_3350_; 
v___x_3350_ = l_Lean_Expr_hasMVar(v_e_3347_);
if (v___x_3350_ == 0)
{
lean_object* v___x_3351_; 
v___x_3351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3351_, 0, v_e_3347_);
return v___x_3351_;
}
else
{
lean_object* v___x_3352_; lean_object* v_mctx_3353_; lean_object* v___x_3354_; lean_object* v_fst_3355_; lean_object* v_snd_3356_; lean_object* v___x_3357_; lean_object* v_cache_3358_; lean_object* v_zetaDeltaFVarIds_3359_; lean_object* v_postponed_3360_; lean_object* v_diag_3361_; lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3370_; 
v___x_3352_ = lean_st_ref_get(v___y_3348_);
v_mctx_3353_ = lean_ctor_get(v___x_3352_, 0);
lean_inc_ref(v_mctx_3353_);
lean_dec(v___x_3352_);
v___x_3354_ = l_Lean_instantiateMVarsCore(v_mctx_3353_, v_e_3347_);
v_fst_3355_ = lean_ctor_get(v___x_3354_, 0);
lean_inc(v_fst_3355_);
v_snd_3356_ = lean_ctor_get(v___x_3354_, 1);
lean_inc(v_snd_3356_);
lean_dec_ref(v___x_3354_);
v___x_3357_ = lean_st_ref_take(v___y_3348_);
v_cache_3358_ = lean_ctor_get(v___x_3357_, 1);
v_zetaDeltaFVarIds_3359_ = lean_ctor_get(v___x_3357_, 2);
v_postponed_3360_ = lean_ctor_get(v___x_3357_, 3);
v_diag_3361_ = lean_ctor_get(v___x_3357_, 4);
v_isSharedCheck_3370_ = !lean_is_exclusive(v___x_3357_);
if (v_isSharedCheck_3370_ == 0)
{
lean_object* v_unused_3371_; 
v_unused_3371_ = lean_ctor_get(v___x_3357_, 0);
lean_dec(v_unused_3371_);
v___x_3363_ = v___x_3357_;
v_isShared_3364_ = v_isSharedCheck_3370_;
goto v_resetjp_3362_;
}
else
{
lean_inc(v_diag_3361_);
lean_inc(v_postponed_3360_);
lean_inc(v_zetaDeltaFVarIds_3359_);
lean_inc(v_cache_3358_);
lean_dec(v___x_3357_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3370_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
lean_object* v___x_3366_; 
if (v_isShared_3364_ == 0)
{
lean_ctor_set(v___x_3363_, 0, v_snd_3356_);
v___x_3366_ = v___x_3363_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3369_; 
v_reuseFailAlloc_3369_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3369_, 0, v_snd_3356_);
lean_ctor_set(v_reuseFailAlloc_3369_, 1, v_cache_3358_);
lean_ctor_set(v_reuseFailAlloc_3369_, 2, v_zetaDeltaFVarIds_3359_);
lean_ctor_set(v_reuseFailAlloc_3369_, 3, v_postponed_3360_);
lean_ctor_set(v_reuseFailAlloc_3369_, 4, v_diag_3361_);
v___x_3366_ = v_reuseFailAlloc_3369_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
lean_object* v___x_3367_; lean_object* v___x_3368_; 
v___x_3367_ = lean_st_ref_put(v___y_3348_, v___x_3366_);
v___x_3368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3368_, 0, v_fst_3355_);
return v___x_3368_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg___boxed(lean_object* v_e_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_){
_start:
{
lean_object* v_res_3375_; 
v_res_3375_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_e_3372_, v___y_3373_);
lean_dec(v___y_3373_);
return v_res_3375_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0(lean_object* v_e_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_){
_start:
{
lean_object* v___x_3382_; 
v___x_3382_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_e_3376_, v___y_3378_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___boxed(lean_object* v_e_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_){
_start:
{
lean_object* v_res_3389_; 
v_res_3389_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0(v_e_3383_, v___y_3384_, v___y_3385_, v___y_3386_, v___y_3387_);
lean_dec(v___y_3387_);
lean_dec_ref(v___y_3386_);
lean_dec(v___y_3385_);
lean_dec_ref(v___y_3384_);
return v_res_3389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0(uint8_t v_zetaHave_3390_, lean_object* v___x_3391_, uint8_t v_zetaDelta_3392_, lean_object* v_fvarId_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_){
_start:
{
lean_object* v___x_3399_; 
v___x_3399_ = l_Lean_FVarId_findDecl_x3f___redArg(v_fvarId_3393_, v___y_3394_);
if (lean_obj_tag(v___x_3399_) == 0)
{
lean_object* v_a_3400_; lean_object* v___x_3402_; uint8_t v_isShared_3403_; uint8_t v_isSharedCheck_3428_; 
v_a_3400_ = lean_ctor_get(v___x_3399_, 0);
v_isSharedCheck_3428_ = !lean_is_exclusive(v___x_3399_);
if (v_isSharedCheck_3428_ == 0)
{
v___x_3402_ = v___x_3399_;
v_isShared_3403_ = v_isSharedCheck_3428_;
goto v_resetjp_3401_;
}
else
{
lean_inc(v_a_3400_);
lean_dec(v___x_3399_);
v___x_3402_ = lean_box(0);
v_isShared_3403_ = v_isSharedCheck_3428_;
goto v_resetjp_3401_;
}
v_resetjp_3401_:
{
if (lean_obj_tag(v_a_3400_) == 1)
{
lean_object* v_val_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3423_; 
v_val_3404_ = lean_ctor_get(v_a_3400_, 0);
v_isSharedCheck_3423_ = !lean_is_exclusive(v_a_3400_);
if (v_isSharedCheck_3423_ == 0)
{
v___x_3406_ = v_a_3400_;
v_isShared_3407_ = v_isSharedCheck_3423_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_val_3404_);
lean_dec(v_a_3400_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3423_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
uint8_t v___y_3409_; 
if (v_zetaDelta_3392_ == 0)
{
lean_object* v___x_3417_; uint8_t v___x_3418_; 
v___x_3417_ = l_Lean_LocalDecl_index(v_val_3404_);
v___x_3418_ = lean_nat_dec_lt(v___x_3417_, v___x_3391_);
lean_dec(v___x_3417_);
if (v___x_3418_ == 0)
{
lean_del_object(v___x_3406_);
goto v___jp_3414_;
}
else
{
lean_object* v___x_3419_; lean_object* v___x_3421_; 
lean_dec(v_val_3404_);
lean_del_object(v___x_3402_);
v___x_3419_ = lean_box(0);
if (v_isShared_3407_ == 0)
{
lean_ctor_set_tag(v___x_3406_, 0);
lean_ctor_set(v___x_3406_, 0, v___x_3419_);
v___x_3421_ = v___x_3406_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3422_; 
v_reuseFailAlloc_3422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3422_, 0, v___x_3419_);
v___x_3421_ = v_reuseFailAlloc_3422_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
return v___x_3421_;
}
}
}
else
{
lean_del_object(v___x_3406_);
goto v___jp_3414_;
}
v___jp_3408_:
{
lean_object* v___x_3410_; lean_object* v___x_3412_; 
v___x_3410_ = l_Lean_LocalDecl_value_x3f(v_val_3404_, v___y_3409_);
lean_dec(v_val_3404_);
if (v_isShared_3403_ == 0)
{
lean_ctor_set(v___x_3402_, 0, v___x_3410_);
v___x_3412_ = v___x_3402_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v___x_3410_);
v___x_3412_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
return v___x_3412_;
}
}
v___jp_3414_:
{
if (v_zetaHave_3390_ == 0)
{
v___y_3409_ = v_zetaHave_3390_;
goto v___jp_3408_;
}
else
{
lean_object* v___x_3415_; uint8_t v___x_3416_; 
v___x_3415_ = l_Lean_LocalDecl_index(v_val_3404_);
v___x_3416_ = lean_nat_dec_le(v___x_3391_, v___x_3415_);
lean_dec(v___x_3415_);
v___y_3409_ = v___x_3416_;
goto v___jp_3408_;
}
}
}
}
else
{
lean_object* v___x_3424_; lean_object* v___x_3426_; 
lean_dec(v_a_3400_);
v___x_3424_ = lean_box(0);
if (v_isShared_3403_ == 0)
{
lean_ctor_set(v___x_3402_, 0, v___x_3424_);
v___x_3426_ = v___x_3402_;
goto v_reusejp_3425_;
}
else
{
lean_object* v_reuseFailAlloc_3427_; 
v_reuseFailAlloc_3427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3427_, 0, v___x_3424_);
v___x_3426_ = v_reuseFailAlloc_3427_;
goto v_reusejp_3425_;
}
v_reusejp_3425_:
{
return v___x_3426_;
}
}
}
}
else
{
lean_object* v_a_3429_; lean_object* v___x_3431_; uint8_t v_isShared_3432_; uint8_t v_isSharedCheck_3436_; 
v_a_3429_ = lean_ctor_get(v___x_3399_, 0);
v_isSharedCheck_3436_ = !lean_is_exclusive(v___x_3399_);
if (v_isSharedCheck_3436_ == 0)
{
v___x_3431_ = v___x_3399_;
v_isShared_3432_ = v_isSharedCheck_3436_;
goto v_resetjp_3430_;
}
else
{
lean_inc(v_a_3429_);
lean_dec(v___x_3399_);
v___x_3431_ = lean_box(0);
v_isShared_3432_ = v_isSharedCheck_3436_;
goto v_resetjp_3430_;
}
v_resetjp_3430_:
{
lean_object* v___x_3434_; 
if (v_isShared_3432_ == 0)
{
v___x_3434_ = v___x_3431_;
goto v_reusejp_3433_;
}
else
{
lean_object* v_reuseFailAlloc_3435_; 
v_reuseFailAlloc_3435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3435_, 0, v_a_3429_);
v___x_3434_ = v_reuseFailAlloc_3435_;
goto v_reusejp_3433_;
}
v_reusejp_3433_:
{
return v___x_3434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0___boxed(lean_object* v_zetaHave_3437_, lean_object* v___x_3438_, lean_object* v_zetaDelta_3439_, lean_object* v_fvarId_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_){
_start:
{
uint8_t v_zetaHave_boxed_3446_; uint8_t v_zetaDelta_boxed_3447_; lean_object* v_res_3448_; 
v_zetaHave_boxed_3446_ = lean_unbox(v_zetaHave_3437_);
v_zetaDelta_boxed_3447_ = lean_unbox(v_zetaDelta_3439_);
v_res_3448_ = l_Lean_Meta_zetaReduce___lam__0(v_zetaHave_boxed_3446_, v___x_3438_, v_zetaDelta_boxed_3447_, v_fvarId_3440_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
lean_dec(v___y_3444_);
lean_dec_ref(v___y_3443_);
lean_dec(v___y_3442_);
lean_dec_ref(v___y_3441_);
lean_dec(v___x_3438_);
return v_res_3448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1(lean_object* v_e_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_){
_start:
{
lean_object* v___x_3455_; lean_object* v___x_3456_; 
v___x_3455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3455_, 0, v_e_3449_);
v___x_3456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3456_, 0, v___x_3455_);
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1___boxed(lean_object* v_e_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_){
_start:
{
lean_object* v_res_3463_; 
v_res_3463_ = l_Lean_Meta_zetaReduce___lam__1(v_e_3457_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_);
lean_dec(v___y_3461_);
lean_dec_ref(v___y_3460_);
lean_dec(v___y_3459_);
lean_dec_ref(v___y_3458_);
return v_res_3463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2(lean_object* v___f_3464_, lean_object* v_e_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_){
_start:
{
if (lean_obj_tag(v_e_3465_) == 1)
{
lean_object* v_fvarId_3471_; lean_object* v___x_3472_; 
v_fvarId_3471_ = lean_ctor_get(v_e_3465_, 0);
lean_inc(v___y_3469_);
lean_inc_ref(v___y_3468_);
lean_inc(v___y_3467_);
lean_inc_ref(v___y_3466_);
lean_inc(v_fvarId_3471_);
v___x_3472_ = lean_apply_6(v___f_3464_, v_fvarId_3471_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_, lean_box(0));
if (lean_obj_tag(v___x_3472_) == 0)
{
lean_object* v_a_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3498_; 
v_a_3473_ = lean_ctor_get(v___x_3472_, 0);
v_isSharedCheck_3498_ = !lean_is_exclusive(v___x_3472_);
if (v_isSharedCheck_3498_ == 0)
{
v___x_3475_ = v___x_3472_;
v_isShared_3476_ = v_isSharedCheck_3498_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_a_3473_);
lean_dec(v___x_3472_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3498_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
if (lean_obj_tag(v_a_3473_) == 1)
{
lean_object* v_val_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3493_; 
lean_del_object(v___x_3475_);
lean_dec_ref_known(v_e_3465_, 1);
v_val_3477_ = lean_ctor_get(v_a_3473_, 0);
v_isSharedCheck_3493_ = !lean_is_exclusive(v_a_3473_);
if (v_isSharedCheck_3493_ == 0)
{
v___x_3479_ = v_a_3473_;
v_isShared_3480_ = v_isSharedCheck_3493_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_val_3477_);
lean_dec(v_a_3473_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3493_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v___x_3481_; lean_object* v_a_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3492_; 
v___x_3481_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_val_3477_, v___y_3467_);
v_a_3482_ = lean_ctor_get(v___x_3481_, 0);
v_isSharedCheck_3492_ = !lean_is_exclusive(v___x_3481_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3484_ = v___x_3481_;
v_isShared_3485_ = v_isSharedCheck_3492_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_a_3482_);
lean_dec(v___x_3481_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3492_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
lean_object* v___x_3487_; 
if (v_isShared_3480_ == 0)
{
lean_ctor_set(v___x_3479_, 0, v_a_3482_);
v___x_3487_ = v___x_3479_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_a_3482_);
v___x_3487_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
lean_object* v___x_3489_; 
if (v_isShared_3485_ == 0)
{
lean_ctor_set(v___x_3484_, 0, v___x_3487_);
v___x_3489_ = v___x_3484_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v___x_3487_);
v___x_3489_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
return v___x_3489_;
}
}
}
}
}
else
{
lean_object* v___x_3494_; lean_object* v___x_3496_; 
lean_dec(v_a_3473_);
v___x_3494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3494_, 0, v_e_3465_);
if (v_isShared_3476_ == 0)
{
lean_ctor_set(v___x_3475_, 0, v___x_3494_);
v___x_3496_ = v___x_3475_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v___x_3494_);
v___x_3496_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
return v___x_3496_;
}
}
}
}
else
{
lean_object* v_a_3499_; lean_object* v___x_3501_; uint8_t v_isShared_3502_; uint8_t v_isSharedCheck_3506_; 
lean_dec_ref_known(v_e_3465_, 1);
v_a_3499_ = lean_ctor_get(v___x_3472_, 0);
v_isSharedCheck_3506_ = !lean_is_exclusive(v___x_3472_);
if (v_isSharedCheck_3506_ == 0)
{
v___x_3501_ = v___x_3472_;
v_isShared_3502_ = v_isSharedCheck_3506_;
goto v_resetjp_3500_;
}
else
{
lean_inc(v_a_3499_);
lean_dec(v___x_3472_);
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
else
{
lean_object* v___x_3507_; lean_object* v___x_3508_; 
lean_dec_ref(v_e_3465_);
lean_dec_ref(v___f_3464_);
v___x_3507_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_3508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3508_, 0, v___x_3507_);
return v___x_3508_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2___boxed(lean_object* v___f_3509_, lean_object* v_e_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_){
_start:
{
lean_object* v_res_3516_; 
v_res_3516_ = l_Lean_Meta_zetaReduce___lam__2(v___f_3509_, v_e_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_);
lean_dec(v___y_3514_);
lean_dec_ref(v___y_3513_);
lean_dec(v___y_3512_);
lean_dec_ref(v___y_3511_);
return v_res_3516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4(lean_object* v___f_3517_, lean_object* v_e_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_){
_start:
{
lean_object* v___x_3524_; 
v___x_3524_ = l_Lean_Expr_getAppFn(v_e_3518_);
if (lean_obj_tag(v___x_3524_) == 1)
{
lean_object* v_fvarId_3525_; lean_object* v___x_3526_; 
v_fvarId_3525_ = lean_ctor_get(v___x_3524_, 0);
lean_inc(v_fvarId_3525_);
lean_dec_ref_known(v___x_3524_, 1);
lean_inc(v___y_3522_);
lean_inc_ref(v___y_3521_);
lean_inc(v___y_3520_);
lean_inc_ref(v___y_3519_);
v___x_3526_ = lean_apply_6(v___f_3517_, v_fvarId_3525_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_, lean_box(0));
if (lean_obj_tag(v___x_3526_) == 0)
{
lean_object* v_a_3527_; lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3559_; 
v_a_3527_ = lean_ctor_get(v___x_3526_, 0);
v_isSharedCheck_3559_ = !lean_is_exclusive(v___x_3526_);
if (v_isSharedCheck_3559_ == 0)
{
v___x_3529_ = v___x_3526_;
v_isShared_3530_ = v_isSharedCheck_3559_;
goto v_resetjp_3528_;
}
else
{
lean_inc(v_a_3527_);
lean_dec(v___x_3526_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3559_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
if (lean_obj_tag(v_a_3527_) == 1)
{
lean_object* v_val_3531_; lean_object* v___x_3533_; uint8_t v_isShared_3534_; uint8_t v_isSharedCheck_3554_; 
lean_del_object(v___x_3529_);
v_val_3531_ = lean_ctor_get(v_a_3527_, 0);
v_isSharedCheck_3554_ = !lean_is_exclusive(v_a_3527_);
if (v_isSharedCheck_3554_ == 0)
{
v___x_3533_ = v_a_3527_;
v_isShared_3534_ = v_isSharedCheck_3554_;
goto v_resetjp_3532_;
}
else
{
lean_inc(v_val_3531_);
lean_dec(v_a_3527_);
v___x_3533_ = lean_box(0);
v_isShared_3534_ = v_isSharedCheck_3554_;
goto v_resetjp_3532_;
}
v_resetjp_3532_:
{
lean_object* v___x_3535_; lean_object* v_a_3536_; lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3553_; 
v___x_3535_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_val_3531_, v___y_3520_);
v_a_3536_ = lean_ctor_get(v___x_3535_, 0);
v_isSharedCheck_3553_ = !lean_is_exclusive(v___x_3535_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3538_ = v___x_3535_;
v_isShared_3539_ = v_isSharedCheck_3553_;
goto v_resetjp_3537_;
}
else
{
lean_inc(v_a_3536_);
lean_dec(v___x_3535_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3553_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
lean_object* v_dummy_3540_; lean_object* v_nargs_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3548_; 
v_dummy_3540_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_3541_ = l_Lean_Expr_getAppNumArgs(v_e_3518_);
lean_inc(v_nargs_3541_);
v___x_3542_ = lean_mk_array(v_nargs_3541_, v_dummy_3540_);
v___x_3543_ = lean_unsigned_to_nat(1u);
v___x_3544_ = lean_nat_sub(v_nargs_3541_, v___x_3543_);
lean_dec(v_nargs_3541_);
v___x_3545_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3518_, v___x_3542_, v___x_3544_);
v___x_3546_ = l_Lean_Expr_beta(v_a_3536_, v___x_3545_);
if (v_isShared_3534_ == 0)
{
lean_ctor_set(v___x_3533_, 0, v___x_3546_);
v___x_3548_ = v___x_3533_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v___x_3546_);
v___x_3548_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
lean_object* v___x_3550_; 
if (v_isShared_3539_ == 0)
{
lean_ctor_set(v___x_3538_, 0, v___x_3548_);
v___x_3550_ = v___x_3538_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v___x_3548_);
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
lean_object* v___x_3555_; lean_object* v___x_3557_; 
lean_dec(v_a_3527_);
lean_dec_ref(v_e_3518_);
v___x_3555_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
if (v_isShared_3530_ == 0)
{
lean_ctor_set(v___x_3529_, 0, v___x_3555_);
v___x_3557_ = v___x_3529_;
goto v_reusejp_3556_;
}
else
{
lean_object* v_reuseFailAlloc_3558_; 
v_reuseFailAlloc_3558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3558_, 0, v___x_3555_);
v___x_3557_ = v_reuseFailAlloc_3558_;
goto v_reusejp_3556_;
}
v_reusejp_3556_:
{
return v___x_3557_;
}
}
}
}
else
{
lean_object* v_a_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3567_; 
lean_dec_ref(v_e_3518_);
v_a_3560_ = lean_ctor_get(v___x_3526_, 0);
v_isSharedCheck_3567_ = !lean_is_exclusive(v___x_3526_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3562_ = v___x_3526_;
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_a_3560_);
lean_dec(v___x_3526_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3565_; 
if (v_isShared_3563_ == 0)
{
v___x_3565_ = v___x_3562_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_a_3560_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
return v___x_3565_;
}
}
}
}
else
{
lean_object* v___x_3568_; lean_object* v___x_3569_; 
lean_dec_ref(v___x_3524_);
lean_dec_ref(v_e_3518_);
lean_dec_ref(v___f_3517_);
v___x_3568_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_3569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3569_, 0, v___x_3568_);
return v___x_3569_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4___boxed(lean_object* v___f_3570_, lean_object* v_e_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_){
_start:
{
lean_object* v_res_3577_; 
v_res_3577_ = l_Lean_Meta_zetaReduce___lam__4(v___f_3570_, v_e_3571_, v___y_3572_, v___y_3573_, v___y_3574_, v___y_3575_);
lean_dec(v___y_3575_);
lean_dec_ref(v___y_3574_);
lean_dec(v___y_3573_);
lean_dec_ref(v___y_3572_);
return v_res_3577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_object* v_00_u03b1_3578_, lean_object* v_x_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_){
_start:
{
lean_object* v___x_3585_; lean_object* v___x_3586_; 
v___x_3585_ = lean_apply_1(v_x_3579_, lean_box(0));
v___x_3586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3586_, 0, v___x_3585_);
return v___x_3586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0___boxed(lean_object* v_00_u03b1_3587_, lean_object* v_x_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_){
_start:
{
lean_object* v_res_3594_; 
v_res_3594_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(v_00_u03b1_3587_, v_x_3588_, v___y_3589_, v___y_3590_, v___y_3591_, v___y_3592_);
lean_dec(v___y_3592_);
lean_dec_ref(v___y_3591_);
lean_dec(v___y_3590_);
lean_dec_ref(v___y_3589_);
return v_res_3594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0(lean_object* v_k_3595_, lean_object* v___y_3596_, lean_object* v_b_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_){
_start:
{
lean_object* v___x_3603_; 
lean_inc(v___y_3601_);
lean_inc_ref(v___y_3600_);
lean_inc(v___y_3599_);
lean_inc_ref(v___y_3598_);
lean_inc(v___y_3596_);
v___x_3603_ = lean_apply_7(v_k_3595_, v_b_3597_, v___y_3596_, v___y_3598_, v___y_3599_, v___y_3600_, v___y_3601_, lean_box(0));
return v___x_3603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed(lean_object* v_k_3604_, lean_object* v___y_3605_, lean_object* v_b_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_){
_start:
{
lean_object* v_res_3612_; 
v_res_3612_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0(v_k_3604_, v___y_3605_, v_b_3606_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_);
lean_dec(v___y_3610_);
lean_dec_ref(v___y_3609_);
lean_dec(v___y_3608_);
lean_dec_ref(v___y_3607_);
lean_dec(v___y_3605_);
return v_res_3612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object* v_name_3613_, uint8_t v_bi_3614_, lean_object* v_type_3615_, lean_object* v_k_3616_, uint8_t v_kind_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_){
_start:
{
lean_object* v___f_3624_; lean_object* v___x_3625_; 
lean_inc(v___y_3618_);
v___f_3624_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3624_, 0, v_k_3616_);
lean_closure_set(v___f_3624_, 1, v___y_3618_);
v___x_3625_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3613_, v_bi_3614_, v_type_3615_, v___f_3624_, v_kind_3617_, v___y_3619_, v___y_3620_, v___y_3621_, v___y_3622_);
if (lean_obj_tag(v___x_3625_) == 0)
{
return v___x_3625_;
}
else
{
lean_object* v_a_3626_; lean_object* v___x_3628_; uint8_t v_isShared_3629_; uint8_t v_isSharedCheck_3633_; 
v_a_3626_ = lean_ctor_get(v___x_3625_, 0);
v_isSharedCheck_3633_ = !lean_is_exclusive(v___x_3625_);
if (v_isSharedCheck_3633_ == 0)
{
v___x_3628_ = v___x_3625_;
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
else
{
lean_inc(v_a_3626_);
lean_dec(v___x_3625_);
v___x_3628_ = lean_box(0);
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
v_resetjp_3627_:
{
lean_object* v___x_3631_; 
if (v_isShared_3629_ == 0)
{
v___x_3631_ = v___x_3628_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v_a_3626_);
v___x_3631_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
return v___x_3631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object* v_name_3634_, lean_object* v_bi_3635_, lean_object* v_type_3636_, lean_object* v_k_3637_, lean_object* v_kind_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_){
_start:
{
uint8_t v_bi_boxed_3645_; uint8_t v_kind_boxed_3646_; lean_object* v_res_3647_; 
v_bi_boxed_3645_ = lean_unbox(v_bi_3635_);
v_kind_boxed_3646_ = lean_unbox(v_kind_3638_);
v_res_3647_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_name_3634_, v_bi_boxed_3645_, v_type_3636_, v_k_3637_, v_kind_boxed_3646_, v___y_3639_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_);
lean_dec(v___y_3643_);
lean_dec_ref(v___y_3642_);
lean_dec(v___y_3641_);
lean_dec_ref(v___y_3640_);
lean_dec(v___y_3639_);
return v_res_3647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(lean_object* v_name_3648_, lean_object* v_type_3649_, lean_object* v_val_3650_, lean_object* v_k_3651_, uint8_t v_nondep_3652_, uint8_t v_kind_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_){
_start:
{
lean_object* v___f_3660_; lean_object* v___x_3661_; 
lean_inc(v___y_3654_);
v___f_3660_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3660_, 0, v_k_3651_);
lean_closure_set(v___f_3660_, 1, v___y_3654_);
v___x_3661_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_3648_, v_type_3649_, v_val_3650_, v___f_3660_, v_nondep_3652_, v_kind_3653_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_);
if (lean_obj_tag(v___x_3661_) == 0)
{
return v___x_3661_;
}
else
{
lean_object* v_a_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3669_; 
v_a_3662_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3669_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3669_ == 0)
{
v___x_3664_ = v___x_3661_;
v_isShared_3665_ = v_isSharedCheck_3669_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_a_3662_);
lean_dec(v___x_3661_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3669_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
lean_object* v___x_3667_; 
if (v_isShared_3665_ == 0)
{
v___x_3667_ = v___x_3664_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v_a_3662_);
v___x_3667_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
return v___x_3667_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg___boxed(lean_object* v_name_3670_, lean_object* v_type_3671_, lean_object* v_val_3672_, lean_object* v_k_3673_, lean_object* v_nondep_3674_, lean_object* v_kind_3675_, lean_object* v___y_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_){
_start:
{
uint8_t v_nondep_boxed_3682_; uint8_t v_kind_boxed_3683_; lean_object* v_res_3684_; 
v_nondep_boxed_3682_ = lean_unbox(v_nondep_3674_);
v_kind_boxed_3683_ = lean_unbox(v_kind_3675_);
v_res_3684_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(v_name_3670_, v_type_3671_, v_val_3672_, v_k_3673_, v_nondep_boxed_3682_, v_kind_boxed_3683_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_, v___y_3680_);
lean_dec(v___y_3680_);
lean_dec_ref(v___y_3679_);
lean_dec(v___y_3678_);
lean_dec_ref(v___y_3677_);
lean_dec(v___y_3676_);
return v_res_3684_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_object* v_00_u03b1_3685_, lean_object* v_x_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_){
_start:
{
lean_object* v___x_3692_; lean_object* v___x_3693_; 
v___x_3692_ = lean_apply_1(v_x_3686_, lean_box(0));
v___x_3693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3693_, 0, v___x_3692_);
return v___x_3693_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0___boxed(lean_object* v_00_u03b1_3694_, lean_object* v_x_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_){
_start:
{
lean_object* v_res_3701_; 
v_res_3701_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(v_00_u03b1_3694_, v_x_3695_, v___y_3696_, v___y_3697_, v___y_3698_, v___y_3699_);
lean_dec(v___y_3699_);
lean_dec_ref(v___y_3698_);
lean_dec(v___y_3697_);
lean_dec_ref(v___y_3696_);
return v_res_3701_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(lean_object* v_ref_3702_){
_start:
{
lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; 
v___x_3704_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_3705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3705_, 0, v_ref_3702_);
lean_ctor_set(v___x_3705_, 1, v___x_3704_);
v___x_3706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3706_, 0, v___x_3705_);
return v___x_3706_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg___boxed(lean_object* v_ref_3707_, lean_object* v___y_3708_){
_start:
{
lean_object* v_res_3709_; 
v_res_3709_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(v_ref_3707_);
return v_res_3709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(lean_object* v_x_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_){
_start:
{
lean_object* v___y_3718_; lean_object* v_toCold_3727_; lean_object* v_currRecDepth_3728_; lean_object* v_ref_3729_; uint8_t v_diag_3730_; uint8_t v_suppressElabErrors_3731_; lean_object* v_maxRecDepth_3737_; lean_object* v___x_3738_; uint8_t v___x_3739_; 
v_toCold_3727_ = lean_ctor_get(v___y_3714_, 0);
v_currRecDepth_3728_ = lean_ctor_get(v___y_3714_, 1);
v_ref_3729_ = lean_ctor_get(v___y_3714_, 2);
v_diag_3730_ = lean_ctor_get_uint8(v___y_3714_, sizeof(void*)*3);
v_suppressElabErrors_3731_ = lean_ctor_get_uint8(v___y_3714_, sizeof(void*)*3 + 1);
v_maxRecDepth_3737_ = lean_ctor_get(v_toCold_3727_, 3);
v___x_3738_ = lean_unsigned_to_nat(0u);
v___x_3739_ = lean_nat_dec_eq(v_maxRecDepth_3737_, v___x_3738_);
if (v___x_3739_ == 0)
{
uint8_t v___x_3740_; 
v___x_3740_ = lean_nat_dec_eq(v_currRecDepth_3728_, v_maxRecDepth_3737_);
if (v___x_3740_ == 0)
{
goto v___jp_3732_;
}
else
{
lean_object* v___x_3741_; 
lean_dec_ref(v_x_3710_);
lean_inc(v_ref_3729_);
v___x_3741_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(v_ref_3729_);
v___y_3718_ = v___x_3741_;
goto v___jp_3717_;
}
}
else
{
goto v___jp_3732_;
}
v___jp_3717_:
{
if (lean_obj_tag(v___y_3718_) == 0)
{
return v___y_3718_;
}
else
{
lean_object* v_a_3719_; lean_object* v___x_3721_; uint8_t v_isShared_3722_; uint8_t v_isSharedCheck_3726_; 
v_a_3719_ = lean_ctor_get(v___y_3718_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v___y_3718_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3721_ = v___y_3718_;
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
else
{
lean_inc(v_a_3719_);
lean_dec(v___y_3718_);
v___x_3721_ = lean_box(0);
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
v_resetjp_3720_:
{
lean_object* v___x_3724_; 
if (v_isShared_3722_ == 0)
{
v___x_3724_ = v___x_3721_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v_a_3719_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
}
}
}
}
v___jp_3732_:
{
lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; 
v___x_3733_ = lean_unsigned_to_nat(1u);
v___x_3734_ = lean_nat_add(v_currRecDepth_3728_, v___x_3733_);
lean_inc(v_ref_3729_);
lean_inc_ref(v_toCold_3727_);
v___x_3735_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3735_, 0, v_toCold_3727_);
lean_ctor_set(v___x_3735_, 1, v___x_3734_);
lean_ctor_set(v___x_3735_, 2, v_ref_3729_);
lean_ctor_set_uint8(v___x_3735_, sizeof(void*)*3, v_diag_3730_);
lean_ctor_set_uint8(v___x_3735_, sizeof(void*)*3 + 1, v_suppressElabErrors_3731_);
lean_inc(v___y_3715_);
lean_inc(v___y_3713_);
lean_inc_ref(v___y_3712_);
lean_inc(v___y_3711_);
v___x_3736_ = lean_apply_6(v_x_3710_, v___y_3711_, v___y_3712_, v___y_3713_, v___x_3735_, v___y_3715_, lean_box(0));
v___y_3718_ = v___x_3736_;
goto v___jp_3717_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg___boxed(lean_object* v_x_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_){
_start:
{
lean_object* v_res_3749_; 
v_res_3749_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(v_x_3742_, v___y_3743_, v___y_3744_, v___y_3745_, v___y_3746_, v___y_3747_);
lean_dec(v___y_3747_);
lean_dec_ref(v___y_3746_);
lean_dec(v___y_3745_);
lean_dec_ref(v___y_3744_);
lean_dec(v___y_3743_);
return v_res_3749_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0___boxed(lean_object* v_fvars_3750_, lean_object* v_pre_3751_, lean_object* v_post_3752_, lean_object* v_usedLetOnly_3753_, lean_object* v_skipConstInApp_3754_, lean_object* v_skipInstances_3755_, lean_object* v_body_3756_, lean_object* v_x_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_){
_start:
{
uint8_t v_usedLetOnly_boxed_3764_; uint8_t v_skipConstInApp_boxed_3765_; uint8_t v_skipInstances_boxed_3766_; lean_object* v_res_3767_; 
v_usedLetOnly_boxed_3764_ = lean_unbox(v_usedLetOnly_3753_);
v_skipConstInApp_boxed_3765_ = lean_unbox(v_skipConstInApp_3754_);
v_skipInstances_boxed_3766_ = lean_unbox(v_skipInstances_3755_);
v_res_3767_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0(v_fvars_3750_, v_pre_3751_, v_post_3752_, v_usedLetOnly_boxed_3764_, v_skipConstInApp_boxed_3765_, v_skipInstances_boxed_3766_, v_body_3756_, v_x_3757_, v___y_3758_, v___y_3759_, v___y_3760_, v___y_3761_, v___y_3762_);
lean_dec(v___y_3762_);
lean_dec_ref(v___y_3761_);
lean_dec(v___y_3760_);
lean_dec_ref(v___y_3759_);
lean_dec(v___y_3758_);
return v_res_3767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0(lean_object* v_fvars_3768_, lean_object* v_pre_3769_, lean_object* v_post_3770_, uint8_t v_usedLetOnly_3771_, uint8_t v_skipConstInApp_3772_, uint8_t v_skipInstances_3773_, lean_object* v_body_3774_, lean_object* v_x_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_){
_start:
{
lean_object* v___x_3782_; lean_object* v___x_3783_; 
v___x_3782_ = lean_array_push(v_fvars_3768_, v_x_3775_);
v___x_3783_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(v_pre_3769_, v_post_3770_, v_usedLetOnly_3771_, v_skipConstInApp_3772_, v_skipInstances_3773_, v___x_3782_, v_body_3774_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_, v___y_3780_);
return v___x_3783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object* v_fvars_3784_, lean_object* v_pre_3785_, lean_object* v_post_3786_, lean_object* v_usedLetOnly_3787_, lean_object* v_skipConstInApp_3788_, lean_object* v_skipInstances_3789_, lean_object* v_body_3790_, lean_object* v_x_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_){
_start:
{
uint8_t v_usedLetOnly_boxed_3798_; uint8_t v_skipConstInApp_boxed_3799_; uint8_t v_skipInstances_boxed_3800_; lean_object* v_res_3801_; 
v_usedLetOnly_boxed_3798_ = lean_unbox(v_usedLetOnly_3787_);
v_skipConstInApp_boxed_3799_ = lean_unbox(v_skipConstInApp_3788_);
v_skipInstances_boxed_3800_ = lean_unbox(v_skipInstances_3789_);
v_res_3801_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0(v_fvars_3784_, v_pre_3785_, v_post_3786_, v_usedLetOnly_boxed_3798_, v_skipConstInApp_boxed_3799_, v_skipInstances_boxed_3800_, v_body_3790_, v_x_3791_, v___y_3792_, v___y_3793_, v___y_3794_, v___y_3795_, v___y_3796_);
lean_dec(v___y_3796_);
lean_dec_ref(v___y_3795_);
lean_dec(v___y_3794_);
lean_dec_ref(v___y_3793_);
lean_dec(v___y_3792_);
return v_res_3801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(lean_object* v_pre_3802_, lean_object* v_post_3803_, uint8_t v_usedLetOnly_3804_, uint8_t v_skipConstInApp_3805_, uint8_t v_skipInstances_3806_, lean_object* v_e_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_){
_start:
{
lean_object* v___x_3814_; 
lean_inc_ref(v_post_3803_);
lean_inc(v___y_3812_);
lean_inc_ref(v___y_3811_);
lean_inc(v___y_3810_);
lean_inc_ref(v___y_3809_);
lean_inc_ref(v_e_3807_);
v___x_3814_ = lean_apply_6(v_post_3803_, v_e_3807_, v___y_3809_, v___y_3810_, v___y_3811_, v___y_3812_, lean_box(0));
if (lean_obj_tag(v___x_3814_) == 0)
{
lean_object* v_a_3815_; lean_object* v___x_3817_; uint8_t v_isShared_3818_; uint8_t v_isSharedCheck_3833_; 
v_a_3815_ = lean_ctor_get(v___x_3814_, 0);
v_isSharedCheck_3833_ = !lean_is_exclusive(v___x_3814_);
if (v_isSharedCheck_3833_ == 0)
{
v___x_3817_ = v___x_3814_;
v_isShared_3818_ = v_isSharedCheck_3833_;
goto v_resetjp_3816_;
}
else
{
lean_inc(v_a_3815_);
lean_dec(v___x_3814_);
v___x_3817_ = lean_box(0);
v_isShared_3818_ = v_isSharedCheck_3833_;
goto v_resetjp_3816_;
}
v_resetjp_3816_:
{
switch(lean_obj_tag(v_a_3815_))
{
case 0:
{
lean_object* v_e_3819_; lean_object* v___x_3821_; 
lean_dec_ref(v_e_3807_);
lean_dec_ref(v_post_3803_);
lean_dec_ref(v_pre_3802_);
v_e_3819_ = lean_ctor_get(v_a_3815_, 0);
lean_inc_ref(v_e_3819_);
lean_dec_ref_known(v_a_3815_, 1);
if (v_isShared_3818_ == 0)
{
lean_ctor_set(v___x_3817_, 0, v_e_3819_);
v___x_3821_ = v___x_3817_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v_e_3819_);
v___x_3821_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
return v___x_3821_;
}
}
case 1:
{
lean_object* v_e_3823_; lean_object* v___x_3824_; 
lean_del_object(v___x_3817_);
lean_dec_ref(v_e_3807_);
v_e_3823_ = lean_ctor_get(v_a_3815_, 0);
lean_inc_ref(v_e_3823_);
lean_dec_ref_known(v_a_3815_, 1);
v___x_3824_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3802_, v_post_3803_, v_usedLetOnly_3804_, v_skipConstInApp_3805_, v_skipInstances_3806_, v_e_3823_, v___y_3808_, v___y_3809_, v___y_3810_, v___y_3811_, v___y_3812_);
return v___x_3824_;
}
default: 
{
lean_object* v_e_x3f_3825_; 
lean_dec_ref(v_post_3803_);
lean_dec_ref(v_pre_3802_);
v_e_x3f_3825_ = lean_ctor_get(v_a_3815_, 0);
lean_inc(v_e_x3f_3825_);
lean_dec_ref_known(v_a_3815_, 1);
if (lean_obj_tag(v_e_x3f_3825_) == 0)
{
lean_object* v___x_3827_; 
if (v_isShared_3818_ == 0)
{
lean_ctor_set(v___x_3817_, 0, v_e_3807_);
v___x_3827_ = v___x_3817_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v_e_3807_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
return v___x_3827_;
}
}
else
{
lean_object* v_val_3829_; lean_object* v___x_3831_; 
lean_dec_ref(v_e_3807_);
v_val_3829_ = lean_ctor_get(v_e_x3f_3825_, 0);
lean_inc(v_val_3829_);
lean_dec_ref_known(v_e_x3f_3825_, 1);
if (v_isShared_3818_ == 0)
{
lean_ctor_set(v___x_3817_, 0, v_val_3829_);
v___x_3831_ = v___x_3817_;
goto v_reusejp_3830_;
}
else
{
lean_object* v_reuseFailAlloc_3832_; 
v_reuseFailAlloc_3832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3832_, 0, v_val_3829_);
v___x_3831_ = v_reuseFailAlloc_3832_;
goto v_reusejp_3830_;
}
v_reusejp_3830_:
{
return v___x_3831_;
}
}
}
}
}
}
else
{
lean_object* v_a_3834_; lean_object* v___x_3836_; uint8_t v_isShared_3837_; uint8_t v_isSharedCheck_3841_; 
lean_dec_ref(v_e_3807_);
lean_dec_ref(v_post_3803_);
lean_dec_ref(v_pre_3802_);
v_a_3834_ = lean_ctor_get(v___x_3814_, 0);
v_isSharedCheck_3841_ = !lean_is_exclusive(v___x_3814_);
if (v_isSharedCheck_3841_ == 0)
{
v___x_3836_ = v___x_3814_;
v_isShared_3837_ = v_isSharedCheck_3841_;
goto v_resetjp_3835_;
}
else
{
lean_inc(v_a_3834_);
lean_dec(v___x_3814_);
v___x_3836_ = lean_box(0);
v_isShared_3837_ = v_isSharedCheck_3841_;
goto v_resetjp_3835_;
}
v_resetjp_3835_:
{
lean_object* v___x_3839_; 
if (v_isShared_3837_ == 0)
{
v___x_3839_ = v___x_3836_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3840_; 
v_reuseFailAlloc_3840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3840_, 0, v_a_3834_);
v___x_3839_ = v_reuseFailAlloc_3840_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
return v___x_3839_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(lean_object* v_pre_3842_, lean_object* v_post_3843_, uint8_t v_usedLetOnly_3844_, uint8_t v_skipConstInApp_3845_, uint8_t v_skipInstances_3846_, lean_object* v_fvars_3847_, lean_object* v_e_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_){
_start:
{
if (lean_obj_tag(v_e_3848_) == 6)
{
lean_object* v_binderName_3855_; lean_object* v_binderType_3856_; lean_object* v_body_3857_; uint8_t v_binderInfo_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___f_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; 
v_binderName_3855_ = lean_ctor_get(v_e_3848_, 0);
lean_inc(v_binderName_3855_);
v_binderType_3856_ = lean_ctor_get(v_e_3848_, 1);
lean_inc_ref(v_binderType_3856_);
v_body_3857_ = lean_ctor_get(v_e_3848_, 2);
lean_inc_ref(v_body_3857_);
v_binderInfo_3858_ = lean_ctor_get_uint8(v_e_3848_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_3848_, 3);
v___x_3859_ = lean_box(v_usedLetOnly_3844_);
v___x_3860_ = lean_box(v_skipConstInApp_3845_);
v___x_3861_ = lean_box(v_skipInstances_3846_);
lean_inc_ref(v_post_3843_);
lean_inc_ref(v_pre_3842_);
lean_inc_ref(v_fvars_3847_);
v___f_3862_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3862_, 0, v_fvars_3847_);
lean_closure_set(v___f_3862_, 1, v_pre_3842_);
lean_closure_set(v___f_3862_, 2, v_post_3843_);
lean_closure_set(v___f_3862_, 3, v___x_3859_);
lean_closure_set(v___f_3862_, 4, v___x_3860_);
lean_closure_set(v___f_3862_, 5, v___x_3861_);
lean_closure_set(v___f_3862_, 6, v_body_3857_);
v___x_3863_ = lean_expr_instantiate_rev(v_binderType_3856_, v_fvars_3847_);
lean_dec_ref(v_fvars_3847_);
lean_dec_ref(v_binderType_3856_);
v___x_3864_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3842_, v_post_3843_, v_usedLetOnly_3844_, v_skipConstInApp_3845_, v_skipInstances_3846_, v___x_3863_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_);
if (lean_obj_tag(v___x_3864_) == 0)
{
lean_object* v_a_3865_; uint8_t v___x_3866_; lean_object* v___x_3867_; 
v_a_3865_ = lean_ctor_get(v___x_3864_, 0);
lean_inc(v_a_3865_);
lean_dec_ref_known(v___x_3864_, 1);
v___x_3866_ = 0;
v___x_3867_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_binderName_3855_, v_binderInfo_3858_, v_a_3865_, v___f_3862_, v___x_3866_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_);
return v___x_3867_;
}
else
{
lean_dec_ref(v___f_3862_);
lean_dec(v_binderName_3855_);
return v___x_3864_;
}
}
else
{
lean_object* v___x_3868_; lean_object* v___x_3869_; 
v___x_3868_ = lean_expr_instantiate_rev(v_e_3848_, v_fvars_3847_);
lean_dec_ref(v_e_3848_);
lean_inc_ref(v_post_3843_);
lean_inc_ref(v_pre_3842_);
v___x_3869_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3842_, v_post_3843_, v_usedLetOnly_3844_, v_skipConstInApp_3845_, v_skipInstances_3846_, v___x_3868_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_);
if (lean_obj_tag(v___x_3869_) == 0)
{
lean_object* v_a_3870_; uint8_t v___x_3871_; uint8_t v___x_3872_; uint8_t v___x_3873_; lean_object* v___x_3874_; 
v_a_3870_ = lean_ctor_get(v___x_3869_, 0);
lean_inc(v_a_3870_);
lean_dec_ref_known(v___x_3869_, 1);
v___x_3871_ = 0;
v___x_3872_ = 1;
v___x_3873_ = 1;
v___x_3874_ = l_Lean_Meta_mkLambdaFVars(v_fvars_3847_, v_a_3870_, v___x_3871_, v_usedLetOnly_3844_, v___x_3871_, v___x_3872_, v___x_3873_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_);
lean_dec_ref(v_fvars_3847_);
if (lean_obj_tag(v___x_3874_) == 0)
{
lean_object* v_a_3875_; lean_object* v___x_3876_; 
v_a_3875_ = lean_ctor_get(v___x_3874_, 0);
lean_inc(v_a_3875_);
lean_dec_ref_known(v___x_3874_, 1);
v___x_3876_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3842_, v_post_3843_, v_usedLetOnly_3844_, v_skipConstInApp_3845_, v_skipInstances_3846_, v_a_3875_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_);
return v___x_3876_;
}
else
{
lean_dec_ref(v_post_3843_);
lean_dec_ref(v_pre_3842_);
return v___x_3874_;
}
}
else
{
lean_dec_ref(v_fvars_3847_);
lean_dec_ref(v_post_3843_);
lean_dec_ref(v_pre_3842_);
return v___x_3869_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0(lean_object* v_fvars_3877_, lean_object* v_pre_3878_, lean_object* v_post_3879_, uint8_t v_usedLetOnly_3880_, uint8_t v_skipConstInApp_3881_, uint8_t v_skipInstances_3882_, lean_object* v_body_3883_, lean_object* v_x_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_){
_start:
{
lean_object* v___x_3891_; lean_object* v___x_3892_; 
v___x_3891_ = lean_array_push(v_fvars_3877_, v_x_3884_);
v___x_3892_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(v_pre_3878_, v_post_3879_, v_usedLetOnly_3880_, v_skipConstInApp_3881_, v_skipInstances_3882_, v___x_3891_, v_body_3883_, v___y_3885_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_);
return v___x_3892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object* v_fvars_3893_, lean_object* v_pre_3894_, lean_object* v_post_3895_, lean_object* v_usedLetOnly_3896_, lean_object* v_skipConstInApp_3897_, lean_object* v_skipInstances_3898_, lean_object* v_body_3899_, lean_object* v_x_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_){
_start:
{
uint8_t v_usedLetOnly_boxed_3907_; uint8_t v_skipConstInApp_boxed_3908_; uint8_t v_skipInstances_boxed_3909_; lean_object* v_res_3910_; 
v_usedLetOnly_boxed_3907_ = lean_unbox(v_usedLetOnly_3896_);
v_skipConstInApp_boxed_3908_ = lean_unbox(v_skipConstInApp_3897_);
v_skipInstances_boxed_3909_ = lean_unbox(v_skipInstances_3898_);
v_res_3910_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0(v_fvars_3893_, v_pre_3894_, v_post_3895_, v_usedLetOnly_boxed_3907_, v_skipConstInApp_boxed_3908_, v_skipInstances_boxed_3909_, v_body_3899_, v_x_3900_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_, v___y_3905_);
lean_dec(v___y_3905_);
lean_dec_ref(v___y_3904_);
lean_dec(v___y_3903_);
lean_dec_ref(v___y_3902_);
lean_dec(v___y_3901_);
return v_res_3910_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(lean_object* v_pre_3911_, lean_object* v_post_3912_, uint8_t v_usedLetOnly_3913_, uint8_t v_skipConstInApp_3914_, uint8_t v_skipInstances_3915_, lean_object* v_fvars_3916_, lean_object* v_e_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_){
_start:
{
if (lean_obj_tag(v_e_3917_) == 8)
{
lean_object* v_declName_3924_; lean_object* v_type_3925_; lean_object* v_value_3926_; lean_object* v_body_3927_; uint8_t v_nondep_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___f_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; 
v_declName_3924_ = lean_ctor_get(v_e_3917_, 0);
lean_inc(v_declName_3924_);
v_type_3925_ = lean_ctor_get(v_e_3917_, 1);
lean_inc_ref(v_type_3925_);
v_value_3926_ = lean_ctor_get(v_e_3917_, 2);
lean_inc_ref(v_value_3926_);
v_body_3927_ = lean_ctor_get(v_e_3917_, 3);
lean_inc_ref(v_body_3927_);
v_nondep_3928_ = lean_ctor_get_uint8(v_e_3917_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_3917_, 4);
v___x_3929_ = lean_box(v_usedLetOnly_3913_);
v___x_3930_ = lean_box(v_skipConstInApp_3914_);
v___x_3931_ = lean_box(v_skipInstances_3915_);
lean_inc_ref_n(v_post_3912_, 2);
lean_inc_ref_n(v_pre_3911_, 2);
lean_inc_ref(v_fvars_3916_);
v___f_3932_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3932_, 0, v_fvars_3916_);
lean_closure_set(v___f_3932_, 1, v_pre_3911_);
lean_closure_set(v___f_3932_, 2, v_post_3912_);
lean_closure_set(v___f_3932_, 3, v___x_3929_);
lean_closure_set(v___f_3932_, 4, v___x_3930_);
lean_closure_set(v___f_3932_, 5, v___x_3931_);
lean_closure_set(v___f_3932_, 6, v_body_3927_);
v___x_3933_ = lean_expr_instantiate_rev(v_type_3925_, v_fvars_3916_);
lean_dec_ref(v_type_3925_);
v___x_3934_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3911_, v_post_3912_, v_usedLetOnly_3913_, v_skipConstInApp_3914_, v_skipInstances_3915_, v___x_3933_, v___y_3918_, v___y_3919_, v___y_3920_, v___y_3921_, v___y_3922_);
if (lean_obj_tag(v___x_3934_) == 0)
{
lean_object* v_a_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; 
v_a_3935_ = lean_ctor_get(v___x_3934_, 0);
lean_inc(v_a_3935_);
lean_dec_ref_known(v___x_3934_, 1);
v___x_3936_ = lean_expr_instantiate_rev(v_value_3926_, v_fvars_3916_);
lean_dec_ref(v_fvars_3916_);
lean_dec_ref(v_value_3926_);
v___x_3937_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3911_, v_post_3912_, v_usedLetOnly_3913_, v_skipConstInApp_3914_, v_skipInstances_3915_, v___x_3936_, v___y_3918_, v___y_3919_, v___y_3920_, v___y_3921_, v___y_3922_);
if (lean_obj_tag(v___x_3937_) == 0)
{
lean_object* v_a_3938_; uint8_t v___x_3939_; lean_object* v___x_3940_; 
v_a_3938_ = lean_ctor_get(v___x_3937_, 0);
lean_inc(v_a_3938_);
lean_dec_ref_known(v___x_3937_, 1);
v___x_3939_ = 0;
v___x_3940_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(v_declName_3924_, v_a_3935_, v_a_3938_, v___f_3932_, v_nondep_3928_, v___x_3939_, v___y_3918_, v___y_3919_, v___y_3920_, v___y_3921_, v___y_3922_);
return v___x_3940_;
}
else
{
lean_dec(v_a_3935_);
lean_dec_ref(v___f_3932_);
lean_dec(v_declName_3924_);
return v___x_3937_;
}
}
else
{
lean_dec_ref(v___f_3932_);
lean_dec_ref(v_value_3926_);
lean_dec(v_declName_3924_);
lean_dec_ref(v_fvars_3916_);
lean_dec_ref(v_post_3912_);
lean_dec_ref(v_pre_3911_);
return v___x_3934_;
}
}
else
{
lean_object* v___x_3941_; lean_object* v___x_3942_; 
v___x_3941_ = lean_expr_instantiate_rev(v_e_3917_, v_fvars_3916_);
lean_dec_ref(v_e_3917_);
lean_inc_ref(v_post_3912_);
lean_inc_ref(v_pre_3911_);
v___x_3942_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3911_, v_post_3912_, v_usedLetOnly_3913_, v_skipConstInApp_3914_, v_skipInstances_3915_, v___x_3941_, v___y_3918_, v___y_3919_, v___y_3920_, v___y_3921_, v___y_3922_);
if (lean_obj_tag(v___x_3942_) == 0)
{
lean_object* v_a_3943_; uint8_t v___x_3944_; uint8_t v___x_3945_; lean_object* v___x_3946_; 
v_a_3943_ = lean_ctor_get(v___x_3942_, 0);
lean_inc(v_a_3943_);
lean_dec_ref_known(v___x_3942_, 1);
v___x_3944_ = 0;
v___x_3945_ = 1;
v___x_3946_ = l_Lean_Meta_mkLetFVars(v_fvars_3916_, v_a_3943_, v_usedLetOnly_3913_, v___x_3944_, v___x_3945_, v___y_3919_, v___y_3920_, v___y_3921_, v___y_3922_);
lean_dec_ref(v_fvars_3916_);
if (lean_obj_tag(v___x_3946_) == 0)
{
lean_object* v_a_3947_; lean_object* v___x_3948_; 
v_a_3947_ = lean_ctor_get(v___x_3946_, 0);
lean_inc(v_a_3947_);
lean_dec_ref_known(v___x_3946_, 1);
v___x_3948_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3911_, v_post_3912_, v_usedLetOnly_3913_, v_skipConstInApp_3914_, v_skipInstances_3915_, v_a_3947_, v___y_3918_, v___y_3919_, v___y_3920_, v___y_3921_, v___y_3922_);
return v___x_3948_;
}
else
{
lean_dec_ref(v_post_3912_);
lean_dec_ref(v_pre_3911_);
return v___x_3946_;
}
}
else
{
lean_dec_ref(v_fvars_3916_);
lean_dec_ref(v_post_3912_);
lean_dec_ref(v_pre_3911_);
return v___x_3942_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(lean_object* v_pre_3949_, lean_object* v_post_3950_, uint8_t v_usedLetOnly_3951_, uint8_t v_skipConstInApp_3952_, uint8_t v_skipInstances_3953_, size_t v_sz_3954_, size_t v_i_3955_, lean_object* v_bs_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_){
_start:
{
uint8_t v___x_3963_; 
v___x_3963_ = lean_usize_dec_lt(v_i_3955_, v_sz_3954_);
if (v___x_3963_ == 0)
{
lean_object* v___x_3964_; 
lean_dec_ref(v_post_3950_);
lean_dec_ref(v_pre_3949_);
v___x_3964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3964_, 0, v_bs_3956_);
return v___x_3964_;
}
else
{
lean_object* v_v_3965_; lean_object* v___x_3966_; lean_object* v_bs_x27_3967_; lean_object* v___x_3968_; 
v_v_3965_ = lean_array_uget(v_bs_3956_, v_i_3955_);
v___x_3966_ = lean_unsigned_to_nat(0u);
v_bs_x27_3967_ = lean_array_uset(v_bs_3956_, v_i_3955_, v___x_3966_);
lean_inc_ref(v_post_3950_);
lean_inc_ref(v_pre_3949_);
v___x_3968_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3949_, v_post_3950_, v_usedLetOnly_3951_, v_skipConstInApp_3952_, v_skipInstances_3953_, v_v_3965_, v___y_3957_, v___y_3958_, v___y_3959_, v___y_3960_, v___y_3961_);
if (lean_obj_tag(v___x_3968_) == 0)
{
lean_object* v_a_3969_; size_t v___x_3970_; size_t v___x_3971_; lean_object* v___x_3972_; 
v_a_3969_ = lean_ctor_get(v___x_3968_, 0);
lean_inc(v_a_3969_);
lean_dec_ref_known(v___x_3968_, 1);
v___x_3970_ = ((size_t)1ULL);
v___x_3971_ = lean_usize_add(v_i_3955_, v___x_3970_);
v___x_3972_ = lean_array_uset(v_bs_x27_3967_, v_i_3955_, v_a_3969_);
v_i_3955_ = v___x_3971_;
v_bs_3956_ = v___x_3972_;
goto _start;
}
else
{
lean_object* v_a_3974_; lean_object* v___x_3976_; uint8_t v_isShared_3977_; uint8_t v_isSharedCheck_3981_; 
lean_dec_ref(v_bs_x27_3967_);
lean_dec_ref(v_post_3950_);
lean_dec_ref(v_pre_3949_);
v_a_3974_ = lean_ctor_get(v___x_3968_, 0);
v_isSharedCheck_3981_ = !lean_is_exclusive(v___x_3968_);
if (v_isSharedCheck_3981_ == 0)
{
v___x_3976_ = v___x_3968_;
v_isShared_3977_ = v_isSharedCheck_3981_;
goto v_resetjp_3975_;
}
else
{
lean_inc(v_a_3974_);
lean_dec(v___x_3968_);
v___x_3976_ = lean_box(0);
v_isShared_3977_ = v_isSharedCheck_3981_;
goto v_resetjp_3975_;
}
v_resetjp_3975_:
{
lean_object* v___x_3979_; 
if (v_isShared_3977_ == 0)
{
v___x_3979_ = v___x_3976_;
goto v_reusejp_3978_;
}
else
{
lean_object* v_reuseFailAlloc_3980_; 
v_reuseFailAlloc_3980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3980_, 0, v_a_3974_);
v___x_3979_ = v_reuseFailAlloc_3980_;
goto v_reusejp_3978_;
}
v_reusejp_3978_:
{
return v___x_3979_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(lean_object* v_upperBound_3982_, lean_object* v___x_3983_, lean_object* v_pre_3984_, lean_object* v_post_3985_, uint8_t v_usedLetOnly_3986_, uint8_t v_skipConstInApp_3987_, uint8_t v_skipInstances_3988_, lean_object* v_a_3989_, lean_object* v_b_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_){
_start:
{
lean_object* v_a_3998_; lean_object* v___y_3999_; lean_object* v___y_4000_; lean_object* v___y_4001_; lean_object* v___y_4002_; uint8_t v___x_4006_; 
v___x_4006_ = lean_nat_dec_lt(v_a_3989_, v_upperBound_3982_);
if (v___x_4006_ == 0)
{
lean_object* v___x_4007_; 
lean_dec(v_a_3989_);
lean_dec_ref(v_post_3985_);
lean_dec_ref(v_pre_3984_);
v___x_4007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4007_, 0, v_b_3990_);
return v___x_4007_;
}
else
{
lean_object* v___x_4008_; lean_object* v___x_4009_; uint8_t v___x_4010_; 
v___x_4008_ = lean_array_fget_borrowed(v_b_3990_, v_a_3989_);
v___x_4009_ = lean_array_get_size(v___x_3983_);
v___x_4010_ = lean_nat_dec_lt(v_a_3989_, v___x_4009_);
if (v___x_4010_ == 0)
{
lean_object* v___x_4011_; 
lean_inc(v___x_4008_);
lean_inc_ref(v_post_3985_);
lean_inc_ref(v_pre_3984_);
v___x_4011_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3984_, v_post_3985_, v_usedLetOnly_3986_, v_skipConstInApp_3987_, v_skipInstances_3988_, v___x_4008_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_);
if (lean_obj_tag(v___x_4011_) == 0)
{
lean_object* v_a_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; 
v_a_4012_ = lean_ctor_get(v___x_4011_, 0);
lean_inc(v_a_4012_);
lean_dec_ref_known(v___x_4011_, 1);
v___x_4013_ = lean_array_fset(v_b_3990_, v_a_3989_, v_a_4012_);
v___x_4014_ = lean_unsigned_to_nat(1u);
v___x_4015_ = lean_nat_add(v_a_3989_, v___x_4014_);
lean_dec(v_a_3989_);
v_a_3989_ = v___x_4015_;
v_b_3990_ = v___x_4013_;
goto _start;
}
else
{
lean_object* v_a_4017_; lean_object* v___x_4019_; uint8_t v_isShared_4020_; uint8_t v_isSharedCheck_4024_; 
lean_dec_ref(v_b_3990_);
lean_dec(v_a_3989_);
lean_dec_ref(v_post_3985_);
lean_dec_ref(v_pre_3984_);
v_a_4017_ = lean_ctor_get(v___x_4011_, 0);
v_isSharedCheck_4024_ = !lean_is_exclusive(v___x_4011_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_4019_ = v___x_4011_;
v_isShared_4020_ = v_isSharedCheck_4024_;
goto v_resetjp_4018_;
}
else
{
lean_inc(v_a_4017_);
lean_dec(v___x_4011_);
v___x_4019_ = lean_box(0);
v_isShared_4020_ = v_isSharedCheck_4024_;
goto v_resetjp_4018_;
}
v_resetjp_4018_:
{
lean_object* v___x_4022_; 
if (v_isShared_4020_ == 0)
{
v___x_4022_ = v___x_4019_;
goto v_reusejp_4021_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v_a_4017_);
v___x_4022_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4021_;
}
v_reusejp_4021_:
{
return v___x_4022_;
}
}
}
}
else
{
lean_object* v___x_4025_; uint8_t v_isInstance_4026_; 
v___x_4025_ = lean_array_fget_borrowed(v___x_3983_, v_a_3989_);
v_isInstance_4026_ = lean_ctor_get_uint8(v___x_4025_, sizeof(void*)*1 + 4);
if (v_isInstance_4026_ == 0)
{
lean_object* v___x_4027_; 
lean_inc(v___x_4008_);
lean_inc_ref(v_post_3985_);
lean_inc_ref(v_pre_3984_);
v___x_4027_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3984_, v_post_3985_, v_usedLetOnly_3986_, v_skipConstInApp_3987_, v_skipInstances_3988_, v___x_4008_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_);
if (lean_obj_tag(v___x_4027_) == 0)
{
lean_object* v_a_4028_; lean_object* v___x_4029_; 
v_a_4028_ = lean_ctor_get(v___x_4027_, 0);
lean_inc(v_a_4028_);
lean_dec_ref_known(v___x_4027_, 1);
v___x_4029_ = lean_array_fset(v_b_3990_, v_a_3989_, v_a_4028_);
v_a_3998_ = v___x_4029_;
v___y_3999_ = v___y_3992_;
v___y_4000_ = v___y_3993_;
v___y_4001_ = v___y_3994_;
v___y_4002_ = v___y_3995_;
goto v___jp_3997_;
}
else
{
lean_object* v_a_4030_; lean_object* v___x_4032_; uint8_t v_isShared_4033_; uint8_t v_isSharedCheck_4037_; 
lean_dec_ref(v_b_3990_);
lean_dec(v_a_3989_);
lean_dec_ref(v_post_3985_);
lean_dec_ref(v_pre_3984_);
v_a_4030_ = lean_ctor_get(v___x_4027_, 0);
v_isSharedCheck_4037_ = !lean_is_exclusive(v___x_4027_);
if (v_isSharedCheck_4037_ == 0)
{
v___x_4032_ = v___x_4027_;
v_isShared_4033_ = v_isSharedCheck_4037_;
goto v_resetjp_4031_;
}
else
{
lean_inc(v_a_4030_);
lean_dec(v___x_4027_);
v___x_4032_ = lean_box(0);
v_isShared_4033_ = v_isSharedCheck_4037_;
goto v_resetjp_4031_;
}
v_resetjp_4031_:
{
lean_object* v___x_4035_; 
if (v_isShared_4033_ == 0)
{
v___x_4035_ = v___x_4032_;
goto v_reusejp_4034_;
}
else
{
lean_object* v_reuseFailAlloc_4036_; 
v_reuseFailAlloc_4036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4036_, 0, v_a_4030_);
v___x_4035_ = v_reuseFailAlloc_4036_;
goto v_reusejp_4034_;
}
v_reusejp_4034_:
{
return v___x_4035_;
}
}
}
}
else
{
v_a_3998_ = v_b_3990_;
v___y_3999_ = v___y_3992_;
v___y_4000_ = v___y_3993_;
v___y_4001_ = v___y_3994_;
v___y_4002_ = v___y_3995_;
goto v___jp_3997_;
}
}
}
v___jp_3997_:
{
lean_object* v___x_4003_; lean_object* v___x_4004_; 
v___x_4003_ = lean_unsigned_to_nat(1u);
v___x_4004_ = lean_nat_add(v_a_3989_, v___x_4003_);
lean_dec(v_a_3989_);
v_a_3989_ = v___x_4004_;
v_b_3990_ = v_a_3998_;
v___y_3992_ = v___y_3999_;
v___y_3993_ = v___y_4000_;
v___y_3994_ = v___y_4001_;
v___y_3995_ = v___y_4002_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(uint8_t v_skipInstances_4038_, lean_object* v_pre_4039_, lean_object* v_post_4040_, uint8_t v_usedLetOnly_4041_, uint8_t v_skipConstInApp_4042_, lean_object* v_x_4043_, lean_object* v_x_4044_, lean_object* v_x_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_){
_start:
{
lean_object* v_f_4053_; lean_object* v___y_4054_; lean_object* v___y_4055_; lean_object* v___y_4056_; lean_object* v___y_4057_; lean_object* v___y_4058_; 
if (lean_obj_tag(v_x_4043_) == 5)
{
lean_object* v_fn_4101_; lean_object* v_arg_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; 
v_fn_4101_ = lean_ctor_get(v_x_4043_, 0);
lean_inc_ref(v_fn_4101_);
v_arg_4102_ = lean_ctor_get(v_x_4043_, 1);
lean_inc_ref(v_arg_4102_);
lean_dec_ref_known(v_x_4043_, 2);
v___x_4103_ = lean_array_set(v_x_4044_, v_x_4045_, v_arg_4102_);
v___x_4104_ = lean_unsigned_to_nat(1u);
v___x_4105_ = lean_nat_sub(v_x_4045_, v___x_4104_);
lean_dec(v_x_4045_);
v_x_4043_ = v_fn_4101_;
v_x_4044_ = v___x_4103_;
v_x_4045_ = v___x_4105_;
goto _start;
}
else
{
lean_dec(v_x_4045_);
if (v_skipConstInApp_4042_ == 0)
{
goto v___jp_4098_;
}
else
{
uint8_t v___x_4107_; 
v___x_4107_ = l_Lean_Expr_isConst(v_x_4043_);
if (v___x_4107_ == 0)
{
goto v___jp_4098_;
}
else
{
v_f_4053_ = v_x_4043_;
v___y_4054_ = v___y_4046_;
v___y_4055_ = v___y_4047_;
v___y_4056_ = v___y_4048_;
v___y_4057_ = v___y_4049_;
v___y_4058_ = v___y_4050_;
goto v___jp_4052_;
}
}
}
v___jp_4052_:
{
if (v_skipInstances_4038_ == 0)
{
size_t v_sz_4059_; size_t v___x_4060_; lean_object* v___x_4061_; 
v_sz_4059_ = lean_array_size(v_x_4044_);
v___x_4060_ = ((size_t)0ULL);
lean_inc_ref(v_post_4040_);
lean_inc_ref(v_pre_4039_);
v___x_4061_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(v_pre_4039_, v_post_4040_, v_usedLetOnly_4041_, v_skipConstInApp_4042_, v_skipInstances_4038_, v_sz_4059_, v___x_4060_, v_x_4044_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_);
if (lean_obj_tag(v___x_4061_) == 0)
{
lean_object* v_a_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; 
v_a_4062_ = lean_ctor_get(v___x_4061_, 0);
lean_inc(v_a_4062_);
lean_dec_ref_known(v___x_4061_, 1);
v___x_4063_ = l_Lean_mkAppN(v_f_4053_, v_a_4062_);
lean_dec(v_a_4062_);
v___x_4064_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4039_, v_post_4040_, v_usedLetOnly_4041_, v_skipConstInApp_4042_, v_skipInstances_4038_, v___x_4063_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_);
return v___x_4064_;
}
else
{
lean_object* v_a_4065_; lean_object* v___x_4067_; uint8_t v_isShared_4068_; uint8_t v_isSharedCheck_4072_; 
lean_dec_ref(v_f_4053_);
lean_dec_ref(v_post_4040_);
lean_dec_ref(v_pre_4039_);
v_a_4065_ = lean_ctor_get(v___x_4061_, 0);
v_isSharedCheck_4072_ = !lean_is_exclusive(v___x_4061_);
if (v_isSharedCheck_4072_ == 0)
{
v___x_4067_ = v___x_4061_;
v_isShared_4068_ = v_isSharedCheck_4072_;
goto v_resetjp_4066_;
}
else
{
lean_inc(v_a_4065_);
lean_dec(v___x_4061_);
v___x_4067_ = lean_box(0);
v_isShared_4068_ = v_isSharedCheck_4072_;
goto v_resetjp_4066_;
}
v_resetjp_4066_:
{
lean_object* v___x_4070_; 
if (v_isShared_4068_ == 0)
{
v___x_4070_ = v___x_4067_;
goto v_reusejp_4069_;
}
else
{
lean_object* v_reuseFailAlloc_4071_; 
v_reuseFailAlloc_4071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4071_, 0, v_a_4065_);
v___x_4070_ = v_reuseFailAlloc_4071_;
goto v_reusejp_4069_;
}
v_reusejp_4069_:
{
return v___x_4070_;
}
}
}
}
else
{
lean_object* v___x_4073_; lean_object* v___x_4074_; 
v___x_4073_ = lean_array_get_size(v_x_4044_);
lean_inc_ref(v_f_4053_);
v___x_4074_ = l_Lean_Meta_getFunInfoNArgs(v_f_4053_, v___x_4073_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_);
if (lean_obj_tag(v___x_4074_) == 0)
{
lean_object* v_a_4075_; lean_object* v_paramInfo_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; 
v_a_4075_ = lean_ctor_get(v___x_4074_, 0);
lean_inc(v_a_4075_);
lean_dec_ref_known(v___x_4074_, 1);
v_paramInfo_4076_ = lean_ctor_get(v_a_4075_, 0);
lean_inc_ref(v_paramInfo_4076_);
lean_dec(v_a_4075_);
v___x_4077_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_4040_);
lean_inc_ref(v_pre_4039_);
v___x_4078_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(v___x_4073_, v_paramInfo_4076_, v_pre_4039_, v_post_4040_, v_usedLetOnly_4041_, v_skipConstInApp_4042_, v_skipInstances_4038_, v___x_4077_, v_x_4044_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_);
lean_dec_ref(v_paramInfo_4076_);
if (lean_obj_tag(v___x_4078_) == 0)
{
lean_object* v_a_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; 
v_a_4079_ = lean_ctor_get(v___x_4078_, 0);
lean_inc(v_a_4079_);
lean_dec_ref_known(v___x_4078_, 1);
v___x_4080_ = l_Lean_mkAppN(v_f_4053_, v_a_4079_);
lean_dec(v_a_4079_);
v___x_4081_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4039_, v_post_4040_, v_usedLetOnly_4041_, v_skipConstInApp_4042_, v_skipInstances_4038_, v___x_4080_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_);
return v___x_4081_;
}
else
{
lean_object* v_a_4082_; lean_object* v___x_4084_; uint8_t v_isShared_4085_; uint8_t v_isSharedCheck_4089_; 
lean_dec_ref(v_f_4053_);
lean_dec_ref(v_post_4040_);
lean_dec_ref(v_pre_4039_);
v_a_4082_ = lean_ctor_get(v___x_4078_, 0);
v_isSharedCheck_4089_ = !lean_is_exclusive(v___x_4078_);
if (v_isSharedCheck_4089_ == 0)
{
v___x_4084_ = v___x_4078_;
v_isShared_4085_ = v_isSharedCheck_4089_;
goto v_resetjp_4083_;
}
else
{
lean_inc(v_a_4082_);
lean_dec(v___x_4078_);
v___x_4084_ = lean_box(0);
v_isShared_4085_ = v_isSharedCheck_4089_;
goto v_resetjp_4083_;
}
v_resetjp_4083_:
{
lean_object* v___x_4087_; 
if (v_isShared_4085_ == 0)
{
v___x_4087_ = v___x_4084_;
goto v_reusejp_4086_;
}
else
{
lean_object* v_reuseFailAlloc_4088_; 
v_reuseFailAlloc_4088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4088_, 0, v_a_4082_);
v___x_4087_ = v_reuseFailAlloc_4088_;
goto v_reusejp_4086_;
}
v_reusejp_4086_:
{
return v___x_4087_;
}
}
}
}
else
{
lean_object* v_a_4090_; lean_object* v___x_4092_; uint8_t v_isShared_4093_; uint8_t v_isSharedCheck_4097_; 
lean_dec_ref(v_f_4053_);
lean_dec_ref(v_x_4044_);
lean_dec_ref(v_post_4040_);
lean_dec_ref(v_pre_4039_);
v_a_4090_ = lean_ctor_get(v___x_4074_, 0);
v_isSharedCheck_4097_ = !lean_is_exclusive(v___x_4074_);
if (v_isSharedCheck_4097_ == 0)
{
v___x_4092_ = v___x_4074_;
v_isShared_4093_ = v_isSharedCheck_4097_;
goto v_resetjp_4091_;
}
else
{
lean_inc(v_a_4090_);
lean_dec(v___x_4074_);
v___x_4092_ = lean_box(0);
v_isShared_4093_ = v_isSharedCheck_4097_;
goto v_resetjp_4091_;
}
v_resetjp_4091_:
{
lean_object* v___x_4095_; 
if (v_isShared_4093_ == 0)
{
v___x_4095_ = v___x_4092_;
goto v_reusejp_4094_;
}
else
{
lean_object* v_reuseFailAlloc_4096_; 
v_reuseFailAlloc_4096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4096_, 0, v_a_4090_);
v___x_4095_ = v_reuseFailAlloc_4096_;
goto v_reusejp_4094_;
}
v_reusejp_4094_:
{
return v___x_4095_;
}
}
}
}
}
v___jp_4098_:
{
lean_object* v___x_4099_; 
lean_inc_ref(v_post_4040_);
lean_inc_ref(v_pre_4039_);
v___x_4099_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4039_, v_post_4040_, v_usedLetOnly_4041_, v_skipConstInApp_4042_, v_skipInstances_4038_, v_x_4043_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_, v___y_4050_);
if (lean_obj_tag(v___x_4099_) == 0)
{
lean_object* v_a_4100_; 
v_a_4100_ = lean_ctor_get(v___x_4099_, 0);
lean_inc(v_a_4100_);
lean_dec_ref_known(v___x_4099_, 1);
v_f_4053_ = v_a_4100_;
v___y_4054_ = v___y_4046_;
v___y_4055_ = v___y_4047_;
v___y_4056_ = v___y_4048_;
v___y_4057_ = v___y_4049_;
v___y_4058_ = v___y_4050_;
goto v___jp_4052_;
}
else
{
lean_dec_ref(v_x_4044_);
lean_dec_ref(v_post_4040_);
lean_dec_ref(v_pre_4039_);
return v___x_4099_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1(lean_object* v___x_4108_, lean_object* v_pre_4109_, lean_object* v_e_4110_, lean_object* v_post_4111_, uint8_t v_usedLetOnly_4112_, uint8_t v_skipConstInApp_4113_, uint8_t v_skipInstances_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_){
_start:
{
lean_object* v___x_4121_; 
v___x_4121_ = l_Lean_Core_checkSystem(v___x_4108_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4121_) == 0)
{
lean_object* v___x_4122_; 
lean_dec_ref_known(v___x_4121_, 1);
lean_inc_ref(v_pre_4109_);
lean_inc(v___y_4119_);
lean_inc_ref(v___y_4118_);
lean_inc(v___y_4117_);
lean_inc_ref(v___y_4116_);
lean_inc_ref(v_e_4110_);
v___x_4122_ = lean_apply_6(v_pre_4109_, v_e_4110_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, lean_box(0));
if (lean_obj_tag(v___x_4122_) == 0)
{
lean_object* v_a_4123_; lean_object* v___x_4125_; uint8_t v_isShared_4126_; uint8_t v_isSharedCheck_4171_; 
v_a_4123_ = lean_ctor_get(v___x_4122_, 0);
v_isSharedCheck_4171_ = !lean_is_exclusive(v___x_4122_);
if (v_isSharedCheck_4171_ == 0)
{
v___x_4125_ = v___x_4122_;
v_isShared_4126_ = v_isSharedCheck_4171_;
goto v_resetjp_4124_;
}
else
{
lean_inc(v_a_4123_);
lean_dec(v___x_4122_);
v___x_4125_ = lean_box(0);
v_isShared_4126_ = v_isSharedCheck_4171_;
goto v_resetjp_4124_;
}
v_resetjp_4124_:
{
lean_object* v___y_4128_; 
switch(lean_obj_tag(v_a_4123_))
{
case 0:
{
lean_object* v_e_4163_; lean_object* v___x_4165_; 
lean_dec_ref(v_post_4111_);
lean_dec_ref(v_e_4110_);
lean_dec_ref(v_pre_4109_);
v_e_4163_ = lean_ctor_get(v_a_4123_, 0);
lean_inc_ref(v_e_4163_);
lean_dec_ref_known(v_a_4123_, 1);
if (v_isShared_4126_ == 0)
{
lean_ctor_set(v___x_4125_, 0, v_e_4163_);
v___x_4165_ = v___x_4125_;
goto v_reusejp_4164_;
}
else
{
lean_object* v_reuseFailAlloc_4166_; 
v_reuseFailAlloc_4166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4166_, 0, v_e_4163_);
v___x_4165_ = v_reuseFailAlloc_4166_;
goto v_reusejp_4164_;
}
v_reusejp_4164_:
{
return v___x_4165_;
}
}
case 1:
{
lean_object* v_e_4167_; lean_object* v___x_4168_; 
lean_del_object(v___x_4125_);
lean_dec_ref(v_e_4110_);
v_e_4167_ = lean_ctor_get(v_a_4123_, 0);
lean_inc_ref(v_e_4167_);
lean_dec_ref_known(v_a_4123_, 1);
v___x_4168_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4109_, v_post_4111_, v_usedLetOnly_4112_, v_skipConstInApp_4113_, v_skipInstances_4114_, v_e_4167_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4168_;
}
default: 
{
lean_object* v_e_x3f_4169_; 
lean_del_object(v___x_4125_);
v_e_x3f_4169_ = lean_ctor_get(v_a_4123_, 0);
lean_inc(v_e_x3f_4169_);
lean_dec_ref_known(v_a_4123_, 1);
if (lean_obj_tag(v_e_x3f_4169_) == 0)
{
v___y_4128_ = v_e_4110_;
goto v___jp_4127_;
}
else
{
lean_object* v_val_4170_; 
lean_dec_ref(v_e_4110_);
v_val_4170_ = lean_ctor_get(v_e_x3f_4169_, 0);
lean_inc(v_val_4170_);
lean_dec_ref_known(v_e_x3f_4169_, 1);
v___y_4128_ = v_val_4170_;
goto v___jp_4127_;
}
}
}
v___jp_4127_:
{
switch(lean_obj_tag(v___y_4128_))
{
case 7:
{
lean_object* v___x_4129_; lean_object* v___x_4130_; 
v___x_4129_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___closed__0));
v___x_4130_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(v_pre_4109_, v_post_4111_, v_usedLetOnly_4112_, v_skipConstInApp_4113_, v_skipInstances_4114_, v___x_4129_, v___y_4128_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4130_;
}
case 6:
{
lean_object* v___x_4131_; lean_object* v___x_4132_; 
v___x_4131_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___closed__0));
v___x_4132_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(v_pre_4109_, v_post_4111_, v_usedLetOnly_4112_, v_skipConstInApp_4113_, v_skipInstances_4114_, v___x_4131_, v___y_4128_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4132_;
}
case 8:
{
lean_object* v___x_4133_; lean_object* v___x_4134_; 
v___x_4133_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___closed__0));
v___x_4134_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(v_pre_4109_, v_post_4111_, v_usedLetOnly_4112_, v_skipConstInApp_4113_, v_skipInstances_4114_, v___x_4133_, v___y_4128_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4134_;
}
case 5:
{
lean_object* v_dummy_4135_; lean_object* v_nargs_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; 
v_dummy_4135_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_4136_ = l_Lean_Expr_getAppNumArgs(v___y_4128_);
lean_inc(v_nargs_4136_);
v___x_4137_ = lean_mk_array(v_nargs_4136_, v_dummy_4135_);
v___x_4138_ = lean_unsigned_to_nat(1u);
v___x_4139_ = lean_nat_sub(v_nargs_4136_, v___x_4138_);
lean_dec(v_nargs_4136_);
v___x_4140_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(v_skipInstances_4114_, v_pre_4109_, v_post_4111_, v_usedLetOnly_4112_, v_skipConstInApp_4113_, v___y_4128_, v___x_4137_, v___x_4139_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4140_;
}
case 10:
{
lean_object* v_data_4141_; lean_object* v_expr_4142_; lean_object* v___x_4143_; 
v_data_4141_ = lean_ctor_get(v___y_4128_, 0);
v_expr_4142_ = lean_ctor_get(v___y_4128_, 1);
lean_inc_ref(v_expr_4142_);
lean_inc_ref(v_post_4111_);
lean_inc_ref(v_pre_4109_);
v___x_4143_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4109_, v_post_4111_, v_usedLetOnly_4112_, v_skipConstInApp_4113_, v_skipInstances_4114_, v_expr_4142_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4143_) == 0)
{
lean_object* v_a_4144_; size_t v___x_4145_; size_t v___x_4146_; uint8_t v___x_4147_; 
v_a_4144_ = lean_ctor_get(v___x_4143_, 0);
lean_inc(v_a_4144_);
lean_dec_ref_known(v___x_4143_, 1);
v___x_4145_ = lean_ptr_addr(v_expr_4142_);
v___x_4146_ = lean_ptr_addr(v_a_4144_);
v___x_4147_ = lean_usize_dec_eq(v___x_4145_, v___x_4146_);
if (v___x_4147_ == 0)
{
lean_object* v___x_4148_; lean_object* v___x_4149_; 
lean_inc(v_data_4141_);
lean_dec_ref_known(v___y_4128_, 2);
v___x_4148_ = l_Lean_Expr_mdata___override(v_data_4141_, v_a_4144_);
v___x_4149_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4109_, v_post_4111_, v_usedLetOnly_4112_, v_skipConstInApp_4113_, v_skipInstances_4114_, v___x_4148_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4149_;
}
else
{
lean_object* v___x_4150_; 
lean_dec(v_a_4144_);
v___x_4150_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4109_, v_post_4111_, v_usedLetOnly_4112_, v_skipConstInApp_4113_, v_skipInstances_4114_, v___y_4128_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4150_;
}
}
else
{
lean_dec_ref_known(v___y_4128_, 2);
lean_dec_ref(v_post_4111_);
lean_dec_ref(v_pre_4109_);
return v___x_4143_;
}
}
case 11:
{
lean_object* v_typeName_4151_; lean_object* v_idx_4152_; lean_object* v_struct_4153_; lean_object* v___x_4154_; 
v_typeName_4151_ = lean_ctor_get(v___y_4128_, 0);
v_idx_4152_ = lean_ctor_get(v___y_4128_, 1);
v_struct_4153_ = lean_ctor_get(v___y_4128_, 2);
lean_inc_ref(v_struct_4153_);
lean_inc_ref(v_post_4111_);
lean_inc_ref(v_pre_4109_);
v___x_4154_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4109_, v_post_4111_, v_usedLetOnly_4112_, v_skipConstInApp_4113_, v_skipInstances_4114_, v_struct_4153_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4154_) == 0)
{
lean_object* v_a_4155_; size_t v___x_4156_; size_t v___x_4157_; uint8_t v___x_4158_; 
v_a_4155_ = lean_ctor_get(v___x_4154_, 0);
lean_inc(v_a_4155_);
lean_dec_ref_known(v___x_4154_, 1);
v___x_4156_ = lean_ptr_addr(v_struct_4153_);
v___x_4157_ = lean_ptr_addr(v_a_4155_);
v___x_4158_ = lean_usize_dec_eq(v___x_4156_, v___x_4157_);
if (v___x_4158_ == 0)
{
lean_object* v___x_4159_; lean_object* v___x_4160_; 
lean_inc(v_idx_4152_);
lean_inc(v_typeName_4151_);
lean_dec_ref_known(v___y_4128_, 3);
v___x_4159_ = l_Lean_Expr_proj___override(v_typeName_4151_, v_idx_4152_, v_a_4155_);
v___x_4160_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4109_, v_post_4111_, v_usedLetOnly_4112_, v_skipConstInApp_4113_, v_skipInstances_4114_, v___x_4159_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4160_;
}
else
{
lean_object* v___x_4161_; 
lean_dec(v_a_4155_);
v___x_4161_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4109_, v_post_4111_, v_usedLetOnly_4112_, v_skipConstInApp_4113_, v_skipInstances_4114_, v___y_4128_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4161_;
}
}
else
{
lean_dec_ref_known(v___y_4128_, 3);
lean_dec_ref(v_post_4111_);
lean_dec_ref(v_pre_4109_);
return v___x_4154_;
}
}
default: 
{
lean_object* v___x_4162_; 
v___x_4162_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4109_, v_post_4111_, v_usedLetOnly_4112_, v_skipConstInApp_4113_, v_skipInstances_4114_, v___y_4128_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4162_;
}
}
}
}
}
else
{
lean_object* v_a_4172_; lean_object* v___x_4174_; uint8_t v_isShared_4175_; uint8_t v_isSharedCheck_4179_; 
lean_dec_ref(v_post_4111_);
lean_dec_ref(v_e_4110_);
lean_dec_ref(v_pre_4109_);
v_a_4172_ = lean_ctor_get(v___x_4122_, 0);
v_isSharedCheck_4179_ = !lean_is_exclusive(v___x_4122_);
if (v_isSharedCheck_4179_ == 0)
{
v___x_4174_ = v___x_4122_;
v_isShared_4175_ = v_isSharedCheck_4179_;
goto v_resetjp_4173_;
}
else
{
lean_inc(v_a_4172_);
lean_dec(v___x_4122_);
v___x_4174_ = lean_box(0);
v_isShared_4175_ = v_isSharedCheck_4179_;
goto v_resetjp_4173_;
}
v_resetjp_4173_:
{
lean_object* v___x_4177_; 
if (v_isShared_4175_ == 0)
{
v___x_4177_ = v___x_4174_;
goto v_reusejp_4176_;
}
else
{
lean_object* v_reuseFailAlloc_4178_; 
v_reuseFailAlloc_4178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4178_, 0, v_a_4172_);
v___x_4177_ = v_reuseFailAlloc_4178_;
goto v_reusejp_4176_;
}
v_reusejp_4176_:
{
return v___x_4177_;
}
}
}
}
else
{
lean_object* v_a_4180_; lean_object* v___x_4182_; uint8_t v_isShared_4183_; uint8_t v_isSharedCheck_4187_; 
lean_dec_ref(v_post_4111_);
lean_dec_ref(v_e_4110_);
lean_dec_ref(v_pre_4109_);
v_a_4180_ = lean_ctor_get(v___x_4121_, 0);
v_isSharedCheck_4187_ = !lean_is_exclusive(v___x_4121_);
if (v_isSharedCheck_4187_ == 0)
{
v___x_4182_ = v___x_4121_;
v_isShared_4183_ = v_isSharedCheck_4187_;
goto v_resetjp_4181_;
}
else
{
lean_inc(v_a_4180_);
lean_dec(v___x_4121_);
v___x_4182_ = lean_box(0);
v_isShared_4183_ = v_isSharedCheck_4187_;
goto v_resetjp_4181_;
}
v_resetjp_4181_:
{
lean_object* v___x_4185_; 
if (v_isShared_4183_ == 0)
{
v___x_4185_ = v___x_4182_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v_a_4180_);
v___x_4185_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
return v___x_4185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1___boxed(lean_object* v___x_4188_, lean_object* v_pre_4189_, lean_object* v_e_4190_, lean_object* v_post_4191_, lean_object* v_usedLetOnly_4192_, lean_object* v_skipConstInApp_4193_, lean_object* v_skipInstances_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_, lean_object* v___y_4197_, lean_object* v___y_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_){
_start:
{
uint8_t v_usedLetOnly_boxed_4201_; uint8_t v_skipConstInApp_boxed_4202_; uint8_t v_skipInstances_boxed_4203_; lean_object* v_res_4204_; 
v_usedLetOnly_boxed_4201_ = lean_unbox(v_usedLetOnly_4192_);
v_skipConstInApp_boxed_4202_ = lean_unbox(v_skipConstInApp_4193_);
v_skipInstances_boxed_4203_ = lean_unbox(v_skipInstances_4194_);
v_res_4204_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1(v___x_4188_, v_pre_4189_, v_e_4190_, v_post_4191_, v_usedLetOnly_boxed_4201_, v_skipConstInApp_boxed_4202_, v_skipInstances_boxed_4203_, v___y_4195_, v___y_4196_, v___y_4197_, v___y_4198_, v___y_4199_);
lean_dec(v___y_4199_);
lean_dec_ref(v___y_4198_);
lean_dec(v___y_4197_);
lean_dec_ref(v___y_4196_);
lean_dec(v___y_4195_);
return v_res_4204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(lean_object* v_pre_4205_, lean_object* v_post_4206_, uint8_t v_usedLetOnly_4207_, uint8_t v_skipConstInApp_4208_, uint8_t v_skipInstances_4209_, lean_object* v_e_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_){
_start:
{
lean_object* v___x_4217_; lean_object* v___x_4218_; 
lean_inc(v___y_4211_);
v___x_4217_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_4217_, 0, lean_box(0));
lean_closure_set(v___x_4217_, 1, lean_box(0));
lean_closure_set(v___x_4217_, 2, v___y_4211_);
v___x_4218_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_box(0), v___x_4217_, v___y_4212_, v___y_4213_, v___y_4214_, v___y_4215_);
if (lean_obj_tag(v___x_4218_) == 0)
{
lean_object* v_a_4219_; lean_object* v___x_4221_; uint8_t v_isShared_4222_; uint8_t v_isSharedCheck_4253_; 
v_a_4219_ = lean_ctor_get(v___x_4218_, 0);
v_isSharedCheck_4253_ = !lean_is_exclusive(v___x_4218_);
if (v_isSharedCheck_4253_ == 0)
{
v___x_4221_ = v___x_4218_;
v_isShared_4222_ = v_isSharedCheck_4253_;
goto v_resetjp_4220_;
}
else
{
lean_inc(v_a_4219_);
lean_dec(v___x_4218_);
v___x_4221_ = lean_box(0);
v_isShared_4222_ = v_isSharedCheck_4253_;
goto v_resetjp_4220_;
}
v_resetjp_4220_:
{
lean_object* v___x_4223_; 
v___x_4223_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_a_4219_, v_e_4210_);
lean_dec(v_a_4219_);
if (lean_obj_tag(v___x_4223_) == 0)
{
lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___f_4228_; lean_object* v___x_4229_; 
lean_del_object(v___x_4221_);
v___x_4224_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__20___closed__0));
v___x_4225_ = lean_box(v_usedLetOnly_4207_);
v___x_4226_ = lean_box(v_skipConstInApp_4208_);
v___x_4227_ = lean_box(v_skipInstances_4209_);
lean_inc_ref(v_e_4210_);
v___f_4228_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1___boxed), 13, 7);
lean_closure_set(v___f_4228_, 0, v___x_4224_);
lean_closure_set(v___f_4228_, 1, v_pre_4205_);
lean_closure_set(v___f_4228_, 2, v_e_4210_);
lean_closure_set(v___f_4228_, 3, v_post_4206_);
lean_closure_set(v___f_4228_, 4, v___x_4225_);
lean_closure_set(v___f_4228_, 5, v___x_4226_);
lean_closure_set(v___f_4228_, 6, v___x_4227_);
v___x_4229_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(v___f_4228_, v___y_4211_, v___y_4212_, v___y_4213_, v___y_4214_, v___y_4215_);
if (lean_obj_tag(v___x_4229_) == 0)
{
lean_object* v_a_4230_; lean_object* v___f_4231_; lean_object* v___x_4232_; 
v_a_4230_ = lean_ctor_get(v___x_4229_, 0);
lean_inc_n(v_a_4230_, 2);
lean_dec_ref_known(v___x_4229_, 1);
lean_inc(v___y_4211_);
v___f_4231_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_4231_, 0, v___y_4211_);
lean_closure_set(v___f_4231_, 1, v_e_4210_);
lean_closure_set(v___f_4231_, 2, v_a_4230_);
v___x_4232_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_box(0), v___f_4231_, v___y_4212_, v___y_4213_, v___y_4214_, v___y_4215_);
if (lean_obj_tag(v___x_4232_) == 0)
{
lean_object* v___x_4234_; uint8_t v_isShared_4235_; uint8_t v_isSharedCheck_4239_; 
v_isSharedCheck_4239_ = !lean_is_exclusive(v___x_4232_);
if (v_isSharedCheck_4239_ == 0)
{
lean_object* v_unused_4240_; 
v_unused_4240_ = lean_ctor_get(v___x_4232_, 0);
lean_dec(v_unused_4240_);
v___x_4234_ = v___x_4232_;
v_isShared_4235_ = v_isSharedCheck_4239_;
goto v_resetjp_4233_;
}
else
{
lean_dec(v___x_4232_);
v___x_4234_ = lean_box(0);
v_isShared_4235_ = v_isSharedCheck_4239_;
goto v_resetjp_4233_;
}
v_resetjp_4233_:
{
lean_object* v___x_4237_; 
if (v_isShared_4235_ == 0)
{
lean_ctor_set(v___x_4234_, 0, v_a_4230_);
v___x_4237_ = v___x_4234_;
goto v_reusejp_4236_;
}
else
{
lean_object* v_reuseFailAlloc_4238_; 
v_reuseFailAlloc_4238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4238_, 0, v_a_4230_);
v___x_4237_ = v_reuseFailAlloc_4238_;
goto v_reusejp_4236_;
}
v_reusejp_4236_:
{
return v___x_4237_;
}
}
}
else
{
lean_object* v_a_4241_; lean_object* v___x_4243_; uint8_t v_isShared_4244_; uint8_t v_isSharedCheck_4248_; 
lean_dec(v_a_4230_);
v_a_4241_ = lean_ctor_get(v___x_4232_, 0);
v_isSharedCheck_4248_ = !lean_is_exclusive(v___x_4232_);
if (v_isSharedCheck_4248_ == 0)
{
v___x_4243_ = v___x_4232_;
v_isShared_4244_ = v_isSharedCheck_4248_;
goto v_resetjp_4242_;
}
else
{
lean_inc(v_a_4241_);
lean_dec(v___x_4232_);
v___x_4243_ = lean_box(0);
v_isShared_4244_ = v_isSharedCheck_4248_;
goto v_resetjp_4242_;
}
v_resetjp_4242_:
{
lean_object* v___x_4246_; 
if (v_isShared_4244_ == 0)
{
v___x_4246_ = v___x_4243_;
goto v_reusejp_4245_;
}
else
{
lean_object* v_reuseFailAlloc_4247_; 
v_reuseFailAlloc_4247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4247_, 0, v_a_4241_);
v___x_4246_ = v_reuseFailAlloc_4247_;
goto v_reusejp_4245_;
}
v_reusejp_4245_:
{
return v___x_4246_;
}
}
}
}
else
{
lean_dec_ref(v_e_4210_);
return v___x_4229_;
}
}
else
{
lean_object* v_val_4249_; lean_object* v___x_4251_; 
lean_dec_ref(v_e_4210_);
lean_dec_ref(v_post_4206_);
lean_dec_ref(v_pre_4205_);
v_val_4249_ = lean_ctor_get(v___x_4223_, 0);
lean_inc(v_val_4249_);
lean_dec_ref_known(v___x_4223_, 1);
if (v_isShared_4222_ == 0)
{
lean_ctor_set(v___x_4221_, 0, v_val_4249_);
v___x_4251_ = v___x_4221_;
goto v_reusejp_4250_;
}
else
{
lean_object* v_reuseFailAlloc_4252_; 
v_reuseFailAlloc_4252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4252_, 0, v_val_4249_);
v___x_4251_ = v_reuseFailAlloc_4252_;
goto v_reusejp_4250_;
}
v_reusejp_4250_:
{
return v___x_4251_;
}
}
}
}
else
{
lean_object* v_a_4254_; lean_object* v___x_4256_; uint8_t v_isShared_4257_; uint8_t v_isSharedCheck_4261_; 
lean_dec_ref(v_e_4210_);
lean_dec_ref(v_post_4206_);
lean_dec_ref(v_pre_4205_);
v_a_4254_ = lean_ctor_get(v___x_4218_, 0);
v_isSharedCheck_4261_ = !lean_is_exclusive(v___x_4218_);
if (v_isSharedCheck_4261_ == 0)
{
v___x_4256_ = v___x_4218_;
v_isShared_4257_ = v_isSharedCheck_4261_;
goto v_resetjp_4255_;
}
else
{
lean_inc(v_a_4254_);
lean_dec(v___x_4218_);
v___x_4256_ = lean_box(0);
v_isShared_4257_ = v_isSharedCheck_4261_;
goto v_resetjp_4255_;
}
v_resetjp_4255_:
{
lean_object* v___x_4259_; 
if (v_isShared_4257_ == 0)
{
v___x_4259_ = v___x_4256_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v_a_4254_);
v___x_4259_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
return v___x_4259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(lean_object* v_pre_4262_, lean_object* v_post_4263_, uint8_t v_usedLetOnly_4264_, uint8_t v_skipConstInApp_4265_, uint8_t v_skipInstances_4266_, lean_object* v_fvars_4267_, lean_object* v_e_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_){
_start:
{
if (lean_obj_tag(v_e_4268_) == 7)
{
lean_object* v_binderName_4275_; lean_object* v_binderType_4276_; lean_object* v_body_4277_; uint8_t v_binderInfo_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___f_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; 
v_binderName_4275_ = lean_ctor_get(v_e_4268_, 0);
lean_inc(v_binderName_4275_);
v_binderType_4276_ = lean_ctor_get(v_e_4268_, 1);
lean_inc_ref(v_binderType_4276_);
v_body_4277_ = lean_ctor_get(v_e_4268_, 2);
lean_inc_ref(v_body_4277_);
v_binderInfo_4278_ = lean_ctor_get_uint8(v_e_4268_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_4268_, 3);
v___x_4279_ = lean_box(v_usedLetOnly_4264_);
v___x_4280_ = lean_box(v_skipConstInApp_4265_);
v___x_4281_ = lean_box(v_skipInstances_4266_);
lean_inc_ref(v_post_4263_);
lean_inc_ref(v_pre_4262_);
lean_inc_ref(v_fvars_4267_);
v___f_4282_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0___boxed), 14, 7);
lean_closure_set(v___f_4282_, 0, v_fvars_4267_);
lean_closure_set(v___f_4282_, 1, v_pre_4262_);
lean_closure_set(v___f_4282_, 2, v_post_4263_);
lean_closure_set(v___f_4282_, 3, v___x_4279_);
lean_closure_set(v___f_4282_, 4, v___x_4280_);
lean_closure_set(v___f_4282_, 5, v___x_4281_);
lean_closure_set(v___f_4282_, 6, v_body_4277_);
v___x_4283_ = lean_expr_instantiate_rev(v_binderType_4276_, v_fvars_4267_);
lean_dec_ref(v_fvars_4267_);
lean_dec_ref(v_binderType_4276_);
v___x_4284_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4262_, v_post_4263_, v_usedLetOnly_4264_, v_skipConstInApp_4265_, v_skipInstances_4266_, v___x_4283_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_);
if (lean_obj_tag(v___x_4284_) == 0)
{
lean_object* v_a_4285_; uint8_t v___x_4286_; lean_object* v___x_4287_; 
v_a_4285_ = lean_ctor_get(v___x_4284_, 0);
lean_inc(v_a_4285_);
lean_dec_ref_known(v___x_4284_, 1);
v___x_4286_ = 0;
v___x_4287_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_binderName_4275_, v_binderInfo_4278_, v_a_4285_, v___f_4282_, v___x_4286_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_);
return v___x_4287_;
}
else
{
lean_dec_ref(v___f_4282_);
lean_dec(v_binderName_4275_);
return v___x_4284_;
}
}
else
{
lean_object* v___x_4288_; lean_object* v___x_4289_; 
v___x_4288_ = lean_expr_instantiate_rev(v_e_4268_, v_fvars_4267_);
lean_dec_ref(v_e_4268_);
lean_inc_ref(v_post_4263_);
lean_inc_ref(v_pre_4262_);
v___x_4289_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4262_, v_post_4263_, v_usedLetOnly_4264_, v_skipConstInApp_4265_, v_skipInstances_4266_, v___x_4288_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_);
if (lean_obj_tag(v___x_4289_) == 0)
{
lean_object* v_a_4290_; uint8_t v___x_4291_; uint8_t v___x_4292_; uint8_t v___x_4293_; lean_object* v___x_4294_; 
v_a_4290_ = lean_ctor_get(v___x_4289_, 0);
lean_inc(v_a_4290_);
lean_dec_ref_known(v___x_4289_, 1);
v___x_4291_ = 0;
v___x_4292_ = 1;
v___x_4293_ = 1;
v___x_4294_ = l_Lean_Meta_mkForallFVars(v_fvars_4267_, v_a_4290_, v___x_4291_, v_usedLetOnly_4264_, v___x_4292_, v___x_4293_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_);
lean_dec_ref(v_fvars_4267_);
if (lean_obj_tag(v___x_4294_) == 0)
{
lean_object* v_a_4295_; lean_object* v___x_4296_; 
v_a_4295_ = lean_ctor_get(v___x_4294_, 0);
lean_inc(v_a_4295_);
lean_dec_ref_known(v___x_4294_, 1);
v___x_4296_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4262_, v_post_4263_, v_usedLetOnly_4264_, v_skipConstInApp_4265_, v_skipInstances_4266_, v_a_4295_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_);
return v___x_4296_;
}
else
{
lean_dec_ref(v_post_4263_);
lean_dec_ref(v_pre_4262_);
return v___x_4294_;
}
}
else
{
lean_dec_ref(v_fvars_4267_);
lean_dec_ref(v_post_4263_);
lean_dec_ref(v_pre_4262_);
return v___x_4289_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0(lean_object* v_fvars_4297_, lean_object* v_pre_4298_, lean_object* v_post_4299_, uint8_t v_usedLetOnly_4300_, uint8_t v_skipConstInApp_4301_, uint8_t v_skipInstances_4302_, lean_object* v_body_4303_, lean_object* v_x_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_, lean_object* v___y_4309_){
_start:
{
lean_object* v___x_4311_; lean_object* v___x_4312_; 
v___x_4311_ = lean_array_push(v_fvars_4297_, v_x_4304_);
v___x_4312_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(v_pre_4298_, v_post_4299_, v_usedLetOnly_4300_, v_skipConstInApp_4301_, v_skipInstances_4302_, v___x_4311_, v_body_4303_, v___y_4305_, v___y_4306_, v___y_4307_, v___y_4308_, v___y_4309_);
return v___x_4312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3___boxed(lean_object* v_pre_4313_, lean_object* v_post_4314_, lean_object* v_usedLetOnly_4315_, lean_object* v_skipConstInApp_4316_, lean_object* v_skipInstances_4317_, lean_object* v_e_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_){
_start:
{
uint8_t v_usedLetOnly_boxed_4325_; uint8_t v_skipConstInApp_boxed_4326_; uint8_t v_skipInstances_boxed_4327_; lean_object* v_res_4328_; 
v_usedLetOnly_boxed_4325_ = lean_unbox(v_usedLetOnly_4315_);
v_skipConstInApp_boxed_4326_ = lean_unbox(v_skipConstInApp_4316_);
v_skipInstances_boxed_4327_ = lean_unbox(v_skipInstances_4317_);
v_res_4328_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4313_, v_post_4314_, v_usedLetOnly_boxed_4325_, v_skipConstInApp_boxed_4326_, v_skipInstances_boxed_4327_, v_e_4318_, v___y_4319_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_);
lean_dec(v___y_4323_);
lean_dec_ref(v___y_4322_);
lean_dec(v___y_4321_);
lean_dec_ref(v___y_4320_);
lean_dec(v___y_4319_);
return v_res_4328_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2___boxed(lean_object* v_pre_4329_, lean_object* v_post_4330_, lean_object* v_usedLetOnly_4331_, lean_object* v_skipConstInApp_4332_, lean_object* v_skipInstances_4333_, lean_object* v_sz_4334_, lean_object* v_i_4335_, lean_object* v_bs_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_){
_start:
{
uint8_t v_usedLetOnly_boxed_4343_; uint8_t v_skipConstInApp_boxed_4344_; uint8_t v_skipInstances_boxed_4345_; size_t v_sz_boxed_4346_; size_t v_i_boxed_4347_; lean_object* v_res_4348_; 
v_usedLetOnly_boxed_4343_ = lean_unbox(v_usedLetOnly_4331_);
v_skipConstInApp_boxed_4344_ = lean_unbox(v_skipConstInApp_4332_);
v_skipInstances_boxed_4345_ = lean_unbox(v_skipInstances_4333_);
v_sz_boxed_4346_ = lean_unbox_usize(v_sz_4334_);
lean_dec(v_sz_4334_);
v_i_boxed_4347_ = lean_unbox_usize(v_i_4335_);
lean_dec(v_i_4335_);
v_res_4348_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(v_pre_4329_, v_post_4330_, v_usedLetOnly_boxed_4343_, v_skipConstInApp_boxed_4344_, v_skipInstances_boxed_4345_, v_sz_boxed_4346_, v_i_boxed_4347_, v_bs_4336_, v___y_4337_, v___y_4338_, v___y_4339_, v___y_4340_, v___y_4341_);
lean_dec(v___y_4341_);
lean_dec_ref(v___y_4340_);
lean_dec(v___y_4339_);
lean_dec_ref(v___y_4338_);
lean_dec(v___y_4337_);
return v_res_4348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___boxed(lean_object* v_pre_4349_, lean_object* v_post_4350_, lean_object* v_usedLetOnly_4351_, lean_object* v_skipConstInApp_4352_, lean_object* v_skipInstances_4353_, lean_object* v_e_4354_, lean_object* v___y_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_){
_start:
{
uint8_t v_usedLetOnly_boxed_4361_; uint8_t v_skipConstInApp_boxed_4362_; uint8_t v_skipInstances_boxed_4363_; lean_object* v_res_4364_; 
v_usedLetOnly_boxed_4361_ = lean_unbox(v_usedLetOnly_4351_);
v_skipConstInApp_boxed_4362_ = lean_unbox(v_skipConstInApp_4352_);
v_skipInstances_boxed_4363_ = lean_unbox(v_skipInstances_4353_);
v_res_4364_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4349_, v_post_4350_, v_usedLetOnly_boxed_4361_, v_skipConstInApp_boxed_4362_, v_skipInstances_boxed_4363_, v_e_4354_, v___y_4355_, v___y_4356_, v___y_4357_, v___y_4358_, v___y_4359_);
lean_dec(v___y_4359_);
lean_dec_ref(v___y_4358_);
lean_dec(v___y_4357_);
lean_dec_ref(v___y_4356_);
lean_dec(v___y_4355_);
return v_res_4364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___boxed(lean_object* v_pre_4365_, lean_object* v_post_4366_, lean_object* v_usedLetOnly_4367_, lean_object* v_skipConstInApp_4368_, lean_object* v_skipInstances_4369_, lean_object* v_fvars_4370_, lean_object* v_e_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_){
_start:
{
uint8_t v_usedLetOnly_boxed_4378_; uint8_t v_skipConstInApp_boxed_4379_; uint8_t v_skipInstances_boxed_4380_; lean_object* v_res_4381_; 
v_usedLetOnly_boxed_4378_ = lean_unbox(v_usedLetOnly_4367_);
v_skipConstInApp_boxed_4379_ = lean_unbox(v_skipConstInApp_4368_);
v_skipInstances_boxed_4380_ = lean_unbox(v_skipInstances_4369_);
v_res_4381_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(v_pre_4365_, v_post_4366_, v_usedLetOnly_boxed_4378_, v_skipConstInApp_boxed_4379_, v_skipInstances_boxed_4380_, v_fvars_4370_, v_e_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
lean_dec(v___y_4376_);
lean_dec_ref(v___y_4375_);
lean_dec(v___y_4374_);
lean_dec_ref(v___y_4373_);
lean_dec(v___y_4372_);
return v_res_4381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___boxed(lean_object* v_pre_4382_, lean_object* v_post_4383_, lean_object* v_usedLetOnly_4384_, lean_object* v_skipConstInApp_4385_, lean_object* v_skipInstances_4386_, lean_object* v_fvars_4387_, lean_object* v_e_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_){
_start:
{
uint8_t v_usedLetOnly_boxed_4395_; uint8_t v_skipConstInApp_boxed_4396_; uint8_t v_skipInstances_boxed_4397_; lean_object* v_res_4398_; 
v_usedLetOnly_boxed_4395_ = lean_unbox(v_usedLetOnly_4384_);
v_skipConstInApp_boxed_4396_ = lean_unbox(v_skipConstInApp_4385_);
v_skipInstances_boxed_4397_ = lean_unbox(v_skipInstances_4386_);
v_res_4398_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(v_pre_4382_, v_post_4383_, v_usedLetOnly_boxed_4395_, v_skipConstInApp_boxed_4396_, v_skipInstances_boxed_4397_, v_fvars_4387_, v_e_4388_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_, v___y_4393_);
lean_dec(v___y_4393_);
lean_dec_ref(v___y_4392_);
lean_dec(v___y_4391_);
lean_dec_ref(v___y_4390_);
lean_dec(v___y_4389_);
return v_res_4398_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___boxed(lean_object* v_pre_4399_, lean_object* v_post_4400_, lean_object* v_usedLetOnly_4401_, lean_object* v_skipConstInApp_4402_, lean_object* v_skipInstances_4403_, lean_object* v_fvars_4404_, lean_object* v_e_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_){
_start:
{
uint8_t v_usedLetOnly_boxed_4412_; uint8_t v_skipConstInApp_boxed_4413_; uint8_t v_skipInstances_boxed_4414_; lean_object* v_res_4415_; 
v_usedLetOnly_boxed_4412_ = lean_unbox(v_usedLetOnly_4401_);
v_skipConstInApp_boxed_4413_ = lean_unbox(v_skipConstInApp_4402_);
v_skipInstances_boxed_4414_ = lean_unbox(v_skipInstances_4403_);
v_res_4415_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(v_pre_4399_, v_post_4400_, v_usedLetOnly_boxed_4412_, v_skipConstInApp_boxed_4413_, v_skipInstances_boxed_4414_, v_fvars_4404_, v_e_4405_, v___y_4406_, v___y_4407_, v___y_4408_, v___y_4409_, v___y_4410_);
lean_dec(v___y_4410_);
lean_dec_ref(v___y_4409_);
lean_dec(v___y_4408_);
lean_dec_ref(v___y_4407_);
lean_dec(v___y_4406_);
return v_res_4415_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_upperBound_4416_, lean_object* v___x_4417_, lean_object* v_pre_4418_, lean_object* v_post_4419_, lean_object* v_usedLetOnly_4420_, lean_object* v_skipConstInApp_4421_, lean_object* v_skipInstances_4422_, lean_object* v_a_4423_, lean_object* v_b_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_){
_start:
{
uint8_t v_usedLetOnly_boxed_4431_; uint8_t v_skipConstInApp_boxed_4432_; uint8_t v_skipInstances_boxed_4433_; lean_object* v_res_4434_; 
v_usedLetOnly_boxed_4431_ = lean_unbox(v_usedLetOnly_4420_);
v_skipConstInApp_boxed_4432_ = lean_unbox(v_skipConstInApp_4421_);
v_skipInstances_boxed_4433_ = lean_unbox(v_skipInstances_4422_);
v_res_4434_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_4416_, v___x_4417_, v_pre_4418_, v_post_4419_, v_usedLetOnly_boxed_4431_, v_skipConstInApp_boxed_4432_, v_skipInstances_boxed_4433_, v_a_4423_, v_b_4424_, v___y_4425_, v___y_4426_, v___y_4427_, v___y_4428_, v___y_4429_);
lean_dec(v___y_4429_);
lean_dec_ref(v___y_4428_);
lean_dec(v___y_4427_);
lean_dec_ref(v___y_4426_);
lean_dec(v___y_4425_);
lean_dec_ref(v___x_4417_);
lean_dec(v_upperBound_4416_);
return v_res_4434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8___boxed(lean_object* v_skipInstances_4435_, lean_object* v_pre_4436_, lean_object* v_post_4437_, lean_object* v_usedLetOnly_4438_, lean_object* v_skipConstInApp_4439_, lean_object* v_x_4440_, lean_object* v_x_4441_, lean_object* v_x_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_, lean_object* v___y_4446_, lean_object* v___y_4447_, lean_object* v___y_4448_){
_start:
{
uint8_t v_skipInstances_boxed_4449_; uint8_t v_usedLetOnly_boxed_4450_; uint8_t v_skipConstInApp_boxed_4451_; lean_object* v_res_4452_; 
v_skipInstances_boxed_4449_ = lean_unbox(v_skipInstances_4435_);
v_usedLetOnly_boxed_4450_ = lean_unbox(v_usedLetOnly_4438_);
v_skipConstInApp_boxed_4451_ = lean_unbox(v_skipConstInApp_4439_);
v_res_4452_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(v_skipInstances_boxed_4449_, v_pre_4436_, v_post_4437_, v_usedLetOnly_boxed_4450_, v_skipConstInApp_boxed_4451_, v_x_4440_, v_x_4441_, v_x_4442_, v___y_4443_, v___y_4444_, v___y_4445_, v___y_4446_, v___y_4447_);
lean_dec(v___y_4447_);
lean_dec_ref(v___y_4446_);
lean_dec(v___y_4445_);
lean_dec_ref(v___y_4444_);
lean_dec(v___y_4443_);
return v_res_4452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(lean_object* v_input_4453_, lean_object* v_pre_4454_, lean_object* v_post_4455_, uint8_t v_usedLetOnly_4456_, uint8_t v_skipConstInApp_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_){
_start:
{
uint8_t v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v_a_4466_; lean_object* v___x_4467_; 
v___x_4463_ = 0;
v___x_4464_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_4465_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_box(0), v___x_4464_, v___y_4458_, v___y_4459_, v___y_4460_, v___y_4461_);
v_a_4466_ = lean_ctor_get(v___x_4465_, 0);
lean_inc(v_a_4466_);
lean_dec_ref(v___x_4465_);
v___x_4467_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4454_, v_post_4455_, v_usedLetOnly_4456_, v_skipConstInApp_4457_, v___x_4463_, v_input_4453_, v_a_4466_, v___y_4458_, v___y_4459_, v___y_4460_, v___y_4461_);
if (lean_obj_tag(v___x_4467_) == 0)
{
lean_object* v_a_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4472_; uint8_t v_isShared_4473_; uint8_t v_isSharedCheck_4477_; 
v_a_4468_ = lean_ctor_get(v___x_4467_, 0);
lean_inc(v_a_4468_);
lean_dec_ref_known(v___x_4467_, 1);
v___x_4469_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_4469_, 0, lean_box(0));
lean_closure_set(v___x_4469_, 1, lean_box(0));
lean_closure_set(v___x_4469_, 2, v_a_4466_);
v___x_4470_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_box(0), v___x_4469_, v___y_4458_, v___y_4459_, v___y_4460_, v___y_4461_);
v_isSharedCheck_4477_ = !lean_is_exclusive(v___x_4470_);
if (v_isSharedCheck_4477_ == 0)
{
lean_object* v_unused_4478_; 
v_unused_4478_ = lean_ctor_get(v___x_4470_, 0);
lean_dec(v_unused_4478_);
v___x_4472_ = v___x_4470_;
v_isShared_4473_ = v_isSharedCheck_4477_;
goto v_resetjp_4471_;
}
else
{
lean_dec(v___x_4470_);
v___x_4472_ = lean_box(0);
v_isShared_4473_ = v_isSharedCheck_4477_;
goto v_resetjp_4471_;
}
v_resetjp_4471_:
{
lean_object* v___x_4475_; 
if (v_isShared_4473_ == 0)
{
lean_ctor_set(v___x_4472_, 0, v_a_4468_);
v___x_4475_ = v___x_4472_;
goto v_reusejp_4474_;
}
else
{
lean_object* v_reuseFailAlloc_4476_; 
v_reuseFailAlloc_4476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4476_, 0, v_a_4468_);
v___x_4475_ = v_reuseFailAlloc_4476_;
goto v_reusejp_4474_;
}
v_reusejp_4474_:
{
return v___x_4475_;
}
}
}
else
{
lean_dec(v_a_4466_);
return v___x_4467_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___boxed(lean_object* v_input_4479_, lean_object* v_pre_4480_, lean_object* v_post_4481_, lean_object* v_usedLetOnly_4482_, lean_object* v_skipConstInApp_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_){
_start:
{
uint8_t v_usedLetOnly_boxed_4489_; uint8_t v_skipConstInApp_boxed_4490_; lean_object* v_res_4491_; 
v_usedLetOnly_boxed_4489_ = lean_unbox(v_usedLetOnly_4482_);
v_skipConstInApp_boxed_4490_ = lean_unbox(v_skipConstInApp_4483_);
v_res_4491_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_input_4479_, v_pre_4480_, v_post_4481_, v_usedLetOnly_boxed_4489_, v_skipConstInApp_boxed_4490_, v___y_4484_, v___y_4485_, v___y_4486_, v___y_4487_);
lean_dec(v___y_4487_);
lean_dec_ref(v___y_4486_);
lean_dec(v___y_4485_);
lean_dec_ref(v___y_4484_);
return v_res_4491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce(lean_object* v_e_4493_, uint8_t v_zetaDelta_4494_, uint8_t v_zetaHave_4495_, uint8_t v_beta_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_){
_start:
{
lean_object* v_lctx_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___f_4506_; uint8_t v___x_4507_; 
v_lctx_4502_ = lean_ctor_get(v___y_4497_, 2);
lean_inc_ref(v_lctx_4502_);
v___x_4503_ = lean_local_ctx_num_indices(v_lctx_4502_);
v___x_4504_ = lean_box(v_zetaHave_4495_);
v___x_4505_ = lean_box(v_zetaDelta_4494_);
v___f_4506_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__0___boxed), 9, 3);
lean_closure_set(v___f_4506_, 0, v___x_4504_);
lean_closure_set(v___f_4506_, 1, v___x_4503_);
lean_closure_set(v___f_4506_, 2, v___x_4505_);
v___x_4507_ = 1;
if (v_beta_4496_ == 0)
{
lean_object* v___f_4508_; lean_object* v___f_4509_; lean_object* v___x_4510_; 
v___f_4508_ = ((lean_object*)(l_Lean_Meta_zetaReduce___closed__0));
v___f_4509_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__2___boxed), 7, 1);
lean_closure_set(v___f_4509_, 0, v___f_4506_);
v___x_4510_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_e_4493_, v___f_4509_, v___f_4508_, v___x_4507_, v_beta_4496_, v___y_4497_, v___y_4498_, v___y_4499_, v___y_4500_);
return v___x_4510_;
}
else
{
lean_object* v___f_4511_; lean_object* v___f_4512_; uint8_t v___x_4513_; lean_object* v___x_4514_; 
v___f_4511_ = ((lean_object*)(l_Lean_Meta_zetaReduce___closed__0));
v___f_4512_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__4___boxed), 7, 1);
lean_closure_set(v___f_4512_, 0, v___f_4506_);
v___x_4513_ = 0;
v___x_4514_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_e_4493_, v___f_4512_, v___f_4511_, v___x_4507_, v___x_4513_, v___y_4497_, v___y_4498_, v___y_4499_, v___y_4500_);
return v___x_4514_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___boxed(lean_object* v_e_4515_, lean_object* v_zetaDelta_4516_, lean_object* v_zetaHave_4517_, lean_object* v_beta_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_){
_start:
{
uint8_t v_zetaDelta_boxed_4524_; uint8_t v_zetaHave_boxed_4525_; uint8_t v_beta_boxed_4526_; lean_object* v_res_4527_; 
v_zetaDelta_boxed_4524_ = lean_unbox(v_zetaDelta_4516_);
v_zetaHave_boxed_4525_ = lean_unbox(v_zetaHave_4517_);
v_beta_boxed_4526_ = lean_unbox(v_beta_4518_);
v_res_4527_ = l_Lean_Meta_zetaReduce(v_e_4515_, v_zetaDelta_boxed_4524_, v_zetaHave_boxed_4525_, v_beta_boxed_4526_, v___y_4519_, v___y_4520_, v___y_4521_, v___y_4522_);
lean_dec(v___y_4522_);
lean_dec_ref(v___y_4521_);
lean_dec(v___y_4520_);
lean_dec_ref(v___y_4519_);
return v_res_4527_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4(lean_object* v_upperBound_4528_, lean_object* v___x_4529_, lean_object* v_pre_4530_, lean_object* v_post_4531_, uint8_t v_usedLetOnly_4532_, uint8_t v_skipConstInApp_4533_, uint8_t v_skipInstances_4534_, lean_object* v___x_4535_, lean_object* v_inst_4536_, lean_object* v_R_4537_, lean_object* v_a_4538_, lean_object* v_b_4539_, lean_object* v_c_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_){
_start:
{
lean_object* v___x_4547_; 
v___x_4547_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_4528_, v___x_4529_, v_pre_4530_, v_post_4531_, v_usedLetOnly_4532_, v_skipConstInApp_4533_, v_skipInstances_4534_, v_a_4538_, v_b_4539_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_);
return v___x_4547_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___boxed(lean_object** _args){
lean_object* v_upperBound_4548_ = _args[0];
lean_object* v___x_4549_ = _args[1];
lean_object* v_pre_4550_ = _args[2];
lean_object* v_post_4551_ = _args[3];
lean_object* v_usedLetOnly_4552_ = _args[4];
lean_object* v_skipConstInApp_4553_ = _args[5];
lean_object* v_skipInstances_4554_ = _args[6];
lean_object* v___x_4555_ = _args[7];
lean_object* v_inst_4556_ = _args[8];
lean_object* v_R_4557_ = _args[9];
lean_object* v_a_4558_ = _args[10];
lean_object* v_b_4559_ = _args[11];
lean_object* v_c_4560_ = _args[12];
lean_object* v___y_4561_ = _args[13];
lean_object* v___y_4562_ = _args[14];
lean_object* v___y_4563_ = _args[15];
lean_object* v___y_4564_ = _args[16];
lean_object* v___y_4565_ = _args[17];
lean_object* v___y_4566_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_4567_; uint8_t v_skipConstInApp_boxed_4568_; uint8_t v_skipInstances_boxed_4569_; lean_object* v_res_4570_; 
v_usedLetOnly_boxed_4567_ = lean_unbox(v_usedLetOnly_4552_);
v_skipConstInApp_boxed_4568_ = lean_unbox(v_skipConstInApp_4553_);
v_skipInstances_boxed_4569_ = lean_unbox(v_skipInstances_4554_);
v_res_4570_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4(v_upperBound_4548_, v___x_4549_, v_pre_4550_, v_post_4551_, v_usedLetOnly_boxed_4567_, v_skipConstInApp_boxed_4568_, v_skipInstances_boxed_4569_, v___x_4555_, v_inst_4556_, v_R_4557_, v_a_4558_, v_b_4559_, v_c_4560_, v___y_4561_, v___y_4562_, v___y_4563_, v___y_4564_, v___y_4565_);
lean_dec(v___y_4565_);
lean_dec_ref(v___y_4564_);
lean_dec(v___y_4563_);
lean_dec_ref(v___y_4562_);
lean_dec(v___y_4561_);
lean_dec(v___x_4555_);
lean_dec_ref(v___x_4549_);
lean_dec(v_upperBound_4548_);
return v_res_4570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6(lean_object* v_00_u03b1_4571_, lean_object* v_name_4572_, uint8_t v_bi_4573_, lean_object* v_type_4574_, lean_object* v_k_4575_, uint8_t v_kind_4576_, lean_object* v___y_4577_, lean_object* v___y_4578_, lean_object* v___y_4579_, lean_object* v___y_4580_, lean_object* v___y_4581_){
_start:
{
lean_object* v___x_4583_; 
v___x_4583_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_name_4572_, v_bi_4573_, v_type_4574_, v_k_4575_, v_kind_4576_, v___y_4577_, v___y_4578_, v___y_4579_, v___y_4580_, v___y_4581_);
return v___x_4583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object* v_00_u03b1_4584_, lean_object* v_name_4585_, lean_object* v_bi_4586_, lean_object* v_type_4587_, lean_object* v_k_4588_, lean_object* v_kind_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_, lean_object* v___y_4592_, lean_object* v___y_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_){
_start:
{
uint8_t v_bi_boxed_4596_; uint8_t v_kind_boxed_4597_; lean_object* v_res_4598_; 
v_bi_boxed_4596_ = lean_unbox(v_bi_4586_);
v_kind_boxed_4597_ = lean_unbox(v_kind_4589_);
v_res_4598_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6(v_00_u03b1_4584_, v_name_4585_, v_bi_boxed_4596_, v_type_4587_, v_k_4588_, v_kind_boxed_4597_, v___y_4590_, v___y_4591_, v___y_4592_, v___y_4593_, v___y_4594_);
lean_dec(v___y_4594_);
lean_dec_ref(v___y_4593_);
lean_dec(v___y_4592_);
lean_dec_ref(v___y_4591_);
lean_dec(v___y_4590_);
return v_res_4598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9(lean_object* v_00_u03b1_4599_, lean_object* v_name_4600_, lean_object* v_type_4601_, lean_object* v_val_4602_, lean_object* v_k_4603_, uint8_t v_nondep_4604_, uint8_t v_kind_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_){
_start:
{
lean_object* v___x_4612_; 
v___x_4612_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(v_name_4600_, v_type_4601_, v_val_4602_, v_k_4603_, v_nondep_4604_, v_kind_4605_, v___y_4606_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_);
return v___x_4612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___boxed(lean_object* v_00_u03b1_4613_, lean_object* v_name_4614_, lean_object* v_type_4615_, lean_object* v_val_4616_, lean_object* v_k_4617_, lean_object* v_nondep_4618_, lean_object* v_kind_4619_, lean_object* v___y_4620_, lean_object* v___y_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_){
_start:
{
uint8_t v_nondep_boxed_4626_; uint8_t v_kind_boxed_4627_; lean_object* v_res_4628_; 
v_nondep_boxed_4626_ = lean_unbox(v_nondep_4618_);
v_kind_boxed_4627_ = lean_unbox(v_kind_4619_);
v_res_4628_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9(v_00_u03b1_4613_, v_name_4614_, v_type_4615_, v_val_4616_, v_k_4617_, v_nondep_boxed_4626_, v_kind_boxed_4627_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_);
lean_dec(v___y_4624_);
lean_dec_ref(v___y_4623_);
lean_dec(v___y_4622_);
lean_dec_ref(v___y_4621_);
lean_dec(v___y_4620_);
return v_res_4628_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12(lean_object* v_00_u03b1_4629_, lean_object* v_ref_4630_, lean_object* v___y_4631_, lean_object* v___y_4632_, lean_object* v___y_4633_, lean_object* v___y_4634_){
_start:
{
lean_object* v___x_4636_; 
v___x_4636_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(v_ref_4630_);
return v___x_4636_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___boxed(lean_object* v_00_u03b1_4637_, lean_object* v_ref_4638_, lean_object* v___y_4639_, lean_object* v___y_4640_, lean_object* v___y_4641_, lean_object* v___y_4642_, lean_object* v___y_4643_){
_start:
{
lean_object* v_res_4644_; 
v_res_4644_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12(v_00_u03b1_4637_, v_ref_4638_, v___y_4639_, v___y_4640_, v___y_4641_, v___y_4642_);
lean_dec(v___y_4642_);
lean_dec_ref(v___y_4641_);
lean_dec(v___y_4640_);
lean_dec_ref(v___y_4639_);
return v_res_4644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9(lean_object* v_00_u03b1_4645_, lean_object* v_x_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_){
_start:
{
lean_object* v___x_4653_; 
v___x_4653_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(v_x_4646_, v___y_4647_, v___y_4648_, v___y_4649_, v___y_4650_, v___y_4651_);
return v___x_4653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___boxed(lean_object* v_00_u03b1_4654_, lean_object* v_x_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_){
_start:
{
lean_object* v_res_4662_; 
v_res_4662_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9(v_00_u03b1_4654_, v_x_4655_, v___y_4656_, v___y_4657_, v___y_4658_, v___y_4659_, v___y_4660_);
lean_dec(v___y_4660_);
lean_dec_ref(v___y_4659_);
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
lean_dec(v___y_4656_);
return v_res_4662_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(lean_object* v_a_4663_, lean_object* v_as_4664_, size_t v_i_4665_, size_t v_stop_4666_){
_start:
{
uint8_t v___x_4667_; 
v___x_4667_ = lean_usize_dec_eq(v_i_4665_, v_stop_4666_);
if (v___x_4667_ == 0)
{
lean_object* v___x_4668_; uint8_t v___x_4669_; 
v___x_4668_ = lean_array_uget_borrowed(v_as_4664_, v_i_4665_);
v___x_4669_ = l_Lean_instBEqFVarId_beq(v_a_4663_, v___x_4668_);
if (v___x_4669_ == 0)
{
size_t v___x_4670_; size_t v___x_4671_; 
v___x_4670_ = ((size_t)1ULL);
v___x_4671_ = lean_usize_add(v_i_4665_, v___x_4670_);
v_i_4665_ = v___x_4671_;
goto _start;
}
else
{
return v___x_4669_;
}
}
else
{
uint8_t v___x_4673_; 
v___x_4673_ = 0;
return v___x_4673_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0___boxed(lean_object* v_a_4674_, lean_object* v_as_4675_, lean_object* v_i_4676_, lean_object* v_stop_4677_){
_start:
{
size_t v_i_boxed_4678_; size_t v_stop_boxed_4679_; uint8_t v_res_4680_; lean_object* v_r_4681_; 
v_i_boxed_4678_ = lean_unbox_usize(v_i_4676_);
lean_dec(v_i_4676_);
v_stop_boxed_4679_ = lean_unbox_usize(v_stop_4677_);
lean_dec(v_stop_4677_);
v_res_4680_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(v_a_4674_, v_as_4675_, v_i_boxed_4678_, v_stop_boxed_4679_);
lean_dec_ref(v_as_4675_);
lean_dec(v_a_4674_);
v_r_4681_ = lean_box(v_res_4680_);
return v_r_4681_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(lean_object* v_as_4682_, lean_object* v_a_4683_){
_start:
{
lean_object* v___x_4684_; lean_object* v___x_4685_; uint8_t v___x_4686_; 
v___x_4684_ = lean_unsigned_to_nat(0u);
v___x_4685_ = lean_array_get_size(v_as_4682_);
v___x_4686_ = lean_nat_dec_lt(v___x_4684_, v___x_4685_);
if (v___x_4686_ == 0)
{
return v___x_4686_;
}
else
{
if (v___x_4686_ == 0)
{
return v___x_4686_;
}
else
{
size_t v___x_4687_; size_t v___x_4688_; uint8_t v___x_4689_; 
v___x_4687_ = ((size_t)0ULL);
v___x_4688_ = lean_usize_of_nat(v___x_4685_);
v___x_4689_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(v_a_4683_, v_as_4682_, v___x_4687_, v___x_4688_);
return v___x_4689_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0___boxed(lean_object* v_as_4690_, lean_object* v_a_4691_){
_start:
{
uint8_t v_res_4692_; lean_object* v_r_4693_; 
v_res_4692_ = l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(v_as_4690_, v_a_4691_);
lean_dec(v_a_4691_);
lean_dec_ref(v_as_4690_);
v_r_4693_ = lean_box(v_res_4692_);
return v_r_4693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1(lean_object* v_fvars_4694_, lean_object* v_e_4695_, lean_object* v___y_4696_, lean_object* v___y_4697_, lean_object* v___y_4698_, lean_object* v___y_4699_){
_start:
{
lean_object* v___x_4704_; 
v___x_4704_ = l_Lean_Expr_getAppFn(v_e_4695_);
if (lean_obj_tag(v___x_4704_) == 1)
{
lean_object* v_fvarId_4705_; uint8_t v___x_4706_; 
v_fvarId_4705_ = lean_ctor_get(v___x_4704_, 0);
lean_inc(v_fvarId_4705_);
lean_dec_ref_known(v___x_4704_, 1);
v___x_4706_ = l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(v_fvars_4694_, v_fvarId_4705_);
if (v___x_4706_ == 0)
{
lean_dec(v_fvarId_4705_);
lean_dec_ref(v_e_4695_);
goto v___jp_4701_;
}
else
{
uint8_t v___x_4707_; lean_object* v___x_4708_; 
v___x_4707_ = 0;
v___x_4708_ = l_Lean_FVarId_getValue_x3f___redArg(v_fvarId_4705_, v___x_4707_, v___y_4696_, v___y_4698_, v___y_4699_);
if (lean_obj_tag(v___x_4708_) == 0)
{
lean_object* v_a_4709_; 
v_a_4709_ = lean_ctor_get(v___x_4708_, 0);
lean_inc(v_a_4709_);
lean_dec_ref_known(v___x_4708_, 1);
if (lean_obj_tag(v_a_4709_) == 1)
{
lean_object* v_val_4710_; lean_object* v___x_4712_; uint8_t v_isShared_4713_; uint8_t v_isSharedCheck_4733_; 
v_val_4710_ = lean_ctor_get(v_a_4709_, 0);
v_isSharedCheck_4733_ = !lean_is_exclusive(v_a_4709_);
if (v_isSharedCheck_4733_ == 0)
{
v___x_4712_ = v_a_4709_;
v_isShared_4713_ = v_isSharedCheck_4733_;
goto v_resetjp_4711_;
}
else
{
lean_inc(v_val_4710_);
lean_dec(v_a_4709_);
v___x_4712_ = lean_box(0);
v_isShared_4713_ = v_isSharedCheck_4733_;
goto v_resetjp_4711_;
}
v_resetjp_4711_:
{
lean_object* v___x_4714_; lean_object* v_a_4715_; lean_object* v___x_4717_; uint8_t v_isShared_4718_; uint8_t v_isSharedCheck_4732_; 
v___x_4714_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_val_4710_, v___y_4697_);
v_a_4715_ = lean_ctor_get(v___x_4714_, 0);
v_isSharedCheck_4732_ = !lean_is_exclusive(v___x_4714_);
if (v_isSharedCheck_4732_ == 0)
{
v___x_4717_ = v___x_4714_;
v_isShared_4718_ = v_isSharedCheck_4732_;
goto v_resetjp_4716_;
}
else
{
lean_inc(v_a_4715_);
lean_dec(v___x_4714_);
v___x_4717_ = lean_box(0);
v_isShared_4718_ = v_isSharedCheck_4732_;
goto v_resetjp_4716_;
}
v_resetjp_4716_:
{
lean_object* v_dummy_4719_; lean_object* v_nargs_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4727_; 
v_dummy_4719_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_4720_ = l_Lean_Expr_getAppNumArgs(v_e_4695_);
lean_inc(v_nargs_4720_);
v___x_4721_ = lean_mk_array(v_nargs_4720_, v_dummy_4719_);
v___x_4722_ = lean_unsigned_to_nat(1u);
v___x_4723_ = lean_nat_sub(v_nargs_4720_, v___x_4722_);
lean_dec(v_nargs_4720_);
v___x_4724_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_4695_, v___x_4721_, v___x_4723_);
v___x_4725_ = l_Lean_Expr_beta(v_a_4715_, v___x_4724_);
if (v_isShared_4713_ == 0)
{
lean_ctor_set(v___x_4712_, 0, v___x_4725_);
v___x_4727_ = v___x_4712_;
goto v_reusejp_4726_;
}
else
{
lean_object* v_reuseFailAlloc_4731_; 
v_reuseFailAlloc_4731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4731_, 0, v___x_4725_);
v___x_4727_ = v_reuseFailAlloc_4731_;
goto v_reusejp_4726_;
}
v_reusejp_4726_:
{
lean_object* v___x_4729_; 
if (v_isShared_4718_ == 0)
{
lean_ctor_set(v___x_4717_, 0, v___x_4727_);
v___x_4729_ = v___x_4717_;
goto v_reusejp_4728_;
}
else
{
lean_object* v_reuseFailAlloc_4730_; 
v_reuseFailAlloc_4730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4730_, 0, v___x_4727_);
v___x_4729_ = v_reuseFailAlloc_4730_;
goto v_reusejp_4728_;
}
v_reusejp_4728_:
{
return v___x_4729_;
}
}
}
}
}
else
{
lean_dec(v_a_4709_);
lean_dec_ref(v_e_4695_);
goto v___jp_4701_;
}
}
else
{
lean_object* v_a_4734_; lean_object* v___x_4736_; uint8_t v_isShared_4737_; uint8_t v_isSharedCheck_4741_; 
lean_dec_ref(v_e_4695_);
v_a_4734_ = lean_ctor_get(v___x_4708_, 0);
v_isSharedCheck_4741_ = !lean_is_exclusive(v___x_4708_);
if (v_isSharedCheck_4741_ == 0)
{
v___x_4736_ = v___x_4708_;
v_isShared_4737_ = v_isSharedCheck_4741_;
goto v_resetjp_4735_;
}
else
{
lean_inc(v_a_4734_);
lean_dec(v___x_4708_);
v___x_4736_ = lean_box(0);
v_isShared_4737_ = v_isSharedCheck_4741_;
goto v_resetjp_4735_;
}
v_resetjp_4735_:
{
lean_object* v___x_4739_; 
if (v_isShared_4737_ == 0)
{
v___x_4739_ = v___x_4736_;
goto v_reusejp_4738_;
}
else
{
lean_object* v_reuseFailAlloc_4740_; 
v_reuseFailAlloc_4740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4740_, 0, v_a_4734_);
v___x_4739_ = v_reuseFailAlloc_4740_;
goto v_reusejp_4738_;
}
v_reusejp_4738_:
{
return v___x_4739_;
}
}
}
}
}
else
{
lean_object* v___x_4742_; lean_object* v___x_4743_; 
lean_dec_ref(v___x_4704_);
lean_dec_ref(v_e_4695_);
v___x_4742_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_4743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4743_, 0, v___x_4742_);
return v___x_4743_;
}
v___jp_4701_:
{
lean_object* v___x_4702_; lean_object* v___x_4703_; 
v___x_4702_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_4703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4703_, 0, v___x_4702_);
return v___x_4703_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1___boxed(lean_object* v_fvars_4744_, lean_object* v_e_4745_, lean_object* v___y_4746_, lean_object* v___y_4747_, lean_object* v___y_4748_, lean_object* v___y_4749_, lean_object* v___y_4750_){
_start:
{
lean_object* v_res_4751_; 
v_res_4751_ = l_Lean_Meta_zetaDeltaFVars___lam__1(v_fvars_4744_, v_e_4745_, v___y_4746_, v___y_4747_, v___y_4748_, v___y_4749_);
lean_dec(v___y_4749_);
lean_dec_ref(v___y_4748_);
lean_dec(v___y_4747_);
lean_dec_ref(v___y_4746_);
lean_dec_ref(v_fvars_4744_);
return v_res_4751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars(lean_object* v_e_4752_, lean_object* v_fvars_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_){
_start:
{
lean_object* v___f_4759_; lean_object* v_pre_4760_; uint8_t v___x_4761_; lean_object* v___x_4762_; 
v___f_4759_ = ((lean_object*)(l_Lean_Meta_zetaReduce___closed__0));
v_pre_4760_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaDeltaFVars___lam__1___boxed), 7, 1);
lean_closure_set(v_pre_4760_, 0, v_fvars_4753_);
v___x_4761_ = 0;
v___x_4762_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_e_4752_, v_pre_4760_, v___f_4759_, v___x_4761_, v___x_4761_, v___y_4754_, v___y_4755_, v___y_4756_, v___y_4757_);
return v___x_4762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___boxed(lean_object* v_e_4763_, lean_object* v_fvars_4764_, lean_object* v___y_4765_, lean_object* v___y_4766_, lean_object* v___y_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_){
_start:
{
lean_object* v_res_4770_; 
v_res_4770_ = l_Lean_Meta_zetaDeltaFVars(v_e_4763_, v_fvars_4764_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_);
lean_dec(v___y_4768_);
lean_dec_ref(v___y_4767_);
lean_dec(v___y_4766_);
lean_dec_ref(v___y_4765_);
return v_res_4770_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4771_; 
v___x_4771_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_4771_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_4772_; lean_object* v___x_4773_; 
v___x_4772_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0);
v___x_4773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4773_, 0, v___x_4772_);
return v___x_4773_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_4774_; lean_object* v___x_4775_; 
v___x_4774_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1);
v___x_4775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4775_, 0, v___x_4774_);
lean_ctor_set(v___x_4775_, 1, v___x_4774_);
return v___x_4775_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(lean_object* v_env_4776_, lean_object* v___y_4777_){
_start:
{
lean_object* v___x_4779_; lean_object* v_nextMacroScope_4780_; lean_object* v_ngen_4781_; lean_object* v_auxDeclNGen_4782_; lean_object* v_traceState_4783_; lean_object* v_messages_4784_; lean_object* v_infoState_4785_; lean_object* v_snapshotTasks_4786_; lean_object* v___x_4788_; uint8_t v_isShared_4789_; uint8_t v_isSharedCheck_4797_; 
v___x_4779_ = lean_st_ref_take(v___y_4777_);
v_nextMacroScope_4780_ = lean_ctor_get(v___x_4779_, 1);
v_ngen_4781_ = lean_ctor_get(v___x_4779_, 2);
v_auxDeclNGen_4782_ = lean_ctor_get(v___x_4779_, 3);
v_traceState_4783_ = lean_ctor_get(v___x_4779_, 4);
v_messages_4784_ = lean_ctor_get(v___x_4779_, 6);
v_infoState_4785_ = lean_ctor_get(v___x_4779_, 7);
v_snapshotTasks_4786_ = lean_ctor_get(v___x_4779_, 8);
v_isSharedCheck_4797_ = !lean_is_exclusive(v___x_4779_);
if (v_isSharedCheck_4797_ == 0)
{
lean_object* v_unused_4798_; lean_object* v_unused_4799_; 
v_unused_4798_ = lean_ctor_get(v___x_4779_, 5);
lean_dec(v_unused_4798_);
v_unused_4799_ = lean_ctor_get(v___x_4779_, 0);
lean_dec(v_unused_4799_);
v___x_4788_ = v___x_4779_;
v_isShared_4789_ = v_isSharedCheck_4797_;
goto v_resetjp_4787_;
}
else
{
lean_inc(v_snapshotTasks_4786_);
lean_inc(v_infoState_4785_);
lean_inc(v_messages_4784_);
lean_inc(v_traceState_4783_);
lean_inc(v_auxDeclNGen_4782_);
lean_inc(v_ngen_4781_);
lean_inc(v_nextMacroScope_4780_);
lean_dec(v___x_4779_);
v___x_4788_ = lean_box(0);
v_isShared_4789_ = v_isSharedCheck_4797_;
goto v_resetjp_4787_;
}
v_resetjp_4787_:
{
lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4793_; 
v___x_4790_ = lean_box(0);
v___x_4791_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2);
if (v_isShared_4789_ == 0)
{
lean_ctor_set(v___x_4788_, 5, v___x_4791_);
lean_ctor_set(v___x_4788_, 0, v_env_4776_);
v___x_4793_ = v___x_4788_;
goto v_reusejp_4792_;
}
else
{
lean_object* v_reuseFailAlloc_4796_; 
v_reuseFailAlloc_4796_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4796_, 0, v_env_4776_);
lean_ctor_set(v_reuseFailAlloc_4796_, 1, v_nextMacroScope_4780_);
lean_ctor_set(v_reuseFailAlloc_4796_, 2, v_ngen_4781_);
lean_ctor_set(v_reuseFailAlloc_4796_, 3, v_auxDeclNGen_4782_);
lean_ctor_set(v_reuseFailAlloc_4796_, 4, v_traceState_4783_);
lean_ctor_set(v_reuseFailAlloc_4796_, 5, v___x_4791_);
lean_ctor_set(v_reuseFailAlloc_4796_, 6, v_messages_4784_);
lean_ctor_set(v_reuseFailAlloc_4796_, 7, v_infoState_4785_);
lean_ctor_set(v_reuseFailAlloc_4796_, 8, v_snapshotTasks_4786_);
v___x_4793_ = v_reuseFailAlloc_4796_;
goto v_reusejp_4792_;
}
v_reusejp_4792_:
{
lean_object* v___x_4794_; lean_object* v___x_4795_; 
v___x_4794_ = lean_st_ref_put(v___y_4777_, v___x_4793_);
v___x_4795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4795_, 0, v___x_4790_);
return v___x_4795_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___boxed(lean_object* v_env_4800_, lean_object* v___y_4801_, lean_object* v___y_4802_){
_start:
{
lean_object* v_res_4803_; 
v_res_4803_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4800_, v___y_4801_);
lean_dec(v___y_4801_);
return v_res_4803_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0(lean_object* v_env_4804_, lean_object* v___y_4805_, lean_object* v___y_4806_){
_start:
{
lean_object* v___x_4808_; 
v___x_4808_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4804_, v___y_4806_);
return v___x_4808_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___boxed(lean_object* v_env_4809_, lean_object* v___y_4810_, lean_object* v___y_4811_, lean_object* v___y_4812_){
_start:
{
lean_object* v_res_4813_; 
v_res_4813_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0(v_env_4809_, v___y_4810_, v___y_4811_);
lean_dec(v___y_4811_);
lean_dec_ref(v___y_4810_);
return v_res_4813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1(lean_object* v_env_4814_, lean_object* v___x_4815_, uint8_t v___x_4816_, lean_object* v_e_4817_, lean_object* v___y_4818_, lean_object* v___y_4819_){
_start:
{
if (lean_obj_tag(v_e_4817_) == 4)
{
lean_object* v_declName_4821_; lean_object* v_us_4822_; uint8_t v___x_4823_; uint8_t v___x_4824_; 
v_declName_4821_ = lean_ctor_get(v_e_4817_, 0);
v_us_4822_ = lean_ctor_get(v_e_4817_, 1);
v___x_4823_ = 1;
lean_inc(v_declName_4821_);
v___x_4824_ = l_Lean_Environment_contains(v_env_4814_, v_declName_4821_, v___x_4823_);
if (v___x_4824_ == 0)
{
lean_object* v___x_4825_; 
lean_inc(v_declName_4821_);
v___x_4825_ = l_Lean_Environment_find_x3f(v___x_4815_, v_declName_4821_, v___x_4816_);
if (lean_obj_tag(v___x_4825_) == 1)
{
lean_object* v_val_4826_; lean_object* v___x_4828_; uint8_t v_isShared_4829_; uint8_t v_isSharedCheck_4855_; 
v_val_4826_ = lean_ctor_get(v___x_4825_, 0);
v_isSharedCheck_4855_ = !lean_is_exclusive(v___x_4825_);
if (v_isSharedCheck_4855_ == 0)
{
v___x_4828_ = v___x_4825_;
v_isShared_4829_ = v_isSharedCheck_4855_;
goto v_resetjp_4827_;
}
else
{
lean_inc(v_val_4826_);
lean_dec(v___x_4825_);
v___x_4828_ = lean_box(0);
v_isShared_4829_ = v_isSharedCheck_4855_;
goto v_resetjp_4827_;
}
v_resetjp_4827_:
{
uint8_t v___x_4830_; 
v___x_4830_ = l_Lean_ConstantInfo_hasValue(v_val_4826_, v___x_4823_);
if (v___x_4830_ == 0)
{
lean_object* v___x_4832_; 
lean_dec(v_val_4826_);
if (v_isShared_4829_ == 0)
{
lean_ctor_set_tag(v___x_4828_, 0);
lean_ctor_set(v___x_4828_, 0, v_e_4817_);
v___x_4832_ = v___x_4828_;
goto v_reusejp_4831_;
}
else
{
lean_object* v_reuseFailAlloc_4834_; 
v_reuseFailAlloc_4834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4834_, 0, v_e_4817_);
v___x_4832_ = v_reuseFailAlloc_4834_;
goto v_reusejp_4831_;
}
v_reusejp_4831_:
{
lean_object* v___x_4833_; 
v___x_4833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4833_, 0, v___x_4832_);
return v___x_4833_;
}
}
else
{
lean_object* v___x_4835_; 
lean_inc(v_us_4822_);
lean_dec_ref_known(v_e_4817_, 2);
v___x_4835_ = l_Lean_Core_instantiateValueLevelParams(v_val_4826_, v_us_4822_, v___x_4823_, v___y_4818_, v___y_4819_);
lean_dec(v_val_4826_);
if (lean_obj_tag(v___x_4835_) == 0)
{
lean_object* v_a_4836_; lean_object* v___x_4838_; uint8_t v_isShared_4839_; uint8_t v_isSharedCheck_4846_; 
v_a_4836_ = lean_ctor_get(v___x_4835_, 0);
v_isSharedCheck_4846_ = !lean_is_exclusive(v___x_4835_);
if (v_isSharedCheck_4846_ == 0)
{
v___x_4838_ = v___x_4835_;
v_isShared_4839_ = v_isSharedCheck_4846_;
goto v_resetjp_4837_;
}
else
{
lean_inc(v_a_4836_);
lean_dec(v___x_4835_);
v___x_4838_ = lean_box(0);
v_isShared_4839_ = v_isSharedCheck_4846_;
goto v_resetjp_4837_;
}
v_resetjp_4837_:
{
lean_object* v___x_4841_; 
if (v_isShared_4829_ == 0)
{
lean_ctor_set(v___x_4828_, 0, v_a_4836_);
v___x_4841_ = v___x_4828_;
goto v_reusejp_4840_;
}
else
{
lean_object* v_reuseFailAlloc_4845_; 
v_reuseFailAlloc_4845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4845_, 0, v_a_4836_);
v___x_4841_ = v_reuseFailAlloc_4845_;
goto v_reusejp_4840_;
}
v_reusejp_4840_:
{
lean_object* v___x_4843_; 
if (v_isShared_4839_ == 0)
{
lean_ctor_set(v___x_4838_, 0, v___x_4841_);
v___x_4843_ = v___x_4838_;
goto v_reusejp_4842_;
}
else
{
lean_object* v_reuseFailAlloc_4844_; 
v_reuseFailAlloc_4844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4844_, 0, v___x_4841_);
v___x_4843_ = v_reuseFailAlloc_4844_;
goto v_reusejp_4842_;
}
v_reusejp_4842_:
{
return v___x_4843_;
}
}
}
}
else
{
lean_object* v_a_4847_; lean_object* v___x_4849_; uint8_t v_isShared_4850_; uint8_t v_isSharedCheck_4854_; 
lean_del_object(v___x_4828_);
v_a_4847_ = lean_ctor_get(v___x_4835_, 0);
v_isSharedCheck_4854_ = !lean_is_exclusive(v___x_4835_);
if (v_isSharedCheck_4854_ == 0)
{
v___x_4849_ = v___x_4835_;
v_isShared_4850_ = v_isSharedCheck_4854_;
goto v_resetjp_4848_;
}
else
{
lean_inc(v_a_4847_);
lean_dec(v___x_4835_);
v___x_4849_ = lean_box(0);
v_isShared_4850_ = v_isSharedCheck_4854_;
goto v_resetjp_4848_;
}
v_resetjp_4848_:
{
lean_object* v___x_4852_; 
if (v_isShared_4850_ == 0)
{
v___x_4852_ = v___x_4849_;
goto v_reusejp_4851_;
}
else
{
lean_object* v_reuseFailAlloc_4853_; 
v_reuseFailAlloc_4853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4853_, 0, v_a_4847_);
v___x_4852_ = v_reuseFailAlloc_4853_;
goto v_reusejp_4851_;
}
v_reusejp_4851_:
{
return v___x_4852_;
}
}
}
}
}
}
else
{
lean_object* v___x_4856_; lean_object* v___x_4857_; 
lean_dec(v___x_4825_);
v___x_4856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4856_, 0, v_e_4817_);
v___x_4857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4857_, 0, v___x_4856_);
return v___x_4857_;
}
}
else
{
lean_object* v___x_4858_; lean_object* v___x_4859_; 
lean_dec_ref(v___x_4815_);
v___x_4858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4858_, 0, v_e_4817_);
v___x_4859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4859_, 0, v___x_4858_);
return v___x_4859_;
}
}
else
{
lean_object* v___x_4860_; lean_object* v___x_4861_; 
lean_dec_ref(v_e_4817_);
lean_dec_ref(v___x_4815_);
lean_dec_ref(v_env_4814_);
v___x_4860_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_4861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4861_, 0, v___x_4860_);
return v___x_4861_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1___boxed(lean_object* v_env_4862_, lean_object* v___x_4863_, lean_object* v___x_4864_, lean_object* v_e_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_, lean_object* v___y_4868_){
_start:
{
uint8_t v___x_2299__boxed_4869_; lean_object* v_res_4870_; 
v___x_2299__boxed_4869_ = lean_unbox(v___x_4864_);
v_res_4870_ = l_Lean_Meta_unfoldDeclsFrom___lam__1(v_env_4862_, v___x_4863_, v___x_2299__boxed_4869_, v_e_4865_, v___y_4866_, v___y_4867_);
lean_dec(v___y_4867_);
lean_dec_ref(v___y_4866_);
return v_res_4870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0(lean_object* v_biggerEnv_4871_, lean_object* v_e_4872_, lean_object* v___f_4873_, lean_object* v___y_4874_, lean_object* v___y_4875_){
_start:
{
lean_object* v___x_4877_; lean_object* v_env_4878_; uint8_t v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___f_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; 
v___x_4877_ = lean_st_ref_get(v___y_4875_);
v_env_4878_ = lean_ctor_get(v___x_4877_, 0);
lean_inc_ref(v_env_4878_);
lean_dec(v___x_4877_);
v___x_4879_ = 0;
v___x_4880_ = l_Lean_Environment_setExporting(v_biggerEnv_4871_, v___x_4879_);
v___x_4881_ = lean_box(v___x_4879_);
lean_inc_ref(v___x_4880_);
v___f_4882_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldDeclsFrom___lam__1___boxed), 7, 3);
lean_closure_set(v___f_4882_, 0, v_env_4878_);
lean_closure_set(v___f_4882_, 1, v___x_4880_);
lean_closure_set(v___f_4882_, 2, v___x_4881_);
v___x_4883_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v___x_4880_, v___y_4875_);
lean_dec_ref(v___x_4883_);
v___x_4884_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_4872_, v___f_4882_, v___f_4873_, v___y_4874_, v___y_4875_);
return v___x_4884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0___boxed(lean_object* v_biggerEnv_4885_, lean_object* v_e_4886_, lean_object* v___f_4887_, lean_object* v___y_4888_, lean_object* v___y_4889_, lean_object* v___y_4890_){
_start:
{
lean_object* v_res_4891_; 
v_res_4891_ = l_Lean_Meta_unfoldDeclsFrom___lam__0(v_biggerEnv_4885_, v_e_4886_, v___f_4887_, v___y_4888_, v___y_4889_);
lean_dec(v___y_4889_);
lean_dec_ref(v___y_4888_);
return v_res_4891_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(lean_object* v_env_4892_, lean_object* v_x_4893_, lean_object* v___y_4894_, lean_object* v___y_4895_){
_start:
{
lean_object* v___x_4897_; lean_object* v_env_4898_; lean_object* v_a_4900_; lean_object* v___x_4910_; lean_object* v___x_4911_; 
v___x_4897_ = lean_st_ref_get(v___y_4895_);
v_env_4898_ = lean_ctor_get(v___x_4897_, 0);
lean_inc_ref(v_env_4898_);
lean_dec(v___x_4897_);
v___x_4910_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4892_, v___y_4895_);
lean_dec_ref(v___x_4910_);
lean_inc(v___y_4895_);
lean_inc_ref(v___y_4894_);
v___x_4911_ = lean_apply_3(v_x_4893_, v___y_4894_, v___y_4895_, lean_box(0));
if (lean_obj_tag(v___x_4911_) == 0)
{
lean_object* v_a_4912_; lean_object* v___x_4913_; lean_object* v___x_4915_; uint8_t v_isShared_4916_; uint8_t v_isSharedCheck_4920_; 
v_a_4912_ = lean_ctor_get(v___x_4911_, 0);
lean_inc(v_a_4912_);
lean_dec_ref_known(v___x_4911_, 1);
v___x_4913_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4898_, v___y_4895_);
v_isSharedCheck_4920_ = !lean_is_exclusive(v___x_4913_);
if (v_isSharedCheck_4920_ == 0)
{
lean_object* v_unused_4921_; 
v_unused_4921_ = lean_ctor_get(v___x_4913_, 0);
lean_dec(v_unused_4921_);
v___x_4915_ = v___x_4913_;
v_isShared_4916_ = v_isSharedCheck_4920_;
goto v_resetjp_4914_;
}
else
{
lean_dec(v___x_4913_);
v___x_4915_ = lean_box(0);
v_isShared_4916_ = v_isSharedCheck_4920_;
goto v_resetjp_4914_;
}
v_resetjp_4914_:
{
lean_object* v___x_4918_; 
if (v_isShared_4916_ == 0)
{
lean_ctor_set(v___x_4915_, 0, v_a_4912_);
v___x_4918_ = v___x_4915_;
goto v_reusejp_4917_;
}
else
{
lean_object* v_reuseFailAlloc_4919_; 
v_reuseFailAlloc_4919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4919_, 0, v_a_4912_);
v___x_4918_ = v_reuseFailAlloc_4919_;
goto v_reusejp_4917_;
}
v_reusejp_4917_:
{
return v___x_4918_;
}
}
}
else
{
lean_object* v_a_4922_; 
v_a_4922_ = lean_ctor_get(v___x_4911_, 0);
lean_inc(v_a_4922_);
lean_dec_ref_known(v___x_4911_, 1);
v_a_4900_ = v_a_4922_;
goto v___jp_4899_;
}
v___jp_4899_:
{
lean_object* v___x_4901_; lean_object* v___x_4903_; uint8_t v_isShared_4904_; uint8_t v_isSharedCheck_4908_; 
v___x_4901_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4898_, v___y_4895_);
v_isSharedCheck_4908_ = !lean_is_exclusive(v___x_4901_);
if (v_isSharedCheck_4908_ == 0)
{
lean_object* v_unused_4909_; 
v_unused_4909_ = lean_ctor_get(v___x_4901_, 0);
lean_dec(v_unused_4909_);
v___x_4903_ = v___x_4901_;
v_isShared_4904_ = v_isSharedCheck_4908_;
goto v_resetjp_4902_;
}
else
{
lean_dec(v___x_4901_);
v___x_4903_ = lean_box(0);
v_isShared_4904_ = v_isSharedCheck_4908_;
goto v_resetjp_4902_;
}
v_resetjp_4902_:
{
lean_object* v___x_4906_; 
if (v_isShared_4904_ == 0)
{
lean_ctor_set_tag(v___x_4903_, 1);
lean_ctor_set(v___x_4903_, 0, v_a_4900_);
v___x_4906_ = v___x_4903_;
goto v_reusejp_4905_;
}
else
{
lean_object* v_reuseFailAlloc_4907_; 
v_reuseFailAlloc_4907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4907_, 0, v_a_4900_);
v___x_4906_ = v_reuseFailAlloc_4907_;
goto v_reusejp_4905_;
}
v_reusejp_4905_:
{
return v___x_4906_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg___boxed(lean_object* v_env_4923_, lean_object* v_x_4924_, lean_object* v___y_4925_, lean_object* v___y_4926_, lean_object* v___y_4927_){
_start:
{
lean_object* v_res_4928_; 
v_res_4928_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(v_env_4923_, v_x_4924_, v___y_4925_, v___y_4926_);
lean_dec(v___y_4926_);
lean_dec_ref(v___y_4925_);
return v_res_4928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom(lean_object* v_biggerEnv_4929_, lean_object* v_e_4930_, lean_object* v___y_4931_, lean_object* v___y_4932_){
_start:
{
lean_object* v___f_4934_; lean_object* v___f_4935_; lean_object* v___x_4936_; lean_object* v_env_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; 
v___f_4934_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__1));
v___f_4935_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldDeclsFrom___lam__0___boxed), 6, 3);
lean_closure_set(v___f_4935_, 0, v_biggerEnv_4929_);
lean_closure_set(v___f_4935_, 1, v_e_4930_);
lean_closure_set(v___f_4935_, 2, v___f_4934_);
v___x_4936_ = lean_st_ref_get(v___y_4932_);
v_env_4937_ = lean_ctor_get(v___x_4936_, 0);
lean_inc_ref(v_env_4937_);
lean_dec(v___x_4936_);
v___x_4938_ = l_Lean_Environment_unlockAsync(v_env_4937_);
v___x_4939_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(v___x_4938_, v___f_4935_, v___y_4931_, v___y_4932_);
return v___x_4939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___boxed(lean_object* v_biggerEnv_4940_, lean_object* v_e_4941_, lean_object* v___y_4942_, lean_object* v___y_4943_, lean_object* v___y_4944_){
_start:
{
lean_object* v_res_4945_; 
v_res_4945_ = l_Lean_Meta_unfoldDeclsFrom(v_biggerEnv_4940_, v_e_4941_, v___y_4942_, v___y_4943_);
lean_dec(v___y_4943_);
lean_dec_ref(v___y_4942_);
return v_res_4945_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1(lean_object* v_00_u03b1_4946_, lean_object* v_env_4947_, lean_object* v_x_4948_, lean_object* v___y_4949_, lean_object* v___y_4950_){
_start:
{
lean_object* v___x_4952_; 
v___x_4952_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(v_env_4947_, v_x_4948_, v___y_4949_, v___y_4950_);
return v___x_4952_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___boxed(lean_object* v_00_u03b1_4953_, lean_object* v_env_4954_, lean_object* v_x_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_, lean_object* v___y_4958_){
_start:
{
lean_object* v_res_4959_; 
v_res_4959_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1(v_00_u03b1_4953_, v_env_4954_, v_x_4955_, v___y_4956_, v___y_4957_);
lean_dec(v___y_4957_);
lean_dec_ref(v___y_4956_);
return v_res_4959_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(lean_object* v_af_4960_, lean_object* v_axs_4961_, lean_object* v_numSectionVars_4962_, lean_object* v_as_4963_, size_t v_i_4964_, size_t v_stop_4965_){
_start:
{
uint8_t v___x_4966_; 
v___x_4966_ = lean_usize_dec_eq(v_i_4964_, v_stop_4965_);
if (v___x_4966_ == 0)
{
uint8_t v___x_4967_; uint8_t v___y_4969_; lean_object* v___x_4973_; lean_object* v___x_4974_; uint8_t v___x_4975_; 
v___x_4967_ = 1;
v___x_4973_ = lean_array_uget_borrowed(v_as_4963_, v_i_4964_);
v___x_4974_ = l_Lean_Expr_constName_x21(v_af_4960_);
v___x_4975_ = lean_name_eq(v___x_4974_, v___x_4973_);
lean_dec(v___x_4974_);
if (v___x_4975_ == 0)
{
v___y_4969_ = v___x_4975_;
goto v___jp_4968_;
}
else
{
lean_object* v___x_4976_; uint8_t v___x_4977_; 
v___x_4976_ = lean_array_get_size(v_axs_4961_);
v___x_4977_ = lean_nat_dec_le(v___x_4976_, v_numSectionVars_4962_);
v___y_4969_ = v___x_4977_;
goto v___jp_4968_;
}
v___jp_4968_:
{
if (v___y_4969_ == 0)
{
size_t v___x_4970_; size_t v___x_4971_; 
v___x_4970_ = ((size_t)1ULL);
v___x_4971_ = lean_usize_add(v_i_4964_, v___x_4970_);
v_i_4964_ = v___x_4971_;
goto _start;
}
else
{
return v___x_4967_;
}
}
}
else
{
uint8_t v___x_4978_; 
v___x_4978_ = 0;
return v___x_4978_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0___boxed(lean_object* v_af_4979_, lean_object* v_axs_4980_, lean_object* v_numSectionVars_4981_, lean_object* v_as_4982_, lean_object* v_i_4983_, lean_object* v_stop_4984_){
_start:
{
size_t v_i_boxed_4985_; size_t v_stop_boxed_4986_; uint8_t v_res_4987_; lean_object* v_r_4988_; 
v_i_boxed_4985_ = lean_unbox_usize(v_i_4983_);
lean_dec(v_i_4983_);
v_stop_boxed_4986_ = lean_unbox_usize(v_stop_4984_);
lean_dec(v_stop_4984_);
v_res_4987_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(v_af_4979_, v_axs_4980_, v_numSectionVars_4981_, v_as_4982_, v_i_boxed_4985_, v_stop_boxed_4986_);
lean_dec_ref(v_as_4982_);
lean_dec(v_numSectionVars_4981_);
lean_dec_ref(v_axs_4980_);
lean_dec_ref(v_af_4979_);
v_r_4988_ = lean_box(v_res_4987_);
return v_r_4988_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(lean_object* v_fnNames_4989_, lean_object* v_numSectionVars_4990_, lean_object* v_x_4991_, lean_object* v_x_4992_, lean_object* v_x_4993_){
_start:
{
if (lean_obj_tag(v_x_4991_) == 5)
{
lean_object* v_fn_4994_; lean_object* v_arg_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; 
v_fn_4994_ = lean_ctor_get(v_x_4991_, 0);
lean_inc_ref(v_fn_4994_);
v_arg_4995_ = lean_ctor_get(v_x_4991_, 1);
lean_inc_ref(v_arg_4995_);
lean_dec_ref_known(v_x_4991_, 2);
v___x_4996_ = lean_array_set(v_x_4992_, v_x_4993_, v_arg_4995_);
v___x_4997_ = lean_unsigned_to_nat(1u);
v___x_4998_ = lean_nat_sub(v_x_4993_, v___x_4997_);
lean_dec(v_x_4993_);
v_x_4991_ = v_fn_4994_;
v_x_4992_ = v___x_4996_;
v_x_4993_ = v___x_4998_;
goto _start;
}
else
{
uint8_t v___x_5000_; 
lean_dec(v_x_4993_);
v___x_5000_ = l_Lean_Expr_isConst(v_x_4991_);
if (v___x_5000_ == 0)
{
lean_dec_ref(v_x_4992_);
lean_dec_ref(v_x_4991_);
return v___x_5000_;
}
else
{
lean_object* v___x_5001_; lean_object* v___x_5002_; uint8_t v___x_5003_; 
v___x_5001_ = lean_unsigned_to_nat(0u);
v___x_5002_ = lean_array_get_size(v_fnNames_4989_);
v___x_5003_ = lean_nat_dec_lt(v___x_5001_, v___x_5002_);
if (v___x_5003_ == 0)
{
lean_dec_ref(v_x_4992_);
lean_dec_ref(v_x_4991_);
return v___x_5003_;
}
else
{
if (v___x_5003_ == 0)
{
lean_dec_ref(v_x_4992_);
lean_dec_ref(v_x_4991_);
return v___x_5003_;
}
else
{
size_t v___x_5004_; size_t v___x_5005_; uint8_t v___x_5006_; 
v___x_5004_ = ((size_t)0ULL);
v___x_5005_ = lean_usize_of_nat(v___x_5002_);
v___x_5006_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(v_x_4991_, v_x_4992_, v_numSectionVars_4990_, v_fnNames_4989_, v___x_5004_, v___x_5005_);
lean_dec_ref(v_x_4992_);
lean_dec_ref(v_x_4991_);
return v___x_5006_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1___boxed(lean_object* v_fnNames_5007_, lean_object* v_numSectionVars_5008_, lean_object* v_x_5009_, lean_object* v_x_5010_, lean_object* v_x_5011_){
_start:
{
uint8_t v_res_5012_; lean_object* v_r_5013_; 
v_res_5012_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(v_fnNames_5007_, v_numSectionVars_5008_, v_x_5009_, v_x_5010_, v_x_5011_);
lean_dec(v_numSectionVars_5008_);
lean_dec_ref(v_fnNames_5007_);
v_r_5013_ = lean_box(v_res_5012_);
return v_r_5013_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(lean_object* v_numSectionVars_5014_, lean_object* v_fnNames_5015_, lean_object* v_x_5016_, lean_object* v_x_5017_, lean_object* v_x_5018_){
_start:
{
if (lean_obj_tag(v_x_5016_) == 5)
{
lean_object* v_fn_5019_; lean_object* v_arg_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; uint8_t v___x_5024_; 
v_fn_5019_ = lean_ctor_get(v_x_5016_, 0);
lean_inc_ref(v_fn_5019_);
v_arg_5020_ = lean_ctor_get(v_x_5016_, 1);
lean_inc_ref(v_arg_5020_);
lean_dec_ref_known(v_x_5016_, 2);
v___x_5021_ = lean_array_set(v_x_5017_, v_x_5018_, v_arg_5020_);
v___x_5022_ = lean_unsigned_to_nat(1u);
v___x_5023_ = lean_nat_sub(v_x_5018_, v___x_5022_);
v___x_5024_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(v_fnNames_5015_, v_numSectionVars_5014_, v_fn_5019_, v___x_5021_, v___x_5023_);
return v___x_5024_;
}
else
{
uint8_t v___x_5025_; 
v___x_5025_ = l_Lean_Expr_isConst(v_x_5016_);
if (v___x_5025_ == 0)
{
lean_dec_ref(v_x_5017_);
lean_dec_ref(v_x_5016_);
return v___x_5025_;
}
else
{
lean_object* v___x_5026_; lean_object* v___x_5027_; uint8_t v___x_5028_; 
v___x_5026_ = lean_unsigned_to_nat(0u);
v___x_5027_ = lean_array_get_size(v_fnNames_5015_);
v___x_5028_ = lean_nat_dec_lt(v___x_5026_, v___x_5027_);
if (v___x_5028_ == 0)
{
lean_dec_ref(v_x_5017_);
lean_dec_ref(v_x_5016_);
return v___x_5028_;
}
else
{
if (v___x_5028_ == 0)
{
lean_dec_ref(v_x_5017_);
lean_dec_ref(v_x_5016_);
return v___x_5028_;
}
else
{
size_t v___x_5029_; size_t v___x_5030_; uint8_t v___x_5031_; 
v___x_5029_ = ((size_t)0ULL);
v___x_5030_ = lean_usize_of_nat(v___x_5027_);
v___x_5031_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(v_x_5016_, v_x_5017_, v_numSectionVars_5014_, v_fnNames_5015_, v___x_5029_, v___x_5030_);
lean_dec_ref(v_x_5017_);
lean_dec_ref(v_x_5016_);
return v___x_5031_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1___boxed(lean_object* v_numSectionVars_5032_, lean_object* v_fnNames_5033_, lean_object* v_x_5034_, lean_object* v_x_5035_, lean_object* v_x_5036_){
_start:
{
uint8_t v_res_5037_; lean_object* v_r_5038_; 
v_res_5037_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(v_numSectionVars_5032_, v_fnNames_5033_, v_x_5034_, v_x_5035_, v_x_5036_);
lean_dec(v_x_5036_);
lean_dec_ref(v_fnNames_5033_);
lean_dec(v_numSectionVars_5032_);
v_r_5038_ = lean_box(v_res_5037_);
return v_r_5038_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(lean_object* v_fnNames_5039_, lean_object* v_numSectionVars_5040_, lean_object* v_a_5041_){
_start:
{
lean_object* v_dummy_5042_; lean_object* v_nargs_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; uint8_t v___x_5047_; 
v_dummy_5042_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_5043_ = l_Lean_Expr_getAppNumArgs(v_a_5041_);
lean_inc(v_nargs_5043_);
v___x_5044_ = lean_mk_array(v_nargs_5043_, v_dummy_5042_);
v___x_5045_ = lean_unsigned_to_nat(1u);
v___x_5046_ = lean_nat_sub(v_nargs_5043_, v___x_5045_);
lean_dec(v_nargs_5043_);
v___x_5047_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(v_numSectionVars_5040_, v_fnNames_5039_, v_a_5041_, v___x_5044_, v___x_5046_);
lean_dec(v___x_5046_);
return v___x_5047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg___boxed(lean_object* v_fnNames_5048_, lean_object* v_numSectionVars_5049_, lean_object* v_a_5050_){
_start:
{
uint8_t v_res_5051_; lean_object* v_r_5052_; 
v_res_5051_ = l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(v_fnNames_5048_, v_numSectionVars_5049_, v_a_5050_);
lean_dec(v_numSectionVars_5049_);
lean_dec_ref(v_fnNames_5048_);
v_r_5052_ = lean_box(v_res_5051_);
return v_r_5052_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(lean_object* v_fnNames_5053_, lean_object* v_numSectionVars_5054_, lean_object* v_as_5055_, size_t v_i_5056_, size_t v_stop_5057_){
_start:
{
uint8_t v___x_5058_; 
v___x_5058_ = lean_usize_dec_eq(v_i_5056_, v_stop_5057_);
if (v___x_5058_ == 0)
{
lean_object* v___x_5059_; uint8_t v___x_5060_; 
v___x_5059_ = lean_array_uget_borrowed(v_as_5055_, v_i_5056_);
lean_inc(v___x_5059_);
v___x_5060_ = l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(v_fnNames_5053_, v_numSectionVars_5054_, v___x_5059_);
if (v___x_5060_ == 0)
{
size_t v___x_5061_; size_t v___x_5062_; 
v___x_5061_ = ((size_t)1ULL);
v___x_5062_ = lean_usize_add(v_i_5056_, v___x_5061_);
v_i_5056_ = v___x_5062_;
goto _start;
}
else
{
return v___x_5060_;
}
}
else
{
uint8_t v___x_5064_; 
v___x_5064_ = 0;
return v___x_5064_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0___boxed(lean_object* v_fnNames_5065_, lean_object* v_numSectionVars_5066_, lean_object* v_as_5067_, lean_object* v_i_5068_, lean_object* v_stop_5069_){
_start:
{
size_t v_i_boxed_5070_; size_t v_stop_boxed_5071_; uint8_t v_res_5072_; lean_object* v_r_5073_; 
v_i_boxed_5070_ = lean_unbox_usize(v_i_5068_);
lean_dec(v_i_5068_);
v_stop_boxed_5071_ = lean_unbox_usize(v_stop_5069_);
lean_dec(v_stop_5069_);
v_res_5072_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(v_fnNames_5065_, v_numSectionVars_5066_, v_as_5067_, v_i_boxed_5070_, v_stop_boxed_5071_);
lean_dec_ref(v_as_5067_);
lean_dec(v_numSectionVars_5066_);
lean_dec_ref(v_fnNames_5065_);
v_r_5073_ = lean_box(v_res_5072_);
return v_r_5073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(lean_object* v_fnNames_5074_, lean_object* v_numSectionVars_5075_, lean_object* v___x_5076_, lean_object* v_x_5077_, lean_object* v_x_5078_, lean_object* v___y_5079_, lean_object* v___y_5080_){
_start:
{
if (lean_obj_tag(v_x_5077_) == 5)
{
lean_object* v_fn_5085_; lean_object* v_arg_5086_; lean_object* v___x_5087_; 
v_fn_5085_ = lean_ctor_get(v_x_5077_, 0);
lean_inc_ref(v_fn_5085_);
v_arg_5086_ = lean_ctor_get(v_x_5077_, 1);
lean_inc_ref(v_arg_5086_);
lean_dec_ref_known(v_x_5077_, 2);
v___x_5087_ = lean_array_push(v_x_5078_, v_arg_5086_);
v_x_5077_ = v_fn_5085_;
v_x_5078_ = v___x_5087_;
goto _start;
}
else
{
uint8_t v___x_5089_; 
v___x_5089_ = l_Lean_Expr_isConst(v_x_5077_);
if (v___x_5089_ == 0)
{
lean_dec_ref(v_x_5078_);
lean_dec_ref(v_x_5077_);
lean_dec_ref(v___x_5076_);
goto v___jp_5082_;
}
else
{
lean_object* v___x_5090_; lean_object* v___x_5091_; uint8_t v___x_5092_; 
v___x_5090_ = lean_unsigned_to_nat(0u);
v___x_5091_ = lean_array_get_size(v_x_5078_);
v___x_5092_ = lean_nat_dec_lt(v___x_5090_, v___x_5091_);
if (v___x_5092_ == 0)
{
lean_dec_ref(v_x_5078_);
lean_dec_ref(v_x_5077_);
lean_dec_ref(v___x_5076_);
goto v___jp_5082_;
}
else
{
if (v___x_5092_ == 0)
{
lean_dec_ref(v_x_5078_);
lean_dec_ref(v_x_5077_);
lean_dec_ref(v___x_5076_);
goto v___jp_5082_;
}
else
{
size_t v___x_5093_; size_t v___x_5094_; uint8_t v___x_5095_; 
v___x_5093_ = ((size_t)0ULL);
v___x_5094_ = lean_usize_of_nat(v___x_5091_);
v___x_5095_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(v_fnNames_5074_, v_numSectionVars_5075_, v_x_5078_, v___x_5093_, v___x_5094_);
if (v___x_5095_ == 0)
{
lean_dec_ref(v_x_5078_);
lean_dec_ref(v_x_5077_);
lean_dec_ref(v___x_5076_);
goto v___jp_5082_;
}
else
{
lean_object* v___x_5096_; uint8_t v___x_5097_; lean_object* v___x_5098_; 
v___x_5096_ = l_Lean_Expr_constName_x21(v_x_5077_);
v___x_5097_ = 0;
v___x_5098_ = l_Lean_Environment_find_x3f(v___x_5076_, v___x_5096_, v___x_5097_);
if (lean_obj_tag(v___x_5098_) == 1)
{
lean_object* v_val_5099_; 
v_val_5099_ = lean_ctor_get(v___x_5098_, 0);
lean_inc(v_val_5099_);
lean_dec_ref_known(v___x_5098_, 1);
if (lean_obj_tag(v_val_5099_) == 2)
{
lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5103_; uint8_t v_isShared_5104_; uint8_t v_isSharedCheck_5125_; 
v___x_5100_ = l_Lean_Expr_constLevels_x21(v_x_5077_);
lean_dec_ref(v_x_5077_);
v___x_5101_ = l_Lean_Core_instantiateValueLevelParams(v_val_5099_, v___x_5100_, v___x_5092_, v___y_5079_, v___y_5080_);
v_isSharedCheck_5125_ = !lean_is_exclusive(v_val_5099_);
if (v_isSharedCheck_5125_ == 0)
{
lean_object* v_unused_5126_; 
v_unused_5126_ = lean_ctor_get(v_val_5099_, 0);
lean_dec(v_unused_5126_);
v___x_5103_ = v_val_5099_;
v_isShared_5104_ = v_isSharedCheck_5125_;
goto v_resetjp_5102_;
}
else
{
lean_dec(v_val_5099_);
v___x_5103_ = lean_box(0);
v_isShared_5104_ = v_isSharedCheck_5125_;
goto v_resetjp_5102_;
}
v_resetjp_5102_:
{
if (lean_obj_tag(v___x_5101_) == 0)
{
lean_object* v_a_5105_; lean_object* v___x_5107_; uint8_t v_isShared_5108_; uint8_t v_isSharedCheck_5116_; 
v_a_5105_ = lean_ctor_get(v___x_5101_, 0);
v_isSharedCheck_5116_ = !lean_is_exclusive(v___x_5101_);
if (v_isSharedCheck_5116_ == 0)
{
v___x_5107_ = v___x_5101_;
v_isShared_5108_ = v_isSharedCheck_5116_;
goto v_resetjp_5106_;
}
else
{
lean_inc(v_a_5105_);
lean_dec(v___x_5101_);
v___x_5107_ = lean_box(0);
v_isShared_5108_ = v_isSharedCheck_5116_;
goto v_resetjp_5106_;
}
v_resetjp_5106_:
{
lean_object* v___x_5109_; lean_object* v___x_5111_; 
v___x_5109_ = l_Lean_Expr_betaRev(v_a_5105_, v_x_5078_, v___x_5097_, v___x_5097_);
lean_dec_ref(v_x_5078_);
if (v_isShared_5104_ == 0)
{
lean_ctor_set_tag(v___x_5103_, 1);
lean_ctor_set(v___x_5103_, 0, v___x_5109_);
v___x_5111_ = v___x_5103_;
goto v_reusejp_5110_;
}
else
{
lean_object* v_reuseFailAlloc_5115_; 
v_reuseFailAlloc_5115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5115_, 0, v___x_5109_);
v___x_5111_ = v_reuseFailAlloc_5115_;
goto v_reusejp_5110_;
}
v_reusejp_5110_:
{
lean_object* v___x_5113_; 
if (v_isShared_5108_ == 0)
{
lean_ctor_set(v___x_5107_, 0, v___x_5111_);
v___x_5113_ = v___x_5107_;
goto v_reusejp_5112_;
}
else
{
lean_object* v_reuseFailAlloc_5114_; 
v_reuseFailAlloc_5114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5114_, 0, v___x_5111_);
v___x_5113_ = v_reuseFailAlloc_5114_;
goto v_reusejp_5112_;
}
v_reusejp_5112_:
{
return v___x_5113_;
}
}
}
}
else
{
lean_object* v_a_5117_; lean_object* v___x_5119_; uint8_t v_isShared_5120_; uint8_t v_isSharedCheck_5124_; 
lean_del_object(v___x_5103_);
lean_dec_ref(v_x_5078_);
v_a_5117_ = lean_ctor_get(v___x_5101_, 0);
v_isSharedCheck_5124_ = !lean_is_exclusive(v___x_5101_);
if (v_isSharedCheck_5124_ == 0)
{
v___x_5119_ = v___x_5101_;
v_isShared_5120_ = v_isSharedCheck_5124_;
goto v_resetjp_5118_;
}
else
{
lean_inc(v_a_5117_);
lean_dec(v___x_5101_);
v___x_5119_ = lean_box(0);
v_isShared_5120_ = v_isSharedCheck_5124_;
goto v_resetjp_5118_;
}
v_resetjp_5118_:
{
lean_object* v___x_5122_; 
if (v_isShared_5120_ == 0)
{
v___x_5122_ = v___x_5119_;
goto v_reusejp_5121_;
}
else
{
lean_object* v_reuseFailAlloc_5123_; 
v_reuseFailAlloc_5123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5123_, 0, v_a_5117_);
v___x_5122_ = v_reuseFailAlloc_5123_;
goto v_reusejp_5121_;
}
v_reusejp_5121_:
{
return v___x_5122_;
}
}
}
}
}
else
{
lean_dec(v_val_5099_);
lean_dec_ref(v_x_5078_);
lean_dec_ref(v_x_5077_);
goto v___jp_5082_;
}
}
else
{
lean_dec(v___x_5098_);
lean_dec_ref(v_x_5078_);
lean_dec_ref(v_x_5077_);
goto v___jp_5082_;
}
}
}
}
}
}
v___jp_5082_:
{
lean_object* v___x_5083_; lean_object* v___x_5084_; 
v___x_5083_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_5084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5084_, 0, v___x_5083_);
return v___x_5084_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1___boxed(lean_object* v_fnNames_5127_, lean_object* v_numSectionVars_5128_, lean_object* v___x_5129_, lean_object* v_x_5130_, lean_object* v_x_5131_, lean_object* v___y_5132_, lean_object* v___y_5133_, lean_object* v___y_5134_){
_start:
{
lean_object* v_res_5135_; 
v_res_5135_ = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(v_fnNames_5127_, v_numSectionVars_5128_, v___x_5129_, v_x_5130_, v_x_5131_, v___y_5132_, v___y_5133_);
lean_dec(v___y_5133_);
lean_dec_ref(v___y_5132_);
lean_dec(v_numSectionVars_5128_);
lean_dec_ref(v_fnNames_5127_);
return v_res_5135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1(lean_object* v_fnNames_5136_, lean_object* v_numSectionVars_5137_, lean_object* v_env_5138_, lean_object* v_e_5139_, lean_object* v___y_5140_, lean_object* v___y_5141_){
_start:
{
lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; 
v___x_5143_ = l_Lean_Expr_getAppNumArgs(v_e_5139_);
v___x_5144_ = lean_mk_empty_array_with_capacity(v___x_5143_);
lean_dec(v___x_5143_);
v___x_5145_ = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(v_fnNames_5136_, v_numSectionVars_5137_, v_env_5138_, v_e_5139_, v___x_5144_, v___y_5140_, v___y_5141_);
return v___x_5145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1___boxed(lean_object* v_fnNames_5146_, lean_object* v_numSectionVars_5147_, lean_object* v_env_5148_, lean_object* v_e_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_){
_start:
{
lean_object* v_res_5153_; 
v_res_5153_ = l_Lean_Meta_unfoldIfArgIsAppOf___lam__1(v_fnNames_5146_, v_numSectionVars_5147_, v_env_5148_, v_e_5149_, v___y_5150_, v___y_5151_);
lean_dec(v___y_5151_);
lean_dec_ref(v___y_5150_);
lean_dec(v_numSectionVars_5147_);
lean_dec_ref(v_fnNames_5146_);
return v_res_5153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0(lean_object* v_fnNames_5154_, lean_object* v_numSectionVars_5155_, lean_object* v_e_5156_, lean_object* v___f_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_){
_start:
{
lean_object* v___x_5161_; lean_object* v_env_5162_; lean_object* v___f_5163_; lean_object* v___x_5164_; 
v___x_5161_ = lean_st_ref_get(v___y_5159_);
v_env_5162_ = lean_ctor_get(v___x_5161_, 0);
lean_inc_ref(v_env_5162_);
lean_dec(v___x_5161_);
v___f_5163_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldIfArgIsAppOf___lam__1___boxed), 7, 3);
lean_closure_set(v___f_5163_, 0, v_fnNames_5154_);
lean_closure_set(v___f_5163_, 1, v_numSectionVars_5155_);
lean_closure_set(v___f_5163_, 2, v_env_5162_);
v___x_5164_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_5156_, v___f_5163_, v___f_5157_, v___y_5158_, v___y_5159_);
return v___x_5164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0___boxed(lean_object* v_fnNames_5165_, lean_object* v_numSectionVars_5166_, lean_object* v_e_5167_, lean_object* v___f_5168_, lean_object* v___y_5169_, lean_object* v___y_5170_, lean_object* v___y_5171_){
_start:
{
lean_object* v_res_5172_; 
v_res_5172_ = l_Lean_Meta_unfoldIfArgIsAppOf___lam__0(v_fnNames_5165_, v_numSectionVars_5166_, v_e_5167_, v___f_5168_, v___y_5169_, v___y_5170_);
lean_dec(v___y_5170_);
lean_dec_ref(v___y_5169_);
return v_res_5172_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(lean_object* v___y_5173_, uint8_t v_isExporting_5174_, lean_object* v___x_5175_, lean_object* v_a_x3f_5176_){
_start:
{
lean_object* v___x_5178_; lean_object* v_env_5179_; lean_object* v_nextMacroScope_5180_; lean_object* v_ngen_5181_; lean_object* v_auxDeclNGen_5182_; lean_object* v_traceState_5183_; lean_object* v_messages_5184_; lean_object* v_infoState_5185_; lean_object* v_snapshotTasks_5186_; lean_object* v___x_5188_; uint8_t v_isShared_5189_; uint8_t v_isSharedCheck_5197_; 
v___x_5178_ = lean_st_ref_take(v___y_5173_);
v_env_5179_ = lean_ctor_get(v___x_5178_, 0);
v_nextMacroScope_5180_ = lean_ctor_get(v___x_5178_, 1);
v_ngen_5181_ = lean_ctor_get(v___x_5178_, 2);
v_auxDeclNGen_5182_ = lean_ctor_get(v___x_5178_, 3);
v_traceState_5183_ = lean_ctor_get(v___x_5178_, 4);
v_messages_5184_ = lean_ctor_get(v___x_5178_, 6);
v_infoState_5185_ = lean_ctor_get(v___x_5178_, 7);
v_snapshotTasks_5186_ = lean_ctor_get(v___x_5178_, 8);
v_isSharedCheck_5197_ = !lean_is_exclusive(v___x_5178_);
if (v_isSharedCheck_5197_ == 0)
{
lean_object* v_unused_5198_; 
v_unused_5198_ = lean_ctor_get(v___x_5178_, 5);
lean_dec(v_unused_5198_);
v___x_5188_ = v___x_5178_;
v_isShared_5189_ = v_isSharedCheck_5197_;
goto v_resetjp_5187_;
}
else
{
lean_inc(v_snapshotTasks_5186_);
lean_inc(v_infoState_5185_);
lean_inc(v_messages_5184_);
lean_inc(v_traceState_5183_);
lean_inc(v_auxDeclNGen_5182_);
lean_inc(v_ngen_5181_);
lean_inc(v_nextMacroScope_5180_);
lean_inc(v_env_5179_);
lean_dec(v___x_5178_);
v___x_5188_ = lean_box(0);
v_isShared_5189_ = v_isSharedCheck_5197_;
goto v_resetjp_5187_;
}
v_resetjp_5187_:
{
lean_object* v___x_5190_; lean_object* v___x_5191_; lean_object* v___x_5193_; 
v___x_5190_ = lean_box(0);
v___x_5191_ = l_Lean_Environment_setExporting(v_env_5179_, v_isExporting_5174_);
if (v_isShared_5189_ == 0)
{
lean_ctor_set(v___x_5188_, 5, v___x_5175_);
lean_ctor_set(v___x_5188_, 0, v___x_5191_);
v___x_5193_ = v___x_5188_;
goto v_reusejp_5192_;
}
else
{
lean_object* v_reuseFailAlloc_5196_; 
v_reuseFailAlloc_5196_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5196_, 0, v___x_5191_);
lean_ctor_set(v_reuseFailAlloc_5196_, 1, v_nextMacroScope_5180_);
lean_ctor_set(v_reuseFailAlloc_5196_, 2, v_ngen_5181_);
lean_ctor_set(v_reuseFailAlloc_5196_, 3, v_auxDeclNGen_5182_);
lean_ctor_set(v_reuseFailAlloc_5196_, 4, v_traceState_5183_);
lean_ctor_set(v_reuseFailAlloc_5196_, 5, v___x_5175_);
lean_ctor_set(v_reuseFailAlloc_5196_, 6, v_messages_5184_);
lean_ctor_set(v_reuseFailAlloc_5196_, 7, v_infoState_5185_);
lean_ctor_set(v_reuseFailAlloc_5196_, 8, v_snapshotTasks_5186_);
v___x_5193_ = v_reuseFailAlloc_5196_;
goto v_reusejp_5192_;
}
v_reusejp_5192_:
{
lean_object* v___x_5194_; lean_object* v___x_5195_; 
v___x_5194_ = lean_st_ref_put(v___y_5173_, v___x_5193_);
v___x_5195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5195_, 0, v___x_5190_);
return v___x_5195_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0___boxed(lean_object* v___y_5199_, lean_object* v_isExporting_5200_, lean_object* v___x_5201_, lean_object* v_a_x3f_5202_, lean_object* v___y_5203_){
_start:
{
uint8_t v_isExporting_boxed_5204_; lean_object* v_res_5205_; 
v_isExporting_boxed_5204_ = lean_unbox(v_isExporting_5200_);
v_res_5205_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(v___y_5199_, v_isExporting_boxed_5204_, v___x_5201_, v_a_x3f_5202_);
lean_dec(v_a_x3f_5202_);
lean_dec(v___y_5199_);
return v_res_5205_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(lean_object* v_x_5206_, uint8_t v_isExporting_5207_, lean_object* v___y_5208_, lean_object* v___y_5209_){
_start:
{
lean_object* v___x_5211_; lean_object* v_env_5212_; lean_object* v___x_5213_; uint8_t v_isModule_5214_; 
v___x_5211_ = lean_st_ref_get(v___y_5209_);
v_env_5212_ = lean_ctor_get(v___x_5211_, 0);
lean_inc_ref(v_env_5212_);
lean_dec(v___x_5211_);
v___x_5213_ = l_Lean_Environment_header(v_env_5212_);
v_isModule_5214_ = lean_ctor_get_uint8(v___x_5213_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_5213_);
if (v_isModule_5214_ == 0)
{
lean_object* v___x_5215_; 
lean_dec_ref(v_env_5212_);
lean_inc(v___y_5209_);
lean_inc_ref(v___y_5208_);
v___x_5215_ = lean_apply_3(v_x_5206_, v___y_5208_, v___y_5209_, lean_box(0));
return v___x_5215_;
}
else
{
uint8_t v_isExporting_5216_; 
v_isExporting_5216_ = lean_ctor_get_uint8(v_env_5212_, sizeof(void*)*8);
lean_dec_ref(v_env_5212_);
if (v_isExporting_5207_ == 0)
{
if (v_isExporting_5216_ == 0)
{
lean_object* v___x_5267_; 
lean_inc(v___y_5209_);
lean_inc_ref(v___y_5208_);
v___x_5267_ = lean_apply_3(v_x_5206_, v___y_5208_, v___y_5209_, lean_box(0));
return v___x_5267_;
}
else
{
goto v___jp_5217_;
}
}
else
{
if (v_isExporting_5216_ == 0)
{
goto v___jp_5217_;
}
else
{
lean_object* v___x_5268_; 
lean_inc(v___y_5209_);
lean_inc_ref(v___y_5208_);
v___x_5268_ = lean_apply_3(v_x_5206_, v___y_5208_, v___y_5209_, lean_box(0));
return v___x_5268_;
}
}
v___jp_5217_:
{
lean_object* v___x_5218_; lean_object* v_env_5219_; lean_object* v_nextMacroScope_5220_; lean_object* v_ngen_5221_; lean_object* v_auxDeclNGen_5222_; lean_object* v_traceState_5223_; lean_object* v_messages_5224_; lean_object* v_infoState_5225_; lean_object* v_snapshotTasks_5226_; lean_object* v___x_5228_; uint8_t v_isShared_5229_; uint8_t v_isSharedCheck_5265_; 
v___x_5218_ = lean_st_ref_take(v___y_5209_);
v_env_5219_ = lean_ctor_get(v___x_5218_, 0);
v_nextMacroScope_5220_ = lean_ctor_get(v___x_5218_, 1);
v_ngen_5221_ = lean_ctor_get(v___x_5218_, 2);
v_auxDeclNGen_5222_ = lean_ctor_get(v___x_5218_, 3);
v_traceState_5223_ = lean_ctor_get(v___x_5218_, 4);
v_messages_5224_ = lean_ctor_get(v___x_5218_, 6);
v_infoState_5225_ = lean_ctor_get(v___x_5218_, 7);
v_snapshotTasks_5226_ = lean_ctor_get(v___x_5218_, 8);
v_isSharedCheck_5265_ = !lean_is_exclusive(v___x_5218_);
if (v_isSharedCheck_5265_ == 0)
{
lean_object* v_unused_5266_; 
v_unused_5266_ = lean_ctor_get(v___x_5218_, 5);
lean_dec(v_unused_5266_);
v___x_5228_ = v___x_5218_;
v_isShared_5229_ = v_isSharedCheck_5265_;
goto v_resetjp_5227_;
}
else
{
lean_inc(v_snapshotTasks_5226_);
lean_inc(v_infoState_5225_);
lean_inc(v_messages_5224_);
lean_inc(v_traceState_5223_);
lean_inc(v_auxDeclNGen_5222_);
lean_inc(v_ngen_5221_);
lean_inc(v_nextMacroScope_5220_);
lean_inc(v_env_5219_);
lean_dec(v___x_5218_);
v___x_5228_ = lean_box(0);
v_isShared_5229_ = v_isSharedCheck_5265_;
goto v_resetjp_5227_;
}
v_resetjp_5227_:
{
lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5233_; 
v___x_5230_ = l_Lean_Environment_setExporting(v_env_5219_, v_isExporting_5207_);
v___x_5231_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2);
if (v_isShared_5229_ == 0)
{
lean_ctor_set(v___x_5228_, 5, v___x_5231_);
lean_ctor_set(v___x_5228_, 0, v___x_5230_);
v___x_5233_ = v___x_5228_;
goto v_reusejp_5232_;
}
else
{
lean_object* v_reuseFailAlloc_5264_; 
v_reuseFailAlloc_5264_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5264_, 0, v___x_5230_);
lean_ctor_set(v_reuseFailAlloc_5264_, 1, v_nextMacroScope_5220_);
lean_ctor_set(v_reuseFailAlloc_5264_, 2, v_ngen_5221_);
lean_ctor_set(v_reuseFailAlloc_5264_, 3, v_auxDeclNGen_5222_);
lean_ctor_set(v_reuseFailAlloc_5264_, 4, v_traceState_5223_);
lean_ctor_set(v_reuseFailAlloc_5264_, 5, v___x_5231_);
lean_ctor_set(v_reuseFailAlloc_5264_, 6, v_messages_5224_);
lean_ctor_set(v_reuseFailAlloc_5264_, 7, v_infoState_5225_);
lean_ctor_set(v_reuseFailAlloc_5264_, 8, v_snapshotTasks_5226_);
v___x_5233_ = v_reuseFailAlloc_5264_;
goto v_reusejp_5232_;
}
v_reusejp_5232_:
{
lean_object* v___x_5234_; lean_object* v_r_5235_; 
v___x_5234_ = lean_st_ref_put(v___y_5209_, v___x_5233_);
lean_inc(v___y_5209_);
lean_inc_ref(v___y_5208_);
v_r_5235_ = lean_apply_3(v_x_5206_, v___y_5208_, v___y_5209_, lean_box(0));
if (lean_obj_tag(v_r_5235_) == 0)
{
lean_object* v_a_5236_; lean_object* v___x_5238_; uint8_t v_isShared_5239_; uint8_t v_isSharedCheck_5252_; 
v_a_5236_ = lean_ctor_get(v_r_5235_, 0);
v_isSharedCheck_5252_ = !lean_is_exclusive(v_r_5235_);
if (v_isSharedCheck_5252_ == 0)
{
v___x_5238_ = v_r_5235_;
v_isShared_5239_ = v_isSharedCheck_5252_;
goto v_resetjp_5237_;
}
else
{
lean_inc(v_a_5236_);
lean_dec(v_r_5235_);
v___x_5238_ = lean_box(0);
v_isShared_5239_ = v_isSharedCheck_5252_;
goto v_resetjp_5237_;
}
v_resetjp_5237_:
{
lean_object* v___x_5241_; 
lean_inc(v_a_5236_);
if (v_isShared_5239_ == 0)
{
lean_ctor_set_tag(v___x_5238_, 1);
v___x_5241_ = v___x_5238_;
goto v_reusejp_5240_;
}
else
{
lean_object* v_reuseFailAlloc_5251_; 
v_reuseFailAlloc_5251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5251_, 0, v_a_5236_);
v___x_5241_ = v_reuseFailAlloc_5251_;
goto v_reusejp_5240_;
}
v_reusejp_5240_:
{
lean_object* v___x_5242_; lean_object* v___x_5244_; uint8_t v_isShared_5245_; uint8_t v_isSharedCheck_5249_; 
v___x_5242_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(v___y_5209_, v_isExporting_5216_, v___x_5231_, v___x_5241_);
lean_dec_ref(v___x_5241_);
v_isSharedCheck_5249_ = !lean_is_exclusive(v___x_5242_);
if (v_isSharedCheck_5249_ == 0)
{
lean_object* v_unused_5250_; 
v_unused_5250_ = lean_ctor_get(v___x_5242_, 0);
lean_dec(v_unused_5250_);
v___x_5244_ = v___x_5242_;
v_isShared_5245_ = v_isSharedCheck_5249_;
goto v_resetjp_5243_;
}
else
{
lean_dec(v___x_5242_);
v___x_5244_ = lean_box(0);
v_isShared_5245_ = v_isSharedCheck_5249_;
goto v_resetjp_5243_;
}
v_resetjp_5243_:
{
lean_object* v___x_5247_; 
if (v_isShared_5245_ == 0)
{
lean_ctor_set(v___x_5244_, 0, v_a_5236_);
v___x_5247_ = v___x_5244_;
goto v_reusejp_5246_;
}
else
{
lean_object* v_reuseFailAlloc_5248_; 
v_reuseFailAlloc_5248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5248_, 0, v_a_5236_);
v___x_5247_ = v_reuseFailAlloc_5248_;
goto v_reusejp_5246_;
}
v_reusejp_5246_:
{
return v___x_5247_;
}
}
}
}
}
else
{
lean_object* v_a_5253_; lean_object* v___x_5254_; lean_object* v___x_5255_; lean_object* v___x_5257_; uint8_t v_isShared_5258_; uint8_t v_isSharedCheck_5262_; 
v_a_5253_ = lean_ctor_get(v_r_5235_, 0);
lean_inc(v_a_5253_);
lean_dec_ref_known(v_r_5235_, 1);
v___x_5254_ = lean_box(0);
v___x_5255_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(v___y_5209_, v_isExporting_5216_, v___x_5231_, v___x_5254_);
v_isSharedCheck_5262_ = !lean_is_exclusive(v___x_5255_);
if (v_isSharedCheck_5262_ == 0)
{
lean_object* v_unused_5263_; 
v_unused_5263_ = lean_ctor_get(v___x_5255_, 0);
lean_dec(v_unused_5263_);
v___x_5257_ = v___x_5255_;
v_isShared_5258_ = v_isSharedCheck_5262_;
goto v_resetjp_5256_;
}
else
{
lean_dec(v___x_5255_);
v___x_5257_ = lean_box(0);
v_isShared_5258_ = v_isSharedCheck_5262_;
goto v_resetjp_5256_;
}
v_resetjp_5256_:
{
lean_object* v___x_5260_; 
if (v_isShared_5258_ == 0)
{
lean_ctor_set_tag(v___x_5257_, 1);
lean_ctor_set(v___x_5257_, 0, v_a_5253_);
v___x_5260_ = v___x_5257_;
goto v_reusejp_5259_;
}
else
{
lean_object* v_reuseFailAlloc_5261_; 
v_reuseFailAlloc_5261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5261_, 0, v_a_5253_);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___boxed(lean_object* v_x_5269_, lean_object* v_isExporting_5270_, lean_object* v___y_5271_, lean_object* v___y_5272_, lean_object* v___y_5273_){
_start:
{
uint8_t v_isExporting_boxed_5274_; lean_object* v_res_5275_; 
v_isExporting_boxed_5274_ = lean_unbox(v_isExporting_5270_);
v_res_5275_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(v_x_5269_, v_isExporting_boxed_5274_, v___y_5271_, v___y_5272_);
lean_dec(v___y_5272_);
lean_dec_ref(v___y_5271_);
return v_res_5275_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(lean_object* v_x_5276_, uint8_t v_when_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_){
_start:
{
if (v_when_5277_ == 0)
{
lean_object* v___x_5281_; 
lean_inc(v___y_5279_);
lean_inc_ref(v___y_5278_);
v___x_5281_ = lean_apply_3(v_x_5276_, v___y_5278_, v___y_5279_, lean_box(0));
return v___x_5281_;
}
else
{
uint8_t v___x_5282_; lean_object* v___x_5283_; 
v___x_5282_ = 0;
v___x_5283_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(v_x_5276_, v___x_5282_, v___y_5278_, v___y_5279_);
return v___x_5283_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg___boxed(lean_object* v_x_5284_, lean_object* v_when_5285_, lean_object* v___y_5286_, lean_object* v___y_5287_, lean_object* v___y_5288_){
_start:
{
uint8_t v_when_boxed_5289_; lean_object* v_res_5290_; 
v_when_boxed_5289_ = lean_unbox(v_when_5285_);
v_res_5290_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(v_x_5284_, v_when_boxed_5289_, v___y_5286_, v___y_5287_);
lean_dec(v___y_5287_);
lean_dec_ref(v___y_5286_);
return v_res_5290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf(lean_object* v_fnNames_5291_, lean_object* v_numSectionVars_5292_, lean_object* v_e_5293_, lean_object* v___y_5294_, lean_object* v___y_5295_){
_start:
{
lean_object* v___f_5297_; lean_object* v___f_5298_; uint8_t v___x_5299_; lean_object* v___x_5300_; 
v___f_5297_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__1));
v___f_5298_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldIfArgIsAppOf___lam__0___boxed), 7, 4);
lean_closure_set(v___f_5298_, 0, v_fnNames_5291_);
lean_closure_set(v___f_5298_, 1, v_numSectionVars_5292_);
lean_closure_set(v___f_5298_, 2, v_e_5293_);
lean_closure_set(v___f_5298_, 3, v___f_5297_);
v___x_5299_ = 1;
v___x_5300_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(v___f_5298_, v___x_5299_, v___y_5294_, v___y_5295_);
return v___x_5300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___boxed(lean_object* v_fnNames_5301_, lean_object* v_numSectionVars_5302_, lean_object* v_e_5303_, lean_object* v___y_5304_, lean_object* v___y_5305_, lean_object* v___y_5306_){
_start:
{
lean_object* v_res_5307_; 
v_res_5307_ = l_Lean_Meta_unfoldIfArgIsAppOf(v_fnNames_5301_, v_numSectionVars_5302_, v_e_5303_, v___y_5304_, v___y_5305_);
lean_dec(v___y_5305_);
lean_dec_ref(v___y_5304_);
return v_res_5307_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2(lean_object* v_00_u03b1_5308_, lean_object* v_x_5309_, uint8_t v_isExporting_5310_, lean_object* v___y_5311_, lean_object* v___y_5312_){
_start:
{
lean_object* v___x_5314_; 
v___x_5314_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(v_x_5309_, v_isExporting_5310_, v___y_5311_, v___y_5312_);
return v___x_5314_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___boxed(lean_object* v_00_u03b1_5315_, lean_object* v_x_5316_, lean_object* v_isExporting_5317_, lean_object* v___y_5318_, lean_object* v___y_5319_, lean_object* v___y_5320_){
_start:
{
uint8_t v_isExporting_boxed_5321_; lean_object* v_res_5322_; 
v_isExporting_boxed_5321_ = lean_unbox(v_isExporting_5317_);
v_res_5322_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2(v_00_u03b1_5315_, v_x_5316_, v_isExporting_boxed_5321_, v___y_5318_, v___y_5319_);
lean_dec(v___y_5319_);
lean_dec_ref(v___y_5318_);
return v_res_5322_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2(lean_object* v_00_u03b1_5323_, lean_object* v_x_5324_, uint8_t v_when_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_){
_start:
{
lean_object* v___x_5329_; 
v___x_5329_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(v_x_5324_, v_when_5325_, v___y_5326_, v___y_5327_);
return v___x_5329_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___boxed(lean_object* v_00_u03b1_5330_, lean_object* v_x_5331_, lean_object* v_when_5332_, lean_object* v___y_5333_, lean_object* v___y_5334_, lean_object* v___y_5335_){
_start:
{
uint8_t v_when_boxed_5336_; lean_object* v_res_5337_; 
v_when_boxed_5336_ = lean_unbox(v_when_5332_);
v_res_5337_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2(v_00_u03b1_5330_, v_x_5331_, v_when_boxed_5336_, v___y_5333_, v___y_5334_);
lean_dec(v___y_5334_);
lean_dec_ref(v___y_5333_);
return v_res_5337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0(lean_object* v_x_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_){
_start:
{
lean_object* v___x_5342_; lean_object* v___x_5343_; 
v___x_5342_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_5343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5343_, 0, v___x_5342_);
return v___x_5343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0___boxed(lean_object* v_x_5344_, lean_object* v___y_5345_, lean_object* v___y_5346_, lean_object* v___y_5347_){
_start:
{
lean_object* v_res_5348_; 
v_res_5348_ = l_Lean_Meta_eraseInaccessibleAnnotations___lam__0(v_x_5344_, v___y_5345_, v___y_5346_);
lean_dec(v___y_5346_);
lean_dec_ref(v___y_5345_);
lean_dec_ref(v_x_5344_);
return v_res_5348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1(lean_object* v_e_5349_, lean_object* v___y_5350_, lean_object* v___y_5351_){
_start:
{
lean_object* v___y_5354_; lean_object* v___x_5357_; 
v___x_5357_ = l_Lean_inaccessible_x3f(v_e_5349_);
if (lean_obj_tag(v___x_5357_) == 1)
{
lean_object* v_val_5358_; 
lean_dec_ref(v_e_5349_);
v_val_5358_ = lean_ctor_get(v___x_5357_, 0);
lean_inc(v_val_5358_);
lean_dec_ref_known(v___x_5357_, 1);
v___y_5354_ = v_val_5358_;
goto v___jp_5353_;
}
else
{
lean_dec(v___x_5357_);
v___y_5354_ = v_e_5349_;
goto v___jp_5353_;
}
v___jp_5353_:
{
lean_object* v___x_5355_; lean_object* v___x_5356_; 
v___x_5355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5355_, 0, v___y_5354_);
v___x_5356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5356_, 0, v___x_5355_);
return v___x_5356_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1___boxed(lean_object* v_e_5359_, lean_object* v___y_5360_, lean_object* v___y_5361_, lean_object* v___y_5362_){
_start:
{
lean_object* v_res_5363_; 
v_res_5363_ = l_Lean_Meta_eraseInaccessibleAnnotations___lam__1(v_e_5359_, v___y_5360_, v___y_5361_);
lean_dec(v___y_5361_);
lean_dec_ref(v___y_5360_);
return v_res_5363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations(lean_object* v_e_5366_, lean_object* v___y_5367_, lean_object* v___y_5368_){
_start:
{
lean_object* v___f_5370_; lean_object* v___f_5371_; lean_object* v___x_5372_; 
v___f_5370_ = ((lean_object*)(l_Lean_Meta_eraseInaccessibleAnnotations___closed__0));
v___f_5371_ = ((lean_object*)(l_Lean_Meta_eraseInaccessibleAnnotations___closed__1));
v___x_5372_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_5366_, v___f_5370_, v___f_5371_, v___y_5367_, v___y_5368_);
return v___x_5372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___boxed(lean_object* v_e_5373_, lean_object* v___y_5374_, lean_object* v___y_5375_, lean_object* v___y_5376_){
_start:
{
lean_object* v_res_5377_; 
v_res_5377_ = l_Lean_Meta_eraseInaccessibleAnnotations(v_e_5373_, v___y_5374_, v___y_5375_);
lean_dec(v___y_5375_);
lean_dec_ref(v___y_5374_);
return v_res_5377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1(lean_object* v_e_5378_, lean_object* v___y_5379_, lean_object* v___y_5380_){
_start:
{
lean_object* v___y_5383_; lean_object* v___x_5386_; 
v___x_5386_ = l_Lean_patternWithRef_x3f(v_e_5378_);
if (lean_obj_tag(v___x_5386_) == 1)
{
lean_object* v_val_5387_; lean_object* v_snd_5388_; 
lean_dec_ref(v_e_5378_);
v_val_5387_ = lean_ctor_get(v___x_5386_, 0);
lean_inc(v_val_5387_);
lean_dec_ref_known(v___x_5386_, 1);
v_snd_5388_ = lean_ctor_get(v_val_5387_, 1);
lean_inc(v_snd_5388_);
lean_dec(v_val_5387_);
v___y_5383_ = v_snd_5388_;
goto v___jp_5382_;
}
else
{
lean_dec(v___x_5386_);
v___y_5383_ = v_e_5378_;
goto v___jp_5382_;
}
v___jp_5382_:
{
lean_object* v___x_5384_; lean_object* v___x_5385_; 
v___x_5384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5384_, 0, v___y_5383_);
v___x_5385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5385_, 0, v___x_5384_);
return v___x_5385_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1___boxed(lean_object* v_e_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_){
_start:
{
lean_object* v_res_5393_; 
v_res_5393_ = l_Lean_Meta_erasePatternRefAnnotations___lam__1(v_e_5389_, v___y_5390_, v___y_5391_);
lean_dec(v___y_5391_);
lean_dec_ref(v___y_5390_);
return v_res_5393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations(lean_object* v_e_5395_, lean_object* v___y_5396_, lean_object* v___y_5397_){
_start:
{
lean_object* v___f_5399_; lean_object* v___f_5400_; lean_object* v___x_5401_; 
v___f_5399_ = ((lean_object*)(l_Lean_Meta_eraseInaccessibleAnnotations___closed__0));
v___f_5400_ = ((lean_object*)(l_Lean_Meta_erasePatternRefAnnotations___closed__0));
v___x_5401_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_5395_, v___f_5399_, v___f_5400_, v___y_5396_, v___y_5397_);
return v___x_5401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___boxed(lean_object* v_e_5402_, lean_object* v___y_5403_, lean_object* v___y_5404_, lean_object* v___y_5405_){
_start:
{
lean_object* v_res_5406_; 
v_res_5406_ = l_Lean_Meta_erasePatternRefAnnotations(v_e_5402_, v___y_5403_, v___y_5404_);
lean_dec(v___y_5404_);
lean_dec_ref(v___y_5403_);
return v_res_5406_;
}
}
lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedTransformStep_default = _init_l_Lean_instInhabitedTransformStep_default();
lean_mark_persistent(l_Lean_instInhabitedTransformStep_default);
l_Lean_instInhabitedTransformStep = _init_l_Lean_instInhabitedTransformStep();
lean_mark_persistent(l_Lean_instInhabitedTransformStep);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Transform(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Transform(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Transform(builtin);
}
#ifdef __cplusplus
}
#endif
