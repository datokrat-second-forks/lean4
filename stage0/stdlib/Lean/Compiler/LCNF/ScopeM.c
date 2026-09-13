// Lean compiler output
// Module: Lean.Compiler.LCNF.ScopeM
// Imports: public import Lean.Compiler.LCNF.CompilerM
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
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_getScope___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_getScope___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_getScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_getScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_setScope___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_setScope___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_setScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_setScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_clearScope___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_clearScope___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_clearScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_clearScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_isInScope___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_isInScope___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_isInScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_isInScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_addToScope___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_addToScope___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_addToScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_addToScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_getScope___redArg(lean_object* v_a_1_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_st_ref_get(v_a_1_);
v___x_4_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4_, 0, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_getScope___redArg___boxed(lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lean_Compiler_LCNF_ScopeM_getScope___redArg(v_a_5_);
lean_dec(v_a_5_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_getScope(lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_Compiler_LCNF_ScopeM_getScope___redArg(v_a_8_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_getScope___boxed(lean_object* v_a_15_, lean_object* v_a_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lean_Compiler_LCNF_ScopeM_getScope(v_a_15_, v_a_16_, v_a_17_, v_a_18_, v_a_19_);
lean_dec(v_a_19_);
lean_dec_ref(v_a_18_);
lean_dec(v_a_17_);
lean_dec_ref(v_a_16_);
lean_dec(v_a_15_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_setScope___redArg(lean_object* v_newScope_22_, lean_object* v_a_23_){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_25_ = lean_box(0);
v___x_26_ = lean_st_ref_swap(v_a_23_, v_newScope_22_);
lean_dec(v___x_26_);
v___x_27_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_27_, 0, v___x_25_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_setScope___redArg___boxed(lean_object* v_newScope_28_, lean_object* v_a_29_, lean_object* v_a_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lean_Compiler_LCNF_ScopeM_setScope___redArg(v_newScope_28_, v_a_29_);
lean_dec(v_a_29_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_setScope(lean_object* v_newScope_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Compiler_LCNF_ScopeM_setScope___redArg(v_newScope_32_, v_a_33_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_setScope___boxed(lean_object* v_newScope_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_Compiler_LCNF_ScopeM_setScope(v_newScope_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_);
lean_dec(v_a_45_);
lean_dec_ref(v_a_44_);
lean_dec(v_a_43_);
lean_dec_ref(v_a_42_);
lean_dec(v_a_41_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_clearScope___redArg(lean_object* v_a_48_){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = lean_box(1);
v___x_51_ = l_Lean_Compiler_LCNF_ScopeM_setScope___redArg(v___x_50_, v_a_48_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_clearScope___redArg___boxed(lean_object* v_a_52_, lean_object* v_a_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lean_Compiler_LCNF_ScopeM_clearScope___redArg(v_a_52_);
lean_dec(v_a_52_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_clearScope(lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lean_Compiler_LCNF_ScopeM_clearScope___redArg(v_a_55_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_clearScope___boxed(lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Lean_Compiler_LCNF_ScopeM_clearScope(v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_);
lean_dec(v_a_66_);
lean_dec_ref(v_a_65_);
lean_dec(v_a_64_);
lean_dec_ref(v_a_63_);
lean_dec(v_a_62_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___lam__0(lean_object* v_x_69_){
_start:
{
lean_object* v_fst_70_; 
v_fst_70_ = lean_ctor_get(v_x_69_, 0);
lean_inc(v_fst_70_);
return v_fst_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___lam__0___boxed(lean_object* v_x_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___lam__0(v_x_71_);
lean_dec_ref(v_x_71_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___lam__1(lean_object* v___x_73_, lean_object* v_x_74_){
_start:
{
lean_inc(v___x_73_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___lam__1___boxed(lean_object* v___x_75_, lean_object* v_x_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___lam__1(v___x_75_, v_x_76_);
lean_dec(v_x_76_);
lean_dec(v___x_75_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___lam__2(lean_object* v_toFunctor_78_, lean_object* v_inst_79_, lean_object* v_inst_80_, lean_object* v_x_81_, lean_object* v___f_82_, lean_object* v_scope_83_){
_start:
{
lean_object* v_map_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___f_87_; lean_object* v_y_88_; lean_object* v___x_89_; 
v_map_84_ = lean_ctor_get(v_toFunctor_78_, 0);
lean_inc(v_map_84_);
lean_dec_ref(v_toFunctor_78_);
v___x_85_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_setScope___boxed), 7, 1);
lean_closure_set(v___x_85_, 0, v_scope_83_);
v___x_86_ = lean_apply_2(v_inst_79_, lean_box(0), v___x_85_);
v___f_87_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_87_, 0, v___x_86_);
v_y_88_ = lean_apply_4(v_inst_80_, lean_box(0), lean_box(0), v_x_81_, v___f_87_);
v___x_89_ = lean_apply_4(v_map_84_, lean_box(0), lean_box(0), v___f_82_, v_y_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg(lean_object* v_inst_91_, lean_object* v_inst_92_, lean_object* v_inst_93_, lean_object* v_x_94_){
_start:
{
lean_object* v_toApplicative_95_; lean_object* v_toBind_96_; lean_object* v_toFunctor_97_; lean_object* v___f_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___f_101_; lean_object* v___x_102_; 
v_toApplicative_95_ = lean_ctor_get(v_inst_92_, 0);
lean_inc_ref(v_toApplicative_95_);
v_toBind_96_ = lean_ctor_get(v_inst_92_, 1);
lean_inc(v_toBind_96_);
lean_dec_ref(v_inst_92_);
v_toFunctor_97_ = lean_ctor_get(v_toApplicative_95_, 0);
lean_inc_ref(v_toFunctor_97_);
lean_dec_ref(v_toApplicative_95_);
v___f_98_ = ((lean_object*)(l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___closed__0));
v___x_99_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_getScope___boxed), 6, 0);
lean_inc(v_inst_91_);
v___x_100_ = lean_apply_2(v_inst_91_, lean_box(0), v___x_99_);
v___f_101_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg___lam__2), 6, 5);
lean_closure_set(v___f_101_, 0, v_toFunctor_97_);
lean_closure_set(v___f_101_, 1, v_inst_91_);
lean_closure_set(v___f_101_, 2, v_inst_93_);
lean_closure_set(v___f_101_, 3, v_x_94_);
lean_closure_set(v___f_101_, 4, v___f_98_);
v___x_102_ = lean_apply_4(v_toBind_96_, lean_box(0), lean_box(0), v___x_100_, v___f_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope(lean_object* v_m_103_, lean_object* v_00_u03b1_104_, lean_object* v_inst_105_, lean_object* v_inst_106_, lean_object* v_inst_107_, lean_object* v_x_108_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg(v_inst_105_, v_inst_106_, v_inst_107_, v_x_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___redArg___lam__0(lean_object* v_x_110_, lean_object* v_____r_111_){
_start:
{
lean_inc(v_x_110_);
return v_x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___redArg___lam__0___boxed(lean_object* v_x_112_, lean_object* v_____r_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___redArg___lam__0(v_x_112_, v_____r_113_);
lean_dec(v_x_112_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___redArg(lean_object* v_inst_115_, lean_object* v_inst_116_, lean_object* v_inst_117_, lean_object* v_x_118_){
_start:
{
lean_object* v_toBind_119_; lean_object* v___f_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v_toBind_119_ = lean_ctor_get(v_inst_116_, 1);
v___f_120_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withNewScope___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_120_, 0, v_x_118_);
v___x_121_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_clearScope___boxed), 6, 0);
lean_inc(v_inst_115_);
v___x_122_ = lean_apply_2(v_inst_115_, lean_box(0), v___x_121_);
lean_inc(v_toBind_119_);
v___x_123_ = lean_apply_4(v_toBind_119_, lean_box(0), lean_box(0), v___x_122_, v___f_120_);
v___x_124_ = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___redArg(v_inst_115_, v_inst_116_, v_inst_117_, v___x_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope(lean_object* v_m_125_, lean_object* v_00_u03b1_126_, lean_object* v_inst_127_, lean_object* v_inst_128_, lean_object* v_inst_129_, lean_object* v_x_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___redArg(v_inst_127_, v_inst_128_, v_inst_129_, v_x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_isInScope___redArg(lean_object* v_fvarId_132_, lean_object* v_a_133_){
_start:
{
lean_object* v___x_135_; lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_145_; 
v___x_135_ = l_Lean_Compiler_LCNF_ScopeM_getScope___redArg(v_a_133_);
v_a_136_ = lean_ctor_get(v___x_135_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_145_ == 0)
{
v___x_138_ = v___x_135_;
v_isShared_139_ = v_isSharedCheck_145_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_135_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_145_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
uint8_t v___x_140_; lean_object* v___x_141_; lean_object* v___x_143_; 
v___x_140_ = l_Lean_FVarIdSet_contains(v_a_136_, v_fvarId_132_);
lean_dec(v_a_136_);
v___x_141_ = lean_box(v___x_140_);
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 0, v___x_141_);
v___x_143_ = v___x_138_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v___x_141_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_isInScope___redArg___boxed(lean_object* v_fvarId_146_, lean_object* v_a_147_, lean_object* v_a_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Lean_Compiler_LCNF_ScopeM_isInScope___redArg(v_fvarId_146_, v_a_147_);
lean_dec(v_a_147_);
lean_dec(v_fvarId_146_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_isInScope(lean_object* v_fvarId_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = l_Lean_Compiler_LCNF_ScopeM_isInScope___redArg(v_fvarId_150_, v_a_151_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_isInScope___boxed(lean_object* v_fvarId_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Lean_Compiler_LCNF_ScopeM_isInScope(v_fvarId_158_, v_a_159_, v_a_160_, v_a_161_, v_a_162_, v_a_163_);
lean_dec(v_a_163_);
lean_dec_ref(v_a_162_);
lean_dec(v_a_161_);
lean_dec_ref(v_a_160_);
lean_dec(v_a_159_);
lean_dec(v_fvarId_158_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_addToScope___redArg(lean_object* v_fvarId_166_, lean_object* v_a_167_){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_169_ = lean_st_ref_take(v_a_167_);
v___x_170_ = lean_box(0);
v___x_171_ = l_Lean_FVarIdSet_insert(v___x_169_, v_fvarId_166_);
v___x_172_ = lean_st_ref_put(v_a_167_, v___x_171_);
v___x_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_170_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_addToScope___redArg___boxed(lean_object* v_fvarId_174_, lean_object* v_a_175_, lean_object* v_a_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Lean_Compiler_LCNF_ScopeM_addToScope___redArg(v_fvarId_174_, v_a_175_);
lean_dec(v_a_175_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_addToScope(lean_object* v_fvarId_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = l_Lean_Compiler_LCNF_ScopeM_addToScope___redArg(v_fvarId_178_, v_a_179_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_addToScope___boxed(lean_object* v_fvarId_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l_Lean_Compiler_LCNF_ScopeM_addToScope(v_fvarId_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_);
lean_dec(v_a_191_);
lean_dec_ref(v_a_190_);
lean_dec(v_a_189_);
lean_dec_ref(v_a_188_);
lean_dec(v_a_187_);
return v_res_193_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ScopeM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ScopeM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ScopeM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ScopeM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ScopeM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ScopeM(builtin);
}
#ifdef __cplusplus
}
#endif
