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
lean_object* l_Lake_Verbosity_ctorIdx(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
static lean_once_cell_t l_Lake_BuildConfig_showProgress___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildConfig_showProgress___closed__0;
static lean_once_cell_t l_Lake_BuildConfig_showProgress___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildConfig_showProgress___closed__1;
LEAN_EXPORT uint8_t l_Lake_BuildConfig_showProgress(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildConfig_showProgress___boxed(lean_object*);
static const lean_array_object l_Lake_mkJobQueue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_mkJobQueue___closed__0 = (const lean_object*)&l_Lake_mkJobQueue___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_mkJobQueue();
LEAN_EXPORT lean_object* l_Lake_mkJobQueue___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_object* _init_l_Lake_BuildConfig_showProgress___closed__0(void){
_start:
{
uint8_t v___x_1_; lean_object* v___x_2_; 
v___x_1_ = 0;
v___x_2_ = l_Lake_Verbosity_ctorIdx(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lake_BuildConfig_showProgress___closed__1(void){
_start:
{
uint8_t v___x_3_; lean_object* v___x_4_; 
v___x_3_ = 2;
v___x_4_ = l_Lake_Verbosity_ctorIdx(v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT uint8_t l_Lake_BuildConfig_showProgress(lean_object* v_cfg_5_){
_start:
{
uint8_t v_noBuild_6_; uint8_t v_verbosity_7_; lean_object* v___x_8_; uint8_t v___y_10_; 
v_noBuild_6_ = lean_ctor_get_uint8(v_cfg_5_, sizeof(void*)*4 + 2);
v_verbosity_7_ = lean_ctor_get_uint8(v_cfg_5_, sizeof(void*)*4 + 4);
v___x_8_ = l_Lake_Verbosity_ctorIdx(v_verbosity_7_);
if (v_noBuild_6_ == 0)
{
v___y_10_ = v_noBuild_6_;
goto v___jp_9_;
}
else
{
lean_object* v___x_14_; uint8_t v___x_15_; 
v___x_14_ = lean_obj_once(&l_Lake_BuildConfig_showProgress___closed__1, &l_Lake_BuildConfig_showProgress___closed__1_once, _init_l_Lake_BuildConfig_showProgress___closed__1);
v___x_15_ = lean_nat_dec_eq(v___x_8_, v___x_14_);
v___y_10_ = v___x_15_;
goto v___jp_9_;
}
v___jp_9_:
{
lean_object* v___x_11_; uint8_t v___x_12_; 
v___x_11_ = lean_obj_once(&l_Lake_BuildConfig_showProgress___closed__0, &l_Lake_BuildConfig_showProgress___closed__0_once, _init_l_Lake_BuildConfig_showProgress___closed__0);
v___x_12_ = lean_nat_dec_eq(v___x_8_, v___x_11_);
lean_dec(v___x_8_);
if (v___x_12_ == 0)
{
if (v___y_10_ == 0)
{
uint8_t v___x_13_; 
v___x_13_ = 1;
return v___x_13_;
}
else
{
return v___y_10_;
}
}
else
{
return v___y_10_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildConfig_showProgress___boxed(lean_object* v_cfg_16_){
_start:
{
uint8_t v_res_17_; lean_object* v_r_18_; 
v_res_17_ = l_Lake_BuildConfig_showProgress(v_cfg_16_);
lean_dec_ref(v_cfg_16_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkJobQueue(){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = ((lean_object*)(l_Lake_mkJobQueue___closed__0));
v___x_23_ = lean_st_mk_ref(v___x_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkJobQueue___boxed(lean_object* v___y_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lake_mkJobQueue();
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0(lean_object* v_inst_26_, lean_object* v_00_u03b1_27_, lean_object* v_x_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_toContext_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v_toContext_30_ = lean_ctor_get(v___y_29_, 1);
lean_inc(v_toContext_30_);
v___x_31_ = lean_apply_1(v_x_28_, v_toContext_30_);
v___x_32_ = lean_apply_2(v_inst_26_, lean_box(0), v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0___boxed(lean_object* v_inst_33_, lean_object* v_00_u03b1_34_, lean_object* v_x_35_, lean_object* v___y_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0(v_inst_33_, v_00_u03b1_34_, v_x_35_, v___y_36_);
lean_dec_ref(v___y_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg(lean_object* v_inst_38_){
_start:
{
lean_object* v___f_39_; 
v___f_39_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_39_, 0, v_inst_38_);
return v___f_39_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure(lean_object* v_m_40_, lean_object* v_inst_41_){
_start:
{
lean_object* v___f_42_; 
v___f_42_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_42_, 0, v_inst_41_);
return v___f_42_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildContext___redArg(lean_object* v_inst_43_){
_start:
{
lean_inc(v_inst_43_);
return v_inst_43_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildContext___redArg___boxed(lean_object* v_inst_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lake_getBuildContext___redArg(v_inst_44_);
lean_dec(v_inst_44_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildContext(lean_object* v_m_46_, lean_object* v_inst_47_){
_start:
{
lean_inc(v_inst_47_);
return v_inst_47_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildContext___boxed(lean_object* v_m_48_, lean_object* v_inst_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lake_getBuildContext(v_m_48_, v_inst_49_);
lean_dec(v_inst_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanTrace___redArg___lam__0(lean_object* v_x_51_){
_start:
{
lean_object* v_leanTrace_52_; 
v_leanTrace_52_ = lean_ctor_get(v_x_51_, 2);
lean_inc_ref(v_leanTrace_52_);
return v_leanTrace_52_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanTrace___redArg___lam__0___boxed(lean_object* v_x_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lake_getLeanTrace___redArg___lam__0(v_x_53_);
lean_dec_ref(v_x_53_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanTrace___redArg(lean_object* v_inst_56_, lean_object* v_inst_57_){
_start:
{
lean_object* v_map_58_; lean_object* v___f_59_; lean_object* v___x_60_; 
v_map_58_ = lean_ctor_get(v_inst_56_, 0);
lean_inc(v_map_58_);
lean_dec_ref(v_inst_56_);
v___f_59_ = ((lean_object*)(l_Lake_getLeanTrace___redArg___closed__0));
v___x_60_ = lean_apply_4(v_map_58_, lean_box(0), lean_box(0), v___f_59_, v_inst_57_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanTrace(lean_object* v_m_61_, lean_object* v_inst_62_, lean_object* v_inst_63_){
_start:
{
lean_object* v_map_64_; lean_object* v___f_65_; lean_object* v___x_66_; 
v_map_64_ = lean_ctor_get(v_inst_62_, 0);
lean_inc(v_map_64_);
lean_dec_ref(v_inst_62_);
v___f_65_ = ((lean_object*)(l_Lake_getLeanTrace___redArg___closed__0));
v___x_66_ = lean_apply_4(v_map_64_, lean_box(0), lean_box(0), v___f_65_, v_inst_63_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildConfig___redArg___lam__0(lean_object* v_x_67_){
_start:
{
lean_object* v_toBuildConfig_68_; 
v_toBuildConfig_68_ = lean_ctor_get(v_x_67_, 0);
lean_inc_ref(v_toBuildConfig_68_);
return v_toBuildConfig_68_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildConfig___redArg___lam__0___boxed(lean_object* v_x_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lake_getBuildConfig___redArg___lam__0(v_x_69_);
lean_dec_ref(v_x_69_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildConfig___redArg(lean_object* v_inst_72_, lean_object* v_inst_73_){
_start:
{
lean_object* v_map_74_; lean_object* v___f_75_; lean_object* v___x_76_; 
v_map_74_ = lean_ctor_get(v_inst_72_, 0);
lean_inc(v_map_74_);
lean_dec_ref(v_inst_72_);
v___f_75_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_76_ = lean_apply_4(v_map_74_, lean_box(0), lean_box(0), v___f_75_, v_inst_73_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildConfig(lean_object* v_m_77_, lean_object* v_inst_78_, lean_object* v_inst_79_){
_start:
{
lean_object* v_map_80_; lean_object* v___f_81_; lean_object* v___x_82_; 
v_map_80_ = lean_ctor_get(v_inst_78_, 0);
lean_inc(v_map_80_);
lean_dec_ref(v_inst_78_);
v___f_81_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_82_ = lean_apply_4(v_map_80_, lean_box(0), lean_box(0), v___f_81_, v_inst_79_);
return v___x_82_;
}
}
LEAN_EXPORT uint8_t l_Lake_getIsOldMode___redArg___lam__0(lean_object* v_x_83_){
_start:
{
uint8_t v_oldMode_84_; 
v_oldMode_84_ = lean_ctor_get_uint8(v_x_83_, sizeof(void*)*4);
return v_oldMode_84_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsOldMode___redArg___lam__0___boxed(lean_object* v_x_85_){
_start:
{
uint8_t v_res_86_; lean_object* v_r_87_; 
v_res_86_ = l_Lake_getIsOldMode___redArg___lam__0(v_x_85_);
lean_dec_ref(v_x_85_);
v_r_87_ = lean_box(v_res_86_);
return v_r_87_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsOldMode___redArg(lean_object* v_inst_89_, lean_object* v_inst_90_){
_start:
{
lean_object* v_map_91_; lean_object* v___f_92_; lean_object* v___f_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v_map_91_ = lean_ctor_get(v_inst_89_, 0);
lean_inc_n(v_map_91_, 2);
lean_dec_ref(v_inst_89_);
v___f_92_ = ((lean_object*)(l_Lake_getIsOldMode___redArg___closed__0));
v___f_93_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_94_ = lean_apply_4(v_map_91_, lean_box(0), lean_box(0), v___f_93_, v_inst_90_);
v___x_95_ = lean_apply_4(v_map_91_, lean_box(0), lean_box(0), v___f_92_, v___x_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsOldMode(lean_object* v_m_96_, lean_object* v_inst_97_, lean_object* v_inst_98_){
_start:
{
lean_object* v_map_99_; lean_object* v___f_100_; lean_object* v___f_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v_map_99_ = lean_ctor_get(v_inst_97_, 0);
lean_inc_n(v_map_99_, 2);
lean_dec_ref(v_inst_97_);
v___f_100_ = ((lean_object*)(l_Lake_getIsOldMode___redArg___closed__0));
v___f_101_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_102_ = lean_apply_4(v_map_99_, lean_box(0), lean_box(0), v___f_101_, v_inst_98_);
v___x_103_ = lean_apply_4(v_map_99_, lean_box(0), lean_box(0), v___f_100_, v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT uint8_t l_Lake_getTrustHash___redArg___lam__0(lean_object* v_x_104_){
_start:
{
uint8_t v_trustHash_105_; 
v_trustHash_105_ = lean_ctor_get_uint8(v_x_104_, sizeof(void*)*4 + 1);
return v_trustHash_105_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrustHash___redArg___lam__0___boxed(lean_object* v_x_106_){
_start:
{
uint8_t v_res_107_; lean_object* v_r_108_; 
v_res_107_ = l_Lake_getTrustHash___redArg___lam__0(v_x_106_);
lean_dec_ref(v_x_106_);
v_r_108_ = lean_box(v_res_107_);
return v_r_108_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrustHash___redArg(lean_object* v_inst_110_, lean_object* v_inst_111_){
_start:
{
lean_object* v_map_112_; lean_object* v___f_113_; lean_object* v___f_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v_map_112_ = lean_ctor_get(v_inst_110_, 0);
lean_inc_n(v_map_112_, 2);
lean_dec_ref(v_inst_110_);
v___f_113_ = ((lean_object*)(l_Lake_getTrustHash___redArg___closed__0));
v___f_114_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_115_ = lean_apply_4(v_map_112_, lean_box(0), lean_box(0), v___f_114_, v_inst_111_);
v___x_116_ = lean_apply_4(v_map_112_, lean_box(0), lean_box(0), v___f_113_, v___x_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrustHash(lean_object* v_m_117_, lean_object* v_inst_118_, lean_object* v_inst_119_){
_start:
{
lean_object* v_map_120_; lean_object* v___f_121_; lean_object* v___f_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v_map_120_ = lean_ctor_get(v_inst_118_, 0);
lean_inc_n(v_map_120_, 2);
lean_dec_ref(v_inst_118_);
v___f_121_ = ((lean_object*)(l_Lake_getTrustHash___redArg___closed__0));
v___f_122_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_123_ = lean_apply_4(v_map_120_, lean_box(0), lean_box(0), v___f_122_, v_inst_119_);
v___x_124_ = lean_apply_4(v_map_120_, lean_box(0), lean_box(0), v___f_121_, v___x_123_);
return v___x_124_;
}
}
LEAN_EXPORT uint8_t l_Lake_getNoBuild___redArg___lam__0(lean_object* v_x_125_){
_start:
{
uint8_t v_noBuild_126_; 
v_noBuild_126_ = lean_ctor_get_uint8(v_x_125_, sizeof(void*)*4 + 2);
return v_noBuild_126_;
}
}
LEAN_EXPORT lean_object* l_Lake_getNoBuild___redArg___lam__0___boxed(lean_object* v_x_127_){
_start:
{
uint8_t v_res_128_; lean_object* v_r_129_; 
v_res_128_ = l_Lake_getNoBuild___redArg___lam__0(v_x_127_);
lean_dec_ref(v_x_127_);
v_r_129_ = lean_box(v_res_128_);
return v_r_129_;
}
}
LEAN_EXPORT lean_object* l_Lake_getNoBuild___redArg(lean_object* v_inst_131_, lean_object* v_inst_132_){
_start:
{
lean_object* v_map_133_; lean_object* v___f_134_; lean_object* v___f_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v_map_133_ = lean_ctor_get(v_inst_131_, 0);
lean_inc_n(v_map_133_, 2);
lean_dec_ref(v_inst_131_);
v___f_134_ = ((lean_object*)(l_Lake_getNoBuild___redArg___closed__0));
v___f_135_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_136_ = lean_apply_4(v_map_133_, lean_box(0), lean_box(0), v___f_135_, v_inst_132_);
v___x_137_ = lean_apply_4(v_map_133_, lean_box(0), lean_box(0), v___f_134_, v___x_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lake_getNoBuild(lean_object* v_m_138_, lean_object* v_inst_139_, lean_object* v_inst_140_){
_start:
{
lean_object* v_map_141_; lean_object* v___f_142_; lean_object* v___f_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v_map_141_ = lean_ctor_get(v_inst_139_, 0);
lean_inc_n(v_map_141_, 2);
lean_dec_ref(v_inst_139_);
v___f_142_ = ((lean_object*)(l_Lake_getNoBuild___redArg___closed__0));
v___f_143_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_144_ = lean_apply_4(v_map_141_, lean_box(0), lean_box(0), v___f_143_, v_inst_140_);
v___x_145_ = lean_apply_4(v_map_141_, lean_box(0), lean_box(0), v___f_142_, v___x_144_);
return v___x_145_;
}
}
LEAN_EXPORT uint8_t l_Lake_getVerbosity___redArg___lam__0(lean_object* v_x_146_){
_start:
{
uint8_t v_verbosity_147_; 
v_verbosity_147_ = lean_ctor_get_uint8(v_x_146_, sizeof(void*)*4 + 4);
return v_verbosity_147_;
}
}
LEAN_EXPORT lean_object* l_Lake_getVerbosity___redArg___lam__0___boxed(lean_object* v_x_148_){
_start:
{
uint8_t v_res_149_; lean_object* v_r_150_; 
v_res_149_ = l_Lake_getVerbosity___redArg___lam__0(v_x_148_);
lean_dec_ref(v_x_148_);
v_r_150_ = lean_box(v_res_149_);
return v_r_150_;
}
}
LEAN_EXPORT lean_object* l_Lake_getVerbosity___redArg(lean_object* v_inst_152_, lean_object* v_inst_153_){
_start:
{
lean_object* v_map_154_; lean_object* v___f_155_; lean_object* v___f_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v_map_154_ = lean_ctor_get(v_inst_152_, 0);
lean_inc_n(v_map_154_, 2);
lean_dec_ref(v_inst_152_);
v___f_155_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_156_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_157_ = lean_apply_4(v_map_154_, lean_box(0), lean_box(0), v___f_156_, v_inst_153_);
v___x_158_ = lean_apply_4(v_map_154_, lean_box(0), lean_box(0), v___f_155_, v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lake_getVerbosity(lean_object* v_m_159_, lean_object* v_inst_160_, lean_object* v_inst_161_){
_start:
{
lean_object* v_map_162_; lean_object* v___f_163_; lean_object* v___f_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v_map_162_ = lean_ctor_get(v_inst_160_, 0);
lean_inc_n(v_map_162_, 2);
lean_dec_ref(v_inst_160_);
v___f_163_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_164_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_165_ = lean_apply_4(v_map_162_, lean_box(0), lean_box(0), v___f_164_, v_inst_161_);
v___x_166_ = lean_apply_4(v_map_162_, lean_box(0), lean_box(0), v___f_163_, v___x_165_);
return v___x_166_;
}
}
LEAN_EXPORT uint8_t l_Lake_getIsVerbose___redArg___lam__0(uint8_t v_x_167_){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_168_ = l_Lake_Verbosity_ctorIdx(v_x_167_);
v___x_169_ = lean_obj_once(&l_Lake_BuildConfig_showProgress___closed__1, &l_Lake_BuildConfig_showProgress___closed__1_once, _init_l_Lake_BuildConfig_showProgress___closed__1);
v___x_170_ = lean_nat_dec_eq(v___x_168_, v___x_169_);
lean_dec(v___x_168_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsVerbose___redArg___lam__0___boxed(lean_object* v_x_171_){
_start:
{
uint8_t v_x_71__boxed_172_; uint8_t v_res_173_; lean_object* v_r_174_; 
v_x_71__boxed_172_ = lean_unbox(v_x_171_);
v_res_173_ = l_Lake_getIsVerbose___redArg___lam__0(v_x_71__boxed_172_);
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
lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_196_ = l_Lake_Verbosity_ctorIdx(v_x_195_);
v___x_197_ = lean_obj_once(&l_Lake_BuildConfig_showProgress___closed__0, &l_Lake_BuildConfig_showProgress___closed__0_once, _init_l_Lake_BuildConfig_showProgress___closed__0);
v___x_198_ = lean_nat_dec_eq(v___x_196_, v___x_197_);
lean_dec(v___x_196_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsQuiet___redArg___lam__0___boxed(lean_object* v_x_199_){
_start:
{
uint8_t v_x_71__boxed_200_; uint8_t v_res_201_; lean_object* v_r_202_; 
v_x_71__boxed_200_ = lean_unbox(v_x_199_);
v_res_201_ = l_Lake_getIsQuiet___redArg___lam__0(v_x_71__boxed_200_);
v_r_202_ = lean_box(v_res_201_);
return v_r_202_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsQuiet___redArg(lean_object* v_inst_204_, lean_object* v_inst_205_){
_start:
{
lean_object* v_map_206_; lean_object* v___f_207_; lean_object* v___f_208_; lean_object* v___f_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v_map_206_ = lean_ctor_get(v_inst_204_, 0);
lean_inc_n(v_map_206_, 3);
lean_dec_ref(v_inst_204_);
v___f_207_ = ((lean_object*)(l_Lake_getIsQuiet___redArg___closed__0));
v___f_208_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_209_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_210_ = lean_apply_4(v_map_206_, lean_box(0), lean_box(0), v___f_209_, v_inst_205_);
v___x_211_ = lean_apply_4(v_map_206_, lean_box(0), lean_box(0), v___f_208_, v___x_210_);
v___x_212_ = lean_apply_4(v_map_206_, lean_box(0), lean_box(0), v___f_207_, v___x_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsQuiet(lean_object* v_m_213_, lean_object* v_inst_214_, lean_object* v_inst_215_){
_start:
{
lean_object* v_map_216_; lean_object* v___f_217_; lean_object* v___f_218_; lean_object* v___f_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v_map_216_ = lean_ctor_get(v_inst_214_, 0);
lean_inc_n(v_map_216_, 3);
lean_dec_ref(v_inst_214_);
v___f_217_ = ((lean_object*)(l_Lake_getIsQuiet___redArg___closed__0));
v___f_218_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_219_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_220_ = lean_apply_4(v_map_216_, lean_box(0), lean_box(0), v___f_219_, v_inst_215_);
v___x_221_ = lean_apply_4(v_map_216_, lean_box(0), lean_box(0), v___f_218_, v___x_220_);
v___x_222_ = lean_apply_4(v_map_216_, lean_box(0), lean_box(0), v___f_217_, v___x_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides___redArg___lam__0(lean_object* v_x_223_){
_start:
{
lean_object* v_leanOptOverrides_224_; 
v_leanOptOverrides_224_ = lean_ctor_get(v_x_223_, 2);
lean_inc(v_leanOptOverrides_224_);
return v_leanOptOverrides_224_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides___redArg___lam__0___boxed(lean_object* v_x_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Lake_getLeanOptOverrides___redArg___lam__0(v_x_225_);
lean_dec_ref(v_x_225_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides___redArg(lean_object* v_inst_228_, lean_object* v_inst_229_){
_start:
{
lean_object* v_map_230_; lean_object* v___f_231_; lean_object* v___f_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v_map_230_ = lean_ctor_get(v_inst_228_, 0);
lean_inc_n(v_map_230_, 2);
lean_dec_ref(v_inst_228_);
v___f_231_ = ((lean_object*)(l_Lake_getLeanOptOverrides___redArg___closed__0));
v___f_232_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_233_ = lean_apply_4(v_map_230_, lean_box(0), lean_box(0), v___f_232_, v_inst_229_);
v___x_234_ = lean_apply_4(v_map_230_, lean_box(0), lean_box(0), v___f_231_, v___x_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides(lean_object* v_m_235_, lean_object* v_inst_236_, lean_object* v_inst_237_){
_start:
{
lean_object* v_map_238_; lean_object* v___f_239_; lean_object* v___f_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v_map_238_ = lean_ctor_get(v_inst_236_, 0);
lean_inc_n(v_map_238_, 2);
lean_dec_ref(v_inst_236_);
v___f_239_ = ((lean_object*)(l_Lake_getLeanOptOverrides___redArg___closed__0));
v___f_240_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_241_ = lean_apply_4(v_map_238_, lean_box(0), lean_box(0), v___f_240_, v_inst_237_);
v___x_242_ = lean_apply_4(v_map_238_, lean_box(0), lean_box(0), v___f_239_, v___x_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg___lam__0(lean_object* v_x_243_){
_start:
{
lean_object* v_macosxDeploymentTarget_x3f_244_; 
v_macosxDeploymentTarget_x3f_244_ = lean_ctor_get(v_x_243_, 3);
lean_inc(v_macosxDeploymentTarget_x3f_244_);
return v_macosxDeploymentTarget_x3f_244_;
}
}
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg___lam__0___boxed(lean_object* v_x_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lake_getMacOSXDeploymentTarget_x3f___redArg___lam__0(v_x_245_);
lean_dec_ref(v_x_245_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg(lean_object* v_inst_248_, lean_object* v_inst_249_){
_start:
{
lean_object* v_map_250_; lean_object* v___f_251_; lean_object* v___f_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v_map_250_ = lean_ctor_get(v_inst_248_, 0);
lean_inc_n(v_map_250_, 2);
lean_dec_ref(v_inst_248_);
v___f_251_ = ((lean_object*)(l_Lake_getMacOSXDeploymentTarget_x3f___redArg___closed__0));
v___f_252_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_253_ = lean_apply_4(v_map_250_, lean_box(0), lean_box(0), v___f_252_, v_inst_249_);
v___x_254_ = lean_apply_4(v_map_250_, lean_box(0), lean_box(0), v___f_251_, v___x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f(lean_object* v_m_255_, lean_object* v_inst_256_, lean_object* v_inst_257_){
_start:
{
lean_object* v_map_258_; lean_object* v___f_259_; lean_object* v___f_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v_map_258_ = lean_ctor_get(v_inst_256_, 0);
lean_inc_n(v_map_258_, 2);
lean_dec_ref(v_inst_256_);
v___f_259_ = ((lean_object*)(l_Lake_getMacOSXDeploymentTarget_x3f___redArg___closed__0));
v___f_260_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_261_ = lean_apply_4(v_map_258_, lean_box(0), lean_box(0), v___f_260_, v_inst_257_);
v___x_262_ = lean_apply_4(v_map_258_, lean_box(0), lean_box(0), v___f_259_, v___x_261_);
return v___x_262_;
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
