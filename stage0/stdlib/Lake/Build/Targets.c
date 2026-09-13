// Lean compiler output
// Module: Lake.Build.Targets
// Imports: public import Lake.Config.Monad public import Lake.Config.InputFile import Lake.Build.Infos
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
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_Module_keyword;
extern lean_object* l_Lake_LeanLib_defaultFacet;
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanExe_keyword;
extern lean_object* l_Lake_LeanExe_exeFacet;
extern lean_object* l_Lake_Package_keyword;
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
extern lean_object* l_Lake_InputDir_defaultFacet;
extern lean_object* l_Lake_InputDir_keyword;
extern lean_object* l_Lake_InputFile_defaultFacet;
extern lean_object* l_Lake_InputFile_keyword;
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__0___boxed(lean_object*);
static const lean_string_object l_Lake_KConfigDecl_get___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "package of target '"};
static const lean_object* l_Lake_KConfigDecl_get___redArg___lam__1___closed__0 = (const lean_object*)&l_Lake_KConfigDecl_get___redArg___lam__1___closed__0_value;
static const lean_string_object l_Lake_KConfigDecl_get___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lake_KConfigDecl_get___redArg___lam__1___closed__1 = (const lean_object*)&l_Lake_KConfigDecl_get___redArg___lam__1___closed__1_value;
static const lean_string_object l_Lake_KConfigDecl_get___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "' not found in workspace"};
static const lean_object* l_Lake_KConfigDecl_get___redArg___lam__1___closed__2 = (const lean_object*)&l_Lake_KConfigDecl_get___redArg___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_KConfigDecl_get___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_KConfigDecl_get___redArg___lam__2___closed__0 = (const lean_object*)&l_Lake_KConfigDecl_get___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lake_KConfigDecl_get___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_KConfigDecl_get___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_KConfigDecl_get___redArg___closed__0 = (const lean_object*)&l_Lake_KConfigDecl_get___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_fetchTargetJob(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_fetchTargetJob___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_TargetDecl_fetch___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "package '"};
static const lean_object* l_Lake_TargetDecl_fetch___redArg___closed__0 = (const lean_object*)&l_Lake_TargetDecl_fetch___redArg___closed__0_value;
static const lean_string_object l_Lake_TargetDecl_fetch___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "' of target '"};
static const lean_object* l_Lake_TargetDecl_fetch___redArg___closed__1 = (const lean_object*)&l_Lake_TargetDecl_fetch___redArg___closed__1_value;
static const lean_string_object l_Lake_TargetDecl_fetch___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "' does not exist in workspace"};
static const lean_object* l_Lake_TargetDecl_fetch___redArg___closed__2 = (const lean_object*)&l_Lake_TargetDecl_fetch___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetchJob(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetchJob___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_fetchFacetJob(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_fetchFacetJob___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_fetchFacetJob(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_fetchFacetJob___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_LeanLib_fetch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l_Lake_LeanLib_fetch___closed__0 = (const lean_object*)&l_Lake_LeanLib_fetch___closed__0_value;
static const lean_ctor_object l_Lake_LeanLib_fetch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_LeanLib_fetch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 123, 8, 14, 20, 41, 164, 170)}};
static const lean_object* l_Lake_LeanLib_fetch___closed__1 = (const lean_object*)&l_Lake_LeanLib_fetch___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetchFacetJob(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetchFacetJob___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputFile_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputFile_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputDir_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputDir_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__0(lean_object* v_x_1_){
_start:
{
lean_inc(v_x_1_);
return v_x_1_;
}
}
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__0___boxed(lean_object* v_x_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l_Lake_KConfigDecl_get___redArg___lam__0(v_x_2_);
lean_dec(v_x_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__1(lean_object* v_name_7_, lean_object* v_config_8_, lean_object* v_toPure_9_, lean_object* v_pkg_10_, lean_object* v_inst_11_, lean_object* v_____x_12_){
_start:
{
if (lean_obj_tag(v_____x_12_) == 1)
{
lean_object* v_val_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
lean_dec(v_inst_11_);
lean_dec(v_pkg_10_);
v_val_13_ = lean_ctor_get(v_____x_12_, 0);
lean_inc(v_val_13_);
v___x_14_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_14_, 0, v_val_13_);
lean_ctor_set(v___x_14_, 1, v_name_7_);
lean_ctor_set(v___x_14_, 2, v_config_8_);
v___x_15_ = lean_apply_2(v_toPure_9_, lean_box(0), v___x_14_);
return v___x_15_;
}
else
{
lean_object* v___x_16_; uint8_t v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
lean_dec(v_toPure_9_);
lean_dec(v_config_8_);
v___x_16_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__0));
v___x_17_ = 1;
v___x_18_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_10_, v___x_17_);
v___x_19_ = lean_string_append(v___x_16_, v___x_18_);
lean_dec_ref(v___x_18_);
v___x_20_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__1));
v___x_21_ = lean_string_append(v___x_19_, v___x_20_);
v___x_22_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_7_, v___x_17_);
v___x_23_ = lean_string_append(v___x_21_, v___x_22_);
lean_dec_ref(v___x_22_);
v___x_24_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__2));
v___x_25_ = lean_string_append(v___x_23_, v___x_24_);
v___x_26_ = lean_apply_2(v_inst_11_, lean_box(0), v___x_25_);
return v___x_26_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__1___boxed(lean_object* v_name_27_, lean_object* v_config_28_, lean_object* v_toPure_29_, lean_object* v_pkg_30_, lean_object* v_inst_31_, lean_object* v_____x_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lake_KConfigDecl_get___redArg___lam__1(v_name_27_, v_config_28_, v_toPure_29_, v_pkg_30_, v_inst_31_, v_____x_32_);
lean_dec(v_____x_32_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg___lam__2(lean_object* v_pkg_35_, lean_object* v_x_36_){
_start:
{
lean_object* v_packageMap_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v_packageMap_37_ = lean_ctor_get(v_x_36_, 5);
lean_inc(v_packageMap_37_);
lean_dec_ref(v_x_36_);
v___x_38_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__2___closed__0));
v___x_39_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_38_, v_packageMap_37_, v_pkg_35_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___redArg(lean_object* v_inst_41_, lean_object* v_inst_42_, lean_object* v_inst_43_, lean_object* v_self_44_){
_start:
{
lean_object* v_toApplicative_45_; lean_object* v_toFunctor_46_; lean_object* v_toBind_47_; lean_object* v_toPure_48_; lean_object* v_pkg_49_; lean_object* v_name_50_; lean_object* v_config_51_; lean_object* v_map_52_; lean_object* v___f_53_; lean_object* v___f_54_; lean_object* v___f_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v_toApplicative_45_ = lean_ctor_get(v_inst_41_, 0);
lean_inc_ref(v_toApplicative_45_);
v_toFunctor_46_ = lean_ctor_get(v_toApplicative_45_, 0);
lean_inc_ref(v_toFunctor_46_);
v_toBind_47_ = lean_ctor_get(v_inst_41_, 1);
lean_inc(v_toBind_47_);
lean_dec_ref(v_inst_41_);
v_toPure_48_ = lean_ctor_get(v_toApplicative_45_, 1);
lean_inc(v_toPure_48_);
lean_dec_ref(v_toApplicative_45_);
v_pkg_49_ = lean_ctor_get(v_self_44_, 0);
lean_inc_n(v_pkg_49_, 2);
v_name_50_ = lean_ctor_get(v_self_44_, 1);
lean_inc(v_name_50_);
v_config_51_ = lean_ctor_get(v_self_44_, 3);
lean_inc(v_config_51_);
lean_dec_ref(v_self_44_);
v_map_52_ = lean_ctor_get(v_toFunctor_46_, 0);
lean_inc_n(v_map_52_, 2);
lean_dec_ref(v_toFunctor_46_);
v___f_53_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_54_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_54_, 0, v_name_50_);
lean_closure_set(v___f_54_, 1, v_config_51_);
lean_closure_set(v___f_54_, 2, v_toPure_48_);
lean_closure_set(v___f_54_, 3, v_pkg_49_);
lean_closure_set(v___f_54_, 4, v_inst_42_);
v___f_55_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__2), 2, 1);
lean_closure_set(v___f_55_, 0, v_pkg_49_);
v___x_56_ = lean_apply_4(v_map_52_, lean_box(0), lean_box(0), v___f_53_, v_inst_43_);
v___x_57_ = lean_apply_4(v_map_52_, lean_box(0), lean_box(0), v___f_55_, v___x_56_);
v___x_58_ = lean_apply_4(v_toBind_47_, lean_box(0), lean_box(0), v___x_57_, v___f_54_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get(lean_object* v_m_59_, lean_object* v_kind_60_, lean_object* v_inst_61_, lean_object* v_inst_62_, lean_object* v_inst_63_, lean_object* v_self_64_){
_start:
{
lean_object* v_toApplicative_65_; lean_object* v_toFunctor_66_; lean_object* v_toBind_67_; lean_object* v_toPure_68_; lean_object* v_pkg_69_; lean_object* v_name_70_; lean_object* v_config_71_; lean_object* v_map_72_; lean_object* v___f_73_; lean_object* v___f_74_; lean_object* v___f_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v_toApplicative_65_ = lean_ctor_get(v_inst_61_, 0);
lean_inc_ref(v_toApplicative_65_);
v_toFunctor_66_ = lean_ctor_get(v_toApplicative_65_, 0);
lean_inc_ref(v_toFunctor_66_);
v_toBind_67_ = lean_ctor_get(v_inst_61_, 1);
lean_inc(v_toBind_67_);
lean_dec_ref(v_inst_61_);
v_toPure_68_ = lean_ctor_get(v_toApplicative_65_, 1);
lean_inc(v_toPure_68_);
lean_dec_ref(v_toApplicative_65_);
v_pkg_69_ = lean_ctor_get(v_self_64_, 0);
lean_inc_n(v_pkg_69_, 2);
v_name_70_ = lean_ctor_get(v_self_64_, 1);
lean_inc(v_name_70_);
v_config_71_ = lean_ctor_get(v_self_64_, 3);
lean_inc(v_config_71_);
lean_dec_ref(v_self_64_);
v_map_72_ = lean_ctor_get(v_toFunctor_66_, 0);
lean_inc_n(v_map_72_, 2);
lean_dec_ref(v_toFunctor_66_);
v___f_73_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_74_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_74_, 0, v_name_70_);
lean_closure_set(v___f_74_, 1, v_config_71_);
lean_closure_set(v___f_74_, 2, v_toPure_68_);
lean_closure_set(v___f_74_, 3, v_pkg_69_);
lean_closure_set(v___f_74_, 4, v_inst_62_);
v___f_75_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__2), 2, 1);
lean_closure_set(v___f_75_, 0, v_pkg_69_);
v___x_76_ = lean_apply_4(v_map_72_, lean_box(0), lean_box(0), v___f_73_, v_inst_63_);
v___x_77_ = lean_apply_4(v_map_72_, lean_box(0), lean_box(0), v___f_75_, v___x_76_);
v___x_78_ = lean_apply_4(v_toBind_67_, lean_box(0), lean_box(0), v___x_77_, v___f_74_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lake_KConfigDecl_get___boxed(lean_object* v_m_79_, lean_object* v_kind_80_, lean_object* v_inst_81_, lean_object* v_inst_82_, lean_object* v_inst_83_, lean_object* v_self_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lake_KConfigDecl_get(v_m_79_, v_kind_80_, v_inst_81_, v_inst_82_, v_inst_83_, v_self_84_);
lean_dec(v_kind_80_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_fetchTargetJob(lean_object* v_self_86_, lean_object* v_target_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_95_, 0, v_self_86_);
lean_ctor_set(v___x_95_, 1, v_target_87_);
lean_inc_ref(v_a_92_);
lean_inc(v_a_91_);
lean_inc(v_a_90_);
lean_inc(v_a_89_);
v___x_96_ = lean_apply_7(v_a_88_, v___x_95_, v_a_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_, lean_box(0));
if (lean_obj_tag(v___x_96_) == 0)
{
lean_object* v_a_97_; lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_106_; 
v_a_97_ = lean_ctor_get(v___x_96_, 0);
v_a_98_ = lean_ctor_get(v___x_96_, 1);
v_isSharedCheck_106_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_106_ == 0)
{
v___x_100_ = v___x_96_;
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_inc(v_a_97_);
lean_dec(v___x_96_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_102_; lean_object* v___x_104_; 
v___x_102_ = l_Lake_Job_toOpaque___redArg(v_a_97_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 0, v___x_102_);
v___x_104_ = v___x_100_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v___x_102_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v_a_98_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
return v___x_104_;
}
}
}
else
{
lean_object* v_a_107_; lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_115_; 
v_a_107_ = lean_ctor_get(v___x_96_, 0);
v_a_108_ = lean_ctor_get(v___x_96_, 1);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_115_ == 0)
{
v___x_110_ = v___x_96_;
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_inc(v_a_107_);
lean_dec(v___x_96_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_113_; 
if (v_isShared_111_ == 0)
{
v___x_113_ = v___x_110_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v_a_107_);
lean_ctor_set(v_reuseFailAlloc_114_, 1, v_a_108_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_fetchTargetJob___boxed(lean_object* v_self_116_, lean_object* v_target_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lake_Package_fetchTargetJob(v_self_116_, v_target_117_, v_a_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, v_a_123_);
lean_dec_ref(v_a_122_);
lean_dec(v_a_121_);
lean_dec(v_a_120_);
lean_dec(v_a_119_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch___redArg(lean_object* v_self_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_){
_start:
{
lean_object* v_toContext_137_; lean_object* v_pkg_138_; lean_object* v_name_139_; lean_object* v_packageMap_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v_toContext_137_ = lean_ctor_get(v_a_134_, 1);
v_pkg_138_ = lean_ctor_get(v_self_129_, 0);
lean_inc_n(v_pkg_138_, 2);
v_name_139_ = lean_ctor_get(v_self_129_, 1);
lean_inc(v_name_139_);
lean_dec_ref(v_self_129_);
v_packageMap_140_ = lean_ctor_get(v_toContext_137_, 5);
v___x_141_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__2___closed__0));
lean_inc(v_packageMap_140_);
v___x_142_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_141_, v_packageMap_140_, v_pkg_138_);
if (lean_obj_tag(v___x_142_) == 1)
{
lean_object* v_val_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
lean_dec(v_pkg_138_);
v_val_143_ = lean_ctor_get(v___x_142_, 0);
lean_inc(v_val_143_);
lean_dec_ref_known(v___x_142_, 1);
v___x_144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_144_, 0, v_val_143_);
lean_ctor_set(v___x_144_, 1, v_name_139_);
lean_inc_ref(v_a_134_);
lean_inc(v_a_133_);
lean_inc(v_a_132_);
lean_inc(v_a_131_);
v___x_145_ = lean_apply_7(v_a_130_, v___x_144_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, lean_box(0));
return v___x_145_;
}
else
{
lean_object* v___x_146_; uint8_t v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
lean_dec(v___x_142_);
lean_dec_ref(v_a_130_);
v___x_146_ = ((lean_object*)(l_Lake_TargetDecl_fetch___redArg___closed__0));
v___x_147_ = 1;
v___x_148_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_138_, v___x_147_);
v___x_149_ = lean_string_append(v___x_146_, v___x_148_);
lean_dec_ref(v___x_148_);
v___x_150_ = ((lean_object*)(l_Lake_TargetDecl_fetch___redArg___closed__1));
v___x_151_ = lean_string_append(v___x_149_, v___x_150_);
v___x_152_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_139_, v___x_147_);
v___x_153_ = lean_string_append(v___x_151_, v___x_152_);
lean_dec_ref(v___x_152_);
v___x_154_ = ((lean_object*)(l_Lake_TargetDecl_fetch___redArg___closed__2));
v___x_155_ = lean_string_append(v___x_153_, v___x_154_);
v___x_156_ = 3;
v___x_157_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_157_, 0, v___x_155_);
lean_ctor_set_uint8(v___x_157_, sizeof(void*)*1, v___x_156_);
v___x_158_ = lean_array_get_size(v_a_135_);
v___x_159_ = lean_array_push(v_a_135_, v___x_157_);
v___x_160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_158_);
lean_ctor_set(v___x_160_, 1, v___x_159_);
return v___x_160_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch___redArg___boxed(lean_object* v_self_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lake_TargetDecl_fetch___redArg(v_self_161_, v_a_162_, v_a_163_, v_a_164_, v_a_165_, v_a_166_, v_a_167_);
lean_dec_ref(v_a_166_);
lean_dec(v_a_165_);
lean_dec(v_a_164_);
lean_dec(v_a_163_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch(lean_object* v_00_u03b1_170_, lean_object* v_self_171_, lean_object* v_inst_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = l_Lake_TargetDecl_fetch___redArg(v_self_171_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_, v_a_178_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetch___boxed(lean_object* v_00_u03b1_181_, lean_object* v_self_182_, lean_object* v_inst_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l_Lake_TargetDecl_fetch(v_00_u03b1_181_, v_self_182_, v_inst_183_, v_a_184_, v_a_185_, v_a_186_, v_a_187_, v_a_188_, v_a_189_);
lean_dec_ref(v_a_188_);
lean_dec(v_a_187_);
lean_dec(v_a_186_);
lean_dec(v_a_185_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___redArg(lean_object* v_t_192_, lean_object* v_k_193_){
_start:
{
if (lean_obj_tag(v_t_192_) == 0)
{
lean_object* v_k_194_; lean_object* v_v_195_; lean_object* v_l_196_; lean_object* v_r_197_; uint8_t v___x_198_; 
v_k_194_ = lean_ctor_get(v_t_192_, 1);
v_v_195_ = lean_ctor_get(v_t_192_, 2);
v_l_196_ = lean_ctor_get(v_t_192_, 3);
v_r_197_ = lean_ctor_get(v_t_192_, 4);
v___x_198_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_193_, v_k_194_);
switch(v___x_198_)
{
case 0:
{
v_t_192_ = v_l_196_;
goto _start;
}
case 1:
{
lean_object* v___x_200_; 
lean_inc(v_v_195_);
v___x_200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_200_, 0, v_v_195_);
return v___x_200_;
}
default: 
{
v_t_192_ = v_r_197_;
goto _start;
}
}
}
else
{
lean_object* v___x_202_; 
v___x_202_ = lean_box(0);
return v___x_202_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___redArg___boxed(lean_object* v_t_203_, lean_object* v_k_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___redArg(v_t_203_, v_k_204_);
lean_dec(v_k_204_);
lean_dec(v_t_203_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetchJob(lean_object* v_self_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_){
_start:
{
lean_object* v_toContext_214_; lean_object* v_pkg_215_; lean_object* v_name_216_; lean_object* v_packageMap_217_; lean_object* v___x_218_; 
v_toContext_214_ = lean_ctor_get(v_a_211_, 1);
v_pkg_215_ = lean_ctor_get(v_self_206_, 0);
lean_inc(v_pkg_215_);
v_name_216_ = lean_ctor_get(v_self_206_, 1);
lean_inc(v_name_216_);
lean_dec_ref(v_self_206_);
v_packageMap_217_ = lean_ctor_get(v_toContext_214_, 5);
v___x_218_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___redArg(v_packageMap_217_, v_pkg_215_);
if (lean_obj_tag(v___x_218_) == 1)
{
lean_object* v_val_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
lean_dec(v_pkg_215_);
v_val_219_ = lean_ctor_get(v___x_218_, 0);
lean_inc(v_val_219_);
lean_dec_ref_known(v___x_218_, 1);
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v_val_219_);
lean_ctor_set(v___x_220_, 1, v_name_216_);
lean_inc_ref(v_a_211_);
lean_inc(v_a_210_);
lean_inc(v_a_209_);
lean_inc(v_a_208_);
v___x_221_ = lean_apply_7(v_a_207_, v___x_220_, v_a_208_, v_a_209_, v_a_210_, v_a_211_, v_a_212_, lean_box(0));
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v_a_222_; lean_object* v_a_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_231_; 
v_a_222_ = lean_ctor_get(v___x_221_, 0);
v_a_223_ = lean_ctor_get(v___x_221_, 1);
v_isSharedCheck_231_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_231_ == 0)
{
v___x_225_ = v___x_221_;
v_isShared_226_ = v_isSharedCheck_231_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_a_223_);
lean_inc(v_a_222_);
lean_dec(v___x_221_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_231_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v___x_227_; lean_object* v___x_229_; 
v___x_227_ = l_Lake_Job_toOpaque___redArg(v_a_222_);
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 0, v___x_227_);
v___x_229_ = v___x_225_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v___x_227_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v_a_223_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
}
else
{
lean_object* v_a_232_; lean_object* v_a_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_240_; 
v_a_232_ = lean_ctor_get(v___x_221_, 0);
v_a_233_ = lean_ctor_get(v___x_221_, 1);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_240_ == 0)
{
v___x_235_ = v___x_221_;
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_a_233_);
lean_inc(v_a_232_);
lean_dec(v___x_221_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_a_232_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v_a_233_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
else
{
lean_object* v___x_241_; uint8_t v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
lean_dec(v___x_218_);
lean_dec_ref(v_a_207_);
v___x_241_ = ((lean_object*)(l_Lake_TargetDecl_fetch___redArg___closed__0));
v___x_242_ = 1;
v___x_243_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_215_, v___x_242_);
v___x_244_ = lean_string_append(v___x_241_, v___x_243_);
lean_dec_ref(v___x_243_);
v___x_245_ = ((lean_object*)(l_Lake_TargetDecl_fetch___redArg___closed__1));
v___x_246_ = lean_string_append(v___x_244_, v___x_245_);
v___x_247_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_216_, v___x_242_);
v___x_248_ = lean_string_append(v___x_246_, v___x_247_);
lean_dec_ref(v___x_247_);
v___x_249_ = ((lean_object*)(l_Lake_TargetDecl_fetch___redArg___closed__2));
v___x_250_ = lean_string_append(v___x_248_, v___x_249_);
v___x_251_ = 3;
v___x_252_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_252_, 0, v___x_250_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*1, v___x_251_);
v___x_253_ = lean_array_get_size(v_a_212_);
v___x_254_ = lean_array_push(v_a_212_, v___x_252_);
v___x_255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_253_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
return v___x_255_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_TargetDecl_fetchJob___boxed(lean_object* v_self_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lake_TargetDecl_fetchJob(v_self_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_, v_a_261_, v_a_262_);
lean_dec_ref(v_a_261_);
lean_dec(v_a_260_);
lean_dec(v_a_259_);
lean_dec(v_a_258_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0(lean_object* v_00_u03b2_265_, lean_object* v_inst_266_, lean_object* v_t_267_, lean_object* v_k_268_){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___redArg(v_t_267_, v_k_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0___boxed(lean_object* v_00_u03b2_270_, lean_object* v_inst_271_, lean_object* v_t_272_, lean_object* v_k_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00Lake_TargetDecl_fetchJob_spec__0(v_00_u03b2_270_, v_inst_271_, v_t_272_, v_k_273_);
lean_dec(v_k_273_);
lean_dec(v_t_272_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch___redArg(lean_object* v_pkg_275_, lean_object* v_self_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_){
_start:
{
lean_object* v_name_284_; lean_object* v_keyName_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v_name_284_ = lean_ctor_get(v_self_276_, 0);
v_keyName_285_ = lean_ctor_get(v_pkg_275_, 2);
lean_inc(v_keyName_285_);
v___x_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_286_, 0, v_keyName_285_);
v___x_287_ = l_Lake_Package_keyword;
lean_inc(v_name_284_);
v___x_288_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_288_, 0, v___x_286_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
lean_ctor_set(v___x_288_, 2, v_pkg_275_);
lean_ctor_set(v___x_288_, 3, v_name_284_);
lean_inc_ref(v_a_281_);
lean_inc(v_a_280_);
lean_inc(v_a_279_);
lean_inc(v_a_278_);
v___x_289_ = lean_apply_7(v_a_277_, v___x_288_, v_a_278_, v_a_279_, v_a_280_, v_a_281_, v_a_282_, lean_box(0));
return v___x_289_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch___redArg___boxed(lean_object* v_pkg_290_, lean_object* v_self_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Lake_PackageFacetDecl_fetch___redArg(v_pkg_290_, v_self_291_, v_a_292_, v_a_293_, v_a_294_, v_a_295_, v_a_296_, v_a_297_);
lean_dec_ref(v_a_296_);
lean_dec(v_a_295_);
lean_dec(v_a_294_);
lean_dec(v_a_293_);
lean_dec_ref(v_self_291_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch(lean_object* v_00_u03b1_300_, lean_object* v_pkg_301_, lean_object* v_self_302_, lean_object* v_inst_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_){
_start:
{
lean_object* v_name_311_; lean_object* v_keyName_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v_name_311_ = lean_ctor_get(v_self_302_, 0);
v_keyName_312_ = lean_ctor_get(v_pkg_301_, 2);
lean_inc(v_keyName_312_);
v___x_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_313_, 0, v_keyName_312_);
v___x_314_ = l_Lake_Package_keyword;
lean_inc(v_name_311_);
v___x_315_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_315_, 0, v___x_313_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
lean_ctor_set(v___x_315_, 2, v_pkg_301_);
lean_ctor_set(v___x_315_, 3, v_name_311_);
lean_inc_ref(v_a_308_);
lean_inc(v_a_307_);
lean_inc(v_a_306_);
lean_inc(v_a_305_);
v___x_316_ = lean_apply_7(v_a_304_, v___x_315_, v_a_305_, v_a_306_, v_a_307_, v_a_308_, v_a_309_, lean_box(0));
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageFacetDecl_fetch___boxed(lean_object* v_00_u03b1_317_, lean_object* v_pkg_318_, lean_object* v_self_319_, lean_object* v_inst_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lake_PackageFacetDecl_fetch(v_00_u03b1_317_, v_pkg_318_, v_self_319_, v_inst_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
lean_dec_ref(v_a_325_);
lean_dec(v_a_324_);
lean_dec(v_a_323_);
lean_dec(v_a_322_);
lean_dec_ref(v_self_319_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_fetchFacetJob(lean_object* v_name_329_, lean_object* v_self_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_keyName_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v_keyName_338_ = lean_ctor_get(v_self_330_, 2);
v___x_339_ = l_Lake_Package_keyword;
v___x_340_ = l_Lean_Name_append(v___x_339_, v_name_329_);
lean_inc(v_keyName_338_);
v___x_341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_341_, 0, v_keyName_338_);
v___x_342_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
lean_ctor_set(v___x_342_, 1, v___x_339_);
lean_ctor_set(v___x_342_, 2, v_self_330_);
lean_ctor_set(v___x_342_, 3, v___x_340_);
lean_inc_ref(v_a_335_);
lean_inc(v_a_334_);
lean_inc(v_a_333_);
lean_inc(v_a_332_);
v___x_343_ = lean_apply_7(v_a_331_, v___x_342_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_, lean_box(0));
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_353_; 
v_a_344_ = lean_ctor_get(v___x_343_, 0);
v_a_345_ = lean_ctor_get(v___x_343_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_353_ == 0)
{
v___x_347_ = v___x_343_;
v_isShared_348_ = v_isSharedCheck_353_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_inc(v_a_344_);
lean_dec(v___x_343_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_353_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_349_; lean_object* v___x_351_; 
v___x_349_ = l_Lake_Job_toOpaque___redArg(v_a_344_);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 0, v___x_349_);
v___x_351_ = v___x_347_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v___x_349_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v_a_345_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
else
{
lean_object* v_a_354_; lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_362_; 
v_a_354_ = lean_ctor_get(v___x_343_, 0);
v_a_355_ = lean_ctor_get(v___x_343_, 1);
v_isSharedCheck_362_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_362_ == 0)
{
v___x_357_ = v___x_343_;
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_inc(v_a_354_);
lean_dec(v___x_343_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_360_; 
if (v_isShared_358_ == 0)
{
v___x_360_ = v___x_357_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_a_354_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v_a_355_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_fetchFacetJob___boxed(lean_object* v_name_363_, lean_object* v_self_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lake_Package_fetchFacetJob(v_name_363_, v_self_364_, v_a_365_, v_a_366_, v_a_367_, v_a_368_, v_a_369_, v_a_370_);
lean_dec_ref(v_a_369_);
lean_dec(v_a_368_);
lean_dec(v_a_367_);
lean_dec(v_a_366_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch___redArg(lean_object* v_mod_373_, lean_object* v_self_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_){
_start:
{
lean_object* v_lib_382_; lean_object* v_pkg_383_; lean_object* v_name_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_396_; 
v_lib_382_ = lean_ctor_get(v_mod_373_, 0);
v_pkg_383_ = lean_ctor_get(v_lib_382_, 0);
v_name_384_ = lean_ctor_get(v_self_374_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v_self_374_);
if (v_isSharedCheck_396_ == 0)
{
lean_object* v_unused_397_; 
v_unused_397_ = lean_ctor_get(v_self_374_, 1);
lean_dec(v_unused_397_);
v___x_386_ = v_self_374_;
v_isShared_387_ = v_isSharedCheck_396_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_name_384_);
lean_dec(v_self_374_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_396_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v_name_388_; lean_object* v_keyName_389_; lean_object* v___x_391_; 
v_name_388_ = lean_ctor_get(v_mod_373_, 1);
v_keyName_389_ = lean_ctor_get(v_pkg_383_, 2);
lean_inc(v_name_388_);
lean_inc(v_keyName_389_);
if (v_isShared_387_ == 0)
{
lean_ctor_set_tag(v___x_386_, 2);
lean_ctor_set(v___x_386_, 1, v_name_388_);
lean_ctor_set(v___x_386_, 0, v_keyName_389_);
v___x_391_ = v___x_386_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_keyName_389_);
lean_ctor_set(v_reuseFailAlloc_395_, 1, v_name_388_);
v___x_391_ = v_reuseFailAlloc_395_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_392_ = l_Lake_Module_keyword;
v___x_393_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_393_, 0, v___x_391_);
lean_ctor_set(v___x_393_, 1, v___x_392_);
lean_ctor_set(v___x_393_, 2, v_mod_373_);
lean_ctor_set(v___x_393_, 3, v_name_384_);
lean_inc_ref(v_a_379_);
lean_inc(v_a_378_);
lean_inc(v_a_377_);
lean_inc(v_a_376_);
v___x_394_ = lean_apply_7(v_a_375_, v___x_393_, v_a_376_, v_a_377_, v_a_378_, v_a_379_, v_a_380_, lean_box(0));
return v___x_394_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch___redArg___boxed(lean_object* v_mod_398_, lean_object* v_self_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Lake_ModuleFacetDecl_fetch___redArg(v_mod_398_, v_self_399_, v_a_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_);
lean_dec_ref(v_a_404_);
lean_dec(v_a_403_);
lean_dec(v_a_402_);
lean_dec(v_a_401_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch(lean_object* v_00_u03b1_408_, lean_object* v_mod_409_, lean_object* v_self_410_, lean_object* v_inst_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_){
_start:
{
lean_object* v_lib_419_; lean_object* v_pkg_420_; lean_object* v_name_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_433_; 
v_lib_419_ = lean_ctor_get(v_mod_409_, 0);
v_pkg_420_ = lean_ctor_get(v_lib_419_, 0);
v_name_421_ = lean_ctor_get(v_self_410_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v_self_410_);
if (v_isSharedCheck_433_ == 0)
{
lean_object* v_unused_434_; 
v_unused_434_ = lean_ctor_get(v_self_410_, 1);
lean_dec(v_unused_434_);
v___x_423_ = v_self_410_;
v_isShared_424_ = v_isSharedCheck_433_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_name_421_);
lean_dec(v_self_410_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_433_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v_name_425_; lean_object* v_keyName_426_; lean_object* v___x_428_; 
v_name_425_ = lean_ctor_get(v_mod_409_, 1);
v_keyName_426_ = lean_ctor_get(v_pkg_420_, 2);
lean_inc(v_name_425_);
lean_inc(v_keyName_426_);
if (v_isShared_424_ == 0)
{
lean_ctor_set_tag(v___x_423_, 2);
lean_ctor_set(v___x_423_, 1, v_name_425_);
lean_ctor_set(v___x_423_, 0, v_keyName_426_);
v___x_428_ = v___x_423_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_keyName_426_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v_name_425_);
v___x_428_ = v_reuseFailAlloc_432_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_429_ = l_Lake_Module_keyword;
v___x_430_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_430_, 0, v___x_428_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
lean_ctor_set(v___x_430_, 2, v_mod_409_);
lean_ctor_set(v___x_430_, 3, v_name_421_);
lean_inc_ref(v_a_416_);
lean_inc(v_a_415_);
lean_inc(v_a_414_);
lean_inc(v_a_413_);
v___x_431_ = lean_apply_7(v_a_412_, v___x_430_, v_a_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, lean_box(0));
return v___x_431_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleFacetDecl_fetch___boxed(lean_object* v_00_u03b1_435_, lean_object* v_mod_436_, lean_object* v_self_437_, lean_object* v_inst_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Lake_ModuleFacetDecl_fetch(v_00_u03b1_435_, v_mod_436_, v_self_437_, v_inst_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_, v_a_443_, v_a_444_);
lean_dec_ref(v_a_443_);
lean_dec(v_a_442_);
lean_dec(v_a_441_);
lean_dec(v_a_440_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_fetchFacetJob(lean_object* v_name_447_, lean_object* v_self_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_){
_start:
{
lean_object* v_lib_456_; lean_object* v_pkg_457_; lean_object* v_name_458_; lean_object* v_keyName_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v_lib_456_ = lean_ctor_get(v_self_448_, 0);
v_pkg_457_ = lean_ctor_get(v_lib_456_, 0);
v_name_458_ = lean_ctor_get(v_self_448_, 1);
v_keyName_459_ = lean_ctor_get(v_pkg_457_, 2);
v___x_460_ = l_Lake_Module_keyword;
v___x_461_ = l_Lean_Name_append(v___x_460_, v_name_447_);
lean_inc(v_name_458_);
lean_inc(v_keyName_459_);
v___x_462_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_462_, 0, v_keyName_459_);
lean_ctor_set(v___x_462_, 1, v_name_458_);
v___x_463_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
lean_ctor_set(v___x_463_, 1, v___x_460_);
lean_ctor_set(v___x_463_, 2, v_self_448_);
lean_ctor_set(v___x_463_, 3, v___x_461_);
lean_inc_ref(v_a_453_);
lean_inc(v_a_452_);
lean_inc(v_a_451_);
lean_inc(v_a_450_);
v___x_464_ = lean_apply_7(v_a_449_, v___x_463_, v_a_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, lean_box(0));
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; lean_object* v_a_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_474_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
v_a_466_ = lean_ctor_get(v___x_464_, 1);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_474_ == 0)
{
v___x_468_ = v___x_464_;
v_isShared_469_ = v_isSharedCheck_474_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_a_466_);
lean_inc(v_a_465_);
lean_dec(v___x_464_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_474_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_470_; lean_object* v___x_472_; 
v___x_470_ = l_Lake_Job_toOpaque___redArg(v_a_465_);
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 0, v___x_470_);
v___x_472_ = v___x_468_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v___x_470_);
lean_ctor_set(v_reuseFailAlloc_473_, 1, v_a_466_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
else
{
lean_object* v_a_475_; lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_483_; 
v_a_475_ = lean_ctor_get(v___x_464_, 0);
v_a_476_ = lean_ctor_get(v___x_464_, 1);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_483_ == 0)
{
v___x_478_ = v___x_464_;
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_inc(v_a_475_);
lean_dec(v___x_464_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_481_; 
if (v_isShared_479_ == 0)
{
v___x_481_ = v___x_478_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_a_475_);
lean_ctor_set(v_reuseFailAlloc_482_, 1, v_a_476_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_fetchFacetJob___boxed(lean_object* v_name_484_, lean_object* v_self_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l_Lake_Module_fetchFacetJob(v_name_484_, v_self_485_, v_a_486_, v_a_487_, v_a_488_, v_a_489_, v_a_490_, v_a_491_);
lean_dec_ref(v_a_490_);
lean_dec(v_a_489_);
lean_dec(v_a_488_);
lean_dec(v_a_487_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_get___redArg(lean_object* v_self_494_, lean_object* v_inst_495_, lean_object* v_inst_496_, lean_object* v_inst_497_){
_start:
{
lean_object* v_toApplicative_498_; lean_object* v_toFunctor_499_; lean_object* v_toBind_500_; lean_object* v_toPure_501_; lean_object* v_pkg_502_; lean_object* v_name_503_; lean_object* v_config_504_; lean_object* v_map_505_; lean_object* v___f_506_; lean_object* v___f_507_; lean_object* v___f_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v_toApplicative_498_ = lean_ctor_get(v_inst_495_, 0);
lean_inc_ref(v_toApplicative_498_);
v_toFunctor_499_ = lean_ctor_get(v_toApplicative_498_, 0);
lean_inc_ref(v_toFunctor_499_);
v_toBind_500_ = lean_ctor_get(v_inst_495_, 1);
lean_inc(v_toBind_500_);
lean_dec_ref(v_inst_495_);
v_toPure_501_ = lean_ctor_get(v_toApplicative_498_, 1);
lean_inc(v_toPure_501_);
lean_dec_ref(v_toApplicative_498_);
v_pkg_502_ = lean_ctor_get(v_self_494_, 0);
lean_inc_n(v_pkg_502_, 2);
v_name_503_ = lean_ctor_get(v_self_494_, 1);
lean_inc(v_name_503_);
v_config_504_ = lean_ctor_get(v_self_494_, 3);
lean_inc(v_config_504_);
lean_dec_ref(v_self_494_);
v_map_505_ = lean_ctor_get(v_toFunctor_499_, 0);
lean_inc_n(v_map_505_, 2);
lean_dec_ref(v_toFunctor_499_);
v___f_506_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_507_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_507_, 0, v_name_503_);
lean_closure_set(v___f_507_, 1, v_config_504_);
lean_closure_set(v___f_507_, 2, v_toPure_501_);
lean_closure_set(v___f_507_, 3, v_pkg_502_);
lean_closure_set(v___f_507_, 4, v_inst_496_);
v___f_508_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__2), 2, 1);
lean_closure_set(v___f_508_, 0, v_pkg_502_);
v___x_509_ = lean_apply_4(v_map_505_, lean_box(0), lean_box(0), v___f_506_, v_inst_497_);
v___x_510_ = lean_apply_4(v_map_505_, lean_box(0), lean_box(0), v___f_508_, v___x_509_);
v___x_511_ = lean_apply_4(v_toBind_500_, lean_box(0), lean_box(0), v___x_510_, v___f_507_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_get(lean_object* v_m_512_, lean_object* v_self_513_, lean_object* v_inst_514_, lean_object* v_inst_515_, lean_object* v_inst_516_){
_start:
{
lean_object* v_toApplicative_517_; lean_object* v_toFunctor_518_; lean_object* v_toBind_519_; lean_object* v_toPure_520_; lean_object* v_pkg_521_; lean_object* v_name_522_; lean_object* v_config_523_; lean_object* v_map_524_; lean_object* v___f_525_; lean_object* v___f_526_; lean_object* v___f_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v_toApplicative_517_ = lean_ctor_get(v_inst_514_, 0);
lean_inc_ref(v_toApplicative_517_);
v_toFunctor_518_ = lean_ctor_get(v_toApplicative_517_, 0);
lean_inc_ref(v_toFunctor_518_);
v_toBind_519_ = lean_ctor_get(v_inst_514_, 1);
lean_inc(v_toBind_519_);
lean_dec_ref(v_inst_514_);
v_toPure_520_ = lean_ctor_get(v_toApplicative_517_, 1);
lean_inc(v_toPure_520_);
lean_dec_ref(v_toApplicative_517_);
v_pkg_521_ = lean_ctor_get(v_self_513_, 0);
lean_inc_n(v_pkg_521_, 2);
v_name_522_ = lean_ctor_get(v_self_513_, 1);
lean_inc(v_name_522_);
v_config_523_ = lean_ctor_get(v_self_513_, 3);
lean_inc(v_config_523_);
lean_dec_ref(v_self_513_);
v_map_524_ = lean_ctor_get(v_toFunctor_518_, 0);
lean_inc_n(v_map_524_, 2);
lean_dec_ref(v_toFunctor_518_);
v___f_525_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_526_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_526_, 0, v_name_522_);
lean_closure_set(v___f_526_, 1, v_config_523_);
lean_closure_set(v___f_526_, 2, v_toPure_520_);
lean_closure_set(v___f_526_, 3, v_pkg_521_);
lean_closure_set(v___f_526_, 4, v_inst_515_);
v___f_527_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__2), 2, 1);
lean_closure_set(v___f_527_, 0, v_pkg_521_);
v___x_528_ = lean_apply_4(v_map_524_, lean_box(0), lean_box(0), v___f_525_, v_inst_516_);
v___x_529_ = lean_apply_4(v_map_524_, lean_box(0), lean_box(0), v___f_527_, v___x_528_);
v___x_530_ = lean_apply_4(v_toBind_519_, lean_box(0), lean_box(0), v___x_529_, v___f_526_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetch(lean_object* v_self_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_){
_start:
{
lean_object* v_pkg_542_; lean_object* v_name_543_; lean_object* v_keyName_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v_pkg_542_ = lean_ctor_get(v_self_534_, 0);
v_name_543_ = lean_ctor_get(v_self_534_, 1);
v_keyName_544_ = lean_ctor_get(v_pkg_542_, 2);
v___x_545_ = l_Lake_LeanLib_defaultFacet;
lean_inc(v_name_543_);
lean_inc(v_keyName_544_);
v___x_546_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_546_, 0, v_keyName_544_);
lean_ctor_set(v___x_546_, 1, v_name_543_);
v___x_547_ = ((lean_object*)(l_Lake_LeanLib_fetch___closed__1));
v___x_548_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_548_, 0, v___x_546_);
lean_ctor_set(v___x_548_, 1, v___x_547_);
lean_ctor_set(v___x_548_, 2, v_self_534_);
lean_ctor_set(v___x_548_, 3, v___x_545_);
lean_inc_ref(v_a_539_);
lean_inc(v_a_538_);
lean_inc(v_a_537_);
lean_inc(v_a_536_);
v___x_549_ = lean_apply_7(v_a_535_, v___x_548_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_, lean_box(0));
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetch___boxed(lean_object* v_self_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lake_LeanLib_fetch(v_self_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_);
lean_dec_ref(v_a_555_);
lean_dec(v_a_554_);
lean_dec(v_a_553_);
lean_dec(v_a_552_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_fetch(lean_object* v_self_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_){
_start:
{
lean_object* v_toContext_567_; lean_object* v_pkg_568_; lean_object* v_name_569_; lean_object* v_config_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_602_; 
v_toContext_567_ = lean_ctor_get(v_a_564_, 1);
v_pkg_568_ = lean_ctor_get(v_self_559_, 0);
v_name_569_ = lean_ctor_get(v_self_559_, 1);
v_config_570_ = lean_ctor_get(v_self_559_, 3);
v_isSharedCheck_602_ = !lean_is_exclusive(v_self_559_);
if (v_isSharedCheck_602_ == 0)
{
lean_object* v_unused_603_; 
v_unused_603_ = lean_ctor_get(v_self_559_, 2);
lean_dec(v_unused_603_);
v___x_572_ = v_self_559_;
v_isShared_573_ = v_isSharedCheck_602_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_config_570_);
lean_inc(v_name_569_);
lean_inc(v_pkg_568_);
lean_dec(v_self_559_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_602_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v_packageMap_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v_packageMap_574_ = lean_ctor_get(v_toContext_567_, 5);
v___x_575_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__2___closed__0));
lean_inc(v_pkg_568_);
lean_inc(v_packageMap_574_);
v___x_576_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_575_, v_packageMap_574_, v_pkg_568_);
if (lean_obj_tag(v___x_576_) == 1)
{
lean_object* v_val_577_; lean_object* v_keyName_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_584_; 
lean_dec(v_pkg_568_);
v_val_577_ = lean_ctor_get(v___x_576_, 0);
lean_inc(v_val_577_);
lean_dec_ref_known(v___x_576_, 1);
v_keyName_578_ = lean_ctor_get(v_val_577_, 2);
lean_inc(v_keyName_578_);
v___x_579_ = ((lean_object*)(l_Lake_LeanLib_fetch___closed__1));
lean_inc(v_name_569_);
v___x_580_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_580_, 0, v_val_577_);
lean_ctor_set(v___x_580_, 1, v_name_569_);
lean_ctor_set(v___x_580_, 2, v_config_570_);
v___x_581_ = l_Lake_LeanLib_defaultFacet;
v___x_582_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_582_, 0, v_keyName_578_);
lean_ctor_set(v___x_582_, 1, v_name_569_);
if (v_isShared_573_ == 0)
{
lean_ctor_set_tag(v___x_572_, 1);
lean_ctor_set(v___x_572_, 3, v___x_581_);
lean_ctor_set(v___x_572_, 2, v___x_580_);
lean_ctor_set(v___x_572_, 1, v___x_579_);
lean_ctor_set(v___x_572_, 0, v___x_582_);
v___x_584_ = v___x_572_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v___x_582_);
lean_ctor_set(v_reuseFailAlloc_586_, 1, v___x_579_);
lean_ctor_set(v_reuseFailAlloc_586_, 2, v___x_580_);
lean_ctor_set(v_reuseFailAlloc_586_, 3, v___x_581_);
v___x_584_ = v_reuseFailAlloc_586_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
lean_object* v___x_585_; 
lean_inc_ref(v_a_564_);
lean_inc(v_a_563_);
lean_inc(v_a_562_);
lean_inc(v_a_561_);
v___x_585_ = lean_apply_7(v_a_560_, v___x_584_, v_a_561_, v_a_562_, v_a_563_, v_a_564_, v_a_565_, lean_box(0));
return v___x_585_;
}
}
else
{
lean_object* v___x_587_; uint8_t v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; uint8_t v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
lean_dec(v___x_576_);
lean_del_object(v___x_572_);
lean_dec(v_config_570_);
lean_dec_ref(v_a_560_);
v___x_587_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__0));
v___x_588_ = 1;
v___x_589_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_568_, v___x_588_);
v___x_590_ = lean_string_append(v___x_587_, v___x_589_);
lean_dec_ref(v___x_589_);
v___x_591_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__1));
v___x_592_ = lean_string_append(v___x_590_, v___x_591_);
v___x_593_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_569_, v___x_588_);
v___x_594_ = lean_string_append(v___x_592_, v___x_593_);
lean_dec_ref(v___x_593_);
v___x_595_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__2));
v___x_596_ = lean_string_append(v___x_594_, v___x_595_);
v___x_597_ = 3;
v___x_598_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_598_, 0, v___x_596_);
lean_ctor_set_uint8(v___x_598_, sizeof(void*)*1, v___x_597_);
v___x_599_ = lean_array_get_size(v_a_565_);
v___x_600_ = lean_array_push(v_a_565_, v___x_598_);
v___x_601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_601_, 0, v___x_599_);
lean_ctor_set(v___x_601_, 1, v___x_600_);
return v___x_601_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLibDecl_fetch___boxed(lean_object* v_self_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lake_LeanLibDecl_fetch(v_self_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_);
lean_dec_ref(v_a_609_);
lean_dec(v_a_608_);
lean_dec(v_a_607_);
lean_dec(v_a_606_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch___redArg(lean_object* v_lib_613_, lean_object* v_self_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_){
_start:
{
lean_object* v_pkg_622_; lean_object* v_name_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_635_; 
v_pkg_622_ = lean_ctor_get(v_lib_613_, 0);
v_name_623_ = lean_ctor_get(v_self_614_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v_self_614_);
if (v_isSharedCheck_635_ == 0)
{
lean_object* v_unused_636_; 
v_unused_636_ = lean_ctor_get(v_self_614_, 1);
lean_dec(v_unused_636_);
v___x_625_ = v_self_614_;
v_isShared_626_ = v_isSharedCheck_635_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_name_623_);
lean_dec(v_self_614_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_635_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v_name_627_; lean_object* v_keyName_628_; lean_object* v___x_630_; 
v_name_627_ = lean_ctor_get(v_lib_613_, 1);
v_keyName_628_ = lean_ctor_get(v_pkg_622_, 2);
lean_inc(v_name_627_);
lean_inc(v_keyName_628_);
if (v_isShared_626_ == 0)
{
lean_ctor_set_tag(v___x_625_, 3);
lean_ctor_set(v___x_625_, 1, v_name_627_);
lean_ctor_set(v___x_625_, 0, v_keyName_628_);
v___x_630_ = v___x_625_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_keyName_628_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v_name_627_);
v___x_630_ = v_reuseFailAlloc_634_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_631_ = ((lean_object*)(l_Lake_LeanLib_fetch___closed__1));
v___x_632_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_632_, 0, v___x_630_);
lean_ctor_set(v___x_632_, 1, v___x_631_);
lean_ctor_set(v___x_632_, 2, v_lib_613_);
lean_ctor_set(v___x_632_, 3, v_name_623_);
lean_inc_ref(v_a_619_);
lean_inc(v_a_618_);
lean_inc(v_a_617_);
lean_inc(v_a_616_);
v___x_633_ = lean_apply_7(v_a_615_, v___x_632_, v_a_616_, v_a_617_, v_a_618_, v_a_619_, v_a_620_, lean_box(0));
return v___x_633_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch___redArg___boxed(lean_object* v_lib_637_, lean_object* v_self_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Lake_LibraryFacetDecl_fetch___redArg(v_lib_637_, v_self_638_, v_a_639_, v_a_640_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
lean_dec_ref(v_a_643_);
lean_dec(v_a_642_);
lean_dec(v_a_641_);
lean_dec(v_a_640_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch(lean_object* v_00_u03b1_647_, lean_object* v_lib_648_, lean_object* v_self_649_, lean_object* v_inst_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_){
_start:
{
lean_object* v_pkg_658_; lean_object* v_name_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_671_; 
v_pkg_658_ = lean_ctor_get(v_lib_648_, 0);
v_name_659_ = lean_ctor_get(v_self_649_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v_self_649_);
if (v_isSharedCheck_671_ == 0)
{
lean_object* v_unused_672_; 
v_unused_672_ = lean_ctor_get(v_self_649_, 1);
lean_dec(v_unused_672_);
v___x_661_ = v_self_649_;
v_isShared_662_ = v_isSharedCheck_671_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_name_659_);
lean_dec(v_self_649_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_671_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v_name_663_; lean_object* v_keyName_664_; lean_object* v___x_666_; 
v_name_663_ = lean_ctor_get(v_lib_648_, 1);
v_keyName_664_ = lean_ctor_get(v_pkg_658_, 2);
lean_inc(v_name_663_);
lean_inc(v_keyName_664_);
if (v_isShared_662_ == 0)
{
lean_ctor_set_tag(v___x_661_, 3);
lean_ctor_set(v___x_661_, 1, v_name_663_);
lean_ctor_set(v___x_661_, 0, v_keyName_664_);
v___x_666_ = v___x_661_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_keyName_664_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v_name_663_);
v___x_666_ = v_reuseFailAlloc_670_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_667_ = ((lean_object*)(l_Lake_LeanLib_fetch___closed__1));
v___x_668_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_668_, 0, v___x_666_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
lean_ctor_set(v___x_668_, 2, v_lib_648_);
lean_ctor_set(v___x_668_, 3, v_name_659_);
lean_inc_ref(v_a_655_);
lean_inc(v_a_654_);
lean_inc(v_a_653_);
lean_inc(v_a_652_);
v___x_669_ = lean_apply_7(v_a_651_, v___x_668_, v_a_652_, v_a_653_, v_a_654_, v_a_655_, v_a_656_, lean_box(0));
return v___x_669_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LibraryFacetDecl_fetch___boxed(lean_object* v_00_u03b1_673_, lean_object* v_lib_674_, lean_object* v_self_675_, lean_object* v_inst_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lake_LibraryFacetDecl_fetch(v_00_u03b1_673_, v_lib_674_, v_self_675_, v_inst_676_, v_a_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_);
lean_dec_ref(v_a_681_);
lean_dec(v_a_680_);
lean_dec(v_a_679_);
lean_dec(v_a_678_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetchFacetJob(lean_object* v_name_685_, lean_object* v_self_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_){
_start:
{
lean_object* v_pkg_694_; lean_object* v_name_695_; lean_object* v_keyName_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v_pkg_694_ = lean_ctor_get(v_self_686_, 0);
v_name_695_ = lean_ctor_get(v_self_686_, 1);
v_keyName_696_ = lean_ctor_get(v_pkg_694_, 2);
v___x_697_ = ((lean_object*)(l_Lake_LeanLib_fetch___closed__1));
v___x_698_ = l_Lean_Name_append(v___x_697_, v_name_685_);
lean_inc(v_name_695_);
lean_inc(v_keyName_696_);
v___x_699_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_699_, 0, v_keyName_696_);
lean_ctor_set(v___x_699_, 1, v_name_695_);
v___x_700_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
lean_ctor_set(v___x_700_, 1, v___x_697_);
lean_ctor_set(v___x_700_, 2, v_self_686_);
lean_ctor_set(v___x_700_, 3, v___x_698_);
lean_inc_ref(v_a_691_);
lean_inc(v_a_690_);
lean_inc(v_a_689_);
lean_inc(v_a_688_);
v___x_701_ = lean_apply_7(v_a_687_, v___x_700_, v_a_688_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, lean_box(0));
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_702_; lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_711_; 
v_a_702_ = lean_ctor_get(v___x_701_, 0);
v_a_703_ = lean_ctor_get(v___x_701_, 1);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_711_ == 0)
{
v___x_705_ = v___x_701_;
v_isShared_706_ = v_isSharedCheck_711_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_inc(v_a_702_);
lean_dec(v___x_701_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_711_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_707_; lean_object* v___x_709_; 
v___x_707_ = l_Lake_Job_toOpaque___redArg(v_a_702_);
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 0, v___x_707_);
v___x_709_ = v___x_705_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v___x_707_);
lean_ctor_set(v_reuseFailAlloc_710_, 1, v_a_703_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
else
{
lean_object* v_a_712_; lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
v_a_712_ = lean_ctor_get(v___x_701_, 0);
v_a_713_ = lean_ctor_get(v___x_701_, 1);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_701_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_inc(v_a_712_);
lean_dec(v___x_701_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_718_; 
if (v_isShared_716_ == 0)
{
v___x_718_ = v___x_715_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_712_);
lean_ctor_set(v_reuseFailAlloc_719_, 1, v_a_713_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_fetchFacetJob___boxed(lean_object* v_name_721_, lean_object* v_self_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = l_Lake_LeanLib_fetchFacetJob(v_name_721_, v_self_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_);
lean_dec_ref(v_a_727_);
lean_dec(v_a_726_);
lean_dec(v_a_725_);
lean_dec(v_a_724_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_get___redArg(lean_object* v_self_731_, lean_object* v_inst_732_, lean_object* v_inst_733_, lean_object* v_inst_734_){
_start:
{
lean_object* v_toApplicative_735_; lean_object* v_toFunctor_736_; lean_object* v_toBind_737_; lean_object* v_toPure_738_; lean_object* v_pkg_739_; lean_object* v_name_740_; lean_object* v_config_741_; lean_object* v_map_742_; lean_object* v___f_743_; lean_object* v___f_744_; lean_object* v___f_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v_toApplicative_735_ = lean_ctor_get(v_inst_732_, 0);
lean_inc_ref(v_toApplicative_735_);
v_toFunctor_736_ = lean_ctor_get(v_toApplicative_735_, 0);
lean_inc_ref(v_toFunctor_736_);
v_toBind_737_ = lean_ctor_get(v_inst_732_, 1);
lean_inc(v_toBind_737_);
lean_dec_ref(v_inst_732_);
v_toPure_738_ = lean_ctor_get(v_toApplicative_735_, 1);
lean_inc(v_toPure_738_);
lean_dec_ref(v_toApplicative_735_);
v_pkg_739_ = lean_ctor_get(v_self_731_, 0);
lean_inc_n(v_pkg_739_, 2);
v_name_740_ = lean_ctor_get(v_self_731_, 1);
lean_inc(v_name_740_);
v_config_741_ = lean_ctor_get(v_self_731_, 3);
lean_inc(v_config_741_);
lean_dec_ref(v_self_731_);
v_map_742_ = lean_ctor_get(v_toFunctor_736_, 0);
lean_inc_n(v_map_742_, 2);
lean_dec_ref(v_toFunctor_736_);
v___f_743_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_744_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_744_, 0, v_name_740_);
lean_closure_set(v___f_744_, 1, v_config_741_);
lean_closure_set(v___f_744_, 2, v_toPure_738_);
lean_closure_set(v___f_744_, 3, v_pkg_739_);
lean_closure_set(v___f_744_, 4, v_inst_733_);
v___f_745_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__2), 2, 1);
lean_closure_set(v___f_745_, 0, v_pkg_739_);
v___x_746_ = lean_apply_4(v_map_742_, lean_box(0), lean_box(0), v___f_743_, v_inst_734_);
v___x_747_ = lean_apply_4(v_map_742_, lean_box(0), lean_box(0), v___f_745_, v___x_746_);
v___x_748_ = lean_apply_4(v_toBind_737_, lean_box(0), lean_box(0), v___x_747_, v___f_744_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_get(lean_object* v_m_749_, lean_object* v_self_750_, lean_object* v_inst_751_, lean_object* v_inst_752_, lean_object* v_inst_753_){
_start:
{
lean_object* v_toApplicative_754_; lean_object* v_toFunctor_755_; lean_object* v_toBind_756_; lean_object* v_toPure_757_; lean_object* v_pkg_758_; lean_object* v_name_759_; lean_object* v_config_760_; lean_object* v_map_761_; lean_object* v___f_762_; lean_object* v___f_763_; lean_object* v___f_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v_toApplicative_754_ = lean_ctor_get(v_inst_751_, 0);
lean_inc_ref(v_toApplicative_754_);
v_toFunctor_755_ = lean_ctor_get(v_toApplicative_754_, 0);
lean_inc_ref(v_toFunctor_755_);
v_toBind_756_ = lean_ctor_get(v_inst_751_, 1);
lean_inc(v_toBind_756_);
lean_dec_ref(v_inst_751_);
v_toPure_757_ = lean_ctor_get(v_toApplicative_754_, 1);
lean_inc(v_toPure_757_);
lean_dec_ref(v_toApplicative_754_);
v_pkg_758_ = lean_ctor_get(v_self_750_, 0);
lean_inc_n(v_pkg_758_, 2);
v_name_759_ = lean_ctor_get(v_self_750_, 1);
lean_inc(v_name_759_);
v_config_760_ = lean_ctor_get(v_self_750_, 3);
lean_inc(v_config_760_);
lean_dec_ref(v_self_750_);
v_map_761_ = lean_ctor_get(v_toFunctor_755_, 0);
lean_inc_n(v_map_761_, 2);
lean_dec_ref(v_toFunctor_755_);
v___f_762_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_763_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_763_, 0, v_name_759_);
lean_closure_set(v___f_763_, 1, v_config_760_);
lean_closure_set(v___f_763_, 2, v_toPure_757_);
lean_closure_set(v___f_763_, 3, v_pkg_758_);
lean_closure_set(v___f_763_, 4, v_inst_752_);
v___f_764_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__2), 2, 1);
lean_closure_set(v___f_764_, 0, v_pkg_758_);
v___x_765_ = lean_apply_4(v_map_761_, lean_box(0), lean_box(0), v___f_762_, v_inst_753_);
v___x_766_ = lean_apply_4(v_map_761_, lean_box(0), lean_box(0), v___f_764_, v___x_765_);
v___x_767_ = lean_apply_4(v_toBind_756_, lean_box(0), lean_box(0), v___x_766_, v___f_763_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_fetch(lean_object* v_self_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_){
_start:
{
lean_object* v_pkg_776_; lean_object* v_name_777_; lean_object* v_keyName_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v_pkg_776_ = lean_ctor_get(v_self_768_, 0);
v_name_777_ = lean_ctor_get(v_self_768_, 1);
v_keyName_778_ = lean_ctor_get(v_pkg_776_, 2);
v___x_779_ = l_Lake_LeanExe_exeFacet;
lean_inc(v_name_777_);
lean_inc(v_keyName_778_);
v___x_780_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_780_, 0, v_keyName_778_);
lean_ctor_set(v___x_780_, 1, v_name_777_);
v___x_781_ = l_Lake_LeanExe_keyword;
v___x_782_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_782_, 0, v___x_780_);
lean_ctor_set(v___x_782_, 1, v___x_781_);
lean_ctor_set(v___x_782_, 2, v_self_768_);
lean_ctor_set(v___x_782_, 3, v___x_779_);
lean_inc_ref(v_a_773_);
lean_inc(v_a_772_);
lean_inc(v_a_771_);
lean_inc(v_a_770_);
v___x_783_ = lean_apply_7(v_a_769_, v___x_782_, v_a_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_, lean_box(0));
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_fetch___boxed(lean_object* v_self_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_Lake_LeanExe_fetch(v_self_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_, v_a_789_, v_a_790_);
lean_dec_ref(v_a_789_);
lean_dec(v_a_788_);
lean_dec(v_a_787_);
lean_dec(v_a_786_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_fetch(lean_object* v_self_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_){
_start:
{
lean_object* v_toContext_801_; lean_object* v_pkg_802_; lean_object* v_name_803_; lean_object* v_config_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_836_; 
v_toContext_801_ = lean_ctor_get(v_a_798_, 1);
v_pkg_802_ = lean_ctor_get(v_self_793_, 0);
v_name_803_ = lean_ctor_get(v_self_793_, 1);
v_config_804_ = lean_ctor_get(v_self_793_, 3);
v_isSharedCheck_836_ = !lean_is_exclusive(v_self_793_);
if (v_isSharedCheck_836_ == 0)
{
lean_object* v_unused_837_; 
v_unused_837_ = lean_ctor_get(v_self_793_, 2);
lean_dec(v_unused_837_);
v___x_806_ = v_self_793_;
v_isShared_807_ = v_isSharedCheck_836_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_config_804_);
lean_inc(v_name_803_);
lean_inc(v_pkg_802_);
lean_dec(v_self_793_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_836_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v_packageMap_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v_packageMap_808_ = lean_ctor_get(v_toContext_801_, 5);
v___x_809_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__2___closed__0));
lean_inc(v_pkg_802_);
lean_inc(v_packageMap_808_);
v___x_810_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_809_, v_packageMap_808_, v_pkg_802_);
if (lean_obj_tag(v___x_810_) == 1)
{
lean_object* v_val_811_; lean_object* v_keyName_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_818_; 
lean_dec(v_pkg_802_);
v_val_811_ = lean_ctor_get(v___x_810_, 0);
lean_inc(v_val_811_);
lean_dec_ref_known(v___x_810_, 1);
v_keyName_812_ = lean_ctor_get(v_val_811_, 2);
lean_inc(v_keyName_812_);
v___x_813_ = l_Lake_LeanExe_keyword;
lean_inc(v_name_803_);
v___x_814_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_814_, 0, v_val_811_);
lean_ctor_set(v___x_814_, 1, v_name_803_);
lean_ctor_set(v___x_814_, 2, v_config_804_);
v___x_815_ = l_Lake_LeanExe_exeFacet;
v___x_816_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_816_, 0, v_keyName_812_);
lean_ctor_set(v___x_816_, 1, v_name_803_);
if (v_isShared_807_ == 0)
{
lean_ctor_set_tag(v___x_806_, 1);
lean_ctor_set(v___x_806_, 3, v___x_815_);
lean_ctor_set(v___x_806_, 2, v___x_814_);
lean_ctor_set(v___x_806_, 1, v___x_813_);
lean_ctor_set(v___x_806_, 0, v___x_816_);
v___x_818_ = v___x_806_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_816_);
lean_ctor_set(v_reuseFailAlloc_820_, 1, v___x_813_);
lean_ctor_set(v_reuseFailAlloc_820_, 2, v___x_814_);
lean_ctor_set(v_reuseFailAlloc_820_, 3, v___x_815_);
v___x_818_ = v_reuseFailAlloc_820_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
lean_object* v___x_819_; 
lean_inc_ref(v_a_798_);
lean_inc(v_a_797_);
lean_inc(v_a_796_);
lean_inc(v_a_795_);
v___x_819_ = lean_apply_7(v_a_794_, v___x_818_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, lean_box(0));
return v___x_819_;
}
}
else
{
lean_object* v___x_821_; uint8_t v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; uint8_t v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
lean_dec(v___x_810_);
lean_del_object(v___x_806_);
lean_dec(v_config_804_);
lean_dec_ref(v_a_794_);
v___x_821_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__0));
v___x_822_ = 1;
v___x_823_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_802_, v___x_822_);
v___x_824_ = lean_string_append(v___x_821_, v___x_823_);
lean_dec_ref(v___x_823_);
v___x_825_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__1));
v___x_826_ = lean_string_append(v___x_824_, v___x_825_);
v___x_827_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_803_, v___x_822_);
v___x_828_ = lean_string_append(v___x_826_, v___x_827_);
lean_dec_ref(v___x_827_);
v___x_829_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__2));
v___x_830_ = lean_string_append(v___x_828_, v___x_829_);
v___x_831_ = 3;
v___x_832_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_832_, 0, v___x_830_);
lean_ctor_set_uint8(v___x_832_, sizeof(void*)*1, v___x_831_);
v___x_833_ = lean_array_get_size(v_a_799_);
v___x_834_ = lean_array_push(v_a_799_, v___x_832_);
v___x_835_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_833_);
lean_ctor_set(v___x_835_, 1, v___x_834_);
return v___x_835_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExeDecl_fetch___boxed(lean_object* v_self_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l_Lake_LeanExeDecl_fetch(v_self_838_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_);
lean_dec_ref(v_a_843_);
lean_dec(v_a_842_);
lean_dec(v_a_841_);
lean_dec(v_a_840_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputFile_fetch(lean_object* v_self_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_){
_start:
{
lean_object* v_pkg_855_; lean_object* v_name_856_; lean_object* v_keyName_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v_pkg_855_ = lean_ctor_get(v_self_847_, 0);
v_name_856_ = lean_ctor_get(v_self_847_, 1);
v_keyName_857_ = lean_ctor_get(v_pkg_855_, 2);
v___x_858_ = l_Lake_InputFile_defaultFacet;
lean_inc(v_name_856_);
lean_inc(v_keyName_857_);
v___x_859_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_859_, 0, v_keyName_857_);
lean_ctor_set(v___x_859_, 1, v_name_856_);
v___x_860_ = l_Lake_InputFile_keyword;
v___x_861_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_861_, 0, v___x_859_);
lean_ctor_set(v___x_861_, 1, v___x_860_);
lean_ctor_set(v___x_861_, 2, v_self_847_);
lean_ctor_set(v___x_861_, 3, v___x_858_);
lean_inc_ref(v_a_852_);
lean_inc(v_a_851_);
lean_inc(v_a_850_);
lean_inc(v_a_849_);
v___x_862_ = lean_apply_7(v_a_848_, v___x_861_, v_a_849_, v_a_850_, v_a_851_, v_a_852_, v_a_853_, lean_box(0));
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputFile_fetch___boxed(lean_object* v_self_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_Lake_InputFile_fetch(v_self_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_);
lean_dec_ref(v_a_868_);
lean_dec(v_a_867_);
lean_dec(v_a_866_);
lean_dec(v_a_865_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_get___redArg(lean_object* v_self_872_, lean_object* v_inst_873_, lean_object* v_inst_874_, lean_object* v_inst_875_){
_start:
{
lean_object* v_toApplicative_876_; lean_object* v_toFunctor_877_; lean_object* v_toBind_878_; lean_object* v_toPure_879_; lean_object* v_pkg_880_; lean_object* v_name_881_; lean_object* v_config_882_; lean_object* v_map_883_; lean_object* v___f_884_; lean_object* v___f_885_; lean_object* v___f_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v_toApplicative_876_ = lean_ctor_get(v_inst_873_, 0);
lean_inc_ref(v_toApplicative_876_);
v_toFunctor_877_ = lean_ctor_get(v_toApplicative_876_, 0);
lean_inc_ref(v_toFunctor_877_);
v_toBind_878_ = lean_ctor_get(v_inst_873_, 1);
lean_inc(v_toBind_878_);
lean_dec_ref(v_inst_873_);
v_toPure_879_ = lean_ctor_get(v_toApplicative_876_, 1);
lean_inc(v_toPure_879_);
lean_dec_ref(v_toApplicative_876_);
v_pkg_880_ = lean_ctor_get(v_self_872_, 0);
lean_inc_n(v_pkg_880_, 2);
v_name_881_ = lean_ctor_get(v_self_872_, 1);
lean_inc(v_name_881_);
v_config_882_ = lean_ctor_get(v_self_872_, 3);
lean_inc(v_config_882_);
lean_dec_ref(v_self_872_);
v_map_883_ = lean_ctor_get(v_toFunctor_877_, 0);
lean_inc_n(v_map_883_, 2);
lean_dec_ref(v_toFunctor_877_);
v___f_884_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_885_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_885_, 0, v_name_881_);
lean_closure_set(v___f_885_, 1, v_config_882_);
lean_closure_set(v___f_885_, 2, v_toPure_879_);
lean_closure_set(v___f_885_, 3, v_pkg_880_);
lean_closure_set(v___f_885_, 4, v_inst_874_);
v___f_886_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__2), 2, 1);
lean_closure_set(v___f_886_, 0, v_pkg_880_);
v___x_887_ = lean_apply_4(v_map_883_, lean_box(0), lean_box(0), v___f_884_, v_inst_875_);
v___x_888_ = lean_apply_4(v_map_883_, lean_box(0), lean_box(0), v___f_886_, v___x_887_);
v___x_889_ = lean_apply_4(v_toBind_878_, lean_box(0), lean_box(0), v___x_888_, v___f_885_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_get(lean_object* v_m_890_, lean_object* v_self_891_, lean_object* v_inst_892_, lean_object* v_inst_893_, lean_object* v_inst_894_){
_start:
{
lean_object* v_toApplicative_895_; lean_object* v_toFunctor_896_; lean_object* v_toBind_897_; lean_object* v_toPure_898_; lean_object* v_pkg_899_; lean_object* v_name_900_; lean_object* v_config_901_; lean_object* v_map_902_; lean_object* v___f_903_; lean_object* v___f_904_; lean_object* v___f_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
v_toApplicative_895_ = lean_ctor_get(v_inst_892_, 0);
lean_inc_ref(v_toApplicative_895_);
v_toFunctor_896_ = lean_ctor_get(v_toApplicative_895_, 0);
lean_inc_ref(v_toFunctor_896_);
v_toBind_897_ = lean_ctor_get(v_inst_892_, 1);
lean_inc(v_toBind_897_);
lean_dec_ref(v_inst_892_);
v_toPure_898_ = lean_ctor_get(v_toApplicative_895_, 1);
lean_inc(v_toPure_898_);
lean_dec_ref(v_toApplicative_895_);
v_pkg_899_ = lean_ctor_get(v_self_891_, 0);
lean_inc_n(v_pkg_899_, 2);
v_name_900_ = lean_ctor_get(v_self_891_, 1);
lean_inc(v_name_900_);
v_config_901_ = lean_ctor_get(v_self_891_, 3);
lean_inc(v_config_901_);
lean_dec_ref(v_self_891_);
v_map_902_ = lean_ctor_get(v_toFunctor_896_, 0);
lean_inc_n(v_map_902_, 2);
lean_dec_ref(v_toFunctor_896_);
v___f_903_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_904_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_904_, 0, v_name_900_);
lean_closure_set(v___f_904_, 1, v_config_901_);
lean_closure_set(v___f_904_, 2, v_toPure_898_);
lean_closure_set(v___f_904_, 3, v_pkg_899_);
lean_closure_set(v___f_904_, 4, v_inst_893_);
v___f_905_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__2), 2, 1);
lean_closure_set(v___f_905_, 0, v_pkg_899_);
v___x_906_ = lean_apply_4(v_map_902_, lean_box(0), lean_box(0), v___f_903_, v_inst_894_);
v___x_907_ = lean_apply_4(v_map_902_, lean_box(0), lean_box(0), v___f_905_, v___x_906_);
v___x_908_ = lean_apply_4(v_toBind_897_, lean_box(0), lean_box(0), v___x_907_, v___f_904_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_fetch(lean_object* v_self_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_){
_start:
{
lean_object* v_toContext_917_; lean_object* v_pkg_918_; lean_object* v_name_919_; lean_object* v_config_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_952_; 
v_toContext_917_ = lean_ctor_get(v_a_914_, 1);
v_pkg_918_ = lean_ctor_get(v_self_909_, 0);
v_name_919_ = lean_ctor_get(v_self_909_, 1);
v_config_920_ = lean_ctor_get(v_self_909_, 3);
v_isSharedCheck_952_ = !lean_is_exclusive(v_self_909_);
if (v_isSharedCheck_952_ == 0)
{
lean_object* v_unused_953_; 
v_unused_953_ = lean_ctor_get(v_self_909_, 2);
lean_dec(v_unused_953_);
v___x_922_ = v_self_909_;
v_isShared_923_ = v_isSharedCheck_952_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_config_920_);
lean_inc(v_name_919_);
lean_inc(v_pkg_918_);
lean_dec(v_self_909_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_952_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v_packageMap_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
v_packageMap_924_ = lean_ctor_get(v_toContext_917_, 5);
v___x_925_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__2___closed__0));
lean_inc(v_pkg_918_);
lean_inc(v_packageMap_924_);
v___x_926_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_925_, v_packageMap_924_, v_pkg_918_);
if (lean_obj_tag(v___x_926_) == 1)
{
lean_object* v_val_927_; lean_object* v_keyName_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_934_; 
lean_dec(v_pkg_918_);
v_val_927_ = lean_ctor_get(v___x_926_, 0);
lean_inc(v_val_927_);
lean_dec_ref_known(v___x_926_, 1);
v_keyName_928_ = lean_ctor_get(v_val_927_, 2);
lean_inc(v_keyName_928_);
v___x_929_ = l_Lake_InputFile_keyword;
lean_inc(v_name_919_);
v___x_930_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_930_, 0, v_val_927_);
lean_ctor_set(v___x_930_, 1, v_name_919_);
lean_ctor_set(v___x_930_, 2, v_config_920_);
v___x_931_ = l_Lake_InputFile_defaultFacet;
v___x_932_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_932_, 0, v_keyName_928_);
lean_ctor_set(v___x_932_, 1, v_name_919_);
if (v_isShared_923_ == 0)
{
lean_ctor_set_tag(v___x_922_, 1);
lean_ctor_set(v___x_922_, 3, v___x_931_);
lean_ctor_set(v___x_922_, 2, v___x_930_);
lean_ctor_set(v___x_922_, 1, v___x_929_);
lean_ctor_set(v___x_922_, 0, v___x_932_);
v___x_934_ = v___x_922_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v___x_932_);
lean_ctor_set(v_reuseFailAlloc_936_, 1, v___x_929_);
lean_ctor_set(v_reuseFailAlloc_936_, 2, v___x_930_);
lean_ctor_set(v_reuseFailAlloc_936_, 3, v___x_931_);
v___x_934_ = v_reuseFailAlloc_936_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
lean_object* v___x_935_; 
lean_inc_ref(v_a_914_);
lean_inc(v_a_913_);
lean_inc(v_a_912_);
lean_inc(v_a_911_);
v___x_935_ = lean_apply_7(v_a_910_, v___x_934_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_, lean_box(0));
return v___x_935_;
}
}
else
{
lean_object* v___x_937_; uint8_t v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; uint8_t v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
lean_dec(v___x_926_);
lean_del_object(v___x_922_);
lean_dec(v_config_920_);
lean_dec_ref(v_a_910_);
v___x_937_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__0));
v___x_938_ = 1;
v___x_939_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_918_, v___x_938_);
v___x_940_ = lean_string_append(v___x_937_, v___x_939_);
lean_dec_ref(v___x_939_);
v___x_941_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__1));
v___x_942_ = lean_string_append(v___x_940_, v___x_941_);
v___x_943_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_919_, v___x_938_);
v___x_944_ = lean_string_append(v___x_942_, v___x_943_);
lean_dec_ref(v___x_943_);
v___x_945_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__2));
v___x_946_ = lean_string_append(v___x_944_, v___x_945_);
v___x_947_ = 3;
v___x_948_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_948_, 0, v___x_946_);
lean_ctor_set_uint8(v___x_948_, sizeof(void*)*1, v___x_947_);
v___x_949_ = lean_array_get_size(v_a_915_);
v___x_950_ = lean_array_push(v_a_915_, v___x_948_);
v___x_951_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_951_, 0, v___x_949_);
lean_ctor_set(v___x_951_, 1, v___x_950_);
return v___x_951_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_InputFileDecl_fetch___boxed(lean_object* v_self_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l_Lake_InputFileDecl_fetch(v_self_954_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_);
lean_dec_ref(v_a_959_);
lean_dec(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputDir_fetch(lean_object* v_self_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_){
_start:
{
lean_object* v_pkg_971_; lean_object* v_name_972_; lean_object* v_keyName_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v_pkg_971_ = lean_ctor_get(v_self_963_, 0);
v_name_972_ = lean_ctor_get(v_self_963_, 1);
v_keyName_973_ = lean_ctor_get(v_pkg_971_, 2);
v___x_974_ = l_Lake_InputDir_defaultFacet;
lean_inc(v_name_972_);
lean_inc(v_keyName_973_);
v___x_975_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_975_, 0, v_keyName_973_);
lean_ctor_set(v___x_975_, 1, v_name_972_);
v___x_976_ = l_Lake_InputDir_keyword;
v___x_977_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_977_, 0, v___x_975_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
lean_ctor_set(v___x_977_, 2, v_self_963_);
lean_ctor_set(v___x_977_, 3, v___x_974_);
lean_inc_ref(v_a_968_);
lean_inc(v_a_967_);
lean_inc(v_a_966_);
lean_inc(v_a_965_);
v___x_978_ = lean_apply_7(v_a_964_, v___x_977_, v_a_965_, v_a_966_, v_a_967_, v_a_968_, v_a_969_, lean_box(0));
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputDir_fetch___boxed(lean_object* v_self_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l_Lake_InputDir_fetch(v_self_979_, v_a_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_);
lean_dec_ref(v_a_984_);
lean_dec(v_a_983_);
lean_dec(v_a_982_);
lean_dec(v_a_981_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_get___redArg(lean_object* v_self_988_, lean_object* v_inst_989_, lean_object* v_inst_990_, lean_object* v_inst_991_){
_start:
{
lean_object* v_toApplicative_992_; lean_object* v_toFunctor_993_; lean_object* v_toBind_994_; lean_object* v_toPure_995_; lean_object* v_pkg_996_; lean_object* v_name_997_; lean_object* v_config_998_; lean_object* v_map_999_; lean_object* v___f_1000_; lean_object* v___f_1001_; lean_object* v___f_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v_toApplicative_992_ = lean_ctor_get(v_inst_989_, 0);
lean_inc_ref(v_toApplicative_992_);
v_toFunctor_993_ = lean_ctor_get(v_toApplicative_992_, 0);
lean_inc_ref(v_toFunctor_993_);
v_toBind_994_ = lean_ctor_get(v_inst_989_, 1);
lean_inc(v_toBind_994_);
lean_dec_ref(v_inst_989_);
v_toPure_995_ = lean_ctor_get(v_toApplicative_992_, 1);
lean_inc(v_toPure_995_);
lean_dec_ref(v_toApplicative_992_);
v_pkg_996_ = lean_ctor_get(v_self_988_, 0);
lean_inc_n(v_pkg_996_, 2);
v_name_997_ = lean_ctor_get(v_self_988_, 1);
lean_inc(v_name_997_);
v_config_998_ = lean_ctor_get(v_self_988_, 3);
lean_inc(v_config_998_);
lean_dec_ref(v_self_988_);
v_map_999_ = lean_ctor_get(v_toFunctor_993_, 0);
lean_inc_n(v_map_999_, 2);
lean_dec_ref(v_toFunctor_993_);
v___f_1000_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_1001_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1001_, 0, v_name_997_);
lean_closure_set(v___f_1001_, 1, v_config_998_);
lean_closure_set(v___f_1001_, 2, v_toPure_995_);
lean_closure_set(v___f_1001_, 3, v_pkg_996_);
lean_closure_set(v___f_1001_, 4, v_inst_990_);
v___f_1002_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1002_, 0, v_pkg_996_);
v___x_1003_ = lean_apply_4(v_map_999_, lean_box(0), lean_box(0), v___f_1000_, v_inst_991_);
v___x_1004_ = lean_apply_4(v_map_999_, lean_box(0), lean_box(0), v___f_1002_, v___x_1003_);
v___x_1005_ = lean_apply_4(v_toBind_994_, lean_box(0), lean_box(0), v___x_1004_, v___f_1001_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_get(lean_object* v_m_1006_, lean_object* v_self_1007_, lean_object* v_inst_1008_, lean_object* v_inst_1009_, lean_object* v_inst_1010_){
_start:
{
lean_object* v_toApplicative_1011_; lean_object* v_toFunctor_1012_; lean_object* v_toBind_1013_; lean_object* v_toPure_1014_; lean_object* v_pkg_1015_; lean_object* v_name_1016_; lean_object* v_config_1017_; lean_object* v_map_1018_; lean_object* v___f_1019_; lean_object* v___f_1020_; lean_object* v___f_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
v_toApplicative_1011_ = lean_ctor_get(v_inst_1008_, 0);
lean_inc_ref(v_toApplicative_1011_);
v_toFunctor_1012_ = lean_ctor_get(v_toApplicative_1011_, 0);
lean_inc_ref(v_toFunctor_1012_);
v_toBind_1013_ = lean_ctor_get(v_inst_1008_, 1);
lean_inc(v_toBind_1013_);
lean_dec_ref(v_inst_1008_);
v_toPure_1014_ = lean_ctor_get(v_toApplicative_1011_, 1);
lean_inc(v_toPure_1014_);
lean_dec_ref(v_toApplicative_1011_);
v_pkg_1015_ = lean_ctor_get(v_self_1007_, 0);
lean_inc_n(v_pkg_1015_, 2);
v_name_1016_ = lean_ctor_get(v_self_1007_, 1);
lean_inc(v_name_1016_);
v_config_1017_ = lean_ctor_get(v_self_1007_, 3);
lean_inc(v_config_1017_);
lean_dec_ref(v_self_1007_);
v_map_1018_ = lean_ctor_get(v_toFunctor_1012_, 0);
lean_inc_n(v_map_1018_, 2);
lean_dec_ref(v_toFunctor_1012_);
v___f_1019_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___closed__0));
v___f_1020_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1020_, 0, v_name_1016_);
lean_closure_set(v___f_1020_, 1, v_config_1017_);
lean_closure_set(v___f_1020_, 2, v_toPure_1014_);
lean_closure_set(v___f_1020_, 3, v_pkg_1015_);
lean_closure_set(v___f_1020_, 4, v_inst_1009_);
v___f_1021_ = lean_alloc_closure((void*)(l_Lake_KConfigDecl_get___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1021_, 0, v_pkg_1015_);
v___x_1022_ = lean_apply_4(v_map_1018_, lean_box(0), lean_box(0), v___f_1019_, v_inst_1010_);
v___x_1023_ = lean_apply_4(v_map_1018_, lean_box(0), lean_box(0), v___f_1021_, v___x_1022_);
v___x_1024_ = lean_apply_4(v_toBind_1013_, lean_box(0), lean_box(0), v___x_1023_, v___f_1020_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_fetch(lean_object* v_self_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_){
_start:
{
lean_object* v_toContext_1033_; lean_object* v_pkg_1034_; lean_object* v_name_1035_; lean_object* v_config_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1068_; 
v_toContext_1033_ = lean_ctor_get(v_a_1030_, 1);
v_pkg_1034_ = lean_ctor_get(v_self_1025_, 0);
v_name_1035_ = lean_ctor_get(v_self_1025_, 1);
v_config_1036_ = lean_ctor_get(v_self_1025_, 3);
v_isSharedCheck_1068_ = !lean_is_exclusive(v_self_1025_);
if (v_isSharedCheck_1068_ == 0)
{
lean_object* v_unused_1069_; 
v_unused_1069_ = lean_ctor_get(v_self_1025_, 2);
lean_dec(v_unused_1069_);
v___x_1038_ = v_self_1025_;
v_isShared_1039_ = v_isSharedCheck_1068_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_config_1036_);
lean_inc(v_name_1035_);
lean_inc(v_pkg_1034_);
lean_dec(v_self_1025_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1068_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v_packageMap_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v_packageMap_1040_ = lean_ctor_get(v_toContext_1033_, 5);
v___x_1041_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__2___closed__0));
lean_inc(v_pkg_1034_);
lean_inc(v_packageMap_1040_);
v___x_1042_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_1041_, v_packageMap_1040_, v_pkg_1034_);
if (lean_obj_tag(v___x_1042_) == 1)
{
lean_object* v_val_1043_; lean_object* v_keyName_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1050_; 
lean_dec(v_pkg_1034_);
v_val_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc(v_val_1043_);
lean_dec_ref_known(v___x_1042_, 1);
v_keyName_1044_ = lean_ctor_get(v_val_1043_, 2);
lean_inc(v_keyName_1044_);
v___x_1045_ = l_Lake_InputDir_keyword;
lean_inc(v_name_1035_);
v___x_1046_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1046_, 0, v_val_1043_);
lean_ctor_set(v___x_1046_, 1, v_name_1035_);
lean_ctor_set(v___x_1046_, 2, v_config_1036_);
v___x_1047_ = l_Lake_InputDir_defaultFacet;
v___x_1048_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1048_, 0, v_keyName_1044_);
lean_ctor_set(v___x_1048_, 1, v_name_1035_);
if (v_isShared_1039_ == 0)
{
lean_ctor_set_tag(v___x_1038_, 1);
lean_ctor_set(v___x_1038_, 3, v___x_1047_);
lean_ctor_set(v___x_1038_, 2, v___x_1046_);
lean_ctor_set(v___x_1038_, 1, v___x_1045_);
lean_ctor_set(v___x_1038_, 0, v___x_1048_);
v___x_1050_ = v___x_1038_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v___x_1048_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v___x_1045_);
lean_ctor_set(v_reuseFailAlloc_1052_, 2, v___x_1046_);
lean_ctor_set(v_reuseFailAlloc_1052_, 3, v___x_1047_);
v___x_1050_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
lean_object* v___x_1051_; 
lean_inc_ref(v_a_1030_);
lean_inc(v_a_1029_);
lean_inc(v_a_1028_);
lean_inc(v_a_1027_);
v___x_1051_ = lean_apply_7(v_a_1026_, v___x_1050_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_, v_a_1031_, lean_box(0));
return v___x_1051_;
}
}
else
{
lean_object* v___x_1053_; uint8_t v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
lean_dec(v___x_1042_);
lean_del_object(v___x_1038_);
lean_dec(v_config_1036_);
lean_dec_ref(v_a_1026_);
v___x_1053_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__0));
v___x_1054_ = 1;
v___x_1055_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pkg_1034_, v___x_1054_);
v___x_1056_ = lean_string_append(v___x_1053_, v___x_1055_);
lean_dec_ref(v___x_1055_);
v___x_1057_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__1));
v___x_1058_ = lean_string_append(v___x_1056_, v___x_1057_);
v___x_1059_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1035_, v___x_1054_);
v___x_1060_ = lean_string_append(v___x_1058_, v___x_1059_);
lean_dec_ref(v___x_1059_);
v___x_1061_ = ((lean_object*)(l_Lake_KConfigDecl_get___redArg___lam__1___closed__2));
v___x_1062_ = lean_string_append(v___x_1060_, v___x_1061_);
v___x_1063_ = 3;
v___x_1064_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1064_, 0, v___x_1062_);
lean_ctor_set_uint8(v___x_1064_, sizeof(void*)*1, v___x_1063_);
v___x_1065_ = lean_array_get_size(v_a_1031_);
v___x_1066_ = lean_array_push(v_a_1031_, v___x_1064_);
v___x_1067_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1065_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
return v___x_1067_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_InputDirDecl_fetch___boxed(lean_object* v_self_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Lake_InputDirDecl_fetch(v_self_1070_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_);
lean_dec_ref(v_a_1075_);
lean_dec(v_a_1074_);
lean_dec(v_a_1073_);
lean_dec(v_a_1072_);
return v_res_1078_;
}
}
lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_InputFile(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Infos(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Targets(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_InputFile(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Targets(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* initialize_Lake_Config_InputFile(uint8_t builtin);
lean_object* initialize_Lake_Build_Infos(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Targets(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_InputFile(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Targets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Targets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Targets(builtin);
}
#ifdef __cplusplus
}
#endif
