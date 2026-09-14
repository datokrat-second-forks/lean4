// Lean compiler output
// Module: Lean.DeclarationRange
// Imports: public import Lean.MonadEnv
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
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
extern lean_object* l_Lean_instInhabitedDeclarationRanges_default;
lean_object* l_Lean_NameMap_toArray___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_isAuxRecursor(lean_object*, lean_object*);
uint8_t l_Lean_isNoConfusion(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_isRec___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn_00___x40_Lean_DeclarationRange_3757377111____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn_00___x40_Lean_DeclarationRange_3757377111____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_builtinDeclRanges;
static const lean_array_object l___private_Lean_DeclarationRange_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DeclarationRange_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn___lam__0_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn___lam__0_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DeclarationRange_0__Lean_initFn___closed__0_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DeclarationRange_0__Lean_initFn___lam__0_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn___closed__0_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DeclarationRange_0__Lean_initFn___closed__0_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DeclarationRange_0__Lean_initFn___closed__1_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn___closed__1_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DeclarationRange_0__Lean_initFn___closed__1_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DeclarationRange_0__Lean_initFn___closed__2_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "declRangeExt"};
static const lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn___closed__2_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DeclarationRange_0__Lean_initFn___closed__2_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DeclarationRange_0__Lean_initFn___closed__3_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DeclarationRange_0__Lean_initFn___closed__1_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DeclarationRange_0__Lean_initFn___closed__3_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DeclarationRange_0__Lean_initFn___closed__3_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_DeclarationRange_0__Lean_initFn___closed__2_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(6, 115, 220, 233, 41, 110, 120, 18)}};
static const lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn___closed__3_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DeclarationRange_0__Lean_initFn___closed__3_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DeclarationRange_0__Lean_initFn___closed__4_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn___closed__4_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DeclarationRange_0__Lean_initFn___closed__4_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_declRangeExt;
LEAN_EXPORT lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addBuiltinDeclarationRanges___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_findDeclarationRanges_x3f___redArg___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__2___closed__0;
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn_00___x40_Lean_DeclarationRange_3757377111____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_2_ = lean_box(1);
v___x_3_ = lean_st_mk_ref(v___x_2_);
v___x_4_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4_, 0, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn_00___x40_Lean_DeclarationRange_3757377111____hygCtx___hyg_2____boxed(lean_object* v___y_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l___private_Lean_DeclarationRange_0__Lean_initFn_00___x40_Lean_DeclarationRange_3757377111____hygCtx___hyg_2_();
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn___lam__0_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_(lean_object* v_x_9_, lean_object* v_s_10_){
_start:
{
lean_object* v_ents_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v_ents_11_ = l_Lean_NameMap_toArray___redArg(v_s_10_);
v___x_12_ = ((lean_object*)(l___private_Lean_DeclarationRange_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_));
lean_inc_ref(v_ents_11_);
v___x_13_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
lean_ctor_set(v___x_13_, 1, v_ents_11_);
lean_ctor_set(v___x_13_, 2, v_ents_11_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn___lam__0_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2____boxed(lean_object* v_x_14_, lean_object* v_s_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l___private_Lean_DeclarationRange_0__Lean_initFn___lam__0_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_(v_x_14_, v_s_15_);
lean_dec(v_s_15_);
lean_dec_ref(v_x_14_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___f_26_ = ((lean_object*)(l___private_Lean_DeclarationRange_0__Lean_initFn___closed__0_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_));
v___x_27_ = ((lean_object*)(l___private_Lean_DeclarationRange_0__Lean_initFn___closed__3_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_));
v___x_28_ = ((lean_object*)(l___private_Lean_DeclarationRange_0__Lean_initFn___closed__4_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_));
v___x_29_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_27_, v___x_28_, v___f_26_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DeclarationRange_0__Lean_initFn_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2____boxed(lean_object* v___y_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l___private_Lean_DeclarationRange_0__Lean_initFn_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_();
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object* v_declName_32_, lean_object* v_declRanges_33_){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_35_ = l_Lean_builtinDeclRanges;
v___x_36_ = lean_st_ref_take(v___x_35_);
v___x_37_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_declName_32_, v_declRanges_33_, v___x_36_);
v___x_38_ = lean_st_ref_put(v___x_35_, v___x_37_);
v___x_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_addBuiltinDeclarationRanges___boxed(lean_object* v_declName_40_, lean_object* v_declRanges_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_addBuiltinDeclarationRanges(v_declName_40_, v_declRanges_41_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___redArg___lam__0(lean_object* v_declName_44_, lean_object* v_declRanges_45_, lean_object* v_env_46_){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = l_Lean_declRangeExt;
v___x_48_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_47_, v_env_46_, v_declName_44_, v_declRanges_45_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___redArg(lean_object* v_inst_49_, lean_object* v_inst_50_, lean_object* v_declName_51_, lean_object* v_declRanges_52_){
_start:
{
lean_object* v_toApplicative_53_; lean_object* v_toPure_54_; uint8_t v___x_55_; 
v_toApplicative_53_ = lean_ctor_get(v_inst_49_, 0);
lean_inc_ref(v_toApplicative_53_);
lean_dec_ref(v_inst_49_);
v_toPure_54_ = lean_ctor_get(v_toApplicative_53_, 1);
lean_inc(v_toPure_54_);
lean_dec_ref(v_toApplicative_53_);
v___x_55_ = l_Lean_Name_isAnonymous(v_declName_51_);
if (v___x_55_ == 0)
{
lean_object* v_modifyEnv_56_; lean_object* v___f_57_; lean_object* v___x_58_; 
lean_dec(v_toPure_54_);
v_modifyEnv_56_ = lean_ctor_get(v_inst_50_, 1);
lean_inc(v_modifyEnv_56_);
lean_dec_ref(v_inst_50_);
v___f_57_ = lean_alloc_closure((void*)(l_Lean_addDeclarationRanges___redArg___lam__0), 3, 2);
lean_closure_set(v___f_57_, 0, v_declName_51_);
lean_closure_set(v___f_57_, 1, v_declRanges_52_);
v___x_58_ = lean_apply_1(v_modifyEnv_56_, v___f_57_);
return v___x_58_;
}
else
{
lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec_ref(v_declRanges_52_);
lean_dec(v_declName_51_);
lean_dec_ref(v_inst_50_);
v___x_59_ = lean_box(0);
v___x_60_ = lean_apply_2(v_toPure_54_, lean_box(0), v___x_59_);
return v___x_60_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges(lean_object* v_m_61_, lean_object* v_inst_62_, lean_object* v_inst_63_, lean_object* v_declName_64_, lean_object* v_declRanges_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lean_addDeclarationRanges___redArg(v_inst_62_, v_inst_63_, v_declName_64_, v_declRanges_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___redArg___lam__0(lean_object* v___x_67_, lean_object* v_____do__lift_68_, lean_object* v_declName_69_, lean_object* v_toPure_70_, lean_object* v_____do__lift_71_){
_start:
{
lean_object* v___x_72_; lean_object* v_toEnvExtension_73_; lean_object* v_asyncMode_74_; uint8_t v___x_75_; lean_object* v___x_76_; 
v___x_72_ = l_Lean_declRangeExt;
v_toEnvExtension_73_ = lean_ctor_get(v___x_72_, 0);
v_asyncMode_74_ = lean_ctor_get(v_toEnvExtension_73_, 2);
v___x_75_ = 0;
lean_inc(v_declName_69_);
lean_inc_ref(v___x_67_);
v___x_76_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_67_, v___x_72_, v_____do__lift_68_, v_declName_69_, v_asyncMode_74_, v___x_75_);
if (lean_obj_tag(v___x_76_) == 0)
{
uint8_t v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = 1;
v___x_78_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_67_, v___x_72_, v_____do__lift_71_, v_declName_69_, v_asyncMode_74_, v___x_77_);
v___x_79_ = lean_apply_2(v_toPure_70_, lean_box(0), v___x_78_);
return v___x_79_;
}
else
{
lean_object* v___x_80_; 
lean_dec_ref(v_____do__lift_71_);
lean_dec(v_declName_69_);
lean_dec_ref(v___x_67_);
v___x_80_ = lean_apply_2(v_toPure_70_, lean_box(0), v___x_76_);
return v___x_80_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___redArg___lam__1(lean_object* v___x_81_, lean_object* v_declName_82_, lean_object* v_toPure_83_, lean_object* v_toBind_84_, lean_object* v_getEnv_85_, lean_object* v_____do__lift_86_){
_start:
{
lean_object* v___f_87_; lean_object* v___x_88_; 
v___f_87_ = lean_alloc_closure((void*)(l_Lean_findDeclarationRangesCore_x3f___redArg___lam__0), 5, 4);
lean_closure_set(v___f_87_, 0, v___x_81_);
lean_closure_set(v___f_87_, 1, v_____do__lift_86_);
lean_closure_set(v___f_87_, 2, v_declName_82_);
lean_closure_set(v___f_87_, 3, v_toPure_83_);
v___x_88_ = lean_apply_4(v_toBind_84_, lean_box(0), lean_box(0), v_getEnv_85_, v___f_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___redArg(lean_object* v_inst_89_, lean_object* v_inst_90_, lean_object* v_declName_91_){
_start:
{
lean_object* v_toApplicative_92_; lean_object* v_toBind_93_; lean_object* v_getEnv_94_; lean_object* v_toPure_95_; lean_object* v___x_96_; lean_object* v___f_97_; lean_object* v___x_98_; 
v_toApplicative_92_ = lean_ctor_get(v_inst_89_, 0);
lean_inc_ref(v_toApplicative_92_);
v_toBind_93_ = lean_ctor_get(v_inst_89_, 1);
lean_inc_n(v_toBind_93_, 2);
lean_dec_ref(v_inst_89_);
v_getEnv_94_ = lean_ctor_get(v_inst_90_, 0);
lean_inc_n(v_getEnv_94_, 2);
lean_dec_ref(v_inst_90_);
v_toPure_95_ = lean_ctor_get(v_toApplicative_92_, 1);
lean_inc(v_toPure_95_);
lean_dec_ref(v_toApplicative_92_);
v___x_96_ = l_Lean_instInhabitedDeclarationRanges_default;
v___f_97_ = lean_alloc_closure((void*)(l_Lean_findDeclarationRangesCore_x3f___redArg___lam__1), 6, 5);
lean_closure_set(v___f_97_, 0, v___x_96_);
lean_closure_set(v___f_97_, 1, v_declName_91_);
lean_closure_set(v___f_97_, 2, v_toPure_95_);
lean_closure_set(v___f_97_, 3, v_toBind_93_);
lean_closure_set(v___f_97_, 4, v_getEnv_94_);
v___x_98_ = lean_apply_4(v_toBind_93_, lean_box(0), lean_box(0), v_getEnv_94_, v___f_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f(lean_object* v_m_99_, lean_object* v_inst_100_, lean_object* v_inst_101_, lean_object* v_declName_102_){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = l_Lean_findDeclarationRangesCore_x3f___redArg(v_inst_100_, v_inst_101_, v_declName_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__0(lean_object* v_declName_104_, lean_object* v_toPure_105_, lean_object* v_____do__lift_106_){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_____do__lift_106_, v_declName_104_);
v___x_108_ = lean_apply_2(v_toPure_105_, lean_box(0), v___x_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__0___boxed(lean_object* v_declName_109_, lean_object* v_toPure_110_, lean_object* v_____do__lift_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_Lean_findDeclarationRanges_x3f___redArg___lam__0(v_declName_109_, v_toPure_110_, v_____do__lift_111_);
lean_dec(v_____do__lift_111_);
lean_dec(v_declName_109_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__1(lean_object* v___x_113_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lean_st_ref_get(v___x_113_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__1___boxed(lean_object* v___x_116_, lean_object* v___y_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lean_findDeclarationRanges_x3f___redArg___lam__1(v___x_116_);
lean_dec(v___x_116_);
return v_res_118_;
}
}
static lean_object* _init_l_Lean_findDeclarationRanges_x3f___redArg___lam__2___closed__0(void){
_start:
{
lean_object* v___x_119_; lean_object* v___f_120_; 
v___x_119_ = l_Lean_builtinDeclRanges;
v___f_120_ = lean_alloc_closure((void*)(l_Lean_findDeclarationRanges_x3f___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_120_, 0, v___x_119_);
return v___f_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__2(lean_object* v_inst_121_, lean_object* v_toBind_122_, lean_object* v___f_123_, lean_object* v_toPure_124_, lean_object* v_ranges_125_){
_start:
{
if (lean_obj_tag(v_ranges_125_) == 0)
{
lean_object* v___f_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
lean_dec(v_toPure_124_);
v___f_126_ = lean_obj_once(&l_Lean_findDeclarationRanges_x3f___redArg___lam__2___closed__0, &l_Lean_findDeclarationRanges_x3f___redArg___lam__2___closed__0_once, _init_l_Lean_findDeclarationRanges_x3f___redArg___lam__2___closed__0);
v___x_127_ = lean_apply_2(v_inst_121_, lean_box(0), v___f_126_);
v___x_128_ = lean_apply_4(v_toBind_122_, lean_box(0), lean_box(0), v___x_127_, v___f_123_);
return v___x_128_;
}
else
{
lean_object* v___x_129_; 
lean_dec(v___f_123_);
lean_dec(v_toBind_122_);
lean_dec(v_inst_121_);
v___x_129_ = lean_apply_2(v_toPure_124_, lean_box(0), v_ranges_125_);
return v___x_129_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__3(lean_object* v___f_130_, lean_object* v_ranges_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_apply_1(v___f_130_, v_ranges_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__5(lean_object* v_declName_133_, lean_object* v_inst_134_, lean_object* v_inst_135_, lean_object* v_toBind_136_, lean_object* v___f_137_, lean_object* v___f_138_, lean_object* v_env_139_, uint8_t v_____do__lift_140_){
_start:
{
uint8_t v___y_146_; uint8_t v___x_149_; 
lean_inc(v_declName_133_);
lean_inc_ref(v_env_139_);
v___x_149_ = l_Lean_isAuxRecursor(v_env_139_, v_declName_133_);
if (v___x_149_ == 0)
{
uint8_t v___x_150_; 
lean_inc(v_declName_133_);
v___x_150_ = l_Lean_isNoConfusion(v_env_139_, v_declName_133_);
v___y_146_ = v___x_150_;
goto v___jp_145_;
}
else
{
lean_dec_ref(v_env_139_);
v___y_146_ = v___x_149_;
goto v___jp_145_;
}
v___jp_141_:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_142_ = l_Lean_Name_getPrefix(v_declName_133_);
lean_dec(v_declName_133_);
v___x_143_ = l_Lean_findDeclarationRangesCore_x3f___redArg(v_inst_134_, v_inst_135_, v___x_142_);
v___x_144_ = lean_apply_4(v_toBind_136_, lean_box(0), lean_box(0), v___x_143_, v___f_137_);
return v___x_144_;
}
v___jp_145_:
{
if (v___y_146_ == 0)
{
if (v_____do__lift_140_ == 0)
{
lean_object* v___x_147_; lean_object* v___x_148_; 
lean_dec(v___f_137_);
v___x_147_ = l_Lean_findDeclarationRangesCore_x3f___redArg(v_inst_134_, v_inst_135_, v_declName_133_);
v___x_148_ = lean_apply_4(v_toBind_136_, lean_box(0), lean_box(0), v___x_147_, v___f_138_);
return v___x_148_;
}
else
{
lean_dec(v___f_138_);
goto v___jp_141_;
}
}
else
{
lean_dec(v___f_138_);
goto v___jp_141_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__5___boxed(lean_object* v_declName_151_, lean_object* v_inst_152_, lean_object* v_inst_153_, lean_object* v_toBind_154_, lean_object* v___f_155_, lean_object* v___f_156_, lean_object* v_env_157_, lean_object* v_____do__lift_158_){
_start:
{
uint8_t v_____do__lift_252__boxed_159_; lean_object* v_res_160_; 
v_____do__lift_252__boxed_159_ = lean_unbox(v_____do__lift_158_);
v_res_160_ = l_Lean_findDeclarationRanges_x3f___redArg___lam__5(v_declName_151_, v_inst_152_, v_inst_153_, v_toBind_154_, v___f_155_, v___f_156_, v_env_157_, v_____do__lift_252__boxed_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg___lam__4(lean_object* v_declName_161_, lean_object* v_inst_162_, lean_object* v_inst_163_, lean_object* v_toBind_164_, lean_object* v___f_165_, lean_object* v___f_166_, lean_object* v_env_167_){
_start:
{
lean_object* v___f_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
lean_inc(v_toBind_164_);
lean_inc_ref(v_inst_163_);
lean_inc_ref(v_inst_162_);
lean_inc(v_declName_161_);
v___f_168_ = lean_alloc_closure((void*)(l_Lean_findDeclarationRanges_x3f___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_168_, 0, v_declName_161_);
lean_closure_set(v___f_168_, 1, v_inst_162_);
lean_closure_set(v___f_168_, 2, v_inst_163_);
lean_closure_set(v___f_168_, 3, v_toBind_164_);
lean_closure_set(v___f_168_, 4, v___f_165_);
lean_closure_set(v___f_168_, 5, v___f_166_);
lean_closure_set(v___f_168_, 6, v_env_167_);
v___x_169_ = l_Lean_isRec___redArg(v_inst_162_, v_inst_163_, v_declName_161_);
v___x_170_ = lean_apply_4(v_toBind_164_, lean_box(0), lean_box(0), v___x_169_, v___f_168_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___redArg(lean_object* v_inst_171_, lean_object* v_inst_172_, lean_object* v_inst_173_, lean_object* v_declName_174_){
_start:
{
lean_object* v_toApplicative_175_; lean_object* v_toBind_176_; lean_object* v_getEnv_177_; lean_object* v_toPure_178_; lean_object* v___f_179_; lean_object* v___f_180_; lean_object* v___f_181_; lean_object* v___f_182_; lean_object* v___x_183_; 
v_toApplicative_175_ = lean_ctor_get(v_inst_171_, 0);
v_toBind_176_ = lean_ctor_get(v_inst_171_, 1);
lean_inc_n(v_toBind_176_, 3);
v_getEnv_177_ = lean_ctor_get(v_inst_172_, 0);
lean_inc(v_getEnv_177_);
v_toPure_178_ = lean_ctor_get(v_toApplicative_175_, 1);
lean_inc_n(v_toPure_178_, 2);
lean_inc(v_declName_174_);
v___f_179_ = lean_alloc_closure((void*)(l_Lean_findDeclarationRanges_x3f___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_179_, 0, v_declName_174_);
lean_closure_set(v___f_179_, 1, v_toPure_178_);
v___f_180_ = lean_alloc_closure((void*)(l_Lean_findDeclarationRanges_x3f___redArg___lam__2), 5, 4);
lean_closure_set(v___f_180_, 0, v_inst_173_);
lean_closure_set(v___f_180_, 1, v_toBind_176_);
lean_closure_set(v___f_180_, 2, v___f_179_);
lean_closure_set(v___f_180_, 3, v_toPure_178_);
v___f_181_ = lean_alloc_closure((void*)(l_Lean_findDeclarationRanges_x3f___redArg___lam__3), 2, 1);
lean_closure_set(v___f_181_, 0, v___f_180_);
lean_inc_ref(v___f_181_);
v___f_182_ = lean_alloc_closure((void*)(l_Lean_findDeclarationRanges_x3f___redArg___lam__4), 7, 6);
lean_closure_set(v___f_182_, 0, v_declName_174_);
lean_closure_set(v___f_182_, 1, v_inst_171_);
lean_closure_set(v___f_182_, 2, v_inst_172_);
lean_closure_set(v___f_182_, 3, v_toBind_176_);
lean_closure_set(v___f_182_, 4, v___f_181_);
lean_closure_set(v___f_182_, 5, v___f_181_);
v___x_183_ = lean_apply_4(v_toBind_176_, lean_box(0), lean_box(0), v_getEnv_177_, v___f_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f(lean_object* v_m_184_, lean_object* v_inst_185_, lean_object* v_inst_186_, lean_object* v_inst_187_, lean_object* v_declName_188_){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = l_Lean_findDeclarationRanges_x3f___redArg(v_inst_185_, v_inst_186_, v_inst_187_, v_declName_188_);
return v___x_189_;
}
}
lean_object* runtime_initialize_Lean_MonadEnv(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DeclarationRange(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_MonadEnv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DeclarationRange_0__Lean_initFn_00___x40_Lean_DeclarationRange_3757377111____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_builtinDeclRanges = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_builtinDeclRanges);
lean_dec_ref(res);
res = l___private_Lean_DeclarationRange_0__Lean_initFn_00___x40_Lean_DeclarationRange_1764327334____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_declRangeExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_declRangeExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DeclarationRange(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_MonadEnv(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DeclarationRange(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_MonadEnv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DeclarationRange(builtin);
}
#ifdef __cplusplus
}
#endif
