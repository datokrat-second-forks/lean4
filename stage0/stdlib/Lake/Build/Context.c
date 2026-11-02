// Lean compiler output
// Module: Lake.Build.Context
// Imports: public import Lake.Config.Cache public import Lake.Config.Context public import Lake.Build.Job.Basic
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
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
LEAN_EXPORT uint8_t l_Lake_BuildConfig_showProgress(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildConfig_showProgress___boxed(lean_object*);
static const lean_array_object l_Lake_mkJobQueue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_mkJobQueue___closed__0 = (const lean_object*)&l_Lake_mkJobQueue___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_mkJobQueue();
LEAN_EXPORT lean_object* l_Lake_mkJobQueue___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getBuildContext___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getBuildContext___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getBuildContext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getBuildContext___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanTrace___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanTrace___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanTrace___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanTrace___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanTrace___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanTrace___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanTrace___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanTrace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getBuildConfig___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getBuildConfig___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getBuildConfig___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getBuildConfig___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getBuildConfig___redArg___closed__0 = (const lean_object*)&l_Lake_getBuildConfig___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getBuildConfig___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getBuildConfig(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_getIsOldMode___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getIsOldMode___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getIsOldMode___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getIsOldMode___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getIsOldMode___redArg___closed__0 = (const lean_object*)&l_Lake_getIsOldMode___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getIsOldMode___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getIsOldMode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_getTrustHash___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getTrustHash___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getTrustHash___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getTrustHash___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getTrustHash___redArg___closed__0 = (const lean_object*)&l_Lake_getTrustHash___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getTrustHash___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getTrustHash(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_getNoBuild___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getNoBuild___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getNoBuild___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getNoBuild___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getNoBuild___redArg___closed__0 = (const lean_object*)&l_Lake_getNoBuild___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getNoBuild___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getNoBuild(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_getVerbosity___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getVerbosity___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getVerbosity___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getVerbosity___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getVerbosity___redArg___closed__0 = (const lean_object*)&l_Lake_getVerbosity___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getVerbosity___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getVerbosity(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_getIsVerbose___redArg___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lake_getIsVerbose___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getIsVerbose___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getIsVerbose___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getIsVerbose___redArg___closed__0 = (const lean_object*)&l_Lake_getIsVerbose___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getIsVerbose___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getIsVerbose(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_getIsQuiet___redArg___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lake_getIsQuiet___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getIsQuiet___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getIsQuiet___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getIsQuiet___redArg___closed__0 = (const lean_object*)&l_Lake_getIsQuiet___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getIsQuiet___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getIsQuiet(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanOptOverrides___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanOptOverrides___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanOptOverrides___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanOptOverrides___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getMacOSXDeploymentTarget_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getMacOSXDeploymentTarget_x3f___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg___closed__0 = (const lean_object*)&l_Lake_getMacOSXDeploymentTarget_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_BuildConfig_showProgress(lean_object* v_cfg_1_){
_start:
{
uint8_t v_noBuild_2_; uint8_t v_verbosity_3_; uint8_t v___x_4_; uint8_t v___y_6_; uint8_t v___y_12_; uint8_t v___y_13_; uint8_t v___y_15_; 
v_noBuild_2_ = lean_ctor_get_uint8(v_cfg_1_, sizeof(void*)*5 + 2);
v_verbosity_3_ = lean_ctor_get_uint8(v_cfg_1_, sizeof(void*)*5 + 4);
v___x_4_ = 1;
if (v_noBuild_2_ == 0)
{
v___y_15_ = v_noBuild_2_;
goto v___jp_14_;
}
else
{
v___y_15_ = v___x_4_;
goto v___jp_14_;
}
v___jp_5_:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; 
v___x_7_ = lean_box(v_verbosity_3_);
v___x_8_ = lean_obj_tag_nat(v___x_7_);
lean_dec(v___x_7_);
v___x_9_ = lean_unsigned_to_nat(0u);
v___x_10_ = lean_nat_dec_eq(v___x_8_, v___x_9_);
if (v___x_10_ == 0)
{
if (v___y_6_ == 0)
{
return v___x_4_;
}
else
{
return v___y_6_;
}
}
else
{
return v___y_6_;
}
}
v___jp_11_:
{
if (v___y_12_ == 0)
{
v___y_6_ = v___y_12_;
goto v___jp_5_;
}
else
{
v___y_6_ = v___y_13_;
goto v___jp_5_;
}
}
v___jp_14_:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; uint8_t v___x_19_; 
v___x_16_ = lean_box(v_verbosity_3_);
v___x_17_ = lean_obj_tag_nat(v___x_16_);
lean_dec(v___x_16_);
v___x_18_ = lean_unsigned_to_nat(2u);
v___x_19_ = lean_nat_dec_eq(v___x_17_, v___x_18_);
if (v___x_19_ == 0)
{
v___y_12_ = v___y_15_;
v___y_13_ = v___x_19_;
goto v___jp_11_;
}
else
{
v___y_12_ = v___y_15_;
v___y_13_ = v___x_4_;
goto v___jp_11_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildConfig_showProgress___boxed(lean_object* v_cfg_20_){
_start:
{
uint8_t v_res_21_; lean_object* v_r_22_; 
v_res_21_ = l_Lake_BuildConfig_showProgress(v_cfg_20_);
lean_dec_ref(v_cfg_20_);
v_r_22_ = lean_box(v_res_21_);
return v_r_22_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkJobQueue(){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = ((lean_object*)(l_Lake_mkJobQueue___closed__0));
v___x_27_ = lean_st_mk_ref(v___x_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkJobQueue___boxed(lean_object* v_a_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lake_mkJobQueue();
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0(lean_object* v_inst_30_, lean_object* v_00_u03b1_31_, lean_object* v_x_32_, lean_object* v_ctx_33_){
_start:
{
lean_object* v_toContext_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v_toContext_34_ = lean_ctor_get(v_ctx_33_, 1);
lean_inc(v_toContext_34_);
lean_dec_ref(v_ctx_33_);
v___x_35_ = lean_apply_1(v_x_32_, v_toContext_34_);
v___x_36_ = lean_apply_2(v_inst_30_, lean_box(0), v___x_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg(lean_object* v_inst_37_){
_start:
{
lean_object* v___f_38_; 
v___f_38_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_38_, 0, v_inst_37_);
return v___f_38_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure(lean_object* v_m_39_, lean_object* v_inst_40_){
_start:
{
lean_object* v___f_41_; 
v___f_41_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_41_, 0, v_inst_40_);
return v___f_41_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildContext___redArg(lean_object* v_inst_42_){
_start:
{
lean_inc(v_inst_42_);
return v_inst_42_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildContext___redArg___boxed(lean_object* v_inst_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lake_getBuildContext___redArg(v_inst_43_);
lean_dec(v_inst_43_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildContext(lean_object* v_m_45_, lean_object* v_inst_46_){
_start:
{
lean_inc(v_inst_46_);
return v_inst_46_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildContext___boxed(lean_object* v_m_47_, lean_object* v_inst_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lake_getBuildContext(v_m_47_, v_inst_48_);
lean_dec(v_inst_48_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanTrace___redArg___lam__0(lean_object* v_x_50_){
_start:
{
lean_object* v_leanTrace_51_; 
v_leanTrace_51_ = lean_ctor_get(v_x_50_, 2);
lean_inc_ref(v_leanTrace_51_);
return v_leanTrace_51_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanTrace___redArg___lam__0___boxed(lean_object* v_x_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lake_getLeanTrace___redArg___lam__0(v_x_52_);
lean_dec_ref(v_x_52_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanTrace___redArg(lean_object* v_inst_55_, lean_object* v_inst_56_){
_start:
{
lean_object* v_map_57_; lean_object* v___f_58_; lean_object* v___x_59_; 
v_map_57_ = lean_ctor_get(v_inst_55_, 0);
lean_inc(v_map_57_);
lean_dec_ref(v_inst_55_);
v___f_58_ = ((lean_object*)(l_Lake_getLeanTrace___redArg___closed__0));
v___x_59_ = lean_apply_4(v_map_57_, lean_box(0), lean_box(0), v___f_58_, v_inst_56_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanTrace(lean_object* v_m_60_, lean_object* v_inst_61_, lean_object* v_inst_62_){
_start:
{
lean_object* v_map_63_; lean_object* v___f_64_; lean_object* v___x_65_; 
v_map_63_ = lean_ctor_get(v_inst_61_, 0);
lean_inc(v_map_63_);
lean_dec_ref(v_inst_61_);
v___f_64_ = ((lean_object*)(l_Lake_getLeanTrace___redArg___closed__0));
v___x_65_ = lean_apply_4(v_map_63_, lean_box(0), lean_box(0), v___f_64_, v_inst_62_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildConfig___redArg___lam__0(lean_object* v_x_66_){
_start:
{
lean_object* v_toBuildConfig_67_; 
v_toBuildConfig_67_ = lean_ctor_get(v_x_66_, 0);
lean_inc_ref(v_toBuildConfig_67_);
return v_toBuildConfig_67_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildConfig___redArg___lam__0___boxed(lean_object* v_x_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lake_getBuildConfig___redArg___lam__0(v_x_68_);
lean_dec_ref(v_x_68_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildConfig___redArg(lean_object* v_inst_71_, lean_object* v_inst_72_){
_start:
{
lean_object* v_map_73_; lean_object* v___f_74_; lean_object* v___x_75_; 
v_map_73_ = lean_ctor_get(v_inst_71_, 0);
lean_inc(v_map_73_);
lean_dec_ref(v_inst_71_);
v___f_74_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_75_ = lean_apply_4(v_map_73_, lean_box(0), lean_box(0), v___f_74_, v_inst_72_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildConfig(lean_object* v_m_76_, lean_object* v_inst_77_, lean_object* v_inst_78_){
_start:
{
lean_object* v_map_79_; lean_object* v___f_80_; lean_object* v___x_81_; 
v_map_79_ = lean_ctor_get(v_inst_77_, 0);
lean_inc(v_map_79_);
lean_dec_ref(v_inst_77_);
v___f_80_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_81_ = lean_apply_4(v_map_79_, lean_box(0), lean_box(0), v___f_80_, v_inst_78_);
return v___x_81_;
}
}
LEAN_EXPORT uint8_t l_Lake_getIsOldMode___redArg___lam__0(lean_object* v_x_82_){
_start:
{
uint8_t v_oldMode_83_; 
v_oldMode_83_ = lean_ctor_get_uint8(v_x_82_, sizeof(void*)*5);
return v_oldMode_83_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsOldMode___redArg___lam__0___boxed(lean_object* v_x_84_){
_start:
{
uint8_t v_res_85_; lean_object* v_r_86_; 
v_res_85_ = l_Lake_getIsOldMode___redArg___lam__0(v_x_84_);
lean_dec_ref(v_x_84_);
v_r_86_ = lean_box(v_res_85_);
return v_r_86_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsOldMode___redArg(lean_object* v_inst_88_, lean_object* v_inst_89_){
_start:
{
lean_object* v_map_90_; lean_object* v___f_91_; lean_object* v___f_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v_map_90_ = lean_ctor_get(v_inst_88_, 0);
lean_inc_n(v_map_90_, 2);
lean_dec_ref(v_inst_88_);
v___f_91_ = ((lean_object*)(l_Lake_getIsOldMode___redArg___closed__0));
v___f_92_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_93_ = lean_apply_4(v_map_90_, lean_box(0), lean_box(0), v___f_92_, v_inst_89_);
v___x_94_ = lean_apply_4(v_map_90_, lean_box(0), lean_box(0), v___f_91_, v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsOldMode(lean_object* v_m_95_, lean_object* v_inst_96_, lean_object* v_inst_97_){
_start:
{
lean_object* v_map_98_; lean_object* v___f_99_; lean_object* v___f_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v_map_98_ = lean_ctor_get(v_inst_96_, 0);
lean_inc_n(v_map_98_, 2);
lean_dec_ref(v_inst_96_);
v___f_99_ = ((lean_object*)(l_Lake_getIsOldMode___redArg___closed__0));
v___f_100_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_101_ = lean_apply_4(v_map_98_, lean_box(0), lean_box(0), v___f_100_, v_inst_97_);
v___x_102_ = lean_apply_4(v_map_98_, lean_box(0), lean_box(0), v___f_99_, v___x_101_);
return v___x_102_;
}
}
LEAN_EXPORT uint8_t l_Lake_getTrustHash___redArg___lam__0(lean_object* v_x_103_){
_start:
{
uint8_t v_trustHash_104_; 
v_trustHash_104_ = lean_ctor_get_uint8(v_x_103_, sizeof(void*)*5 + 1);
return v_trustHash_104_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrustHash___redArg___lam__0___boxed(lean_object* v_x_105_){
_start:
{
uint8_t v_res_106_; lean_object* v_r_107_; 
v_res_106_ = l_Lake_getTrustHash___redArg___lam__0(v_x_105_);
lean_dec_ref(v_x_105_);
v_r_107_ = lean_box(v_res_106_);
return v_r_107_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrustHash___redArg(lean_object* v_inst_109_, lean_object* v_inst_110_){
_start:
{
lean_object* v_map_111_; lean_object* v___f_112_; lean_object* v___f_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v_map_111_ = lean_ctor_get(v_inst_109_, 0);
lean_inc_n(v_map_111_, 2);
lean_dec_ref(v_inst_109_);
v___f_112_ = ((lean_object*)(l_Lake_getTrustHash___redArg___closed__0));
v___f_113_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_114_ = lean_apply_4(v_map_111_, lean_box(0), lean_box(0), v___f_113_, v_inst_110_);
v___x_115_ = lean_apply_4(v_map_111_, lean_box(0), lean_box(0), v___f_112_, v___x_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrustHash(lean_object* v_m_116_, lean_object* v_inst_117_, lean_object* v_inst_118_){
_start:
{
lean_object* v_map_119_; lean_object* v___f_120_; lean_object* v___f_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v_map_119_ = lean_ctor_get(v_inst_117_, 0);
lean_inc_n(v_map_119_, 2);
lean_dec_ref(v_inst_117_);
v___f_120_ = ((lean_object*)(l_Lake_getTrustHash___redArg___closed__0));
v___f_121_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_122_ = lean_apply_4(v_map_119_, lean_box(0), lean_box(0), v___f_121_, v_inst_118_);
v___x_123_ = lean_apply_4(v_map_119_, lean_box(0), lean_box(0), v___f_120_, v___x_122_);
return v___x_123_;
}
}
LEAN_EXPORT uint8_t l_Lake_getNoBuild___redArg___lam__0(lean_object* v_x_124_){
_start:
{
uint8_t v_noBuild_125_; 
v_noBuild_125_ = lean_ctor_get_uint8(v_x_124_, sizeof(void*)*5 + 2);
return v_noBuild_125_;
}
}
LEAN_EXPORT lean_object* l_Lake_getNoBuild___redArg___lam__0___boxed(lean_object* v_x_126_){
_start:
{
uint8_t v_res_127_; lean_object* v_r_128_; 
v_res_127_ = l_Lake_getNoBuild___redArg___lam__0(v_x_126_);
lean_dec_ref(v_x_126_);
v_r_128_ = lean_box(v_res_127_);
return v_r_128_;
}
}
LEAN_EXPORT lean_object* l_Lake_getNoBuild___redArg(lean_object* v_inst_130_, lean_object* v_inst_131_){
_start:
{
lean_object* v_map_132_; lean_object* v___f_133_; lean_object* v___f_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v_map_132_ = lean_ctor_get(v_inst_130_, 0);
lean_inc_n(v_map_132_, 2);
lean_dec_ref(v_inst_130_);
v___f_133_ = ((lean_object*)(l_Lake_getNoBuild___redArg___closed__0));
v___f_134_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_135_ = lean_apply_4(v_map_132_, lean_box(0), lean_box(0), v___f_134_, v_inst_131_);
v___x_136_ = lean_apply_4(v_map_132_, lean_box(0), lean_box(0), v___f_133_, v___x_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lake_getNoBuild(lean_object* v_m_137_, lean_object* v_inst_138_, lean_object* v_inst_139_){
_start:
{
lean_object* v_map_140_; lean_object* v___f_141_; lean_object* v___f_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v_map_140_ = lean_ctor_get(v_inst_138_, 0);
lean_inc_n(v_map_140_, 2);
lean_dec_ref(v_inst_138_);
v___f_141_ = ((lean_object*)(l_Lake_getNoBuild___redArg___closed__0));
v___f_142_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_143_ = lean_apply_4(v_map_140_, lean_box(0), lean_box(0), v___f_142_, v_inst_139_);
v___x_144_ = lean_apply_4(v_map_140_, lean_box(0), lean_box(0), v___f_141_, v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT uint8_t l_Lake_getVerbosity___redArg___lam__0(lean_object* v_x_145_){
_start:
{
uint8_t v_verbosity_146_; 
v_verbosity_146_ = lean_ctor_get_uint8(v_x_145_, sizeof(void*)*5 + 4);
return v_verbosity_146_;
}
}
LEAN_EXPORT lean_object* l_Lake_getVerbosity___redArg___lam__0___boxed(lean_object* v_x_147_){
_start:
{
uint8_t v_res_148_; lean_object* v_r_149_; 
v_res_148_ = l_Lake_getVerbosity___redArg___lam__0(v_x_147_);
lean_dec_ref(v_x_147_);
v_r_149_ = lean_box(v_res_148_);
return v_r_149_;
}
}
LEAN_EXPORT lean_object* l_Lake_getVerbosity___redArg(lean_object* v_inst_151_, lean_object* v_inst_152_){
_start:
{
lean_object* v_map_153_; lean_object* v___f_154_; lean_object* v___f_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v_map_153_ = lean_ctor_get(v_inst_151_, 0);
lean_inc_n(v_map_153_, 2);
lean_dec_ref(v_inst_151_);
v___f_154_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_155_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_156_ = lean_apply_4(v_map_153_, lean_box(0), lean_box(0), v___f_155_, v_inst_152_);
v___x_157_ = lean_apply_4(v_map_153_, lean_box(0), lean_box(0), v___f_154_, v___x_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lake_getVerbosity(lean_object* v_m_158_, lean_object* v_inst_159_, lean_object* v_inst_160_){
_start:
{
lean_object* v_map_161_; lean_object* v___f_162_; lean_object* v___f_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v_map_161_ = lean_ctor_get(v_inst_159_, 0);
lean_inc_n(v_map_161_, 2);
lean_dec_ref(v_inst_159_);
v___f_162_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_163_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_164_ = lean_apply_4(v_map_161_, lean_box(0), lean_box(0), v___f_163_, v_inst_160_);
v___x_165_ = lean_apply_4(v_map_161_, lean_box(0), lean_box(0), v___f_162_, v___x_164_);
return v___x_165_;
}
}
LEAN_EXPORT uint8_t l_Lake_getIsVerbose___redArg___lam__0(uint8_t v_x_166_){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_167_ = lean_box(v_x_166_);
v___x_168_ = lean_obj_tag_nat(v___x_167_);
lean_dec(v___x_167_);
v___x_169_ = lean_unsigned_to_nat(2u);
v___x_170_ = lean_nat_dec_eq(v___x_168_, v___x_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsVerbose___redArg___lam__0___boxed(lean_object* v_x_171_){
_start:
{
uint8_t v_x_67__boxed_172_; uint8_t v_res_173_; lean_object* v_r_174_; 
v_x_67__boxed_172_ = lean_unbox(v_x_171_);
v_res_173_ = l_Lake_getIsVerbose___redArg___lam__0(v_x_67__boxed_172_);
v_r_174_ = lean_box(v_res_173_);
return v_r_174_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsVerbose___redArg(lean_object* v_inst_176_, lean_object* v_inst_177_){
_start:
{
lean_object* v_map_178_; lean_object* v___f_179_; lean_object* v___f_180_; lean_object* v___f_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v_map_178_ = lean_ctor_get(v_inst_176_, 0);
lean_inc_n(v_map_178_, 3);
lean_dec_ref(v_inst_176_);
v___f_179_ = ((lean_object*)(l_Lake_getIsVerbose___redArg___closed__0));
v___f_180_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_181_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_182_ = lean_apply_4(v_map_178_, lean_box(0), lean_box(0), v___f_181_, v_inst_177_);
v___x_183_ = lean_apply_4(v_map_178_, lean_box(0), lean_box(0), v___f_180_, v___x_182_);
v___x_184_ = lean_apply_4(v_map_178_, lean_box(0), lean_box(0), v___f_179_, v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsVerbose(lean_object* v_m_185_, lean_object* v_inst_186_, lean_object* v_inst_187_){
_start:
{
lean_object* v_map_188_; lean_object* v___f_189_; lean_object* v___f_190_; lean_object* v___f_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v_map_188_ = lean_ctor_get(v_inst_186_, 0);
lean_inc_n(v_map_188_, 3);
lean_dec_ref(v_inst_186_);
v___f_189_ = ((lean_object*)(l_Lake_getIsVerbose___redArg___closed__0));
v___f_190_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_191_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_192_ = lean_apply_4(v_map_188_, lean_box(0), lean_box(0), v___f_191_, v_inst_187_);
v___x_193_ = lean_apply_4(v_map_188_, lean_box(0), lean_box(0), v___f_190_, v___x_192_);
v___x_194_ = lean_apply_4(v_map_188_, lean_box(0), lean_box(0), v___f_189_, v___x_193_);
return v___x_194_;
}
}
LEAN_EXPORT uint8_t l_Lake_getIsQuiet___redArg___lam__0(uint8_t v_x_195_){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; uint8_t v___x_199_; 
v___x_196_ = lean_box(v_x_195_);
v___x_197_ = lean_obj_tag_nat(v___x_196_);
lean_dec(v___x_196_);
v___x_198_ = lean_unsigned_to_nat(0u);
v___x_199_ = lean_nat_dec_eq(v___x_197_, v___x_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsQuiet___redArg___lam__0___boxed(lean_object* v_x_200_){
_start:
{
uint8_t v_x_67__boxed_201_; uint8_t v_res_202_; lean_object* v_r_203_; 
v_x_67__boxed_201_ = lean_unbox(v_x_200_);
v_res_202_ = l_Lake_getIsQuiet___redArg___lam__0(v_x_67__boxed_201_);
v_r_203_ = lean_box(v_res_202_);
return v_r_203_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsQuiet___redArg(lean_object* v_inst_205_, lean_object* v_inst_206_){
_start:
{
lean_object* v_map_207_; lean_object* v___f_208_; lean_object* v___f_209_; lean_object* v___f_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v_map_207_ = lean_ctor_get(v_inst_205_, 0);
lean_inc_n(v_map_207_, 3);
lean_dec_ref(v_inst_205_);
v___f_208_ = ((lean_object*)(l_Lake_getIsQuiet___redArg___closed__0));
v___f_209_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_210_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_211_ = lean_apply_4(v_map_207_, lean_box(0), lean_box(0), v___f_210_, v_inst_206_);
v___x_212_ = lean_apply_4(v_map_207_, lean_box(0), lean_box(0), v___f_209_, v___x_211_);
v___x_213_ = lean_apply_4(v_map_207_, lean_box(0), lean_box(0), v___f_208_, v___x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsQuiet(lean_object* v_m_214_, lean_object* v_inst_215_, lean_object* v_inst_216_){
_start:
{
lean_object* v_map_217_; lean_object* v___f_218_; lean_object* v___f_219_; lean_object* v___f_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v_map_217_ = lean_ctor_get(v_inst_215_, 0);
lean_inc_n(v_map_217_, 3);
lean_dec_ref(v_inst_215_);
v___f_218_ = ((lean_object*)(l_Lake_getIsQuiet___redArg___closed__0));
v___f_219_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_220_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_221_ = lean_apply_4(v_map_217_, lean_box(0), lean_box(0), v___f_220_, v_inst_216_);
v___x_222_ = lean_apply_4(v_map_217_, lean_box(0), lean_box(0), v___f_219_, v___x_221_);
v___x_223_ = lean_apply_4(v_map_217_, lean_box(0), lean_box(0), v___f_218_, v___x_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides___redArg___lam__0(lean_object* v_x_224_){
_start:
{
lean_object* v_leanOptOverrides_225_; 
v_leanOptOverrides_225_ = lean_ctor_get(v_x_224_, 3);
lean_inc(v_leanOptOverrides_225_);
return v_leanOptOverrides_225_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides___redArg___lam__0___boxed(lean_object* v_x_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lake_getLeanOptOverrides___redArg___lam__0(v_x_226_);
lean_dec_ref(v_x_226_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides___redArg(lean_object* v_inst_229_, lean_object* v_inst_230_){
_start:
{
lean_object* v_map_231_; lean_object* v___f_232_; lean_object* v___f_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v_map_231_ = lean_ctor_get(v_inst_229_, 0);
lean_inc_n(v_map_231_, 2);
lean_dec_ref(v_inst_229_);
v___f_232_ = ((lean_object*)(l_Lake_getLeanOptOverrides___redArg___closed__0));
v___f_233_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_234_ = lean_apply_4(v_map_231_, lean_box(0), lean_box(0), v___f_233_, v_inst_230_);
v___x_235_ = lean_apply_4(v_map_231_, lean_box(0), lean_box(0), v___f_232_, v___x_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides(lean_object* v_m_236_, lean_object* v_inst_237_, lean_object* v_inst_238_){
_start:
{
lean_object* v_map_239_; lean_object* v___f_240_; lean_object* v___f_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v_map_239_ = lean_ctor_get(v_inst_237_, 0);
lean_inc_n(v_map_239_, 2);
lean_dec_ref(v_inst_237_);
v___f_240_ = ((lean_object*)(l_Lake_getLeanOptOverrides___redArg___closed__0));
v___f_241_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_242_ = lean_apply_4(v_map_239_, lean_box(0), lean_box(0), v___f_241_, v_inst_238_);
v___x_243_ = lean_apply_4(v_map_239_, lean_box(0), lean_box(0), v___f_240_, v___x_242_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg___lam__0(lean_object* v_x_244_){
_start:
{
lean_object* v_macosxDeploymentTarget_x3f_245_; 
v_macosxDeploymentTarget_x3f_245_ = lean_ctor_get(v_x_244_, 4);
lean_inc(v_macosxDeploymentTarget_x3f_245_);
return v_macosxDeploymentTarget_x3f_245_;
}
}
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg___lam__0___boxed(lean_object* v_x_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lake_getMacOSXDeploymentTarget_x3f___redArg___lam__0(v_x_246_);
lean_dec_ref(v_x_246_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg(lean_object* v_inst_249_, lean_object* v_inst_250_){
_start:
{
lean_object* v_map_251_; lean_object* v___f_252_; lean_object* v___f_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v_map_251_ = lean_ctor_get(v_inst_249_, 0);
lean_inc_n(v_map_251_, 2);
lean_dec_ref(v_inst_249_);
v___f_252_ = ((lean_object*)(l_Lake_getMacOSXDeploymentTarget_x3f___redArg___closed__0));
v___f_253_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_254_ = lean_apply_4(v_map_251_, lean_box(0), lean_box(0), v___f_253_, v_inst_250_);
v___x_255_ = lean_apply_4(v_map_251_, lean_box(0), lean_box(0), v___f_252_, v___x_254_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f(lean_object* v_m_256_, lean_object* v_inst_257_, lean_object* v_inst_258_){
_start:
{
lean_object* v_map_259_; lean_object* v___f_260_; lean_object* v___f_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v_map_259_ = lean_ctor_get(v_inst_257_, 0);
lean_inc_n(v_map_259_, 2);
lean_dec_ref(v_inst_257_);
v___f_260_ = ((lean_object*)(l_Lake_getMacOSXDeploymentTarget_x3f___redArg___closed__0));
v___f_261_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_262_ = lean_apply_4(v_map_259_, lean_box(0), lean_box(0), v___f_261_, v_inst_258_);
v___x_263_ = lean_apply_4(v_map_259_, lean_box(0), lean_box(0), v___f_260_, v___x_262_);
return v___x_263_;
}
}
lean_object* runtime_initialize_Lake_Config_Cache(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Context(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Basic(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Context(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Context(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Cache(uint8_t builtin);
lean_object* initialize_Lake_Config_Context(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Context(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Context(builtin);
}
#ifdef __cplusplus
}
#endif
