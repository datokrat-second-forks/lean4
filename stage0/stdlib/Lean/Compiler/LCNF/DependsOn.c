// Lean compiler output
// Module: Lean.Compiler.LCNF.DependsOn
// Imports: public import Lean.Compiler.LCNF.Basic
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
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_fvarDepOn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_fvarDepOn___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Arg_dependsOn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_dependsOn___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Arg_dependsOn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_dependsOn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_LetValue_dependsOn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_dependsOn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_LetDecl_dependsOn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_dependsOn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FunDecl_dependsOn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_dependsOn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_CodeDecl_dependsOn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CodeDecl_dependsOn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Code_dependsOn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_dependsOn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_fvarDepOn(lean_object* v_fvarId_1_, lean_object* v_a_2_){
_start:
{
uint8_t v___x_3_; 
v___x_3_ = l_Lean_FVarIdSet_contains(v_a_2_, v_fvarId_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_fvarDepOn___boxed(lean_object* v_fvarId_4_, lean_object* v_a_5_){
_start:
{
uint8_t v_res_6_; lean_object* v_r_7_; 
v_res_6_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_fvarDepOn(v_fvarId_4_, v_a_5_);
lean_dec(v_a_5_);
lean_dec(v_fvarId_4_);
v_r_7_ = lean_box(v_res_6_);
return v_r_7_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0(lean_object* v_a_8_, lean_object* v_e_9_){
_start:
{
uint8_t v___x_10_; lean_object* v_d_12_; lean_object* v_b_13_; 
v___x_10_ = l_Lean_Expr_hasFVar(v_e_9_);
if (v___x_10_ == 0)
{
return v___x_10_;
}
else
{
switch(lean_obj_tag(v_e_9_))
{
case 7:
{
lean_object* v_binderType_16_; lean_object* v_body_17_; 
v_binderType_16_ = lean_ctor_get(v_e_9_, 1);
v_body_17_ = lean_ctor_get(v_e_9_, 2);
v_d_12_ = v_binderType_16_;
v_b_13_ = v_body_17_;
goto v___jp_11_;
}
case 6:
{
lean_object* v_binderType_18_; lean_object* v_body_19_; 
v_binderType_18_ = lean_ctor_get(v_e_9_, 1);
v_body_19_ = lean_ctor_get(v_e_9_, 2);
v_d_12_ = v_binderType_18_;
v_b_13_ = v_body_19_;
goto v___jp_11_;
}
case 10:
{
lean_object* v_expr_20_; 
v_expr_20_ = lean_ctor_get(v_e_9_, 1);
v_e_9_ = v_expr_20_;
goto _start;
}
case 8:
{
lean_object* v_type_22_; lean_object* v_value_23_; lean_object* v_body_24_; uint8_t v___x_25_; 
v_type_22_ = lean_ctor_get(v_e_9_, 1);
v_value_23_ = lean_ctor_get(v_e_9_, 2);
v_body_24_ = lean_ctor_get(v_e_9_, 3);
v___x_25_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0(v_a_8_, v_type_22_);
if (v___x_25_ == 0)
{
uint8_t v___x_26_; 
v___x_26_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0(v_a_8_, v_value_23_);
if (v___x_26_ == 0)
{
v_e_9_ = v_body_24_;
goto _start;
}
else
{
return v___x_10_;
}
}
else
{
return v___x_10_;
}
}
case 5:
{
lean_object* v_fn_28_; lean_object* v_arg_29_; uint8_t v___x_30_; 
v_fn_28_ = lean_ctor_get(v_e_9_, 0);
v_arg_29_ = lean_ctor_get(v_e_9_, 1);
v___x_30_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0(v_a_8_, v_fn_28_);
if (v___x_30_ == 0)
{
v_e_9_ = v_arg_29_;
goto _start;
}
else
{
return v___x_10_;
}
}
case 11:
{
lean_object* v_struct_32_; 
v_struct_32_ = lean_ctor_get(v_e_9_, 2);
v_e_9_ = v_struct_32_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_34_; uint8_t v___x_35_; 
v_fvarId_34_ = lean_ctor_get(v_e_9_, 0);
v___x_35_ = l_Lean_FVarIdSet_contains(v_a_8_, v_fvarId_34_);
return v___x_35_;
}
default: 
{
uint8_t v___x_36_; 
v___x_36_ = 0;
return v___x_36_;
}
}
}
v___jp_11_:
{
uint8_t v___x_14_; 
v___x_14_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0(v_a_8_, v_d_12_);
if (v___x_14_ == 0)
{
v_e_9_ = v_b_13_;
goto _start;
}
else
{
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0___boxed(lean_object* v_a_37_, lean_object* v_e_38_){
_start:
{
uint8_t v_res_39_; lean_object* v_r_40_; 
v_res_39_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0(v_a_37_, v_e_38_);
lean_dec_ref(v_e_38_);
lean_dec(v_a_37_);
v_r_40_ = lean_box(v_res_39_);
return v_r_40_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn(lean_object* v_e_41_, lean_object* v_a_42_){
_start:
{
uint8_t v___x_43_; 
v___x_43_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0(v_a_42_, v_e_41_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn___boxed(lean_object* v_e_44_, lean_object* v_a_45_){
_start:
{
uint8_t v_res_46_; lean_object* v_r_47_; 
v_res_46_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn(v_e_44_, v_a_45_);
lean_dec(v_a_45_);
lean_dec_ref(v_e_44_);
v_r_47_ = lean_box(v_res_46_);
return v_r_47_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn___redArg(lean_object* v_a_48_, lean_object* v_a_49_){
_start:
{
switch(lean_obj_tag(v_a_48_))
{
case 0:
{
uint8_t v___x_50_; 
v___x_50_ = 0;
return v___x_50_;
}
case 1:
{
lean_object* v_fvarId_51_; uint8_t v___x_52_; 
v_fvarId_51_ = lean_ctor_get(v_a_48_, 0);
v___x_52_ = l_Lean_FVarIdSet_contains(v_a_49_, v_fvarId_51_);
return v___x_52_;
}
default: 
{
lean_object* v_expr_53_; uint8_t v___x_54_; 
v_expr_53_ = lean_ctor_get(v_a_48_, 0);
v___x_54_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0(v_a_49_, v_expr_53_);
return v___x_54_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn___redArg___boxed(lean_object* v_a_55_, lean_object* v_a_56_){
_start:
{
uint8_t v_res_57_; lean_object* v_r_58_; 
v_res_57_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn___redArg(v_a_55_, v_a_56_);
lean_dec(v_a_56_);
lean_dec(v_a_55_);
v_r_58_ = lean_box(v_res_57_);
return v_r_58_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(uint8_t v_pu_59_, lean_object* v_a_60_, lean_object* v_a_61_){
_start:
{
uint8_t v___x_62_; 
v___x_62_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn___redArg(v_a_60_, v_a_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn___boxed(lean_object* v_pu_63_, lean_object* v_a_64_, lean_object* v_a_65_){
_start:
{
uint8_t v_pu_boxed_66_; uint8_t v_res_67_; lean_object* v_r_68_; 
v_pu_boxed_66_ = lean_unbox(v_pu_63_);
v_res_67_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(v_pu_boxed_66_, v_a_64_, v_a_65_);
lean_dec(v_a_65_);
lean_dec(v_a_64_);
v_r_68_ = lean_box(v_res_67_);
return v_r_68_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0___redArg(lean_object* v_as_69_, size_t v_i_70_, size_t v_stop_71_, lean_object* v___y_72_){
_start:
{
uint8_t v___x_73_; 
v___x_73_ = lean_usize_dec_eq(v_i_70_, v_stop_71_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_74_ = lean_array_uget_borrowed(v_as_69_, v_i_70_);
v___x_75_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn___redArg(v___x_74_, v___y_72_);
if (v___x_75_ == 0)
{
size_t v___x_76_; size_t v___x_77_; 
v___x_76_ = ((size_t)1ULL);
v___x_77_ = lean_usize_add(v_i_70_, v___x_76_);
v_i_70_ = v___x_77_;
goto _start;
}
else
{
return v___x_75_;
}
}
else
{
uint8_t v___x_79_; 
v___x_79_ = 0;
return v___x_79_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0___redArg___boxed(lean_object* v_as_80_, lean_object* v_i_81_, lean_object* v_stop_82_, lean_object* v___y_83_){
_start:
{
size_t v_i_boxed_84_; size_t v_stop_boxed_85_; uint8_t v_res_86_; lean_object* v_r_87_; 
v_i_boxed_84_ = lean_unbox_usize(v_i_81_);
lean_dec(v_i_81_);
v_stop_boxed_85_ = lean_unbox_usize(v_stop_82_);
lean_dec(v_stop_82_);
v_res_86_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0___redArg(v_as_80_, v_i_boxed_84_, v_stop_boxed_85_, v___y_83_);
lean_dec(v___y_83_);
lean_dec_ref(v_as_80_);
v_r_87_ = lean_box(v_res_86_);
return v_r_87_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(uint8_t v_pu_88_, lean_object* v_e_89_, lean_object* v_a_90_){
_start:
{
lean_object* v_args_92_; lean_object* v___y_93_; 
switch(lean_obj_tag(v_e_89_))
{
case 2:
{
lean_object* v_struct_100_; uint8_t v___x_101_; 
v_struct_100_ = lean_ctor_get(v_e_89_, 2);
v___x_101_ = l_Lean_FVarIdSet_contains(v_a_90_, v_struct_100_);
return v___x_101_;
}
case 3:
{
lean_object* v_args_102_; lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v_args_102_ = lean_ctor_get(v_e_89_, 2);
v___x_103_ = lean_unsigned_to_nat(0u);
v___x_104_ = lean_array_get_size(v_args_102_);
v___x_105_ = lean_nat_dec_lt(v___x_103_, v___x_104_);
if (v___x_105_ == 0)
{
return v___x_105_;
}
else
{
if (v___x_105_ == 0)
{
return v___x_105_;
}
else
{
size_t v___x_106_; size_t v___x_107_; uint8_t v___x_108_; 
v___x_106_ = ((size_t)0ULL);
v___x_107_ = lean_usize_of_nat(v___x_104_);
v___x_108_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0___redArg(v_args_102_, v___x_106_, v___x_107_, v_a_90_);
return v___x_108_;
}
}
}
case 4:
{
lean_object* v_fvarId_109_; lean_object* v_args_110_; uint8_t v___x_111_; 
v_fvarId_109_ = lean_ctor_get(v_e_89_, 0);
v_args_110_ = lean_ctor_get(v_e_89_, 1);
v___x_111_ = l_Lean_FVarIdSet_contains(v_a_90_, v_fvarId_109_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_112_ = lean_unsigned_to_nat(0u);
v___x_113_ = lean_array_get_size(v_args_110_);
v___x_114_ = lean_nat_dec_lt(v___x_112_, v___x_113_);
if (v___x_114_ == 0)
{
return v___x_114_;
}
else
{
if (v___x_114_ == 0)
{
return v___x_114_;
}
else
{
size_t v___x_115_; size_t v___x_116_; uint8_t v___x_117_; 
v___x_115_ = ((size_t)0ULL);
v___x_116_ = lean_usize_of_nat(v___x_113_);
v___x_117_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0___redArg(v_args_110_, v___x_115_, v___x_116_, v_a_90_);
return v___x_117_;
}
}
}
else
{
return v___x_111_;
}
}
case 5:
{
lean_object* v_args_118_; lean_object* v___x_119_; lean_object* v___x_120_; uint8_t v___x_121_; 
v_args_118_ = lean_ctor_get(v_e_89_, 1);
v___x_119_ = lean_unsigned_to_nat(0u);
v___x_120_ = lean_array_get_size(v_args_118_);
v___x_121_ = lean_nat_dec_lt(v___x_119_, v___x_120_);
if (v___x_121_ == 0)
{
return v___x_121_;
}
else
{
if (v___x_121_ == 0)
{
return v___x_121_;
}
else
{
size_t v___x_122_; size_t v___x_123_; uint8_t v___x_124_; 
v___x_122_ = ((size_t)0ULL);
v___x_123_ = lean_usize_of_nat(v___x_120_);
v___x_124_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0___redArg(v_args_118_, v___x_122_, v___x_123_, v_a_90_);
return v___x_124_;
}
}
}
case 6:
{
lean_object* v_var_125_; uint8_t v___x_126_; 
v_var_125_ = lean_ctor_get(v_e_89_, 1);
v___x_126_ = l_Lean_FVarIdSet_contains(v_a_90_, v_var_125_);
return v___x_126_;
}
case 7:
{
lean_object* v_var_127_; uint8_t v___x_128_; 
v_var_127_ = lean_ctor_get(v_e_89_, 1);
v___x_128_ = l_Lean_FVarIdSet_contains(v_a_90_, v_var_127_);
return v___x_128_;
}
case 8:
{
lean_object* v_var_129_; uint8_t v___x_130_; 
v_var_129_ = lean_ctor_get(v_e_89_, 2);
v___x_130_ = l_Lean_FVarIdSet_contains(v_a_90_, v_var_129_);
return v___x_130_;
}
case 9:
{
lean_object* v_args_131_; 
v_args_131_ = lean_ctor_get(v_e_89_, 1);
v_args_92_ = v_args_131_;
v___y_93_ = v_a_90_;
goto v___jp_91_;
}
case 10:
{
lean_object* v_args_132_; 
v_args_132_ = lean_ctor_get(v_e_89_, 1);
v_args_92_ = v_args_132_;
v___y_93_ = v_a_90_;
goto v___jp_91_;
}
case 11:
{
lean_object* v_var_133_; uint8_t v___x_134_; 
v_var_133_ = lean_ctor_get(v_e_89_, 1);
v___x_134_ = l_Lean_FVarIdSet_contains(v_a_90_, v_var_133_);
return v___x_134_;
}
case 12:
{
lean_object* v_var_135_; lean_object* v_args_136_; uint8_t v___x_137_; 
v_var_135_ = lean_ctor_get(v_e_89_, 0);
v_args_136_ = lean_ctor_get(v_e_89_, 2);
v___x_137_ = l_Lean_FVarIdSet_contains(v_a_90_, v_var_135_);
if (v___x_137_ == 0)
{
lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; 
v___x_138_ = lean_unsigned_to_nat(0u);
v___x_139_ = lean_array_get_size(v_args_136_);
v___x_140_ = lean_nat_dec_lt(v___x_138_, v___x_139_);
if (v___x_140_ == 0)
{
return v___x_140_;
}
else
{
if (v___x_140_ == 0)
{
return v___x_140_;
}
else
{
size_t v___x_141_; size_t v___x_142_; uint8_t v___x_143_; 
v___x_141_ = ((size_t)0ULL);
v___x_142_ = lean_usize_of_nat(v___x_139_);
v___x_143_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0___redArg(v_args_136_, v___x_141_, v___x_142_, v_a_90_);
return v___x_143_;
}
}
}
else
{
return v___x_137_;
}
}
case 13:
{
lean_object* v_fvarId_144_; uint8_t v___x_145_; 
v_fvarId_144_ = lean_ctor_get(v_e_89_, 1);
v___x_145_ = l_Lean_FVarIdSet_contains(v_a_90_, v_fvarId_144_);
return v___x_145_;
}
case 14:
{
lean_object* v_fvarId_146_; uint8_t v___x_147_; 
v_fvarId_146_ = lean_ctor_get(v_e_89_, 0);
v___x_147_ = l_Lean_FVarIdSet_contains(v_a_90_, v_fvarId_146_);
return v___x_147_;
}
case 15:
{
lean_object* v_fvarId_148_; uint8_t v___x_149_; 
v_fvarId_148_ = lean_ctor_get(v_e_89_, 0);
v___x_149_ = l_Lean_FVarIdSet_contains(v_a_90_, v_fvarId_148_);
return v___x_149_;
}
default: 
{
uint8_t v___x_150_; 
v___x_150_ = 0;
return v___x_150_;
}
}
v___jp_91_:
{
lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; 
v___x_94_ = lean_unsigned_to_nat(0u);
v___x_95_ = lean_array_get_size(v_args_92_);
v___x_96_ = lean_nat_dec_lt(v___x_94_, v___x_95_);
if (v___x_96_ == 0)
{
return v___x_96_;
}
else
{
if (v___x_96_ == 0)
{
return v___x_96_;
}
else
{
size_t v___x_97_; size_t v___x_98_; uint8_t v___x_99_; 
v___x_97_ = ((size_t)0ULL);
v___x_98_ = lean_usize_of_nat(v___x_95_);
v___x_99_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0___redArg(v_args_92_, v___x_97_, v___x_98_, v___y_93_);
return v___x_99_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn___boxed(lean_object* v_pu_151_, lean_object* v_e_152_, lean_object* v_a_153_){
_start:
{
uint8_t v_pu_boxed_154_; uint8_t v_res_155_; lean_object* v_r_156_; 
v_pu_boxed_154_ = lean_unbox(v_pu_151_);
v_res_155_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v_pu_boxed_154_, v_e_152_, v_a_153_);
lean_dec(v_a_153_);
lean_dec(v_e_152_);
v_r_156_ = lean_box(v_res_155_);
return v_r_156_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0(uint8_t v_pu_157_, lean_object* v_as_158_, size_t v_i_159_, size_t v_stop_160_, lean_object* v___y_161_){
_start:
{
uint8_t v___x_162_; 
v___x_162_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0___redArg(v_as_158_, v_i_159_, v_stop_160_, v___y_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0___boxed(lean_object* v_pu_163_, lean_object* v_as_164_, lean_object* v_i_165_, lean_object* v_stop_166_, lean_object* v___y_167_){
_start:
{
uint8_t v_pu_boxed_168_; size_t v_i_boxed_169_; size_t v_stop_boxed_170_; uint8_t v_res_171_; lean_object* v_r_172_; 
v_pu_boxed_168_ = lean_unbox(v_pu_163_);
v_i_boxed_169_ = lean_unbox_usize(v_i_165_);
lean_dec(v_i_165_);
v_stop_boxed_170_ = lean_unbox_usize(v_stop_166_);
lean_dec(v_stop_166_);
v_res_171_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0(v_pu_boxed_168_, v_as_164_, v_i_boxed_169_, v_stop_boxed_170_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v_as_164_);
v_r_172_ = lean_box(v_res_171_);
return v_r_172_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn(uint8_t v_pu_173_, lean_object* v_decl_174_, lean_object* v_a_175_){
_start:
{
lean_object* v_type_176_; lean_object* v_value_177_; uint8_t v___x_178_; 
v_type_176_ = lean_ctor_get(v_decl_174_, 2);
v_value_177_ = lean_ctor_get(v_decl_174_, 3);
v___x_178_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0(v_a_175_, v_type_176_);
if (v___x_178_ == 0)
{
uint8_t v___x_179_; 
v___x_179_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v_pu_173_, v_value_177_, v_a_175_);
return v___x_179_;
}
else
{
return v___x_178_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn___boxed(lean_object* v_pu_180_, lean_object* v_decl_181_, lean_object* v_a_182_){
_start:
{
uint8_t v_pu_boxed_183_; uint8_t v_res_184_; lean_object* v_r_185_; 
v_pu_boxed_183_ = lean_unbox(v_pu_180_);
v_res_184_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn(v_pu_boxed_183_, v_decl_181_, v_a_182_);
lean_dec(v_a_182_);
lean_dec_ref(v_decl_181_);
v_r_185_ = lean_box(v_res_184_);
return v_r_185_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn(uint8_t v_pu_186_, lean_object* v_c_187_, lean_object* v_a_188_){
_start:
{
switch(lean_obj_tag(v_c_187_))
{
case 0:
{
lean_object* v_decl_189_; lean_object* v_k_190_; uint8_t v___x_191_; 
v_decl_189_ = lean_ctor_get(v_c_187_, 0);
v_k_190_ = lean_ctor_get(v_c_187_, 1);
v___x_191_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn(v_pu_186_, v_decl_189_, v_a_188_);
if (v___x_191_ == 0)
{
v_c_187_ = v_k_190_;
goto _start;
}
else
{
return v___x_191_;
}
}
case 3:
{
lean_object* v_fvarId_193_; lean_object* v_args_194_; uint8_t v___x_195_; 
v_fvarId_193_ = lean_ctor_get(v_c_187_, 0);
v_args_194_ = lean_ctor_get(v_c_187_, 1);
v___x_195_ = l_Lean_FVarIdSet_contains(v_a_188_, v_fvarId_193_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_196_ = lean_unsigned_to_nat(0u);
v___x_197_ = lean_array_get_size(v_args_194_);
v___x_198_ = lean_nat_dec_lt(v___x_196_, v___x_197_);
if (v___x_198_ == 0)
{
return v___x_198_;
}
else
{
if (v___x_198_ == 0)
{
return v___x_198_;
}
else
{
size_t v___x_199_; size_t v___x_200_; uint8_t v___x_201_; 
v___x_199_ = ((size_t)0ULL);
v___x_200_ = lean_usize_of_nat(v___x_197_);
v___x_201_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn_spec__0___redArg(v_args_194_, v___x_199_, v___x_200_, v_a_188_);
return v___x_201_;
}
}
}
else
{
return v___x_195_;
}
}
case 4:
{
lean_object* v_cases_202_; lean_object* v_resultType_203_; lean_object* v_discr_204_; lean_object* v_alts_205_; uint8_t v___x_206_; 
v_cases_202_ = lean_ctor_get(v_c_187_, 0);
v_resultType_203_ = lean_ctor_get(v_cases_202_, 1);
v_discr_204_ = lean_ctor_get(v_cases_202_, 2);
v_alts_205_ = lean_ctor_get(v_cases_202_, 3);
v___x_206_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0(v_a_188_, v_resultType_203_);
if (v___x_206_ == 0)
{
uint8_t v___x_207_; 
v___x_207_ = l_Lean_FVarIdSet_contains(v_a_188_, v_discr_204_);
if (v___x_207_ == 0)
{
lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_208_ = lean_unsigned_to_nat(0u);
v___x_209_ = lean_array_get_size(v_alts_205_);
v___x_210_ = lean_nat_dec_lt(v___x_208_, v___x_209_);
if (v___x_210_ == 0)
{
return v___x_210_;
}
else
{
if (v___x_210_ == 0)
{
return v___x_210_;
}
else
{
size_t v___x_211_; size_t v___x_212_; uint8_t v___x_213_; 
v___x_211_ = ((size_t)0ULL);
v___x_212_ = lean_usize_of_nat(v___x_209_);
v___x_213_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn_spec__0(v_pu_186_, v_alts_205_, v___x_211_, v___x_212_, v_a_188_);
return v___x_213_;
}
}
}
else
{
return v___x_207_;
}
}
else
{
return v___x_206_;
}
}
case 5:
{
lean_object* v_fvarId_214_; uint8_t v___x_215_; 
v_fvarId_214_ = lean_ctor_get(v_c_187_, 0);
v___x_215_ = l_Lean_FVarIdSet_contains(v_a_188_, v_fvarId_214_);
return v___x_215_;
}
case 6:
{
uint8_t v___x_216_; 
v___x_216_ = 0;
return v___x_216_;
}
case 7:
{
lean_object* v_fvarId_217_; lean_object* v_y_218_; lean_object* v_k_219_; uint8_t v___x_220_; 
v_fvarId_217_ = lean_ctor_get(v_c_187_, 0);
v_y_218_ = lean_ctor_get(v_c_187_, 2);
v_k_219_ = lean_ctor_get(v_c_187_, 3);
v___x_220_ = l_Lean_FVarIdSet_contains(v_a_188_, v_fvarId_217_);
if (v___x_220_ == 0)
{
uint8_t v___x_221_; 
v___x_221_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn___redArg(v_y_218_, v_a_188_);
if (v___x_221_ == 0)
{
v_c_187_ = v_k_219_;
goto _start;
}
else
{
return v___x_221_;
}
}
else
{
return v___x_220_;
}
}
case 8:
{
lean_object* v_fvarId_223_; lean_object* v_y_224_; lean_object* v_k_225_; uint8_t v___x_226_; 
v_fvarId_223_ = lean_ctor_get(v_c_187_, 0);
v_y_224_ = lean_ctor_get(v_c_187_, 2);
v_k_225_ = lean_ctor_get(v_c_187_, 3);
v___x_226_ = l_Lean_FVarIdSet_contains(v_a_188_, v_fvarId_223_);
if (v___x_226_ == 0)
{
uint8_t v___x_227_; 
v___x_227_ = l_Lean_FVarIdSet_contains(v_a_188_, v_y_224_);
if (v___x_227_ == 0)
{
v_c_187_ = v_k_225_;
goto _start;
}
else
{
return v___x_227_;
}
}
else
{
return v___x_226_;
}
}
case 9:
{
lean_object* v_fvarId_229_; lean_object* v_y_230_; lean_object* v_k_231_; uint8_t v___x_232_; 
v_fvarId_229_ = lean_ctor_get(v_c_187_, 0);
v_y_230_ = lean_ctor_get(v_c_187_, 3);
v_k_231_ = lean_ctor_get(v_c_187_, 5);
v___x_232_ = l_Lean_FVarIdSet_contains(v_a_188_, v_fvarId_229_);
if (v___x_232_ == 0)
{
uint8_t v___x_233_; 
v___x_233_ = l_Lean_FVarIdSet_contains(v_a_188_, v_y_230_);
if (v___x_233_ == 0)
{
v_c_187_ = v_k_231_;
goto _start;
}
else
{
return v___x_233_;
}
}
else
{
return v___x_232_;
}
}
case 10:
{
lean_object* v_fvarId_235_; lean_object* v_k_236_; uint8_t v___x_237_; 
v_fvarId_235_ = lean_ctor_get(v_c_187_, 0);
v_k_236_ = lean_ctor_get(v_c_187_, 2);
v___x_237_ = l_Lean_FVarIdSet_contains(v_a_188_, v_fvarId_235_);
if (v___x_237_ == 0)
{
v_c_187_ = v_k_236_;
goto _start;
}
else
{
return v___x_237_;
}
}
case 11:
{
lean_object* v_fvarId_239_; lean_object* v_k_240_; uint8_t v___x_241_; 
v_fvarId_239_ = lean_ctor_get(v_c_187_, 0);
v_k_240_ = lean_ctor_get(v_c_187_, 2);
v___x_241_ = l_Lean_FVarIdSet_contains(v_a_188_, v_fvarId_239_);
if (v___x_241_ == 0)
{
v_c_187_ = v_k_240_;
goto _start;
}
else
{
return v___x_241_;
}
}
case 12:
{
lean_object* v_fvarId_243_; lean_object* v_k_244_; uint8_t v___x_245_; 
v_fvarId_243_ = lean_ctor_get(v_c_187_, 0);
v_k_244_ = lean_ctor_get(v_c_187_, 3);
v___x_245_ = l_Lean_FVarIdSet_contains(v_a_188_, v_fvarId_243_);
if (v___x_245_ == 0)
{
v_c_187_ = v_k_244_;
goto _start;
}
else
{
return v___x_245_;
}
}
case 13:
{
lean_object* v_fvarId_247_; lean_object* v_k_248_; uint8_t v___x_249_; 
v_fvarId_247_ = lean_ctor_get(v_c_187_, 0);
v_k_248_ = lean_ctor_get(v_c_187_, 1);
v___x_249_ = l_Lean_FVarIdSet_contains(v_a_188_, v_fvarId_247_);
if (v___x_249_ == 0)
{
v_c_187_ = v_k_248_;
goto _start;
}
else
{
return v___x_249_;
}
}
default: 
{
lean_object* v_decl_251_; lean_object* v_k_252_; lean_object* v_type_253_; lean_object* v_value_254_; uint8_t v___x_255_; 
v_decl_251_ = lean_ctor_get(v_c_187_, 0);
v_k_252_ = lean_ctor_get(v_c_187_, 1);
v_type_253_ = lean_ctor_get(v_decl_251_, 3);
v_value_254_ = lean_ctor_get(v_decl_251_, 4);
v___x_255_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0(v_a_188_, v_type_253_);
if (v___x_255_ == 0)
{
uint8_t v___x_256_; 
v___x_256_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn(v_pu_186_, v_value_254_, v_a_188_);
if (v___x_256_ == 0)
{
v_c_187_ = v_k_252_;
goto _start;
}
else
{
return v___x_256_;
}
}
else
{
return v___x_255_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn_spec__0(uint8_t v_pu_258_, lean_object* v_as_259_, size_t v_i_260_, size_t v_stop_261_, lean_object* v___y_262_){
_start:
{
uint8_t v___x_263_; 
v___x_263_ = lean_usize_dec_eq(v_i_260_, v_stop_261_);
if (v___x_263_ == 0)
{
uint8_t v___x_264_; lean_object* v___y_266_; lean_object* v___x_271_; 
v___x_264_ = 1;
v___x_271_ = lean_array_uget_borrowed(v_as_259_, v_i_260_);
switch(lean_obj_tag(v___x_271_))
{
case 0:
{
lean_object* v_code_272_; 
v_code_272_ = lean_ctor_get(v___x_271_, 2);
v___y_266_ = v_code_272_;
goto v___jp_265_;
}
case 1:
{
lean_object* v_code_273_; 
v_code_273_ = lean_ctor_get(v___x_271_, 1);
v___y_266_ = v_code_273_;
goto v___jp_265_;
}
default: 
{
lean_object* v_code_274_; 
v_code_274_ = lean_ctor_get(v___x_271_, 0);
v___y_266_ = v_code_274_;
goto v___jp_265_;
}
}
v___jp_265_:
{
uint8_t v___x_267_; 
v___x_267_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn(v_pu_258_, v___y_266_, v___y_262_);
if (v___x_267_ == 0)
{
size_t v___x_268_; size_t v___x_269_; 
v___x_268_ = ((size_t)1ULL);
v___x_269_ = lean_usize_add(v_i_260_, v___x_268_);
v_i_260_ = v___x_269_;
goto _start;
}
else
{
return v___x_264_;
}
}
}
else
{
uint8_t v___x_275_; 
v___x_275_ = 0;
return v___x_275_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn_spec__0___boxed(lean_object* v_pu_276_, lean_object* v_as_277_, lean_object* v_i_278_, lean_object* v_stop_279_, lean_object* v___y_280_){
_start:
{
uint8_t v_pu_boxed_281_; size_t v_i_boxed_282_; size_t v_stop_boxed_283_; uint8_t v_res_284_; lean_object* v_r_285_; 
v_pu_boxed_281_ = lean_unbox(v_pu_276_);
v_i_boxed_282_ = lean_unbox_usize(v_i_278_);
lean_dec(v_i_278_);
v_stop_boxed_283_ = lean_unbox_usize(v_stop_279_);
lean_dec(v_stop_279_);
v_res_284_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn_spec__0(v_pu_boxed_281_, v_as_277_, v_i_boxed_282_, v_stop_boxed_283_, v___y_280_);
lean_dec(v___y_280_);
lean_dec_ref(v_as_277_);
v_r_285_ = lean_box(v_res_284_);
return v_r_285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn___boxed(lean_object* v_pu_286_, lean_object* v_c_287_, lean_object* v_a_288_){
_start:
{
uint8_t v_pu_boxed_289_; uint8_t v_res_290_; lean_object* v_r_291_; 
v_pu_boxed_289_ = lean_unbox(v_pu_286_);
v_res_290_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn(v_pu_boxed_289_, v_c_287_, v_a_288_);
lean_dec(v_a_288_);
lean_dec_ref(v_c_287_);
v_r_291_ = lean_box(v_res_290_);
return v_r_291_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Arg_dependsOn___redArg(lean_object* v_arg_292_, lean_object* v_s_293_){
_start:
{
uint8_t v___x_294_; 
v___x_294_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn___redArg(v_arg_292_, v_s_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_dependsOn___redArg___boxed(lean_object* v_arg_295_, lean_object* v_s_296_){
_start:
{
uint8_t v_res_297_; lean_object* v_r_298_; 
v_res_297_ = l_Lean_Compiler_LCNF_Arg_dependsOn___redArg(v_arg_295_, v_s_296_);
lean_dec(v_s_296_);
lean_dec(v_arg_295_);
v_r_298_ = lean_box(v_res_297_);
return v_r_298_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Arg_dependsOn(uint8_t v_pu_299_, lean_object* v_arg_300_, lean_object* v_s_301_){
_start:
{
uint8_t v___x_302_; 
v___x_302_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn___redArg(v_arg_300_, v_s_301_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_dependsOn___boxed(lean_object* v_pu_303_, lean_object* v_arg_304_, lean_object* v_s_305_){
_start:
{
uint8_t v_pu_boxed_306_; uint8_t v_res_307_; lean_object* v_r_308_; 
v_pu_boxed_306_ = lean_unbox(v_pu_303_);
v_res_307_ = l_Lean_Compiler_LCNF_Arg_dependsOn(v_pu_boxed_306_, v_arg_304_, v_s_305_);
lean_dec(v_s_305_);
lean_dec(v_arg_304_);
v_r_308_ = lean_box(v_res_307_);
return v_r_308_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_LetValue_dependsOn(uint8_t v_pu_309_, lean_object* v_value_310_, lean_object* v_s_311_){
_start:
{
uint8_t v___x_312_; 
v___x_312_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v_pu_309_, v_value_310_, v_s_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_dependsOn___boxed(lean_object* v_pu_313_, lean_object* v_value_314_, lean_object* v_s_315_){
_start:
{
uint8_t v_pu_boxed_316_; uint8_t v_res_317_; lean_object* v_r_318_; 
v_pu_boxed_316_ = lean_unbox(v_pu_313_);
v_res_317_ = l_Lean_Compiler_LCNF_LetValue_dependsOn(v_pu_boxed_316_, v_value_314_, v_s_315_);
lean_dec(v_s_315_);
lean_dec(v_value_314_);
v_r_318_ = lean_box(v_res_317_);
return v_r_318_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_LetDecl_dependsOn(uint8_t v_pu_319_, lean_object* v_decl_320_, lean_object* v_s_321_){
_start:
{
uint8_t v___x_322_; 
v___x_322_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn(v_pu_319_, v_decl_320_, v_s_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_dependsOn___boxed(lean_object* v_pu_323_, lean_object* v_decl_324_, lean_object* v_s_325_){
_start:
{
uint8_t v_pu_boxed_326_; uint8_t v_res_327_; lean_object* v_r_328_; 
v_pu_boxed_326_ = lean_unbox(v_pu_323_);
v_res_327_ = l_Lean_Compiler_LCNF_LetDecl_dependsOn(v_pu_boxed_326_, v_decl_324_, v_s_325_);
lean_dec(v_s_325_);
lean_dec_ref(v_decl_324_);
v_r_328_ = lean_box(v_res_327_);
return v_r_328_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FunDecl_dependsOn(uint8_t v_pu_329_, lean_object* v_decl_330_, lean_object* v_s_331_){
_start:
{
lean_object* v_type_332_; lean_object* v_value_333_; uint8_t v___x_334_; 
v_type_332_ = lean_ctor_get(v_decl_330_, 3);
v_value_333_ = lean_ctor_get(v_decl_330_, 4);
v___x_334_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0(v_s_331_, v_type_332_);
if (v___x_334_ == 0)
{
uint8_t v___x_335_; 
v___x_335_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn(v_pu_329_, v_value_333_, v_s_331_);
return v___x_335_;
}
else
{
return v___x_334_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_dependsOn___boxed(lean_object* v_pu_336_, lean_object* v_decl_337_, lean_object* v_s_338_){
_start:
{
uint8_t v_pu_boxed_339_; uint8_t v_res_340_; lean_object* v_r_341_; 
v_pu_boxed_339_ = lean_unbox(v_pu_336_);
v_res_340_ = l_Lean_Compiler_LCNF_FunDecl_dependsOn(v_pu_boxed_339_, v_decl_337_, v_s_338_);
lean_dec(v_s_338_);
lean_dec_ref(v_decl_337_);
v_r_341_ = lean_box(v_res_340_);
return v_r_341_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_CodeDecl_dependsOn(uint8_t v_pu_342_, lean_object* v_decl_343_, lean_object* v_s_344_){
_start:
{
switch(lean_obj_tag(v_decl_343_))
{
case 0:
{
lean_object* v_decl_345_; uint8_t v___x_346_; 
v_decl_345_ = lean_ctor_get(v_decl_343_, 0);
v___x_346_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn(v_pu_342_, v_decl_345_, v_s_344_);
return v___x_346_;
}
case 1:
{
lean_object* v_decl_347_; lean_object* v_type_348_; lean_object* v_value_349_; uint8_t v___x_350_; 
v_decl_347_ = lean_ctor_get(v_decl_343_, 0);
v_type_348_ = lean_ctor_get(v_decl_347_, 3);
v_value_349_ = lean_ctor_get(v_decl_347_, 4);
v___x_350_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0(v_s_344_, v_type_348_);
if (v___x_350_ == 0)
{
uint8_t v___x_351_; 
v___x_351_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn(v_pu_342_, v_value_349_, v_s_344_);
return v___x_351_;
}
else
{
return v___x_350_;
}
}
case 2:
{
lean_object* v_decl_352_; lean_object* v_type_353_; lean_object* v_value_354_; uint8_t v___x_355_; 
v_decl_352_ = lean_ctor_get(v_decl_343_, 0);
v_type_353_ = lean_ctor_get(v_decl_352_, 3);
v_value_354_ = lean_ctor_get(v_decl_352_, 4);
v___x_355_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_typeDepOn_spec__0(v_s_344_, v_type_353_);
if (v___x_355_ == 0)
{
uint8_t v___x_356_; 
v___x_356_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn(v_pu_342_, v_value_354_, v_s_344_);
return v___x_356_;
}
else
{
return v___x_355_;
}
}
case 3:
{
lean_object* v_fvarId_357_; lean_object* v_y_358_; uint8_t v___x_359_; 
v_fvarId_357_ = lean_ctor_get(v_decl_343_, 0);
v_y_358_ = lean_ctor_get(v_decl_343_, 2);
v___x_359_ = l_Lean_FVarIdSet_contains(v_s_344_, v_fvarId_357_);
if (v___x_359_ == 0)
{
uint8_t v___x_360_; 
v___x_360_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn___redArg(v_y_358_, v_s_344_);
return v___x_360_;
}
else
{
return v___x_359_;
}
}
case 4:
{
lean_object* v_fvarId_361_; lean_object* v_y_362_; uint8_t v___x_363_; 
v_fvarId_361_ = lean_ctor_get(v_decl_343_, 0);
v_y_362_ = lean_ctor_get(v_decl_343_, 2);
v___x_363_ = l_Lean_FVarIdSet_contains(v_s_344_, v_fvarId_361_);
if (v___x_363_ == 0)
{
uint8_t v___x_364_; 
v___x_364_ = l_Lean_FVarIdSet_contains(v_s_344_, v_y_362_);
return v___x_364_;
}
else
{
return v___x_363_;
}
}
case 5:
{
lean_object* v_fvarId_365_; lean_object* v_y_366_; uint8_t v___x_367_; 
v_fvarId_365_ = lean_ctor_get(v_decl_343_, 0);
v_y_366_ = lean_ctor_get(v_decl_343_, 3);
v___x_367_ = l_Lean_FVarIdSet_contains(v_s_344_, v_fvarId_365_);
if (v___x_367_ == 0)
{
uint8_t v___x_368_; 
v___x_368_ = l_Lean_FVarIdSet_contains(v_s_344_, v_y_366_);
return v___x_368_;
}
else
{
return v___x_367_;
}
}
default: 
{
lean_object* v_fvarId_369_; uint8_t v___x_370_; 
v_fvarId_369_ = lean_ctor_get(v_decl_343_, 0);
v___x_370_ = l_Lean_FVarIdSet_contains(v_s_344_, v_fvarId_369_);
return v___x_370_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CodeDecl_dependsOn___boxed(lean_object* v_pu_371_, lean_object* v_decl_372_, lean_object* v_s_373_){
_start:
{
uint8_t v_pu_boxed_374_; uint8_t v_res_375_; lean_object* v_r_376_; 
v_pu_boxed_374_ = lean_unbox(v_pu_371_);
v_res_375_ = l_Lean_Compiler_LCNF_CodeDecl_dependsOn(v_pu_boxed_374_, v_decl_372_, v_s_373_);
lean_dec(v_s_373_);
lean_dec_ref(v_decl_372_);
v_r_376_ = lean_box(v_res_375_);
return v_r_376_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Code_dependsOn(uint8_t v_pu_377_, lean_object* v_c_378_, lean_object* v_s_379_){
_start:
{
uint8_t v___x_380_; 
v___x_380_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_depOn(v_pu_377_, v_c_378_, v_s_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_dependsOn___boxed(lean_object* v_pu_381_, lean_object* v_c_382_, lean_object* v_s_383_){
_start:
{
uint8_t v_pu_boxed_384_; uint8_t v_res_385_; lean_object* v_r_386_; 
v_pu_boxed_384_ = lean_unbox(v_pu_381_);
v_res_385_ = l_Lean_Compiler_LCNF_Code_dependsOn(v_pu_boxed_384_, v_c_382_, v_s_383_);
lean_dec(v_s_383_);
lean_dec_ref(v_c_382_);
v_r_386_ = lean_box(v_res_385_);
return v_r_386_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_DependsOn(builtin);
}
#ifdef __cplusplus
}
#endif
