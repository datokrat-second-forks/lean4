// Lean compiler output
// Module: Init.Data.Nat.Internal.SOM
// Imports: public import Init.Data.Nat.Internal.Linear import Init.ByCases import Init.Data.List.BasicAux import Init.Data.Prod import Init.Meta
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
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Nat_blt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_num_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_num_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_var_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_var_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_add_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_add_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_mul_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_mul_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Nat_Internal_SOM_instInhabitedExpr_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Nat_Internal_SOM_instInhabitedExpr_default___closed__0 = (const lean_object*)&l_Nat_Internal_SOM_instInhabitedExpr_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Nat_Internal_SOM_instInhabitedExpr_default = (const lean_object*)&l_Nat_Internal_SOM_instInhabitedExpr_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Nat_Internal_SOM_instInhabitedExpr = (const lean_object*)&l_Nat_Internal_SOM_instInhabitedExpr_default___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Mon_mul_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Mon_mul_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Mon_mul(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_lex___at___00__private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lex___at___00__private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Poly_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Poly_insertSorted(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_mulMon_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_mulMon_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Poly_mulMon(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Poly_mulMon___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_mul_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Poly_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_toPoly(lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_toPoly___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Mon_mul_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Mon_mul_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Nat_Internal_SOM_Expr_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
switch(lean_obj_tag(v_t_5_))
{
case 2:
{
lean_object* v_a_7_; lean_object* v_b_8_; lean_object* v___x_9_; 
v_a_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_a_7_);
v_b_8_ = lean_ctor_get(v_t_5_, 1);
lean_inc_ref(v_b_8_);
lean_dec_ref_known(v_t_5_, 2);
v___x_9_ = lean_apply_2(v_k_6_, v_a_7_, v_b_8_);
return v___x_9_;
}
case 3:
{
lean_object* v_a_10_; lean_object* v_b_11_; lean_object* v___x_12_; 
v_a_10_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_a_10_);
v_b_11_ = lean_ctor_get(v_t_5_, 1);
lean_inc_ref(v_b_11_);
lean_dec_ref_known(v_t_5_, 2);
v___x_12_ = lean_apply_2(v_k_6_, v_a_10_, v_b_11_);
return v___x_12_;
}
default: 
{
lean_object* v_i_13_; lean_object* v___x_14_; 
v_i_13_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_i_13_);
lean_dec_ref(v_t_5_);
v___x_14_ = lean_apply_1(v_k_6_, v_i_13_);
return v___x_14_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_ctorElim(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l_Nat_Internal_SOM_Expr_ctorElim___redArg(v_t_17_, v_k_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_ctorElim___boxed(lean_object* v_motive_21_, lean_object* v_ctorIdx_22_, lean_object* v_t_23_, lean_object* v_h_24_, lean_object* v_k_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Nat_Internal_SOM_Expr_ctorElim(v_motive_21_, v_ctorIdx_22_, v_t_23_, v_h_24_, v_k_25_);
lean_dec(v_ctorIdx_22_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_num_elim___redArg(lean_object* v_t_27_, lean_object* v_num_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Nat_Internal_SOM_Expr_ctorElim___redArg(v_t_27_, v_num_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_num_elim(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_num_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Nat_Internal_SOM_Expr_ctorElim___redArg(v_t_31_, v_num_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_var_elim___redArg(lean_object* v_t_35_, lean_object* v_var_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Nat_Internal_SOM_Expr_ctorElim___redArg(v_t_35_, v_var_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_var_elim(lean_object* v_motive_38_, lean_object* v_t_39_, lean_object* v_h_40_, lean_object* v_var_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Nat_Internal_SOM_Expr_ctorElim___redArg(v_t_39_, v_var_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_add_elim___redArg(lean_object* v_t_43_, lean_object* v_add_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Nat_Internal_SOM_Expr_ctorElim___redArg(v_t_43_, v_add_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_add_elim(lean_object* v_motive_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_add_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Nat_Internal_SOM_Expr_ctorElim___redArg(v_t_47_, v_add_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_mul_elim___redArg(lean_object* v_t_51_, lean_object* v_mul_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Nat_Internal_SOM_Expr_ctorElim___redArg(v_t_51_, v_mul_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_mul_elim(lean_object* v_motive_54_, lean_object* v_t_55_, lean_object* v_h_56_, lean_object* v_mul_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Nat_Internal_SOM_Expr_ctorElim___redArg(v_t_55_, v_mul_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Mon_mul_go(lean_object* v_fuel_63_, lean_object* v_m_u2081_64_, lean_object* v_m_u2082_65_){
_start:
{
lean_object* v_zero_66_; uint8_t v_isZero_67_; 
v_zero_66_ = lean_unsigned_to_nat(0u);
v_isZero_67_ = lean_nat_dec_eq(v_fuel_63_, v_zero_66_);
if (v_isZero_67_ == 1)
{
lean_object* v___x_68_; 
v___x_68_ = l_List_appendTR___redArg(v_m_u2081_64_, v_m_u2082_65_);
return v___x_68_;
}
else
{
if (lean_obj_tag(v_m_u2082_65_) == 0)
{
return v_m_u2081_64_;
}
else
{
if (lean_obj_tag(v_m_u2081_64_) == 0)
{
return v_m_u2082_65_;
}
else
{
lean_object* v_head_69_; lean_object* v_tail_70_; lean_object* v_head_71_; lean_object* v_tail_72_; lean_object* v_one_73_; lean_object* v_n_74_; uint8_t v___x_75_; 
v_head_69_ = lean_ctor_get(v_m_u2082_65_, 0);
v_tail_70_ = lean_ctor_get(v_m_u2082_65_, 1);
v_head_71_ = lean_ctor_get(v_m_u2081_64_, 0);
v_tail_72_ = lean_ctor_get(v_m_u2081_64_, 1);
v_one_73_ = lean_unsigned_to_nat(1u);
v_n_74_ = lean_nat_sub(v_fuel_63_, v_one_73_);
v___x_75_ = l_Nat_blt(v_head_71_, v_head_69_);
if (v___x_75_ == 0)
{
lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_97_; 
lean_inc(v_tail_70_);
lean_inc(v_head_69_);
v_isSharedCheck_97_ = !lean_is_exclusive(v_m_u2082_65_);
if (v_isSharedCheck_97_ == 0)
{
lean_object* v_unused_98_; lean_object* v_unused_99_; 
v_unused_98_ = lean_ctor_get(v_m_u2082_65_, 1);
lean_dec(v_unused_98_);
v_unused_99_ = lean_ctor_get(v_m_u2082_65_, 0);
lean_dec(v_unused_99_);
v___x_77_ = v_m_u2082_65_;
v_isShared_78_ = v_isSharedCheck_97_;
goto v_resetjp_76_;
}
else
{
lean_dec(v_m_u2082_65_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_97_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
uint8_t v___x_79_; 
v___x_79_ = l_Nat_blt(v_head_69_, v_head_71_);
if (v___x_79_ == 0)
{
lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_90_; 
lean_inc(v_tail_72_);
lean_inc(v_head_71_);
v_isSharedCheck_90_ = !lean_is_exclusive(v_m_u2081_64_);
if (v_isSharedCheck_90_ == 0)
{
lean_object* v_unused_91_; lean_object* v_unused_92_; 
v_unused_91_ = lean_ctor_get(v_m_u2081_64_, 1);
lean_dec(v_unused_91_);
v_unused_92_ = lean_ctor_get(v_m_u2081_64_, 0);
lean_dec(v_unused_92_);
v___x_81_ = v_m_u2081_64_;
v_isShared_82_ = v_isSharedCheck_90_;
goto v_resetjp_80_;
}
else
{
lean_dec(v_m_u2081_64_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_90_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_83_; lean_object* v___x_85_; 
v___x_83_ = l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Mon_mul_go(v_n_74_, v_tail_72_, v_tail_70_);
lean_dec(v_n_74_);
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 1, v___x_83_);
lean_ctor_set(v___x_81_, 0, v_head_69_);
v___x_85_ = v___x_81_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_head_69_);
lean_ctor_set(v_reuseFailAlloc_89_, 1, v___x_83_);
v___x_85_ = v_reuseFailAlloc_89_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
lean_object* v___x_87_; 
if (v_isShared_78_ == 0)
{
lean_ctor_set(v___x_77_, 1, v___x_85_);
lean_ctor_set(v___x_77_, 0, v_head_71_);
v___x_87_ = v___x_77_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v_head_71_);
lean_ctor_set(v_reuseFailAlloc_88_, 1, v___x_85_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
return v___x_87_;
}
}
}
}
else
{
lean_object* v___x_93_; lean_object* v___x_95_; 
v___x_93_ = l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Mon_mul_go(v_n_74_, v_m_u2081_64_, v_tail_70_);
lean_dec(v_n_74_);
if (v_isShared_78_ == 0)
{
lean_ctor_set(v___x_77_, 1, v___x_93_);
v___x_95_ = v___x_77_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v_head_69_);
lean_ctor_set(v_reuseFailAlloc_96_, 1, v___x_93_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
}
}
else
{
lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_107_; 
lean_inc(v_tail_72_);
lean_inc(v_head_71_);
v_isSharedCheck_107_ = !lean_is_exclusive(v_m_u2081_64_);
if (v_isSharedCheck_107_ == 0)
{
lean_object* v_unused_108_; lean_object* v_unused_109_; 
v_unused_108_ = lean_ctor_get(v_m_u2081_64_, 1);
lean_dec(v_unused_108_);
v_unused_109_ = lean_ctor_get(v_m_u2081_64_, 0);
lean_dec(v_unused_109_);
v___x_101_ = v_m_u2081_64_;
v_isShared_102_ = v_isSharedCheck_107_;
goto v_resetjp_100_;
}
else
{
lean_dec(v_m_u2081_64_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_107_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_103_; lean_object* v___x_105_; 
v___x_103_ = l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Mon_mul_go(v_n_74_, v_tail_72_, v_m_u2082_65_);
lean_dec(v_n_74_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 1, v___x_103_);
v___x_105_ = v___x_101_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v_head_71_);
lean_ctor_set(v_reuseFailAlloc_106_, 1, v___x_103_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Mon_mul_go___boxed(lean_object* v_fuel_110_, lean_object* v_m_u2081_111_, lean_object* v_m_u2082_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Mon_mul_go(v_fuel_110_, v_m_u2081_111_, v_m_u2082_112_);
lean_dec(v_fuel_110_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Mon_mul(lean_object* v_m_u2081_114_, lean_object* v_m_u2082_115_){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = lean_unsigned_to_nat(1000000u);
v___x_117_ = l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Mon_mul_go(v___x_116_, v_m_u2081_114_, v_m_u2082_115_);
return v___x_117_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_spec__1(lean_object* v_x_118_, lean_object* v_x_119_){
_start:
{
if (lean_obj_tag(v_x_118_) == 0)
{
if (lean_obj_tag(v_x_119_) == 0)
{
uint8_t v___x_120_; 
v___x_120_ = 1;
return v___x_120_;
}
else
{
uint8_t v___x_121_; 
v___x_121_ = 0;
return v___x_121_;
}
}
else
{
if (lean_obj_tag(v_x_119_) == 0)
{
uint8_t v___x_122_; 
v___x_122_ = 0;
return v___x_122_;
}
else
{
lean_object* v_head_123_; lean_object* v_tail_124_; lean_object* v_head_125_; lean_object* v_tail_126_; uint8_t v___x_127_; 
v_head_123_ = lean_ctor_get(v_x_118_, 0);
v_tail_124_ = lean_ctor_get(v_x_118_, 1);
v_head_125_ = lean_ctor_get(v_x_119_, 0);
v_tail_126_ = lean_ctor_get(v_x_119_, 1);
v___x_127_ = lean_nat_dec_eq(v_head_123_, v_head_125_);
if (v___x_127_ == 0)
{
return v___x_127_;
}
else
{
v_x_118_ = v_tail_124_;
v_x_119_ = v_tail_126_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_spec__1___boxed(lean_object* v_x_129_, lean_object* v_x_130_){
_start:
{
uint8_t v_res_131_; lean_object* v_r_132_; 
v_res_131_ = l_List_beq___at___00__private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_spec__1(v_x_129_, v_x_130_);
lean_dec(v_x_130_);
lean_dec(v_x_129_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
LEAN_EXPORT uint8_t l_List_lex___at___00__private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_spec__0(lean_object* v_l_u2081_133_, lean_object* v_l_u2082_134_){
_start:
{
if (lean_obj_tag(v_l_u2081_133_) == 0)
{
if (lean_obj_tag(v_l_u2082_134_) == 0)
{
uint8_t v___x_135_; 
v___x_135_ = 0;
return v___x_135_;
}
else
{
uint8_t v___x_136_; 
v___x_136_ = 1;
return v___x_136_;
}
}
else
{
if (lean_obj_tag(v_l_u2082_134_) == 0)
{
uint8_t v___x_137_; 
v___x_137_ = 0;
return v___x_137_;
}
else
{
lean_object* v_head_138_; lean_object* v_tail_139_; lean_object* v_head_140_; lean_object* v_tail_141_; uint8_t v___x_142_; 
v_head_138_ = lean_ctor_get(v_l_u2081_133_, 0);
v_tail_139_ = lean_ctor_get(v_l_u2081_133_, 1);
v_head_140_ = lean_ctor_get(v_l_u2082_134_, 0);
v_tail_141_ = lean_ctor_get(v_l_u2082_134_, 1);
v___x_142_ = l_Nat_blt(v_head_138_, v_head_140_);
if (v___x_142_ == 0)
{
uint8_t v___x_143_; 
v___x_143_ = lean_nat_dec_eq(v_head_138_, v_head_140_);
if (v___x_143_ == 0)
{
return v___x_143_;
}
else
{
v_l_u2081_133_ = v_tail_139_;
v_l_u2082_134_ = v_tail_141_;
goto _start;
}
}
else
{
return v___x_142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_lex___at___00__private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_spec__0___boxed(lean_object* v_l_u2081_145_, lean_object* v_l_u2082_146_){
_start:
{
uint8_t v_res_147_; lean_object* v_r_148_; 
v_res_147_ = l_List_lex___at___00__private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_spec__0(v_l_u2081_145_, v_l_u2082_146_);
lean_dec(v_l_u2082_146_);
lean_dec(v_l_u2081_145_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go(lean_object* v_fuel_149_, lean_object* v_p_u2081_150_, lean_object* v_p_u2082_151_){
_start:
{
lean_object* v_zero_152_; uint8_t v_isZero_153_; 
v_zero_152_ = lean_unsigned_to_nat(0u);
v_isZero_153_ = lean_nat_dec_eq(v_fuel_149_, v_zero_152_);
if (v_isZero_153_ == 1)
{
lean_object* v___x_154_; 
lean_dec(v_fuel_149_);
v___x_154_ = l_List_appendTR___redArg(v_p_u2081_150_, v_p_u2082_151_);
return v___x_154_;
}
else
{
if (lean_obj_tag(v_p_u2082_151_) == 0)
{
lean_dec(v_fuel_149_);
return v_p_u2081_150_;
}
else
{
if (lean_obj_tag(v_p_u2081_150_) == 0)
{
lean_dec(v_fuel_149_);
return v_p_u2082_151_;
}
else
{
lean_object* v_head_155_; lean_object* v_head_156_; lean_object* v_tail_157_; lean_object* v_tail_158_; lean_object* v_fst_159_; lean_object* v_snd_160_; lean_object* v_fst_161_; lean_object* v_snd_162_; lean_object* v_one_163_; lean_object* v_n_164_; uint8_t v___x_165_; 
v_head_155_ = lean_ctor_get(v_p_u2081_150_, 0);
v_head_156_ = lean_ctor_get(v_p_u2082_151_, 0);
lean_inc(v_head_156_);
v_tail_157_ = lean_ctor_get(v_p_u2082_151_, 1);
v_tail_158_ = lean_ctor_get(v_p_u2081_150_, 1);
v_fst_159_ = lean_ctor_get(v_head_155_, 0);
v_snd_160_ = lean_ctor_get(v_head_155_, 1);
v_fst_161_ = lean_ctor_get(v_head_156_, 0);
v_snd_162_ = lean_ctor_get(v_head_156_, 1);
v_one_163_ = lean_unsigned_to_nat(1u);
v_n_164_ = lean_nat_sub(v_fuel_149_, v_one_163_);
lean_dec(v_fuel_149_);
v___x_165_ = l_List_lex___at___00__private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_spec__0(v_snd_160_, v_snd_162_);
if (v___x_165_ == 0)
{
lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_196_; 
lean_inc(v_tail_157_);
v_isSharedCheck_196_ = !lean_is_exclusive(v_p_u2082_151_);
if (v_isSharedCheck_196_ == 0)
{
lean_object* v_unused_197_; lean_object* v_unused_198_; 
v_unused_197_ = lean_ctor_get(v_p_u2082_151_, 1);
lean_dec(v_unused_197_);
v_unused_198_ = lean_ctor_get(v_p_u2082_151_, 0);
lean_dec(v_unused_198_);
v___x_167_ = v_p_u2082_151_;
v_isShared_168_ = v_isSharedCheck_196_;
goto v_resetjp_166_;
}
else
{
lean_dec(v_p_u2082_151_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_196_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
uint8_t v___x_169_; 
v___x_169_ = l_List_beq___at___00__private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_spec__1(v_snd_160_, v_snd_162_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; lean_object* v___x_172_; 
v___x_170_ = l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go(v_n_164_, v_p_u2081_150_, v_tail_157_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 1, v___x_170_);
v___x_172_ = v___x_167_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v_head_156_);
lean_ctor_set(v_reuseFailAlloc_173_, 1, v___x_170_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
else
{
lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_193_; 
lean_inc(v_fst_161_);
lean_inc(v_snd_160_);
lean_inc(v_fst_159_);
lean_inc(v_tail_158_);
lean_del_object(v___x_167_);
v_isSharedCheck_193_ = !lean_is_exclusive(v_p_u2081_150_);
if (v_isSharedCheck_193_ == 0)
{
lean_object* v_unused_194_; lean_object* v_unused_195_; 
v_unused_194_ = lean_ctor_get(v_p_u2081_150_, 1);
lean_dec(v_unused_194_);
v_unused_195_ = lean_ctor_get(v_p_u2081_150_, 0);
lean_dec(v_unused_195_);
v___x_175_ = v_p_u2081_150_;
v_isShared_176_ = v_isSharedCheck_193_;
goto v_resetjp_174_;
}
else
{
lean_dec(v_p_u2081_150_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_193_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_190_; 
v_isSharedCheck_190_ = !lean_is_exclusive(v_head_156_);
if (v_isSharedCheck_190_ == 0)
{
lean_object* v_unused_191_; lean_object* v_unused_192_; 
v_unused_191_ = lean_ctor_get(v_head_156_, 1);
lean_dec(v_unused_191_);
v_unused_192_ = lean_ctor_get(v_head_156_, 0);
lean_dec(v_unused_192_);
v___x_178_ = v_head_156_;
v_isShared_179_ = v_isSharedCheck_190_;
goto v_resetjp_177_;
}
else
{
lean_dec(v_head_156_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_190_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_180_; uint8_t v___x_181_; 
v___x_180_ = lean_nat_add(v_fst_159_, v_fst_161_);
lean_dec(v_fst_161_);
lean_dec(v_fst_159_);
v___x_181_ = lean_nat_dec_eq(v___x_180_, v_zero_152_);
if (v___x_181_ == 0)
{
lean_object* v___x_183_; 
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 1, v_snd_160_);
lean_ctor_set(v___x_178_, 0, v___x_180_);
v___x_183_ = v___x_178_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_180_);
lean_ctor_set(v_reuseFailAlloc_188_, 1, v_snd_160_);
v___x_183_ = v_reuseFailAlloc_188_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
lean_object* v___x_184_; lean_object* v___x_186_; 
v___x_184_ = l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go(v_n_164_, v_tail_158_, v_tail_157_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 1, v___x_184_);
lean_ctor_set(v___x_175_, 0, v___x_183_);
v___x_186_ = v___x_175_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___x_183_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v___x_184_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
else
{
lean_dec(v___x_180_);
lean_del_object(v___x_178_);
lean_del_object(v___x_175_);
lean_dec(v_snd_160_);
v_fuel_149_ = v_n_164_;
v_p_u2081_150_ = v_tail_158_;
v_p_u2082_151_ = v_tail_157_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_206_; 
lean_inc(v_tail_158_);
lean_inc(v_head_155_);
lean_dec(v_head_156_);
v_isSharedCheck_206_ = !lean_is_exclusive(v_p_u2081_150_);
if (v_isSharedCheck_206_ == 0)
{
lean_object* v_unused_207_; lean_object* v_unused_208_; 
v_unused_207_ = lean_ctor_get(v_p_u2081_150_, 1);
lean_dec(v_unused_207_);
v_unused_208_ = lean_ctor_get(v_p_u2081_150_, 0);
lean_dec(v_unused_208_);
v___x_200_ = v_p_u2081_150_;
v_isShared_201_ = v_isSharedCheck_206_;
goto v_resetjp_199_;
}
else
{
lean_dec(v_p_u2081_150_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_206_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_202_; lean_object* v___x_204_; 
v___x_202_ = l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go(v_n_164_, v_tail_158_, v_p_u2082_151_);
if (v_isShared_201_ == 0)
{
lean_ctor_set(v___x_200_, 1, v___x_202_);
v___x_204_ = v___x_200_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_head_155_);
lean_ctor_set(v_reuseFailAlloc_205_, 1, v___x_202_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Poly_add(lean_object* v_p_u2081_209_, lean_object* v_p_u2082_210_){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = lean_unsigned_to_nat(1000000u);
v___x_212_ = l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go(v___x_211_, v_p_u2081_209_, v_p_u2082_210_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Poly_insertSorted(lean_object* v_k_213_, lean_object* v_m_214_, lean_object* v_p_215_){
_start:
{
if (lean_obj_tag(v_p_215_) == 0)
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_216_, 0, v_k_213_);
lean_ctor_set(v___x_216_, 1, v_m_214_);
v___x_217_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
lean_ctor_set(v___x_217_, 1, v_p_215_);
return v___x_217_;
}
else
{
lean_object* v_head_218_; lean_object* v_tail_219_; lean_object* v_snd_220_; uint8_t v___x_221_; 
v_head_218_ = lean_ctor_get(v_p_215_, 0);
lean_inc(v_head_218_);
v_tail_219_ = lean_ctor_get(v_p_215_, 1);
v_snd_220_ = lean_ctor_get(v_head_218_, 1);
v___x_221_ = l_List_lex___at___00__private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_spec__0(v_m_214_, v_snd_220_);
if (v___x_221_ == 0)
{
lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_229_; 
lean_inc(v_tail_219_);
v_isSharedCheck_229_ = !lean_is_exclusive(v_p_215_);
if (v_isSharedCheck_229_ == 0)
{
lean_object* v_unused_230_; lean_object* v_unused_231_; 
v_unused_230_ = lean_ctor_get(v_p_215_, 1);
lean_dec(v_unused_230_);
v_unused_231_ = lean_ctor_get(v_p_215_, 0);
lean_dec(v_unused_231_);
v___x_223_ = v_p_215_;
v_isShared_224_ = v_isSharedCheck_229_;
goto v_resetjp_222_;
}
else
{
lean_dec(v_p_215_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_229_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_225_; lean_object* v___x_227_; 
v___x_225_ = l_Nat_Internal_SOM_Poly_insertSorted(v_k_213_, v_m_214_, v_tail_219_);
if (v_isShared_224_ == 0)
{
lean_ctor_set(v___x_223_, 1, v___x_225_);
v___x_227_ = v___x_223_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_head_218_);
lean_ctor_set(v_reuseFailAlloc_228_, 1, v___x_225_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
else
{
lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_239_; 
v_isSharedCheck_239_ = !lean_is_exclusive(v_head_218_);
if (v_isSharedCheck_239_ == 0)
{
lean_object* v_unused_240_; lean_object* v_unused_241_; 
v_unused_240_ = lean_ctor_get(v_head_218_, 1);
lean_dec(v_unused_240_);
v_unused_241_ = lean_ctor_get(v_head_218_, 0);
lean_dec(v_unused_241_);
v___x_233_ = v_head_218_;
v_isShared_234_ = v_isSharedCheck_239_;
goto v_resetjp_232_;
}
else
{
lean_dec(v_head_218_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_239_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 1, v_m_214_);
lean_ctor_set(v___x_233_, 0, v_k_213_);
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_k_213_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_m_214_);
v___x_236_ = v_reuseFailAlloc_238_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
lean_object* v___x_237_; 
v___x_237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
lean_ctor_set(v___x_237_, 1, v_p_215_);
return v___x_237_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_mulMon_go(lean_object* v_k_242_, lean_object* v_m_243_, lean_object* v_p_244_, lean_object* v_acc_245_){
_start:
{
if (lean_obj_tag(v_p_244_) == 0)
{
lean_dec(v_m_243_);
return v_acc_245_;
}
else
{
lean_object* v_head_246_; lean_object* v_tail_247_; lean_object* v_fst_248_; lean_object* v_snd_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v_head_246_ = lean_ctor_get(v_p_244_, 0);
lean_inc(v_head_246_);
v_tail_247_ = lean_ctor_get(v_p_244_, 1);
lean_inc(v_tail_247_);
lean_dec_ref_known(v_p_244_, 2);
v_fst_248_ = lean_ctor_get(v_head_246_, 0);
lean_inc(v_fst_248_);
v_snd_249_ = lean_ctor_get(v_head_246_, 1);
lean_inc(v_snd_249_);
lean_dec(v_head_246_);
v___x_250_ = lean_nat_mul(v_k_242_, v_fst_248_);
lean_dec(v_fst_248_);
lean_inc(v_m_243_);
v___x_251_ = l_Nat_Internal_SOM_Mon_mul(v_m_243_, v_snd_249_);
v___x_252_ = l_Nat_Internal_SOM_Poly_insertSorted(v___x_250_, v___x_251_, v_acc_245_);
v_p_244_ = v_tail_247_;
v_acc_245_ = v___x_252_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_mulMon_go___boxed(lean_object* v_k_254_, lean_object* v_m_255_, lean_object* v_p_256_, lean_object* v_acc_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_mulMon_go(v_k_254_, v_m_255_, v_p_256_, v_acc_257_);
lean_dec(v_k_254_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Poly_mulMon(lean_object* v_p_259_, lean_object* v_k_260_, lean_object* v_m_261_){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = lean_box(0);
v___x_263_ = l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_mulMon_go(v_k_260_, v_m_261_, v_p_259_, v___x_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Poly_mulMon___boxed(lean_object* v_p_264_, lean_object* v_k_265_, lean_object* v_m_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Nat_Internal_SOM_Poly_mulMon(v_p_264_, v_k_265_, v_m_266_);
lean_dec(v_k_265_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_mul_go(lean_object* v_p_u2082_268_, lean_object* v_p_u2081_269_, lean_object* v_acc_270_){
_start:
{
if (lean_obj_tag(v_p_u2081_269_) == 0)
{
lean_dec(v_p_u2082_268_);
return v_acc_270_;
}
else
{
lean_object* v_head_271_; lean_object* v_tail_272_; lean_object* v_fst_273_; lean_object* v_snd_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v_head_271_ = lean_ctor_get(v_p_u2081_269_, 0);
lean_inc(v_head_271_);
v_tail_272_ = lean_ctor_get(v_p_u2081_269_, 1);
lean_inc(v_tail_272_);
lean_dec_ref_known(v_p_u2081_269_, 2);
v_fst_273_ = lean_ctor_get(v_head_271_, 0);
lean_inc(v_fst_273_);
v_snd_274_ = lean_ctor_get(v_head_271_, 1);
lean_inc(v_snd_274_);
lean_dec(v_head_271_);
lean_inc(v_p_u2082_268_);
v___x_275_ = l_Nat_Internal_SOM_Poly_mulMon(v_p_u2082_268_, v_fst_273_, v_snd_274_);
lean_dec(v_fst_273_);
v___x_276_ = l_Nat_Internal_SOM_Poly_add(v_acc_270_, v___x_275_);
v_p_u2081_269_ = v_tail_272_;
v_acc_270_ = v___x_276_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Poly_mul(lean_object* v_p_u2081_278_, lean_object* v_p_u2082_279_){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = lean_box(0);
v___x_281_ = l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_mul_go(v_p_u2082_279_, v_p_u2081_278_, v___x_280_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_toPoly(lean_object* v_x_282_){
_start:
{
switch(lean_obj_tag(v_x_282_))
{
case 0:
{
lean_object* v_i_283_; lean_object* v___x_284_; uint8_t v___x_285_; 
v_i_283_ = lean_ctor_get(v_x_282_, 0);
v___x_284_ = lean_unsigned_to_nat(0u);
v___x_285_ = lean_nat_dec_eq(v_i_283_, v___x_284_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_286_ = lean_box(0);
lean_inc(v_i_283_);
v___x_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_287_, 0, v_i_283_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
v___x_288_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_287_);
lean_ctor_set(v___x_288_, 1, v___x_286_);
return v___x_288_;
}
else
{
lean_object* v___x_289_; 
v___x_289_ = lean_box(0);
return v___x_289_;
}
}
case 1:
{
lean_object* v_v_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v_v_290_ = lean_ctor_get(v_x_282_, 0);
v___x_291_ = lean_unsigned_to_nat(1u);
v___x_292_ = lean_box(0);
lean_inc(v_v_290_);
v___x_293_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_293_, 0, v_v_290_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_291_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
lean_ctor_set(v___x_295_, 1, v___x_292_);
return v___x_295_;
}
case 2:
{
lean_object* v_a_296_; lean_object* v_b_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v_a_296_ = lean_ctor_get(v_x_282_, 0);
v_b_297_ = lean_ctor_get(v_x_282_, 1);
v___x_298_ = l_Nat_Internal_SOM_Expr_toPoly(v_a_296_);
v___x_299_ = l_Nat_Internal_SOM_Expr_toPoly(v_b_297_);
v___x_300_ = l_Nat_Internal_SOM_Poly_add(v___x_298_, v___x_299_);
return v___x_300_;
}
default: 
{
lean_object* v_a_301_; lean_object* v_b_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v_a_301_ = lean_ctor_get(v_x_282_, 0);
v_b_302_ = lean_ctor_get(v_x_282_, 1);
v___x_303_ = l_Nat_Internal_SOM_Expr_toPoly(v_a_301_);
v___x_304_ = l_Nat_Internal_SOM_Expr_toPoly(v_b_302_);
v___x_305_ = l_Nat_Internal_SOM_Poly_mul(v___x_303_, v___x_304_);
return v___x_305_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_Internal_SOM_Expr_toPoly___boxed(lean_object* v_x_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Nat_Internal_SOM_Expr_toPoly(v_x_306_);
lean_dec_ref(v_x_306_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Mon_mul_go_match__1_splitter___redArg(lean_object* v_m_u2081_308_, lean_object* v_m_u2082_309_, lean_object* v_h__1_310_, lean_object* v_h__2_311_, lean_object* v_h__3_312_){
_start:
{
if (lean_obj_tag(v_m_u2082_309_) == 0)
{
lean_object* v___x_313_; 
lean_dec(v_h__3_312_);
lean_dec(v_h__2_311_);
v___x_313_ = lean_apply_1(v_h__1_310_, v_m_u2081_308_);
return v___x_313_;
}
else
{
lean_dec(v_h__1_310_);
if (lean_obj_tag(v_m_u2081_308_) == 0)
{
lean_object* v___x_314_; 
lean_dec(v_h__3_312_);
v___x_314_ = lean_apply_2(v_h__2_311_, v_m_u2082_309_, lean_box(0));
return v___x_314_;
}
else
{
lean_object* v_head_315_; lean_object* v_tail_316_; lean_object* v_head_317_; lean_object* v_tail_318_; lean_object* v___x_319_; 
lean_dec(v_h__2_311_);
v_head_315_ = lean_ctor_get(v_m_u2082_309_, 0);
lean_inc(v_head_315_);
v_tail_316_ = lean_ctor_get(v_m_u2082_309_, 1);
lean_inc(v_tail_316_);
lean_dec_ref_known(v_m_u2082_309_, 2);
v_head_317_ = lean_ctor_get(v_m_u2081_308_, 0);
lean_inc(v_head_317_);
v_tail_318_ = lean_ctor_get(v_m_u2081_308_, 1);
lean_inc(v_tail_318_);
lean_dec_ref_known(v_m_u2081_308_, 2);
v___x_319_ = lean_apply_4(v_h__3_312_, v_head_317_, v_tail_318_, v_head_315_, v_tail_316_);
return v___x_319_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Mon_mul_go_match__1_splitter(lean_object* v_motive_320_, lean_object* v_m_u2081_321_, lean_object* v_m_u2082_322_, lean_object* v_h__1_323_, lean_object* v_h__2_324_, lean_object* v_h__3_325_){
_start:
{
if (lean_obj_tag(v_m_u2082_322_) == 0)
{
lean_object* v___x_326_; 
lean_dec(v_h__3_325_);
lean_dec(v_h__2_324_);
v___x_326_ = lean_apply_1(v_h__1_323_, v_m_u2081_321_);
return v___x_326_;
}
else
{
lean_dec(v_h__1_323_);
if (lean_obj_tag(v_m_u2081_321_) == 0)
{
lean_object* v___x_327_; 
lean_dec(v_h__3_325_);
v___x_327_ = lean_apply_2(v_h__2_324_, v_m_u2082_322_, lean_box(0));
return v___x_327_;
}
else
{
lean_object* v_head_328_; lean_object* v_tail_329_; lean_object* v_head_330_; lean_object* v_tail_331_; lean_object* v___x_332_; 
lean_dec(v_h__2_324_);
v_head_328_ = lean_ctor_get(v_m_u2082_322_, 0);
lean_inc(v_head_328_);
v_tail_329_ = lean_ctor_get(v_m_u2082_322_, 1);
lean_inc(v_tail_329_);
lean_dec_ref_known(v_m_u2082_322_, 2);
v_head_330_ = lean_ctor_get(v_m_u2081_321_, 0);
lean_inc(v_head_330_);
v_tail_331_ = lean_ctor_get(v_m_u2081_321_, 1);
lean_inc(v_tail_331_);
lean_dec_ref_known(v_m_u2081_321_, 2);
v___x_332_ = lean_apply_4(v_h__3_325_, v_head_330_, v_tail_331_, v_head_328_, v_tail_329_);
return v___x_332_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_match__1_splitter___redArg(lean_object* v_p_u2081_333_, lean_object* v_p_u2082_334_, lean_object* v_h__1_335_, lean_object* v_h__2_336_, lean_object* v_h__3_337_){
_start:
{
if (lean_obj_tag(v_p_u2082_334_) == 0)
{
lean_object* v___x_338_; 
lean_dec(v_h__3_337_);
lean_dec(v_h__2_336_);
v___x_338_ = lean_apply_1(v_h__1_335_, v_p_u2081_333_);
return v___x_338_;
}
else
{
lean_dec(v_h__1_335_);
if (lean_obj_tag(v_p_u2081_333_) == 0)
{
lean_object* v___x_339_; 
lean_dec(v_h__3_337_);
v___x_339_ = lean_apply_2(v_h__2_336_, v_p_u2082_334_, lean_box(0));
return v___x_339_;
}
else
{
lean_object* v_head_340_; lean_object* v_head_341_; lean_object* v_tail_342_; lean_object* v_tail_343_; lean_object* v_fst_344_; lean_object* v_snd_345_; lean_object* v_fst_346_; lean_object* v_snd_347_; lean_object* v___x_348_; 
lean_dec(v_h__2_336_);
v_head_340_ = lean_ctor_get(v_p_u2081_333_, 0);
lean_inc(v_head_340_);
v_head_341_ = lean_ctor_get(v_p_u2082_334_, 0);
lean_inc(v_head_341_);
v_tail_342_ = lean_ctor_get(v_p_u2082_334_, 1);
lean_inc(v_tail_342_);
lean_dec_ref_known(v_p_u2082_334_, 2);
v_tail_343_ = lean_ctor_get(v_p_u2081_333_, 1);
lean_inc(v_tail_343_);
lean_dec_ref_known(v_p_u2081_333_, 2);
v_fst_344_ = lean_ctor_get(v_head_340_, 0);
lean_inc(v_fst_344_);
v_snd_345_ = lean_ctor_get(v_head_340_, 1);
lean_inc(v_snd_345_);
lean_dec(v_head_340_);
v_fst_346_ = lean_ctor_get(v_head_341_, 0);
lean_inc(v_fst_346_);
v_snd_347_ = lean_ctor_get(v_head_341_, 1);
lean_inc(v_snd_347_);
lean_dec(v_head_341_);
v___x_348_ = lean_apply_6(v_h__3_337_, v_fst_344_, v_snd_345_, v_tail_343_, v_fst_346_, v_snd_347_, v_tail_342_);
return v___x_348_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Internal_SOM_0__Nat_Internal_SOM_Poly_add_go_match__1_splitter(lean_object* v_motive_349_, lean_object* v_p_u2081_350_, lean_object* v_p_u2082_351_, lean_object* v_h__1_352_, lean_object* v_h__2_353_, lean_object* v_h__3_354_){
_start:
{
if (lean_obj_tag(v_p_u2082_351_) == 0)
{
lean_object* v___x_355_; 
lean_dec(v_h__3_354_);
lean_dec(v_h__2_353_);
v___x_355_ = lean_apply_1(v_h__1_352_, v_p_u2081_350_);
return v___x_355_;
}
else
{
lean_dec(v_h__1_352_);
if (lean_obj_tag(v_p_u2081_350_) == 0)
{
lean_object* v___x_356_; 
lean_dec(v_h__3_354_);
v___x_356_ = lean_apply_2(v_h__2_353_, v_p_u2082_351_, lean_box(0));
return v___x_356_;
}
else
{
lean_object* v_head_357_; lean_object* v_head_358_; lean_object* v_tail_359_; lean_object* v_tail_360_; lean_object* v_fst_361_; lean_object* v_snd_362_; lean_object* v_fst_363_; lean_object* v_snd_364_; lean_object* v___x_365_; 
lean_dec(v_h__2_353_);
v_head_357_ = lean_ctor_get(v_p_u2081_350_, 0);
lean_inc(v_head_357_);
v_head_358_ = lean_ctor_get(v_p_u2082_351_, 0);
lean_inc(v_head_358_);
v_tail_359_ = lean_ctor_get(v_p_u2082_351_, 1);
lean_inc(v_tail_359_);
lean_dec_ref_known(v_p_u2082_351_, 2);
v_tail_360_ = lean_ctor_get(v_p_u2081_350_, 1);
lean_inc(v_tail_360_);
lean_dec_ref_known(v_p_u2081_350_, 2);
v_fst_361_ = lean_ctor_get(v_head_357_, 0);
lean_inc(v_fst_361_);
v_snd_362_ = lean_ctor_get(v_head_357_, 1);
lean_inc(v_snd_362_);
lean_dec(v_head_357_);
v_fst_363_ = lean_ctor_get(v_head_358_, 0);
lean_inc(v_fst_363_);
v_snd_364_ = lean_ctor_get(v_head_358_, 1);
lean_inc(v_snd_364_);
lean_dec(v_head_358_);
v___x_365_ = lean_apply_6(v_h__3_354_, v_fst_361_, v_snd_362_, v_tail_360_, v_fst_363_, v_snd_364_, v_tail_359_);
return v___x_365_;
}
}
}
}
lean_object* runtime_initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
lean_object* runtime_initialize_Init_ByCases(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_BasicAux(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Prod(uint8_t builtin);
lean_object* runtime_initialize_Init_Meta(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Nat_Internal_SOM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Prod(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Nat_Internal_SOM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
lean_object* initialize_Init_ByCases(uint8_t builtin);
lean_object* initialize_Init_Data_List_BasicAux(uint8_t builtin);
lean_object* initialize_Init_Data_Prod(uint8_t builtin);
lean_object* initialize_Init_Meta(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Nat_Internal_SOM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Prod(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Internal_SOM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Nat_Internal_SOM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Nat_Internal_SOM(builtin);
}
#ifdef __cplusplus
}
#endif
