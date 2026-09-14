// Lean compiler output
// Module: Lean.Meta.GeneralizeVars
// Imports: public import Lean.Meta.Basic public import Lean.Util.CollectFVars
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
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_FVarIdSet_toArray(lean_object*);
lean_object* l_Lean_Meta_sortFVarIds___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0;
static lean_once_cell_t l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1;
static const lean_array_object l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2 = (const lean_object*)&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
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
v___x_21_ = lean_st_ref_put(v___y_2_, v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v_fst_9_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v_e_30_, v___y_32_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___boxed(lean_object* v_e_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1(v_e_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(lean_object* v_init_44_, lean_object* v_x_45_){
_start:
{
if (lean_obj_tag(v_x_45_) == 0)
{
lean_object* v_k_47_; lean_object* v_l_48_; lean_object* v_r_49_; lean_object* v___x_50_; lean_object* v_a_51_; lean_object* v_a_52_; lean_object* v_fst_53_; lean_object* v_snd_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_69_; 
v_k_47_ = lean_ctor_get(v_x_45_, 1);
lean_inc(v_k_47_);
v_l_48_ = lean_ctor_get(v_x_45_, 3);
lean_inc(v_l_48_);
v_r_49_ = lean_ctor_get(v_x_45_, 4);
lean_inc(v_r_49_);
lean_dec_ref_known(v_x_45_, 5);
v___x_50_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_init_44_, v_l_48_);
v_a_51_ = lean_ctor_get(v___x_50_, 0);
lean_inc(v_a_51_);
lean_dec_ref(v___x_50_);
v_a_52_ = lean_ctor_get(v_a_51_, 0);
lean_inc(v_a_52_);
lean_dec(v_a_51_);
v_fst_53_ = lean_ctor_get(v_a_52_, 0);
v_snd_54_ = lean_ctor_get(v_a_52_, 1);
v_isSharedCheck_69_ = !lean_is_exclusive(v_a_52_);
if (v_isSharedCheck_69_ == 0)
{
v___x_56_ = v_a_52_;
v_isShared_57_ = v_isSharedCheck_69_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_snd_54_);
lean_inc(v_fst_53_);
lean_dec(v_a_52_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_69_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
uint8_t v___x_58_; 
v___x_58_ = l_Lean_FVarIdSet_contains(v_snd_54_, v_k_47_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_62_; 
lean_inc(v_k_47_);
v___x_59_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_59_, 0, v_k_47_);
lean_ctor_set(v___x_59_, 1, v_fst_53_);
v___x_60_ = l_Lean_FVarIdSet_insert(v_snd_54_, v_k_47_);
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 1, v___x_60_);
lean_ctor_set(v___x_56_, 0, v___x_59_);
v___x_62_ = v___x_56_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v___x_59_);
lean_ctor_set(v_reuseFailAlloc_64_, 1, v___x_60_);
v___x_62_ = v_reuseFailAlloc_64_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
v_init_44_ = v___x_62_;
v_x_45_ = v_r_49_;
goto _start;
}
}
else
{
lean_object* v___x_66_; 
lean_dec(v_k_47_);
if (v_isShared_57_ == 0)
{
v___x_66_ = v___x_56_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v_fst_53_);
lean_ctor_set(v_reuseFailAlloc_68_, 1, v_snd_54_);
v___x_66_ = v_reuseFailAlloc_68_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
v_init_44_ = v___x_66_;
v_x_45_ = v_r_49_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_70_, 0, v_init_44_);
v___x_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg___boxed(lean_object* v_init_72_, lean_object* v_x_73_, lean_object* v___y_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_init_72_, v_x_73_);
return v_res_75_;
}
}
static lean_object* _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_76_ = lean_box(0);
v___x_77_ = lean_unsigned_to_nat(16u);
v___x_78_ = lean_mk_array(v___x_77_, v___x_76_);
return v___x_78_;
}
}
static lean_object* _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_79_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0);
v___x_80_ = lean_unsigned_to_nat(0u);
v___x_81_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set(v___x_81_, 1, v___x_79_);
return v___x_81_;
}
}
static lean_object* _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_84_ = ((lean_object*)(l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2));
v___x_85_ = lean_box(1);
v___x_86_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_87_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v___x_85_);
lean_ctor_set(v___x_87_, 2, v___x_84_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(lean_object* v_fvarId_88_, lean_object* v_todo_89_, lean_object* v_s_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
lean_object* v_a_97_; lean_object* v_s_x27_109_; lean_object* v___y_110_; lean_object* v___y_111_; lean_object* v___y_112_; lean_object* v___y_113_; lean_object* v___x_119_; 
v___x_119_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_88_, v___y_91_, v___y_93_, v___y_94_);
if (lean_obj_tag(v___x_119_) == 0)
{
lean_object* v_a_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v_a_123_; lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; lean_object* v___x_127_; 
v_a_120_ = lean_ctor_get(v___x_119_, 0);
lean_inc(v_a_120_);
lean_dec_ref_known(v___x_119_, 1);
v___x_121_ = l_Lean_LocalDecl_type(v_a_120_);
v___x_122_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v___x_121_, v___y_92_);
v_a_123_ = lean_ctor_get(v___x_122_, 0);
lean_inc(v_a_123_);
lean_dec_ref(v___x_122_);
v___x_124_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3);
v___x_125_ = l_Lean_collectFVars(v___x_124_, v_a_123_);
v___x_126_ = 0;
v___x_127_ = l_Lean_LocalDecl_value_x3f(v_a_120_, v___x_126_);
lean_dec(v_a_120_);
if (lean_obj_tag(v___x_127_) == 1)
{
lean_object* v_val_128_; lean_object* v___x_129_; lean_object* v_a_130_; lean_object* v___x_131_; 
v_val_128_ = lean_ctor_get(v___x_127_, 0);
lean_inc(v_val_128_);
lean_dec_ref_known(v___x_127_, 1);
v___x_129_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v_val_128_, v___y_92_);
v_a_130_ = lean_ctor_get(v___x_129_, 0);
lean_inc(v_a_130_);
lean_dec_ref(v___x_129_);
v___x_131_ = l_Lean_collectFVars(v___x_125_, v_a_130_);
v_s_x27_109_ = v___x_131_;
v___y_110_ = v___y_91_;
v___y_111_ = v___y_92_;
v___y_112_ = v___y_93_;
v___y_113_ = v___y_94_;
goto v___jp_108_;
}
else
{
lean_dec(v___x_127_);
v_s_x27_109_ = v___x_125_;
v___y_110_ = v___y_91_;
v___y_111_ = v___y_92_;
v___y_112_ = v___y_93_;
v___y_113_ = v___y_94_;
goto v___jp_108_;
}
}
else
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_139_; 
lean_dec(v_s_90_);
lean_dec(v_todo_89_);
v_a_132_ = lean_ctor_get(v___x_119_, 0);
v_isSharedCheck_139_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_139_ == 0)
{
v___x_134_ = v___x_119_;
v_isShared_135_ = v_isSharedCheck_139_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_dec(v___x_119_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_139_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_137_; 
if (v_isShared_135_ == 0)
{
v___x_137_ = v___x_134_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_a_132_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
v___jp_96_:
{
lean_object* v_fst_98_; lean_object* v_snd_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_107_; 
v_fst_98_ = lean_ctor_get(v_a_97_, 0);
v_snd_99_ = lean_ctor_get(v_a_97_, 1);
v_isSharedCheck_107_ = !lean_is_exclusive(v_a_97_);
if (v_isSharedCheck_107_ == 0)
{
v___x_101_ = v_a_97_;
v_isShared_102_ = v_isSharedCheck_107_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_snd_99_);
lean_inc(v_fst_98_);
lean_dec(v_a_97_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_107_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_104_; 
if (v_isShared_102_ == 0)
{
v___x_104_ = v___x_101_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v_fst_98_);
lean_ctor_set(v_reuseFailAlloc_106_, 1, v_snd_99_);
v___x_104_ = v_reuseFailAlloc_106_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
lean_object* v___x_105_; 
v___x_105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
return v___x_105_;
}
}
}
v___jp_108_:
{
lean_object* v_fvarSet_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v_a_117_; lean_object* v_a_118_; 
v_fvarSet_114_ = lean_ctor_get(v_s_x27_109_, 1);
lean_inc(v_fvarSet_114_);
lean_dec_ref(v_s_x27_109_);
v___x_115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_115_, 0, v_todo_89_);
lean_ctor_set(v___x_115_, 1, v_s_90_);
v___x_116_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v___x_115_, v_fvarSet_114_);
v_a_117_ = lean_ctor_get(v___x_116_, 0);
lean_inc(v_a_117_);
lean_dec_ref(v___x_116_);
v_a_118_ = lean_ctor_get(v_a_117_, 0);
lean_inc(v_a_118_);
lean_dec(v_a_117_);
v_a_97_ = v_a_118_;
goto v___jp_96_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___boxed(lean_object* v_fvarId_140_, lean_object* v_todo_141_, lean_object* v_s_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(v_fvarId_140_, v_todo_141_, v_s_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0(lean_object* v_init_149_, lean_object* v_x_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_init_149_, v_x_150_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___boxed(lean_object* v_init_157_, lean_object* v_x_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0(v_init_157_, v_x_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(lean_object* v_todo_165_, lean_object* v_s_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
if (lean_obj_tag(v_todo_165_) == 0)
{
lean_object* v___x_172_; 
v___x_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_172_, 0, v_s_166_);
return v___x_172_;
}
else
{
lean_object* v_head_173_; lean_object* v_tail_174_; uint8_t v___x_175_; 
v_head_173_ = lean_ctor_get(v_todo_165_, 0);
lean_inc(v_head_173_);
v_tail_174_ = lean_ctor_get(v_todo_165_, 1);
lean_inc(v_tail_174_);
lean_dec_ref_known(v_todo_165_, 2);
v___x_175_ = l_Lean_FVarIdSet_contains(v_s_166_, v_head_173_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; lean_object* v___x_177_; 
lean_inc(v_head_173_);
v___x_176_ = l_Lean_FVarIdSet_insert(v_s_166_, v_head_173_);
v___x_177_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(v_head_173_, v_tail_174_, v___x_176_, v___y_167_, v___y_168_, v___y_169_, v___y_170_);
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v_a_178_; lean_object* v_fst_179_; lean_object* v_snd_180_; 
v_a_178_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_a_178_);
lean_dec_ref_known(v___x_177_, 1);
v_fst_179_ = lean_ctor_get(v_a_178_, 0);
lean_inc(v_fst_179_);
v_snd_180_ = lean_ctor_get(v_a_178_, 1);
lean_inc(v_snd_180_);
lean_dec(v_a_178_);
v_todo_165_ = v_fst_179_;
v_s_166_ = v_snd_180_;
goto _start;
}
else
{
lean_object* v_a_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_189_; 
v_a_182_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_189_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_189_ == 0)
{
v___x_184_ = v___x_177_;
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_a_182_);
lean_dec(v___x_177_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_187_; 
if (v_isShared_185_ == 0)
{
v___x_187_ = v___x_184_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_a_182_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
}
else
{
lean_dec(v_head_173_);
v_todo_165_ = v_tail_174_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop___boxed(lean_object* v_todo_191_, lean_object* v_s_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(v_todo_191_, v_s_192_, v___y_193_, v___y_194_, v___y_195_, v___y_196_);
lean_dec(v___y_196_);
lean_dec_ref(v___y_195_);
lean_dec(v___y_194_);
lean_dec_ref(v___y_193_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(lean_object* v_as_199_, size_t v_sz_200_, size_t v_i_201_, lean_object* v_b_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_){
_start:
{
lean_object* v_a_209_; uint8_t v___x_213_; 
v___x_213_ = lean_usize_dec_lt(v_i_201_, v_sz_200_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; 
v___x_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_214_, 0, v_b_202_);
return v___x_214_;
}
else
{
lean_object* v_fst_215_; lean_object* v_snd_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_251_; 
v_fst_215_ = lean_ctor_get(v_b_202_, 0);
v_snd_216_ = lean_ctor_get(v_b_202_, 1);
v_isSharedCheck_251_ = !lean_is_exclusive(v_b_202_);
if (v_isSharedCheck_251_ == 0)
{
v___x_218_ = v_b_202_;
v_isShared_219_ = v_isSharedCheck_251_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_snd_216_);
lean_inc(v_fst_215_);
lean_dec(v_b_202_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_251_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v_a_220_; uint8_t v___x_221_; 
v_a_220_ = lean_array_uget_borrowed(v_as_199_, v_i_201_);
v___x_221_ = l_Lean_Expr_isFVar(v_a_220_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; 
lean_inc(v___y_206_);
lean_inc_ref(v___y_205_);
lean_inc(v___y_204_);
lean_inc_ref(v___y_203_);
lean_inc(v_a_220_);
v___x_222_ = lean_infer_type(v_a_220_, v___y_203_, v___y_204_, v___y_205_, v___y_206_);
if (lean_obj_tag(v___x_222_) == 0)
{
lean_object* v_a_223_; lean_object* v___x_224_; 
v_a_223_ = lean_ctor_get(v___x_222_, 0);
lean_inc(v_a_223_);
lean_dec_ref_known(v___x_222_, 1);
v___x_224_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v_a_223_, v___y_204_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; lean_object* v___x_226_; lean_object* v___x_228_; 
v_a_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_225_);
lean_dec_ref_known(v___x_224_, 1);
v___x_226_ = l_Lean_collectFVars(v_fst_215_, v_a_225_);
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 0, v___x_226_);
v___x_228_ = v___x_218_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v___x_226_);
lean_ctor_set(v_reuseFailAlloc_229_, 1, v_snd_216_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
v_a_209_ = v___x_228_;
goto v___jp_208_;
}
}
else
{
lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_237_; 
lean_del_object(v___x_218_);
lean_dec(v_snd_216_);
lean_dec(v_fst_215_);
v_a_230_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_237_ == 0)
{
v___x_232_ = v___x_224_;
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_dec(v___x_224_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_235_; 
if (v_isShared_233_ == 0)
{
v___x_235_ = v___x_232_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_a_230_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
else
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_245_; 
lean_del_object(v___x_218_);
lean_dec(v_snd_216_);
lean_dec(v_fst_215_);
v_a_238_ = lean_ctor_get(v___x_222_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v___x_222_);
if (v_isSharedCheck_245_ == 0)
{
v___x_240_ = v___x_222_;
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_222_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_243_; 
if (v_isShared_241_ == 0)
{
v___x_243_ = v___x_240_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_a_238_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
}
else
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_246_ = l_Lean_Expr_fvarId_x21(v_a_220_);
v___x_247_ = lean_array_push(v_snd_216_, v___x_246_);
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 1, v___x_247_);
v___x_249_ = v___x_218_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_fst_215_);
lean_ctor_set(v_reuseFailAlloc_250_, 1, v___x_247_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
v_a_209_ = v___x_249_;
goto v___jp_208_;
}
}
}
}
v___jp_208_:
{
size_t v___x_210_; size_t v___x_211_; 
v___x_210_ = ((size_t)1ULL);
v___x_211_ = lean_usize_add(v_i_201_, v___x_210_);
v_i_201_ = v___x_211_;
v_b_202_ = v_a_209_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0___boxed(lean_object* v_as_252_, lean_object* v_sz_253_, lean_object* v_i_254_, lean_object* v_b_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
size_t v_sz_boxed_261_; size_t v_i_boxed_262_; lean_object* v_res_263_; 
v_sz_boxed_261_ = lean_unbox_usize(v_sz_253_);
lean_dec(v_sz_253_);
v_i_boxed_262_ = lean_unbox_usize(v_i_254_);
lean_dec(v_i_254_);
v_res_263_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(v_as_252_, v_sz_boxed_261_, v_i_boxed_262_, v_b_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
lean_dec_ref(v_as_252_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet(lean_object* v_targets_264_, lean_object* v_forbidden_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v___x_271_; lean_object* v_todo_272_; lean_object* v_s_273_; lean_object* v___x_274_; size_t v_sz_275_; size_t v___x_276_; lean_object* v___x_277_; 
v___x_271_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v_todo_272_ = ((lean_object*)(l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2));
v_s_273_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_s_273_, 0, v___x_271_);
lean_ctor_set(v_s_273_, 1, v_forbidden_265_);
lean_ctor_set(v_s_273_, 2, v_todo_272_);
v___x_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_274_, 0, v_s_273_);
lean_ctor_set(v___x_274_, 1, v_todo_272_);
v_sz_275_ = lean_array_size(v_targets_264_);
v___x_276_ = ((size_t)0ULL);
v___x_277_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(v_targets_264_, v_sz_275_, v___x_276_, v___x_274_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v_a_278_; lean_object* v_fst_279_; lean_object* v_snd_280_; lean_object* v_fvarSet_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v_a_278_ = lean_ctor_get(v___x_277_, 0);
lean_inc(v_a_278_);
lean_dec_ref_known(v___x_277_, 1);
v_fst_279_ = lean_ctor_get(v_a_278_, 0);
lean_inc(v_fst_279_);
v_snd_280_ = lean_ctor_get(v_a_278_, 1);
lean_inc(v_snd_280_);
lean_dec(v_a_278_);
v_fvarSet_281_ = lean_ctor_get(v_fst_279_, 1);
lean_inc(v_fvarSet_281_);
lean_dec(v_fst_279_);
v___x_282_ = lean_array_to_list(v_snd_280_);
v___x_283_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(v___x_282_, v_fvarSet_281_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
return v___x_283_;
}
else
{
lean_object* v_a_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_291_; 
v_a_284_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_291_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_291_ == 0)
{
v___x_286_ = v___x_277_;
v_isShared_287_ = v_isSharedCheck_291_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_a_284_);
lean_dec(v___x_277_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_291_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___x_289_; 
if (v_isShared_287_ == 0)
{
v___x_289_ = v___x_286_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v_a_284_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
return v___x_289_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet___boxed(lean_object* v_targets_292_, lean_object* v_forbidden_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Lean_Meta_mkGeneralizationForbiddenSet(v_targets_292_, v_forbidden_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
lean_dec_ref(v_targets_292_);
return v_res_299_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1(uint8_t v___y_300_, lean_object* v_x_301_){
_start:
{
return v___y_300_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed(lean_object* v___y_302_, lean_object* v_x_303_){
_start:
{
uint8_t v___y_8877__boxed_304_; uint8_t v_res_305_; lean_object* v_r_306_; 
v___y_8877__boxed_304_ = lean_unbox(v___y_302_);
v_res_305_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1(v___y_8877__boxed_304_, v_x_303_);
lean_dec(v_x_303_);
v_r_306_ = lean_box(v_res_305_);
return v_r_306_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0(lean_object* v_fst_307_, lean_object* v_x_308_){
_start:
{
uint8_t v___x_309_; 
v___x_309_ = l_Lean_FVarIdSet_contains(v_fst_307_, v_x_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed(lean_object* v_fst_310_, lean_object* v_x_311_){
_start:
{
uint8_t v_res_312_; lean_object* v_r_313_; 
v_res_312_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0(v_fst_310_, v_x_311_);
lean_dec(v_x_311_);
lean_dec(v_fst_310_);
v_r_313_ = lean_box(v_res_312_);
return v_r_313_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(lean_object* v_forbidden_314_, uint8_t v_ignoreLetDecls_315_, lean_object* v_as_316_, size_t v_sz_317_, size_t v_i_318_, lean_object* v_b_319_, lean_object* v___y_320_){
_start:
{
uint8_t v___x_322_; 
v___x_322_ = lean_usize_dec_lt(v_i_318_, v_sz_317_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; 
v___x_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_323_, 0, v_b_319_);
return v___x_323_;
}
else
{
lean_object* v_snd_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_483_; 
v_snd_324_ = lean_ctor_get(v_b_319_, 1);
v_isSharedCheck_483_ = !lean_is_exclusive(v_b_319_);
if (v_isSharedCheck_483_ == 0)
{
lean_object* v_unused_484_; 
v_unused_484_ = lean_ctor_get(v_b_319_, 0);
lean_dec(v_unused_484_);
v___x_326_ = v_b_319_;
v_isShared_327_ = v_isSharedCheck_483_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_snd_324_);
lean_dec(v_b_319_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_483_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_328_; lean_object* v_a_330_; lean_object* v_a_337_; 
v___x_328_ = lean_box(0);
v_a_337_ = lean_array_uget_borrowed(v_as_316_, v_i_318_);
if (lean_obj_tag(v_a_337_) == 0)
{
v_a_330_ = v_snd_324_;
goto v___jp_329_;
}
else
{
lean_object* v_val_338_; lean_object* v_fst_339_; lean_object* v_snd_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_482_; 
v_val_338_ = lean_ctor_get(v_a_337_, 0);
v_fst_339_ = lean_ctor_get(v_snd_324_, 0);
v_snd_340_ = lean_ctor_get(v_snd_324_, 1);
v_isSharedCheck_482_ = !lean_is_exclusive(v_snd_324_);
if (v_isSharedCheck_482_ == 0)
{
v___x_342_ = v_snd_324_;
v_isShared_343_ = v_isSharedCheck_482_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_snd_340_);
lean_inc(v_fst_339_);
lean_dec(v_snd_324_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_482_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_348_; uint8_t v_a_350_; uint8_t v_fst_356_; lean_object* v_mctx_357_; lean_object* v___y_373_; uint8_t v_fst_379_; lean_object* v_snd_380_; lean_object* v___y_397_; uint8_t v_fst_402_; lean_object* v_mctx_403_; lean_object* v___y_419_; uint8_t v___x_424_; 
v___x_348_ = l_Lean_LocalDecl_fvarId(v_val_338_);
v___x_424_ = l_Lean_FVarIdSet_contains(v_forbidden_314_, v___x_348_);
if (v___x_424_ == 0)
{
lean_object* v___f_425_; lean_object* v___y_427_; lean_object* v___y_428_; uint8_t v_fst_429_; lean_object* v_snd_430_; lean_object* v___y_436_; lean_object* v___y_437_; lean_object* v___y_438_; uint8_t v___y_443_; uint8_t v___y_476_; uint8_t v___x_478_; 
lean_inc(v_fst_339_);
v___f_425_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_425_, 0, v_fst_339_);
v___x_478_ = l_Lean_LocalDecl_isAuxDecl(v_val_338_);
if (v___x_478_ == 0)
{
uint8_t v___x_479_; uint8_t v___x_480_; 
v___x_479_ = l_Lean_LocalDecl_binderInfo(v_val_338_);
v___x_480_ = l_Lean_BinderInfo_isInstImplicit(v___x_479_);
v___y_476_ = v___x_480_;
goto v___jp_475_;
}
else
{
v___y_476_ = v___x_478_;
goto v___jp_475_;
}
v___jp_426_:
{
if (v_fst_429_ == 0)
{
uint8_t v___x_431_; 
v___x_431_ = l_Lean_Expr_hasFVar(v___y_428_);
if (v___x_431_ == 0)
{
uint8_t v___x_432_; 
v___x_432_ = l_Lean_Expr_hasMVar(v___y_428_);
if (v___x_432_ == 0)
{
lean_dec_ref(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec_ref(v___f_425_);
v_fst_379_ = v___x_432_;
v_snd_380_ = v_snd_430_;
goto v___jp_378_;
}
else
{
lean_object* v___x_433_; 
v___x_433_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_425_, v___y_427_, v___y_428_, v_snd_430_);
v___y_397_ = v___x_433_;
goto v___jp_396_;
}
}
else
{
lean_object* v___x_434_; 
v___x_434_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_425_, v___y_427_, v___y_428_, v_snd_430_);
v___y_397_ = v___x_434_;
goto v___jp_396_;
}
}
else
{
lean_dec_ref(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec_ref(v___f_425_);
v_fst_379_ = v_fst_429_;
v_snd_380_ = v_snd_430_;
goto v___jp_378_;
}
}
v___jp_435_:
{
lean_object* v_fst_439_; lean_object* v_snd_440_; uint8_t v___x_441_; 
v_fst_439_ = lean_ctor_get(v___y_438_, 0);
lean_inc(v_fst_439_);
v_snd_440_ = lean_ctor_get(v___y_438_, 1);
lean_inc(v_snd_440_);
lean_dec_ref(v___y_438_);
v___x_441_ = lean_unbox(v_fst_439_);
lean_dec(v_fst_439_);
v___y_427_ = v___y_436_;
v___y_428_ = v___y_437_;
v_fst_429_ = v___x_441_;
v_snd_430_ = v_snd_440_;
goto v___jp_426_;
}
v___jp_442_:
{
if (v___y_443_ == 0)
{
lean_object* v___x_444_; lean_object* v___f_445_; 
lean_del_object(v___x_342_);
v___x_444_ = lean_box(v___y_443_);
v___f_445_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_445_, 0, v___x_444_);
if (lean_obj_tag(v_val_338_) == 0)
{
lean_object* v_type_446_; lean_object* v___x_447_; lean_object* v_mctx_448_; lean_object* v___x_449_; lean_object* v___x_450_; uint8_t v___x_451_; 
v_type_446_ = lean_ctor_get(v_val_338_, 3);
v___x_447_ = lean_st_ref_get(v___y_320_);
v_mctx_448_ = lean_ctor_get(v___x_447_, 0);
lean_inc_ref_n(v_mctx_448_, 2);
lean_dec(v___x_447_);
v___x_449_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
lean_ctor_set(v___x_450_, 1, v_mctx_448_);
v___x_451_ = l_Lean_Expr_hasFVar(v_type_446_);
if (v___x_451_ == 0)
{
uint8_t v___x_452_; 
v___x_452_ = l_Lean_Expr_hasMVar(v_type_446_);
if (v___x_452_ == 0)
{
lean_dec_ref_known(v___x_450_, 2);
lean_dec_ref(v___f_445_);
lean_dec_ref(v___f_425_);
v_fst_402_ = v___x_452_;
v_mctx_403_ = v_mctx_448_;
goto v___jp_401_;
}
else
{
lean_object* v___x_453_; 
lean_dec_ref(v_mctx_448_);
lean_inc_ref(v_type_446_);
v___x_453_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_425_, v___f_445_, v_type_446_, v___x_450_);
v___y_419_ = v___x_453_;
goto v___jp_418_;
}
}
else
{
lean_object* v___x_454_; 
lean_dec_ref(v_mctx_448_);
lean_inc_ref(v_type_446_);
v___x_454_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_425_, v___f_445_, v_type_446_, v___x_450_);
v___y_419_ = v___x_454_;
goto v___jp_418_;
}
}
else
{
uint8_t v_nondep_455_; 
v_nondep_455_ = lean_ctor_get_uint8(v_val_338_, sizeof(void*)*5);
if (v_nondep_455_ == 0)
{
lean_object* v_type_456_; lean_object* v_value_457_; lean_object* v___x_458_; lean_object* v_mctx_459_; lean_object* v___x_460_; lean_object* v___x_461_; uint8_t v___x_462_; 
v_type_456_ = lean_ctor_get(v_val_338_, 3);
v_value_457_ = lean_ctor_get(v_val_338_, 4);
v___x_458_ = lean_st_ref_get(v___y_320_);
v_mctx_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc_ref(v_mctx_459_);
lean_dec(v___x_458_);
v___x_460_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_461_, 0, v___x_460_);
lean_ctor_set(v___x_461_, 1, v_mctx_459_);
v___x_462_ = l_Lean_Expr_hasFVar(v_type_456_);
if (v___x_462_ == 0)
{
uint8_t v___x_463_; 
v___x_463_ = l_Lean_Expr_hasMVar(v_type_456_);
if (v___x_463_ == 0)
{
lean_inc_ref(v_value_457_);
v___y_427_ = v___f_445_;
v___y_428_ = v_value_457_;
v_fst_429_ = v___x_463_;
v_snd_430_ = v___x_461_;
goto v___jp_426_;
}
else
{
lean_object* v___x_464_; 
lean_inc_ref(v_type_456_);
lean_inc_ref(v___f_445_);
lean_inc_ref(v___f_425_);
v___x_464_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_425_, v___f_445_, v_type_456_, v___x_461_);
lean_inc_ref(v_value_457_);
v___y_436_ = v___f_445_;
v___y_437_ = v_value_457_;
v___y_438_ = v___x_464_;
goto v___jp_435_;
}
}
else
{
lean_object* v___x_465_; 
lean_inc_ref(v_type_456_);
lean_inc_ref(v___f_445_);
lean_inc_ref(v___f_425_);
v___x_465_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_425_, v___f_445_, v_type_456_, v___x_461_);
lean_inc_ref(v_value_457_);
v___y_436_ = v___f_445_;
v___y_437_ = v_value_457_;
v___y_438_ = v___x_465_;
goto v___jp_435_;
}
}
else
{
lean_object* v_type_466_; lean_object* v___x_467_; lean_object* v_mctx_468_; lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; 
v_type_466_ = lean_ctor_get(v_val_338_, 3);
v___x_467_ = lean_st_ref_get(v___y_320_);
v_mctx_468_ = lean_ctor_get(v___x_467_, 0);
lean_inc_ref_n(v_mctx_468_, 2);
lean_dec(v___x_467_);
v___x_469_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
lean_ctor_set(v___x_470_, 1, v_mctx_468_);
v___x_471_ = l_Lean_Expr_hasFVar(v_type_466_);
if (v___x_471_ == 0)
{
uint8_t v___x_472_; 
v___x_472_ = l_Lean_Expr_hasMVar(v_type_466_);
if (v___x_472_ == 0)
{
lean_dec_ref_known(v___x_470_, 2);
lean_dec_ref(v___f_445_);
lean_dec_ref(v___f_425_);
v_fst_356_ = v___x_472_;
v_mctx_357_ = v_mctx_468_;
goto v___jp_355_;
}
else
{
lean_object* v___x_473_; 
lean_dec_ref(v_mctx_468_);
lean_inc_ref(v_type_466_);
v___x_473_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_425_, v___f_445_, v_type_466_, v___x_470_);
v___y_373_ = v___x_473_;
goto v___jp_372_;
}
}
else
{
lean_object* v___x_474_; 
lean_dec_ref(v_mctx_468_);
lean_inc_ref(v_type_466_);
v___x_474_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_425_, v___f_445_, v_type_466_, v___x_470_);
v___y_373_ = v___x_474_;
goto v___jp_372_;
}
}
}
}
else
{
lean_dec_ref(v___f_425_);
lean_dec(v___x_348_);
goto v___jp_344_;
}
}
v___jp_475_:
{
if (v___y_476_ == 0)
{
if (v_ignoreLetDecls_315_ == 0)
{
v___y_443_ = v___x_424_;
goto v___jp_442_;
}
else
{
uint8_t v___x_477_; 
v___x_477_ = l_Lean_LocalDecl_isLet(v_val_338_, v___x_424_);
v___y_443_ = v___x_477_;
goto v___jp_442_;
}
}
else
{
lean_dec_ref(v___f_425_);
lean_dec(v___x_348_);
goto v___jp_344_;
}
}
}
else
{
lean_object* v___x_481_; 
lean_dec(v___x_348_);
lean_del_object(v___x_342_);
v___x_481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_481_, 0, v_fst_339_);
lean_ctor_set(v___x_481_, 1, v_snd_340_);
v_a_330_ = v___x_481_;
goto v___jp_329_;
}
v___jp_344_:
{
lean_object* v___x_346_; 
if (v_isShared_343_ == 0)
{
v___x_346_ = v___x_342_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_fst_339_);
lean_ctor_set(v_reuseFailAlloc_347_, 1, v_snd_340_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
v_a_330_ = v___x_346_;
goto v___jp_329_;
}
}
v___jp_349_:
{
if (v_a_350_ == 0)
{
lean_object* v___x_351_; 
lean_dec(v___x_348_);
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v_fst_339_);
lean_ctor_set(v___x_351_, 1, v_snd_340_);
v_a_330_ = v___x_351_;
goto v___jp_329_;
}
else
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
lean_inc(v___x_348_);
v___x_352_ = l_Lean_FVarIdSet_insert(v_snd_340_, v___x_348_);
v___x_353_ = l_Lean_FVarIdSet_insert(v_fst_339_, v___x_348_);
v___x_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
lean_ctor_set(v___x_354_, 1, v___x_352_);
v_a_330_ = v___x_354_;
goto v___jp_329_;
}
}
v___jp_355_:
{
lean_object* v___x_358_; lean_object* v_cache_359_; lean_object* v_zetaDeltaFVarIds_360_; lean_object* v_postponed_361_; lean_object* v_diag_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_370_; 
v___x_358_ = lean_st_ref_take(v___y_320_);
v_cache_359_ = lean_ctor_get(v___x_358_, 1);
v_zetaDeltaFVarIds_360_ = lean_ctor_get(v___x_358_, 2);
v_postponed_361_ = lean_ctor_get(v___x_358_, 3);
v_diag_362_ = lean_ctor_get(v___x_358_, 4);
v_isSharedCheck_370_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_370_ == 0)
{
lean_object* v_unused_371_; 
v_unused_371_ = lean_ctor_get(v___x_358_, 0);
lean_dec(v_unused_371_);
v___x_364_ = v___x_358_;
v_isShared_365_ = v_isSharedCheck_370_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_diag_362_);
lean_inc(v_postponed_361_);
lean_inc(v_zetaDeltaFVarIds_360_);
lean_inc(v_cache_359_);
lean_dec(v___x_358_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_370_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 0, v_mctx_357_);
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_mctx_357_);
lean_ctor_set(v_reuseFailAlloc_369_, 1, v_cache_359_);
lean_ctor_set(v_reuseFailAlloc_369_, 2, v_zetaDeltaFVarIds_360_);
lean_ctor_set(v_reuseFailAlloc_369_, 3, v_postponed_361_);
lean_ctor_set(v_reuseFailAlloc_369_, 4, v_diag_362_);
v___x_367_ = v_reuseFailAlloc_369_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
lean_object* v___x_368_; 
v___x_368_ = lean_st_ref_put(v___y_320_, v___x_367_);
v_a_350_ = v_fst_356_;
goto v___jp_349_;
}
}
}
v___jp_372_:
{
lean_object* v_snd_374_; lean_object* v_fst_375_; lean_object* v_mctx_376_; uint8_t v___x_377_; 
v_snd_374_ = lean_ctor_get(v___y_373_, 1);
lean_inc(v_snd_374_);
v_fst_375_ = lean_ctor_get(v___y_373_, 0);
lean_inc(v_fst_375_);
lean_dec_ref(v___y_373_);
v_mctx_376_ = lean_ctor_get(v_snd_374_, 1);
lean_inc_ref(v_mctx_376_);
lean_dec(v_snd_374_);
v___x_377_ = lean_unbox(v_fst_375_);
lean_dec(v_fst_375_);
v_fst_356_ = v___x_377_;
v_mctx_357_ = v_mctx_376_;
goto v___jp_355_;
}
v___jp_378_:
{
lean_object* v_mctx_381_; lean_object* v___x_382_; lean_object* v_cache_383_; lean_object* v_zetaDeltaFVarIds_384_; lean_object* v_postponed_385_; lean_object* v_diag_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_394_; 
v_mctx_381_ = lean_ctor_get(v_snd_380_, 1);
lean_inc_ref(v_mctx_381_);
lean_dec_ref(v_snd_380_);
v___x_382_ = lean_st_ref_take(v___y_320_);
v_cache_383_ = lean_ctor_get(v___x_382_, 1);
v_zetaDeltaFVarIds_384_ = lean_ctor_get(v___x_382_, 2);
v_postponed_385_ = lean_ctor_get(v___x_382_, 3);
v_diag_386_ = lean_ctor_get(v___x_382_, 4);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_394_ == 0)
{
lean_object* v_unused_395_; 
v_unused_395_ = lean_ctor_get(v___x_382_, 0);
lean_dec(v_unused_395_);
v___x_388_ = v___x_382_;
v_isShared_389_ = v_isSharedCheck_394_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_diag_386_);
lean_inc(v_postponed_385_);
lean_inc(v_zetaDeltaFVarIds_384_);
lean_inc(v_cache_383_);
lean_dec(v___x_382_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_394_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_391_; 
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 0, v_mctx_381_);
v___x_391_ = v___x_388_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_mctx_381_);
lean_ctor_set(v_reuseFailAlloc_393_, 1, v_cache_383_);
lean_ctor_set(v_reuseFailAlloc_393_, 2, v_zetaDeltaFVarIds_384_);
lean_ctor_set(v_reuseFailAlloc_393_, 3, v_postponed_385_);
lean_ctor_set(v_reuseFailAlloc_393_, 4, v_diag_386_);
v___x_391_ = v_reuseFailAlloc_393_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
lean_object* v___x_392_; 
v___x_392_ = lean_st_ref_put(v___y_320_, v___x_391_);
v_a_350_ = v_fst_379_;
goto v___jp_349_;
}
}
}
v___jp_396_:
{
lean_object* v_fst_398_; lean_object* v_snd_399_; uint8_t v___x_400_; 
v_fst_398_ = lean_ctor_get(v___y_397_, 0);
lean_inc(v_fst_398_);
v_snd_399_ = lean_ctor_get(v___y_397_, 1);
lean_inc(v_snd_399_);
lean_dec_ref(v___y_397_);
v___x_400_ = lean_unbox(v_fst_398_);
lean_dec(v_fst_398_);
v_fst_379_ = v___x_400_;
v_snd_380_ = v_snd_399_;
goto v___jp_378_;
}
v___jp_401_:
{
lean_object* v___x_404_; lean_object* v_cache_405_; lean_object* v_zetaDeltaFVarIds_406_; lean_object* v_postponed_407_; lean_object* v_diag_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_416_; 
v___x_404_ = lean_st_ref_take(v___y_320_);
v_cache_405_ = lean_ctor_get(v___x_404_, 1);
v_zetaDeltaFVarIds_406_ = lean_ctor_get(v___x_404_, 2);
v_postponed_407_ = lean_ctor_get(v___x_404_, 3);
v_diag_408_ = lean_ctor_get(v___x_404_, 4);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_416_ == 0)
{
lean_object* v_unused_417_; 
v_unused_417_ = lean_ctor_get(v___x_404_, 0);
lean_dec(v_unused_417_);
v___x_410_ = v___x_404_;
v_isShared_411_ = v_isSharedCheck_416_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_diag_408_);
lean_inc(v_postponed_407_);
lean_inc(v_zetaDeltaFVarIds_406_);
lean_inc(v_cache_405_);
lean_dec(v___x_404_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_416_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_413_; 
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 0, v_mctx_403_);
v___x_413_ = v___x_410_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_mctx_403_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v_cache_405_);
lean_ctor_set(v_reuseFailAlloc_415_, 2, v_zetaDeltaFVarIds_406_);
lean_ctor_set(v_reuseFailAlloc_415_, 3, v_postponed_407_);
lean_ctor_set(v_reuseFailAlloc_415_, 4, v_diag_408_);
v___x_413_ = v_reuseFailAlloc_415_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
lean_object* v___x_414_; 
v___x_414_ = lean_st_ref_put(v___y_320_, v___x_413_);
v_a_350_ = v_fst_402_;
goto v___jp_349_;
}
}
}
v___jp_418_:
{
lean_object* v_snd_420_; lean_object* v_fst_421_; lean_object* v_mctx_422_; uint8_t v___x_423_; 
v_snd_420_ = lean_ctor_get(v___y_419_, 1);
lean_inc(v_snd_420_);
v_fst_421_ = lean_ctor_get(v___y_419_, 0);
lean_inc(v_fst_421_);
lean_dec_ref(v___y_419_);
v_mctx_422_ = lean_ctor_get(v_snd_420_, 1);
lean_inc_ref(v_mctx_422_);
lean_dec(v_snd_420_);
v___x_423_ = lean_unbox(v_fst_421_);
lean_dec(v_fst_421_);
v_fst_402_ = v___x_423_;
v_mctx_403_ = v_mctx_422_;
goto v___jp_401_;
}
}
}
v___jp_329_:
{
lean_object* v___x_332_; 
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 1, v_a_330_);
lean_ctor_set(v___x_326_, 0, v___x_328_);
v___x_332_ = v___x_326_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v___x_328_);
lean_ctor_set(v_reuseFailAlloc_336_, 1, v_a_330_);
v___x_332_ = v_reuseFailAlloc_336_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
size_t v___x_333_; size_t v___x_334_; 
v___x_333_ = ((size_t)1ULL);
v___x_334_ = lean_usize_add(v_i_318_, v___x_333_);
v_i_318_ = v___x_334_;
v_b_319_ = v___x_332_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_forbidden_485_, lean_object* v_ignoreLetDecls_486_, lean_object* v_as_487_, lean_object* v_sz_488_, lean_object* v_i_489_, lean_object* v_b_490_, lean_object* v___y_491_, lean_object* v___y_492_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_493_; size_t v_sz_boxed_494_; size_t v_i_boxed_495_; lean_object* v_res_496_; 
v_ignoreLetDecls_boxed_493_ = lean_unbox(v_ignoreLetDecls_486_);
v_sz_boxed_494_ = lean_unbox_usize(v_sz_488_);
lean_dec(v_sz_488_);
v_i_boxed_495_ = lean_unbox_usize(v_i_489_);
lean_dec(v_i_489_);
v_res_496_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(v_forbidden_485_, v_ignoreLetDecls_boxed_493_, v_as_487_, v_sz_boxed_494_, v_i_boxed_495_, v_b_490_, v___y_491_);
lean_dec(v___y_491_);
lean_dec_ref(v_as_487_);
lean_dec(v_forbidden_485_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(lean_object* v_forbidden_497_, uint8_t v_ignoreLetDecls_498_, lean_object* v_as_499_, size_t v_sz_500_, size_t v_i_501_, lean_object* v_b_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
uint8_t v___x_508_; 
v___x_508_ = lean_usize_dec_lt(v_i_501_, v_sz_500_);
if (v___x_508_ == 0)
{
lean_object* v___x_509_; 
v___x_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_509_, 0, v_b_502_);
return v___x_509_;
}
else
{
lean_object* v_snd_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_669_; 
v_snd_510_ = lean_ctor_get(v_b_502_, 1);
v_isSharedCheck_669_ = !lean_is_exclusive(v_b_502_);
if (v_isSharedCheck_669_ == 0)
{
lean_object* v_unused_670_; 
v_unused_670_ = lean_ctor_get(v_b_502_, 0);
lean_dec(v_unused_670_);
v___x_512_ = v_b_502_;
v_isShared_513_ = v_isSharedCheck_669_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_snd_510_);
lean_dec(v_b_502_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_669_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_514_; lean_object* v_a_516_; lean_object* v_a_523_; 
v___x_514_ = lean_box(0);
v_a_523_ = lean_array_uget_borrowed(v_as_499_, v_i_501_);
if (lean_obj_tag(v_a_523_) == 0)
{
v_a_516_ = v_snd_510_;
goto v___jp_515_;
}
else
{
lean_object* v_val_524_; lean_object* v_fst_525_; lean_object* v_snd_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_668_; 
v_val_524_ = lean_ctor_get(v_a_523_, 0);
v_fst_525_ = lean_ctor_get(v_snd_510_, 0);
v_snd_526_ = lean_ctor_get(v_snd_510_, 1);
v_isSharedCheck_668_ = !lean_is_exclusive(v_snd_510_);
if (v_isSharedCheck_668_ == 0)
{
v___x_528_ = v_snd_510_;
v_isShared_529_ = v_isSharedCheck_668_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_snd_526_);
lean_inc(v_fst_525_);
lean_dec(v_snd_510_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_668_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_534_; uint8_t v_a_536_; uint8_t v_fst_542_; lean_object* v_mctx_543_; lean_object* v___y_559_; uint8_t v_fst_565_; lean_object* v_snd_566_; lean_object* v___y_583_; uint8_t v_fst_588_; lean_object* v_mctx_589_; lean_object* v___y_605_; uint8_t v___x_610_; 
v___x_534_ = l_Lean_LocalDecl_fvarId(v_val_524_);
v___x_610_ = l_Lean_FVarIdSet_contains(v_forbidden_497_, v___x_534_);
if (v___x_610_ == 0)
{
lean_object* v___f_611_; lean_object* v___y_613_; lean_object* v___y_614_; uint8_t v_fst_615_; lean_object* v_snd_616_; lean_object* v___y_622_; lean_object* v___y_623_; lean_object* v___y_624_; uint8_t v___y_629_; uint8_t v___y_662_; uint8_t v___x_664_; 
lean_inc(v_fst_525_);
v___f_611_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_611_, 0, v_fst_525_);
v___x_664_ = l_Lean_LocalDecl_isAuxDecl(v_val_524_);
if (v___x_664_ == 0)
{
uint8_t v___x_665_; uint8_t v___x_666_; 
v___x_665_ = l_Lean_LocalDecl_binderInfo(v_val_524_);
v___x_666_ = l_Lean_BinderInfo_isInstImplicit(v___x_665_);
v___y_662_ = v___x_666_;
goto v___jp_661_;
}
else
{
v___y_662_ = v___x_664_;
goto v___jp_661_;
}
v___jp_612_:
{
if (v_fst_615_ == 0)
{
uint8_t v___x_617_; 
v___x_617_ = l_Lean_Expr_hasFVar(v___y_614_);
if (v___x_617_ == 0)
{
uint8_t v___x_618_; 
v___x_618_ = l_Lean_Expr_hasMVar(v___y_614_);
if (v___x_618_ == 0)
{
lean_dec_ref(v___y_614_);
lean_dec_ref(v___y_613_);
lean_dec_ref(v___f_611_);
v_fst_565_ = v___x_618_;
v_snd_566_ = v_snd_616_;
goto v___jp_564_;
}
else
{
lean_object* v___x_619_; 
v___x_619_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_611_, v___y_613_, v___y_614_, v_snd_616_);
v___y_583_ = v___x_619_;
goto v___jp_582_;
}
}
else
{
lean_object* v___x_620_; 
v___x_620_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_611_, v___y_613_, v___y_614_, v_snd_616_);
v___y_583_ = v___x_620_;
goto v___jp_582_;
}
}
else
{
lean_dec_ref(v___y_614_);
lean_dec_ref(v___y_613_);
lean_dec_ref(v___f_611_);
v_fst_565_ = v_fst_615_;
v_snd_566_ = v_snd_616_;
goto v___jp_564_;
}
}
v___jp_621_:
{
lean_object* v_fst_625_; lean_object* v_snd_626_; uint8_t v___x_627_; 
v_fst_625_ = lean_ctor_get(v___y_624_, 0);
lean_inc(v_fst_625_);
v_snd_626_ = lean_ctor_get(v___y_624_, 1);
lean_inc(v_snd_626_);
lean_dec_ref(v___y_624_);
v___x_627_ = lean_unbox(v_fst_625_);
lean_dec(v_fst_625_);
v___y_613_ = v___y_622_;
v___y_614_ = v___y_623_;
v_fst_615_ = v___x_627_;
v_snd_616_ = v_snd_626_;
goto v___jp_612_;
}
v___jp_628_:
{
if (v___y_629_ == 0)
{
lean_object* v___x_630_; lean_object* v___f_631_; 
lean_del_object(v___x_528_);
v___x_630_ = lean_box(v___y_629_);
v___f_631_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_631_, 0, v___x_630_);
if (lean_obj_tag(v_val_524_) == 0)
{
lean_object* v_type_632_; lean_object* v___x_633_; lean_object* v_mctx_634_; lean_object* v___x_635_; lean_object* v___x_636_; uint8_t v___x_637_; 
v_type_632_ = lean_ctor_get(v_val_524_, 3);
v___x_633_ = lean_st_ref_get(v___y_504_);
v_mctx_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc_ref_n(v_mctx_634_, 2);
lean_dec(v___x_633_);
v___x_635_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
lean_ctor_set(v___x_636_, 1, v_mctx_634_);
v___x_637_ = l_Lean_Expr_hasFVar(v_type_632_);
if (v___x_637_ == 0)
{
uint8_t v___x_638_; 
v___x_638_ = l_Lean_Expr_hasMVar(v_type_632_);
if (v___x_638_ == 0)
{
lean_dec_ref_known(v___x_636_, 2);
lean_dec_ref(v___f_631_);
lean_dec_ref(v___f_611_);
v_fst_588_ = v___x_638_;
v_mctx_589_ = v_mctx_634_;
goto v___jp_587_;
}
else
{
lean_object* v___x_639_; 
lean_dec_ref(v_mctx_634_);
lean_inc_ref(v_type_632_);
v___x_639_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_611_, v___f_631_, v_type_632_, v___x_636_);
v___y_605_ = v___x_639_;
goto v___jp_604_;
}
}
else
{
lean_object* v___x_640_; 
lean_dec_ref(v_mctx_634_);
lean_inc_ref(v_type_632_);
v___x_640_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_611_, v___f_631_, v_type_632_, v___x_636_);
v___y_605_ = v___x_640_;
goto v___jp_604_;
}
}
else
{
uint8_t v_nondep_641_; 
v_nondep_641_ = lean_ctor_get_uint8(v_val_524_, sizeof(void*)*5);
if (v_nondep_641_ == 0)
{
lean_object* v_type_642_; lean_object* v_value_643_; lean_object* v___x_644_; lean_object* v_mctx_645_; lean_object* v___x_646_; lean_object* v___x_647_; uint8_t v___x_648_; 
v_type_642_ = lean_ctor_get(v_val_524_, 3);
v_value_643_ = lean_ctor_get(v_val_524_, 4);
v___x_644_ = lean_st_ref_get(v___y_504_);
v_mctx_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc_ref(v_mctx_645_);
lean_dec(v___x_644_);
v___x_646_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_647_, 0, v___x_646_);
lean_ctor_set(v___x_647_, 1, v_mctx_645_);
v___x_648_ = l_Lean_Expr_hasFVar(v_type_642_);
if (v___x_648_ == 0)
{
uint8_t v___x_649_; 
v___x_649_ = l_Lean_Expr_hasMVar(v_type_642_);
if (v___x_649_ == 0)
{
lean_inc_ref(v_value_643_);
v___y_613_ = v___f_631_;
v___y_614_ = v_value_643_;
v_fst_615_ = v___x_649_;
v_snd_616_ = v___x_647_;
goto v___jp_612_;
}
else
{
lean_object* v___x_650_; 
lean_inc_ref(v_type_642_);
lean_inc_ref(v___f_631_);
lean_inc_ref(v___f_611_);
v___x_650_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_611_, v___f_631_, v_type_642_, v___x_647_);
lean_inc_ref(v_value_643_);
v___y_622_ = v___f_631_;
v___y_623_ = v_value_643_;
v___y_624_ = v___x_650_;
goto v___jp_621_;
}
}
else
{
lean_object* v___x_651_; 
lean_inc_ref(v_type_642_);
lean_inc_ref(v___f_631_);
lean_inc_ref(v___f_611_);
v___x_651_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_611_, v___f_631_, v_type_642_, v___x_647_);
lean_inc_ref(v_value_643_);
v___y_622_ = v___f_631_;
v___y_623_ = v_value_643_;
v___y_624_ = v___x_651_;
goto v___jp_621_;
}
}
else
{
lean_object* v_type_652_; lean_object* v___x_653_; lean_object* v_mctx_654_; lean_object* v___x_655_; lean_object* v___x_656_; uint8_t v___x_657_; 
v_type_652_ = lean_ctor_get(v_val_524_, 3);
v___x_653_ = lean_st_ref_get(v___y_504_);
v_mctx_654_ = lean_ctor_get(v___x_653_, 0);
lean_inc_ref_n(v_mctx_654_, 2);
lean_dec(v___x_653_);
v___x_655_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
lean_ctor_set(v___x_656_, 1, v_mctx_654_);
v___x_657_ = l_Lean_Expr_hasFVar(v_type_652_);
if (v___x_657_ == 0)
{
uint8_t v___x_658_; 
v___x_658_ = l_Lean_Expr_hasMVar(v_type_652_);
if (v___x_658_ == 0)
{
lean_dec_ref_known(v___x_656_, 2);
lean_dec_ref(v___f_631_);
lean_dec_ref(v___f_611_);
v_fst_542_ = v___x_658_;
v_mctx_543_ = v_mctx_654_;
goto v___jp_541_;
}
else
{
lean_object* v___x_659_; 
lean_dec_ref(v_mctx_654_);
lean_inc_ref(v_type_652_);
v___x_659_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_611_, v___f_631_, v_type_652_, v___x_656_);
v___y_559_ = v___x_659_;
goto v___jp_558_;
}
}
else
{
lean_object* v___x_660_; 
lean_dec_ref(v_mctx_654_);
lean_inc_ref(v_type_652_);
v___x_660_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_611_, v___f_631_, v_type_652_, v___x_656_);
v___y_559_ = v___x_660_;
goto v___jp_558_;
}
}
}
}
else
{
lean_dec_ref(v___f_611_);
lean_dec(v___x_534_);
goto v___jp_530_;
}
}
v___jp_661_:
{
if (v___y_662_ == 0)
{
if (v_ignoreLetDecls_498_ == 0)
{
v___y_629_ = v___x_610_;
goto v___jp_628_;
}
else
{
uint8_t v___x_663_; 
v___x_663_ = l_Lean_LocalDecl_isLet(v_val_524_, v___x_610_);
v___y_629_ = v___x_663_;
goto v___jp_628_;
}
}
else
{
lean_dec_ref(v___f_611_);
lean_dec(v___x_534_);
goto v___jp_530_;
}
}
}
else
{
lean_object* v___x_667_; 
lean_dec(v___x_534_);
lean_del_object(v___x_528_);
v___x_667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_667_, 0, v_fst_525_);
lean_ctor_set(v___x_667_, 1, v_snd_526_);
v_a_516_ = v___x_667_;
goto v___jp_515_;
}
v___jp_530_:
{
lean_object* v___x_532_; 
if (v_isShared_529_ == 0)
{
v___x_532_ = v___x_528_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_fst_525_);
lean_ctor_set(v_reuseFailAlloc_533_, 1, v_snd_526_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
v_a_516_ = v___x_532_;
goto v___jp_515_;
}
}
v___jp_535_:
{
if (v_a_536_ == 0)
{
lean_object* v___x_537_; 
lean_dec(v___x_534_);
v___x_537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_537_, 0, v_fst_525_);
lean_ctor_set(v___x_537_, 1, v_snd_526_);
v_a_516_ = v___x_537_;
goto v___jp_515_;
}
else
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
lean_inc(v___x_534_);
v___x_538_ = l_Lean_FVarIdSet_insert(v_snd_526_, v___x_534_);
v___x_539_ = l_Lean_FVarIdSet_insert(v_fst_525_, v___x_534_);
v___x_540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_540_, 0, v___x_539_);
lean_ctor_set(v___x_540_, 1, v___x_538_);
v_a_516_ = v___x_540_;
goto v___jp_515_;
}
}
v___jp_541_:
{
lean_object* v___x_544_; lean_object* v_cache_545_; lean_object* v_zetaDeltaFVarIds_546_; lean_object* v_postponed_547_; lean_object* v_diag_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_556_; 
v___x_544_ = lean_st_ref_take(v___y_504_);
v_cache_545_ = lean_ctor_get(v___x_544_, 1);
v_zetaDeltaFVarIds_546_ = lean_ctor_get(v___x_544_, 2);
v_postponed_547_ = lean_ctor_get(v___x_544_, 3);
v_diag_548_ = lean_ctor_get(v___x_544_, 4);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_556_ == 0)
{
lean_object* v_unused_557_; 
v_unused_557_ = lean_ctor_get(v___x_544_, 0);
lean_dec(v_unused_557_);
v___x_550_ = v___x_544_;
v_isShared_551_ = v_isSharedCheck_556_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_diag_548_);
lean_inc(v_postponed_547_);
lean_inc(v_zetaDeltaFVarIds_546_);
lean_inc(v_cache_545_);
lean_dec(v___x_544_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_556_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 0, v_mctx_543_);
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_mctx_543_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_cache_545_);
lean_ctor_set(v_reuseFailAlloc_555_, 2, v_zetaDeltaFVarIds_546_);
lean_ctor_set(v_reuseFailAlloc_555_, 3, v_postponed_547_);
lean_ctor_set(v_reuseFailAlloc_555_, 4, v_diag_548_);
v___x_553_ = v_reuseFailAlloc_555_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
lean_object* v___x_554_; 
v___x_554_ = lean_st_ref_put(v___y_504_, v___x_553_);
v_a_536_ = v_fst_542_;
goto v___jp_535_;
}
}
}
v___jp_558_:
{
lean_object* v_snd_560_; lean_object* v_fst_561_; lean_object* v_mctx_562_; uint8_t v___x_563_; 
v_snd_560_ = lean_ctor_get(v___y_559_, 1);
lean_inc(v_snd_560_);
v_fst_561_ = lean_ctor_get(v___y_559_, 0);
lean_inc(v_fst_561_);
lean_dec_ref(v___y_559_);
v_mctx_562_ = lean_ctor_get(v_snd_560_, 1);
lean_inc_ref(v_mctx_562_);
lean_dec(v_snd_560_);
v___x_563_ = lean_unbox(v_fst_561_);
lean_dec(v_fst_561_);
v_fst_542_ = v___x_563_;
v_mctx_543_ = v_mctx_562_;
goto v___jp_541_;
}
v___jp_564_:
{
lean_object* v_mctx_567_; lean_object* v___x_568_; lean_object* v_cache_569_; lean_object* v_zetaDeltaFVarIds_570_; lean_object* v_postponed_571_; lean_object* v_diag_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_580_; 
v_mctx_567_ = lean_ctor_get(v_snd_566_, 1);
lean_inc_ref(v_mctx_567_);
lean_dec_ref(v_snd_566_);
v___x_568_ = lean_st_ref_take(v___y_504_);
v_cache_569_ = lean_ctor_get(v___x_568_, 1);
v_zetaDeltaFVarIds_570_ = lean_ctor_get(v___x_568_, 2);
v_postponed_571_ = lean_ctor_get(v___x_568_, 3);
v_diag_572_ = lean_ctor_get(v___x_568_, 4);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_580_ == 0)
{
lean_object* v_unused_581_; 
v_unused_581_ = lean_ctor_get(v___x_568_, 0);
lean_dec(v_unused_581_);
v___x_574_ = v___x_568_;
v_isShared_575_ = v_isSharedCheck_580_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_diag_572_);
lean_inc(v_postponed_571_);
lean_inc(v_zetaDeltaFVarIds_570_);
lean_inc(v_cache_569_);
lean_dec(v___x_568_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_580_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_577_; 
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 0, v_mctx_567_);
v___x_577_ = v___x_574_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_mctx_567_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v_cache_569_);
lean_ctor_set(v_reuseFailAlloc_579_, 2, v_zetaDeltaFVarIds_570_);
lean_ctor_set(v_reuseFailAlloc_579_, 3, v_postponed_571_);
lean_ctor_set(v_reuseFailAlloc_579_, 4, v_diag_572_);
v___x_577_ = v_reuseFailAlloc_579_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
lean_object* v___x_578_; 
v___x_578_ = lean_st_ref_put(v___y_504_, v___x_577_);
v_a_536_ = v_fst_565_;
goto v___jp_535_;
}
}
}
v___jp_582_:
{
lean_object* v_fst_584_; lean_object* v_snd_585_; uint8_t v___x_586_; 
v_fst_584_ = lean_ctor_get(v___y_583_, 0);
lean_inc(v_fst_584_);
v_snd_585_ = lean_ctor_get(v___y_583_, 1);
lean_inc(v_snd_585_);
lean_dec_ref(v___y_583_);
v___x_586_ = lean_unbox(v_fst_584_);
lean_dec(v_fst_584_);
v_fst_565_ = v___x_586_;
v_snd_566_ = v_snd_585_;
goto v___jp_564_;
}
v___jp_587_:
{
lean_object* v___x_590_; lean_object* v_cache_591_; lean_object* v_zetaDeltaFVarIds_592_; lean_object* v_postponed_593_; lean_object* v_diag_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_602_; 
v___x_590_ = lean_st_ref_take(v___y_504_);
v_cache_591_ = lean_ctor_get(v___x_590_, 1);
v_zetaDeltaFVarIds_592_ = lean_ctor_get(v___x_590_, 2);
v_postponed_593_ = lean_ctor_get(v___x_590_, 3);
v_diag_594_ = lean_ctor_get(v___x_590_, 4);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_602_ == 0)
{
lean_object* v_unused_603_; 
v_unused_603_ = lean_ctor_get(v___x_590_, 0);
lean_dec(v_unused_603_);
v___x_596_ = v___x_590_;
v_isShared_597_ = v_isSharedCheck_602_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_diag_594_);
lean_inc(v_postponed_593_);
lean_inc(v_zetaDeltaFVarIds_592_);
lean_inc(v_cache_591_);
lean_dec(v___x_590_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_602_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 0, v_mctx_589_);
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_mctx_589_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v_cache_591_);
lean_ctor_set(v_reuseFailAlloc_601_, 2, v_zetaDeltaFVarIds_592_);
lean_ctor_set(v_reuseFailAlloc_601_, 3, v_postponed_593_);
lean_ctor_set(v_reuseFailAlloc_601_, 4, v_diag_594_);
v___x_599_ = v_reuseFailAlloc_601_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
lean_object* v___x_600_; 
v___x_600_ = lean_st_ref_put(v___y_504_, v___x_599_);
v_a_536_ = v_fst_588_;
goto v___jp_535_;
}
}
}
v___jp_604_:
{
lean_object* v_snd_606_; lean_object* v_fst_607_; lean_object* v_mctx_608_; uint8_t v___x_609_; 
v_snd_606_ = lean_ctor_get(v___y_605_, 1);
lean_inc(v_snd_606_);
v_fst_607_ = lean_ctor_get(v___y_605_, 0);
lean_inc(v_fst_607_);
lean_dec_ref(v___y_605_);
v_mctx_608_ = lean_ctor_get(v_snd_606_, 1);
lean_inc_ref(v_mctx_608_);
lean_dec(v_snd_606_);
v___x_609_ = lean_unbox(v_fst_607_);
lean_dec(v_fst_607_);
v_fst_588_ = v___x_609_;
v_mctx_589_ = v_mctx_608_;
goto v___jp_587_;
}
}
}
v___jp_515_:
{
lean_object* v___x_518_; 
if (v_isShared_513_ == 0)
{
lean_ctor_set(v___x_512_, 1, v_a_516_);
lean_ctor_set(v___x_512_, 0, v___x_514_);
v___x_518_ = v___x_512_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_522_, 1, v_a_516_);
v___x_518_ = v_reuseFailAlloc_522_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
size_t v___x_519_; size_t v___x_520_; lean_object* v___x_521_; 
v___x_519_ = ((size_t)1ULL);
v___x_520_ = lean_usize_add(v_i_501_, v___x_519_);
v___x_521_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(v_forbidden_497_, v_ignoreLetDecls_498_, v_as_499_, v_sz_500_, v___x_520_, v___x_518_, v___y_504_);
return v___x_521_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___boxed(lean_object* v_forbidden_671_, lean_object* v_ignoreLetDecls_672_, lean_object* v_as_673_, lean_object* v_sz_674_, lean_object* v_i_675_, lean_object* v_b_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_682_; size_t v_sz_boxed_683_; size_t v_i_boxed_684_; lean_object* v_res_685_; 
v_ignoreLetDecls_boxed_682_ = lean_unbox(v_ignoreLetDecls_672_);
v_sz_boxed_683_ = lean_unbox_usize(v_sz_674_);
lean_dec(v_sz_674_);
v_i_boxed_684_ = lean_unbox_usize(v_i_675_);
lean_dec(v_i_675_);
v_res_685_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(v_forbidden_671_, v_ignoreLetDecls_boxed_682_, v_as_673_, v_sz_boxed_683_, v_i_boxed_684_, v_b_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_);
lean_dec(v___y_680_);
lean_dec_ref(v___y_679_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec_ref(v_as_673_);
lean_dec(v_forbidden_671_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_forbidden_686_, uint8_t v_ignoreLetDecls_687_, lean_object* v_as_688_, size_t v_sz_689_, size_t v_i_690_, lean_object* v_b_691_, lean_object* v___y_692_){
_start:
{
uint8_t v___x_694_; 
v___x_694_ = lean_usize_dec_lt(v_i_690_, v_sz_689_);
if (v___x_694_ == 0)
{
lean_object* v___x_695_; 
v___x_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_695_, 0, v_b_691_);
return v___x_695_;
}
else
{
lean_object* v_snd_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_855_; 
v_snd_696_ = lean_ctor_get(v_b_691_, 1);
v_isSharedCheck_855_ = !lean_is_exclusive(v_b_691_);
if (v_isSharedCheck_855_ == 0)
{
lean_object* v_unused_856_; 
v_unused_856_ = lean_ctor_get(v_b_691_, 0);
lean_dec(v_unused_856_);
v___x_698_ = v_b_691_;
v_isShared_699_ = v_isSharedCheck_855_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_snd_696_);
lean_dec(v_b_691_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_855_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_700_; lean_object* v_a_702_; lean_object* v_a_709_; 
v___x_700_ = lean_box(0);
v_a_709_ = lean_array_uget_borrowed(v_as_688_, v_i_690_);
if (lean_obj_tag(v_a_709_) == 0)
{
v_a_702_ = v_snd_696_;
goto v___jp_701_;
}
else
{
lean_object* v_val_710_; lean_object* v_fst_711_; lean_object* v_snd_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_854_; 
v_val_710_ = lean_ctor_get(v_a_709_, 0);
v_fst_711_ = lean_ctor_get(v_snd_696_, 0);
v_snd_712_ = lean_ctor_get(v_snd_696_, 1);
v_isSharedCheck_854_ = !lean_is_exclusive(v_snd_696_);
if (v_isSharedCheck_854_ == 0)
{
v___x_714_ = v_snd_696_;
v_isShared_715_ = v_isSharedCheck_854_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_snd_712_);
lean_inc(v_fst_711_);
lean_dec(v_snd_696_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_854_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_720_; uint8_t v_a_722_; uint8_t v_fst_728_; lean_object* v_mctx_729_; lean_object* v___y_745_; uint8_t v_fst_751_; lean_object* v_snd_752_; lean_object* v___y_769_; uint8_t v_fst_774_; lean_object* v_mctx_775_; lean_object* v___y_791_; uint8_t v___x_796_; 
v___x_720_ = l_Lean_LocalDecl_fvarId(v_val_710_);
v___x_796_ = l_Lean_FVarIdSet_contains(v_forbidden_686_, v___x_720_);
if (v___x_796_ == 0)
{
lean_object* v___f_797_; lean_object* v___y_799_; lean_object* v___y_800_; uint8_t v_fst_801_; lean_object* v_snd_802_; lean_object* v___y_808_; lean_object* v___y_809_; lean_object* v___y_810_; uint8_t v___y_815_; uint8_t v___y_848_; uint8_t v___x_850_; 
lean_inc(v_fst_711_);
v___f_797_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_797_, 0, v_fst_711_);
v___x_850_ = l_Lean_LocalDecl_isAuxDecl(v_val_710_);
if (v___x_850_ == 0)
{
uint8_t v___x_851_; uint8_t v___x_852_; 
v___x_851_ = l_Lean_LocalDecl_binderInfo(v_val_710_);
v___x_852_ = l_Lean_BinderInfo_isInstImplicit(v___x_851_);
v___y_848_ = v___x_852_;
goto v___jp_847_;
}
else
{
v___y_848_ = v___x_850_;
goto v___jp_847_;
}
v___jp_798_:
{
if (v_fst_801_ == 0)
{
uint8_t v___x_803_; 
v___x_803_ = l_Lean_Expr_hasFVar(v___y_800_);
if (v___x_803_ == 0)
{
uint8_t v___x_804_; 
v___x_804_ = l_Lean_Expr_hasMVar(v___y_800_);
if (v___x_804_ == 0)
{
lean_dec_ref(v___y_800_);
lean_dec_ref(v___y_799_);
lean_dec_ref(v___f_797_);
v_fst_751_ = v___x_804_;
v_snd_752_ = v_snd_802_;
goto v___jp_750_;
}
else
{
lean_object* v___x_805_; 
v___x_805_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_797_, v___y_799_, v___y_800_, v_snd_802_);
v___y_769_ = v___x_805_;
goto v___jp_768_;
}
}
else
{
lean_object* v___x_806_; 
v___x_806_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_797_, v___y_799_, v___y_800_, v_snd_802_);
v___y_769_ = v___x_806_;
goto v___jp_768_;
}
}
else
{
lean_dec_ref(v___y_800_);
lean_dec_ref(v___y_799_);
lean_dec_ref(v___f_797_);
v_fst_751_ = v_fst_801_;
v_snd_752_ = v_snd_802_;
goto v___jp_750_;
}
}
v___jp_807_:
{
lean_object* v_fst_811_; lean_object* v_snd_812_; uint8_t v___x_813_; 
v_fst_811_ = lean_ctor_get(v___y_810_, 0);
lean_inc(v_fst_811_);
v_snd_812_ = lean_ctor_get(v___y_810_, 1);
lean_inc(v_snd_812_);
lean_dec_ref(v___y_810_);
v___x_813_ = lean_unbox(v_fst_811_);
lean_dec(v_fst_811_);
v___y_799_ = v___y_808_;
v___y_800_ = v___y_809_;
v_fst_801_ = v___x_813_;
v_snd_802_ = v_snd_812_;
goto v___jp_798_;
}
v___jp_814_:
{
if (v___y_815_ == 0)
{
lean_object* v___x_816_; lean_object* v___f_817_; 
lean_del_object(v___x_714_);
v___x_816_ = lean_box(v___y_815_);
v___f_817_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_817_, 0, v___x_816_);
if (lean_obj_tag(v_val_710_) == 0)
{
lean_object* v_type_818_; lean_object* v___x_819_; lean_object* v_mctx_820_; lean_object* v___x_821_; lean_object* v___x_822_; uint8_t v___x_823_; 
v_type_818_ = lean_ctor_get(v_val_710_, 3);
v___x_819_ = lean_st_ref_get(v___y_692_);
v_mctx_820_ = lean_ctor_get(v___x_819_, 0);
lean_inc_ref_n(v_mctx_820_, 2);
lean_dec(v___x_819_);
v___x_821_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_822_, 0, v___x_821_);
lean_ctor_set(v___x_822_, 1, v_mctx_820_);
v___x_823_ = l_Lean_Expr_hasFVar(v_type_818_);
if (v___x_823_ == 0)
{
uint8_t v___x_824_; 
v___x_824_ = l_Lean_Expr_hasMVar(v_type_818_);
if (v___x_824_ == 0)
{
lean_dec_ref_known(v___x_822_, 2);
lean_dec_ref(v___f_817_);
lean_dec_ref(v___f_797_);
v_fst_774_ = v___x_824_;
v_mctx_775_ = v_mctx_820_;
goto v___jp_773_;
}
else
{
lean_object* v___x_825_; 
lean_dec_ref(v_mctx_820_);
lean_inc_ref(v_type_818_);
v___x_825_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_797_, v___f_817_, v_type_818_, v___x_822_);
v___y_791_ = v___x_825_;
goto v___jp_790_;
}
}
else
{
lean_object* v___x_826_; 
lean_dec_ref(v_mctx_820_);
lean_inc_ref(v_type_818_);
v___x_826_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_797_, v___f_817_, v_type_818_, v___x_822_);
v___y_791_ = v___x_826_;
goto v___jp_790_;
}
}
else
{
uint8_t v_nondep_827_; 
v_nondep_827_ = lean_ctor_get_uint8(v_val_710_, sizeof(void*)*5);
if (v_nondep_827_ == 0)
{
lean_object* v_type_828_; lean_object* v_value_829_; lean_object* v___x_830_; lean_object* v_mctx_831_; lean_object* v___x_832_; lean_object* v___x_833_; uint8_t v___x_834_; 
v_type_828_ = lean_ctor_get(v_val_710_, 3);
v_value_829_ = lean_ctor_get(v_val_710_, 4);
v___x_830_ = lean_st_ref_get(v___y_692_);
v_mctx_831_ = lean_ctor_get(v___x_830_, 0);
lean_inc_ref(v_mctx_831_);
lean_dec(v___x_830_);
v___x_832_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_833_, 0, v___x_832_);
lean_ctor_set(v___x_833_, 1, v_mctx_831_);
v___x_834_ = l_Lean_Expr_hasFVar(v_type_828_);
if (v___x_834_ == 0)
{
uint8_t v___x_835_; 
v___x_835_ = l_Lean_Expr_hasMVar(v_type_828_);
if (v___x_835_ == 0)
{
lean_inc_ref(v_value_829_);
v___y_799_ = v___f_817_;
v___y_800_ = v_value_829_;
v_fst_801_ = v___x_835_;
v_snd_802_ = v___x_833_;
goto v___jp_798_;
}
else
{
lean_object* v___x_836_; 
lean_inc_ref(v_type_828_);
lean_inc_ref(v___f_817_);
lean_inc_ref(v___f_797_);
v___x_836_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_797_, v___f_817_, v_type_828_, v___x_833_);
lean_inc_ref(v_value_829_);
v___y_808_ = v___f_817_;
v___y_809_ = v_value_829_;
v___y_810_ = v___x_836_;
goto v___jp_807_;
}
}
else
{
lean_object* v___x_837_; 
lean_inc_ref(v_type_828_);
lean_inc_ref(v___f_817_);
lean_inc_ref(v___f_797_);
v___x_837_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_797_, v___f_817_, v_type_828_, v___x_833_);
lean_inc_ref(v_value_829_);
v___y_808_ = v___f_817_;
v___y_809_ = v_value_829_;
v___y_810_ = v___x_837_;
goto v___jp_807_;
}
}
else
{
lean_object* v_type_838_; lean_object* v___x_839_; lean_object* v_mctx_840_; lean_object* v___x_841_; lean_object* v___x_842_; uint8_t v___x_843_; 
v_type_838_ = lean_ctor_get(v_val_710_, 3);
v___x_839_ = lean_st_ref_get(v___y_692_);
v_mctx_840_ = lean_ctor_get(v___x_839_, 0);
lean_inc_ref_n(v_mctx_840_, 2);
lean_dec(v___x_839_);
v___x_841_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_842_, 0, v___x_841_);
lean_ctor_set(v___x_842_, 1, v_mctx_840_);
v___x_843_ = l_Lean_Expr_hasFVar(v_type_838_);
if (v___x_843_ == 0)
{
uint8_t v___x_844_; 
v___x_844_ = l_Lean_Expr_hasMVar(v_type_838_);
if (v___x_844_ == 0)
{
lean_dec_ref_known(v___x_842_, 2);
lean_dec_ref(v___f_817_);
lean_dec_ref(v___f_797_);
v_fst_728_ = v___x_844_;
v_mctx_729_ = v_mctx_840_;
goto v___jp_727_;
}
else
{
lean_object* v___x_845_; 
lean_dec_ref(v_mctx_840_);
lean_inc_ref(v_type_838_);
v___x_845_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_797_, v___f_817_, v_type_838_, v___x_842_);
v___y_745_ = v___x_845_;
goto v___jp_744_;
}
}
else
{
lean_object* v___x_846_; 
lean_dec_ref(v_mctx_840_);
lean_inc_ref(v_type_838_);
v___x_846_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_797_, v___f_817_, v_type_838_, v___x_842_);
v___y_745_ = v___x_846_;
goto v___jp_744_;
}
}
}
}
else
{
lean_dec_ref(v___f_797_);
lean_dec(v___x_720_);
goto v___jp_716_;
}
}
v___jp_847_:
{
if (v___y_848_ == 0)
{
if (v_ignoreLetDecls_687_ == 0)
{
v___y_815_ = v___x_796_;
goto v___jp_814_;
}
else
{
uint8_t v___x_849_; 
v___x_849_ = l_Lean_LocalDecl_isLet(v_val_710_, v___x_796_);
v___y_815_ = v___x_849_;
goto v___jp_814_;
}
}
else
{
lean_dec_ref(v___f_797_);
lean_dec(v___x_720_);
goto v___jp_716_;
}
}
}
else
{
lean_object* v___x_853_; 
lean_dec(v___x_720_);
lean_del_object(v___x_714_);
v___x_853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_853_, 0, v_fst_711_);
lean_ctor_set(v___x_853_, 1, v_snd_712_);
v_a_702_ = v___x_853_;
goto v___jp_701_;
}
v___jp_716_:
{
lean_object* v___x_718_; 
if (v_isShared_715_ == 0)
{
v___x_718_ = v___x_714_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_fst_711_);
lean_ctor_set(v_reuseFailAlloc_719_, 1, v_snd_712_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
v_a_702_ = v___x_718_;
goto v___jp_701_;
}
}
v___jp_721_:
{
if (v_a_722_ == 0)
{
lean_object* v___x_723_; 
lean_dec(v___x_720_);
v___x_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_723_, 0, v_fst_711_);
lean_ctor_set(v___x_723_, 1, v_snd_712_);
v_a_702_ = v___x_723_;
goto v___jp_701_;
}
else
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
lean_inc(v___x_720_);
v___x_724_ = l_Lean_FVarIdSet_insert(v_snd_712_, v___x_720_);
v___x_725_ = l_Lean_FVarIdSet_insert(v_fst_711_, v___x_720_);
v___x_726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_726_, 0, v___x_725_);
lean_ctor_set(v___x_726_, 1, v___x_724_);
v_a_702_ = v___x_726_;
goto v___jp_701_;
}
}
v___jp_727_:
{
lean_object* v___x_730_; lean_object* v_cache_731_; lean_object* v_zetaDeltaFVarIds_732_; lean_object* v_postponed_733_; lean_object* v_diag_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_742_; 
v___x_730_ = lean_st_ref_take(v___y_692_);
v_cache_731_ = lean_ctor_get(v___x_730_, 1);
v_zetaDeltaFVarIds_732_ = lean_ctor_get(v___x_730_, 2);
v_postponed_733_ = lean_ctor_get(v___x_730_, 3);
v_diag_734_ = lean_ctor_get(v___x_730_, 4);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_742_ == 0)
{
lean_object* v_unused_743_; 
v_unused_743_ = lean_ctor_get(v___x_730_, 0);
lean_dec(v_unused_743_);
v___x_736_ = v___x_730_;
v_isShared_737_ = v_isSharedCheck_742_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_diag_734_);
lean_inc(v_postponed_733_);
lean_inc(v_zetaDeltaFVarIds_732_);
lean_inc(v_cache_731_);
lean_dec(v___x_730_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_742_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_739_; 
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 0, v_mctx_729_);
v___x_739_ = v___x_736_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_mctx_729_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_cache_731_);
lean_ctor_set(v_reuseFailAlloc_741_, 2, v_zetaDeltaFVarIds_732_);
lean_ctor_set(v_reuseFailAlloc_741_, 3, v_postponed_733_);
lean_ctor_set(v_reuseFailAlloc_741_, 4, v_diag_734_);
v___x_739_ = v_reuseFailAlloc_741_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
lean_object* v___x_740_; 
v___x_740_ = lean_st_ref_put(v___y_692_, v___x_739_);
v_a_722_ = v_fst_728_;
goto v___jp_721_;
}
}
}
v___jp_744_:
{
lean_object* v_snd_746_; lean_object* v_fst_747_; lean_object* v_mctx_748_; uint8_t v___x_749_; 
v_snd_746_ = lean_ctor_get(v___y_745_, 1);
lean_inc(v_snd_746_);
v_fst_747_ = lean_ctor_get(v___y_745_, 0);
lean_inc(v_fst_747_);
lean_dec_ref(v___y_745_);
v_mctx_748_ = lean_ctor_get(v_snd_746_, 1);
lean_inc_ref(v_mctx_748_);
lean_dec(v_snd_746_);
v___x_749_ = lean_unbox(v_fst_747_);
lean_dec(v_fst_747_);
v_fst_728_ = v___x_749_;
v_mctx_729_ = v_mctx_748_;
goto v___jp_727_;
}
v___jp_750_:
{
lean_object* v_mctx_753_; lean_object* v___x_754_; lean_object* v_cache_755_; lean_object* v_zetaDeltaFVarIds_756_; lean_object* v_postponed_757_; lean_object* v_diag_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_766_; 
v_mctx_753_ = lean_ctor_get(v_snd_752_, 1);
lean_inc_ref(v_mctx_753_);
lean_dec_ref(v_snd_752_);
v___x_754_ = lean_st_ref_take(v___y_692_);
v_cache_755_ = lean_ctor_get(v___x_754_, 1);
v_zetaDeltaFVarIds_756_ = lean_ctor_get(v___x_754_, 2);
v_postponed_757_ = lean_ctor_get(v___x_754_, 3);
v_diag_758_ = lean_ctor_get(v___x_754_, 4);
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_766_ == 0)
{
lean_object* v_unused_767_; 
v_unused_767_ = lean_ctor_get(v___x_754_, 0);
lean_dec(v_unused_767_);
v___x_760_ = v___x_754_;
v_isShared_761_ = v_isSharedCheck_766_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_diag_758_);
lean_inc(v_postponed_757_);
lean_inc(v_zetaDeltaFVarIds_756_);
lean_inc(v_cache_755_);
lean_dec(v___x_754_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_766_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 0, v_mctx_753_);
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_mctx_753_);
lean_ctor_set(v_reuseFailAlloc_765_, 1, v_cache_755_);
lean_ctor_set(v_reuseFailAlloc_765_, 2, v_zetaDeltaFVarIds_756_);
lean_ctor_set(v_reuseFailAlloc_765_, 3, v_postponed_757_);
lean_ctor_set(v_reuseFailAlloc_765_, 4, v_diag_758_);
v___x_763_ = v_reuseFailAlloc_765_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
lean_object* v___x_764_; 
v___x_764_ = lean_st_ref_put(v___y_692_, v___x_763_);
v_a_722_ = v_fst_751_;
goto v___jp_721_;
}
}
}
v___jp_768_:
{
lean_object* v_fst_770_; lean_object* v_snd_771_; uint8_t v___x_772_; 
v_fst_770_ = lean_ctor_get(v___y_769_, 0);
lean_inc(v_fst_770_);
v_snd_771_ = lean_ctor_get(v___y_769_, 1);
lean_inc(v_snd_771_);
lean_dec_ref(v___y_769_);
v___x_772_ = lean_unbox(v_fst_770_);
lean_dec(v_fst_770_);
v_fst_751_ = v___x_772_;
v_snd_752_ = v_snd_771_;
goto v___jp_750_;
}
v___jp_773_:
{
lean_object* v___x_776_; lean_object* v_cache_777_; lean_object* v_zetaDeltaFVarIds_778_; lean_object* v_postponed_779_; lean_object* v_diag_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_788_; 
v___x_776_ = lean_st_ref_take(v___y_692_);
v_cache_777_ = lean_ctor_get(v___x_776_, 1);
v_zetaDeltaFVarIds_778_ = lean_ctor_get(v___x_776_, 2);
v_postponed_779_ = lean_ctor_get(v___x_776_, 3);
v_diag_780_ = lean_ctor_get(v___x_776_, 4);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_776_);
if (v_isSharedCheck_788_ == 0)
{
lean_object* v_unused_789_; 
v_unused_789_ = lean_ctor_get(v___x_776_, 0);
lean_dec(v_unused_789_);
v___x_782_ = v___x_776_;
v_isShared_783_ = v_isSharedCheck_788_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_diag_780_);
lean_inc(v_postponed_779_);
lean_inc(v_zetaDeltaFVarIds_778_);
lean_inc(v_cache_777_);
lean_dec(v___x_776_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_788_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_785_; 
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 0, v_mctx_775_);
v___x_785_ = v___x_782_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_mctx_775_);
lean_ctor_set(v_reuseFailAlloc_787_, 1, v_cache_777_);
lean_ctor_set(v_reuseFailAlloc_787_, 2, v_zetaDeltaFVarIds_778_);
lean_ctor_set(v_reuseFailAlloc_787_, 3, v_postponed_779_);
lean_ctor_set(v_reuseFailAlloc_787_, 4, v_diag_780_);
v___x_785_ = v_reuseFailAlloc_787_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
lean_object* v___x_786_; 
v___x_786_ = lean_st_ref_put(v___y_692_, v___x_785_);
v_a_722_ = v_fst_774_;
goto v___jp_721_;
}
}
}
v___jp_790_:
{
lean_object* v_snd_792_; lean_object* v_fst_793_; lean_object* v_mctx_794_; uint8_t v___x_795_; 
v_snd_792_ = lean_ctor_get(v___y_791_, 1);
lean_inc(v_snd_792_);
v_fst_793_ = lean_ctor_get(v___y_791_, 0);
lean_inc(v_fst_793_);
lean_dec_ref(v___y_791_);
v_mctx_794_ = lean_ctor_get(v_snd_792_, 1);
lean_inc_ref(v_mctx_794_);
lean_dec(v_snd_792_);
v___x_795_ = lean_unbox(v_fst_793_);
lean_dec(v_fst_793_);
v_fst_774_ = v___x_795_;
v_mctx_775_ = v_mctx_794_;
goto v___jp_773_;
}
}
}
v___jp_701_:
{
lean_object* v___x_704_; 
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 1, v_a_702_);
lean_ctor_set(v___x_698_, 0, v___x_700_);
v___x_704_ = v___x_698_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v___x_700_);
lean_ctor_set(v_reuseFailAlloc_708_, 1, v_a_702_);
v___x_704_ = v_reuseFailAlloc_708_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
size_t v___x_705_; size_t v___x_706_; 
v___x_705_ = ((size_t)1ULL);
v___x_706_ = lean_usize_add(v_i_690_, v___x_705_);
v_i_690_ = v___x_706_;
v_b_691_ = v___x_704_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_forbidden_857_, lean_object* v_ignoreLetDecls_858_, lean_object* v_as_859_, lean_object* v_sz_860_, lean_object* v_i_861_, lean_object* v_b_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_865_; size_t v_sz_boxed_866_; size_t v_i_boxed_867_; lean_object* v_res_868_; 
v_ignoreLetDecls_boxed_865_ = lean_unbox(v_ignoreLetDecls_858_);
v_sz_boxed_866_ = lean_unbox_usize(v_sz_860_);
lean_dec(v_sz_860_);
v_i_boxed_867_ = lean_unbox_usize(v_i_861_);
lean_dec(v_i_861_);
v_res_868_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(v_forbidden_857_, v_ignoreLetDecls_boxed_865_, v_as_859_, v_sz_boxed_866_, v_i_boxed_867_, v_b_862_, v___y_863_);
lean_dec(v___y_863_);
lean_dec_ref(v_as_859_);
lean_dec(v_forbidden_857_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(lean_object* v_forbidden_869_, uint8_t v_ignoreLetDecls_870_, lean_object* v_as_871_, size_t v_sz_872_, size_t v_i_873_, lean_object* v_b_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
uint8_t v___x_880_; 
v___x_880_ = lean_usize_dec_lt(v_i_873_, v_sz_872_);
if (v___x_880_ == 0)
{
lean_object* v___x_881_; 
v___x_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_881_, 0, v_b_874_);
return v___x_881_;
}
else
{
lean_object* v_snd_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_1041_; 
v_snd_882_ = lean_ctor_get(v_b_874_, 1);
v_isSharedCheck_1041_ = !lean_is_exclusive(v_b_874_);
if (v_isSharedCheck_1041_ == 0)
{
lean_object* v_unused_1042_; 
v_unused_1042_ = lean_ctor_get(v_b_874_, 0);
lean_dec(v_unused_1042_);
v___x_884_ = v_b_874_;
v_isShared_885_ = v_isSharedCheck_1041_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_snd_882_);
lean_dec(v_b_874_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_1041_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_886_; lean_object* v_a_888_; lean_object* v_a_895_; 
v___x_886_ = lean_box(0);
v_a_895_ = lean_array_uget_borrowed(v_as_871_, v_i_873_);
if (lean_obj_tag(v_a_895_) == 0)
{
v_a_888_ = v_snd_882_;
goto v___jp_887_;
}
else
{
lean_object* v_val_896_; lean_object* v_fst_897_; lean_object* v_snd_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_1040_; 
v_val_896_ = lean_ctor_get(v_a_895_, 0);
v_fst_897_ = lean_ctor_get(v_snd_882_, 0);
v_snd_898_ = lean_ctor_get(v_snd_882_, 1);
v_isSharedCheck_1040_ = !lean_is_exclusive(v_snd_882_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_900_ = v_snd_882_;
v_isShared_901_ = v_isSharedCheck_1040_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_snd_898_);
lean_inc(v_fst_897_);
lean_dec(v_snd_882_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_1040_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_906_; uint8_t v_a_908_; uint8_t v_fst_914_; lean_object* v_mctx_915_; lean_object* v___y_931_; uint8_t v_fst_937_; lean_object* v_snd_938_; lean_object* v___y_955_; uint8_t v_fst_960_; lean_object* v_mctx_961_; lean_object* v___y_977_; uint8_t v___x_982_; 
v___x_906_ = l_Lean_LocalDecl_fvarId(v_val_896_);
v___x_982_ = l_Lean_FVarIdSet_contains(v_forbidden_869_, v___x_906_);
if (v___x_982_ == 0)
{
lean_object* v___f_983_; lean_object* v___y_985_; lean_object* v___y_986_; uint8_t v_fst_987_; lean_object* v_snd_988_; lean_object* v___y_994_; lean_object* v___y_995_; lean_object* v___y_996_; uint8_t v___y_1001_; uint8_t v___y_1034_; uint8_t v___x_1036_; 
lean_inc(v_fst_897_);
v___f_983_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_983_, 0, v_fst_897_);
v___x_1036_ = l_Lean_LocalDecl_isAuxDecl(v_val_896_);
if (v___x_1036_ == 0)
{
uint8_t v___x_1037_; uint8_t v___x_1038_; 
v___x_1037_ = l_Lean_LocalDecl_binderInfo(v_val_896_);
v___x_1038_ = l_Lean_BinderInfo_isInstImplicit(v___x_1037_);
v___y_1034_ = v___x_1038_;
goto v___jp_1033_;
}
else
{
v___y_1034_ = v___x_1036_;
goto v___jp_1033_;
}
v___jp_984_:
{
if (v_fst_987_ == 0)
{
uint8_t v___x_989_; 
v___x_989_ = l_Lean_Expr_hasFVar(v___y_986_);
if (v___x_989_ == 0)
{
uint8_t v___x_990_; 
v___x_990_ = l_Lean_Expr_hasMVar(v___y_986_);
if (v___x_990_ == 0)
{
lean_dec_ref(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec_ref(v___f_983_);
v_fst_937_ = v___x_990_;
v_snd_938_ = v_snd_988_;
goto v___jp_936_;
}
else
{
lean_object* v___x_991_; 
v___x_991_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_983_, v___y_985_, v___y_986_, v_snd_988_);
v___y_955_ = v___x_991_;
goto v___jp_954_;
}
}
else
{
lean_object* v___x_992_; 
v___x_992_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_983_, v___y_985_, v___y_986_, v_snd_988_);
v___y_955_ = v___x_992_;
goto v___jp_954_;
}
}
else
{
lean_dec_ref(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec_ref(v___f_983_);
v_fst_937_ = v_fst_987_;
v_snd_938_ = v_snd_988_;
goto v___jp_936_;
}
}
v___jp_993_:
{
lean_object* v_fst_997_; lean_object* v_snd_998_; uint8_t v___x_999_; 
v_fst_997_ = lean_ctor_get(v___y_996_, 0);
lean_inc(v_fst_997_);
v_snd_998_ = lean_ctor_get(v___y_996_, 1);
lean_inc(v_snd_998_);
lean_dec_ref(v___y_996_);
v___x_999_ = lean_unbox(v_fst_997_);
lean_dec(v_fst_997_);
v___y_985_ = v___y_994_;
v___y_986_ = v___y_995_;
v_fst_987_ = v___x_999_;
v_snd_988_ = v_snd_998_;
goto v___jp_984_;
}
v___jp_1000_:
{
if (v___y_1001_ == 0)
{
lean_object* v___x_1002_; lean_object* v___f_1003_; 
lean_del_object(v___x_900_);
v___x_1002_ = lean_box(v___y_1001_);
v___f_1003_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1003_, 0, v___x_1002_);
if (lean_obj_tag(v_val_896_) == 0)
{
lean_object* v_type_1004_; lean_object* v___x_1005_; lean_object* v_mctx_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; uint8_t v___x_1009_; 
v_type_1004_ = lean_ctor_get(v_val_896_, 3);
v___x_1005_ = lean_st_ref_get(v___y_876_);
v_mctx_1006_ = lean_ctor_get(v___x_1005_, 0);
lean_inc_ref_n(v_mctx_1006_, 2);
lean_dec(v___x_1005_);
v___x_1007_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_1008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
lean_ctor_set(v___x_1008_, 1, v_mctx_1006_);
v___x_1009_ = l_Lean_Expr_hasFVar(v_type_1004_);
if (v___x_1009_ == 0)
{
uint8_t v___x_1010_; 
v___x_1010_ = l_Lean_Expr_hasMVar(v_type_1004_);
if (v___x_1010_ == 0)
{
lean_dec_ref_known(v___x_1008_, 2);
lean_dec_ref(v___f_1003_);
lean_dec_ref(v___f_983_);
v_fst_960_ = v___x_1010_;
v_mctx_961_ = v_mctx_1006_;
goto v___jp_959_;
}
else
{
lean_object* v___x_1011_; 
lean_dec_ref(v_mctx_1006_);
lean_inc_ref(v_type_1004_);
v___x_1011_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_983_, v___f_1003_, v_type_1004_, v___x_1008_);
v___y_977_ = v___x_1011_;
goto v___jp_976_;
}
}
else
{
lean_object* v___x_1012_; 
lean_dec_ref(v_mctx_1006_);
lean_inc_ref(v_type_1004_);
v___x_1012_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_983_, v___f_1003_, v_type_1004_, v___x_1008_);
v___y_977_ = v___x_1012_;
goto v___jp_976_;
}
}
else
{
uint8_t v_nondep_1013_; 
v_nondep_1013_ = lean_ctor_get_uint8(v_val_896_, sizeof(void*)*5);
if (v_nondep_1013_ == 0)
{
lean_object* v_type_1014_; lean_object* v_value_1015_; lean_object* v___x_1016_; lean_object* v_mctx_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; uint8_t v___x_1020_; 
v_type_1014_ = lean_ctor_get(v_val_896_, 3);
v_value_1015_ = lean_ctor_get(v_val_896_, 4);
v___x_1016_ = lean_st_ref_get(v___y_876_);
v_mctx_1017_ = lean_ctor_get(v___x_1016_, 0);
lean_inc_ref(v_mctx_1017_);
lean_dec(v___x_1016_);
v___x_1018_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_1019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1018_);
lean_ctor_set(v___x_1019_, 1, v_mctx_1017_);
v___x_1020_ = l_Lean_Expr_hasFVar(v_type_1014_);
if (v___x_1020_ == 0)
{
uint8_t v___x_1021_; 
v___x_1021_ = l_Lean_Expr_hasMVar(v_type_1014_);
if (v___x_1021_ == 0)
{
lean_inc_ref(v_value_1015_);
v___y_985_ = v___f_1003_;
v___y_986_ = v_value_1015_;
v_fst_987_ = v___x_1021_;
v_snd_988_ = v___x_1019_;
goto v___jp_984_;
}
else
{
lean_object* v___x_1022_; 
lean_inc_ref(v_type_1014_);
lean_inc_ref(v___f_1003_);
lean_inc_ref(v___f_983_);
v___x_1022_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_983_, v___f_1003_, v_type_1014_, v___x_1019_);
lean_inc_ref(v_value_1015_);
v___y_994_ = v___f_1003_;
v___y_995_ = v_value_1015_;
v___y_996_ = v___x_1022_;
goto v___jp_993_;
}
}
else
{
lean_object* v___x_1023_; 
lean_inc_ref(v_type_1014_);
lean_inc_ref(v___f_1003_);
lean_inc_ref(v___f_983_);
v___x_1023_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_983_, v___f_1003_, v_type_1014_, v___x_1019_);
lean_inc_ref(v_value_1015_);
v___y_994_ = v___f_1003_;
v___y_995_ = v_value_1015_;
v___y_996_ = v___x_1023_;
goto v___jp_993_;
}
}
else
{
lean_object* v_type_1024_; lean_object* v___x_1025_; lean_object* v_mctx_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; uint8_t v___x_1029_; 
v_type_1024_ = lean_ctor_get(v_val_896_, 3);
v___x_1025_ = lean_st_ref_get(v___y_876_);
v_mctx_1026_ = lean_ctor_get(v___x_1025_, 0);
lean_inc_ref_n(v_mctx_1026_, 2);
lean_dec(v___x_1025_);
v___x_1027_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_1028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1027_);
lean_ctor_set(v___x_1028_, 1, v_mctx_1026_);
v___x_1029_ = l_Lean_Expr_hasFVar(v_type_1024_);
if (v___x_1029_ == 0)
{
uint8_t v___x_1030_; 
v___x_1030_ = l_Lean_Expr_hasMVar(v_type_1024_);
if (v___x_1030_ == 0)
{
lean_dec_ref_known(v___x_1028_, 2);
lean_dec_ref(v___f_1003_);
lean_dec_ref(v___f_983_);
v_fst_914_ = v___x_1030_;
v_mctx_915_ = v_mctx_1026_;
goto v___jp_913_;
}
else
{
lean_object* v___x_1031_; 
lean_dec_ref(v_mctx_1026_);
lean_inc_ref(v_type_1024_);
v___x_1031_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_983_, v___f_1003_, v_type_1024_, v___x_1028_);
v___y_931_ = v___x_1031_;
goto v___jp_930_;
}
}
else
{
lean_object* v___x_1032_; 
lean_dec_ref(v_mctx_1026_);
lean_inc_ref(v_type_1024_);
v___x_1032_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_983_, v___f_1003_, v_type_1024_, v___x_1028_);
v___y_931_ = v___x_1032_;
goto v___jp_930_;
}
}
}
}
else
{
lean_dec_ref(v___f_983_);
lean_dec(v___x_906_);
goto v___jp_902_;
}
}
v___jp_1033_:
{
if (v___y_1034_ == 0)
{
if (v_ignoreLetDecls_870_ == 0)
{
v___y_1001_ = v___x_982_;
goto v___jp_1000_;
}
else
{
uint8_t v___x_1035_; 
v___x_1035_ = l_Lean_LocalDecl_isLet(v_val_896_, v___x_982_);
v___y_1001_ = v___x_1035_;
goto v___jp_1000_;
}
}
else
{
lean_dec_ref(v___f_983_);
lean_dec(v___x_906_);
goto v___jp_902_;
}
}
}
else
{
lean_object* v___x_1039_; 
lean_dec(v___x_906_);
lean_del_object(v___x_900_);
v___x_1039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1039_, 0, v_fst_897_);
lean_ctor_set(v___x_1039_, 1, v_snd_898_);
v_a_888_ = v___x_1039_;
goto v___jp_887_;
}
v___jp_902_:
{
lean_object* v___x_904_; 
if (v_isShared_901_ == 0)
{
v___x_904_ = v___x_900_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_fst_897_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v_snd_898_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
v_a_888_ = v___x_904_;
goto v___jp_887_;
}
}
v___jp_907_:
{
if (v_a_908_ == 0)
{
lean_object* v___x_909_; 
lean_dec(v___x_906_);
v___x_909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_909_, 0, v_fst_897_);
lean_ctor_set(v___x_909_, 1, v_snd_898_);
v_a_888_ = v___x_909_;
goto v___jp_887_;
}
else
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
lean_inc(v___x_906_);
v___x_910_ = l_Lean_FVarIdSet_insert(v_snd_898_, v___x_906_);
v___x_911_ = l_Lean_FVarIdSet_insert(v_fst_897_, v___x_906_);
v___x_912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_911_);
lean_ctor_set(v___x_912_, 1, v___x_910_);
v_a_888_ = v___x_912_;
goto v___jp_887_;
}
}
v___jp_913_:
{
lean_object* v___x_916_; lean_object* v_cache_917_; lean_object* v_zetaDeltaFVarIds_918_; lean_object* v_postponed_919_; lean_object* v_diag_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_928_; 
v___x_916_ = lean_st_ref_take(v___y_876_);
v_cache_917_ = lean_ctor_get(v___x_916_, 1);
v_zetaDeltaFVarIds_918_ = lean_ctor_get(v___x_916_, 2);
v_postponed_919_ = lean_ctor_get(v___x_916_, 3);
v_diag_920_ = lean_ctor_get(v___x_916_, 4);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_928_ == 0)
{
lean_object* v_unused_929_; 
v_unused_929_ = lean_ctor_get(v___x_916_, 0);
lean_dec(v_unused_929_);
v___x_922_ = v___x_916_;
v_isShared_923_ = v_isSharedCheck_928_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_diag_920_);
lean_inc(v_postponed_919_);
lean_inc(v_zetaDeltaFVarIds_918_);
lean_inc(v_cache_917_);
lean_dec(v___x_916_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_928_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
if (v_isShared_923_ == 0)
{
lean_ctor_set(v___x_922_, 0, v_mctx_915_);
v___x_925_ = v___x_922_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_mctx_915_);
lean_ctor_set(v_reuseFailAlloc_927_, 1, v_cache_917_);
lean_ctor_set(v_reuseFailAlloc_927_, 2, v_zetaDeltaFVarIds_918_);
lean_ctor_set(v_reuseFailAlloc_927_, 3, v_postponed_919_);
lean_ctor_set(v_reuseFailAlloc_927_, 4, v_diag_920_);
v___x_925_ = v_reuseFailAlloc_927_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
lean_object* v___x_926_; 
v___x_926_ = lean_st_ref_put(v___y_876_, v___x_925_);
v_a_908_ = v_fst_914_;
goto v___jp_907_;
}
}
}
v___jp_930_:
{
lean_object* v_snd_932_; lean_object* v_fst_933_; lean_object* v_mctx_934_; uint8_t v___x_935_; 
v_snd_932_ = lean_ctor_get(v___y_931_, 1);
lean_inc(v_snd_932_);
v_fst_933_ = lean_ctor_get(v___y_931_, 0);
lean_inc(v_fst_933_);
lean_dec_ref(v___y_931_);
v_mctx_934_ = lean_ctor_get(v_snd_932_, 1);
lean_inc_ref(v_mctx_934_);
lean_dec(v_snd_932_);
v___x_935_ = lean_unbox(v_fst_933_);
lean_dec(v_fst_933_);
v_fst_914_ = v___x_935_;
v_mctx_915_ = v_mctx_934_;
goto v___jp_913_;
}
v___jp_936_:
{
lean_object* v_mctx_939_; lean_object* v___x_940_; lean_object* v_cache_941_; lean_object* v_zetaDeltaFVarIds_942_; lean_object* v_postponed_943_; lean_object* v_diag_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_952_; 
v_mctx_939_ = lean_ctor_get(v_snd_938_, 1);
lean_inc_ref(v_mctx_939_);
lean_dec_ref(v_snd_938_);
v___x_940_ = lean_st_ref_take(v___y_876_);
v_cache_941_ = lean_ctor_get(v___x_940_, 1);
v_zetaDeltaFVarIds_942_ = lean_ctor_get(v___x_940_, 2);
v_postponed_943_ = lean_ctor_get(v___x_940_, 3);
v_diag_944_ = lean_ctor_get(v___x_940_, 4);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_952_ == 0)
{
lean_object* v_unused_953_; 
v_unused_953_ = lean_ctor_get(v___x_940_, 0);
lean_dec(v_unused_953_);
v___x_946_ = v___x_940_;
v_isShared_947_ = v_isSharedCheck_952_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_diag_944_);
lean_inc(v_postponed_943_);
lean_inc(v_zetaDeltaFVarIds_942_);
lean_inc(v_cache_941_);
lean_dec(v___x_940_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_952_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 0, v_mctx_939_);
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_mctx_939_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v_cache_941_);
lean_ctor_set(v_reuseFailAlloc_951_, 2, v_zetaDeltaFVarIds_942_);
lean_ctor_set(v_reuseFailAlloc_951_, 3, v_postponed_943_);
lean_ctor_set(v_reuseFailAlloc_951_, 4, v_diag_944_);
v___x_949_ = v_reuseFailAlloc_951_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
lean_object* v___x_950_; 
v___x_950_ = lean_st_ref_put(v___y_876_, v___x_949_);
v_a_908_ = v_fst_937_;
goto v___jp_907_;
}
}
}
v___jp_954_:
{
lean_object* v_fst_956_; lean_object* v_snd_957_; uint8_t v___x_958_; 
v_fst_956_ = lean_ctor_get(v___y_955_, 0);
lean_inc(v_fst_956_);
v_snd_957_ = lean_ctor_get(v___y_955_, 1);
lean_inc(v_snd_957_);
lean_dec_ref(v___y_955_);
v___x_958_ = lean_unbox(v_fst_956_);
lean_dec(v_fst_956_);
v_fst_937_ = v___x_958_;
v_snd_938_ = v_snd_957_;
goto v___jp_936_;
}
v___jp_959_:
{
lean_object* v___x_962_; lean_object* v_cache_963_; lean_object* v_zetaDeltaFVarIds_964_; lean_object* v_postponed_965_; lean_object* v_diag_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_974_; 
v___x_962_ = lean_st_ref_take(v___y_876_);
v_cache_963_ = lean_ctor_get(v___x_962_, 1);
v_zetaDeltaFVarIds_964_ = lean_ctor_get(v___x_962_, 2);
v_postponed_965_ = lean_ctor_get(v___x_962_, 3);
v_diag_966_ = lean_ctor_get(v___x_962_, 4);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_974_ == 0)
{
lean_object* v_unused_975_; 
v_unused_975_ = lean_ctor_get(v___x_962_, 0);
lean_dec(v_unused_975_);
v___x_968_ = v___x_962_;
v_isShared_969_ = v_isSharedCheck_974_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_diag_966_);
lean_inc(v_postponed_965_);
lean_inc(v_zetaDeltaFVarIds_964_);
lean_inc(v_cache_963_);
lean_dec(v___x_962_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_974_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 0, v_mctx_961_);
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_mctx_961_);
lean_ctor_set(v_reuseFailAlloc_973_, 1, v_cache_963_);
lean_ctor_set(v_reuseFailAlloc_973_, 2, v_zetaDeltaFVarIds_964_);
lean_ctor_set(v_reuseFailAlloc_973_, 3, v_postponed_965_);
lean_ctor_set(v_reuseFailAlloc_973_, 4, v_diag_966_);
v___x_971_ = v_reuseFailAlloc_973_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
lean_object* v___x_972_; 
v___x_972_ = lean_st_ref_put(v___y_876_, v___x_971_);
v_a_908_ = v_fst_960_;
goto v___jp_907_;
}
}
}
v___jp_976_:
{
lean_object* v_snd_978_; lean_object* v_fst_979_; lean_object* v_mctx_980_; uint8_t v___x_981_; 
v_snd_978_ = lean_ctor_get(v___y_977_, 1);
lean_inc(v_snd_978_);
v_fst_979_ = lean_ctor_get(v___y_977_, 0);
lean_inc(v_fst_979_);
lean_dec_ref(v___y_977_);
v_mctx_980_ = lean_ctor_get(v_snd_978_, 1);
lean_inc_ref(v_mctx_980_);
lean_dec(v_snd_978_);
v___x_981_ = lean_unbox(v_fst_979_);
lean_dec(v_fst_979_);
v_fst_960_ = v___x_981_;
v_mctx_961_ = v_mctx_980_;
goto v___jp_959_;
}
}
}
v___jp_887_:
{
lean_object* v___x_890_; 
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 1, v_a_888_);
lean_ctor_set(v___x_884_, 0, v___x_886_);
v___x_890_ = v___x_884_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v___x_886_);
lean_ctor_set(v_reuseFailAlloc_894_, 1, v_a_888_);
v___x_890_ = v_reuseFailAlloc_894_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
size_t v___x_891_; size_t v___x_892_; lean_object* v___x_893_; 
v___x_891_ = ((size_t)1ULL);
v___x_892_ = lean_usize_add(v_i_873_, v___x_891_);
v___x_893_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(v_forbidden_869_, v_ignoreLetDecls_870_, v_as_871_, v_sz_872_, v___x_892_, v___x_890_, v___y_876_);
return v___x_893_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2___boxed(lean_object* v_forbidden_1043_, lean_object* v_ignoreLetDecls_1044_, lean_object* v_as_1045_, lean_object* v_sz_1046_, lean_object* v_i_1047_, lean_object* v_b_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1054_; size_t v_sz_boxed_1055_; size_t v_i_boxed_1056_; lean_object* v_res_1057_; 
v_ignoreLetDecls_boxed_1054_ = lean_unbox(v_ignoreLetDecls_1044_);
v_sz_boxed_1055_ = lean_unbox_usize(v_sz_1046_);
lean_dec(v_sz_1046_);
v_i_boxed_1056_ = lean_unbox_usize(v_i_1047_);
lean_dec(v_i_1047_);
v_res_1057_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(v_forbidden_1043_, v_ignoreLetDecls_boxed_1054_, v_as_1045_, v_sz_boxed_1055_, v_i_boxed_1056_, v_b_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
lean_dec_ref(v_as_1045_);
lean_dec(v_forbidden_1043_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(lean_object* v_init_1058_, lean_object* v_forbidden_1059_, uint8_t v_ignoreLetDecls_1060_, lean_object* v_n_1061_, lean_object* v_b_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
if (lean_obj_tag(v_n_1061_) == 0)
{
lean_object* v_cs_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; size_t v_sz_1071_; size_t v___x_1072_; lean_object* v___x_1073_; 
v_cs_1068_ = lean_ctor_get(v_n_1061_, 0);
v___x_1069_ = lean_box(0);
v___x_1070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1069_);
lean_ctor_set(v___x_1070_, 1, v_b_1062_);
v_sz_1071_ = lean_array_size(v_cs_1068_);
v___x_1072_ = ((size_t)0ULL);
v___x_1073_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(v_init_1058_, v_forbidden_1059_, v_ignoreLetDecls_1060_, v_cs_1068_, v_sz_1071_, v___x_1072_, v___x_1070_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1088_; 
v_a_1074_ = lean_ctor_get(v___x_1073_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1073_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1076_ = v___x_1073_;
v_isShared_1077_ = v_isSharedCheck_1088_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_a_1074_);
lean_dec(v___x_1073_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1088_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v_fst_1078_; 
v_fst_1078_ = lean_ctor_get(v_a_1074_, 0);
if (lean_obj_tag(v_fst_1078_) == 0)
{
lean_object* v_snd_1079_; lean_object* v___x_1080_; lean_object* v___x_1082_; 
v_snd_1079_ = lean_ctor_get(v_a_1074_, 1);
lean_inc(v_snd_1079_);
lean_dec(v_a_1074_);
v___x_1080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1080_, 0, v_snd_1079_);
if (v_isShared_1077_ == 0)
{
lean_ctor_set(v___x_1076_, 0, v___x_1080_);
v___x_1082_ = v___x_1076_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v___x_1080_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
else
{
lean_object* v_val_1084_; lean_object* v___x_1086_; 
lean_inc_ref(v_fst_1078_);
lean_dec(v_a_1074_);
v_val_1084_ = lean_ctor_get(v_fst_1078_, 0);
lean_inc(v_val_1084_);
lean_dec_ref_known(v_fst_1078_, 1);
if (v_isShared_1077_ == 0)
{
lean_ctor_set(v___x_1076_, 0, v_val_1084_);
v___x_1086_ = v___x_1076_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v_val_1084_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
}
else
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
v_a_1089_ = lean_ctor_get(v___x_1073_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1073_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_1073_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1073_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
if (v_isShared_1092_ == 0)
{
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1089_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
else
{
lean_object* v_vs_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; size_t v_sz_1100_; size_t v___x_1101_; lean_object* v___x_1102_; 
v_vs_1097_ = lean_ctor_get(v_n_1061_, 0);
v___x_1098_ = lean_box(0);
v___x_1099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1098_);
lean_ctor_set(v___x_1099_, 1, v_b_1062_);
v_sz_1100_ = lean_array_size(v_vs_1097_);
v___x_1101_ = ((size_t)0ULL);
v___x_1102_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(v_forbidden_1059_, v_ignoreLetDecls_1060_, v_vs_1097_, v_sz_1100_, v___x_1101_, v___x_1099_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1117_; 
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1105_ = v___x_1102_;
v_isShared_1106_ = v_isSharedCheck_1117_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1102_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1117_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v_fst_1107_; 
v_fst_1107_ = lean_ctor_get(v_a_1103_, 0);
if (lean_obj_tag(v_fst_1107_) == 0)
{
lean_object* v_snd_1108_; lean_object* v___x_1109_; lean_object* v___x_1111_; 
v_snd_1108_ = lean_ctor_get(v_a_1103_, 1);
lean_inc(v_snd_1108_);
lean_dec(v_a_1103_);
v___x_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1109_, 0, v_snd_1108_);
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 0, v___x_1109_);
v___x_1111_ = v___x_1105_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v___x_1109_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
else
{
lean_object* v_val_1113_; lean_object* v___x_1115_; 
lean_inc_ref(v_fst_1107_);
lean_dec(v_a_1103_);
v_val_1113_ = lean_ctor_get(v_fst_1107_, 0);
lean_inc(v_val_1113_);
lean_dec_ref_known(v_fst_1107_, 1);
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 0, v_val_1113_);
v___x_1115_ = v___x_1105_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_val_1113_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
else
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1125_; 
v_a_1118_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1120_ = v___x_1102_;
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1102_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1123_; 
if (v_isShared_1121_ == 0)
{
v___x_1123_ = v___x_1120_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_a_1118_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(lean_object* v_init_1126_, lean_object* v_forbidden_1127_, uint8_t v_ignoreLetDecls_1128_, lean_object* v_as_1129_, size_t v_sz_1130_, size_t v_i_1131_, lean_object* v_b_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
uint8_t v___x_1138_; 
v___x_1138_ = lean_usize_dec_lt(v_i_1131_, v_sz_1130_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; 
v___x_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1139_, 0, v_b_1132_);
return v___x_1139_;
}
else
{
lean_object* v_snd_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1174_; 
v_snd_1140_ = lean_ctor_get(v_b_1132_, 1);
v_isSharedCheck_1174_ = !lean_is_exclusive(v_b_1132_);
if (v_isSharedCheck_1174_ == 0)
{
lean_object* v_unused_1175_; 
v_unused_1175_ = lean_ctor_get(v_b_1132_, 0);
lean_dec(v_unused_1175_);
v___x_1142_ = v_b_1132_;
v_isShared_1143_ = v_isSharedCheck_1174_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_snd_1140_);
lean_dec(v_b_1132_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1174_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1144_; lean_object* v_a_1145_; lean_object* v___x_1146_; 
v___x_1144_ = lean_box(0);
v_a_1145_ = lean_array_uget_borrowed(v_as_1129_, v_i_1131_);
lean_inc(v_snd_1140_);
v___x_1146_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(v_init_1126_, v_forbidden_1127_, v_ignoreLetDecls_1128_, v_a_1145_, v_snd_1140_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1165_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1149_ = v___x_1146_;
v_isShared_1150_ = v_isSharedCheck_1165_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_a_1147_);
lean_dec(v___x_1146_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1165_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
if (lean_obj_tag(v_a_1147_) == 0)
{
lean_object* v___x_1151_; lean_object* v___x_1153_; 
v___x_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1151_, 0, v_a_1147_);
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 0, v___x_1151_);
v___x_1153_ = v___x_1142_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v___x_1151_);
lean_ctor_set(v_reuseFailAlloc_1157_, 1, v_snd_1140_);
v___x_1153_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
lean_object* v___x_1155_; 
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 0, v___x_1153_);
v___x_1155_ = v___x_1149_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v___x_1153_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
else
{
lean_object* v_a_1158_; lean_object* v___x_1160_; 
lean_del_object(v___x_1149_);
lean_dec(v_snd_1140_);
v_a_1158_ = lean_ctor_get(v_a_1147_, 0);
lean_inc(v_a_1158_);
lean_dec_ref_known(v_a_1147_, 1);
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 1, v_a_1158_);
lean_ctor_set(v___x_1142_, 0, v___x_1144_);
v___x_1160_ = v___x_1142_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v___x_1144_);
lean_ctor_set(v_reuseFailAlloc_1164_, 1, v_a_1158_);
v___x_1160_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
size_t v___x_1161_; size_t v___x_1162_; 
v___x_1161_ = ((size_t)1ULL);
v___x_1162_ = lean_usize_add(v_i_1131_, v___x_1161_);
v_i_1131_ = v___x_1162_;
v_b_1132_ = v___x_1160_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1166_; lean_object* v___x_1168_; uint8_t v_isShared_1169_; uint8_t v_isSharedCheck_1173_; 
lean_del_object(v___x_1142_);
lean_dec(v_snd_1140_);
v_a_1166_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1168_ = v___x_1146_;
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
else
{
lean_inc(v_a_1166_);
lean_dec(v___x_1146_);
v___x_1168_ = lean_box(0);
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
v_resetjp_1167_:
{
lean_object* v___x_1171_; 
if (v_isShared_1169_ == 0)
{
v___x_1171_ = v___x_1168_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_a_1166_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1___boxed(lean_object* v_init_1176_, lean_object* v_forbidden_1177_, lean_object* v_ignoreLetDecls_1178_, lean_object* v_as_1179_, lean_object* v_sz_1180_, lean_object* v_i_1181_, lean_object* v_b_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1188_; size_t v_sz_boxed_1189_; size_t v_i_boxed_1190_; lean_object* v_res_1191_; 
v_ignoreLetDecls_boxed_1188_ = lean_unbox(v_ignoreLetDecls_1178_);
v_sz_boxed_1189_ = lean_unbox_usize(v_sz_1180_);
lean_dec(v_sz_1180_);
v_i_boxed_1190_ = lean_unbox_usize(v_i_1181_);
lean_dec(v_i_1181_);
v_res_1191_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(v_init_1176_, v_forbidden_1177_, v_ignoreLetDecls_boxed_1188_, v_as_1179_, v_sz_boxed_1189_, v_i_boxed_1190_, v_b_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
lean_dec_ref(v_as_1179_);
lean_dec(v_forbidden_1177_);
lean_dec_ref(v_init_1176_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0___boxed(lean_object* v_init_1192_, lean_object* v_forbidden_1193_, lean_object* v_ignoreLetDecls_1194_, lean_object* v_n_1195_, lean_object* v_b_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1202_; lean_object* v_res_1203_; 
v_ignoreLetDecls_boxed_1202_ = lean_unbox(v_ignoreLetDecls_1194_);
v_res_1203_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(v_init_1192_, v_forbidden_1193_, v_ignoreLetDecls_boxed_1202_, v_n_1195_, v_b_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
lean_dec(v___y_1198_);
lean_dec_ref(v___y_1197_);
lean_dec_ref(v_n_1195_);
lean_dec(v_forbidden_1193_);
lean_dec_ref(v_init_1192_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(lean_object* v_forbidden_1204_, uint8_t v_ignoreLetDecls_1205_, lean_object* v_t_1206_, lean_object* v_init_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
lean_object* v_root_1213_; lean_object* v_tail_1214_; lean_object* v___x_1215_; 
v_root_1213_ = lean_ctor_get(v_t_1206_, 0);
v_tail_1214_ = lean_ctor_get(v_t_1206_, 1);
lean_inc_ref(v_init_1207_);
v___x_1215_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(v_init_1207_, v_forbidden_1204_, v_ignoreLetDecls_1205_, v_root_1213_, v_init_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
lean_dec_ref(v_init_1207_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v_a_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1252_; 
v_a_1216_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1218_ = v___x_1215_;
v_isShared_1219_ = v_isSharedCheck_1252_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_a_1216_);
lean_dec(v___x_1215_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1252_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
if (lean_obj_tag(v_a_1216_) == 0)
{
lean_object* v_a_1220_; lean_object* v___x_1222_; 
v_a_1220_ = lean_ctor_get(v_a_1216_, 0);
lean_inc(v_a_1220_);
lean_dec_ref_known(v_a_1216_, 1);
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 0, v_a_1220_);
v___x_1222_ = v___x_1218_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1220_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
else
{
lean_object* v_a_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; size_t v_sz_1227_; size_t v___x_1228_; lean_object* v___x_1229_; 
lean_del_object(v___x_1218_);
v_a_1224_ = lean_ctor_get(v_a_1216_, 0);
lean_inc(v_a_1224_);
lean_dec_ref_known(v_a_1216_, 1);
v___x_1225_ = lean_box(0);
v___x_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1225_);
lean_ctor_set(v___x_1226_, 1, v_a_1224_);
v_sz_1227_ = lean_array_size(v_tail_1214_);
v___x_1228_ = ((size_t)0ULL);
v___x_1229_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(v_forbidden_1204_, v_ignoreLetDecls_1205_, v_tail_1214_, v_sz_1227_, v___x_1228_, v___x_1226_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
if (lean_obj_tag(v___x_1229_) == 0)
{
lean_object* v_a_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1243_; 
v_a_1230_ = lean_ctor_get(v___x_1229_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1229_);
if (v_isSharedCheck_1243_ == 0)
{
v___x_1232_ = v___x_1229_;
v_isShared_1233_ = v_isSharedCheck_1243_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_a_1230_);
lean_dec(v___x_1229_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1243_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v_fst_1234_; 
v_fst_1234_ = lean_ctor_get(v_a_1230_, 0);
if (lean_obj_tag(v_fst_1234_) == 0)
{
lean_object* v_snd_1235_; lean_object* v___x_1237_; 
v_snd_1235_ = lean_ctor_get(v_a_1230_, 1);
lean_inc(v_snd_1235_);
lean_dec(v_a_1230_);
if (v_isShared_1233_ == 0)
{
lean_ctor_set(v___x_1232_, 0, v_snd_1235_);
v___x_1237_ = v___x_1232_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_snd_1235_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
else
{
lean_object* v_val_1239_; lean_object* v___x_1241_; 
lean_inc_ref(v_fst_1234_);
lean_dec(v_a_1230_);
v_val_1239_ = lean_ctor_get(v_fst_1234_, 0);
lean_inc(v_val_1239_);
lean_dec_ref_known(v_fst_1234_, 1);
if (v_isShared_1233_ == 0)
{
lean_ctor_set(v___x_1232_, 0, v_val_1239_);
v___x_1241_ = v___x_1232_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v_val_1239_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
return v___x_1241_;
}
}
}
}
else
{
lean_object* v_a_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1251_; 
v_a_1244_ = lean_ctor_get(v___x_1229_, 0);
v_isSharedCheck_1251_ = !lean_is_exclusive(v___x_1229_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1246_ = v___x_1229_;
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_a_1244_);
lean_dec(v___x_1229_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v___x_1249_; 
if (v_isShared_1247_ == 0)
{
v___x_1249_ = v___x_1246_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v_a_1244_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
}
}
}
else
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1260_; 
v_a_1253_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1255_ = v___x_1215_;
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v___x_1215_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1258_; 
if (v_isShared_1256_ == 0)
{
v___x_1258_ = v___x_1255_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_a_1253_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0___boxed(lean_object* v_forbidden_1261_, lean_object* v_ignoreLetDecls_1262_, lean_object* v_t_1263_, lean_object* v_init_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1270_; lean_object* v_res_1271_; 
v_ignoreLetDecls_boxed_1270_ = lean_unbox(v_ignoreLetDecls_1262_);
v_res_1271_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(v_forbidden_1261_, v_ignoreLetDecls_boxed_1270_, v_t_1263_, v_init_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_);
lean_dec(v___y_1268_);
lean_dec_ref(v___y_1267_);
lean_dec(v___y_1266_);
lean_dec_ref(v___y_1265_);
lean_dec_ref(v_t_1263_);
lean_dec(v_forbidden_1261_);
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(lean_object* v_as_1272_, size_t v_i_1273_, size_t v_stop_1274_, lean_object* v_b_1275_){
_start:
{
lean_object* v___y_1277_; uint8_t v___x_1281_; 
v___x_1281_ = lean_usize_dec_eq(v_i_1273_, v_stop_1274_);
if (v___x_1281_ == 0)
{
lean_object* v___x_1282_; uint8_t v___x_1283_; 
v___x_1282_ = lean_array_uget_borrowed(v_as_1272_, v_i_1273_);
v___x_1283_ = l_Lean_Expr_isFVar(v___x_1282_);
if (v___x_1283_ == 0)
{
v___y_1277_ = v_b_1275_;
goto v___jp_1276_;
}
else
{
lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1284_ = l_Lean_Expr_fvarId_x21(v___x_1282_);
v___x_1285_ = l_Lean_FVarIdSet_insert(v_b_1275_, v___x_1284_);
v___y_1277_ = v___x_1285_;
goto v___jp_1276_;
}
}
else
{
return v_b_1275_;
}
v___jp_1276_:
{
size_t v___x_1278_; size_t v___x_1279_; 
v___x_1278_ = ((size_t)1ULL);
v___x_1279_ = lean_usize_add(v_i_1273_, v___x_1278_);
v_i_1273_ = v___x_1279_;
v_b_1275_ = v___y_1277_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1___boxed(lean_object* v_as_1286_, lean_object* v_i_1287_, lean_object* v_stop_1288_, lean_object* v_b_1289_){
_start:
{
size_t v_i_boxed_1290_; size_t v_stop_boxed_1291_; lean_object* v_res_1292_; 
v_i_boxed_1290_ = lean_unbox_usize(v_i_1287_);
lean_dec(v_i_1287_);
v_stop_boxed_1291_ = lean_unbox_usize(v_stop_1288_);
lean_dec(v_stop_1288_);
v_res_1292_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(v_as_1286_, v_i_boxed_1290_, v_stop_boxed_1291_, v_b_1289_);
lean_dec_ref(v_as_1286_);
return v_res_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize(lean_object* v_targets_1293_, lean_object* v_forbidden_1294_, uint8_t v_ignoreLetDecls_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_){
_start:
{
lean_object* v_r_1301_; lean_object* v___y_1303_; lean_object* v___x_1325_; lean_object* v___x_1326_; uint8_t v___x_1327_; 
v_r_1301_ = lean_box(1);
v___x_1325_ = lean_unsigned_to_nat(0u);
v___x_1326_ = lean_array_get_size(v_targets_1293_);
v___x_1327_ = lean_nat_dec_lt(v___x_1325_, v___x_1326_);
if (v___x_1327_ == 0)
{
v___y_1303_ = v_r_1301_;
goto v___jp_1302_;
}
else
{
uint8_t v___x_1328_; 
v___x_1328_ = lean_nat_dec_le(v___x_1326_, v___x_1326_);
if (v___x_1328_ == 0)
{
if (v___x_1327_ == 0)
{
v___y_1303_ = v_r_1301_;
goto v___jp_1302_;
}
else
{
size_t v___x_1329_; size_t v___x_1330_; lean_object* v___x_1331_; 
v___x_1329_ = ((size_t)0ULL);
v___x_1330_ = lean_usize_of_nat(v___x_1326_);
v___x_1331_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(v_targets_1293_, v___x_1329_, v___x_1330_, v_r_1301_);
v___y_1303_ = v___x_1331_;
goto v___jp_1302_;
}
}
else
{
size_t v___x_1332_; size_t v___x_1333_; lean_object* v___x_1334_; 
v___x_1332_ = ((size_t)0ULL);
v___x_1333_ = lean_usize_of_nat(v___x_1326_);
v___x_1334_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(v_targets_1293_, v___x_1332_, v___x_1333_, v_r_1301_);
v___y_1303_ = v___x_1334_;
goto v___jp_1302_;
}
}
v___jp_1302_:
{
lean_object* v_lctx_1304_; lean_object* v_decls_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v_lctx_1304_ = lean_ctor_get(v___y_1296_, 2);
v_decls_1305_ = lean_ctor_get(v_lctx_1304_, 1);
v___x_1306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___y_1303_);
lean_ctor_set(v___x_1306_, 1, v_r_1301_);
v___x_1307_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(v_forbidden_1294_, v_ignoreLetDecls_1295_, v_decls_1305_, v___x_1306_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_);
if (lean_obj_tag(v___x_1307_) == 0)
{
lean_object* v_a_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1316_; 
v_a_1308_ = lean_ctor_get(v___x_1307_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1310_ = v___x_1307_;
v_isShared_1311_ = v_isSharedCheck_1316_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_a_1308_);
lean_dec(v___x_1307_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1316_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
lean_object* v_snd_1312_; lean_object* v___x_1314_; 
v_snd_1312_ = lean_ctor_get(v_a_1308_, 1);
lean_inc(v_snd_1312_);
lean_dec(v_a_1308_);
if (v_isShared_1311_ == 0)
{
lean_ctor_set(v___x_1310_, 0, v_snd_1312_);
v___x_1314_ = v___x_1310_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_snd_1312_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
else
{
lean_object* v_a_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1324_; 
v_a_1317_ = lean_ctor_get(v___x_1307_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1319_ = v___x_1307_;
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_a_1317_);
lean_dec(v___x_1307_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1322_; 
if (v_isShared_1320_ == 0)
{
v___x_1322_ = v___x_1319_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_a_1317_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
return v___x_1322_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize___boxed(lean_object* v_targets_1335_, lean_object* v_forbidden_1336_, lean_object* v_ignoreLetDecls_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1343_; lean_object* v_res_1344_; 
v_ignoreLetDecls_boxed_1343_ = lean_unbox(v_ignoreLetDecls_1337_);
v_res_1344_ = l_Lean_Meta_getFVarSetToGeneralize(v_targets_1335_, v_forbidden_1336_, v_ignoreLetDecls_boxed_1343_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v_forbidden_1336_);
lean_dec_ref(v_targets_1335_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4(lean_object* v_forbidden_1345_, uint8_t v_ignoreLetDecls_1346_, lean_object* v_as_1347_, size_t v_sz_1348_, size_t v_i_1349_, lean_object* v_b_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_){
_start:
{
lean_object* v___x_1356_; 
v___x_1356_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(v_forbidden_1345_, v_ignoreLetDecls_1346_, v_as_1347_, v_sz_1348_, v_i_1349_, v_b_1350_, v___y_1352_);
return v___x_1356_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___boxed(lean_object* v_forbidden_1357_, lean_object* v_ignoreLetDecls_1358_, lean_object* v_as_1359_, lean_object* v_sz_1360_, lean_object* v_i_1361_, lean_object* v_b_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1368_; size_t v_sz_boxed_1369_; size_t v_i_boxed_1370_; lean_object* v_res_1371_; 
v_ignoreLetDecls_boxed_1368_ = lean_unbox(v_ignoreLetDecls_1358_);
v_sz_boxed_1369_ = lean_unbox_usize(v_sz_1360_);
lean_dec(v_sz_1360_);
v_i_boxed_1370_ = lean_unbox_usize(v_i_1361_);
lean_dec(v_i_1361_);
v_res_1371_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4(v_forbidden_1357_, v_ignoreLetDecls_boxed_1368_, v_as_1359_, v_sz_boxed_1369_, v_i_boxed_1370_, v_b_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
lean_dec(v___y_1364_);
lean_dec_ref(v___y_1363_);
lean_dec_ref(v_as_1359_);
lean_dec(v_forbidden_1357_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4(lean_object* v_forbidden_1372_, uint8_t v_ignoreLetDecls_1373_, lean_object* v_as_1374_, size_t v_sz_1375_, size_t v_i_1376_, lean_object* v_b_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v___x_1383_; 
v___x_1383_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(v_forbidden_1372_, v_ignoreLetDecls_1373_, v_as_1374_, v_sz_1375_, v_i_1376_, v_b_1377_, v___y_1379_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_forbidden_1384_, lean_object* v_ignoreLetDecls_1385_, lean_object* v_as_1386_, lean_object* v_sz_1387_, lean_object* v_i_1388_, lean_object* v_b_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1395_; size_t v_sz_boxed_1396_; size_t v_i_boxed_1397_; lean_object* v_res_1398_; 
v_ignoreLetDecls_boxed_1395_ = lean_unbox(v_ignoreLetDecls_1385_);
v_sz_boxed_1396_ = lean_unbox_usize(v_sz_1387_);
lean_dec(v_sz_1387_);
v_i_boxed_1397_ = lean_unbox_usize(v_i_1388_);
lean_dec(v_i_1388_);
v_res_1398_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4(v_forbidden_1384_, v_ignoreLetDecls_boxed_1395_, v_as_1386_, v_sz_boxed_1396_, v_i_boxed_1397_, v_b_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
lean_dec(v___y_1391_);
lean_dec_ref(v___y_1390_);
lean_dec_ref(v_as_1386_);
lean_dec(v_forbidden_1384_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize(lean_object* v_targets_1399_, lean_object* v_forbidden_1400_, uint8_t v_ignoreLetDecls_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
lean_object* v___x_1407_; 
v___x_1407_ = l_Lean_Meta_mkGeneralizationForbiddenSet(v_targets_1399_, v_forbidden_1400_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v_a_1408_; lean_object* v___x_1409_; 
v_a_1408_ = lean_ctor_get(v___x_1407_, 0);
lean_inc(v_a_1408_);
lean_dec_ref_known(v___x_1407_, 1);
v___x_1409_ = l_Lean_Meta_getFVarSetToGeneralize(v_targets_1399_, v_a_1408_, v_ignoreLetDecls_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_);
lean_dec(v_a_1408_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_object* v_a_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v_a_1410_ = lean_ctor_get(v___x_1409_, 0);
lean_inc(v_a_1410_);
lean_dec_ref_known(v___x_1409_, 1);
v___x_1411_ = l_Lean_FVarIdSet_toArray(v_a_1410_);
v___x_1412_ = l_Lean_Meta_sortFVarIds___redArg(v___x_1411_, v___y_1402_);
return v___x_1412_;
}
else
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1420_; 
v_a_1413_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1415_ = v___x_1409_;
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v___x_1409_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_a_1413_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
}
else
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
v_a_1421_ = lean_ctor_get(v___x_1407_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v___x_1407_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1407_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_a_1421_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize___boxed(lean_object* v_targets_1429_, lean_object* v_forbidden_1430_, lean_object* v_ignoreLetDecls_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1437_; lean_object* v_res_1438_; 
v_ignoreLetDecls_boxed_1437_ = lean_unbox(v_ignoreLetDecls_1431_);
v_res_1438_ = l_Lean_Meta_getFVarsToGeneralize(v_targets_1429_, v_forbidden_1430_, v_ignoreLetDecls_boxed_1437_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec(v___y_1433_);
lean_dec_ref(v___y_1432_);
lean_dec_ref(v_targets_1429_);
return v_res_1438_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_GeneralizeVars(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_GeneralizeVars(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_GeneralizeVars(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_GeneralizeVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_GeneralizeVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_GeneralizeVars(builtin);
}
#ifdef __cplusplus
}
#endif
