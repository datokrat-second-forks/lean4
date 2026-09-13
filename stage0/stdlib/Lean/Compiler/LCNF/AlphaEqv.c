// Lean compiler output
// Module: Lean.Compiler.LCNF.AlphaEqv
// Imports: public import Lean.Compiler.LCNF.Basic import Init.Omega
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
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Compiler_LCNF_instBEqLitValue_beq(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqCtorInfo_beq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_lt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvType___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvTypes_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvTypes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvTypes(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvTypes___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvArg___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvArg___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvArgs_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvArgs(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvArgs_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Compiler_LCNF_AlphaEqv_eqvLetValue_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Compiler_LCNF_AlphaEqv_eqvLetValue_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvLetValue(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_withFVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_withFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_withFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_withFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_withParams___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_withParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_withParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_withParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_sortAlts___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_sortAlts(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_sortAlts___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Compiler_LCNF_AlphaEqv_eqv_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Compiler_LCNF_AlphaEqv_eqv_spec__3___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvAlts(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqv(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__0___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvAlts___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__0(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Code_alphaEqv(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_alphaEqv___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(lean_object* v_fvarId_u2081_1_, lean_object* v_fvarId_u2082_2_, lean_object* v_a_3_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_a_3_, v_fvarId_u2082_2_);
if (lean_obj_tag(v___x_4_) == 0)
{
uint8_t v___x_5_; 
v___x_5_ = l_Lean_instBEqFVarId_beq(v_fvarId_u2081_1_, v_fvarId_u2082_2_);
return v___x_5_;
}
else
{
lean_object* v_val_6_; uint8_t v___x_7_; 
v_val_6_ = lean_ctor_get(v___x_4_, 0);
lean_inc(v_val_6_);
lean_dec_ref_known(v___x_4_, 1);
v___x_7_ = l_Lean_instBEqFVarId_beq(v_fvarId_u2081_1_, v_val_6_);
lean_dec(v_val_6_);
return v___x_7_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar___boxed(lean_object* v_fvarId_u2081_8_, lean_object* v_fvarId_u2082_9_, lean_object* v_a_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_u2081_8_, v_fvarId_u2082_9_, v_a_10_);
lean_dec(v_a_10_);
lean_dec(v_fvarId_u2082_9_);
lean_dec(v_fvarId_u2081_8_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvType(lean_object* v_e_u2081_13_, lean_object* v_e_u2082_14_, lean_object* v_a_15_){
_start:
{
switch(lean_obj_tag(v_e_u2081_13_))
{
case 5:
{
if (lean_obj_tag(v_e_u2082_14_) == 5)
{
lean_object* v_fn_16_; lean_object* v_arg_17_; lean_object* v_fn_18_; lean_object* v_arg_19_; uint8_t v___x_20_; 
v_fn_16_ = lean_ctor_get(v_e_u2081_13_, 0);
v_arg_17_ = lean_ctor_get(v_e_u2081_13_, 1);
v_fn_18_ = lean_ctor_get(v_e_u2082_14_, 0);
v_arg_19_ = lean_ctor_get(v_e_u2082_14_, 1);
v___x_20_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvType(v_arg_17_, v_arg_19_, v_a_15_);
if (v___x_20_ == 0)
{
return v___x_20_;
}
else
{
v_e_u2081_13_ = v_fn_16_;
v_e_u2082_14_ = v_fn_18_;
goto _start;
}
}
else
{
uint8_t v___x_22_; 
v___x_22_ = lean_expr_eqv(v_e_u2081_13_, v_e_u2082_14_);
return v___x_22_;
}
}
case 1:
{
if (lean_obj_tag(v_e_u2082_14_) == 1)
{
lean_object* v_fvarId_23_; lean_object* v_fvarId_24_; uint8_t v___x_25_; 
v_fvarId_23_ = lean_ctor_get(v_e_u2081_13_, 0);
v_fvarId_24_ = lean_ctor_get(v_e_u2082_14_, 0);
v___x_25_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_23_, v_fvarId_24_, v_a_15_);
return v___x_25_;
}
else
{
uint8_t v___x_26_; 
v___x_26_ = lean_expr_eqv(v_e_u2081_13_, v_e_u2082_14_);
return v___x_26_;
}
}
case 7:
{
if (lean_obj_tag(v_e_u2082_14_) == 7)
{
lean_object* v_binderType_27_; lean_object* v_body_28_; lean_object* v_binderType_29_; lean_object* v_body_30_; uint8_t v___x_31_; 
v_binderType_27_ = lean_ctor_get(v_e_u2081_13_, 1);
v_body_28_ = lean_ctor_get(v_e_u2081_13_, 2);
v_binderType_29_ = lean_ctor_get(v_e_u2082_14_, 1);
v_body_30_ = lean_ctor_get(v_e_u2082_14_, 2);
v___x_31_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvType(v_binderType_27_, v_binderType_29_, v_a_15_);
if (v___x_31_ == 0)
{
return v___x_31_;
}
else
{
v_e_u2081_13_ = v_body_28_;
v_e_u2082_14_ = v_body_30_;
goto _start;
}
}
else
{
uint8_t v___x_33_; 
v___x_33_ = lean_expr_eqv(v_e_u2081_13_, v_e_u2082_14_);
return v___x_33_;
}
}
default: 
{
uint8_t v___x_34_; 
v___x_34_ = lean_expr_eqv(v_e_u2081_13_, v_e_u2082_14_);
return v___x_34_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvType___boxed(lean_object* v_e_u2081_35_, lean_object* v_e_u2082_36_, lean_object* v_a_37_){
_start:
{
uint8_t v_res_38_; lean_object* v_r_39_; 
v_res_38_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvType(v_e_u2081_35_, v_e_u2082_36_, v_a_37_);
lean_dec(v_a_37_);
lean_dec_ref(v_e_u2082_36_);
lean_dec_ref(v_e_u2081_35_);
v_r_39_ = lean_box(v_res_38_);
return v_r_39_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvTypes_spec__0(lean_object* v_as_40_, size_t v_sz_41_, size_t v_i_42_, lean_object* v_b_43_, lean_object* v___y_44_){
_start:
{
uint8_t v___x_45_; 
v___x_45_ = lean_usize_dec_lt(v_i_42_, v_sz_41_);
if (v___x_45_ == 0)
{
return v_b_43_;
}
else
{
lean_object* v_snd_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_84_; 
v_snd_46_ = lean_ctor_get(v_b_43_, 1);
v_isSharedCheck_84_ = !lean_is_exclusive(v_b_43_);
if (v_isSharedCheck_84_ == 0)
{
lean_object* v_unused_85_; 
v_unused_85_ = lean_ctor_get(v_b_43_, 0);
lean_dec(v_unused_85_);
v___x_48_ = v_b_43_;
v_isShared_49_ = v_isSharedCheck_84_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_snd_46_);
lean_dec(v_b_43_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_84_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v_array_50_; lean_object* v_start_51_; lean_object* v_stop_52_; lean_object* v___x_53_; uint8_t v___x_54_; 
v_array_50_ = lean_ctor_get(v_snd_46_, 0);
v_start_51_ = lean_ctor_get(v_snd_46_, 1);
v_stop_52_ = lean_ctor_get(v_snd_46_, 2);
v___x_53_ = lean_box(0);
v___x_54_ = lean_nat_dec_lt(v_start_51_, v_stop_52_);
if (v___x_54_ == 0)
{
lean_object* v___x_56_; 
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 0, v___x_53_);
v___x_56_ = v___x_48_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v___x_53_);
lean_ctor_set(v_reuseFailAlloc_57_, 1, v_snd_46_);
v___x_56_ = v_reuseFailAlloc_57_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
return v___x_56_;
}
}
else
{
lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_80_; 
lean_inc(v_stop_52_);
lean_inc(v_start_51_);
lean_inc_ref(v_array_50_);
v_isSharedCheck_80_ = !lean_is_exclusive(v_snd_46_);
if (v_isSharedCheck_80_ == 0)
{
lean_object* v_unused_81_; lean_object* v_unused_82_; lean_object* v_unused_83_; 
v_unused_81_ = lean_ctor_get(v_snd_46_, 2);
lean_dec(v_unused_81_);
v_unused_82_ = lean_ctor_get(v_snd_46_, 1);
lean_dec(v_unused_82_);
v_unused_83_ = lean_ctor_get(v_snd_46_, 0);
lean_dec(v_unused_83_);
v___x_59_ = v_snd_46_;
v_isShared_60_ = v_isSharedCheck_80_;
goto v_resetjp_58_;
}
else
{
lean_dec(v_snd_46_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_80_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
lean_object* v_a_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_66_; 
v_a_61_ = lean_array_uget_borrowed(v_as_40_, v_i_42_);
v___x_62_ = lean_array_fget(v_array_50_, v_start_51_);
v___x_63_ = lean_unsigned_to_nat(1u);
v___x_64_ = lean_nat_add(v_start_51_, v___x_63_);
lean_dec(v_start_51_);
if (v_isShared_60_ == 0)
{
lean_ctor_set(v___x_59_, 1, v___x_64_);
v___x_66_ = v___x_59_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v_array_50_);
lean_ctor_set(v_reuseFailAlloc_79_, 1, v___x_64_);
lean_ctor_set(v_reuseFailAlloc_79_, 2, v_stop_52_);
v___x_66_ = v_reuseFailAlloc_79_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
uint8_t v___x_67_; 
v___x_67_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvType(v_a_61_, v___x_62_, v___y_44_);
lean_dec(v___x_62_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_71_; 
v___x_68_ = lean_box(v___x_67_);
v___x_69_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 1, v___x_66_);
lean_ctor_set(v___x_48_, 0, v___x_69_);
v___x_71_ = v___x_48_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v___x_69_);
lean_ctor_set(v_reuseFailAlloc_72_, 1, v___x_66_);
v___x_71_ = v_reuseFailAlloc_72_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
return v___x_71_;
}
}
else
{
lean_object* v___x_74_; 
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 1, v___x_66_);
lean_ctor_set(v___x_48_, 0, v___x_53_);
v___x_74_ = v___x_48_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v___x_53_);
lean_ctor_set(v_reuseFailAlloc_78_, 1, v___x_66_);
v___x_74_ = v_reuseFailAlloc_78_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
size_t v___x_75_; size_t v___x_76_; 
v___x_75_ = ((size_t)1ULL);
v___x_76_ = lean_usize_add(v_i_42_, v___x_75_);
v_i_42_ = v___x_76_;
v_b_43_ = v___x_74_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvTypes_spec__0___boxed(lean_object* v_as_86_, lean_object* v_sz_87_, lean_object* v_i_88_, lean_object* v_b_89_, lean_object* v___y_90_){
_start:
{
size_t v_sz_boxed_91_; size_t v_i_boxed_92_; lean_object* v_res_93_; 
v_sz_boxed_91_ = lean_unbox_usize(v_sz_87_);
lean_dec(v_sz_87_);
v_i_boxed_92_ = lean_unbox_usize(v_i_88_);
lean_dec(v_i_88_);
v_res_93_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvTypes_spec__0(v_as_86_, v_sz_boxed_91_, v_i_boxed_92_, v_b_89_, v___y_90_);
lean_dec(v___y_90_);
lean_dec_ref(v_as_86_);
return v_res_93_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvTypes(lean_object* v_es_u2081_94_, lean_object* v_es_u2082_95_, lean_object* v_a_96_){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_97_ = lean_array_get_size(v_es_u2081_94_);
v___x_98_ = lean_array_get_size(v_es_u2082_95_);
v___x_99_ = lean_nat_dec_eq(v___x_97_, v___x_98_);
if (v___x_99_ == 0)
{
lean_dec_ref(v_es_u2082_95_);
return v___x_99_;
}
else
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; size_t v_sz_104_; size_t v___x_105_; lean_object* v___x_106_; lean_object* v_fst_107_; 
v___x_100_ = lean_unsigned_to_nat(0u);
v___x_101_ = l_Array_toSubarray___redArg(v_es_u2082_95_, v___x_100_, v___x_98_);
v___x_102_ = lean_box(0);
v___x_103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v___x_101_);
v_sz_104_ = lean_array_size(v_es_u2081_94_);
v___x_105_ = ((size_t)0ULL);
v___x_106_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvTypes_spec__0(v_es_u2081_94_, v_sz_104_, v___x_105_, v___x_103_, v_a_96_);
v_fst_107_ = lean_ctor_get(v___x_106_, 0);
lean_inc(v_fst_107_);
lean_dec_ref(v___x_106_);
if (lean_obj_tag(v_fst_107_) == 0)
{
return v___x_99_;
}
else
{
lean_object* v_val_108_; uint8_t v___x_109_; 
v_val_108_ = lean_ctor_get(v_fst_107_, 0);
lean_inc(v_val_108_);
lean_dec_ref_known(v_fst_107_, 1);
v___x_109_ = lean_unbox(v_val_108_);
lean_dec(v_val_108_);
return v___x_109_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvTypes___boxed(lean_object* v_es_u2081_110_, lean_object* v_es_u2082_111_, lean_object* v_a_112_){
_start:
{
uint8_t v_res_113_; lean_object* v_r_114_; 
v_res_113_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvTypes(v_es_u2081_110_, v_es_u2082_111_, v_a_112_);
lean_dec(v_a_112_);
lean_dec_ref(v_es_u2081_110_);
v_r_114_ = lean_box(v_res_113_);
return v_r_114_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvArg___redArg(lean_object* v_a_u2081_115_, lean_object* v_a_u2082_116_, lean_object* v_a_117_){
_start:
{
switch(lean_obj_tag(v_a_u2081_115_))
{
case 0:
{
if (lean_obj_tag(v_a_u2082_116_) == 0)
{
uint8_t v___x_118_; 
v___x_118_ = 1;
return v___x_118_;
}
else
{
uint8_t v___x_119_; 
v___x_119_ = 0;
return v___x_119_;
}
}
case 1:
{
if (lean_obj_tag(v_a_u2082_116_) == 1)
{
lean_object* v_fvarId_120_; lean_object* v_fvarId_121_; uint8_t v___x_122_; 
v_fvarId_120_ = lean_ctor_get(v_a_u2081_115_, 0);
v_fvarId_121_ = lean_ctor_get(v_a_u2082_116_, 0);
v___x_122_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_120_, v_fvarId_121_, v_a_117_);
return v___x_122_;
}
else
{
uint8_t v___x_123_; 
v___x_123_ = 0;
return v___x_123_;
}
}
default: 
{
if (lean_obj_tag(v_a_u2082_116_) == 2)
{
lean_object* v_expr_124_; lean_object* v_expr_125_; uint8_t v___x_126_; 
v_expr_124_ = lean_ctor_get(v_a_u2081_115_, 0);
v_expr_125_ = lean_ctor_get(v_a_u2082_116_, 0);
v___x_126_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvType(v_expr_124_, v_expr_125_, v_a_117_);
return v___x_126_;
}
else
{
uint8_t v___x_127_; 
v___x_127_ = 0;
return v___x_127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvArg___redArg___boxed(lean_object* v_a_u2081_128_, lean_object* v_a_u2082_129_, lean_object* v_a_130_){
_start:
{
uint8_t v_res_131_; lean_object* v_r_132_; 
v_res_131_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvArg___redArg(v_a_u2081_128_, v_a_u2082_129_, v_a_130_);
lean_dec(v_a_130_);
lean_dec(v_a_u2082_129_);
lean_dec(v_a_u2081_128_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvArg(uint8_t v_pu_133_, lean_object* v_a_u2081_134_, lean_object* v_a_u2082_135_, lean_object* v_a_136_){
_start:
{
uint8_t v___x_137_; 
v___x_137_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvArg___redArg(v_a_u2081_134_, v_a_u2082_135_, v_a_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvArg___boxed(lean_object* v_pu_138_, lean_object* v_a_u2081_139_, lean_object* v_a_u2082_140_, lean_object* v_a_141_){
_start:
{
uint8_t v_pu_boxed_142_; uint8_t v_res_143_; lean_object* v_r_144_; 
v_pu_boxed_142_ = lean_unbox(v_pu_138_);
v_res_143_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvArg(v_pu_boxed_142_, v_a_u2081_139_, v_a_u2082_140_, v_a_141_);
lean_dec(v_a_141_);
lean_dec(v_a_u2082_140_);
lean_dec(v_a_u2081_139_);
v_r_144_ = lean_box(v_res_143_);
return v_r_144_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvArgs_spec__0___redArg(lean_object* v_as_145_, size_t v_sz_146_, size_t v_i_147_, lean_object* v_b_148_, lean_object* v___y_149_){
_start:
{
uint8_t v___x_150_; 
v___x_150_ = lean_usize_dec_lt(v_i_147_, v_sz_146_);
if (v___x_150_ == 0)
{
return v_b_148_;
}
else
{
lean_object* v_snd_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_189_; 
v_snd_151_ = lean_ctor_get(v_b_148_, 1);
v_isSharedCheck_189_ = !lean_is_exclusive(v_b_148_);
if (v_isSharedCheck_189_ == 0)
{
lean_object* v_unused_190_; 
v_unused_190_ = lean_ctor_get(v_b_148_, 0);
lean_dec(v_unused_190_);
v___x_153_ = v_b_148_;
v_isShared_154_ = v_isSharedCheck_189_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_snd_151_);
lean_dec(v_b_148_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_189_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v_array_155_; lean_object* v_start_156_; lean_object* v_stop_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v_array_155_ = lean_ctor_get(v_snd_151_, 0);
v_start_156_ = lean_ctor_get(v_snd_151_, 1);
v_stop_157_ = lean_ctor_get(v_snd_151_, 2);
v___x_158_ = lean_box(0);
v___x_159_ = lean_nat_dec_lt(v_start_156_, v_stop_157_);
if (v___x_159_ == 0)
{
lean_object* v___x_161_; 
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 0, v___x_158_);
v___x_161_ = v___x_153_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_158_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v_snd_151_);
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
lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_185_; 
lean_inc(v_stop_157_);
lean_inc(v_start_156_);
lean_inc_ref(v_array_155_);
v_isSharedCheck_185_ = !lean_is_exclusive(v_snd_151_);
if (v_isSharedCheck_185_ == 0)
{
lean_object* v_unused_186_; lean_object* v_unused_187_; lean_object* v_unused_188_; 
v_unused_186_ = lean_ctor_get(v_snd_151_, 2);
lean_dec(v_unused_186_);
v_unused_187_ = lean_ctor_get(v_snd_151_, 1);
lean_dec(v_unused_187_);
v_unused_188_ = lean_ctor_get(v_snd_151_, 0);
lean_dec(v_unused_188_);
v___x_164_ = v_snd_151_;
v_isShared_165_ = v_isSharedCheck_185_;
goto v_resetjp_163_;
}
else
{
lean_dec(v_snd_151_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_185_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v_a_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_171_; 
v_a_166_ = lean_array_uget_borrowed(v_as_145_, v_i_147_);
v___x_167_ = lean_array_fget(v_array_155_, v_start_156_);
v___x_168_ = lean_unsigned_to_nat(1u);
v___x_169_ = lean_nat_add(v_start_156_, v___x_168_);
lean_dec(v_start_156_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 1, v___x_169_);
v___x_171_ = v___x_164_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_array_155_);
lean_ctor_set(v_reuseFailAlloc_184_, 1, v___x_169_);
lean_ctor_set(v_reuseFailAlloc_184_, 2, v_stop_157_);
v___x_171_ = v_reuseFailAlloc_184_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
uint8_t v___x_172_; 
v___x_172_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvArg___redArg(v_a_166_, v___x_167_, v___y_149_);
lean_dec(v___x_167_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_176_; 
v___x_173_ = lean_box(v___x_172_);
v___x_174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 1, v___x_171_);
lean_ctor_set(v___x_153_, 0, v___x_174_);
v___x_176_ = v___x_153_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v___x_174_);
lean_ctor_set(v_reuseFailAlloc_177_, 1, v___x_171_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
else
{
lean_object* v___x_179_; 
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 1, v___x_171_);
lean_ctor_set(v___x_153_, 0, v___x_158_);
v___x_179_ = v___x_153_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_158_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v___x_171_);
v___x_179_ = v_reuseFailAlloc_183_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
size_t v___x_180_; size_t v___x_181_; 
v___x_180_ = ((size_t)1ULL);
v___x_181_ = lean_usize_add(v_i_147_, v___x_180_);
v_i_147_ = v___x_181_;
v_b_148_ = v___x_179_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvArgs_spec__0___redArg___boxed(lean_object* v_as_191_, lean_object* v_sz_192_, lean_object* v_i_193_, lean_object* v_b_194_, lean_object* v___y_195_){
_start:
{
size_t v_sz_boxed_196_; size_t v_i_boxed_197_; lean_object* v_res_198_; 
v_sz_boxed_196_ = lean_unbox_usize(v_sz_192_);
lean_dec(v_sz_192_);
v_i_boxed_197_ = lean_unbox_usize(v_i_193_);
lean_dec(v_i_193_);
v_res_198_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvArgs_spec__0___redArg(v_as_191_, v_sz_boxed_196_, v_i_boxed_197_, v_b_194_, v___y_195_);
lean_dec(v___y_195_);
lean_dec_ref(v_as_191_);
return v_res_198_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvArgs(uint8_t v_pu_199_, lean_object* v_as_u2081_200_, lean_object* v_as_u2082_201_, lean_object* v_a_202_){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; uint8_t v___x_205_; 
v___x_203_ = lean_array_get_size(v_as_u2081_200_);
v___x_204_ = lean_array_get_size(v_as_u2082_201_);
v___x_205_ = lean_nat_dec_eq(v___x_203_, v___x_204_);
if (v___x_205_ == 0)
{
lean_dec_ref(v_as_u2082_201_);
return v___x_205_;
}
else
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; size_t v_sz_210_; size_t v___x_211_; lean_object* v___x_212_; lean_object* v_fst_213_; 
v___x_206_ = lean_unsigned_to_nat(0u);
v___x_207_ = l_Array_toSubarray___redArg(v_as_u2082_201_, v___x_206_, v___x_204_);
v___x_208_ = lean_box(0);
v___x_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
lean_ctor_set(v___x_209_, 1, v___x_207_);
v_sz_210_ = lean_array_size(v_as_u2081_200_);
v___x_211_ = ((size_t)0ULL);
v___x_212_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvArgs_spec__0___redArg(v_as_u2081_200_, v_sz_210_, v___x_211_, v___x_209_, v_a_202_);
v_fst_213_ = lean_ctor_get(v___x_212_, 0);
lean_inc(v_fst_213_);
lean_dec_ref(v___x_212_);
if (lean_obj_tag(v_fst_213_) == 0)
{
return v___x_205_;
}
else
{
lean_object* v_val_214_; uint8_t v___x_215_; 
v_val_214_ = lean_ctor_get(v_fst_213_, 0);
lean_inc(v_val_214_);
lean_dec_ref_known(v_fst_213_, 1);
v___x_215_ = lean_unbox(v_val_214_);
lean_dec(v_val_214_);
return v___x_215_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvArgs___boxed(lean_object* v_pu_216_, lean_object* v_as_u2081_217_, lean_object* v_as_u2082_218_, lean_object* v_a_219_){
_start:
{
uint8_t v_pu_boxed_220_; uint8_t v_res_221_; lean_object* v_r_222_; 
v_pu_boxed_220_ = lean_unbox(v_pu_216_);
v_res_221_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvArgs(v_pu_boxed_220_, v_as_u2081_217_, v_as_u2082_218_, v_a_219_);
lean_dec(v_a_219_);
lean_dec_ref(v_as_u2081_217_);
v_r_222_ = lean_box(v_res_221_);
return v_r_222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvArgs_spec__0(uint8_t v_pu_223_, lean_object* v_as_224_, size_t v_sz_225_, size_t v_i_226_, lean_object* v_b_227_, lean_object* v___y_228_){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvArgs_spec__0___redArg(v_as_224_, v_sz_225_, v_i_226_, v_b_227_, v___y_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvArgs_spec__0___boxed(lean_object* v_pu_230_, lean_object* v_as_231_, lean_object* v_sz_232_, lean_object* v_i_233_, lean_object* v_b_234_, lean_object* v___y_235_){
_start:
{
uint8_t v_pu_boxed_236_; size_t v_sz_boxed_237_; size_t v_i_boxed_238_; lean_object* v_res_239_; 
v_pu_boxed_236_ = lean_unbox(v_pu_230_);
v_sz_boxed_237_ = lean_unbox_usize(v_sz_232_);
lean_dec(v_sz_232_);
v_i_boxed_238_ = lean_unbox_usize(v_i_233_);
lean_dec(v_i_233_);
v_res_239_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvArgs_spec__0(v_pu_boxed_236_, v_as_231_, v_sz_boxed_237_, v_i_boxed_238_, v_b_234_, v___y_235_);
lean_dec(v___y_235_);
lean_dec_ref(v_as_231_);
return v_res_239_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Compiler_LCNF_AlphaEqv_eqvLetValue_spec__0(lean_object* v_x_240_, lean_object* v_x_241_){
_start:
{
if (lean_obj_tag(v_x_240_) == 0)
{
if (lean_obj_tag(v_x_241_) == 0)
{
uint8_t v___x_242_; 
v___x_242_ = 1;
return v___x_242_;
}
else
{
uint8_t v___x_243_; 
v___x_243_ = 0;
return v___x_243_;
}
}
else
{
if (lean_obj_tag(v_x_241_) == 0)
{
uint8_t v___x_244_; 
v___x_244_ = 0;
return v___x_244_;
}
else
{
lean_object* v_head_245_; lean_object* v_tail_246_; lean_object* v_head_247_; lean_object* v_tail_248_; uint8_t v___x_249_; 
v_head_245_ = lean_ctor_get(v_x_240_, 0);
v_tail_246_ = lean_ctor_get(v_x_240_, 1);
v_head_247_ = lean_ctor_get(v_x_241_, 0);
v_tail_248_ = lean_ctor_get(v_x_241_, 1);
v___x_249_ = lean_level_eq(v_head_245_, v_head_247_);
if (v___x_249_ == 0)
{
return v___x_249_;
}
else
{
v_x_240_ = v_tail_246_;
v_x_241_ = v_tail_248_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Compiler_LCNF_AlphaEqv_eqvLetValue_spec__0___boxed(lean_object* v_x_251_, lean_object* v_x_252_){
_start:
{
uint8_t v_res_253_; lean_object* v_r_254_; 
v_res_253_ = l_List_beq___at___00Lean_Compiler_LCNF_AlphaEqv_eqvLetValue_spec__0(v_x_251_, v_x_252_);
lean_dec(v_x_252_);
lean_dec(v_x_251_);
v_r_254_ = lean_box(v_res_253_);
return v_r_254_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvLetValue(uint8_t v_pu_255_, lean_object* v_e_u2081_256_, lean_object* v_e_u2082_257_, lean_object* v_a_258_){
_start:
{
lean_object* v_f_u2081_260_; lean_object* v_as_u2081_261_; lean_object* v_f_u2082_262_; lean_object* v_as_u2082_263_; lean_object* v___y_264_; lean_object* v_i_u2081_268_; lean_object* v_v_u2081_269_; lean_object* v_i_u2082_270_; lean_object* v_v_u2082_271_; lean_object* v___y_272_; 
switch(lean_obj_tag(v_e_u2081_256_))
{
case 0:
{
if (lean_obj_tag(v_e_u2082_257_) == 0)
{
lean_object* v_value_275_; lean_object* v_value_276_; uint8_t v___x_277_; 
v_value_275_ = lean_ctor_get(v_e_u2081_256_, 0);
v_value_276_ = lean_ctor_get(v_e_u2082_257_, 0);
lean_inc_ref(v_value_276_);
lean_dec_ref_known(v_e_u2082_257_, 1);
v___x_277_ = l_Lean_Compiler_LCNF_instBEqLitValue_beq(v_value_275_, v_value_276_);
lean_dec_ref(v_value_276_);
return v___x_277_;
}
else
{
uint8_t v___x_278_; 
lean_dec(v_e_u2082_257_);
v___x_278_ = 0;
return v___x_278_;
}
}
case 1:
{
if (lean_obj_tag(v_e_u2082_257_) == 1)
{
uint8_t v___x_279_; 
v___x_279_ = 1;
return v___x_279_;
}
else
{
uint8_t v___x_280_; 
lean_dec(v_e_u2082_257_);
v___x_280_ = 0;
return v___x_280_;
}
}
case 2:
{
if (lean_obj_tag(v_e_u2082_257_) == 2)
{
lean_object* v_typeName_281_; lean_object* v_idx_282_; lean_object* v_struct_283_; lean_object* v_typeName_284_; lean_object* v_idx_285_; lean_object* v_struct_286_; uint8_t v___y_288_; uint8_t v___x_290_; 
v_typeName_281_ = lean_ctor_get(v_e_u2081_256_, 0);
v_idx_282_ = lean_ctor_get(v_e_u2081_256_, 1);
v_struct_283_ = lean_ctor_get(v_e_u2081_256_, 2);
v_typeName_284_ = lean_ctor_get(v_e_u2082_257_, 0);
lean_inc(v_typeName_284_);
v_idx_285_ = lean_ctor_get(v_e_u2082_257_, 1);
lean_inc(v_idx_285_);
v_struct_286_ = lean_ctor_get(v_e_u2082_257_, 2);
lean_inc(v_struct_286_);
lean_dec_ref_known(v_e_u2082_257_, 3);
v___x_290_ = lean_name_eq(v_typeName_281_, v_typeName_284_);
lean_dec(v_typeName_284_);
if (v___x_290_ == 0)
{
lean_dec(v_idx_285_);
v___y_288_ = v___x_290_;
goto v___jp_287_;
}
else
{
uint8_t v___x_291_; 
v___x_291_ = lean_nat_dec_eq(v_idx_282_, v_idx_285_);
lean_dec(v_idx_285_);
v___y_288_ = v___x_291_;
goto v___jp_287_;
}
v___jp_287_:
{
if (v___y_288_ == 0)
{
lean_dec(v_struct_286_);
return v___y_288_;
}
else
{
uint8_t v___x_289_; 
v___x_289_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_struct_283_, v_struct_286_, v_a_258_);
lean_dec(v_struct_286_);
return v___x_289_;
}
}
}
else
{
uint8_t v___x_292_; 
lean_dec(v_e_u2082_257_);
v___x_292_ = 0;
return v___x_292_;
}
}
case 3:
{
if (lean_obj_tag(v_e_u2082_257_) == 3)
{
lean_object* v_declName_293_; lean_object* v_us_294_; lean_object* v_args_295_; lean_object* v_declName_296_; lean_object* v_us_297_; lean_object* v_args_298_; uint8_t v___y_300_; uint8_t v___x_302_; 
v_declName_293_ = lean_ctor_get(v_e_u2081_256_, 0);
v_us_294_ = lean_ctor_get(v_e_u2081_256_, 1);
v_args_295_ = lean_ctor_get(v_e_u2081_256_, 2);
v_declName_296_ = lean_ctor_get(v_e_u2082_257_, 0);
lean_inc(v_declName_296_);
v_us_297_ = lean_ctor_get(v_e_u2082_257_, 1);
lean_inc(v_us_297_);
v_args_298_ = lean_ctor_get(v_e_u2082_257_, 2);
lean_inc_ref(v_args_298_);
lean_dec_ref_known(v_e_u2082_257_, 3);
v___x_302_ = lean_name_eq(v_declName_293_, v_declName_296_);
lean_dec(v_declName_296_);
if (v___x_302_ == 0)
{
lean_dec(v_us_297_);
v___y_300_ = v___x_302_;
goto v___jp_299_;
}
else
{
uint8_t v___x_303_; 
v___x_303_ = l_List_beq___at___00Lean_Compiler_LCNF_AlphaEqv_eqvLetValue_spec__0(v_us_294_, v_us_297_);
lean_dec(v_us_297_);
v___y_300_ = v___x_303_;
goto v___jp_299_;
}
v___jp_299_:
{
if (v___y_300_ == 0)
{
lean_dec_ref(v_args_298_);
return v___y_300_;
}
else
{
uint8_t v___x_301_; 
v___x_301_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvArgs(v_pu_255_, v_args_295_, v_args_298_, v_a_258_);
return v___x_301_;
}
}
}
else
{
uint8_t v___x_304_; 
lean_dec(v_e_u2082_257_);
v___x_304_ = 0;
return v___x_304_;
}
}
case 4:
{
if (lean_obj_tag(v_e_u2082_257_) == 4)
{
lean_object* v_fvarId_305_; lean_object* v_args_306_; lean_object* v_fvarId_307_; lean_object* v_args_308_; uint8_t v___x_309_; 
v_fvarId_305_ = lean_ctor_get(v_e_u2081_256_, 0);
v_args_306_ = lean_ctor_get(v_e_u2081_256_, 1);
v_fvarId_307_ = lean_ctor_get(v_e_u2082_257_, 0);
lean_inc(v_fvarId_307_);
v_args_308_ = lean_ctor_get(v_e_u2082_257_, 1);
lean_inc_ref(v_args_308_);
lean_dec_ref_known(v_e_u2082_257_, 2);
v___x_309_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_305_, v_fvarId_307_, v_a_258_);
lean_dec(v_fvarId_307_);
if (v___x_309_ == 0)
{
lean_dec_ref(v_args_308_);
return v___x_309_;
}
else
{
uint8_t v___x_310_; 
v___x_310_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvArgs(v_pu_255_, v_args_306_, v_args_308_, v_a_258_);
return v___x_310_;
}
}
else
{
uint8_t v___x_311_; 
lean_dec(v_e_u2082_257_);
v___x_311_ = 0;
return v___x_311_;
}
}
case 5:
{
if (lean_obj_tag(v_e_u2082_257_) == 5)
{
lean_object* v_i_312_; lean_object* v_args_313_; lean_object* v_i_314_; lean_object* v_args_315_; uint8_t v___x_316_; 
v_i_312_ = lean_ctor_get(v_e_u2081_256_, 0);
v_args_313_ = lean_ctor_get(v_e_u2081_256_, 1);
v_i_314_ = lean_ctor_get(v_e_u2082_257_, 0);
lean_inc_ref(v_i_314_);
v_args_315_ = lean_ctor_get(v_e_u2082_257_, 1);
lean_inc_ref(v_args_315_);
lean_dec_ref_known(v_e_u2082_257_, 2);
v___x_316_ = l_Lean_Compiler_LCNF_instBEqCtorInfo_beq(v_i_312_, v_i_314_);
lean_dec_ref(v_i_314_);
if (v___x_316_ == 0)
{
lean_dec_ref(v_args_315_);
return v___x_316_;
}
else
{
uint8_t v___x_317_; 
v___x_317_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvArgs(v_pu_255_, v_args_313_, v_args_315_, v_a_258_);
return v___x_317_;
}
}
else
{
uint8_t v___x_318_; 
lean_dec(v_e_u2082_257_);
v___x_318_ = 0;
return v___x_318_;
}
}
case 6:
{
if (lean_obj_tag(v_e_u2082_257_) == 6)
{
lean_object* v_i_319_; lean_object* v_var_320_; lean_object* v_i_321_; lean_object* v_var_322_; 
v_i_319_ = lean_ctor_get(v_e_u2081_256_, 0);
v_var_320_ = lean_ctor_get(v_e_u2081_256_, 1);
v_i_321_ = lean_ctor_get(v_e_u2082_257_, 0);
lean_inc(v_i_321_);
v_var_322_ = lean_ctor_get(v_e_u2082_257_, 1);
lean_inc(v_var_322_);
lean_dec_ref_known(v_e_u2082_257_, 2);
v_i_u2081_268_ = v_i_319_;
v_v_u2081_269_ = v_var_320_;
v_i_u2082_270_ = v_i_321_;
v_v_u2082_271_ = v_var_322_;
v___y_272_ = v_a_258_;
goto v___jp_267_;
}
else
{
uint8_t v___x_323_; 
lean_dec(v_e_u2082_257_);
v___x_323_ = 0;
return v___x_323_;
}
}
case 7:
{
if (lean_obj_tag(v_e_u2082_257_) == 7)
{
lean_object* v_i_324_; lean_object* v_var_325_; lean_object* v_i_326_; lean_object* v_var_327_; 
v_i_324_ = lean_ctor_get(v_e_u2081_256_, 0);
v_var_325_ = lean_ctor_get(v_e_u2081_256_, 1);
v_i_326_ = lean_ctor_get(v_e_u2082_257_, 0);
lean_inc(v_i_326_);
v_var_327_ = lean_ctor_get(v_e_u2082_257_, 1);
lean_inc(v_var_327_);
lean_dec_ref_known(v_e_u2082_257_, 2);
v_i_u2081_268_ = v_i_324_;
v_v_u2081_269_ = v_var_325_;
v_i_u2082_270_ = v_i_326_;
v_v_u2082_271_ = v_var_327_;
v___y_272_ = v_a_258_;
goto v___jp_267_;
}
else
{
uint8_t v___x_328_; 
lean_dec(v_e_u2082_257_);
v___x_328_ = 0;
return v___x_328_;
}
}
case 8:
{
if (lean_obj_tag(v_e_u2082_257_) == 8)
{
lean_object* v_n_329_; lean_object* v_offset_330_; lean_object* v_var_331_; lean_object* v_n_332_; lean_object* v_offset_333_; lean_object* v_var_334_; uint8_t v___x_335_; 
v_n_329_ = lean_ctor_get(v_e_u2081_256_, 0);
v_offset_330_ = lean_ctor_get(v_e_u2081_256_, 1);
v_var_331_ = lean_ctor_get(v_e_u2081_256_, 2);
v_n_332_ = lean_ctor_get(v_e_u2082_257_, 0);
lean_inc(v_n_332_);
v_offset_333_ = lean_ctor_get(v_e_u2082_257_, 1);
lean_inc(v_offset_333_);
v_var_334_ = lean_ctor_get(v_e_u2082_257_, 2);
lean_inc(v_var_334_);
lean_dec_ref_known(v_e_u2082_257_, 3);
v___x_335_ = lean_nat_dec_eq(v_n_329_, v_n_332_);
lean_dec(v_n_332_);
if (v___x_335_ == 0)
{
lean_dec(v_var_334_);
lean_dec(v_offset_333_);
return v___x_335_;
}
else
{
uint8_t v___x_336_; 
v___x_336_ = lean_nat_dec_eq(v_offset_330_, v_offset_333_);
lean_dec(v_offset_333_);
if (v___x_336_ == 0)
{
lean_dec(v_var_334_);
return v___x_336_;
}
else
{
uint8_t v___x_337_; 
v___x_337_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_var_331_, v_var_334_, v_a_258_);
lean_dec(v_var_334_);
return v___x_337_;
}
}
}
else
{
uint8_t v___x_338_; 
lean_dec(v_e_u2082_257_);
v___x_338_ = 0;
return v___x_338_;
}
}
case 9:
{
if (lean_obj_tag(v_e_u2082_257_) == 9)
{
lean_object* v_fn_339_; lean_object* v_args_340_; lean_object* v_fn_341_; lean_object* v_args_342_; 
v_fn_339_ = lean_ctor_get(v_e_u2081_256_, 0);
v_args_340_ = lean_ctor_get(v_e_u2081_256_, 1);
v_fn_341_ = lean_ctor_get(v_e_u2082_257_, 0);
lean_inc(v_fn_341_);
v_args_342_ = lean_ctor_get(v_e_u2082_257_, 1);
lean_inc_ref(v_args_342_);
lean_dec_ref_known(v_e_u2082_257_, 2);
v_f_u2081_260_ = v_fn_339_;
v_as_u2081_261_ = v_args_340_;
v_f_u2082_262_ = v_fn_341_;
v_as_u2082_263_ = v_args_342_;
v___y_264_ = v_a_258_;
goto v___jp_259_;
}
else
{
uint8_t v___x_343_; 
lean_dec(v_e_u2082_257_);
v___x_343_ = 0;
return v___x_343_;
}
}
case 10:
{
if (lean_obj_tag(v_e_u2082_257_) == 10)
{
lean_object* v_fn_344_; lean_object* v_args_345_; lean_object* v_fn_346_; lean_object* v_args_347_; 
v_fn_344_ = lean_ctor_get(v_e_u2081_256_, 0);
v_args_345_ = lean_ctor_get(v_e_u2081_256_, 1);
v_fn_346_ = lean_ctor_get(v_e_u2082_257_, 0);
lean_inc(v_fn_346_);
v_args_347_ = lean_ctor_get(v_e_u2082_257_, 1);
lean_inc_ref(v_args_347_);
lean_dec_ref_known(v_e_u2082_257_, 2);
v_f_u2081_260_ = v_fn_344_;
v_as_u2081_261_ = v_args_345_;
v_f_u2082_262_ = v_fn_346_;
v_as_u2082_263_ = v_args_347_;
v___y_264_ = v_a_258_;
goto v___jp_259_;
}
else
{
uint8_t v___x_348_; 
lean_dec(v_e_u2082_257_);
v___x_348_ = 0;
return v___x_348_;
}
}
case 11:
{
if (lean_obj_tag(v_e_u2082_257_) == 11)
{
lean_object* v_n_349_; lean_object* v_var_350_; lean_object* v_n_351_; lean_object* v_var_352_; 
v_n_349_ = lean_ctor_get(v_e_u2081_256_, 0);
v_var_350_ = lean_ctor_get(v_e_u2081_256_, 1);
v_n_351_ = lean_ctor_get(v_e_u2082_257_, 0);
lean_inc(v_n_351_);
v_var_352_ = lean_ctor_get(v_e_u2082_257_, 1);
lean_inc(v_var_352_);
lean_dec_ref_known(v_e_u2082_257_, 2);
v_i_u2081_268_ = v_n_349_;
v_v_u2081_269_ = v_var_350_;
v_i_u2082_270_ = v_n_351_;
v_v_u2082_271_ = v_var_352_;
v___y_272_ = v_a_258_;
goto v___jp_267_;
}
else
{
uint8_t v___x_353_; 
lean_dec(v_e_u2082_257_);
v___x_353_ = 0;
return v___x_353_;
}
}
case 12:
{
if (lean_obj_tag(v_e_u2082_257_) == 12)
{
lean_object* v_var_354_; lean_object* v_i_355_; uint8_t v_updateHeader_356_; lean_object* v_args_357_; lean_object* v_var_358_; lean_object* v_i_359_; uint8_t v_updateHeader_360_; lean_object* v_args_361_; uint8_t v___y_363_; uint8_t v___x_366_; 
v_var_354_ = lean_ctor_get(v_e_u2081_256_, 0);
v_i_355_ = lean_ctor_get(v_e_u2081_256_, 1);
v_updateHeader_356_ = lean_ctor_get_uint8(v_e_u2081_256_, sizeof(void*)*3);
v_args_357_ = lean_ctor_get(v_e_u2081_256_, 2);
v_var_358_ = lean_ctor_get(v_e_u2082_257_, 0);
lean_inc(v_var_358_);
v_i_359_ = lean_ctor_get(v_e_u2082_257_, 1);
lean_inc_ref(v_i_359_);
v_updateHeader_360_ = lean_ctor_get_uint8(v_e_u2082_257_, sizeof(void*)*3);
v_args_361_ = lean_ctor_get(v_e_u2082_257_, 2);
lean_inc_ref(v_args_361_);
lean_dec_ref_known(v_e_u2082_257_, 3);
v___x_366_ = l_Lean_Compiler_LCNF_instBEqCtorInfo_beq(v_i_355_, v_i_359_);
lean_dec_ref(v_i_359_);
if (v___x_366_ == 0)
{
v___y_363_ = v___x_366_;
goto v___jp_362_;
}
else
{
if (v_updateHeader_360_ == 0)
{
if (v_updateHeader_356_ == 0)
{
v___y_363_ = v___x_366_;
goto v___jp_362_;
}
else
{
lean_dec_ref(v_args_361_);
lean_dec(v_var_358_);
return v_updateHeader_360_;
}
}
else
{
v___y_363_ = v_updateHeader_356_;
goto v___jp_362_;
}
}
v___jp_362_:
{
if (v___y_363_ == 0)
{
lean_dec_ref(v_args_361_);
lean_dec(v_var_358_);
return v___y_363_;
}
else
{
uint8_t v___x_364_; 
v___x_364_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_var_354_, v_var_358_, v_a_258_);
lean_dec(v_var_358_);
if (v___x_364_ == 0)
{
lean_dec_ref(v_args_361_);
return v___x_364_;
}
else
{
uint8_t v___x_365_; 
v___x_365_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvArgs(v_pu_255_, v_args_357_, v_args_361_, v_a_258_);
return v___x_365_;
}
}
}
}
else
{
uint8_t v___x_367_; 
lean_dec(v_e_u2082_257_);
v___x_367_ = 0;
return v___x_367_;
}
}
case 13:
{
if (lean_obj_tag(v_e_u2082_257_) == 13)
{
lean_object* v_ty_368_; lean_object* v_fvarId_369_; lean_object* v_ty_370_; lean_object* v_fvarId_371_; uint8_t v___x_372_; 
v_ty_368_ = lean_ctor_get(v_e_u2081_256_, 0);
v_fvarId_369_ = lean_ctor_get(v_e_u2081_256_, 1);
v_ty_370_ = lean_ctor_get(v_e_u2082_257_, 0);
lean_inc_ref(v_ty_370_);
v_fvarId_371_ = lean_ctor_get(v_e_u2082_257_, 1);
lean_inc(v_fvarId_371_);
lean_dec_ref_known(v_e_u2082_257_, 2);
v___x_372_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvType(v_ty_368_, v_ty_370_, v_a_258_);
lean_dec_ref(v_ty_370_);
if (v___x_372_ == 0)
{
lean_dec(v_fvarId_371_);
return v___x_372_;
}
else
{
uint8_t v___x_373_; 
v___x_373_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_369_, v_fvarId_371_, v_a_258_);
lean_dec(v_fvarId_371_);
return v___x_373_;
}
}
else
{
uint8_t v___x_374_; 
lean_dec(v_e_u2082_257_);
v___x_374_ = 0;
return v___x_374_;
}
}
case 14:
{
if (lean_obj_tag(v_e_u2082_257_) == 14)
{
lean_object* v_fvarId_375_; lean_object* v_fvarId_376_; uint8_t v___x_377_; 
v_fvarId_375_ = lean_ctor_get(v_e_u2081_256_, 0);
v_fvarId_376_ = lean_ctor_get(v_e_u2082_257_, 0);
lean_inc(v_fvarId_376_);
lean_dec_ref_known(v_e_u2082_257_, 1);
v___x_377_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_375_, v_fvarId_376_, v_a_258_);
lean_dec(v_fvarId_376_);
return v___x_377_;
}
else
{
uint8_t v___x_378_; 
lean_dec(v_e_u2082_257_);
v___x_378_ = 0;
return v___x_378_;
}
}
default: 
{
if (lean_obj_tag(v_e_u2082_257_) == 15)
{
lean_object* v_fvarId_379_; lean_object* v_fvarId_380_; uint8_t v___x_381_; 
v_fvarId_379_ = lean_ctor_get(v_e_u2081_256_, 0);
v_fvarId_380_ = lean_ctor_get(v_e_u2082_257_, 0);
lean_inc(v_fvarId_380_);
lean_dec_ref_known(v_e_u2082_257_, 1);
v___x_381_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_379_, v_fvarId_380_, v_a_258_);
lean_dec(v_fvarId_380_);
return v___x_381_;
}
else
{
uint8_t v___x_382_; 
lean_dec(v_e_u2082_257_);
v___x_382_ = 0;
return v___x_382_;
}
}
}
v___jp_259_:
{
uint8_t v___x_265_; 
v___x_265_ = lean_name_eq(v_f_u2081_260_, v_f_u2082_262_);
lean_dec(v_f_u2082_262_);
if (v___x_265_ == 0)
{
lean_dec_ref(v_as_u2082_263_);
return v___x_265_;
}
else
{
uint8_t v___x_266_; 
v___x_266_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvArgs(v_pu_255_, v_as_u2081_261_, v_as_u2082_263_, v___y_264_);
return v___x_266_;
}
}
v___jp_267_:
{
uint8_t v___x_273_; 
v___x_273_ = lean_nat_dec_eq(v_i_u2081_268_, v_i_u2082_270_);
lean_dec(v_i_u2082_270_);
if (v___x_273_ == 0)
{
lean_dec(v_v_u2082_271_);
return v___x_273_;
}
else
{
uint8_t v___x_274_; 
v___x_274_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_v_u2081_269_, v_v_u2082_271_, v___y_272_);
lean_dec(v_v_u2082_271_);
return v___x_274_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvLetValue___boxed(lean_object* v_pu_383_, lean_object* v_e_u2081_384_, lean_object* v_e_u2082_385_, lean_object* v_a_386_){
_start:
{
uint8_t v_pu_boxed_387_; uint8_t v_res_388_; lean_object* v_r_389_; 
v_pu_boxed_387_ = lean_unbox(v_pu_383_);
v_res_388_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvLetValue(v_pu_boxed_387_, v_e_u2081_384_, v_e_u2082_385_, v_a_386_);
lean_dec(v_a_386_);
lean_dec(v_e_u2081_384_);
v_r_389_ = lean_box(v_res_388_);
return v_r_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_withFVar___redArg(lean_object* v_fvarId_u2081_390_, lean_object* v_fvarId_u2082_391_, lean_object* v_x_392_, lean_object* v_a_393_){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
lean_inc(v_a_393_);
v___x_394_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_u2082_391_, v_fvarId_u2081_390_, v_a_393_);
v___x_395_ = lean_apply_1(v_x_392_, v___x_394_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_withFVar___redArg___boxed(lean_object* v_fvarId_u2081_396_, lean_object* v_fvarId_u2082_397_, lean_object* v_x_398_, lean_object* v_a_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lean_Compiler_LCNF_AlphaEqv_withFVar___redArg(v_fvarId_u2081_396_, v_fvarId_u2082_397_, v_x_398_, v_a_399_);
lean_dec(v_a_399_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_withFVar(lean_object* v_00_u03b1_401_, lean_object* v_fvarId_u2081_402_, lean_object* v_fvarId_u2082_403_, lean_object* v_x_404_, lean_object* v_a_405_){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
lean_inc(v_a_405_);
v___x_406_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_u2082_403_, v_fvarId_u2081_402_, v_a_405_);
v___x_407_ = lean_apply_1(v_x_404_, v___x_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_withFVar___boxed(lean_object* v_00_u03b1_408_, lean_object* v_fvarId_u2081_409_, lean_object* v_fvarId_u2082_410_, lean_object* v_x_411_, lean_object* v_a_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Lean_Compiler_LCNF_AlphaEqv_withFVar(v_00_u03b1_408_, v_fvarId_u2081_409_, v_fvarId_u2082_410_, v_x_411_, v_a_412_);
lean_dec(v_a_412_);
return v_res_413_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___redArg(lean_object* v_params_u2081_414_, lean_object* v_params_u2082_415_, lean_object* v_x_416_, lean_object* v_i_417_, lean_object* v_a_418_){
_start:
{
lean_object* v___x_419_; uint8_t v___x_420_; 
v___x_419_ = lean_array_get_size(v_params_u2081_414_);
v___x_420_ = lean_nat_dec_lt(v_i_417_, v___x_419_);
if (v___x_420_ == 0)
{
lean_object* v___x_421_; uint8_t v___x_422_; 
lean_dec(v_i_417_);
v___x_421_ = lean_apply_1(v_x_416_, v_a_418_);
v___x_422_ = lean_unbox(v___x_421_);
return v___x_422_;
}
else
{
lean_object* v_p_u2081_423_; lean_object* v_fvarId_424_; lean_object* v_type_425_; lean_object* v_p_u2082_426_; lean_object* v_fvarId_427_; lean_object* v_type_428_; uint8_t v___x_429_; 
v_p_u2081_423_ = lean_array_fget_borrowed(v_params_u2081_414_, v_i_417_);
v_fvarId_424_ = lean_ctor_get(v_p_u2081_423_, 0);
v_type_425_ = lean_ctor_get(v_p_u2081_423_, 2);
v_p_u2082_426_ = lean_array_fget_borrowed(v_params_u2082_415_, v_i_417_);
v_fvarId_427_ = lean_ctor_get(v_p_u2082_426_, 0);
v_type_428_ = lean_ctor_get(v_p_u2082_426_, 2);
v___x_429_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvType(v_type_425_, v_type_428_, v_a_418_);
if (v___x_429_ == 0)
{
lean_dec(v_a_418_);
lean_dec(v_i_417_);
lean_dec_ref(v_x_416_);
return v___x_429_;
}
else
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_430_ = lean_unsigned_to_nat(1u);
v___x_431_ = lean_nat_add(v_i_417_, v___x_430_);
lean_dec(v_i_417_);
lean_inc(v_fvarId_424_);
lean_inc(v_fvarId_427_);
v___x_432_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_427_, v_fvarId_424_, v_a_418_);
v_i_417_ = v___x_431_;
v_a_418_ = v___x_432_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___redArg___boxed(lean_object* v_params_u2081_434_, lean_object* v_params_u2082_435_, lean_object* v_x_436_, lean_object* v_i_437_, lean_object* v_a_438_){
_start:
{
uint8_t v_res_439_; lean_object* v_r_440_; 
v_res_439_ = l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___redArg(v_params_u2081_434_, v_params_u2082_435_, v_x_436_, v_i_437_, v_a_438_);
lean_dec_ref(v_params_u2082_435_);
lean_dec_ref(v_params_u2081_434_);
v_r_440_ = lean_box(v_res_439_);
return v_r_440_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go(uint8_t v_pu_441_, lean_object* v_params_u2081_442_, lean_object* v_params_u2082_443_, lean_object* v_x_444_, lean_object* v_h_445_, lean_object* v_i_446_, lean_object* v_a_447_){
_start:
{
uint8_t v___x_448_; 
lean_inc(v_a_447_);
v___x_448_ = l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___redArg(v_params_u2081_442_, v_params_u2082_443_, v_x_444_, v_i_446_, v_a_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___boxed(lean_object* v_pu_449_, lean_object* v_params_u2081_450_, lean_object* v_params_u2082_451_, lean_object* v_x_452_, lean_object* v_h_453_, lean_object* v_i_454_, lean_object* v_a_455_){
_start:
{
uint8_t v_pu_boxed_456_; uint8_t v_res_457_; lean_object* v_r_458_; 
v_pu_boxed_456_ = lean_unbox(v_pu_449_);
v_res_457_ = l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go(v_pu_boxed_456_, v_params_u2081_450_, v_params_u2082_451_, v_x_452_, v_h_453_, v_i_454_, v_a_455_);
lean_dec(v_a_455_);
lean_dec_ref(v_params_u2082_451_);
lean_dec_ref(v_params_u2081_450_);
v_r_458_ = lean_box(v_res_457_);
return v_r_458_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_withParams___redArg(lean_object* v_params_u2081_459_, lean_object* v_params_u2082_460_, lean_object* v_x_461_, lean_object* v_a_462_){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; uint8_t v___x_465_; 
v___x_463_ = lean_array_get_size(v_params_u2082_460_);
v___x_464_ = lean_array_get_size(v_params_u2081_459_);
v___x_465_ = lean_nat_dec_eq(v___x_463_, v___x_464_);
if (v___x_465_ == 0)
{
lean_dec_ref(v_x_461_);
return v___x_465_;
}
else
{
lean_object* v___x_466_; uint8_t v___x_467_; 
v___x_466_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_462_);
v___x_467_ = l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___redArg(v_params_u2081_459_, v_params_u2082_460_, v_x_461_, v___x_466_, v_a_462_);
return v___x_467_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_withParams___redArg___boxed(lean_object* v_params_u2081_468_, lean_object* v_params_u2082_469_, lean_object* v_x_470_, lean_object* v_a_471_){
_start:
{
uint8_t v_res_472_; lean_object* v_r_473_; 
v_res_472_ = l_Lean_Compiler_LCNF_AlphaEqv_withParams___redArg(v_params_u2081_468_, v_params_u2082_469_, v_x_470_, v_a_471_);
lean_dec(v_a_471_);
lean_dec_ref(v_params_u2082_469_);
lean_dec_ref(v_params_u2081_468_);
v_r_473_ = lean_box(v_res_472_);
return v_r_473_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_withParams(uint8_t v_pu_474_, lean_object* v_params_u2081_475_, lean_object* v_params_u2082_476_, lean_object* v_x_477_, lean_object* v_a_478_){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_479_ = lean_array_get_size(v_params_u2082_476_);
v___x_480_ = lean_array_get_size(v_params_u2081_475_);
v___x_481_ = lean_nat_dec_eq(v___x_479_, v___x_480_);
if (v___x_481_ == 0)
{
lean_dec_ref(v_x_477_);
return v___x_481_;
}
else
{
lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_482_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_478_);
v___x_483_ = l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___redArg(v_params_u2081_475_, v_params_u2082_476_, v_x_477_, v___x_482_, v_a_478_);
return v___x_483_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_withParams___boxed(lean_object* v_pu_484_, lean_object* v_params_u2081_485_, lean_object* v_params_u2082_486_, lean_object* v_x_487_, lean_object* v_a_488_){
_start:
{
uint8_t v_pu_boxed_489_; uint8_t v_res_490_; lean_object* v_r_491_; 
v_pu_boxed_489_ = lean_unbox(v_pu_484_);
v_res_490_ = l_Lean_Compiler_LCNF_AlphaEqv_withParams(v_pu_boxed_489_, v_params_u2081_485_, v_params_u2082_486_, v_x_487_, v_a_488_);
lean_dec(v_a_488_);
lean_dec_ref(v_params_u2082_486_);
lean_dec_ref(v_params_u2081_485_);
v_r_491_ = lean_box(v_res_490_);
return v_r_491_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0_spec__0___redArg(lean_object* v_hi_492_, lean_object* v_pivot_493_, lean_object* v_as_494_, lean_object* v_i_495_, lean_object* v_k_496_){
_start:
{
uint8_t v___y_508_; uint8_t v___x_509_; 
v___x_509_ = lean_nat_dec_lt(v_k_496_, v_hi_492_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; lean_object* v___x_511_; 
lean_dec(v_k_496_);
v___x_510_ = lean_array_fswap(v_as_494_, v_i_495_, v_hi_492_);
v___x_511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_511_, 0, v_i_495_);
lean_ctor_set(v___x_511_, 1, v___x_510_);
return v___x_511_;
}
else
{
lean_object* v___x_512_; 
v___x_512_ = lean_array_fget_borrowed(v_as_494_, v_k_496_);
switch(lean_obj_tag(v___x_512_))
{
case 0:
{
switch(lean_obj_tag(v_pivot_493_))
{
case 2:
{
goto v___jp_501_;
}
case 0:
{
lean_object* v_ctorName_513_; lean_object* v_ctorName_514_; uint8_t v___x_515_; 
v_ctorName_513_ = lean_ctor_get(v___x_512_, 0);
v_ctorName_514_ = lean_ctor_get(v_pivot_493_, 0);
v___x_515_ = l_Lean_Name_lt(v_ctorName_513_, v_ctorName_514_);
v___y_508_ = v___x_515_;
goto v___jp_507_;
}
default: 
{
goto v___jp_497_;
}
}
}
case 1:
{
switch(lean_obj_tag(v_pivot_493_))
{
case 2:
{
goto v___jp_501_;
}
case 1:
{
lean_object* v_info_516_; lean_object* v_info_517_; lean_object* v_name_518_; lean_object* v_name_519_; uint8_t v___x_520_; 
v_info_516_ = lean_ctor_get(v___x_512_, 0);
v_info_517_ = lean_ctor_get(v_pivot_493_, 0);
v_name_518_ = lean_ctor_get(v_info_516_, 0);
v_name_519_ = lean_ctor_get(v_info_517_, 0);
v___x_520_ = l_Lean_Name_lt(v_name_518_, v_name_519_);
v___y_508_ = v___x_520_;
goto v___jp_507_;
}
default: 
{
goto v___jp_497_;
}
}
}
default: 
{
goto v___jp_497_;
}
}
}
v___jp_497_:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = lean_unsigned_to_nat(1u);
v___x_499_ = lean_nat_add(v_k_496_, v___x_498_);
lean_dec(v_k_496_);
v_k_496_ = v___x_499_;
goto _start;
}
v___jp_501_:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_502_ = lean_array_fswap(v_as_494_, v_i_495_, v_k_496_);
v___x_503_ = lean_unsigned_to_nat(1u);
v___x_504_ = lean_nat_add(v_i_495_, v___x_503_);
lean_dec(v_i_495_);
v___x_505_ = lean_nat_add(v_k_496_, v___x_503_);
lean_dec(v_k_496_);
v_as_494_ = v___x_502_;
v_i_495_ = v___x_504_;
v_k_496_ = v___x_505_;
goto _start;
}
v___jp_507_:
{
if (v___y_508_ == 0)
{
goto v___jp_497_;
}
else
{
goto v___jp_501_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0_spec__0___redArg___boxed(lean_object* v_hi_521_, lean_object* v_pivot_522_, lean_object* v_as_523_, lean_object* v_i_524_, lean_object* v_k_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0_spec__0___redArg(v_hi_521_, v_pivot_522_, v_as_523_, v_i_524_, v_k_525_);
lean_dec_ref(v_pivot_522_);
lean_dec(v_hi_521_);
return v_res_526_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg___lam__0(uint8_t v___x_527_, lean_object* v_x_528_, lean_object* v_x_529_){
_start:
{
switch(lean_obj_tag(v_x_528_))
{
case 0:
{
switch(lean_obj_tag(v_x_529_))
{
case 2:
{
return v___x_527_;
}
case 0:
{
lean_object* v_ctorName_530_; lean_object* v_ctorName_531_; uint8_t v___x_532_; 
v_ctorName_530_ = lean_ctor_get(v_x_528_, 0);
v_ctorName_531_ = lean_ctor_get(v_x_529_, 0);
v___x_532_ = l_Lean_Name_lt(v_ctorName_530_, v_ctorName_531_);
return v___x_532_;
}
default: 
{
uint8_t v___x_533_; 
v___x_533_ = 0;
return v___x_533_;
}
}
}
case 1:
{
switch(lean_obj_tag(v_x_529_))
{
case 2:
{
return v___x_527_;
}
case 1:
{
lean_object* v_info_534_; lean_object* v_info_535_; lean_object* v_name_536_; lean_object* v_name_537_; uint8_t v___x_538_; 
v_info_534_ = lean_ctor_get(v_x_528_, 0);
v_info_535_ = lean_ctor_get(v_x_529_, 0);
v_name_536_ = lean_ctor_get(v_info_534_, 0);
v_name_537_ = lean_ctor_get(v_info_535_, 0);
v___x_538_ = l_Lean_Name_lt(v_name_536_, v_name_537_);
return v___x_538_;
}
default: 
{
uint8_t v___x_539_; 
v___x_539_ = 0;
return v___x_539_;
}
}
}
default: 
{
uint8_t v___x_540_; 
v___x_540_ = 0;
return v___x_540_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg___lam__0___boxed(lean_object* v___x_541_, lean_object* v_x_542_, lean_object* v_x_543_){
_start:
{
uint8_t v___x_426__boxed_544_; uint8_t v_res_545_; lean_object* v_r_546_; 
v___x_426__boxed_544_ = lean_unbox(v___x_541_);
v_res_545_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg___lam__0(v___x_426__boxed_544_, v_x_542_, v_x_543_);
lean_dec_ref(v_x_543_);
lean_dec_ref(v_x_542_);
v_r_546_ = lean_box(v_res_545_);
return v_r_546_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg(lean_object* v_n_547_, lean_object* v_as_548_, lean_object* v_lo_549_, lean_object* v_hi_550_){
_start:
{
lean_object* v___y_552_; uint8_t v___x_562_; 
v___x_562_ = lean_nat_dec_lt(v_lo_549_, v_hi_550_);
if (v___x_562_ == 0)
{
lean_dec(v_lo_549_);
return v_as_548_;
}
else
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v_mid_565_; lean_object* v___y_567_; lean_object* v___y_573_; lean_object* v___x_578_; lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_563_ = lean_nat_add(v_lo_549_, v_hi_550_);
v___x_564_ = lean_unsigned_to_nat(1u);
v_mid_565_ = lean_nat_shiftr(v___x_563_, v___x_564_);
lean_dec(v___x_563_);
v___x_578_ = lean_array_fget_borrowed(v_as_548_, v_mid_565_);
v___x_579_ = lean_array_fget_borrowed(v_as_548_, v_lo_549_);
v___x_580_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg___lam__0(v___x_562_, v___x_578_, v___x_579_);
if (v___x_580_ == 0)
{
v___y_573_ = v_as_548_;
goto v___jp_572_;
}
else
{
lean_object* v___x_581_; 
v___x_581_ = lean_array_fswap(v_as_548_, v_lo_549_, v_mid_565_);
v___y_573_ = v___x_581_;
goto v___jp_572_;
}
v___jp_566_:
{
lean_object* v___x_568_; lean_object* v___x_569_; uint8_t v___x_570_; 
v___x_568_ = lean_array_fget_borrowed(v___y_567_, v_mid_565_);
v___x_569_ = lean_array_fget_borrowed(v___y_567_, v_hi_550_);
v___x_570_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg___lam__0(v___x_562_, v___x_568_, v___x_569_);
if (v___x_570_ == 0)
{
lean_dec(v_mid_565_);
v___y_552_ = v___y_567_;
goto v___jp_551_;
}
else
{
lean_object* v___x_571_; 
v___x_571_ = lean_array_fswap(v___y_567_, v_mid_565_, v_hi_550_);
lean_dec(v_mid_565_);
v___y_552_ = v___x_571_;
goto v___jp_551_;
}
}
v___jp_572_:
{
lean_object* v___x_574_; lean_object* v___x_575_; uint8_t v___x_576_; 
v___x_574_ = lean_array_fget_borrowed(v___y_573_, v_hi_550_);
v___x_575_ = lean_array_fget_borrowed(v___y_573_, v_lo_549_);
v___x_576_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg___lam__0(v___x_562_, v___x_574_, v___x_575_);
if (v___x_576_ == 0)
{
v___y_567_ = v___y_573_;
goto v___jp_566_;
}
else
{
lean_object* v___x_577_; 
v___x_577_ = lean_array_fswap(v___y_573_, v_lo_549_, v_hi_550_);
v___y_567_ = v___x_577_;
goto v___jp_566_;
}
}
}
v___jp_551_:
{
lean_object* v_pivot_553_; lean_object* v___x_554_; lean_object* v_fst_555_; lean_object* v_snd_556_; uint8_t v___x_557_; 
v_pivot_553_ = lean_array_fget(v___y_552_, v_hi_550_);
lean_inc_n(v_lo_549_, 2);
v___x_554_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0_spec__0___redArg(v_hi_550_, v_pivot_553_, v___y_552_, v_lo_549_, v_lo_549_);
lean_dec(v_pivot_553_);
v_fst_555_ = lean_ctor_get(v___x_554_, 0);
lean_inc(v_fst_555_);
v_snd_556_ = lean_ctor_get(v___x_554_, 1);
lean_inc(v_snd_556_);
lean_dec_ref(v___x_554_);
v___x_557_ = lean_nat_dec_le(v_hi_550_, v_fst_555_);
if (v___x_557_ == 0)
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_558_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg(v_n_547_, v_snd_556_, v_lo_549_, v_fst_555_);
v___x_559_ = lean_unsigned_to_nat(1u);
v___x_560_ = lean_nat_add(v_fst_555_, v___x_559_);
lean_dec(v_fst_555_);
v_as_548_ = v___x_558_;
v_lo_549_ = v___x_560_;
goto _start;
}
else
{
lean_dec(v_fst_555_);
lean_dec(v_lo_549_);
return v_snd_556_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg___boxed(lean_object* v_n_582_, lean_object* v_as_583_, lean_object* v_lo_584_, lean_object* v_hi_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg(v_n_582_, v_as_583_, v_lo_584_, v_hi_585_);
lean_dec(v_hi_585_);
lean_dec(v_n_582_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_sortAlts___redArg(lean_object* v_alts_587_){
_start:
{
lean_object* v___x_588_; lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_588_ = lean_array_get_size(v_alts_587_);
v___x_589_ = lean_unsigned_to_nat(0u);
v___x_590_ = lean_nat_dec_eq(v___x_588_, v___x_589_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___y_594_; uint8_t v___x_598_; 
v___x_591_ = lean_unsigned_to_nat(1u);
v___x_592_ = lean_nat_sub(v___x_588_, v___x_591_);
v___x_598_ = lean_nat_dec_le(v___x_589_, v___x_592_);
if (v___x_598_ == 0)
{
lean_inc(v___x_592_);
v___y_594_ = v___x_592_;
goto v___jp_593_;
}
else
{
v___y_594_ = v___x_589_;
goto v___jp_593_;
}
v___jp_593_:
{
uint8_t v___x_595_; 
v___x_595_ = lean_nat_dec_le(v___y_594_, v___x_592_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; 
lean_dec(v___x_592_);
lean_inc(v___y_594_);
v___x_596_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg(v___x_588_, v_alts_587_, v___y_594_, v___y_594_);
lean_dec(v___y_594_);
return v___x_596_;
}
else
{
lean_object* v___x_597_; 
v___x_597_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg(v___x_588_, v_alts_587_, v___y_594_, v___x_592_);
lean_dec(v___x_592_);
return v___x_597_;
}
}
}
else
{
return v_alts_587_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_sortAlts(uint8_t v_pu_599_, lean_object* v_alts_600_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = l_Lean_Compiler_LCNF_AlphaEqv_sortAlts___redArg(v_alts_600_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_sortAlts___boxed(lean_object* v_pu_602_, lean_object* v_alts_603_){
_start:
{
uint8_t v_pu_boxed_604_; lean_object* v_res_605_; 
v_pu_boxed_604_ = lean_unbox(v_pu_602_);
v_res_605_ = l_Lean_Compiler_LCNF_AlphaEqv_sortAlts(v_pu_boxed_604_, v_alts_603_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0(lean_object* v_n_606_, lean_object* v_as_607_, lean_object* v_lo_608_, lean_object* v_hi_609_, lean_object* v_w_610_, lean_object* v_hlo_611_, lean_object* v_hhi_612_){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___redArg(v_n_606_, v_as_607_, v_lo_608_, v_hi_609_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0___boxed(lean_object* v_n_614_, lean_object* v_as_615_, lean_object* v_lo_616_, lean_object* v_hi_617_, lean_object* v_w_618_, lean_object* v_hlo_619_, lean_object* v_hhi_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0(v_n_614_, v_as_615_, v_lo_616_, v_hi_617_, v_w_618_, v_hlo_619_, v_hhi_620_);
lean_dec(v_hi_617_);
lean_dec(v_n_614_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0_spec__0(lean_object* v_n_622_, lean_object* v_lo_623_, lean_object* v_hi_624_, lean_object* v_hhi_625_, lean_object* v_pivot_626_, lean_object* v_as_627_, lean_object* v_i_628_, lean_object* v_k_629_, lean_object* v_ilo_630_, lean_object* v_ik_631_, lean_object* v_w_632_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0_spec__0___redArg(v_hi_624_, v_pivot_626_, v_as_627_, v_i_628_, v_k_629_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0_spec__0___boxed(lean_object* v_n_634_, lean_object* v_lo_635_, lean_object* v_hi_636_, lean_object* v_hhi_637_, lean_object* v_pivot_638_, lean_object* v_as_639_, lean_object* v_i_640_, lean_object* v_k_641_, lean_object* v_ilo_642_, lean_object* v_ik_643_, lean_object* v_w_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_AlphaEqv_sortAlts_spec__0_spec__0(v_n_634_, v_lo_635_, v_hi_636_, v_hhi_637_, v_pivot_638_, v_as_639_, v_i_640_, v_k_641_, v_ilo_642_, v_ik_643_, v_w_644_);
lean_dec_ref(v_pivot_638_);
lean_dec(v_hi_636_);
lean_dec(v_lo_635_);
lean_dec(v_n_634_);
return v_res_645_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Compiler_LCNF_AlphaEqv_eqv_spec__3(lean_object* v_x_646_, lean_object* v_x_647_){
_start:
{
if (lean_obj_tag(v_x_646_) == 0)
{
if (lean_obj_tag(v_x_647_) == 0)
{
uint8_t v___x_648_; 
v___x_648_ = 1;
return v___x_648_;
}
else
{
uint8_t v___x_649_; 
v___x_649_ = 0;
return v___x_649_;
}
}
else
{
if (lean_obj_tag(v_x_647_) == 0)
{
uint8_t v___x_650_; 
v___x_650_ = 0;
return v___x_650_;
}
else
{
lean_object* v_val_651_; lean_object* v_val_652_; uint8_t v___x_653_; 
v_val_651_ = lean_ctor_get(v_x_646_, 0);
v_val_652_ = lean_ctor_get(v_x_647_, 0);
v___x_653_ = lean_nat_dec_eq(v_val_651_, v_val_652_);
return v___x_653_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Compiler_LCNF_AlphaEqv_eqv_spec__3___boxed(lean_object* v_x_654_, lean_object* v_x_655_){
_start:
{
uint8_t v_res_656_; lean_object* v_r_657_; 
v_res_656_ = l_Option_instBEq_beq___at___00Lean_Compiler_LCNF_AlphaEqv_eqv_spec__3(v_x_654_, v_x_655_);
lean_dec(v_x_655_);
lean_dec(v_x_654_);
v_r_657_ = lean_box(v_res_656_);
return v_r_657_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__1(uint8_t v_pu_661_, lean_object* v_as_662_, size_t v_sz_663_, size_t v_i_664_, lean_object* v_b_665_, lean_object* v___y_666_){
_start:
{
lean_object* v_a_668_; uint8_t v___x_672_; 
v___x_672_ = lean_usize_dec_lt(v_i_664_, v_sz_663_);
if (v___x_672_ == 0)
{
return v_b_665_;
}
else
{
lean_object* v_snd_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_761_; 
v_snd_673_ = lean_ctor_get(v_b_665_, 1);
v_isSharedCheck_761_ = !lean_is_exclusive(v_b_665_);
if (v_isSharedCheck_761_ == 0)
{
lean_object* v_unused_762_; 
v_unused_762_ = lean_ctor_get(v_b_665_, 0);
lean_dec(v_unused_762_);
v___x_675_ = v_b_665_;
v_isShared_676_ = v_isSharedCheck_761_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_snd_673_);
lean_dec(v_b_665_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_761_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v_array_677_; lean_object* v_start_678_; lean_object* v_stop_679_; lean_object* v___x_680_; uint8_t v___x_681_; 
v_array_677_ = lean_ctor_get(v_snd_673_, 0);
v_start_678_ = lean_ctor_get(v_snd_673_, 1);
v_stop_679_ = lean_ctor_get(v_snd_673_, 2);
v___x_680_ = lean_box(0);
v___x_681_ = lean_nat_dec_lt(v_start_678_, v_stop_679_);
if (v___x_681_ == 0)
{
lean_object* v___x_683_; 
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_680_);
v___x_683_ = v___x_675_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_680_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v_snd_673_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
else
{
lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_757_; 
lean_inc(v_stop_679_);
lean_inc(v_start_678_);
lean_inc_ref(v_array_677_);
v_isSharedCheck_757_ = !lean_is_exclusive(v_snd_673_);
if (v_isSharedCheck_757_ == 0)
{
lean_object* v_unused_758_; lean_object* v_unused_759_; lean_object* v_unused_760_; 
v_unused_758_ = lean_ctor_get(v_snd_673_, 2);
lean_dec(v_unused_758_);
v_unused_759_ = lean_ctor_get(v_snd_673_, 1);
lean_dec(v_unused_759_);
v_unused_760_ = lean_ctor_get(v_snd_673_, 0);
lean_dec(v_unused_760_);
v___x_686_ = v_snd_673_;
v_isShared_687_ = v_isSharedCheck_757_;
goto v_resetjp_685_;
}
else
{
lean_dec(v_snd_673_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_757_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v_a_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_693_; 
v_a_688_ = lean_array_uget_borrowed(v_as_662_, v_i_664_);
v___x_689_ = lean_array_fget(v_array_677_, v_start_678_);
v___x_690_ = lean_unsigned_to_nat(1u);
v___x_691_ = lean_nat_add(v_start_678_, v___x_690_);
lean_dec(v_start_678_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 1, v___x_691_);
v___x_693_ = v___x_686_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_array_677_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v___x_691_);
lean_ctor_set(v_reuseFailAlloc_756_, 2, v_stop_679_);
v___x_693_ = v_reuseFailAlloc_756_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
uint8_t v___y_695_; 
switch(lean_obj_tag(v_a_688_))
{
case 0:
{
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v_ctorName_704_; lean_object* v_params_705_; lean_object* v_code_706_; lean_object* v_ctorName_707_; lean_object* v_params_708_; lean_object* v_code_709_; uint8_t v___x_710_; 
v_ctorName_704_ = lean_ctor_get(v_a_688_, 0);
v_params_705_ = lean_ctor_get(v_a_688_, 1);
v_code_706_ = lean_ctor_get(v_a_688_, 2);
v_ctorName_707_ = lean_ctor_get(v___x_689_, 0);
lean_inc(v_ctorName_707_);
v_params_708_ = lean_ctor_get(v___x_689_, 1);
lean_inc_ref(v_params_708_);
v_code_709_ = lean_ctor_get(v___x_689_, 2);
lean_inc_ref(v_code_709_);
lean_dec_ref_known(v___x_689_, 3);
v___x_710_ = lean_name_eq(v_ctorName_704_, v_ctorName_707_);
lean_dec(v_ctorName_707_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
lean_dec_ref(v_code_709_);
lean_dec_ref(v_params_708_);
lean_del_object(v___x_675_);
v___x_711_ = lean_box(v___x_710_);
v___x_712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_712_, 0, v___x_711_);
v___x_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
lean_ctor_set(v___x_713_, 1, v___x_693_);
return v___x_713_;
}
else
{
lean_object* v___x_714_; lean_object* v___x_715_; uint8_t v___x_716_; 
v___x_714_ = lean_array_get_size(v_params_708_);
v___x_715_ = lean_array_get_size(v_params_705_);
v___x_716_ = lean_nat_dec_eq(v___x_714_, v___x_715_);
if (v___x_716_ == 0)
{
lean_dec_ref(v_code_709_);
lean_dec_ref(v_params_708_);
v___y_695_ = v___x_716_;
goto v___jp_694_;
}
else
{
lean_object* v___x_717_; uint8_t v___x_718_; 
v___x_717_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_666_);
lean_inc_ref(v_code_706_);
v___x_718_ = l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__0___redArg(v_pu_661_, v_code_706_, v_code_709_, v_params_705_, v_params_708_, v___x_717_, v___y_666_);
lean_dec_ref(v_params_708_);
if (v___x_718_ == 0)
{
v___y_695_ = v___x_718_;
goto v___jp_694_;
}
else
{
lean_object* v___x_719_; 
lean_del_object(v___x_675_);
v___x_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_719_, 0, v___x_680_);
lean_ctor_set(v___x_719_, 1, v___x_693_);
v_a_668_ = v___x_719_;
goto v___jp_667_;
}
}
}
}
else
{
lean_dec(v___x_689_);
lean_del_object(v___x_675_);
goto v___jp_701_;
}
}
case 1:
{
lean_del_object(v___x_675_);
if (lean_obj_tag(v___x_689_) == 1)
{
lean_object* v_info_720_; lean_object* v_code_721_; lean_object* v_info_722_; lean_object* v_code_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_742_; 
v_info_720_ = lean_ctor_get(v_a_688_, 0);
v_code_721_ = lean_ctor_get(v_a_688_, 1);
v_info_722_ = lean_ctor_get(v___x_689_, 0);
v_code_723_ = lean_ctor_get(v___x_689_, 1);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_742_ == 0)
{
v___x_725_ = v___x_689_;
v_isShared_726_ = v_isSharedCheck_742_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_code_723_);
lean_inc(v_info_722_);
lean_dec(v___x_689_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_742_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
uint8_t v___x_727_; 
v___x_727_ = l_Lean_Compiler_LCNF_instBEqCtorInfo_beq(v_info_720_, v_info_722_);
lean_dec_ref(v_info_722_);
if (v___x_727_ == 0)
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_731_; 
lean_dec_ref(v_code_723_);
v___x_728_ = lean_box(v___x_727_);
v___x_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_729_, 0, v___x_728_);
if (v_isShared_726_ == 0)
{
lean_ctor_set_tag(v___x_725_, 0);
lean_ctor_set(v___x_725_, 1, v___x_693_);
lean_ctor_set(v___x_725_, 0, v___x_729_);
v___x_731_ = v___x_725_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___x_729_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v___x_693_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
else
{
uint8_t v___x_733_; 
lean_inc(v___y_666_);
lean_inc_ref(v_code_721_);
v___x_733_ = l_Lean_Compiler_LCNF_AlphaEqv_eqv(v_pu_661_, v_code_721_, v_code_723_, v___y_666_);
if (v___x_733_ == 0)
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_737_; 
v___x_734_ = lean_box(v___x_733_);
v___x_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_735_, 0, v___x_734_);
if (v_isShared_726_ == 0)
{
lean_ctor_set_tag(v___x_725_, 0);
lean_ctor_set(v___x_725_, 1, v___x_693_);
lean_ctor_set(v___x_725_, 0, v___x_735_);
v___x_737_ = v___x_725_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v___x_735_);
lean_ctor_set(v_reuseFailAlloc_738_, 1, v___x_693_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
else
{
lean_object* v___x_740_; 
if (v_isShared_726_ == 0)
{
lean_ctor_set_tag(v___x_725_, 0);
lean_ctor_set(v___x_725_, 1, v___x_693_);
lean_ctor_set(v___x_725_, 0, v___x_680_);
v___x_740_ = v___x_725_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_680_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v___x_693_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
v_a_668_ = v___x_740_;
goto v___jp_667_;
}
}
}
}
}
else
{
lean_dec(v___x_689_);
goto v___jp_701_;
}
}
default: 
{
lean_del_object(v___x_675_);
if (lean_obj_tag(v___x_689_) == 2)
{
lean_object* v_code_743_; lean_object* v_code_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_755_; 
v_code_743_ = lean_ctor_get(v_a_688_, 0);
v_code_744_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_755_ == 0)
{
v___x_746_ = v___x_689_;
v_isShared_747_ = v_isSharedCheck_755_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_code_744_);
lean_dec(v___x_689_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_755_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
uint8_t v___x_748_; 
lean_inc(v___y_666_);
lean_inc_ref(v_code_743_);
v___x_748_ = l_Lean_Compiler_LCNF_AlphaEqv_eqv(v_pu_661_, v_code_743_, v_code_744_, v___y_666_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; lean_object* v___x_751_; 
v___x_749_ = lean_box(v___x_748_);
if (v_isShared_747_ == 0)
{
lean_ctor_set_tag(v___x_746_, 1);
lean_ctor_set(v___x_746_, 0, v___x_749_);
v___x_751_ = v___x_746_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v___x_749_);
v___x_751_ = v_reuseFailAlloc_753_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
lean_object* v___x_752_; 
v___x_752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
lean_ctor_set(v___x_752_, 1, v___x_693_);
return v___x_752_;
}
}
else
{
lean_object* v___x_754_; 
lean_del_object(v___x_746_);
v___x_754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_754_, 0, v___x_680_);
lean_ctor_set(v___x_754_, 1, v___x_693_);
v_a_668_ = v___x_754_;
goto v___jp_667_;
}
}
}
else
{
lean_dec(v___x_689_);
goto v___jp_701_;
}
}
}
v___jp_694_:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_699_; 
v___x_696_ = lean_box(v___y_695_);
v___x_697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_697_, 0, v___x_696_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 1, v___x_693_);
lean_ctor_set(v___x_675_, 0, v___x_697_);
v___x_699_ = v___x_675_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_697_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v___x_693_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
v___jp_701_:
{
lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_702_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__1___closed__0));
v___x_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
lean_ctor_set(v___x_703_, 1, v___x_693_);
return v___x_703_;
}
}
}
}
}
}
v___jp_667_:
{
size_t v___x_669_; size_t v___x_670_; 
v___x_669_ = ((size_t)1ULL);
v___x_670_ = lean_usize_add(v_i_664_, v___x_669_);
v_i_664_ = v___x_670_;
v_b_665_ = v_a_668_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqvAlts(uint8_t v_pu_763_, lean_object* v_alts_u2081_764_, lean_object* v_alts_u2082_765_, lean_object* v_a_766_){
_start:
{
lean_object* v___x_767_; lean_object* v___x_768_; uint8_t v___x_769_; 
v___x_767_ = lean_array_get_size(v_alts_u2081_764_);
v___x_768_ = lean_array_get_size(v_alts_u2082_765_);
v___x_769_ = lean_nat_dec_eq(v___x_767_, v___x_768_);
if (v___x_769_ == 0)
{
lean_dec_ref(v_alts_u2082_765_);
lean_dec_ref(v_alts_u2081_764_);
return v___x_769_;
}
else
{
lean_object* v_alts_u2081_770_; lean_object* v_alts_u2082_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; size_t v_sz_777_; size_t v___x_778_; lean_object* v___x_779_; lean_object* v_fst_780_; 
v_alts_u2081_770_ = l_Lean_Compiler_LCNF_AlphaEqv_sortAlts___redArg(v_alts_u2081_764_);
v_alts_u2082_771_ = l_Lean_Compiler_LCNF_AlphaEqv_sortAlts___redArg(v_alts_u2082_765_);
v___x_772_ = lean_unsigned_to_nat(0u);
v___x_773_ = lean_array_get_size(v_alts_u2082_771_);
v___x_774_ = l_Array_toSubarray___redArg(v_alts_u2082_771_, v___x_772_, v___x_773_);
v___x_775_ = lean_box(0);
v___x_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_776_, 0, v___x_775_);
lean_ctor_set(v___x_776_, 1, v___x_774_);
v_sz_777_ = lean_array_size(v_alts_u2081_770_);
v___x_778_ = ((size_t)0ULL);
v___x_779_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__1(v_pu_763_, v_alts_u2081_770_, v_sz_777_, v___x_778_, v___x_776_, v_a_766_);
lean_dec_ref(v_alts_u2081_770_);
v_fst_780_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_fst_780_);
lean_dec_ref(v___x_779_);
if (lean_obj_tag(v_fst_780_) == 0)
{
return v___x_769_;
}
else
{
lean_object* v_val_781_; uint8_t v___x_782_; 
v_val_781_ = lean_ctor_get(v_fst_780_, 0);
lean_inc(v_val_781_);
lean_dec_ref_known(v_fst_780_, 1);
v___x_782_ = lean_unbox(v_val_781_);
lean_dec(v_val_781_);
return v___x_782_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_AlphaEqv_eqv(uint8_t v_pu_783_, lean_object* v_code_u2081_784_, lean_object* v_code_u2082_785_, lean_object* v_a_786_){
_start:
{
switch(lean_obj_tag(v_code_u2081_784_))
{
case 0:
{
if (lean_obj_tag(v_code_u2082_785_) == 0)
{
lean_object* v_decl_787_; lean_object* v_decl_788_; lean_object* v_k_789_; lean_object* v_k_790_; lean_object* v_fvarId_791_; lean_object* v_type_792_; lean_object* v_value_793_; lean_object* v_fvarId_794_; lean_object* v_type_795_; lean_object* v_value_796_; uint8_t v___x_797_; 
v_decl_787_ = lean_ctor_get(v_code_u2081_784_, 0);
lean_inc_ref(v_decl_787_);
v_decl_788_ = lean_ctor_get(v_code_u2082_785_, 0);
lean_inc_ref(v_decl_788_);
v_k_789_ = lean_ctor_get(v_code_u2081_784_, 1);
lean_inc_ref(v_k_789_);
lean_dec_ref_known(v_code_u2081_784_, 2);
v_k_790_ = lean_ctor_get(v_code_u2082_785_, 1);
lean_inc_ref(v_k_790_);
lean_dec_ref_known(v_code_u2082_785_, 2);
v_fvarId_791_ = lean_ctor_get(v_decl_787_, 0);
lean_inc(v_fvarId_791_);
v_type_792_ = lean_ctor_get(v_decl_787_, 2);
lean_inc_ref(v_type_792_);
v_value_793_ = lean_ctor_get(v_decl_787_, 3);
lean_inc(v_value_793_);
lean_dec_ref(v_decl_787_);
v_fvarId_794_ = lean_ctor_get(v_decl_788_, 0);
lean_inc(v_fvarId_794_);
v_type_795_ = lean_ctor_get(v_decl_788_, 2);
lean_inc_ref(v_type_795_);
v_value_796_ = lean_ctor_get(v_decl_788_, 3);
lean_inc(v_value_796_);
lean_dec_ref(v_decl_788_);
v___x_797_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvType(v_type_792_, v_type_795_, v_a_786_);
lean_dec_ref(v_type_795_);
lean_dec_ref(v_type_792_);
if (v___x_797_ == 0)
{
lean_dec(v_value_796_);
lean_dec(v_fvarId_794_);
lean_dec(v_value_793_);
lean_dec(v_fvarId_791_);
lean_dec_ref(v_k_790_);
lean_dec_ref(v_k_789_);
lean_dec(v_a_786_);
return v___x_797_;
}
else
{
uint8_t v___x_798_; 
v___x_798_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvLetValue(v_pu_783_, v_value_793_, v_value_796_, v_a_786_);
lean_dec(v_value_793_);
if (v___x_798_ == 0)
{
lean_dec(v_fvarId_794_);
lean_dec(v_fvarId_791_);
lean_dec_ref(v_k_790_);
lean_dec_ref(v_k_789_);
lean_dec(v_a_786_);
return v___x_798_;
}
else
{
lean_object* v___x_799_; 
v___x_799_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_794_, v_fvarId_791_, v_a_786_);
v_code_u2081_784_ = v_k_789_;
v_code_u2082_785_ = v_k_790_;
v_a_786_ = v___x_799_;
goto _start;
}
}
}
else
{
uint8_t v___x_801_; 
lean_dec_ref_known(v_code_u2081_784_, 2);
lean_dec(v_a_786_);
lean_dec_ref(v_code_u2082_785_);
v___x_801_ = 0;
return v___x_801_;
}
}
case 1:
{
if (lean_obj_tag(v_code_u2082_785_) == 1)
{
lean_object* v_decl_802_; lean_object* v_decl_803_; lean_object* v_k_804_; lean_object* v_k_805_; lean_object* v_fvarId_806_; lean_object* v_params_807_; lean_object* v_type_808_; lean_object* v_value_809_; lean_object* v_fvarId_810_; lean_object* v_params_811_; lean_object* v_type_812_; lean_object* v_value_813_; uint8_t v___x_814_; 
v_decl_802_ = lean_ctor_get(v_code_u2081_784_, 0);
lean_inc_ref(v_decl_802_);
v_decl_803_ = lean_ctor_get(v_code_u2082_785_, 0);
lean_inc_ref(v_decl_803_);
v_k_804_ = lean_ctor_get(v_code_u2081_784_, 1);
lean_inc_ref(v_k_804_);
lean_dec_ref_known(v_code_u2081_784_, 2);
v_k_805_ = lean_ctor_get(v_code_u2082_785_, 1);
lean_inc_ref(v_k_805_);
lean_dec_ref_known(v_code_u2082_785_, 2);
v_fvarId_806_ = lean_ctor_get(v_decl_802_, 0);
lean_inc(v_fvarId_806_);
v_params_807_ = lean_ctor_get(v_decl_802_, 2);
lean_inc_ref(v_params_807_);
v_type_808_ = lean_ctor_get(v_decl_802_, 3);
lean_inc_ref(v_type_808_);
v_value_809_ = lean_ctor_get(v_decl_802_, 4);
lean_inc_ref(v_value_809_);
lean_dec_ref(v_decl_802_);
v_fvarId_810_ = lean_ctor_get(v_decl_803_, 0);
lean_inc(v_fvarId_810_);
v_params_811_ = lean_ctor_get(v_decl_803_, 2);
lean_inc_ref(v_params_811_);
v_type_812_ = lean_ctor_get(v_decl_803_, 3);
lean_inc_ref(v_type_812_);
v_value_813_ = lean_ctor_get(v_decl_803_, 4);
lean_inc_ref(v_value_813_);
lean_dec_ref(v_decl_803_);
v___x_814_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvType(v_type_808_, v_type_812_, v_a_786_);
lean_dec_ref(v_type_812_);
lean_dec_ref(v_type_808_);
if (v___x_814_ == 0)
{
lean_dec_ref(v_value_813_);
lean_dec_ref(v_params_811_);
lean_dec(v_fvarId_810_);
lean_dec_ref(v_value_809_);
lean_dec_ref(v_params_807_);
lean_dec(v_fvarId_806_);
lean_dec_ref(v_k_805_);
lean_dec_ref(v_k_804_);
lean_dec(v_a_786_);
return v___x_814_;
}
else
{
lean_object* v___x_815_; lean_object* v___x_816_; uint8_t v___x_817_; 
v___x_815_ = lean_array_get_size(v_params_811_);
v___x_816_ = lean_array_get_size(v_params_807_);
v___x_817_ = lean_nat_dec_eq(v___x_815_, v___x_816_);
if (v___x_817_ == 0)
{
lean_dec_ref(v_value_813_);
lean_dec_ref(v_params_811_);
lean_dec(v_fvarId_810_);
lean_dec_ref(v_value_809_);
lean_dec_ref(v_params_807_);
lean_dec(v_fvarId_806_);
lean_dec_ref(v_k_805_);
lean_dec_ref(v_k_804_);
lean_dec(v_a_786_);
return v___x_817_;
}
else
{
lean_object* v___x_818_; uint8_t v___x_819_; 
v___x_818_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_786_);
v___x_819_ = l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__0___redArg(v_pu_783_, v_value_809_, v_value_813_, v_params_807_, v_params_811_, v___x_818_, v_a_786_);
lean_dec_ref(v_params_811_);
lean_dec_ref(v_params_807_);
if (v___x_819_ == 0)
{
lean_dec(v_fvarId_810_);
lean_dec(v_fvarId_806_);
lean_dec_ref(v_k_805_);
lean_dec_ref(v_k_804_);
lean_dec(v_a_786_);
return v___x_819_;
}
else
{
lean_object* v___x_820_; 
v___x_820_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_810_, v_fvarId_806_, v_a_786_);
v_code_u2081_784_ = v_k_804_;
v_code_u2082_785_ = v_k_805_;
v_a_786_ = v___x_820_;
goto _start;
}
}
}
}
else
{
uint8_t v___x_822_; 
lean_dec_ref_known(v_code_u2081_784_, 2);
lean_dec(v_a_786_);
lean_dec_ref(v_code_u2082_785_);
v___x_822_ = 0;
return v___x_822_;
}
}
case 2:
{
if (lean_obj_tag(v_code_u2082_785_) == 2)
{
lean_object* v_decl_823_; lean_object* v_decl_824_; lean_object* v_k_825_; lean_object* v_k_826_; lean_object* v_fvarId_827_; lean_object* v_params_828_; lean_object* v_type_829_; lean_object* v_value_830_; lean_object* v_fvarId_831_; lean_object* v_params_832_; lean_object* v_type_833_; lean_object* v_value_834_; uint8_t v___x_835_; 
v_decl_823_ = lean_ctor_get(v_code_u2081_784_, 0);
lean_inc_ref(v_decl_823_);
v_decl_824_ = lean_ctor_get(v_code_u2082_785_, 0);
lean_inc_ref(v_decl_824_);
v_k_825_ = lean_ctor_get(v_code_u2081_784_, 1);
lean_inc_ref(v_k_825_);
lean_dec_ref_known(v_code_u2081_784_, 2);
v_k_826_ = lean_ctor_get(v_code_u2082_785_, 1);
lean_inc_ref(v_k_826_);
lean_dec_ref_known(v_code_u2082_785_, 2);
v_fvarId_827_ = lean_ctor_get(v_decl_823_, 0);
lean_inc(v_fvarId_827_);
v_params_828_ = lean_ctor_get(v_decl_823_, 2);
lean_inc_ref(v_params_828_);
v_type_829_ = lean_ctor_get(v_decl_823_, 3);
lean_inc_ref(v_type_829_);
v_value_830_ = lean_ctor_get(v_decl_823_, 4);
lean_inc_ref(v_value_830_);
lean_dec_ref(v_decl_823_);
v_fvarId_831_ = lean_ctor_get(v_decl_824_, 0);
lean_inc(v_fvarId_831_);
v_params_832_ = lean_ctor_get(v_decl_824_, 2);
lean_inc_ref(v_params_832_);
v_type_833_ = lean_ctor_get(v_decl_824_, 3);
lean_inc_ref(v_type_833_);
v_value_834_ = lean_ctor_get(v_decl_824_, 4);
lean_inc_ref(v_value_834_);
lean_dec_ref(v_decl_824_);
v___x_835_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvType(v_type_829_, v_type_833_, v_a_786_);
lean_dec_ref(v_type_833_);
lean_dec_ref(v_type_829_);
if (v___x_835_ == 0)
{
lean_dec_ref(v_value_834_);
lean_dec_ref(v_params_832_);
lean_dec(v_fvarId_831_);
lean_dec_ref(v_value_830_);
lean_dec_ref(v_params_828_);
lean_dec(v_fvarId_827_);
lean_dec_ref(v_k_826_);
lean_dec_ref(v_k_825_);
lean_dec(v_a_786_);
return v___x_835_;
}
else
{
lean_object* v___x_836_; lean_object* v___x_837_; uint8_t v___x_838_; 
v___x_836_ = lean_array_get_size(v_params_832_);
v___x_837_ = lean_array_get_size(v_params_828_);
v___x_838_ = lean_nat_dec_eq(v___x_836_, v___x_837_);
if (v___x_838_ == 0)
{
lean_dec_ref(v_value_834_);
lean_dec_ref(v_params_832_);
lean_dec(v_fvarId_831_);
lean_dec_ref(v_value_830_);
lean_dec_ref(v_params_828_);
lean_dec(v_fvarId_827_);
lean_dec_ref(v_k_826_);
lean_dec_ref(v_k_825_);
lean_dec(v_a_786_);
return v___x_838_;
}
else
{
lean_object* v___x_839_; uint8_t v___x_840_; 
v___x_839_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_786_);
v___x_840_ = l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__0___redArg(v_pu_783_, v_value_830_, v_value_834_, v_params_828_, v_params_832_, v___x_839_, v_a_786_);
lean_dec_ref(v_params_832_);
lean_dec_ref(v_params_828_);
if (v___x_840_ == 0)
{
lean_dec(v_fvarId_831_);
lean_dec(v_fvarId_827_);
lean_dec_ref(v_k_826_);
lean_dec_ref(v_k_825_);
lean_dec(v_a_786_);
return v___x_840_;
}
else
{
lean_object* v___x_841_; 
v___x_841_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_831_, v_fvarId_827_, v_a_786_);
v_code_u2081_784_ = v_k_825_;
v_code_u2082_785_ = v_k_826_;
v_a_786_ = v___x_841_;
goto _start;
}
}
}
}
else
{
uint8_t v___x_843_; 
lean_dec_ref_known(v_code_u2081_784_, 2);
lean_dec(v_a_786_);
lean_dec_ref(v_code_u2082_785_);
v___x_843_ = 0;
return v___x_843_;
}
}
case 3:
{
if (lean_obj_tag(v_code_u2082_785_) == 3)
{
lean_object* v_fvarId_844_; lean_object* v_args_845_; lean_object* v_fvarId_846_; lean_object* v_args_847_; uint8_t v___x_848_; 
v_fvarId_844_ = lean_ctor_get(v_code_u2081_784_, 0);
lean_inc(v_fvarId_844_);
v_args_845_ = lean_ctor_get(v_code_u2081_784_, 1);
lean_inc_ref(v_args_845_);
lean_dec_ref_known(v_code_u2081_784_, 2);
v_fvarId_846_ = lean_ctor_get(v_code_u2082_785_, 0);
lean_inc(v_fvarId_846_);
v_args_847_ = lean_ctor_get(v_code_u2082_785_, 1);
lean_inc_ref(v_args_847_);
lean_dec_ref_known(v_code_u2082_785_, 2);
v___x_848_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_844_, v_fvarId_846_, v_a_786_);
lean_dec(v_fvarId_846_);
lean_dec(v_fvarId_844_);
if (v___x_848_ == 0)
{
lean_dec_ref(v_args_847_);
lean_dec_ref(v_args_845_);
lean_dec(v_a_786_);
return v___x_848_;
}
else
{
uint8_t v___x_849_; 
v___x_849_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvArgs(v_pu_783_, v_args_845_, v_args_847_, v_a_786_);
lean_dec(v_a_786_);
lean_dec_ref(v_args_845_);
return v___x_849_;
}
}
else
{
uint8_t v___x_850_; 
lean_dec_ref_known(v_code_u2081_784_, 2);
lean_dec(v_a_786_);
lean_dec_ref(v_code_u2082_785_);
v___x_850_ = 0;
return v___x_850_;
}
}
case 4:
{
if (lean_obj_tag(v_code_u2082_785_) == 4)
{
lean_object* v_cases_851_; lean_object* v_cases_852_; lean_object* v_resultType_853_; lean_object* v_discr_854_; lean_object* v_alts_855_; lean_object* v_resultType_856_; lean_object* v_discr_857_; lean_object* v_alts_858_; uint8_t v___x_859_; 
v_cases_851_ = lean_ctor_get(v_code_u2081_784_, 0);
lean_inc_ref(v_cases_851_);
lean_dec_ref_known(v_code_u2081_784_, 1);
v_cases_852_ = lean_ctor_get(v_code_u2082_785_, 0);
lean_inc_ref(v_cases_852_);
lean_dec_ref_known(v_code_u2082_785_, 1);
v_resultType_853_ = lean_ctor_get(v_cases_851_, 1);
lean_inc_ref(v_resultType_853_);
v_discr_854_ = lean_ctor_get(v_cases_851_, 2);
lean_inc(v_discr_854_);
v_alts_855_ = lean_ctor_get(v_cases_851_, 3);
lean_inc_ref(v_alts_855_);
lean_dec_ref(v_cases_851_);
v_resultType_856_ = lean_ctor_get(v_cases_852_, 1);
lean_inc_ref(v_resultType_856_);
v_discr_857_ = lean_ctor_get(v_cases_852_, 2);
lean_inc(v_discr_857_);
v_alts_858_ = lean_ctor_get(v_cases_852_, 3);
lean_inc_ref(v_alts_858_);
lean_dec_ref(v_cases_852_);
v___x_859_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_discr_854_, v_discr_857_, v_a_786_);
lean_dec(v_discr_857_);
lean_dec(v_discr_854_);
if (v___x_859_ == 0)
{
lean_dec_ref(v_alts_858_);
lean_dec_ref(v_resultType_856_);
lean_dec_ref(v_alts_855_);
lean_dec_ref(v_resultType_853_);
lean_dec(v_a_786_);
return v___x_859_;
}
else
{
uint8_t v___x_860_; 
v___x_860_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvType(v_resultType_853_, v_resultType_856_, v_a_786_);
lean_dec_ref(v_resultType_856_);
lean_dec_ref(v_resultType_853_);
if (v___x_860_ == 0)
{
lean_dec_ref(v_alts_858_);
lean_dec_ref(v_alts_855_);
lean_dec(v_a_786_);
return v___x_860_;
}
else
{
uint8_t v___x_861_; 
v___x_861_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvAlts(v_pu_783_, v_alts_855_, v_alts_858_, v_a_786_);
lean_dec(v_a_786_);
return v___x_861_;
}
}
}
else
{
uint8_t v___x_862_; 
lean_dec_ref_known(v_code_u2081_784_, 1);
lean_dec(v_a_786_);
lean_dec_ref(v_code_u2082_785_);
v___x_862_ = 0;
return v___x_862_;
}
}
case 5:
{
if (lean_obj_tag(v_code_u2082_785_) == 5)
{
lean_object* v_fvarId_863_; lean_object* v_fvarId_864_; uint8_t v___x_865_; 
v_fvarId_863_ = lean_ctor_get(v_code_u2081_784_, 0);
lean_inc(v_fvarId_863_);
lean_dec_ref_known(v_code_u2081_784_, 1);
v_fvarId_864_ = lean_ctor_get(v_code_u2082_785_, 0);
lean_inc(v_fvarId_864_);
lean_dec_ref_known(v_code_u2082_785_, 1);
v___x_865_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_863_, v_fvarId_864_, v_a_786_);
lean_dec(v_a_786_);
lean_dec(v_fvarId_864_);
lean_dec(v_fvarId_863_);
return v___x_865_;
}
else
{
uint8_t v___x_866_; 
lean_dec_ref_known(v_code_u2081_784_, 1);
lean_dec(v_a_786_);
lean_dec_ref(v_code_u2082_785_);
v___x_866_ = 0;
return v___x_866_;
}
}
case 6:
{
if (lean_obj_tag(v_code_u2082_785_) == 6)
{
lean_object* v_type_867_; lean_object* v_type_868_; uint8_t v___x_869_; 
v_type_867_ = lean_ctor_get(v_code_u2081_784_, 0);
lean_inc_ref(v_type_867_);
lean_dec_ref_known(v_code_u2081_784_, 1);
v_type_868_ = lean_ctor_get(v_code_u2082_785_, 0);
lean_inc_ref(v_type_868_);
lean_dec_ref_known(v_code_u2082_785_, 1);
v___x_869_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvType(v_type_867_, v_type_868_, v_a_786_);
lean_dec(v_a_786_);
lean_dec_ref(v_type_868_);
lean_dec_ref(v_type_867_);
return v___x_869_;
}
else
{
uint8_t v___x_870_; 
lean_dec_ref_known(v_code_u2081_784_, 1);
lean_dec(v_a_786_);
lean_dec_ref(v_code_u2082_785_);
v___x_870_ = 0;
return v___x_870_;
}
}
case 7:
{
if (lean_obj_tag(v_code_u2082_785_) == 7)
{
lean_object* v_fvarId_871_; lean_object* v_i_872_; lean_object* v_y_873_; lean_object* v_k_874_; lean_object* v_fvarId_875_; lean_object* v_i_876_; lean_object* v_y_877_; lean_object* v_k_878_; uint8_t v___x_879_; 
v_fvarId_871_ = lean_ctor_get(v_code_u2081_784_, 0);
lean_inc(v_fvarId_871_);
v_i_872_ = lean_ctor_get(v_code_u2081_784_, 1);
lean_inc(v_i_872_);
v_y_873_ = lean_ctor_get(v_code_u2081_784_, 2);
lean_inc(v_y_873_);
v_k_874_ = lean_ctor_get(v_code_u2081_784_, 3);
lean_inc_ref(v_k_874_);
lean_dec_ref_known(v_code_u2081_784_, 4);
v_fvarId_875_ = lean_ctor_get(v_code_u2082_785_, 0);
lean_inc(v_fvarId_875_);
v_i_876_ = lean_ctor_get(v_code_u2082_785_, 1);
lean_inc(v_i_876_);
v_y_877_ = lean_ctor_get(v_code_u2082_785_, 2);
lean_inc(v_y_877_);
v_k_878_ = lean_ctor_get(v_code_u2082_785_, 3);
lean_inc_ref(v_k_878_);
lean_dec_ref_known(v_code_u2082_785_, 4);
v___x_879_ = lean_nat_dec_eq(v_i_872_, v_i_876_);
lean_dec(v_i_876_);
lean_dec(v_i_872_);
if (v___x_879_ == 0)
{
lean_dec_ref(v_k_878_);
lean_dec(v_y_877_);
lean_dec(v_fvarId_875_);
lean_dec_ref(v_k_874_);
lean_dec(v_y_873_);
lean_dec(v_fvarId_871_);
lean_dec(v_a_786_);
return v___x_879_;
}
else
{
uint8_t v___x_880_; 
v___x_880_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_871_, v_fvarId_875_, v_a_786_);
lean_dec(v_fvarId_875_);
lean_dec(v_fvarId_871_);
if (v___x_880_ == 0)
{
lean_dec_ref(v_k_878_);
lean_dec(v_y_877_);
lean_dec_ref(v_k_874_);
lean_dec(v_y_873_);
lean_dec(v_a_786_);
return v___x_880_;
}
else
{
uint8_t v___x_881_; 
v___x_881_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvArg___redArg(v_y_873_, v_y_877_, v_a_786_);
lean_dec(v_y_877_);
lean_dec(v_y_873_);
if (v___x_881_ == 0)
{
lean_dec_ref(v_k_878_);
lean_dec_ref(v_k_874_);
lean_dec(v_a_786_);
return v___x_881_;
}
else
{
v_code_u2081_784_ = v_k_874_;
v_code_u2082_785_ = v_k_878_;
goto _start;
}
}
}
}
else
{
uint8_t v___x_883_; 
lean_dec_ref_known(v_code_u2081_784_, 4);
lean_dec(v_a_786_);
lean_dec_ref(v_code_u2082_785_);
v___x_883_ = 0;
return v___x_883_;
}
}
case 8:
{
if (lean_obj_tag(v_code_u2082_785_) == 8)
{
lean_object* v_fvarId_884_; lean_object* v_i_885_; lean_object* v_y_886_; lean_object* v_k_887_; lean_object* v_fvarId_888_; lean_object* v_i_889_; lean_object* v_y_890_; lean_object* v_k_891_; uint8_t v___x_892_; 
v_fvarId_884_ = lean_ctor_get(v_code_u2081_784_, 0);
lean_inc(v_fvarId_884_);
v_i_885_ = lean_ctor_get(v_code_u2081_784_, 1);
lean_inc(v_i_885_);
v_y_886_ = lean_ctor_get(v_code_u2081_784_, 2);
lean_inc(v_y_886_);
v_k_887_ = lean_ctor_get(v_code_u2081_784_, 3);
lean_inc_ref(v_k_887_);
lean_dec_ref_known(v_code_u2081_784_, 4);
v_fvarId_888_ = lean_ctor_get(v_code_u2082_785_, 0);
lean_inc(v_fvarId_888_);
v_i_889_ = lean_ctor_get(v_code_u2082_785_, 1);
lean_inc(v_i_889_);
v_y_890_ = lean_ctor_get(v_code_u2082_785_, 2);
lean_inc(v_y_890_);
v_k_891_ = lean_ctor_get(v_code_u2082_785_, 3);
lean_inc_ref(v_k_891_);
lean_dec_ref_known(v_code_u2082_785_, 4);
v___x_892_ = lean_nat_dec_eq(v_i_885_, v_i_889_);
lean_dec(v_i_889_);
lean_dec(v_i_885_);
if (v___x_892_ == 0)
{
lean_dec_ref(v_k_891_);
lean_dec(v_y_890_);
lean_dec(v_fvarId_888_);
lean_dec_ref(v_k_887_);
lean_dec(v_y_886_);
lean_dec(v_fvarId_884_);
lean_dec(v_a_786_);
return v___x_892_;
}
else
{
uint8_t v___x_893_; 
v___x_893_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_884_, v_fvarId_888_, v_a_786_);
lean_dec(v_fvarId_888_);
lean_dec(v_fvarId_884_);
if (v___x_893_ == 0)
{
lean_dec_ref(v_k_891_);
lean_dec(v_y_890_);
lean_dec_ref(v_k_887_);
lean_dec(v_y_886_);
lean_dec(v_a_786_);
return v___x_893_;
}
else
{
uint8_t v___x_894_; 
v___x_894_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_y_886_, v_y_890_, v_a_786_);
lean_dec(v_y_890_);
lean_dec(v_y_886_);
if (v___x_894_ == 0)
{
lean_dec_ref(v_k_891_);
lean_dec_ref(v_k_887_);
lean_dec(v_a_786_);
return v___x_894_;
}
else
{
v_code_u2081_784_ = v_k_887_;
v_code_u2082_785_ = v_k_891_;
goto _start;
}
}
}
}
else
{
uint8_t v___x_896_; 
lean_dec_ref_known(v_code_u2081_784_, 4);
lean_dec(v_a_786_);
lean_dec_ref(v_code_u2082_785_);
v___x_896_ = 0;
return v___x_896_;
}
}
case 9:
{
if (lean_obj_tag(v_code_u2082_785_) == 9)
{
lean_object* v_fvarId_897_; lean_object* v_i_898_; lean_object* v_offset_899_; lean_object* v_y_900_; lean_object* v_ty_901_; lean_object* v_k_902_; lean_object* v_fvarId_903_; lean_object* v_i_904_; lean_object* v_offset_905_; lean_object* v_y_906_; lean_object* v_ty_907_; lean_object* v_k_908_; uint8_t v___x_909_; 
v_fvarId_897_ = lean_ctor_get(v_code_u2081_784_, 0);
lean_inc(v_fvarId_897_);
v_i_898_ = lean_ctor_get(v_code_u2081_784_, 1);
lean_inc(v_i_898_);
v_offset_899_ = lean_ctor_get(v_code_u2081_784_, 2);
lean_inc(v_offset_899_);
v_y_900_ = lean_ctor_get(v_code_u2081_784_, 3);
lean_inc(v_y_900_);
v_ty_901_ = lean_ctor_get(v_code_u2081_784_, 4);
lean_inc_ref(v_ty_901_);
v_k_902_ = lean_ctor_get(v_code_u2081_784_, 5);
lean_inc_ref(v_k_902_);
lean_dec_ref_known(v_code_u2081_784_, 6);
v_fvarId_903_ = lean_ctor_get(v_code_u2082_785_, 0);
lean_inc(v_fvarId_903_);
v_i_904_ = lean_ctor_get(v_code_u2082_785_, 1);
lean_inc(v_i_904_);
v_offset_905_ = lean_ctor_get(v_code_u2082_785_, 2);
lean_inc(v_offset_905_);
v_y_906_ = lean_ctor_get(v_code_u2082_785_, 3);
lean_inc(v_y_906_);
v_ty_907_ = lean_ctor_get(v_code_u2082_785_, 4);
lean_inc_ref(v_ty_907_);
v_k_908_ = lean_ctor_get(v_code_u2082_785_, 5);
lean_inc_ref(v_k_908_);
lean_dec_ref_known(v_code_u2082_785_, 6);
v___x_909_ = lean_nat_dec_eq(v_i_898_, v_i_904_);
lean_dec(v_i_904_);
lean_dec(v_i_898_);
if (v___x_909_ == 0)
{
lean_dec_ref(v_k_908_);
lean_dec_ref(v_ty_907_);
lean_dec(v_y_906_);
lean_dec(v_offset_905_);
lean_dec(v_fvarId_903_);
lean_dec_ref(v_k_902_);
lean_dec_ref(v_ty_901_);
lean_dec(v_y_900_);
lean_dec(v_offset_899_);
lean_dec(v_fvarId_897_);
lean_dec(v_a_786_);
return v___x_909_;
}
else
{
uint8_t v___x_910_; 
v___x_910_ = lean_nat_dec_eq(v_offset_899_, v_offset_905_);
lean_dec(v_offset_905_);
lean_dec(v_offset_899_);
if (v___x_910_ == 0)
{
lean_dec_ref(v_k_908_);
lean_dec_ref(v_ty_907_);
lean_dec(v_y_906_);
lean_dec(v_fvarId_903_);
lean_dec_ref(v_k_902_);
lean_dec_ref(v_ty_901_);
lean_dec(v_y_900_);
lean_dec(v_fvarId_897_);
lean_dec(v_a_786_);
return v___x_910_;
}
else
{
uint8_t v___x_911_; 
v___x_911_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_897_, v_fvarId_903_, v_a_786_);
lean_dec(v_fvarId_903_);
lean_dec(v_fvarId_897_);
if (v___x_911_ == 0)
{
lean_dec_ref(v_k_908_);
lean_dec_ref(v_ty_907_);
lean_dec(v_y_906_);
lean_dec_ref(v_k_902_);
lean_dec_ref(v_ty_901_);
lean_dec(v_y_900_);
lean_dec(v_a_786_);
return v___x_911_;
}
else
{
uint8_t v___x_912_; 
v___x_912_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_y_900_, v_y_906_, v_a_786_);
lean_dec(v_y_906_);
lean_dec(v_y_900_);
if (v___x_912_ == 0)
{
lean_dec_ref(v_k_908_);
lean_dec_ref(v_ty_907_);
lean_dec_ref(v_k_902_);
lean_dec_ref(v_ty_901_);
lean_dec(v_a_786_);
return v___x_912_;
}
else
{
uint8_t v___x_913_; 
v___x_913_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvType(v_ty_901_, v_ty_907_, v_a_786_);
lean_dec_ref(v_ty_907_);
lean_dec_ref(v_ty_901_);
if (v___x_913_ == 0)
{
lean_dec_ref(v_k_908_);
lean_dec_ref(v_k_902_);
lean_dec(v_a_786_);
return v___x_913_;
}
else
{
v_code_u2081_784_ = v_k_902_;
v_code_u2082_785_ = v_k_908_;
goto _start;
}
}
}
}
}
}
else
{
uint8_t v___x_915_; 
lean_dec_ref_known(v_code_u2081_784_, 6);
lean_dec(v_a_786_);
lean_dec_ref(v_code_u2082_785_);
v___x_915_ = 0;
return v___x_915_;
}
}
case 10:
{
if (lean_obj_tag(v_code_u2082_785_) == 10)
{
lean_object* v_fvarId_916_; lean_object* v_cidx_917_; lean_object* v_k_918_; lean_object* v_fvarId_919_; lean_object* v_cidx_920_; lean_object* v_k_921_; uint8_t v___x_922_; 
v_fvarId_916_ = lean_ctor_get(v_code_u2081_784_, 0);
lean_inc(v_fvarId_916_);
v_cidx_917_ = lean_ctor_get(v_code_u2081_784_, 1);
lean_inc(v_cidx_917_);
v_k_918_ = lean_ctor_get(v_code_u2081_784_, 2);
lean_inc_ref(v_k_918_);
lean_dec_ref_known(v_code_u2081_784_, 3);
v_fvarId_919_ = lean_ctor_get(v_code_u2082_785_, 0);
lean_inc(v_fvarId_919_);
v_cidx_920_ = lean_ctor_get(v_code_u2082_785_, 1);
lean_inc(v_cidx_920_);
v_k_921_ = lean_ctor_get(v_code_u2082_785_, 2);
lean_inc_ref(v_k_921_);
lean_dec_ref_known(v_code_u2082_785_, 3);
v___x_922_ = lean_nat_dec_eq(v_cidx_917_, v_cidx_920_);
lean_dec(v_cidx_920_);
lean_dec(v_cidx_917_);
if (v___x_922_ == 0)
{
lean_dec_ref(v_k_921_);
lean_dec(v_fvarId_919_);
lean_dec_ref(v_k_918_);
lean_dec(v_fvarId_916_);
lean_dec(v_a_786_);
return v___x_922_;
}
else
{
uint8_t v___x_923_; 
v___x_923_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_916_, v_fvarId_919_, v_a_786_);
lean_dec(v_fvarId_919_);
lean_dec(v_fvarId_916_);
if (v___x_923_ == 0)
{
lean_dec_ref(v_k_921_);
lean_dec_ref(v_k_918_);
lean_dec(v_a_786_);
return v___x_923_;
}
else
{
v_code_u2081_784_ = v_k_918_;
v_code_u2082_785_ = v_k_921_;
goto _start;
}
}
}
else
{
uint8_t v___x_925_; 
lean_dec_ref_known(v_code_u2081_784_, 3);
lean_dec(v_a_786_);
lean_dec_ref(v_code_u2082_785_);
v___x_925_ = 0;
return v___x_925_;
}
}
case 11:
{
if (lean_obj_tag(v_code_u2082_785_) == 11)
{
lean_object* v_fvarId_926_; lean_object* v_n_927_; uint8_t v_check_928_; uint8_t v_persistent_929_; lean_object* v_k_930_; lean_object* v_fvarId_931_; lean_object* v_n_932_; uint8_t v_check_933_; uint8_t v_persistent_934_; lean_object* v_k_935_; uint8_t v___y_940_; uint8_t v___x_941_; 
v_fvarId_926_ = lean_ctor_get(v_code_u2081_784_, 0);
lean_inc(v_fvarId_926_);
v_n_927_ = lean_ctor_get(v_code_u2081_784_, 1);
lean_inc(v_n_927_);
v_check_928_ = lean_ctor_get_uint8(v_code_u2081_784_, sizeof(void*)*3);
v_persistent_929_ = lean_ctor_get_uint8(v_code_u2081_784_, sizeof(void*)*3 + 1);
v_k_930_ = lean_ctor_get(v_code_u2081_784_, 2);
lean_inc_ref(v_k_930_);
lean_dec_ref_known(v_code_u2081_784_, 3);
v_fvarId_931_ = lean_ctor_get(v_code_u2082_785_, 0);
lean_inc(v_fvarId_931_);
v_n_932_ = lean_ctor_get(v_code_u2082_785_, 1);
lean_inc(v_n_932_);
v_check_933_ = lean_ctor_get_uint8(v_code_u2082_785_, sizeof(void*)*3);
v_persistent_934_ = lean_ctor_get_uint8(v_code_u2082_785_, sizeof(void*)*3 + 1);
v_k_935_ = lean_ctor_get(v_code_u2082_785_, 2);
lean_inc_ref(v_k_935_);
lean_dec_ref_known(v_code_u2082_785_, 3);
v___x_941_ = lean_nat_dec_eq(v_n_927_, v_n_932_);
lean_dec(v_n_932_);
lean_dec(v_n_927_);
if (v___x_941_ == 0)
{
lean_dec_ref(v_k_935_);
lean_dec(v_fvarId_931_);
lean_dec_ref(v_k_930_);
lean_dec(v_fvarId_926_);
lean_dec(v_a_786_);
return v___x_941_;
}
else
{
if (v_check_933_ == 0)
{
if (v_check_928_ == 0)
{
v___y_940_ = v___x_941_;
goto v___jp_939_;
}
else
{
lean_dec_ref(v_k_935_);
lean_dec(v_fvarId_931_);
lean_dec_ref(v_k_930_);
lean_dec(v_fvarId_926_);
lean_dec(v_a_786_);
return v_check_933_;
}
}
else
{
v___y_940_ = v_check_928_;
goto v___jp_939_;
}
}
v___jp_936_:
{
uint8_t v___x_937_; 
v___x_937_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_926_, v_fvarId_931_, v_a_786_);
lean_dec(v_fvarId_931_);
lean_dec(v_fvarId_926_);
if (v___x_937_ == 0)
{
lean_dec_ref(v_k_935_);
lean_dec_ref(v_k_930_);
lean_dec(v_a_786_);
return v___x_937_;
}
else
{
v_code_u2081_784_ = v_k_930_;
v_code_u2082_785_ = v_k_935_;
goto _start;
}
}
v___jp_939_:
{
if (v___y_940_ == 0)
{
lean_dec_ref(v_k_935_);
lean_dec(v_fvarId_931_);
lean_dec_ref(v_k_930_);
lean_dec(v_fvarId_926_);
lean_dec(v_a_786_);
return v___y_940_;
}
else
{
if (v_persistent_934_ == 0)
{
if (v_persistent_929_ == 0)
{
goto v___jp_936_;
}
else
{
lean_dec_ref(v_k_935_);
lean_dec(v_fvarId_931_);
lean_dec_ref(v_k_930_);
lean_dec(v_fvarId_926_);
lean_dec(v_a_786_);
return v_persistent_934_;
}
}
else
{
if (v_persistent_929_ == 0)
{
lean_dec_ref(v_k_935_);
lean_dec(v_fvarId_931_);
lean_dec_ref(v_k_930_);
lean_dec(v_fvarId_926_);
lean_dec(v_a_786_);
return v_persistent_929_;
}
else
{
goto v___jp_936_;
}
}
}
}
}
else
{
uint8_t v___x_942_; 
lean_dec_ref_known(v_code_u2081_784_, 3);
lean_dec(v_a_786_);
lean_dec_ref(v_code_u2082_785_);
v___x_942_ = 0;
return v___x_942_;
}
}
case 12:
{
if (lean_obj_tag(v_code_u2082_785_) == 12)
{
lean_object* v_fvarId_943_; lean_object* v_n_944_; uint8_t v_check_945_; uint8_t v_persistent_946_; lean_object* v_objs_x3f_947_; lean_object* v_k_948_; lean_object* v_fvarId_949_; lean_object* v_n_950_; uint8_t v_check_951_; uint8_t v_persistent_952_; lean_object* v_objs_x3f_953_; lean_object* v_k_954_; uint8_t v___y_960_; uint8_t v___x_961_; 
v_fvarId_943_ = lean_ctor_get(v_code_u2081_784_, 0);
lean_inc(v_fvarId_943_);
v_n_944_ = lean_ctor_get(v_code_u2081_784_, 1);
lean_inc(v_n_944_);
v_check_945_ = lean_ctor_get_uint8(v_code_u2081_784_, sizeof(void*)*4);
v_persistent_946_ = lean_ctor_get_uint8(v_code_u2081_784_, sizeof(void*)*4 + 1);
v_objs_x3f_947_ = lean_ctor_get(v_code_u2081_784_, 2);
lean_inc(v_objs_x3f_947_);
v_k_948_ = lean_ctor_get(v_code_u2081_784_, 3);
lean_inc_ref(v_k_948_);
lean_dec_ref_known(v_code_u2081_784_, 4);
v_fvarId_949_ = lean_ctor_get(v_code_u2082_785_, 0);
lean_inc(v_fvarId_949_);
v_n_950_ = lean_ctor_get(v_code_u2082_785_, 1);
lean_inc(v_n_950_);
v_check_951_ = lean_ctor_get_uint8(v_code_u2082_785_, sizeof(void*)*4);
v_persistent_952_ = lean_ctor_get_uint8(v_code_u2082_785_, sizeof(void*)*4 + 1);
v_objs_x3f_953_ = lean_ctor_get(v_code_u2082_785_, 2);
lean_inc(v_objs_x3f_953_);
v_k_954_ = lean_ctor_get(v_code_u2082_785_, 3);
lean_inc_ref(v_k_954_);
lean_dec_ref_known(v_code_u2082_785_, 4);
v___x_961_ = lean_nat_dec_eq(v_n_944_, v_n_950_);
lean_dec(v_n_950_);
lean_dec(v_n_944_);
if (v___x_961_ == 0)
{
lean_dec_ref(v_k_954_);
lean_dec(v_objs_x3f_953_);
lean_dec(v_fvarId_949_);
lean_dec_ref(v_k_948_);
lean_dec(v_objs_x3f_947_);
lean_dec(v_fvarId_943_);
lean_dec(v_a_786_);
return v___x_961_;
}
else
{
if (v_check_951_ == 0)
{
if (v_check_945_ == 0)
{
v___y_960_ = v___x_961_;
goto v___jp_959_;
}
else
{
lean_dec_ref(v_k_954_);
lean_dec(v_objs_x3f_953_);
lean_dec(v_fvarId_949_);
lean_dec_ref(v_k_948_);
lean_dec(v_objs_x3f_947_);
lean_dec(v_fvarId_943_);
lean_dec(v_a_786_);
return v_check_951_;
}
}
else
{
v___y_960_ = v_check_945_;
goto v___jp_959_;
}
}
v___jp_955_:
{
uint8_t v___x_956_; 
v___x_956_ = l_Option_instBEq_beq___at___00Lean_Compiler_LCNF_AlphaEqv_eqv_spec__3(v_objs_x3f_947_, v_objs_x3f_953_);
lean_dec(v_objs_x3f_953_);
lean_dec(v_objs_x3f_947_);
if (v___x_956_ == 0)
{
lean_dec_ref(v_k_954_);
lean_dec(v_fvarId_949_);
lean_dec_ref(v_k_948_);
lean_dec(v_fvarId_943_);
lean_dec(v_a_786_);
return v___x_956_;
}
else
{
uint8_t v___x_957_; 
v___x_957_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_943_, v_fvarId_949_, v_a_786_);
lean_dec(v_fvarId_949_);
lean_dec(v_fvarId_943_);
if (v___x_957_ == 0)
{
lean_dec_ref(v_k_954_);
lean_dec_ref(v_k_948_);
lean_dec(v_a_786_);
return v___x_957_;
}
else
{
v_code_u2081_784_ = v_k_948_;
v_code_u2082_785_ = v_k_954_;
goto _start;
}
}
}
v___jp_959_:
{
if (v___y_960_ == 0)
{
lean_dec_ref(v_k_954_);
lean_dec(v_objs_x3f_953_);
lean_dec(v_fvarId_949_);
lean_dec_ref(v_k_948_);
lean_dec(v_objs_x3f_947_);
lean_dec(v_fvarId_943_);
lean_dec(v_a_786_);
return v___y_960_;
}
else
{
if (v_persistent_952_ == 0)
{
if (v_persistent_946_ == 0)
{
goto v___jp_955_;
}
else
{
lean_dec_ref(v_k_954_);
lean_dec(v_objs_x3f_953_);
lean_dec(v_fvarId_949_);
lean_dec_ref(v_k_948_);
lean_dec(v_objs_x3f_947_);
lean_dec(v_fvarId_943_);
lean_dec(v_a_786_);
return v_persistent_952_;
}
}
else
{
if (v_persistent_946_ == 0)
{
lean_dec_ref(v_k_954_);
lean_dec(v_objs_x3f_953_);
lean_dec(v_fvarId_949_);
lean_dec_ref(v_k_948_);
lean_dec(v_objs_x3f_947_);
lean_dec(v_fvarId_943_);
lean_dec(v_a_786_);
return v_persistent_946_;
}
else
{
goto v___jp_955_;
}
}
}
}
}
else
{
uint8_t v___x_962_; 
lean_dec_ref_known(v_code_u2081_784_, 4);
lean_dec(v_a_786_);
lean_dec_ref(v_code_u2082_785_);
v___x_962_ = 0;
return v___x_962_;
}
}
default: 
{
if (lean_obj_tag(v_code_u2082_785_) == 13)
{
lean_object* v_fvarId_963_; lean_object* v_k_964_; lean_object* v_fvarId_965_; lean_object* v_k_966_; uint8_t v___x_967_; 
v_fvarId_963_ = lean_ctor_get(v_code_u2081_784_, 0);
lean_inc(v_fvarId_963_);
v_k_964_ = lean_ctor_get(v_code_u2081_784_, 1);
lean_inc_ref(v_k_964_);
lean_dec_ref_known(v_code_u2081_784_, 2);
v_fvarId_965_ = lean_ctor_get(v_code_u2082_785_, 0);
lean_inc(v_fvarId_965_);
v_k_966_ = lean_ctor_get(v_code_u2082_785_, 1);
lean_inc_ref(v_k_966_);
lean_dec_ref_known(v_code_u2082_785_, 2);
v___x_967_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvFVar(v_fvarId_963_, v_fvarId_965_, v_a_786_);
lean_dec(v_fvarId_965_);
lean_dec(v_fvarId_963_);
if (v___x_967_ == 0)
{
lean_dec_ref(v_k_966_);
lean_dec_ref(v_k_964_);
lean_dec(v_a_786_);
return v___x_967_;
}
else
{
v_code_u2081_784_ = v_k_964_;
v_code_u2082_785_ = v_k_966_;
goto _start;
}
}
else
{
uint8_t v___x_969_; 
lean_dec_ref_known(v_code_u2081_784_, 2);
lean_dec(v_a_786_);
lean_dec_ref(v_code_u2082_785_);
v___x_969_ = 0;
return v___x_969_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__0___redArg(uint8_t v_pu_970_, lean_object* v_code_971_, lean_object* v_code_972_, lean_object* v_params_u2081_973_, lean_object* v_params_u2082_974_, lean_object* v_i_975_, lean_object* v_a_976_){
_start:
{
lean_object* v___x_977_; uint8_t v___x_978_; 
v___x_977_ = lean_array_get_size(v_params_u2081_973_);
v___x_978_ = lean_nat_dec_lt(v_i_975_, v___x_977_);
if (v___x_978_ == 0)
{
uint8_t v___x_979_; 
lean_dec(v_i_975_);
v___x_979_ = l_Lean_Compiler_LCNF_AlphaEqv_eqv(v_pu_970_, v_code_971_, v_code_972_, v_a_976_);
return v___x_979_;
}
else
{
lean_object* v_p_u2081_980_; lean_object* v_fvarId_981_; lean_object* v_type_982_; lean_object* v_p_u2082_983_; lean_object* v_fvarId_984_; lean_object* v_type_985_; uint8_t v___x_986_; 
v_p_u2081_980_ = lean_array_fget_borrowed(v_params_u2081_973_, v_i_975_);
v_fvarId_981_ = lean_ctor_get(v_p_u2081_980_, 0);
v_type_982_ = lean_ctor_get(v_p_u2081_980_, 2);
v_p_u2082_983_ = lean_array_fget_borrowed(v_params_u2082_974_, v_i_975_);
v_fvarId_984_ = lean_ctor_get(v_p_u2082_983_, 0);
v_type_985_ = lean_ctor_get(v_p_u2082_983_, 2);
v___x_986_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvType(v_type_982_, v_type_985_, v_a_976_);
if (v___x_986_ == 0)
{
lean_dec(v_a_976_);
lean_dec(v_i_975_);
lean_dec_ref(v_code_972_);
lean_dec_ref(v_code_971_);
return v___x_986_;
}
else
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_987_ = lean_unsigned_to_nat(1u);
v___x_988_ = lean_nat_add(v_i_975_, v___x_987_);
lean_dec(v_i_975_);
lean_inc(v_fvarId_981_);
lean_inc(v_fvarId_984_);
v___x_989_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_984_, v_fvarId_981_, v_a_976_);
v_i_975_ = v___x_988_;
v_a_976_ = v___x_989_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__0___redArg___boxed(lean_object* v_pu_991_, lean_object* v_code_992_, lean_object* v_code_993_, lean_object* v_params_u2081_994_, lean_object* v_params_u2082_995_, lean_object* v_i_996_, lean_object* v_a_997_){
_start:
{
uint8_t v_pu_boxed_998_; uint8_t v_res_999_; lean_object* v_r_1000_; 
v_pu_boxed_998_ = lean_unbox(v_pu_991_);
v_res_999_ = l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__0___redArg(v_pu_boxed_998_, v_code_992_, v_code_993_, v_params_u2081_994_, v_params_u2082_995_, v_i_996_, v_a_997_);
lean_dec_ref(v_params_u2082_995_);
lean_dec_ref(v_params_u2081_994_);
v_r_1000_ = lean_box(v_res_999_);
return v_r_1000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqvAlts___boxed(lean_object* v_pu_1001_, lean_object* v_alts_u2081_1002_, lean_object* v_alts_u2082_1003_, lean_object* v_a_1004_){
_start:
{
uint8_t v_pu_boxed_1005_; uint8_t v_res_1006_; lean_object* v_r_1007_; 
v_pu_boxed_1005_ = lean_unbox(v_pu_1001_);
v_res_1006_ = l_Lean_Compiler_LCNF_AlphaEqv_eqvAlts(v_pu_boxed_1005_, v_alts_u2081_1002_, v_alts_u2082_1003_, v_a_1004_);
lean_dec(v_a_1004_);
v_r_1007_ = lean_box(v_res_1006_);
return v_r_1007_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__1___boxed(lean_object* v_pu_1008_, lean_object* v_as_1009_, lean_object* v_sz_1010_, lean_object* v_i_1011_, lean_object* v_b_1012_, lean_object* v___y_1013_){
_start:
{
uint8_t v_pu_boxed_1014_; size_t v_sz_boxed_1015_; size_t v_i_boxed_1016_; lean_object* v_res_1017_; 
v_pu_boxed_1014_ = lean_unbox(v_pu_1008_);
v_sz_boxed_1015_ = lean_unbox_usize(v_sz_1010_);
lean_dec(v_sz_1010_);
v_i_boxed_1016_ = lean_unbox_usize(v_i_1011_);
lean_dec(v_i_1011_);
v_res_1017_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__1(v_pu_boxed_1014_, v_as_1009_, v_sz_boxed_1015_, v_i_boxed_1016_, v_b_1012_, v___y_1013_);
lean_dec(v___y_1013_);
lean_dec_ref(v_as_1009_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_AlphaEqv_eqv___boxed(lean_object* v_pu_1018_, lean_object* v_code_u2081_1019_, lean_object* v_code_u2082_1020_, lean_object* v_a_1021_){
_start:
{
uint8_t v_pu_boxed_1022_; uint8_t v_res_1023_; lean_object* v_r_1024_; 
v_pu_boxed_1022_ = lean_unbox(v_pu_1018_);
v_res_1023_ = l_Lean_Compiler_LCNF_AlphaEqv_eqv(v_pu_boxed_1022_, v_code_u2081_1019_, v_code_u2082_1020_, v_a_1021_);
v_r_1024_ = lean_box(v_res_1023_);
return v_r_1024_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__0(uint8_t v_pu_1025_, lean_object* v_code_1026_, lean_object* v_code_1027_, uint8_t v_pu_1028_, lean_object* v_params_u2081_1029_, lean_object* v_params_u2082_1030_, lean_object* v_h_1031_, lean_object* v_i_1032_, lean_object* v_a_1033_){
_start:
{
uint8_t v___x_1034_; 
lean_inc(v_a_1033_);
v___x_1034_ = l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__0___redArg(v_pu_1025_, v_code_1026_, v_code_1027_, v_params_u2081_1029_, v_params_u2082_1030_, v_i_1032_, v_a_1033_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__0___boxed(lean_object* v_pu_1035_, lean_object* v_code_1036_, lean_object* v_code_1037_, lean_object* v_pu_1038_, lean_object* v_params_u2081_1039_, lean_object* v_params_u2082_1040_, lean_object* v_h_1041_, lean_object* v_i_1042_, lean_object* v_a_1043_){
_start:
{
uint8_t v_pu_boxed_1044_; uint8_t v_pu_boxed_1045_; uint8_t v_res_1046_; lean_object* v_r_1047_; 
v_pu_boxed_1044_ = lean_unbox(v_pu_1035_);
v_pu_boxed_1045_ = lean_unbox(v_pu_1038_);
v_res_1046_ = l___private_Lean_Compiler_LCNF_AlphaEqv_0__Lean_Compiler_LCNF_AlphaEqv_withParams_go___at___00Lean_Compiler_LCNF_AlphaEqv_eqvAlts_spec__0(v_pu_boxed_1044_, v_code_1036_, v_code_1037_, v_pu_boxed_1045_, v_params_u2081_1039_, v_params_u2082_1040_, v_h_1041_, v_i_1042_, v_a_1043_);
lean_dec(v_a_1043_);
lean_dec_ref(v_params_u2082_1040_);
lean_dec_ref(v_params_u2081_1039_);
v_r_1047_ = lean_box(v_res_1046_);
return v_r_1047_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Code_alphaEqv(uint8_t v_pu_1048_, lean_object* v_c_u2081_1049_, lean_object* v_c_u2082_1050_){
_start:
{
lean_object* v___x_1051_; uint8_t v___x_1052_; 
v___x_1051_ = lean_box(1);
v___x_1052_ = l_Lean_Compiler_LCNF_AlphaEqv_eqv(v_pu_1048_, v_c_u2081_1049_, v_c_u2082_1050_, v___x_1051_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_alphaEqv___boxed(lean_object* v_pu_1053_, lean_object* v_c_u2081_1054_, lean_object* v_c_u2082_1055_){
_start:
{
uint8_t v_pu_boxed_1056_; uint8_t v_res_1057_; lean_object* v_r_1058_; 
v_pu_boxed_1056_ = lean_unbox(v_pu_1053_);
v_res_1057_ = l_Lean_Compiler_LCNF_Code_alphaEqv(v_pu_boxed_1056_, v_c_u2081_1054_, v_c_u2082_1055_);
v_r_1058_ = lean_box(v_res_1057_);
return v_r_1058_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_AlphaEqv(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_AlphaEqv(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_AlphaEqv(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_AlphaEqv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_AlphaEqv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_AlphaEqv(builtin);
}
#ifdef __cplusplus
}
#endif
