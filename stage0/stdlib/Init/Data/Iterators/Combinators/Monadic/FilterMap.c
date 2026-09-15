// Lean compiler output
// Module: Init.Data.Iterators.Combinators.Monadic.FilterMap
// Imports: public import Init.Data.Iterators.PostconditionMonad public import Init.Data.Iterators.Consumers.Monadic.Loop public import Init.Data.Iterators.Transport import Init.PropLemmas
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
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_toFilterMap___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_toFilterMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_toFilterMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_toFilterMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_filterMap___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_filterMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_filterMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_filterMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_map___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_map___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterMapWithPostcondition___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterMapWithPostcondition___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterMapWithPostcondition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterMapWithPostcondition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIterator___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIterator___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIterator___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIterator___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIterator___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIterator(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIterator___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIterator___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIterator___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIterator___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Iterators_Types_Map_instIterator___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Iterators_Types_Map_instIterator___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Iterators_Types_Map_instIterator___redArg___closed__0 = (const lean_object*)&l_Std_Iterators_Types_Map_instIterator___redArg___closed__0_value;
static const lean_closure_object l_Std_Iterators_Types_Map_instIterator___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Iterators_Types_Map_instIterator___redArg___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Iterators_Types_Map_instIterator___redArg___closed__1 = (const lean_object*)&l_Std_Iterators_Types_Map_instIterator___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIterator___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIterator(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_FilterMap_instFinitenessRelation___redArg();
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_FilterMap_instFinitenessRelation___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_FilterMap_instFinitenessRelation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_FilterMap_instFinitenessRelation___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_Map_instProductivenessRelation___redArg();
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_Map_instProductivenessRelation___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_Map_instProductivenessRelation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_Map_instProductivenessRelation___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIteratorLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIteratorLoop___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIteratorLoop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIteratorLoop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIteratorLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_mapWithPostcondition___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_mapWithPostcondition___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_mapWithPostcondition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_mapWithPostcondition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterWithPostcondition___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterWithPostcondition___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterWithPostcondition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterWithPostcondition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterMapM___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterMapM___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterMapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterMapM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_mapM___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_mapM___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_mapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_mapM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterM___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterM___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterMap___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filterMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_map___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_map___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filter___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filter___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_filter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_mk___redArg(lean_object* v_toFilterMap_1_){
_start:
{
lean_inc(v_toFilterMap_1_);
return v_toFilterMap_1_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_mk___redArg___boxed(lean_object* v_toFilterMap_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l_Std_Iterators_Types_Map_mk___redArg(v_toFilterMap_2_);
lean_dec(v_toFilterMap_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_mk(lean_object* v_00_u03b1_4_, lean_object* v_00_u03b2_5_, lean_object* v_00_u03b3_6_, lean_object* v_m_7_, lean_object* v_n_8_, lean_object* v_lift_9_, lean_object* v_inst_10_, lean_object* v_f_11_, lean_object* v_toFilterMap_12_){
_start:
{
lean_inc(v_toFilterMap_12_);
return v_toFilterMap_12_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_mk___boxed(lean_object* v_00_u03b1_13_, lean_object* v_00_u03b2_14_, lean_object* v_00_u03b3_15_, lean_object* v_m_16_, lean_object* v_n_17_, lean_object* v_lift_18_, lean_object* v_inst_19_, lean_object* v_f_20_, lean_object* v_toFilterMap_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Std_Iterators_Types_Map_mk(v_00_u03b1_13_, v_00_u03b2_14_, v_00_u03b3_15_, v_m_16_, v_n_17_, v_lift_18_, v_inst_19_, v_f_20_, v_toFilterMap_21_);
lean_dec(v_toFilterMap_21_);
lean_dec(v_f_20_);
lean_dec_ref(v_inst_19_);
lean_dec(v_lift_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_toFilterMap___redArg(lean_object* v_self_23_){
_start:
{
lean_inc(v_self_23_);
return v_self_23_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_toFilterMap___redArg___boxed(lean_object* v_self_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Std_Iterators_Types_Map_toFilterMap___redArg(v_self_24_);
lean_dec(v_self_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_toFilterMap(lean_object* v_00_u03b1_26_, lean_object* v_00_u03b2_27_, lean_object* v_00_u03b3_28_, lean_object* v_m_29_, lean_object* v_n_30_, lean_object* v_lift_31_, lean_object* v_inst_32_, lean_object* v_f_33_, lean_object* v_self_34_){
_start:
{
lean_inc(v_self_34_);
return v_self_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_toFilterMap___boxed(lean_object* v_00_u03b1_35_, lean_object* v_00_u03b2_36_, lean_object* v_00_u03b3_37_, lean_object* v_m_38_, lean_object* v_n_39_, lean_object* v_lift_40_, lean_object* v_inst_41_, lean_object* v_f_42_, lean_object* v_self_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Std_Iterators_Types_Map_toFilterMap(v_00_u03b1_35_, v_00_u03b2_36_, v_00_u03b3_37_, v_m_38_, v_n_39_, v_lift_40_, v_inst_41_, v_f_42_, v_self_43_);
lean_dec(v_self_43_);
lean_dec(v_f_42_);
lean_dec_ref(v_inst_41_);
lean_dec(v_lift_40_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_filterMap___redArg(lean_object* v_it_45_){
_start:
{
lean_inc(v_it_45_);
return v_it_45_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_filterMap___redArg___boxed(lean_object* v_it_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Std_IterM_InternalCombinators_filterMap___redArg(v_it_46_);
lean_dec(v_it_46_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_filterMap(lean_object* v_00_u03b1_48_, lean_object* v_00_u03b2_49_, lean_object* v_00_u03b3_50_, lean_object* v_m_51_, lean_object* v_n_52_, lean_object* v_lift_53_, lean_object* v_inst_54_, lean_object* v_f_55_, lean_object* v_it_56_){
_start:
{
lean_inc(v_it_56_);
return v_it_56_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_filterMap___boxed(lean_object* v_00_u03b1_57_, lean_object* v_00_u03b2_58_, lean_object* v_00_u03b3_59_, lean_object* v_m_60_, lean_object* v_n_61_, lean_object* v_lift_62_, lean_object* v_inst_63_, lean_object* v_f_64_, lean_object* v_it_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Std_IterM_InternalCombinators_filterMap(v_00_u03b1_57_, v_00_u03b2_58_, v_00_u03b3_59_, v_m_60_, v_n_61_, v_lift_62_, v_inst_63_, v_f_64_, v_it_65_);
lean_dec(v_it_65_);
lean_dec(v_f_64_);
lean_dec(v_inst_63_);
lean_dec(v_lift_62_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_map___redArg(lean_object* v_it_67_){
_start:
{
lean_inc(v_it_67_);
return v_it_67_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_map___redArg___boxed(lean_object* v_it_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Std_IterM_InternalCombinators_map___redArg(v_it_68_);
lean_dec(v_it_68_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_map(lean_object* v_00_u03b1_70_, lean_object* v_00_u03b2_71_, lean_object* v_00_u03b3_72_, lean_object* v_m_73_, lean_object* v_n_74_, lean_object* v_inst_75_, lean_object* v_lift_76_, lean_object* v_inst_77_, lean_object* v_f_78_, lean_object* v_it_79_){
_start:
{
lean_inc(v_it_79_);
return v_it_79_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_InternalCombinators_map___boxed(lean_object* v_00_u03b1_80_, lean_object* v_00_u03b2_81_, lean_object* v_00_u03b3_82_, lean_object* v_m_83_, lean_object* v_n_84_, lean_object* v_inst_85_, lean_object* v_lift_86_, lean_object* v_inst_87_, lean_object* v_f_88_, lean_object* v_it_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Std_IterM_InternalCombinators_map(v_00_u03b1_80_, v_00_u03b2_81_, v_00_u03b3_82_, v_m_83_, v_n_84_, v_inst_85_, v_lift_86_, v_inst_87_, v_f_88_, v_it_89_);
lean_dec(v_it_89_);
lean_dec(v_f_88_);
lean_dec(v_inst_87_);
lean_dec(v_lift_86_);
lean_dec_ref(v_inst_85_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterMapWithPostcondition___redArg(lean_object* v_it_91_){
_start:
{
lean_inc(v_it_91_);
return v_it_91_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterMapWithPostcondition___redArg___boxed(lean_object* v_it_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Std_IterM_filterMapWithPostcondition___redArg(v_it_92_);
lean_dec(v_it_92_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterMapWithPostcondition(lean_object* v_00_u03b1_94_, lean_object* v_00_u03b2_95_, lean_object* v_00_u03b3_96_, lean_object* v_m_97_, lean_object* v_n_98_, lean_object* v_inst_99_, lean_object* v_inst_100_, lean_object* v_f_101_, lean_object* v_it_102_){
_start:
{
lean_inc(v_it_102_);
return v_it_102_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterMapWithPostcondition___boxed(lean_object* v_00_u03b1_103_, lean_object* v_00_u03b2_104_, lean_object* v_00_u03b3_105_, lean_object* v_m_106_, lean_object* v_n_107_, lean_object* v_inst_108_, lean_object* v_inst_109_, lean_object* v_f_110_, lean_object* v_it_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_Std_IterM_filterMapWithPostcondition(v_00_u03b1_103_, v_00_u03b2_104_, v_00_u03b3_105_, v_m_106_, v_n_107_, v_inst_108_, v_inst_109_, v_f_110_, v_it_111_);
lean_dec(v_it_111_);
lean_dec(v_f_110_);
lean_dec(v_inst_109_);
lean_dec(v_inst_108_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIterator___redArg___lam__0(lean_object* v_it_113_, lean_object* v_toPure_114_, lean_object* v_____do__lift_115_){
_start:
{
if (lean_obj_tag(v_____do__lift_115_) == 0)
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_116_, 0, v_it_113_);
v___x_117_ = lean_apply_2(v_toPure_114_, lean_box(0), v___x_116_);
return v___x_117_;
}
else
{
lean_object* v_val_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v_val_118_ = lean_ctor_get(v_____do__lift_115_, 0);
lean_inc(v_val_118_);
v___x_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_119_, 0, v_it_113_);
lean_ctor_set(v___x_119_, 1, v_val_118_);
v___x_120_ = lean_apply_2(v_toPure_114_, lean_box(0), v___x_119_);
return v___x_120_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIterator___redArg___lam__0___boxed(lean_object* v_it_121_, lean_object* v_toPure_122_, lean_object* v_____do__lift_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l_Std_Iterators_Types_FilterMap_instIterator___redArg___lam__0(v_it_121_, v_toPure_122_, v_____do__lift_123_);
lean_dec(v_____do__lift_123_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIterator___redArg___lam__1(lean_object* v_toPure_125_, lean_object* v_f_126_, lean_object* v_toBind_127_, lean_object* v_____do__lift_128_){
_start:
{
switch(lean_obj_tag(v_____do__lift_128_))
{
case 0:
{
lean_object* v_it_129_; lean_object* v_out_130_; lean_object* v___f_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v_it_129_ = lean_ctor_get(v_____do__lift_128_, 0);
lean_inc(v_it_129_);
v_out_130_ = lean_ctor_get(v_____do__lift_128_, 1);
lean_inc(v_out_130_);
lean_dec_ref_known(v_____do__lift_128_, 2);
v___f_131_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_FilterMap_instIterator___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_131_, 0, v_it_129_);
lean_closure_set(v___f_131_, 1, v_toPure_125_);
v___x_132_ = lean_apply_1(v_f_126_, v_out_130_);
v___x_133_ = lean_apply_4(v_toBind_127_, lean_box(0), lean_box(0), v___x_132_, v___f_131_);
return v___x_133_;
}
case 1:
{
lean_object* v_it_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_142_; 
lean_dec(v_toBind_127_);
lean_dec(v_f_126_);
v_it_134_ = lean_ctor_get(v_____do__lift_128_, 0);
v_isSharedCheck_142_ = !lean_is_exclusive(v_____do__lift_128_);
if (v_isSharedCheck_142_ == 0)
{
v___x_136_ = v_____do__lift_128_;
v_isShared_137_ = v_isSharedCheck_142_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_it_134_);
lean_dec(v_____do__lift_128_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_142_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_139_; 
if (v_isShared_137_ == 0)
{
v___x_139_ = v___x_136_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v_it_134_);
v___x_139_ = v_reuseFailAlloc_141_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
lean_object* v___x_140_; 
v___x_140_ = lean_apply_2(v_toPure_125_, lean_box(0), v___x_139_);
return v___x_140_;
}
}
}
default: 
{
lean_object* v___x_143_; lean_object* v___x_144_; 
lean_dec(v_toBind_127_);
lean_dec(v_f_126_);
v___x_143_ = lean_box(2);
v___x_144_ = lean_apply_2(v_toPure_125_, lean_box(0), v___x_143_);
return v___x_144_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIterator___redArg___lam__2(lean_object* v_inst_145_, lean_object* v_lift_146_, lean_object* v_toBind_147_, lean_object* v___f_148_, lean_object* v_it_149_){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_150_ = lean_apply_1(v_inst_145_, v_it_149_);
v___x_151_ = lean_apply_2(v_lift_146_, lean_box(0), v___x_150_);
v___x_152_ = lean_apply_4(v_toBind_147_, lean_box(0), lean_box(0), v___x_151_, v___f_148_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIterator___redArg(lean_object* v_lift_153_, lean_object* v_f_154_, lean_object* v_inst_155_, lean_object* v_inst_156_){
_start:
{
lean_object* v_toApplicative_157_; lean_object* v_toBind_158_; lean_object* v_toPure_159_; lean_object* v___f_160_; lean_object* v___f_161_; 
v_toApplicative_157_ = lean_ctor_get(v_inst_156_, 0);
lean_inc_ref(v_toApplicative_157_);
v_toBind_158_ = lean_ctor_get(v_inst_156_, 1);
lean_inc_n(v_toBind_158_, 2);
lean_dec_ref(v_inst_156_);
v_toPure_159_ = lean_ctor_get(v_toApplicative_157_, 1);
lean_inc(v_toPure_159_);
lean_dec_ref(v_toApplicative_157_);
v___f_160_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_FilterMap_instIterator___redArg___lam__1), 4, 3);
lean_closure_set(v___f_160_, 0, v_toPure_159_);
lean_closure_set(v___f_160_, 1, v_f_154_);
lean_closure_set(v___f_160_, 2, v_toBind_158_);
v___f_161_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_FilterMap_instIterator___redArg___lam__2), 5, 4);
lean_closure_set(v___f_161_, 0, v_inst_155_);
lean_closure_set(v___f_161_, 1, v_lift_153_);
lean_closure_set(v___f_161_, 2, v_toBind_158_);
lean_closure_set(v___f_161_, 3, v___f_160_);
return v___f_161_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIterator(lean_object* v_00_u03b1_162_, lean_object* v_00_u03b2_163_, lean_object* v_00_u03b3_164_, lean_object* v_m_165_, lean_object* v_n_166_, lean_object* v_lift_167_, lean_object* v_f_168_, lean_object* v_inst_169_, lean_object* v_inst_170_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l_Std_Iterators_Types_FilterMap_instIterator___redArg(v_lift_167_, v_f_168_, v_inst_169_, v_inst_170_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIterator___redArg___lam__0(lean_object* v_a_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_173_, 0, v_a_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIterator___redArg___lam__1(lean_object* v_s_174_){
_start:
{
switch(lean_obj_tag(v_s_174_))
{
case 0:
{
lean_object* v_it_175_; lean_object* v_out_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_183_; 
v_it_175_ = lean_ctor_get(v_s_174_, 0);
v_out_176_ = lean_ctor_get(v_s_174_, 1);
v_isSharedCheck_183_ = !lean_is_exclusive(v_s_174_);
if (v_isSharedCheck_183_ == 0)
{
v___x_178_ = v_s_174_;
v_isShared_179_ = v_isSharedCheck_183_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_out_176_);
lean_inc(v_it_175_);
lean_dec(v_s_174_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_183_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_181_; 
if (v_isShared_179_ == 0)
{
v___x_181_ = v___x_178_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v_it_175_);
lean_ctor_set(v_reuseFailAlloc_182_, 1, v_out_176_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
return v___x_181_;
}
}
}
case 1:
{
lean_object* v_it_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
v_it_184_ = lean_ctor_get(v_s_174_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v_s_174_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v_s_174_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_it_184_);
lean_dec(v_s_174_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_it_184_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
default: 
{
return v_s_174_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIterator___redArg___lam__3(lean_object* v_toPure_192_, lean_object* v_f_193_, lean_object* v_map_194_, lean_object* v___f_195_, lean_object* v_toBind_196_, lean_object* v_____do__lift_197_){
_start:
{
switch(lean_obj_tag(v_____do__lift_197_))
{
case 0:
{
lean_object* v_it_198_; lean_object* v_out_199_; lean_object* v___f_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v_it_198_ = lean_ctor_get(v_____do__lift_197_, 0);
lean_inc(v_it_198_);
v_out_199_ = lean_ctor_get(v_____do__lift_197_, 1);
lean_inc(v_out_199_);
lean_dec_ref_known(v_____do__lift_197_, 2);
v___f_200_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_FilterMap_instIterator___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_200_, 0, v_it_198_);
lean_closure_set(v___f_200_, 1, v_toPure_192_);
v___x_201_ = lean_apply_1(v_f_193_, v_out_199_);
v___x_202_ = lean_apply_4(v_map_194_, lean_box(0), lean_box(0), v___f_195_, v___x_201_);
v___x_203_ = lean_apply_4(v_toBind_196_, lean_box(0), lean_box(0), v___x_202_, v___f_200_);
return v___x_203_;
}
case 1:
{
lean_object* v_it_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_212_; 
lean_dec(v_toBind_196_);
lean_dec_ref(v___f_195_);
lean_dec(v_map_194_);
lean_dec(v_f_193_);
v_it_204_ = lean_ctor_get(v_____do__lift_197_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v_____do__lift_197_);
if (v_isSharedCheck_212_ == 0)
{
v___x_206_ = v_____do__lift_197_;
v_isShared_207_ = v_isSharedCheck_212_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_it_204_);
lean_dec(v_____do__lift_197_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_212_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_209_; 
if (v_isShared_207_ == 0)
{
v___x_209_ = v___x_206_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_it_204_);
v___x_209_ = v_reuseFailAlloc_211_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
lean_object* v___x_210_; 
v___x_210_ = lean_apply_2(v_toPure_192_, lean_box(0), v___x_209_);
return v___x_210_;
}
}
}
default: 
{
lean_object* v___x_213_; lean_object* v___x_214_; 
lean_dec(v_toBind_196_);
lean_dec_ref(v___f_195_);
lean_dec(v_map_194_);
lean_dec(v_f_193_);
v___x_213_ = lean_box(2);
v___x_214_ = lean_apply_2(v_toPure_192_, lean_box(0), v___x_213_);
return v___x_214_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIterator___redArg___lam__2(lean_object* v_toFunctor_215_, lean_object* v_toPure_216_, lean_object* v_f_217_, lean_object* v___f_218_, lean_object* v_toBind_219_, lean_object* v_inst_220_, lean_object* v_lift_221_, lean_object* v___f_222_, lean_object* v_it_223_){
_start:
{
lean_object* v_map_224_; lean_object* v___f_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v_map_224_ = lean_ctor_get(v_toFunctor_215_, 0);
lean_inc_n(v_map_224_, 2);
lean_dec_ref(v_toFunctor_215_);
lean_inc(v_toBind_219_);
v___f_225_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_Map_instIterator___redArg___lam__3), 6, 5);
lean_closure_set(v___f_225_, 0, v_toPure_216_);
lean_closure_set(v___f_225_, 1, v_f_217_);
lean_closure_set(v___f_225_, 2, v_map_224_);
lean_closure_set(v___f_225_, 3, v___f_218_);
lean_closure_set(v___f_225_, 4, v_toBind_219_);
v___x_226_ = lean_apply_1(v_inst_220_, v_it_223_);
v___x_227_ = lean_apply_2(v_lift_221_, lean_box(0), v___x_226_);
v___x_228_ = lean_apply_4(v_toBind_219_, lean_box(0), lean_box(0), v___x_227_, v___f_225_);
v___x_229_ = lean_apply_4(v_map_224_, lean_box(0), lean_box(0), v___f_222_, v___x_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIterator___redArg(lean_object* v_inst_232_, lean_object* v_inst_233_, lean_object* v_lift_234_, lean_object* v_f_235_){
_start:
{
lean_object* v_toApplicative_236_; lean_object* v_toBind_237_; lean_object* v_toFunctor_238_; lean_object* v_toPure_239_; lean_object* v___f_240_; lean_object* v___f_241_; lean_object* v___f_242_; 
v_toApplicative_236_ = lean_ctor_get(v_inst_232_, 0);
lean_inc_ref(v_toApplicative_236_);
v_toBind_237_ = lean_ctor_get(v_inst_232_, 1);
lean_inc(v_toBind_237_);
lean_dec_ref(v_inst_232_);
v_toFunctor_238_ = lean_ctor_get(v_toApplicative_236_, 0);
lean_inc_ref(v_toFunctor_238_);
v_toPure_239_ = lean_ctor_get(v_toApplicative_236_, 1);
lean_inc(v_toPure_239_);
lean_dec_ref(v_toApplicative_236_);
v___f_240_ = ((lean_object*)(l_Std_Iterators_Types_Map_instIterator___redArg___closed__0));
v___f_241_ = ((lean_object*)(l_Std_Iterators_Types_Map_instIterator___redArg___closed__1));
v___f_242_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_Map_instIterator___redArg___lam__2), 9, 8);
lean_closure_set(v___f_242_, 0, v_toFunctor_238_);
lean_closure_set(v___f_242_, 1, v_toPure_239_);
lean_closure_set(v___f_242_, 2, v_f_235_);
lean_closure_set(v___f_242_, 3, v___f_240_);
lean_closure_set(v___f_242_, 4, v_toBind_237_);
lean_closure_set(v___f_242_, 5, v_inst_233_);
lean_closure_set(v___f_242_, 6, v_lift_234_);
lean_closure_set(v___f_242_, 7, v___f_241_);
return v___f_242_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIterator(lean_object* v_00_u03b1_243_, lean_object* v_00_u03b2_244_, lean_object* v_00_u03b3_245_, lean_object* v_m_246_, lean_object* v_n_247_, lean_object* v_inst_248_, lean_object* v_inst_249_, lean_object* v_lift_250_, lean_object* v_f_251_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = l_Std_Iterators_Types_Map_instIterator___redArg(v_inst_248_, v_inst_249_, v_lift_250_, v_f_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_FilterMap_instFinitenessRelation___redArg(){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = lean_box(0);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_FilterMap_instFinitenessRelation___redArg___boxed(lean_object* v___dummy_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_FilterMap_instFinitenessRelation___redArg();
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_FilterMap_instFinitenessRelation(lean_object* v_00_u03b1_257_, lean_object* v_00_u03b2_258_, lean_object* v_00_u03b3_259_, lean_object* v_m_260_, lean_object* v_n_261_, lean_object* v_inst_262_, lean_object* v_inst_263_, lean_object* v_lift_264_, lean_object* v_f_265_, lean_object* v_inst_266_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = lean_box(0);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_FilterMap_instFinitenessRelation___boxed(lean_object* v_00_u03b1_268_, lean_object* v_00_u03b2_269_, lean_object* v_00_u03b3_270_, lean_object* v_m_271_, lean_object* v_n_272_, lean_object* v_inst_273_, lean_object* v_inst_274_, lean_object* v_lift_275_, lean_object* v_f_276_, lean_object* v_inst_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_FilterMap_instFinitenessRelation(v_00_u03b1_268_, v_00_u03b2_269_, v_00_u03b3_270_, v_m_271_, v_n_272_, v_inst_273_, v_inst_274_, v_lift_275_, v_f_276_, v_inst_277_);
lean_dec(v_f_276_);
lean_dec(v_lift_275_);
lean_dec(v_inst_274_);
lean_dec_ref(v_inst_273_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_Map_instProductivenessRelation___redArg(){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = lean_box(0);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_Map_instProductivenessRelation___redArg___boxed(lean_object* v___dummy_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_Map_instProductivenessRelation___redArg();
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_Map_instProductivenessRelation(lean_object* v_00_u03b1_283_, lean_object* v_00_u03b2_284_, lean_object* v_00_u03b3_285_, lean_object* v_m_286_, lean_object* v_n_287_, lean_object* v_inst_288_, lean_object* v_inst_289_, lean_object* v_lift_290_, lean_object* v_f_291_, lean_object* v_inst_292_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = lean_box(0);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_Map_instProductivenessRelation___boxed(lean_object* v_00_u03b1_294_, lean_object* v_00_u03b2_295_, lean_object* v_00_u03b3_296_, lean_object* v_m_297_, lean_object* v_n_298_, lean_object* v_inst_299_, lean_object* v_inst_300_, lean_object* v_lift_301_, lean_object* v_f_302_, lean_object* v_inst_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l___private_Init_Data_Iterators_Combinators_Monadic_FilterMap_0__Std_Iterators_Types_Map_instProductivenessRelation(v_00_u03b1_294_, v_00_u03b2_295_, v_00_u03b3_296_, v_m_297_, v_n_298_, v_inst_299_, v_inst_300_, v_lift_301_, v_f_302_, v_inst_303_);
lean_dec(v_f_302_);
lean_dec(v_lift_301_);
lean_dec(v_inst_300_);
lean_dec_ref(v_inst_299_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg___lam__0(lean_object* v_toPure_305_, lean_object* v_recur_306_, lean_object* v_it_307_, lean_object* v_____do__lift_308_){
_start:
{
if (lean_obj_tag(v_____do__lift_308_) == 0)
{
lean_object* v_a_309_; lean_object* v___x_310_; 
lean_dec(v_it_307_);
lean_dec(v_recur_306_);
v_a_309_ = lean_ctor_get(v_____do__lift_308_, 0);
lean_inc(v_a_309_);
lean_dec_ref_known(v_____do__lift_308_, 1);
v___x_310_ = lean_apply_2(v_toPure_305_, lean_box(0), v_a_309_);
return v___x_310_;
}
else
{
lean_object* v_a_311_; lean_object* v___x_312_; 
lean_dec(v_toPure_305_);
v_a_311_ = lean_ctor_get(v_____do__lift_308_, 0);
lean_inc(v_a_311_);
lean_dec_ref_known(v_____do__lift_308_, 1);
v___x_312_ = lean_apply_4(v_recur_306_, v_it_307_, v_a_311_, lean_box(0), lean_box(0));
return v___x_312_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg___lam__1(lean_object* v_toPure_313_, lean_object* v_recur_314_, lean_object* v___y_315_, lean_object* v_acc_316_, lean_object* v_toBind_317_, lean_object* v_s_318_){
_start:
{
switch(lean_obj_tag(v_s_318_))
{
case 0:
{
lean_object* v_it_319_; lean_object* v_out_320_; lean_object* v___f_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v_it_319_ = lean_ctor_get(v_s_318_, 0);
lean_inc(v_it_319_);
v_out_320_ = lean_ctor_get(v_s_318_, 1);
lean_inc(v_out_320_);
lean_dec_ref_known(v_s_318_, 2);
v___f_321_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg___lam__0), 4, 3);
lean_closure_set(v___f_321_, 0, v_toPure_313_);
lean_closure_set(v___f_321_, 1, v_recur_314_);
lean_closure_set(v___f_321_, 2, v_it_319_);
v___x_322_ = lean_apply_3(v___y_315_, v_out_320_, lean_box(0), v_acc_316_);
v___x_323_ = lean_apply_4(v_toBind_317_, lean_box(0), lean_box(0), v___x_322_, v___f_321_);
return v___x_323_;
}
case 1:
{
lean_object* v_it_324_; lean_object* v___x_325_; 
lean_dec(v_toBind_317_);
lean_dec(v___y_315_);
lean_dec(v_toPure_313_);
v_it_324_ = lean_ctor_get(v_s_318_, 0);
lean_inc(v_it_324_);
lean_dec_ref_known(v_s_318_, 1);
v___x_325_ = lean_apply_4(v_recur_314_, v_it_324_, v_acc_316_, lean_box(0), lean_box(0));
return v___x_325_;
}
default: 
{
lean_object* v___x_326_; 
lean_dec(v_toBind_317_);
lean_dec(v___y_315_);
lean_dec(v_recur_314_);
v___x_326_ = lean_apply_2(v_toPure_313_, lean_box(0), v_acc_316_);
return v___x_326_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg___lam__4(lean_object* v_inst_327_, lean_object* v_toPure_328_, lean_object* v___y_329_, lean_object* v_toBind_330_, lean_object* v_f_331_, lean_object* v_inst_332_, lean_object* v_lift_333_, lean_object* v_lift_334_, lean_object* v_it_335_, lean_object* v_acc_336_, lean_object* v_hP_337_, lean_object* v_recur_338_){
_start:
{
lean_object* v_toApplicative_339_; lean_object* v_toBind_340_; lean_object* v_toPure_341_; lean_object* v___f_342_; lean_object* v___f_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v_toApplicative_339_ = lean_ctor_get(v_inst_327_, 0);
lean_inc_ref(v_toApplicative_339_);
v_toBind_340_ = lean_ctor_get(v_inst_327_, 1);
lean_inc_n(v_toBind_340_, 2);
lean_dec_ref(v_inst_327_);
v_toPure_341_ = lean_ctor_get(v_toApplicative_339_, 1);
lean_inc(v_toPure_341_);
lean_dec_ref(v_toApplicative_339_);
v___f_342_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg___lam__1), 6, 5);
lean_closure_set(v___f_342_, 0, v_toPure_328_);
lean_closure_set(v___f_342_, 1, v_recur_338_);
lean_closure_set(v___f_342_, 2, v___y_329_);
lean_closure_set(v___f_342_, 3, v_acc_336_);
lean_closure_set(v___f_342_, 4, v_toBind_330_);
v___f_343_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_FilterMap_instIterator___redArg___lam__1), 4, 3);
lean_closure_set(v___f_343_, 0, v_toPure_341_);
lean_closure_set(v___f_343_, 1, v_f_331_);
lean_closure_set(v___f_343_, 2, v_toBind_340_);
v___x_344_ = lean_apply_1(v_inst_332_, v_it_335_);
v___x_345_ = lean_apply_2(v_lift_333_, lean_box(0), v___x_344_);
v___x_346_ = lean_apply_4(v_toBind_340_, lean_box(0), lean_box(0), v___x_345_, v___f_343_);
v___x_347_ = lean_apply_4(v_lift_334_, lean_box(0), lean_box(0), v___f_342_, v___x_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg___lam__2(lean_object* v_inst_348_, lean_object* v_inst_349_, lean_object* v_f_350_, lean_object* v_inst_351_, lean_object* v_lift_352_, lean_object* v_lift_353_, lean_object* v_00_u03b3_354_, lean_object* v_Pl_355_, lean_object* v_it_356_, lean_object* v_init_357_, lean_object* v___y_358_){
_start:
{
lean_object* v_toApplicative_359_; lean_object* v_toBind_360_; lean_object* v_toPure_361_; lean_object* v___f_362_; lean_object* v___x_363_; 
v_toApplicative_359_ = lean_ctor_get(v_inst_348_, 0);
lean_inc_ref(v_toApplicative_359_);
v_toBind_360_ = lean_ctor_get(v_inst_348_, 1);
lean_inc(v_toBind_360_);
lean_dec_ref(v_inst_348_);
v_toPure_361_ = lean_ctor_get(v_toApplicative_359_, 1);
lean_inc(v_toPure_361_);
lean_dec_ref(v_toApplicative_359_);
v___f_362_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg___lam__4), 12, 8);
lean_closure_set(v___f_362_, 0, v_inst_349_);
lean_closure_set(v___f_362_, 1, v_toPure_361_);
lean_closure_set(v___f_362_, 2, v___y_358_);
lean_closure_set(v___f_362_, 3, v_toBind_360_);
lean_closure_set(v___f_362_, 4, v_f_350_);
lean_closure_set(v___f_362_, 5, v_inst_351_);
lean_closure_set(v___f_362_, 6, v_lift_352_);
lean_closure_set(v___f_362_, 7, v_lift_353_);
v___x_363_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_362_, v_it_356_, v_init_357_, lean_box(0));
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg(lean_object* v_inst_364_, lean_object* v_inst_365_, lean_object* v_inst_366_, lean_object* v_lift_367_, lean_object* v_f_368_){
_start:
{
lean_object* v___f_369_; 
v___f_369_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg___lam__2), 11, 5);
lean_closure_set(v___f_369_, 0, v_inst_365_);
lean_closure_set(v___f_369_, 1, v_inst_364_);
lean_closure_set(v___f_369_, 2, v_f_368_);
lean_closure_set(v___f_369_, 3, v_inst_366_);
lean_closure_set(v___f_369_, 4, v_lift_367_);
return v___f_369_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_FilterMap_instIteratorLoop(lean_object* v_00_u03b1_370_, lean_object* v_00_u03b2_371_, lean_object* v_00_u03b3_372_, lean_object* v_m_373_, lean_object* v_n_374_, lean_object* v_o_375_, lean_object* v_inst_376_, lean_object* v_inst_377_, lean_object* v_inst_378_, lean_object* v_lift_379_, lean_object* v_f_380_){
_start:
{
lean_object* v___f_381_; 
v___f_381_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg___lam__2), 11, 5);
lean_closure_set(v___f_381_, 0, v_inst_377_);
lean_closure_set(v___f_381_, 1, v_inst_376_);
lean_closure_set(v___f_381_, 2, v_f_380_);
lean_closure_set(v___f_381_, 3, v_inst_378_);
lean_closure_set(v___f_381_, 4, v_lift_379_);
return v___f_381_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIteratorLoop___redArg___lam__6(lean_object* v_inst_382_, lean_object* v_toPure_383_, lean_object* v___y_384_, lean_object* v_toBind_385_, lean_object* v_f_386_, lean_object* v___f_387_, lean_object* v_inst_388_, lean_object* v_lift_389_, lean_object* v___f_390_, lean_object* v_lift_391_, lean_object* v_it_392_, lean_object* v_acc_393_, lean_object* v_hP_394_, lean_object* v_recur_395_){
_start:
{
lean_object* v_toApplicative_396_; lean_object* v_toFunctor_397_; lean_object* v_toBind_398_; lean_object* v_toPure_399_; lean_object* v_map_400_; lean_object* v___f_401_; lean_object* v___f_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v_toApplicative_396_ = lean_ctor_get(v_inst_382_, 0);
lean_inc_ref(v_toApplicative_396_);
v_toFunctor_397_ = lean_ctor_get(v_toApplicative_396_, 0);
lean_inc_ref(v_toFunctor_397_);
v_toBind_398_ = lean_ctor_get(v_inst_382_, 1);
lean_inc_n(v_toBind_398_, 2);
lean_dec_ref(v_inst_382_);
v_toPure_399_ = lean_ctor_get(v_toApplicative_396_, 1);
lean_inc(v_toPure_399_);
lean_dec_ref(v_toApplicative_396_);
v_map_400_ = lean_ctor_get(v_toFunctor_397_, 0);
lean_inc_n(v_map_400_, 2);
lean_dec_ref(v_toFunctor_397_);
v___f_401_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_FilterMap_instIteratorLoop___redArg___lam__1), 6, 5);
lean_closure_set(v___f_401_, 0, v_toPure_383_);
lean_closure_set(v___f_401_, 1, v_recur_395_);
lean_closure_set(v___f_401_, 2, v___y_384_);
lean_closure_set(v___f_401_, 3, v_acc_393_);
lean_closure_set(v___f_401_, 4, v_toBind_385_);
v___f_402_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_Map_instIterator___redArg___lam__3), 6, 5);
lean_closure_set(v___f_402_, 0, v_toPure_399_);
lean_closure_set(v___f_402_, 1, v_f_386_);
lean_closure_set(v___f_402_, 2, v_map_400_);
lean_closure_set(v___f_402_, 3, v___f_387_);
lean_closure_set(v___f_402_, 4, v_toBind_398_);
v___x_403_ = lean_apply_1(v_inst_388_, v_it_392_);
v___x_404_ = lean_apply_2(v_lift_389_, lean_box(0), v___x_403_);
v___x_405_ = lean_apply_4(v_toBind_398_, lean_box(0), lean_box(0), v___x_404_, v___f_402_);
v___x_406_ = lean_apply_4(v_map_400_, lean_box(0), lean_box(0), v___f_390_, v___x_405_);
v___x_407_ = lean_apply_4(v_lift_391_, lean_box(0), lean_box(0), v___f_401_, v___x_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIteratorLoop___redArg___lam__0(lean_object* v_inst_408_, lean_object* v_inst_409_, lean_object* v_f_410_, lean_object* v___f_411_, lean_object* v_inst_412_, lean_object* v_lift_413_, lean_object* v___f_414_, lean_object* v_lift_415_, lean_object* v_00_u03b3_416_, lean_object* v_Pl_417_, lean_object* v_it_418_, lean_object* v_init_419_, lean_object* v___y_420_){
_start:
{
lean_object* v_toApplicative_421_; lean_object* v_toBind_422_; lean_object* v_toPure_423_; lean_object* v___f_424_; lean_object* v___x_425_; 
v_toApplicative_421_ = lean_ctor_get(v_inst_408_, 0);
lean_inc_ref(v_toApplicative_421_);
v_toBind_422_ = lean_ctor_get(v_inst_408_, 1);
lean_inc(v_toBind_422_);
lean_dec_ref(v_inst_408_);
v_toPure_423_ = lean_ctor_get(v_toApplicative_421_, 1);
lean_inc(v_toPure_423_);
lean_dec_ref(v_toApplicative_421_);
v___f_424_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_Map_instIteratorLoop___redArg___lam__6), 14, 10);
lean_closure_set(v___f_424_, 0, v_inst_409_);
lean_closure_set(v___f_424_, 1, v_toPure_423_);
lean_closure_set(v___f_424_, 2, v___y_420_);
lean_closure_set(v___f_424_, 3, v_toBind_422_);
lean_closure_set(v___f_424_, 4, v_f_410_);
lean_closure_set(v___f_424_, 5, v___f_411_);
lean_closure_set(v___f_424_, 6, v_inst_412_);
lean_closure_set(v___f_424_, 7, v_lift_413_);
lean_closure_set(v___f_424_, 8, v___f_414_);
lean_closure_set(v___f_424_, 9, v_lift_415_);
v___x_425_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_424_, v_it_418_, v_init_419_, lean_box(0));
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIteratorLoop___redArg(lean_object* v_inst_426_, lean_object* v_inst_427_, lean_object* v_inst_428_, lean_object* v_lift_429_, lean_object* v_f_430_){
_start:
{
lean_object* v___f_431_; lean_object* v___f_432_; lean_object* v___f_433_; 
v___f_431_ = ((lean_object*)(l_Std_Iterators_Types_Map_instIterator___redArg___closed__1));
v___f_432_ = ((lean_object*)(l_Std_Iterators_Types_Map_instIterator___redArg___closed__0));
v___f_433_ = lean_alloc_closure((void*)(l_Std_Iterators_Types_Map_instIteratorLoop___redArg___lam__0), 13, 7);
lean_closure_set(v___f_433_, 0, v_inst_427_);
lean_closure_set(v___f_433_, 1, v_inst_426_);
lean_closure_set(v___f_433_, 2, v_f_430_);
lean_closure_set(v___f_433_, 3, v___f_432_);
lean_closure_set(v___f_433_, 4, v_inst_428_);
lean_closure_set(v___f_433_, 5, v_lift_429_);
lean_closure_set(v___f_433_, 6, v___f_431_);
return v___f_433_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Types_Map_instIteratorLoop(lean_object* v_00_u03b1_434_, lean_object* v_00_u03b2_435_, lean_object* v_00_u03b3_436_, lean_object* v_m_437_, lean_object* v_n_438_, lean_object* v_o_439_, lean_object* v_inst_440_, lean_object* v_inst_441_, lean_object* v_inst_442_, lean_object* v_lift_443_, lean_object* v_f_444_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Std_Iterators_Types_Map_instIteratorLoop___redArg(v_inst_440_, v_inst_441_, v_inst_442_, v_lift_443_, v_f_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_mapWithPostcondition___redArg(lean_object* v_it_446_){
_start:
{
lean_inc(v_it_446_);
return v_it_446_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_mapWithPostcondition___redArg___boxed(lean_object* v_it_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_Std_IterM_mapWithPostcondition___redArg(v_it_447_);
lean_dec(v_it_447_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_mapWithPostcondition(lean_object* v_00_u03b1_449_, lean_object* v_00_u03b2_450_, lean_object* v_00_u03b3_451_, lean_object* v_m_452_, lean_object* v_n_453_, lean_object* v_inst_454_, lean_object* v_inst_455_, lean_object* v_inst_456_, lean_object* v_f_457_, lean_object* v_it_458_){
_start:
{
lean_inc(v_it_458_);
return v_it_458_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_mapWithPostcondition___boxed(lean_object* v_00_u03b1_459_, lean_object* v_00_u03b2_460_, lean_object* v_00_u03b3_461_, lean_object* v_m_462_, lean_object* v_n_463_, lean_object* v_inst_464_, lean_object* v_inst_465_, lean_object* v_inst_466_, lean_object* v_f_467_, lean_object* v_it_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Std_IterM_mapWithPostcondition(v_00_u03b1_459_, v_00_u03b2_460_, v_00_u03b3_461_, v_m_462_, v_n_463_, v_inst_464_, v_inst_465_, v_inst_466_, v_f_467_, v_it_468_);
lean_dec(v_it_468_);
lean_dec(v_f_467_);
lean_dec(v_inst_466_);
lean_dec(v_inst_465_);
lean_dec_ref(v_inst_464_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterWithPostcondition___redArg(lean_object* v_it_470_){
_start:
{
lean_inc(v_it_470_);
return v_it_470_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterWithPostcondition___redArg___boxed(lean_object* v_it_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l_Std_IterM_filterWithPostcondition___redArg(v_it_471_);
lean_dec(v_it_471_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterWithPostcondition(lean_object* v_00_u03b1_473_, lean_object* v_00_u03b2_474_, lean_object* v_m_475_, lean_object* v_n_476_, lean_object* v_inst_477_, lean_object* v_inst_478_, lean_object* v_inst_479_, lean_object* v_f_480_, lean_object* v_it_481_){
_start:
{
lean_inc(v_it_481_);
return v_it_481_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterWithPostcondition___boxed(lean_object* v_00_u03b1_482_, lean_object* v_00_u03b2_483_, lean_object* v_m_484_, lean_object* v_n_485_, lean_object* v_inst_486_, lean_object* v_inst_487_, lean_object* v_inst_488_, lean_object* v_f_489_, lean_object* v_it_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Std_IterM_filterWithPostcondition(v_00_u03b1_482_, v_00_u03b2_483_, v_m_484_, v_n_485_, v_inst_486_, v_inst_487_, v_inst_488_, v_f_489_, v_it_490_);
lean_dec(v_it_490_);
lean_dec(v_f_489_);
lean_dec(v_inst_488_);
lean_dec(v_inst_487_);
lean_dec_ref(v_inst_486_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterMapM___redArg(lean_object* v_it_492_){
_start:
{
lean_inc(v_it_492_);
return v_it_492_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterMapM___redArg___boxed(lean_object* v_it_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Std_IterM_filterMapM___redArg(v_it_493_);
lean_dec(v_it_493_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterMapM(lean_object* v_00_u03b1_495_, lean_object* v_00_u03b2_496_, lean_object* v_00_u03b3_497_, lean_object* v_m_498_, lean_object* v_n_499_, lean_object* v_inst_500_, lean_object* v_inst_501_, lean_object* v_inst_502_, lean_object* v_inst_503_, lean_object* v_f_504_, lean_object* v_it_505_){
_start:
{
lean_inc(v_it_505_);
return v_it_505_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterMapM___boxed(lean_object* v_00_u03b1_506_, lean_object* v_00_u03b2_507_, lean_object* v_00_u03b3_508_, lean_object* v_m_509_, lean_object* v_n_510_, lean_object* v_inst_511_, lean_object* v_inst_512_, lean_object* v_inst_513_, lean_object* v_inst_514_, lean_object* v_f_515_, lean_object* v_it_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Std_IterM_filterMapM(v_00_u03b1_506_, v_00_u03b2_507_, v_00_u03b3_508_, v_m_509_, v_n_510_, v_inst_511_, v_inst_512_, v_inst_513_, v_inst_514_, v_f_515_, v_it_516_);
lean_dec(v_it_516_);
lean_dec(v_f_515_);
lean_dec(v_inst_514_);
lean_dec(v_inst_513_);
lean_dec_ref(v_inst_512_);
lean_dec(v_inst_511_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_mapM___redArg(lean_object* v_it_518_){
_start:
{
lean_inc(v_it_518_);
return v_it_518_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_mapM___redArg___boxed(lean_object* v_it_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_Std_IterM_mapM___redArg(v_it_519_);
lean_dec(v_it_519_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_mapM(lean_object* v_00_u03b1_521_, lean_object* v_00_u03b2_522_, lean_object* v_00_u03b3_523_, lean_object* v_m_524_, lean_object* v_n_525_, lean_object* v_inst_526_, lean_object* v_inst_527_, lean_object* v_inst_528_, lean_object* v_inst_529_, lean_object* v_f_530_, lean_object* v_it_531_){
_start:
{
lean_inc(v_it_531_);
return v_it_531_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_mapM___boxed(lean_object* v_00_u03b1_532_, lean_object* v_00_u03b2_533_, lean_object* v_00_u03b3_534_, lean_object* v_m_535_, lean_object* v_n_536_, lean_object* v_inst_537_, lean_object* v_inst_538_, lean_object* v_inst_539_, lean_object* v_inst_540_, lean_object* v_f_541_, lean_object* v_it_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l_Std_IterM_mapM(v_00_u03b1_532_, v_00_u03b2_533_, v_00_u03b3_534_, v_m_535_, v_n_536_, v_inst_537_, v_inst_538_, v_inst_539_, v_inst_540_, v_f_541_, v_it_542_);
lean_dec(v_it_542_);
lean_dec(v_f_541_);
lean_dec(v_inst_540_);
lean_dec(v_inst_539_);
lean_dec_ref(v_inst_538_);
lean_dec(v_inst_537_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterM___redArg(lean_object* v_it_544_){
_start:
{
lean_inc(v_it_544_);
return v_it_544_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterM___redArg___boxed(lean_object* v_it_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Std_IterM_filterM___redArg(v_it_545_);
lean_dec(v_it_545_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterM(lean_object* v_00_u03b1_547_, lean_object* v_00_u03b2_548_, lean_object* v_m_549_, lean_object* v_n_550_, lean_object* v_inst_551_, lean_object* v_inst_552_, lean_object* v_inst_553_, lean_object* v_inst_554_, lean_object* v_f_555_, lean_object* v_it_556_){
_start:
{
lean_inc(v_it_556_);
return v_it_556_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterM___boxed(lean_object* v_00_u03b1_557_, lean_object* v_00_u03b2_558_, lean_object* v_m_559_, lean_object* v_n_560_, lean_object* v_inst_561_, lean_object* v_inst_562_, lean_object* v_inst_563_, lean_object* v_inst_564_, lean_object* v_f_565_, lean_object* v_it_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Std_IterM_filterM(v_00_u03b1_557_, v_00_u03b2_558_, v_m_559_, v_n_560_, v_inst_561_, v_inst_562_, v_inst_563_, v_inst_564_, v_f_565_, v_it_566_);
lean_dec(v_it_566_);
lean_dec(v_f_565_);
lean_dec(v_inst_564_);
lean_dec(v_inst_563_);
lean_dec_ref(v_inst_562_);
lean_dec(v_inst_561_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterMap___redArg(lean_object* v_it_568_){
_start:
{
lean_inc(v_it_568_);
return v_it_568_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterMap___redArg___boxed(lean_object* v_it_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Std_IterM_filterMap___redArg(v_it_569_);
lean_dec(v_it_569_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterMap(lean_object* v_00_u03b1_571_, lean_object* v_00_u03b2_572_, lean_object* v_00_u03b3_573_, lean_object* v_m_574_, lean_object* v_inst_575_, lean_object* v_inst_576_, lean_object* v_f_577_, lean_object* v_it_578_){
_start:
{
lean_inc(v_it_578_);
return v_it_578_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filterMap___boxed(lean_object* v_00_u03b1_579_, lean_object* v_00_u03b2_580_, lean_object* v_00_u03b3_581_, lean_object* v_m_582_, lean_object* v_inst_583_, lean_object* v_inst_584_, lean_object* v_f_585_, lean_object* v_it_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Std_IterM_filterMap(v_00_u03b1_579_, v_00_u03b2_580_, v_00_u03b3_581_, v_m_582_, v_inst_583_, v_inst_584_, v_f_585_, v_it_586_);
lean_dec(v_it_586_);
lean_dec_ref(v_f_585_);
lean_dec_ref(v_inst_584_);
lean_dec(v_inst_583_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_map___redArg(lean_object* v_it_588_){
_start:
{
lean_inc(v_it_588_);
return v_it_588_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_map___redArg___boxed(lean_object* v_it_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_Std_IterM_map___redArg(v_it_589_);
lean_dec(v_it_589_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_map(lean_object* v_00_u03b1_591_, lean_object* v_00_u03b2_592_, lean_object* v_00_u03b3_593_, lean_object* v_m_594_, lean_object* v_inst_595_, lean_object* v_inst_596_, lean_object* v_f_597_, lean_object* v_it_598_){
_start:
{
lean_inc(v_it_598_);
return v_it_598_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_map___boxed(lean_object* v_00_u03b1_599_, lean_object* v_00_u03b2_600_, lean_object* v_00_u03b3_601_, lean_object* v_m_602_, lean_object* v_inst_603_, lean_object* v_inst_604_, lean_object* v_f_605_, lean_object* v_it_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Std_IterM_map(v_00_u03b1_599_, v_00_u03b2_600_, v_00_u03b3_601_, v_m_602_, v_inst_603_, v_inst_604_, v_f_605_, v_it_606_);
lean_dec(v_it_606_);
lean_dec(v_f_605_);
lean_dec_ref(v_inst_604_);
lean_dec(v_inst_603_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filter___redArg(lean_object* v_it_608_){
_start:
{
lean_inc(v_it_608_);
return v_it_608_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filter___redArg___boxed(lean_object* v_it_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Std_IterM_filter___redArg(v_it_609_);
lean_dec(v_it_609_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filter(lean_object* v_00_u03b1_611_, lean_object* v_00_u03b2_612_, lean_object* v_m_613_, lean_object* v_inst_614_, lean_object* v_inst_615_, lean_object* v_f_616_, lean_object* v_it_617_){
_start:
{
lean_inc(v_it_617_);
return v_it_617_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_filter___boxed(lean_object* v_00_u03b1_618_, lean_object* v_00_u03b2_619_, lean_object* v_m_620_, lean_object* v_inst_621_, lean_object* v_inst_622_, lean_object* v_f_623_, lean_object* v_it_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Std_IterM_filter(v_00_u03b1_618_, v_00_u03b2_619_, v_m_620_, v_inst_621_, v_inst_622_, v_f_623_, v_it_624_);
lean_dec(v_it_624_);
lean_dec_ref(v_f_623_);
lean_dec_ref(v_inst_622_);
lean_dec(v_inst_621_);
return v_res_625_;
}
}
lean_object* runtime_initialize_Init_Data_Iterators_PostconditionMonad(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Consumers_Monadic_Loop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Transport(uint8_t builtin);
lean_object* runtime_initialize_Init_PropLemmas(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Iterators_Combinators_Monadic_FilterMap(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Iterators_PostconditionMonad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Consumers_Monadic_Loop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_PropLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Iterators_Combinators_Monadic_FilterMap(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Iterators_PostconditionMonad(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Consumers_Monadic_Loop(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Transport(uint8_t builtin);
lean_object* initialize_Init_PropLemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Iterators_Combinators_Monadic_FilterMap(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Iterators_PostconditionMonad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Consumers_Monadic_Loop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_PropLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Combinators_Monadic_FilterMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Iterators_Combinators_Monadic_FilterMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Iterators_Combinators_Monadic_FilterMap(builtin);
}
#ifdef __cplusplus
}
#endif
