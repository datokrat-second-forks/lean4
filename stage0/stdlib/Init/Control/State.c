// Lean compiler output
// Module: Init.Control.State
// Imports: public import Init.Control.Except
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
LEAN_EXPORT lean_object* l_StateT_mk___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_run_x27___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_StateT_run_x27___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_StateT_run_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_run_x27___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_StateT_run_x27___redArg___closed__0 = (const lean_object*)&l_StateT_run_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_StateT_run_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_pure___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_bind___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_bind___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_map___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_orElse___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_orElse___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_orElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_failure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_StateT_failure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_failure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instAlternative___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instAlternative(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_get(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_set___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_set(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_modifyGet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_modifyGet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_lift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_lift___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonadLift___redArg(lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonadLift(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_StateT_instMonadFunctor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_StateT_instMonadFunctor___redArg___closed__0 = (const lean_object*)&l_StateT_instMonadFunctor___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_StateT_instMonadFunctor___redArg();
LEAN_EXPORT lean_object* l_StateT_instMonadFunctor___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonadFunctor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonadExceptOf___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonadExceptOf___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonadExceptOf___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_instMonadExceptOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForM_forIn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForM_forIn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForM_forIn___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForM_forIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForM_forIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadStateOfStateTOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instMonadStateOfStateTOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_StateT_monadControl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_tryFinally___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_tryFinally___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_tryFinally___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_tryFinally___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_tryFinally(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachStateTOfMonad___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachStateTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadAttachStateTOfMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadAttachStateTOfMonad___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadAttachStateTOfMonad___redArg___closed__0 = (const lean_object*)&l_instMonadAttachStateTOfMonad___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_instMonadAttachStateTOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachStateTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_mk___redArg(lean_object* v_run_1_, lean_object* v_s_2_){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_apply_1(v_run_1_, v_s_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_StateT_mk(lean_object* v_00_u03c3_4_, lean_object* v_m_5_, lean_object* v_00_u03b1_6_, lean_object* v_run_7_, lean_object* v_s_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_apply_1(v_run_7_, v_s_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_StateT_run___redArg(lean_object* v_self_10_, lean_object* v_s_11_){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_apply_1(v_self_10_, v_s_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_StateT_run(lean_object* v_00_u03c3_13_, lean_object* v_m_14_, lean_object* v_00_u03b1_15_, lean_object* v_self_16_, lean_object* v_s_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_apply_1(v_self_16_, v_s_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_StateT_run_x27___redArg___lam__0(lean_object* v_x_19_){
_start:
{
lean_object* v_fst_20_; 
v_fst_20_ = lean_ctor_get(v_x_19_, 0);
lean_inc(v_fst_20_);
return v_fst_20_;
}
}
LEAN_EXPORT lean_object* l_StateT_run_x27___redArg___lam__0___boxed(lean_object* v_x_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_StateT_run_x27___redArg___lam__0(v_x_21_);
lean_dec_ref(v_x_21_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_StateT_run_x27___redArg(lean_object* v_inst_24_, lean_object* v_x_25_, lean_object* v_s_26_){
_start:
{
lean_object* v_map_27_; lean_object* v___f_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v_map_27_ = lean_ctor_get(v_inst_24_, 0);
lean_inc(v_map_27_);
lean_dec_ref(v_inst_24_);
v___f_28_ = ((lean_object*)(l_StateT_run_x27___redArg___closed__0));
v___x_29_ = lean_apply_1(v_x_25_, v_s_26_);
v___x_30_ = lean_apply_4(v_map_27_, lean_box(0), lean_box(0), v___f_28_, v___x_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_StateT_run_x27(lean_object* v_00_u03c3_31_, lean_object* v_m_32_, lean_object* v_inst_33_, lean_object* v_00_u03b1_34_, lean_object* v_x_35_, lean_object* v_s_36_){
_start:
{
lean_object* v_map_37_; lean_object* v___f_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v_map_37_ = lean_ctor_get(v_inst_33_, 0);
lean_inc(v_map_37_);
lean_dec_ref(v_inst_33_);
v___f_38_ = ((lean_object*)(l_StateT_run_x27___redArg___closed__0));
v___x_39_ = lean_apply_1(v_x_35_, v_s_36_);
v___x_40_ = lean_apply_4(v_map_37_, lean_box(0), lean_box(0), v___f_38_, v___x_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_StateT_pure___redArg(lean_object* v_inst_41_, lean_object* v_a_42_, lean_object* v___y_43_){
_start:
{
lean_object* v_toApplicative_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_53_; 
v_toApplicative_44_ = lean_ctor_get(v_inst_41_, 0);
v_isSharedCheck_53_ = !lean_is_exclusive(v_inst_41_);
if (v_isSharedCheck_53_ == 0)
{
lean_object* v_unused_54_; 
v_unused_54_ = lean_ctor_get(v_inst_41_, 1);
lean_dec(v_unused_54_);
v___x_46_ = v_inst_41_;
v_isShared_47_ = v_isSharedCheck_53_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_toApplicative_44_);
lean_dec(v_inst_41_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_53_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v_toPure_48_; lean_object* v___x_50_; 
v_toPure_48_ = lean_ctor_get(v_toApplicative_44_, 1);
lean_inc(v_toPure_48_);
lean_dec_ref(v_toApplicative_44_);
if (v_isShared_47_ == 0)
{
lean_ctor_set(v___x_46_, 1, v___y_43_);
lean_ctor_set(v___x_46_, 0, v_a_42_);
v___x_50_ = v___x_46_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_52_; 
v_reuseFailAlloc_52_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_52_, 0, v_a_42_);
lean_ctor_set(v_reuseFailAlloc_52_, 1, v___y_43_);
v___x_50_ = v_reuseFailAlloc_52_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
lean_object* v___x_51_; 
v___x_51_ = lean_apply_2(v_toPure_48_, lean_box(0), v___x_50_);
return v___x_51_;
}
}
}
}
LEAN_EXPORT lean_object* l_StateT_pure(lean_object* v_00_u03c3_55_, lean_object* v_m_56_, lean_object* v_inst_57_, lean_object* v_00_u03b1_58_, lean_object* v_a_59_, lean_object* v___y_60_){
_start:
{
lean_object* v_toApplicative_61_; lean_object* v___x_63_; uint8_t v_isShared_64_; uint8_t v_isSharedCheck_70_; 
v_toApplicative_61_ = lean_ctor_get(v_inst_57_, 0);
v_isSharedCheck_70_ = !lean_is_exclusive(v_inst_57_);
if (v_isSharedCheck_70_ == 0)
{
lean_object* v_unused_71_; 
v_unused_71_ = lean_ctor_get(v_inst_57_, 1);
lean_dec(v_unused_71_);
v___x_63_ = v_inst_57_;
v_isShared_64_ = v_isSharedCheck_70_;
goto v_resetjp_62_;
}
else
{
lean_inc(v_toApplicative_61_);
lean_dec(v_inst_57_);
v___x_63_ = lean_box(0);
v_isShared_64_ = v_isSharedCheck_70_;
goto v_resetjp_62_;
}
v_resetjp_62_:
{
lean_object* v_toPure_65_; lean_object* v___x_67_; 
v_toPure_65_ = lean_ctor_get(v_toApplicative_61_, 1);
lean_inc(v_toPure_65_);
lean_dec_ref(v_toApplicative_61_);
if (v_isShared_64_ == 0)
{
lean_ctor_set(v___x_63_, 1, v___y_60_);
lean_ctor_set(v___x_63_, 0, v_a_59_);
v___x_67_ = v___x_63_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v_a_59_);
lean_ctor_set(v_reuseFailAlloc_69_, 1, v___y_60_);
v___x_67_ = v_reuseFailAlloc_69_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
lean_object* v___x_68_; 
v___x_68_ = lean_apply_2(v_toPure_65_, lean_box(0), v___x_67_);
return v___x_68_;
}
}
}
}
LEAN_EXPORT lean_object* l_StateT_bind___redArg___lam__0(lean_object* v_f_72_, lean_object* v_____x_73_){
_start:
{
lean_object* v_fst_74_; lean_object* v_snd_75_; lean_object* v___x_76_; 
v_fst_74_ = lean_ctor_get(v_____x_73_, 0);
lean_inc(v_fst_74_);
v_snd_75_ = lean_ctor_get(v_____x_73_, 1);
lean_inc(v_snd_75_);
lean_dec_ref(v_____x_73_);
v___x_76_ = lean_apply_2(v_f_72_, v_fst_74_, v_snd_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_StateT_bind___redArg(lean_object* v_inst_77_, lean_object* v_x_78_, lean_object* v_f_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_toBind_81_; lean_object* v___f_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_toBind_81_ = lean_ctor_get(v_inst_77_, 1);
lean_inc(v_toBind_81_);
lean_dec_ref(v_inst_77_);
v___f_82_ = lean_alloc_closure((void*)(l_StateT_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_82_, 0, v_f_79_);
v___x_83_ = lean_apply_1(v_x_78_, v___y_80_);
v___x_84_ = lean_apply_4(v_toBind_81_, lean_box(0), lean_box(0), v___x_83_, v___f_82_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_StateT_bind(lean_object* v_00_u03c3_85_, lean_object* v_m_86_, lean_object* v_inst_87_, lean_object* v_00_u03b1_88_, lean_object* v_00_u03b2_89_, lean_object* v_x_90_, lean_object* v_f_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_toBind_93_; lean_object* v___f_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v_toBind_93_ = lean_ctor_get(v_inst_87_, 1);
lean_inc(v_toBind_93_);
lean_dec_ref(v_inst_87_);
v___f_94_ = lean_alloc_closure((void*)(l_StateT_bind___redArg___lam__0), 2, 1);
lean_closure_set(v___f_94_, 0, v_f_91_);
v___x_95_ = lean_apply_1(v_x_90_, v___y_92_);
v___x_96_ = lean_apply_4(v_toBind_93_, lean_box(0), lean_box(0), v___x_95_, v___f_94_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_StateT_map___redArg___lam__0(lean_object* v_f_97_, lean_object* v_toPure_98_, lean_object* v_____x_99_){
_start:
{
lean_object* v_fst_100_; lean_object* v_snd_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_110_; 
v_fst_100_ = lean_ctor_get(v_____x_99_, 0);
v_snd_101_ = lean_ctor_get(v_____x_99_, 1);
v_isSharedCheck_110_ = !lean_is_exclusive(v_____x_99_);
if (v_isSharedCheck_110_ == 0)
{
v___x_103_ = v_____x_99_;
v_isShared_104_ = v_isSharedCheck_110_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_snd_101_);
lean_inc(v_fst_100_);
lean_dec(v_____x_99_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_110_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_105_; lean_object* v___x_107_; 
v___x_105_ = lean_apply_1(v_f_97_, v_fst_100_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 0, v___x_105_);
v___x_107_ = v___x_103_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v___x_105_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v_snd_101_);
v___x_107_ = v_reuseFailAlloc_109_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
lean_object* v___x_108_; 
v___x_108_ = lean_apply_2(v_toPure_98_, lean_box(0), v___x_107_);
return v___x_108_;
}
}
}
}
LEAN_EXPORT lean_object* l_StateT_map___redArg(lean_object* v_inst_111_, lean_object* v_f_112_, lean_object* v_x_113_, lean_object* v___y_114_){
_start:
{
lean_object* v_toApplicative_115_; lean_object* v_toBind_116_; lean_object* v_toPure_117_; lean_object* v___f_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v_toApplicative_115_ = lean_ctor_get(v_inst_111_, 0);
lean_inc_ref(v_toApplicative_115_);
v_toBind_116_ = lean_ctor_get(v_inst_111_, 1);
lean_inc(v_toBind_116_);
lean_dec_ref(v_inst_111_);
v_toPure_117_ = lean_ctor_get(v_toApplicative_115_, 1);
lean_inc(v_toPure_117_);
lean_dec_ref(v_toApplicative_115_);
v___f_118_ = lean_alloc_closure((void*)(l_StateT_map___redArg___lam__0), 3, 2);
lean_closure_set(v___f_118_, 0, v_f_112_);
lean_closure_set(v___f_118_, 1, v_toPure_117_);
v___x_119_ = lean_apply_1(v_x_113_, v___y_114_);
v___x_120_ = lean_apply_4(v_toBind_116_, lean_box(0), lean_box(0), v___x_119_, v___f_118_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_StateT_map(lean_object* v_00_u03c3_121_, lean_object* v_m_122_, lean_object* v_inst_123_, lean_object* v_00_u03b1_124_, lean_object* v_00_u03b2_125_, lean_object* v_f_126_, lean_object* v_x_127_, lean_object* v___y_128_){
_start:
{
lean_object* v_toApplicative_129_; lean_object* v_toBind_130_; lean_object* v_toPure_131_; lean_object* v___f_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v_toApplicative_129_ = lean_ctor_get(v_inst_123_, 0);
lean_inc_ref(v_toApplicative_129_);
v_toBind_130_ = lean_ctor_get(v_inst_123_, 1);
lean_inc(v_toBind_130_);
lean_dec_ref(v_inst_123_);
v_toPure_131_ = lean_ctor_get(v_toApplicative_129_, 1);
lean_inc(v_toPure_131_);
lean_dec_ref(v_toApplicative_129_);
v___f_132_ = lean_alloc_closure((void*)(l_StateT_map___redArg___lam__0), 3, 2);
lean_closure_set(v___f_132_, 0, v_f_126_);
lean_closure_set(v___f_132_, 1, v_toPure_131_);
v___x_133_ = lean_apply_1(v_x_127_, v___y_128_);
v___x_134_ = lean_apply_4(v_toBind_130_, lean_box(0), lean_box(0), v___x_133_, v___f_132_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__0(lean_object* v___y_135_, lean_object* v_toPure_136_, lean_object* v_____x_137_){
_start:
{
lean_object* v_snd_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_146_; 
v_snd_138_ = lean_ctor_get(v_____x_137_, 1);
v_isSharedCheck_146_ = !lean_is_exclusive(v_____x_137_);
if (v_isSharedCheck_146_ == 0)
{
lean_object* v_unused_147_; 
v_unused_147_ = lean_ctor_get(v_____x_137_, 0);
lean_dec(v_unused_147_);
v___x_140_ = v_____x_137_;
v_isShared_141_ = v_isSharedCheck_146_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_snd_138_);
lean_dec(v_____x_137_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_146_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
lean_ctor_set(v___x_140_, 0, v___y_135_);
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v___y_135_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v_snd_138_);
v___x_143_ = v_reuseFailAlloc_145_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v___x_144_; 
v___x_144_ = lean_apply_2(v_toPure_136_, lean_box(0), v___x_143_);
return v___x_144_;
}
}
}
}
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__1(lean_object* v_inst_148_, lean_object* v_00_u03b1_149_, lean_object* v_00_u03b2_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
lean_object* v_toApplicative_154_; lean_object* v_toBind_155_; lean_object* v_toPure_156_; lean_object* v___f_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v_toApplicative_154_ = lean_ctor_get(v_inst_148_, 0);
lean_inc_ref(v_toApplicative_154_);
v_toBind_155_ = lean_ctor_get(v_inst_148_, 1);
lean_inc(v_toBind_155_);
lean_dec_ref(v_inst_148_);
v_toPure_156_ = lean_ctor_get(v_toApplicative_154_, 1);
lean_inc(v_toPure_156_);
lean_dec_ref(v_toApplicative_154_);
v___f_157_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__0), 3, 2);
lean_closure_set(v___f_157_, 0, v___y_151_);
lean_closure_set(v___f_157_, 1, v_toPure_156_);
v___x_158_ = lean_apply_1(v___y_152_, v___y_153_);
v___x_159_ = lean_apply_4(v_toBind_155_, lean_box(0), lean_box(0), v___x_158_, v___f_157_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__2(lean_object* v_fst_160_, lean_object* v_toPure_161_, lean_object* v_____x_162_){
_start:
{
lean_object* v_fst_163_; lean_object* v_snd_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_173_; 
v_fst_163_ = lean_ctor_get(v_____x_162_, 0);
v_snd_164_ = lean_ctor_get(v_____x_162_, 1);
v_isSharedCheck_173_ = !lean_is_exclusive(v_____x_162_);
if (v_isSharedCheck_173_ == 0)
{
v___x_166_ = v_____x_162_;
v_isShared_167_ = v_isSharedCheck_173_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_snd_164_);
lean_inc(v_fst_163_);
lean_dec(v_____x_162_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_173_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_168_; lean_object* v___x_170_; 
v___x_168_ = lean_apply_1(v_fst_160_, v_fst_163_);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 0, v___x_168_);
v___x_170_ = v___x_166_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v___x_168_);
lean_ctor_set(v_reuseFailAlloc_172_, 1, v_snd_164_);
v___x_170_ = v_reuseFailAlloc_172_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
lean_object* v___x_171_; 
v___x_171_ = lean_apply_2(v_toPure_161_, lean_box(0), v___x_170_);
return v___x_171_;
}
}
}
}
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__3(lean_object* v_toApplicative_174_, lean_object* v_x_175_, lean_object* v_toBind_176_, lean_object* v_____x_177_){
_start:
{
lean_object* v_fst_178_; lean_object* v_snd_179_; lean_object* v_toPure_180_; lean_object* v___x_181_; lean_object* v___f_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v_fst_178_ = lean_ctor_get(v_____x_177_, 0);
lean_inc(v_fst_178_);
v_snd_179_ = lean_ctor_get(v_____x_177_, 1);
lean_inc(v_snd_179_);
lean_dec_ref(v_____x_177_);
v_toPure_180_ = lean_ctor_get(v_toApplicative_174_, 1);
lean_inc(v_toPure_180_);
lean_dec_ref(v_toApplicative_174_);
v___x_181_ = lean_box(0);
v___f_182_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__2), 3, 2);
lean_closure_set(v___f_182_, 0, v_fst_178_);
lean_closure_set(v___f_182_, 1, v_toPure_180_);
v___x_183_ = lean_apply_2(v_x_175_, v___x_181_, v_snd_179_);
v___x_184_ = lean_apply_4(v_toBind_176_, lean_box(0), lean_box(0), v___x_183_, v___f_182_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__4(lean_object* v_inst_185_, lean_object* v_00_u03b1_186_, lean_object* v_00_u03b2_187_, lean_object* v_f_188_, lean_object* v_x_189_, lean_object* v___y_190_){
_start:
{
lean_object* v_toApplicative_191_; lean_object* v_toBind_192_; lean_object* v___f_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v_toApplicative_191_ = lean_ctor_get(v_inst_185_, 0);
lean_inc_ref(v_toApplicative_191_);
v_toBind_192_ = lean_ctor_get(v_inst_185_, 1);
lean_inc_n(v_toBind_192_, 2);
lean_dec_ref(v_inst_185_);
v___f_193_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__3), 4, 3);
lean_closure_set(v___f_193_, 0, v_toApplicative_191_);
lean_closure_set(v___f_193_, 1, v_x_189_);
lean_closure_set(v___f_193_, 2, v_toBind_192_);
v___x_194_ = lean_apply_1(v_f_188_, v___y_190_);
v___x_195_ = lean_apply_4(v_toBind_192_, lean_box(0), lean_box(0), v___x_194_, v___f_193_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__5(lean_object* v_toApplicative_196_, lean_object* v_fst_197_, lean_object* v_____x_198_){
_start:
{
lean_object* v_snd_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_208_; 
v_snd_199_ = lean_ctor_get(v_____x_198_, 1);
v_isSharedCheck_208_ = !lean_is_exclusive(v_____x_198_);
if (v_isSharedCheck_208_ == 0)
{
lean_object* v_unused_209_; 
v_unused_209_ = lean_ctor_get(v_____x_198_, 0);
lean_dec(v_unused_209_);
v___x_201_ = v_____x_198_;
v_isShared_202_ = v_isSharedCheck_208_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_snd_199_);
lean_dec(v_____x_198_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_208_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v_toPure_203_; lean_object* v___x_205_; 
v_toPure_203_ = lean_ctor_get(v_toApplicative_196_, 1);
lean_inc(v_toPure_203_);
lean_dec_ref(v_toApplicative_196_);
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 0, v_fst_197_);
v___x_205_ = v___x_201_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_fst_197_);
lean_ctor_set(v_reuseFailAlloc_207_, 1, v_snd_199_);
v___x_205_ = v_reuseFailAlloc_207_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
lean_object* v___x_206_; 
v___x_206_ = lean_apply_2(v_toPure_203_, lean_box(0), v___x_205_);
return v___x_206_;
}
}
}
}
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__6(lean_object* v_toApplicative_210_, lean_object* v_y_211_, lean_object* v_toBind_212_, lean_object* v_____x_213_){
_start:
{
lean_object* v_fst_214_; lean_object* v_snd_215_; lean_object* v___f_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v_fst_214_ = lean_ctor_get(v_____x_213_, 0);
lean_inc(v_fst_214_);
v_snd_215_ = lean_ctor_get(v_____x_213_, 1);
lean_inc(v_snd_215_);
lean_dec_ref(v_____x_213_);
v___f_216_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__5), 3, 2);
lean_closure_set(v___f_216_, 0, v_toApplicative_210_);
lean_closure_set(v___f_216_, 1, v_fst_214_);
v___x_217_ = lean_box(0);
v___x_218_ = lean_apply_2(v_y_211_, v___x_217_, v_snd_215_);
v___x_219_ = lean_apply_4(v_toBind_212_, lean_box(0), lean_box(0), v___x_218_, v___f_216_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__7(lean_object* v_inst_220_, lean_object* v_00_u03b1_221_, lean_object* v_00_u03b2_222_, lean_object* v_x_223_, lean_object* v_y_224_, lean_object* v___y_225_){
_start:
{
lean_object* v_toApplicative_226_; lean_object* v_toBind_227_; lean_object* v___f_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v_toApplicative_226_ = lean_ctor_get(v_inst_220_, 0);
lean_inc_ref(v_toApplicative_226_);
v_toBind_227_ = lean_ctor_get(v_inst_220_, 1);
lean_inc_n(v_toBind_227_, 2);
lean_dec_ref(v_inst_220_);
v___f_228_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__6), 4, 3);
lean_closure_set(v___f_228_, 0, v_toApplicative_226_);
lean_closure_set(v___f_228_, 1, v_y_224_);
lean_closure_set(v___f_228_, 2, v_toBind_227_);
v___x_229_ = lean_apply_1(v_x_223_, v___y_225_);
v___x_230_ = lean_apply_4(v_toBind_227_, lean_box(0), lean_box(0), v___x_229_, v___f_228_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__8(lean_object* v_y_231_, lean_object* v_____x_232_){
_start:
{
lean_object* v_snd_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v_snd_233_ = lean_ctor_get(v_____x_232_, 1);
lean_inc(v_snd_233_);
lean_dec_ref(v_____x_232_);
v___x_234_ = lean_box(0);
v___x_235_ = lean_apply_2(v_y_231_, v___x_234_, v_snd_233_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg___lam__9(lean_object* v_inst_236_, lean_object* v_00_u03b1_237_, lean_object* v_00_u03b2_238_, lean_object* v_x_239_, lean_object* v_y_240_, lean_object* v___y_241_){
_start:
{
lean_object* v_toBind_242_; lean_object* v___f_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v_toBind_242_ = lean_ctor_get(v_inst_236_, 1);
lean_inc(v_toBind_242_);
lean_dec_ref(v_inst_236_);
v___f_243_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__8), 2, 1);
lean_closure_set(v___f_243_, 0, v_y_240_);
v___x_244_ = lean_apply_1(v_x_239_, v___y_241_);
v___x_245_ = lean_apply_4(v_toBind_242_, lean_box(0), lean_box(0), v___x_244_, v___f_243_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonad___redArg(lean_object* v_inst_246_){
_start:
{
lean_object* v___f_247_; lean_object* v___f_248_; lean_object* v___f_249_; lean_object* v___f_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
lean_inc_ref_n(v_inst_246_, 6);
v___f_247_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_247_, 0, v_inst_246_);
v___f_248_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_248_, 0, v_inst_246_);
v___f_249_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_249_, 0, v_inst_246_);
v___f_250_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_250_, 0, v_inst_246_);
v___x_251_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_251_, 0, lean_box(0));
lean_closure_set(v___x_251_, 1, lean_box(0));
lean_closure_set(v___x_251_, 2, v_inst_246_);
v___x_252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
lean_ctor_set(v___x_252_, 1, v___f_247_);
v___x_253_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_253_, 0, lean_box(0));
lean_closure_set(v___x_253_, 1, lean_box(0));
lean_closure_set(v___x_253_, 2, v_inst_246_);
v___x_254_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_254_, 0, v___x_252_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
lean_ctor_set(v___x_254_, 2, v___f_248_);
lean_ctor_set(v___x_254_, 3, v___f_249_);
lean_ctor_set(v___x_254_, 4, v___f_250_);
v___x_255_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_255_, 0, lean_box(0));
lean_closure_set(v___x_255_, 1, lean_box(0));
lean_closure_set(v___x_255_, 2, v_inst_246_);
v___x_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_254_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonad(lean_object* v_00_u03c3_257_, lean_object* v_m_258_, lean_object* v_inst_259_){
_start:
{
lean_object* v___f_260_; lean_object* v___f_261_; lean_object* v___f_262_; lean_object* v___f_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
lean_inc_ref_n(v_inst_259_, 6);
v___f_260_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_260_, 0, v_inst_259_);
v___f_261_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_261_, 0, v_inst_259_);
v___f_262_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_262_, 0, v_inst_259_);
v___f_263_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_263_, 0, v_inst_259_);
v___x_264_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_264_, 0, lean_box(0));
lean_closure_set(v___x_264_, 1, lean_box(0));
lean_closure_set(v___x_264_, 2, v_inst_259_);
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
lean_ctor_set(v___x_265_, 1, v___f_260_);
v___x_266_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_266_, 0, lean_box(0));
lean_closure_set(v___x_266_, 1, lean_box(0));
lean_closure_set(v___x_266_, 2, v_inst_259_);
v___x_267_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_267_, 0, v___x_265_);
lean_ctor_set(v___x_267_, 1, v___x_266_);
lean_ctor_set(v___x_267_, 2, v___f_261_);
lean_ctor_set(v___x_267_, 3, v___f_262_);
lean_ctor_set(v___x_267_, 4, v___f_263_);
v___x_268_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_268_, 0, lean_box(0));
lean_closure_set(v___x_268_, 1, lean_box(0));
lean_closure_set(v___x_268_, 2, v_inst_259_);
v___x_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_267_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_StateT_orElse___redArg___lam__0(lean_object* v_x_u2082_270_, lean_object* v___y_271_, lean_object* v_x_272_){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = lean_box(0);
v___x_274_ = lean_apply_2(v_x_u2082_270_, v___x_273_, v___y_271_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_StateT_orElse___redArg(lean_object* v_inst_275_, lean_object* v_x_u2081_276_, lean_object* v_x_u2082_277_, lean_object* v___y_278_){
_start:
{
lean_object* v_orElse_279_; lean_object* v___f_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v_orElse_279_ = lean_ctor_get(v_inst_275_, 2);
lean_inc(v_orElse_279_);
lean_dec_ref(v_inst_275_);
lean_inc(v___y_278_);
v___f_280_ = lean_alloc_closure((void*)(l_StateT_orElse___redArg___lam__0), 3, 2);
lean_closure_set(v___f_280_, 0, v_x_u2082_277_);
lean_closure_set(v___f_280_, 1, v___y_278_);
v___x_281_ = lean_apply_1(v_x_u2081_276_, v___y_278_);
v___x_282_ = lean_apply_3(v_orElse_279_, lean_box(0), v___x_281_, v___f_280_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_StateT_orElse(lean_object* v_00_u03c3_283_, lean_object* v_m_284_, lean_object* v_inst_285_, lean_object* v_00_u03b1_286_, lean_object* v_x_u2081_287_, lean_object* v_x_u2082_288_, lean_object* v___y_289_){
_start:
{
lean_object* v_orElse_290_; lean_object* v___f_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v_orElse_290_ = lean_ctor_get(v_inst_285_, 2);
lean_inc(v_orElse_290_);
lean_dec_ref(v_inst_285_);
lean_inc(v___y_289_);
v___f_291_ = lean_alloc_closure((void*)(l_StateT_orElse___redArg___lam__0), 3, 2);
lean_closure_set(v___f_291_, 0, v_x_u2082_288_);
lean_closure_set(v___f_291_, 1, v___y_289_);
v___x_292_ = lean_apply_1(v_x_u2081_287_, v___y_289_);
v___x_293_ = lean_apply_3(v_orElse_290_, lean_box(0), v___x_292_, v___f_291_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_StateT_failure___redArg(lean_object* v_inst_294_){
_start:
{
lean_object* v_failure_295_; lean_object* v___x_296_; 
v_failure_295_ = lean_ctor_get(v_inst_294_, 1);
lean_inc(v_failure_295_);
lean_dec_ref(v_inst_294_);
v___x_296_ = lean_apply_1(v_failure_295_, lean_box(0));
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_StateT_failure(lean_object* v_00_u03c3_297_, lean_object* v_m_298_, lean_object* v_inst_299_, lean_object* v_00_u03b1_300_, lean_object* v___y_301_){
_start:
{
lean_object* v_failure_302_; lean_object* v___x_303_; 
v_failure_302_ = lean_ctor_get(v_inst_299_, 1);
lean_inc(v_failure_302_);
lean_dec_ref(v_inst_299_);
v___x_303_ = lean_apply_1(v_failure_302_, lean_box(0));
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_StateT_failure___boxed(lean_object* v_00_u03c3_304_, lean_object* v_m_305_, lean_object* v_inst_306_, lean_object* v_00_u03b1_307_, lean_object* v___y_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_StateT_failure(v_00_u03c3_304_, v_m_305_, v_inst_306_, v_00_u03b1_307_, v___y_308_);
lean_dec(v___y_308_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_StateT_instAlternative___redArg(lean_object* v_inst_310_, lean_object* v_inst_311_){
_start:
{
lean_object* v___f_312_; lean_object* v___f_313_; lean_object* v___f_314_; lean_object* v___f_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
lean_inc_ref_n(v_inst_310_, 5);
v___f_312_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_312_, 0, v_inst_310_);
v___f_313_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_313_, 0, v_inst_310_);
v___f_314_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_314_, 0, v_inst_310_);
v___f_315_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_315_, 0, v_inst_310_);
v___x_316_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_316_, 0, lean_box(0));
lean_closure_set(v___x_316_, 1, lean_box(0));
lean_closure_set(v___x_316_, 2, v_inst_310_);
v___x_317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
lean_ctor_set(v___x_317_, 1, v___f_312_);
v___x_318_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_318_, 0, lean_box(0));
lean_closure_set(v___x_318_, 1, lean_box(0));
lean_closure_set(v___x_318_, 2, v_inst_310_);
v___x_319_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_319_, 0, v___x_317_);
lean_ctor_set(v___x_319_, 1, v___x_318_);
lean_ctor_set(v___x_319_, 2, v___f_313_);
lean_ctor_set(v___x_319_, 3, v___f_314_);
lean_ctor_set(v___x_319_, 4, v___f_315_);
lean_inc_ref(v_inst_311_);
v___x_320_ = lean_alloc_closure((void*)(l_StateT_failure___boxed), 5, 3);
lean_closure_set(v___x_320_, 0, lean_box(0));
lean_closure_set(v___x_320_, 1, lean_box(0));
lean_closure_set(v___x_320_, 2, v_inst_311_);
v___x_321_ = lean_alloc_closure((void*)(l_StateT_orElse), 7, 3);
lean_closure_set(v___x_321_, 0, lean_box(0));
lean_closure_set(v___x_321_, 1, lean_box(0));
lean_closure_set(v___x_321_, 2, v_inst_311_);
v___x_322_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_322_, 0, v___x_319_);
lean_ctor_set(v___x_322_, 1, v___x_320_);
lean_ctor_set(v___x_322_, 2, v___x_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_StateT_instAlternative(lean_object* v_00_u03c3_323_, lean_object* v_m_324_, lean_object* v_inst_325_, lean_object* v_inst_326_){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = l_StateT_instAlternative___redArg(v_inst_325_, v_inst_326_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_StateT_get___redArg(lean_object* v_inst_328_, lean_object* v___y_329_){
_start:
{
lean_object* v_toApplicative_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_339_; 
v_toApplicative_330_ = lean_ctor_get(v_inst_328_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v_inst_328_);
if (v_isSharedCheck_339_ == 0)
{
lean_object* v_unused_340_; 
v_unused_340_ = lean_ctor_get(v_inst_328_, 1);
lean_dec(v_unused_340_);
v___x_332_ = v_inst_328_;
v_isShared_333_ = v_isSharedCheck_339_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_toApplicative_330_);
lean_dec(v_inst_328_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_339_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v_toPure_334_; lean_object* v___x_336_; 
v_toPure_334_ = lean_ctor_get(v_toApplicative_330_, 1);
lean_inc(v_toPure_334_);
lean_dec_ref(v_toApplicative_330_);
lean_inc(v___y_329_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 1, v___y_329_);
lean_ctor_set(v___x_332_, 0, v___y_329_);
v___x_336_ = v___x_332_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___y_329_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v___y_329_);
v___x_336_ = v_reuseFailAlloc_338_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
lean_object* v___x_337_; 
v___x_337_ = lean_apply_2(v_toPure_334_, lean_box(0), v___x_336_);
return v___x_337_;
}
}
}
}
LEAN_EXPORT lean_object* l_StateT_get(lean_object* v_00_u03c3_341_, lean_object* v_m_342_, lean_object* v_inst_343_, lean_object* v___y_344_){
_start:
{
lean_object* v_toApplicative_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_354_; 
v_toApplicative_345_ = lean_ctor_get(v_inst_343_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v_inst_343_);
if (v_isSharedCheck_354_ == 0)
{
lean_object* v_unused_355_; 
v_unused_355_ = lean_ctor_get(v_inst_343_, 1);
lean_dec(v_unused_355_);
v___x_347_ = v_inst_343_;
v_isShared_348_ = v_isSharedCheck_354_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_toApplicative_345_);
lean_dec(v_inst_343_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_354_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v_toPure_349_; lean_object* v___x_351_; 
v_toPure_349_ = lean_ctor_get(v_toApplicative_345_, 1);
lean_inc(v_toPure_349_);
lean_dec_ref(v_toApplicative_345_);
lean_inc(v___y_344_);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 1, v___y_344_);
lean_ctor_set(v___x_347_, 0, v___y_344_);
v___x_351_ = v___x_347_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v___y_344_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v___y_344_);
v___x_351_ = v_reuseFailAlloc_353_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
lean_object* v___x_352_; 
v___x_352_ = lean_apply_2(v_toPure_349_, lean_box(0), v___x_351_);
return v___x_352_;
}
}
}
}
LEAN_EXPORT lean_object* l_StateT_set___redArg(lean_object* v_inst_356_, lean_object* v_s_x27_357_){
_start:
{
lean_object* v_toApplicative_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_368_; 
v_toApplicative_358_ = lean_ctor_get(v_inst_356_, 0);
v_isSharedCheck_368_ = !lean_is_exclusive(v_inst_356_);
if (v_isSharedCheck_368_ == 0)
{
lean_object* v_unused_369_; 
v_unused_369_ = lean_ctor_get(v_inst_356_, 1);
lean_dec(v_unused_369_);
v___x_360_ = v_inst_356_;
v_isShared_361_ = v_isSharedCheck_368_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_toApplicative_358_);
lean_dec(v_inst_356_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_368_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v_toPure_362_; lean_object* v___x_363_; lean_object* v___x_365_; 
v_toPure_362_ = lean_ctor_get(v_toApplicative_358_, 1);
lean_inc(v_toPure_362_);
lean_dec_ref(v_toApplicative_358_);
v___x_363_ = lean_box(0);
if (v_isShared_361_ == 0)
{
lean_ctor_set(v___x_360_, 1, v_s_x27_357_);
lean_ctor_set(v___x_360_, 0, v___x_363_);
v___x_365_ = v___x_360_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v___x_363_);
lean_ctor_set(v_reuseFailAlloc_367_, 1, v_s_x27_357_);
v___x_365_ = v_reuseFailAlloc_367_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
lean_object* v___x_366_; 
v___x_366_ = lean_apply_2(v_toPure_362_, lean_box(0), v___x_365_);
return v___x_366_;
}
}
}
}
LEAN_EXPORT lean_object* l_StateT_set(lean_object* v_00_u03c3_370_, lean_object* v_m_371_, lean_object* v_inst_372_, lean_object* v_s_x27_373_, lean_object* v___y_374_){
_start:
{
lean_object* v_toApplicative_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_385_; 
v_toApplicative_375_ = lean_ctor_get(v_inst_372_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v_inst_372_);
if (v_isSharedCheck_385_ == 0)
{
lean_object* v_unused_386_; 
v_unused_386_ = lean_ctor_get(v_inst_372_, 1);
lean_dec(v_unused_386_);
v___x_377_ = v_inst_372_;
v_isShared_378_ = v_isSharedCheck_385_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_toApplicative_375_);
lean_dec(v_inst_372_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_385_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v_toPure_379_; lean_object* v___x_380_; lean_object* v___x_382_; 
v_toPure_379_ = lean_ctor_get(v_toApplicative_375_, 1);
lean_inc(v_toPure_379_);
lean_dec_ref(v_toApplicative_375_);
v___x_380_ = lean_box(0);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 1, v_s_x27_373_);
lean_ctor_set(v___x_377_, 0, v___x_380_);
v___x_382_ = v___x_377_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_380_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v_s_x27_373_);
v___x_382_ = v_reuseFailAlloc_384_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
lean_object* v___x_383_; 
v___x_383_ = lean_apply_2(v_toPure_379_, lean_box(0), v___x_382_);
return v___x_383_;
}
}
}
}
LEAN_EXPORT lean_object* l_StateT_set___boxed(lean_object* v_00_u03c3_387_, lean_object* v_m_388_, lean_object* v_inst_389_, lean_object* v_s_x27_390_, lean_object* v___y_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l_StateT_set(v_00_u03c3_387_, v_m_388_, v_inst_389_, v_s_x27_390_, v___y_391_);
lean_dec(v___y_391_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l_StateT_modifyGet___redArg(lean_object* v_inst_393_, lean_object* v_f_394_, lean_object* v___y_395_){
_start:
{
lean_object* v_toApplicative_396_; lean_object* v_toPure_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v_toApplicative_396_ = lean_ctor_get(v_inst_393_, 0);
lean_inc_ref(v_toApplicative_396_);
lean_dec_ref(v_inst_393_);
v_toPure_397_ = lean_ctor_get(v_toApplicative_396_, 1);
lean_inc(v_toPure_397_);
lean_dec_ref(v_toApplicative_396_);
v___x_398_ = lean_apply_1(v_f_394_, v___y_395_);
v___x_399_ = lean_apply_2(v_toPure_397_, lean_box(0), v___x_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_StateT_modifyGet(lean_object* v_00_u03c3_400_, lean_object* v_m_401_, lean_object* v_inst_402_, lean_object* v_00_u03b1_403_, lean_object* v_f_404_, lean_object* v___y_405_){
_start:
{
lean_object* v_toApplicative_406_; lean_object* v_toPure_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v_toApplicative_406_ = lean_ctor_get(v_inst_402_, 0);
lean_inc_ref(v_toApplicative_406_);
lean_dec_ref(v_inst_402_);
v_toPure_407_ = lean_ctor_get(v_toApplicative_406_, 1);
lean_inc(v_toPure_407_);
lean_dec_ref(v_toApplicative_406_);
v___x_408_ = lean_apply_1(v_f_404_, v___y_405_);
v___x_409_ = lean_apply_2(v_toPure_407_, lean_box(0), v___x_408_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_StateT_lift___redArg___lam__0(lean_object* v___y_410_, lean_object* v_toPure_411_, lean_object* v_a_412_){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_413_, 0, v_a_412_);
lean_ctor_set(v___x_413_, 1, v___y_410_);
v___x_414_ = lean_apply_2(v_toPure_411_, lean_box(0), v___x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_StateT_lift___redArg(lean_object* v_inst_415_, lean_object* v_t_416_, lean_object* v___y_417_){
_start:
{
lean_object* v_toApplicative_418_; lean_object* v_toBind_419_; lean_object* v_toPure_420_; lean_object* v___f_421_; lean_object* v___x_422_; 
v_toApplicative_418_ = lean_ctor_get(v_inst_415_, 0);
lean_inc_ref(v_toApplicative_418_);
v_toBind_419_ = lean_ctor_get(v_inst_415_, 1);
lean_inc(v_toBind_419_);
lean_dec_ref(v_inst_415_);
v_toPure_420_ = lean_ctor_get(v_toApplicative_418_, 1);
lean_inc(v_toPure_420_);
lean_dec_ref(v_toApplicative_418_);
v___f_421_ = lean_alloc_closure((void*)(l_StateT_lift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_421_, 0, v___y_417_);
lean_closure_set(v___f_421_, 1, v_toPure_420_);
v___x_422_ = lean_apply_4(v_toBind_419_, lean_box(0), lean_box(0), v_t_416_, v___f_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_StateT_lift(lean_object* v_00_u03c3_423_, lean_object* v_m_424_, lean_object* v_inst_425_, lean_object* v_00_u03b1_426_, lean_object* v_t_427_, lean_object* v___y_428_){
_start:
{
lean_object* v_toApplicative_429_; lean_object* v_toBind_430_; lean_object* v_toPure_431_; lean_object* v___f_432_; lean_object* v___x_433_; 
v_toApplicative_429_ = lean_ctor_get(v_inst_425_, 0);
lean_inc_ref(v_toApplicative_429_);
v_toBind_430_ = lean_ctor_get(v_inst_425_, 1);
lean_inc(v_toBind_430_);
lean_dec_ref(v_inst_425_);
v_toPure_431_ = lean_ctor_get(v_toApplicative_429_, 1);
lean_inc(v_toPure_431_);
lean_dec_ref(v_toApplicative_429_);
v___f_432_ = lean_alloc_closure((void*)(l_StateT_lift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_432_, 0, v___y_428_);
lean_closure_set(v___f_432_, 1, v_toPure_431_);
v___x_433_ = lean_apply_4(v_toBind_430_, lean_box(0), lean_box(0), v_t_427_, v___f_432_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonadLift___redArg(lean_object* v_inst_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = lean_alloc_closure((void*)(l_StateT_lift), 6, 3);
lean_closure_set(v___x_435_, 0, lean_box(0));
lean_closure_set(v___x_435_, 1, lean_box(0));
lean_closure_set(v___x_435_, 2, v_inst_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonadLift(lean_object* v_00_u03c3_436_, lean_object* v_m_437_, lean_object* v_inst_438_){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = lean_alloc_closure((void*)(l_StateT_lift), 6, 3);
lean_closure_set(v___x_439_, 0, lean_box(0));
lean_closure_set(v___x_439_, 1, lean_box(0));
lean_closure_set(v___x_439_, 2, v_inst_438_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonadFunctor___redArg___lam__0(lean_object* v_00_u03b1_440_, lean_object* v_f_441_, lean_object* v_x_442_, lean_object* v___y_443_){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = lean_apply_1(v_x_442_, v___y_443_);
v___x_445_ = lean_apply_2(v_f_441_, lean_box(0), v___x_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonadFunctor___redArg(){
_start:
{
lean_object* v___f_448_; 
v___f_448_ = ((lean_object*)(l_StateT_instMonadFunctor___redArg___closed__0));
return v___f_448_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonadFunctor___redArg___boxed(lean_object* v___dummy_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_StateT_instMonadFunctor___redArg();
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonadFunctor(lean_object* v_00_u03c3_451_, lean_object* v_m_452_){
_start:
{
lean_object* v___f_453_; 
v___f_453_ = ((lean_object*)(l_StateT_instMonadFunctor___redArg___closed__0));
return v___f_453_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonadExceptOf___redArg___lam__1(lean_object* v_inst_454_, lean_object* v_inst_455_, lean_object* v_00_u03b1_456_, lean_object* v___y_457_, lean_object* v___y_458_){
_start:
{
lean_object* v_toApplicative_459_; lean_object* v_throw_460_; lean_object* v_toBind_461_; lean_object* v_toPure_462_; lean_object* v___x_463_; lean_object* v___f_464_; lean_object* v___x_465_; 
v_toApplicative_459_ = lean_ctor_get(v_inst_455_, 0);
lean_inc_ref(v_toApplicative_459_);
v_throw_460_ = lean_ctor_get(v_inst_454_, 0);
lean_inc(v_throw_460_);
lean_dec_ref(v_inst_454_);
v_toBind_461_ = lean_ctor_get(v_inst_455_, 1);
lean_inc(v_toBind_461_);
lean_dec_ref(v_inst_455_);
v_toPure_462_ = lean_ctor_get(v_toApplicative_459_, 1);
lean_inc(v_toPure_462_);
lean_dec_ref(v_toApplicative_459_);
v___x_463_ = lean_apply_2(v_throw_460_, lean_box(0), v___y_457_);
v___f_464_ = lean_alloc_closure((void*)(l_StateT_lift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_464_, 0, v___y_458_);
lean_closure_set(v___f_464_, 1, v_toPure_462_);
v___x_465_ = lean_apply_4(v_toBind_461_, lean_box(0), lean_box(0), v___x_463_, v___f_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonadExceptOf___redArg___lam__0(lean_object* v_c_466_, lean_object* v___y_467_, lean_object* v_e_468_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = lean_apply_2(v_c_466_, v_e_468_, v___y_467_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonadExceptOf___redArg___lam__2(lean_object* v_inst_470_, lean_object* v_00_u03b1_471_, lean_object* v_x_472_, lean_object* v_c_473_, lean_object* v___y_474_){
_start:
{
lean_object* v_tryCatch_475_; lean_object* v___f_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v_tryCatch_475_ = lean_ctor_get(v_inst_470_, 1);
lean_inc(v_tryCatch_475_);
lean_dec_ref(v_inst_470_);
lean_inc(v___y_474_);
v___f_476_ = lean_alloc_closure((void*)(l_StateT_instMonadExceptOf___redArg___lam__0), 3, 2);
lean_closure_set(v___f_476_, 0, v_c_473_);
lean_closure_set(v___f_476_, 1, v___y_474_);
v___x_477_ = lean_apply_1(v_x_472_, v___y_474_);
v___x_478_ = lean_apply_3(v_tryCatch_475_, lean_box(0), v___x_477_, v___f_476_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonadExceptOf___redArg(lean_object* v_inst_479_, lean_object* v_inst_480_){
_start:
{
lean_object* v___f_481_; lean_object* v___f_482_; lean_object* v___x_483_; 
lean_inc_ref(v_inst_480_);
v___f_481_ = lean_alloc_closure((void*)(l_StateT_instMonadExceptOf___redArg___lam__1), 5, 2);
lean_closure_set(v___f_481_, 0, v_inst_480_);
lean_closure_set(v___f_481_, 1, v_inst_479_);
v___f_482_ = lean_alloc_closure((void*)(l_StateT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_482_, 0, v_inst_480_);
v___x_483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_483_, 0, v___f_481_);
lean_ctor_set(v___x_483_, 1, v___f_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_StateT_instMonadExceptOf(lean_object* v_00_u03c3_484_, lean_object* v_m_485_, lean_object* v_inst_486_, lean_object* v_00_u03b5_487_, lean_object* v_inst_488_){
_start:
{
lean_object* v___f_489_; lean_object* v___f_490_; lean_object* v___x_491_; 
lean_inc_ref(v_inst_488_);
v___f_489_ = lean_alloc_closure((void*)(l_StateT_instMonadExceptOf___redArg___lam__1), 5, 2);
lean_closure_set(v___f_489_, 0, v_inst_488_);
lean_closure_set(v___f_489_, 1, v_inst_486_);
v___f_490_ = lean_alloc_closure((void*)(l_StateT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_490_, 0, v_inst_488_);
v___x_491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_491_, 0, v___f_489_);
lean_ctor_set(v___x_491_, 1, v___f_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_ForM_forIn___redArg___lam__0(lean_object* v_toPure_492_, lean_object* v_____do__lift_493_){
_start:
{
if (lean_obj_tag(v_____do__lift_493_) == 0)
{
lean_object* v_a_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_502_; 
v_a_494_ = lean_ctor_get(v_____do__lift_493_, 0);
v_isSharedCheck_502_ = !lean_is_exclusive(v_____do__lift_493_);
if (v_isSharedCheck_502_ == 0)
{
v___x_496_ = v_____do__lift_493_;
v_isShared_497_ = v_isSharedCheck_502_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_a_494_);
lean_dec(v_____do__lift_493_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_502_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_a_494_);
v___x_499_ = v_reuseFailAlloc_501_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
lean_object* v___x_500_; 
v___x_500_ = lean_apply_2(v_toPure_492_, lean_box(0), v___x_499_);
return v___x_500_;
}
}
}
else
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_513_; 
v_a_503_ = lean_ctor_get(v_____do__lift_493_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v_____do__lift_493_);
if (v_isSharedCheck_513_ == 0)
{
v___x_505_ = v_____do__lift_493_;
v_isShared_506_ = v_isSharedCheck_513_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v_____do__lift_493_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_513_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_510_; 
v___x_507_ = lean_box(0);
v___x_508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
lean_ctor_set(v___x_508_, 1, v_a_503_);
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 0, v___x_508_);
v___x_510_ = v___x_505_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_508_);
v___x_510_ = v_reuseFailAlloc_512_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
lean_object* v___x_511_; 
v___x_511_ = lean_apply_2(v_toPure_492_, lean_box(0), v___x_510_);
return v___x_511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_ForM_forIn___redArg___lam__1(lean_object* v_f_514_, lean_object* v_toBind_515_, lean_object* v___f_516_, lean_object* v_a_517_, lean_object* v___y_518_){
_start:
{
lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_519_ = lean_apply_2(v_f_514_, v_a_517_, v___y_518_);
v___x_520_ = lean_apply_4(v_toBind_515_, lean_box(0), lean_box(0), v___x_519_, v___f_516_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_ForM_forIn___redArg___lam__2(lean_object* v_toPure_521_, lean_object* v_____do__lift_522_){
_start:
{
if (lean_obj_tag(v_____do__lift_522_) == 0)
{
lean_object* v_a_523_; lean_object* v___x_524_; 
v_a_523_ = lean_ctor_get(v_____do__lift_522_, 0);
lean_inc(v_a_523_);
lean_dec_ref_known(v_____do__lift_522_, 1);
v___x_524_ = lean_apply_2(v_toPure_521_, lean_box(0), v_a_523_);
return v___x_524_;
}
else
{
lean_object* v_a_525_; lean_object* v_snd_526_; lean_object* v___x_527_; 
v_a_525_ = lean_ctor_get(v_____do__lift_522_, 0);
lean_inc(v_a_525_);
lean_dec_ref_known(v_____do__lift_522_, 1);
v_snd_526_ = lean_ctor_get(v_a_525_, 1);
lean_inc(v_snd_526_);
lean_dec(v_a_525_);
v___x_527_ = lean_apply_2(v_toPure_521_, lean_box(0), v_snd_526_);
return v___x_527_;
}
}
}
LEAN_EXPORT lean_object* l_ForM_forIn___redArg(lean_object* v_inst_528_, lean_object* v_inst_529_, lean_object* v_x_530_, lean_object* v_b_531_, lean_object* v_f_532_){
_start:
{
lean_object* v_toApplicative_533_; lean_object* v_toBind_534_; lean_object* v_toPure_535_; lean_object* v___f_536_; lean_object* v_g_537_; lean_object* v___f_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v_toApplicative_533_ = lean_ctor_get(v_inst_528_, 0);
lean_inc_ref(v_toApplicative_533_);
v_toBind_534_ = lean_ctor_get(v_inst_528_, 1);
lean_inc_n(v_toBind_534_, 2);
lean_dec_ref(v_inst_528_);
v_toPure_535_ = lean_ctor_get(v_toApplicative_533_, 1);
lean_inc_n(v_toPure_535_, 2);
lean_dec_ref(v_toApplicative_533_);
v___f_536_ = lean_alloc_closure((void*)(l_ForM_forIn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_536_, 0, v_toPure_535_);
v_g_537_ = lean_alloc_closure((void*)(l_ForM_forIn___redArg___lam__1), 5, 3);
lean_closure_set(v_g_537_, 0, v_f_532_);
lean_closure_set(v_g_537_, 1, v_toBind_534_);
lean_closure_set(v_g_537_, 2, v___f_536_);
v___f_538_ = lean_alloc_closure((void*)(l_ForM_forIn___redArg___lam__2), 2, 1);
lean_closure_set(v___f_538_, 0, v_toPure_535_);
v___x_539_ = lean_apply_3(v_inst_529_, v_x_530_, v_g_537_, v_b_531_);
v___x_540_ = lean_apply_4(v_toBind_534_, lean_box(0), lean_box(0), v___x_539_, v___f_538_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_ForM_forIn(lean_object* v_m_541_, lean_object* v_00_u03b2_542_, lean_object* v_00_u03c1_543_, lean_object* v_00_u03b1_544_, lean_object* v_inst_545_, lean_object* v_inst_546_, lean_object* v_x_547_, lean_object* v_b_548_, lean_object* v_f_549_){
_start:
{
lean_object* v_toApplicative_550_; lean_object* v_toBind_551_; lean_object* v_toPure_552_; lean_object* v___f_553_; lean_object* v_g_554_; lean_object* v___f_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v_toApplicative_550_ = lean_ctor_get(v_inst_545_, 0);
lean_inc_ref(v_toApplicative_550_);
v_toBind_551_ = lean_ctor_get(v_inst_545_, 1);
lean_inc_n(v_toBind_551_, 2);
lean_dec_ref(v_inst_545_);
v_toPure_552_ = lean_ctor_get(v_toApplicative_550_, 1);
lean_inc_n(v_toPure_552_, 2);
lean_dec_ref(v_toApplicative_550_);
v___f_553_ = lean_alloc_closure((void*)(l_ForM_forIn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_553_, 0, v_toPure_552_);
v_g_554_ = lean_alloc_closure((void*)(l_ForM_forIn___redArg___lam__1), 5, 3);
lean_closure_set(v_g_554_, 0, v_f_549_);
lean_closure_set(v_g_554_, 1, v_toBind_551_);
lean_closure_set(v_g_554_, 2, v___f_553_);
v___f_555_ = lean_alloc_closure((void*)(l_ForM_forIn___redArg___lam__2), 2, 1);
lean_closure_set(v___f_555_, 0, v_toPure_552_);
v___x_556_ = lean_apply_3(v_inst_546_, v_x_547_, v_g_554_, v_b_548_);
v___x_557_ = lean_apply_4(v_toBind_551_, lean_box(0), lean_box(0), v___x_556_, v___f_555_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_instMonadStateOfStateTOfMonad___redArg(lean_object* v_inst_558_){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
lean_inc_ref_n(v_inst_558_, 2);
v___x_559_ = lean_alloc_closure((void*)(l_StateT_get), 4, 3);
lean_closure_set(v___x_559_, 0, lean_box(0));
lean_closure_set(v___x_559_, 1, lean_box(0));
lean_closure_set(v___x_559_, 2, v_inst_558_);
v___x_560_ = lean_alloc_closure((void*)(l_StateT_set___boxed), 5, 3);
lean_closure_set(v___x_560_, 0, lean_box(0));
lean_closure_set(v___x_560_, 1, lean_box(0));
lean_closure_set(v___x_560_, 2, v_inst_558_);
v___x_561_ = lean_alloc_closure((void*)(l_StateT_modifyGet), 6, 3);
lean_closure_set(v___x_561_, 0, lean_box(0));
lean_closure_set(v___x_561_, 1, lean_box(0));
lean_closure_set(v___x_561_, 2, v_inst_558_);
v___x_562_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_562_, 0, v___x_559_);
lean_ctor_set(v___x_562_, 1, v___x_560_);
lean_ctor_set(v___x_562_, 2, v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_instMonadStateOfStateTOfMonad(lean_object* v_00_u03c3_563_, lean_object* v_m_564_, lean_object* v_inst_565_){
_start:
{
lean_object* v___x_566_; 
v___x_566_ = l_instMonadStateOfStateTOfMonad___redArg(v_inst_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__0(lean_object* v_fst_567_, lean_object* v_00_u03b2_568_, lean_object* v_x_569_){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = lean_apply_1(v_x_569_, v_fst_567_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__1(lean_object* v_snd_571_, lean_object* v_toPure_572_, lean_object* v_a_573_){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_574_, 0, v_a_573_);
lean_ctor_set(v___x_574_, 1, v_snd_571_);
v___x_575_ = lean_apply_2(v_toPure_572_, lean_box(0), v___x_574_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__2(lean_object* v_f_576_, lean_object* v_toPure_577_, lean_object* v_toBind_578_, lean_object* v_____x_579_){
_start:
{
lean_object* v_fst_580_; lean_object* v_snd_581_; lean_object* v___f_582_; lean_object* v___x_583_; lean_object* v___f_584_; lean_object* v___x_585_; 
v_fst_580_ = lean_ctor_get(v_____x_579_, 0);
lean_inc(v_fst_580_);
v_snd_581_ = lean_ctor_get(v_____x_579_, 1);
lean_inc(v_snd_581_);
lean_dec_ref(v_____x_579_);
v___f_582_ = lean_alloc_closure((void*)(l_StateT_monadControl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_582_, 0, v_fst_580_);
v___x_583_ = lean_apply_1(v_f_576_, v___f_582_);
v___f_584_ = lean_alloc_closure((void*)(l_StateT_monadControl___redArg___lam__1), 3, 2);
lean_closure_set(v___f_584_, 0, v_snd_581_);
lean_closure_set(v___f_584_, 1, v_toPure_577_);
v___x_585_ = lean_apply_4(v_toBind_578_, lean_box(0), lean_box(0), v___x_583_, v___f_584_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__3(lean_object* v_inst_586_, lean_object* v_00_u03b1_587_, lean_object* v_f_588_, lean_object* v___y_589_){
_start:
{
lean_object* v_toApplicative_590_; lean_object* v_toBind_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_602_; 
v_toApplicative_590_ = lean_ctor_get(v_inst_586_, 0);
v_toBind_591_ = lean_ctor_get(v_inst_586_, 1);
v_isSharedCheck_602_ = !lean_is_exclusive(v_inst_586_);
if (v_isSharedCheck_602_ == 0)
{
v___x_593_ = v_inst_586_;
v_isShared_594_ = v_isSharedCheck_602_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_toBind_591_);
lean_inc(v_toApplicative_590_);
lean_dec(v_inst_586_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_602_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v_toPure_595_; lean_object* v___f_596_; lean_object* v___x_598_; 
v_toPure_595_ = lean_ctor_get(v_toApplicative_590_, 1);
lean_inc_n(v_toPure_595_, 2);
lean_dec_ref(v_toApplicative_590_);
lean_inc(v_toBind_591_);
v___f_596_ = lean_alloc_closure((void*)(l_StateT_monadControl___redArg___lam__2), 4, 3);
lean_closure_set(v___f_596_, 0, v_f_588_);
lean_closure_set(v___f_596_, 1, v_toPure_595_);
lean_closure_set(v___f_596_, 2, v_toBind_591_);
lean_inc(v___y_589_);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 1, v___y_589_);
lean_ctor_set(v___x_593_, 0, v___y_589_);
v___x_598_ = v___x_593_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v___y_589_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v___y_589_);
v___x_598_ = v_reuseFailAlloc_601_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = lean_apply_2(v_toPure_595_, lean_box(0), v___x_598_);
v___x_600_ = lean_apply_4(v_toBind_591_, lean_box(0), lean_box(0), v___x_599_, v___f_596_);
return v___x_600_;
}
}
}
}
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__4(lean_object* v_fst_603_, lean_object* v_toPure_604_, lean_object* v_____x_605_){
_start:
{
lean_object* v_snd_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_614_; 
v_snd_606_ = lean_ctor_get(v_____x_605_, 1);
v_isSharedCheck_614_ = !lean_is_exclusive(v_____x_605_);
if (v_isSharedCheck_614_ == 0)
{
lean_object* v_unused_615_; 
v_unused_615_ = lean_ctor_get(v_____x_605_, 0);
lean_dec(v_unused_615_);
v___x_608_ = v_____x_605_;
v_isShared_609_ = v_isSharedCheck_614_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_snd_606_);
lean_dec(v_____x_605_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_614_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_611_; 
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 0, v_fst_603_);
v___x_611_ = v___x_608_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_fst_603_);
lean_ctor_set(v_reuseFailAlloc_613_, 1, v_snd_606_);
v___x_611_ = v_reuseFailAlloc_613_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
lean_object* v___x_612_; 
v___x_612_ = lean_apply_2(v_toPure_604_, lean_box(0), v___x_611_);
return v___x_612_;
}
}
}
}
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__5(lean_object* v_inst_616_, lean_object* v_____x_617_){
_start:
{
lean_object* v_fst_618_; lean_object* v_toApplicative_619_; lean_object* v_fst_620_; lean_object* v_snd_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_634_; 
v_fst_618_ = lean_ctor_get(v_____x_617_, 0);
lean_inc(v_fst_618_);
lean_dec_ref(v_____x_617_);
v_toApplicative_619_ = lean_ctor_get(v_inst_616_, 0);
lean_inc_ref(v_toApplicative_619_);
v_fst_620_ = lean_ctor_get(v_fst_618_, 0);
v_snd_621_ = lean_ctor_get(v_fst_618_, 1);
v_isSharedCheck_634_ = !lean_is_exclusive(v_fst_618_);
if (v_isSharedCheck_634_ == 0)
{
v___x_623_ = v_fst_618_;
v_isShared_624_ = v_isSharedCheck_634_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_snd_621_);
lean_inc(v_fst_620_);
lean_dec(v_fst_618_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_634_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v_toBind_625_; lean_object* v_toPure_626_; lean_object* v___f_627_; lean_object* v___x_628_; lean_object* v___x_630_; 
v_toBind_625_ = lean_ctor_get(v_inst_616_, 1);
lean_inc(v_toBind_625_);
lean_dec_ref(v_inst_616_);
v_toPure_626_ = lean_ctor_get(v_toApplicative_619_, 1);
lean_inc_n(v_toPure_626_, 2);
lean_dec_ref(v_toApplicative_619_);
v___f_627_ = lean_alloc_closure((void*)(l_StateT_monadControl___redArg___lam__4), 3, 2);
lean_closure_set(v___f_627_, 0, v_fst_620_);
lean_closure_set(v___f_627_, 1, v_toPure_626_);
v___x_628_ = lean_box(0);
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 0, v___x_628_);
v___x_630_ = v___x_623_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v___x_628_);
lean_ctor_set(v_reuseFailAlloc_633_, 1, v_snd_621_);
v___x_630_ = v_reuseFailAlloc_633_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = lean_apply_2(v_toPure_626_, lean_box(0), v___x_630_);
v___x_632_ = lean_apply_4(v_toBind_625_, lean_box(0), lean_box(0), v___x_631_, v___f_627_);
return v___x_632_;
}
}
}
}
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__6(lean_object* v___y_635_, lean_object* v_toPure_636_, lean_object* v_a_637_){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_638_, 0, v_a_637_);
lean_ctor_set(v___x_638_, 1, v___y_635_);
v___x_639_ = lean_apply_2(v_toPure_636_, lean_box(0), v___x_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg___lam__7(lean_object* v_inst_640_, lean_object* v___f_641_, lean_object* v_00_u03b1_642_, lean_object* v_x_643_, lean_object* v___y_644_){
_start:
{
lean_object* v_toApplicative_645_; lean_object* v_toBind_646_; lean_object* v_toPure_647_; lean_object* v___f_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v_toApplicative_645_ = lean_ctor_get(v_inst_640_, 0);
lean_inc_ref(v_toApplicative_645_);
v_toBind_646_ = lean_ctor_get(v_inst_640_, 1);
lean_inc_n(v_toBind_646_, 2);
lean_dec_ref(v_inst_640_);
v_toPure_647_ = lean_ctor_get(v_toApplicative_645_, 1);
lean_inc(v_toPure_647_);
lean_dec_ref(v_toApplicative_645_);
v___f_648_ = lean_alloc_closure((void*)(l_StateT_monadControl___redArg___lam__6), 3, 2);
lean_closure_set(v___f_648_, 0, v___y_644_);
lean_closure_set(v___f_648_, 1, v_toPure_647_);
v___x_649_ = lean_apply_4(v_toBind_646_, lean_box(0), lean_box(0), v_x_643_, v___f_648_);
v___x_650_ = lean_apply_4(v_toBind_646_, lean_box(0), lean_box(0), v___x_649_, v___f_641_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_StateT_monadControl___redArg(lean_object* v_inst_651_){
_start:
{
lean_object* v___f_652_; lean_object* v___f_653_; lean_object* v___f_654_; lean_object* v___x_655_; 
lean_inc_ref_n(v_inst_651_, 2);
v___f_652_ = lean_alloc_closure((void*)(l_StateT_monadControl___redArg___lam__3), 4, 1);
lean_closure_set(v___f_652_, 0, v_inst_651_);
v___f_653_ = lean_alloc_closure((void*)(l_StateT_monadControl___redArg___lam__5), 2, 1);
lean_closure_set(v___f_653_, 0, v_inst_651_);
v___f_654_ = lean_alloc_closure((void*)(l_StateT_monadControl___redArg___lam__7), 5, 2);
lean_closure_set(v___f_654_, 0, v_inst_651_);
lean_closure_set(v___f_654_, 1, v___f_653_);
v___x_655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_655_, 0, v___f_652_);
lean_ctor_set(v___x_655_, 1, v___f_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_StateT_monadControl(lean_object* v_00_u03c3_656_, lean_object* v_m_657_, lean_object* v_inst_658_){
_start:
{
lean_object* v___f_659_; lean_object* v___f_660_; lean_object* v___f_661_; lean_object* v___x_662_; 
lean_inc_ref_n(v_inst_658_, 2);
v___f_659_ = lean_alloc_closure((void*)(l_StateT_monadControl___redArg___lam__3), 4, 1);
lean_closure_set(v___f_659_, 0, v_inst_658_);
v___f_660_ = lean_alloc_closure((void*)(l_StateT_monadControl___redArg___lam__5), 2, 1);
lean_closure_set(v___f_660_, 0, v_inst_658_);
v___f_661_ = lean_alloc_closure((void*)(l_StateT_monadControl___redArg___lam__7), 5, 2);
lean_closure_set(v___f_661_, 0, v_inst_658_);
lean_closure_set(v___f_661_, 1, v___f_660_);
v___x_662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_662_, 0, v___f_659_);
lean_ctor_set(v___x_662_, 1, v___f_661_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_StateT_tryFinally___redArg___lam__0(lean_object* v_toPure_663_, lean_object* v_____x_664_){
_start:
{
lean_object* v_fst_665_; lean_object* v_snd_666_; lean_object* v_fst_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_684_; 
v_fst_665_ = lean_ctor_get(v_____x_664_, 0);
lean_inc(v_fst_665_);
v_snd_666_ = lean_ctor_get(v_____x_664_, 1);
lean_inc(v_snd_666_);
lean_dec_ref(v_____x_664_);
v_fst_667_ = lean_ctor_get(v_fst_665_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v_fst_665_);
if (v_isSharedCheck_684_ == 0)
{
lean_object* v_unused_685_; 
v_unused_685_ = lean_ctor_get(v_fst_665_, 1);
lean_dec(v_unused_685_);
v___x_669_ = v_fst_665_;
v_isShared_670_ = v_isSharedCheck_684_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_fst_667_);
lean_dec(v_fst_665_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_684_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v_fst_671_; lean_object* v_snd_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_683_; 
v_fst_671_ = lean_ctor_get(v_snd_666_, 0);
v_snd_672_ = lean_ctor_get(v_snd_666_, 1);
v_isSharedCheck_683_ = !lean_is_exclusive(v_snd_666_);
if (v_isSharedCheck_683_ == 0)
{
v___x_674_ = v_snd_666_;
v_isShared_675_ = v_isSharedCheck_683_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_snd_672_);
lean_inc(v_fst_671_);
lean_dec(v_snd_666_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_683_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_677_; 
if (v_isShared_675_ == 0)
{
lean_ctor_set(v___x_674_, 1, v_fst_671_);
lean_ctor_set(v___x_674_, 0, v_fst_667_);
v___x_677_ = v___x_674_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_fst_667_);
lean_ctor_set(v_reuseFailAlloc_682_, 1, v_fst_671_);
v___x_677_ = v_reuseFailAlloc_682_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
lean_object* v___x_679_; 
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 1, v_snd_672_);
lean_ctor_set(v___x_669_, 0, v___x_677_);
v___x_679_ = v___x_669_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_677_);
lean_ctor_set(v_reuseFailAlloc_681_, 1, v_snd_672_);
v___x_679_ = v_reuseFailAlloc_681_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_680_; 
v___x_680_ = lean_apply_2(v_toPure_663_, lean_box(0), v___x_679_);
return v___x_680_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_StateT_tryFinally___redArg___lam__1(lean_object* v_h_686_, lean_object* v___y_687_, lean_object* v_x_688_){
_start:
{
if (lean_obj_tag(v_x_688_) == 0)
{
lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_689_ = lean_box(0);
v___x_690_ = lean_apply_2(v_h_686_, v___x_689_, v___y_687_);
return v___x_690_;
}
else
{
lean_object* v_val_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_701_; 
lean_dec(v___y_687_);
v_val_691_ = lean_ctor_get(v_x_688_, 0);
v_isSharedCheck_701_ = !lean_is_exclusive(v_x_688_);
if (v_isSharedCheck_701_ == 0)
{
v___x_693_ = v_x_688_;
v_isShared_694_ = v_isSharedCheck_701_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_val_691_);
lean_dec(v_x_688_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_701_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v_fst_695_; lean_object* v_snd_696_; lean_object* v___x_698_; 
v_fst_695_ = lean_ctor_get(v_val_691_, 0);
lean_inc(v_fst_695_);
v_snd_696_ = lean_ctor_get(v_val_691_, 1);
lean_inc(v_snd_696_);
lean_dec(v_val_691_);
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 0, v_fst_695_);
v___x_698_ = v___x_693_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_fst_695_);
v___x_698_ = v_reuseFailAlloc_700_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
lean_object* v___x_699_; 
v___x_699_ = lean_apply_2(v_h_686_, v___x_698_, v_snd_696_);
return v___x_699_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_StateT_tryFinally___redArg___lam__2(lean_object* v_inst_702_, lean_object* v_toBind_703_, lean_object* v___f_704_, lean_object* v_00_u03b1_705_, lean_object* v_00_u03b2_706_, lean_object* v_x_707_, lean_object* v_h_708_, lean_object* v___y_709_){
_start:
{
lean_object* v___f_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
lean_inc(v___y_709_);
v___f_710_ = lean_alloc_closure((void*)(l_StateT_tryFinally___redArg___lam__1), 3, 2);
lean_closure_set(v___f_710_, 0, v_h_708_);
lean_closure_set(v___f_710_, 1, v___y_709_);
v___x_711_ = lean_apply_1(v_x_707_, v___y_709_);
v___x_712_ = lean_apply_4(v_inst_702_, lean_box(0), lean_box(0), v___x_711_, v___f_710_);
v___x_713_ = lean_apply_4(v_toBind_703_, lean_box(0), lean_box(0), v___x_712_, v___f_704_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_StateT_tryFinally___redArg(lean_object* v_inst_714_, lean_object* v_inst_715_){
_start:
{
lean_object* v_toApplicative_716_; lean_object* v_toBind_717_; lean_object* v_toPure_718_; lean_object* v___f_719_; lean_object* v___f_720_; 
v_toApplicative_716_ = lean_ctor_get(v_inst_715_, 0);
lean_inc_ref(v_toApplicative_716_);
v_toBind_717_ = lean_ctor_get(v_inst_715_, 1);
lean_inc(v_toBind_717_);
lean_dec_ref(v_inst_715_);
v_toPure_718_ = lean_ctor_get(v_toApplicative_716_, 1);
lean_inc(v_toPure_718_);
lean_dec_ref(v_toApplicative_716_);
v___f_719_ = lean_alloc_closure((void*)(l_StateT_tryFinally___redArg___lam__0), 2, 1);
lean_closure_set(v___f_719_, 0, v_toPure_718_);
v___f_720_ = lean_alloc_closure((void*)(l_StateT_tryFinally___redArg___lam__2), 8, 3);
lean_closure_set(v___f_720_, 0, v_inst_714_);
lean_closure_set(v___f_720_, 1, v_toBind_717_);
lean_closure_set(v___f_720_, 2, v___f_719_);
return v___f_720_;
}
}
LEAN_EXPORT lean_object* l_StateT_tryFinally(lean_object* v_m_721_, lean_object* v_00_u03c3_722_, lean_object* v_inst_723_, lean_object* v_inst_724_){
_start:
{
lean_object* v_toApplicative_725_; lean_object* v_toBind_726_; lean_object* v_toPure_727_; lean_object* v___f_728_; lean_object* v___f_729_; 
v_toApplicative_725_ = lean_ctor_get(v_inst_724_, 0);
lean_inc_ref(v_toApplicative_725_);
v_toBind_726_ = lean_ctor_get(v_inst_724_, 1);
lean_inc(v_toBind_726_);
lean_dec_ref(v_inst_724_);
v_toPure_727_ = lean_ctor_get(v_toApplicative_725_, 1);
lean_inc(v_toPure_727_);
lean_dec_ref(v_toApplicative_725_);
v___f_728_ = lean_alloc_closure((void*)(l_StateT_tryFinally___redArg___lam__0), 2, 1);
lean_closure_set(v___f_728_, 0, v_toPure_727_);
v___f_729_ = lean_alloc_closure((void*)(l_StateT_tryFinally___redArg___lam__2), 8, 3);
lean_closure_set(v___f_729_, 0, v_inst_723_);
lean_closure_set(v___f_729_, 1, v_toBind_726_);
lean_closure_set(v___f_729_, 2, v___f_728_);
return v___f_729_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachStateTOfMonad___redArg___lam__0(lean_object* v_x_730_){
_start:
{
lean_object* v_fst_731_; lean_object* v_snd_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_739_; 
v_fst_731_ = lean_ctor_get(v_x_730_, 0);
v_snd_732_ = lean_ctor_get(v_x_730_, 1);
v_isSharedCheck_739_ = !lean_is_exclusive(v_x_730_);
if (v_isSharedCheck_739_ == 0)
{
v___x_734_ = v_x_730_;
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_snd_732_);
lean_inc(v_fst_731_);
lean_dec(v_x_730_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_737_; 
if (v_isShared_735_ == 0)
{
v___x_737_ = v___x_734_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_fst_731_);
lean_ctor_set(v_reuseFailAlloc_738_, 1, v_snd_732_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
}
LEAN_EXPORT lean_object* l_instMonadAttachStateTOfMonad___redArg___lam__1(lean_object* v_toFunctor_740_, lean_object* v_inst_741_, lean_object* v___f_742_, lean_object* v_00_u03b1_743_, lean_object* v_x_744_, lean_object* v___y_745_){
_start:
{
lean_object* v_map_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v_map_746_ = lean_ctor_get(v_toFunctor_740_, 0);
lean_inc(v_map_746_);
lean_dec_ref(v_toFunctor_740_);
v___x_747_ = lean_apply_1(v_x_744_, v___y_745_);
v___x_748_ = lean_apply_2(v_inst_741_, lean_box(0), v___x_747_);
v___x_749_ = lean_apply_4(v_map_746_, lean_box(0), lean_box(0), v___f_742_, v___x_748_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachStateTOfMonad___redArg(lean_object* v_inst_751_, lean_object* v_inst_752_){
_start:
{
lean_object* v_toApplicative_753_; lean_object* v_toFunctor_754_; lean_object* v___f_755_; lean_object* v___f_756_; 
v_toApplicative_753_ = lean_ctor_get(v_inst_751_, 0);
lean_inc_ref(v_toApplicative_753_);
lean_dec_ref(v_inst_751_);
v_toFunctor_754_ = lean_ctor_get(v_toApplicative_753_, 0);
lean_inc_ref(v_toFunctor_754_);
lean_dec_ref(v_toApplicative_753_);
v___f_755_ = ((lean_object*)(l_instMonadAttachStateTOfMonad___redArg___closed__0));
v___f_756_ = lean_alloc_closure((void*)(l_instMonadAttachStateTOfMonad___redArg___lam__1), 6, 3);
lean_closure_set(v___f_756_, 0, v_toFunctor_754_);
lean_closure_set(v___f_756_, 1, v_inst_752_);
lean_closure_set(v___f_756_, 2, v___f_755_);
return v___f_756_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachStateTOfMonad(lean_object* v_m_757_, lean_object* v_00_u03c3_758_, lean_object* v_inst_759_, lean_object* v_inst_760_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_instMonadAttachStateTOfMonad___redArg(v_inst_759_, v_inst_760_);
return v___x_761_;
}
}
lean_object* runtime_initialize_Init_Control_Except(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Control_State(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Control_Except(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Control_State(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Control_Except(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Control_State(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_Except(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_State(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Control_State(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Control_State(builtin);
}
#ifdef __cplusplus
}
#endif
