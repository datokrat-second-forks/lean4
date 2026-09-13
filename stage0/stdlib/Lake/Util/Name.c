// Lean compiler output
// Module: Lake.Util.Name
// Imports: public import Lean.Data.Json public import Lake.Util.RBArray import Init.Data.Ord.UInt import all Init.Prelude import all Lean.Data.Name
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
lean_object* l_Lake_RBArray_empty___redArg();
lean_object* l_String_toName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_setHeadInfo(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_quoteNameMk(lean_object*);
lean_object* l_Lean_Syntax_copyHeadTailInfoFrom(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_intercalate(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_stringToLegalOrSimpleName(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NameMap_empty___redArg();
LEAN_EXPORT lean_object* l_Lake_NameMap_empty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NameMap_empty(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___closed__0 = (const lean_object*)&l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg();
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake(lean_object*);
static lean_once_cell_t l_Lake_OrdNameMap_empty___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OrdNameMap_empty___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_OrdNameMap_empty___redArg();
LEAN_EXPORT lean_object* l_Lake_OrdNameMap_empty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdNameMap_empty(lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkOrdNameMap___redArg();
LEAN_EXPORT lean_object* l_Lake_mkOrdNameMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkOrdNameMap(lean_object*);
LEAN_EXPORT lean_object* l_Lake_DNameMap_empty___redArg();
LEAN_EXPORT lean_object* l_Lake_DNameMap_empty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_DNameMap_empty(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Name_eraseHead(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isAnonymous_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isAnonymous_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isPrefixOf_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isPrefixOf_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_appendCore_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_appendCore_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__4_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Name_quoteFrom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lake_Name_quoteFrom___closed__0 = (const lean_object*)&l_Lake_Name_quoteFrom___closed__0_value;
static const lean_string_object l_Lake_Name_quoteFrom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lake_Name_quoteFrom___closed__1 = (const lean_object*)&l_Lake_Name_quoteFrom___closed__1_value;
static const lean_string_object l_Lake_Name_quoteFrom___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lake_Name_quoteFrom___closed__2 = (const lean_object*)&l_Lake_Name_quoteFrom___closed__2_value;
static const lean_string_object l_Lake_Name_quoteFrom___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l_Lake_Name_quoteFrom___closed__3 = (const lean_object*)&l_Lake_Name_quoteFrom___closed__3_value;
static const lean_ctor_object l_Lake_Name_quoteFrom___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Name_quoteFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_Name_quoteFrom___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Name_quoteFrom___closed__4_value_aux_0),((lean_object*)&l_Lake_Name_quoteFrom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_Name_quoteFrom___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Name_quoteFrom___closed__4_value_aux_1),((lean_object*)&l_Lake_Name_quoteFrom___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake_Name_quoteFrom___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Name_quoteFrom___closed__4_value_aux_2),((lean_object*)&l_Lake_Name_quoteFrom___closed__3_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l_Lake_Name_quoteFrom___closed__4 = (const lean_object*)&l_Lake_Name_quoteFrom___closed__4_value;
static const lean_string_object l_Lake_Name_quoteFrom___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lake_Name_quoteFrom___closed__5 = (const lean_object*)&l_Lake_Name_quoteFrom___closed__5_value;
static const lean_string_object l_Lake_Name_quoteFrom___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_Name_quoteFrom___closed__6 = (const lean_object*)&l_Lake_Name_quoteFrom___closed__6_value;
LEAN_EXPORT lean_object* l_Lake_Name_quoteFrom(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Name_quoteFrom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_stringToLegalOrSimpleName(lean_object* v_s_1_){
_start:
{
lean_object* v___x_2_; uint8_t v___x_3_; 
lean_inc_ref(v_s_1_);
v___x_2_ = l_String_toName(v_s_1_);
v___x_3_ = l_Lean_Name_isAnonymous(v___x_2_);
if (v___x_3_ == 0)
{
lean_dec_ref(v_s_1_);
return v___x_2_;
}
else
{
lean_object* v___x_4_; lean_object* v___x_5_; 
lean_dec(v___x_2_);
v___x_4_ = lean_box(0);
v___x_5_ = l_Lean_Name_str___override(v___x_4_, v_s_1_);
return v___x_5_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_NameMap_empty___redArg(){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_box(1);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lake_NameMap_empty___redArg___boxed(lean_object* v___dummy_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lake_NameMap_empty___redArg();
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lake_NameMap_empty(lean_object* v___y_10_){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_box(1);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___lam__0(lean_object* v_toTreeMap_12_){
_start:
{
lean_inc(v_toTreeMap_12_);
return v_toTreeMap_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___lam__0___boxed(lean_object* v_toTreeMap_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___lam__0(v_toTreeMap_13_);
lean_dec(v_toTreeMap_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg(){
_start:
{
lean_object* v___f_17_; 
v___f_17_ = ((lean_object*)(l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___closed__0));
return v___f_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___boxed(lean_object* v___dummy_18_){
_start:
{
lean_object* v_res_19_; 
v_res_19_ = l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg();
return v_res_19_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake(lean_object* v_00_u03b1_20_){
_start:
{
lean_object* v___f_21_; 
v___f_21_ = ((lean_object*)(l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___closed__0));
return v___f_21_;
}
}
static lean_object* _init_l_Lake_OrdNameMap_empty___redArg___closed__0(void){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = l_Lake_RBArray_empty___redArg();
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdNameMap_empty___redArg(){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_obj_once(&l_Lake_OrdNameMap_empty___redArg___closed__0, &l_Lake_OrdNameMap_empty___redArg___closed__0_once, _init_l_Lake_OrdNameMap_empty___redArg___closed__0);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdNameMap_empty___redArg___boxed(lean_object* v___dummy_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lake_OrdNameMap_empty___redArg();
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdNameMap_empty(lean_object* v_00_u03b1_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_obj_once(&l_Lake_OrdNameMap_empty___redArg___closed__0, &l_Lake_OrdNameMap_empty___redArg___closed__0_once, _init_l_Lake_OrdNameMap_empty___redArg___closed__0);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkOrdNameMap___redArg(){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_obj_once(&l_Lake_OrdNameMap_empty___redArg___closed__0, &l_Lake_OrdNameMap_empty___redArg___closed__0_once, _init_l_Lake_OrdNameMap_empty___redArg___closed__0);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkOrdNameMap___redArg___boxed(lean_object* v___dummy_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lake_mkOrdNameMap___redArg();
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkOrdNameMap(lean_object* v_00_u03b1_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lean_obj_once(&l_Lake_OrdNameMap_empty___redArg___closed__0, &l_Lake_OrdNameMap_empty___redArg___closed__0_once, _init_l_Lake_OrdNameMap_empty___redArg___closed__0);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lake_DNameMap_empty___redArg(){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_box(1);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lake_DNameMap_empty___redArg___boxed(lean_object* v___dummy_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lake_DNameMap_empty___redArg();
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lake_DNameMap_empty(lean_object* v_00_u03b1_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lean_box(1);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lake_Name_eraseHead(lean_object* v_x_41_){
_start:
{
switch(lean_obj_tag(v_x_41_))
{
case 0:
{
return v_x_41_;
}
case 1:
{
lean_object* v_pre_42_; 
v_pre_42_ = lean_ctor_get(v_x_41_, 0);
lean_inc(v_pre_42_);
if (lean_obj_tag(v_pre_42_) == 0)
{
lean_dec_ref_known(v_x_41_, 2);
return v_pre_42_;
}
else
{
lean_object* v_str_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v_str_43_ = lean_ctor_get(v_x_41_, 1);
lean_inc_ref(v_str_43_);
lean_dec_ref_known(v_x_41_, 2);
v___x_44_ = l_Lake_Name_eraseHead(v_pre_42_);
v___x_45_ = l_Lean_Name_str___override(v___x_44_, v_str_43_);
return v___x_45_;
}
}
default: 
{
lean_object* v_pre_46_; 
v_pre_46_ = lean_ctor_get(v_x_41_, 0);
lean_inc(v_pre_46_);
if (lean_obj_tag(v_pre_46_) == 0)
{
lean_dec_ref_known(v_x_41_, 2);
return v_pre_46_;
}
else
{
lean_object* v_i_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v_i_47_ = lean_ctor_get(v_x_41_, 1);
lean_inc(v_i_47_);
lean_dec_ref_known(v_x_41_, 2);
v___x_48_ = l_Lake_Name_eraseHead(v_pre_46_);
v___x_49_ = l_Lean_Name_num___override(v___x_48_, v_i_47_);
return v___x_49_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isAnonymous_match__1_splitter___redArg(lean_object* v_x_50_, lean_object* v_h__1_51_, lean_object* v_h__2_52_){
_start:
{
if (lean_obj_tag(v_x_50_) == 0)
{
lean_object* v___x_53_; lean_object* v___x_54_; 
lean_dec(v_h__2_52_);
v___x_53_ = lean_box(0);
v___x_54_ = lean_apply_1(v_h__1_51_, v___x_53_);
return v___x_54_;
}
else
{
lean_object* v___x_55_; 
lean_dec(v_h__1_51_);
v___x_55_ = lean_apply_2(v_h__2_52_, v_x_50_, lean_box(0));
return v___x_55_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isAnonymous_match__1_splitter(lean_object* v_motive_56_, lean_object* v_x_57_, lean_object* v_h__1_58_, lean_object* v_h__2_59_){
_start:
{
if (lean_obj_tag(v_x_57_) == 0)
{
lean_object* v___x_60_; lean_object* v___x_61_; 
lean_dec(v_h__2_59_);
v___x_60_ = lean_box(0);
v___x_61_ = lean_apply_1(v_h__1_58_, v___x_60_);
return v___x_61_;
}
else
{
lean_object* v___x_62_; 
lean_dec(v_h__1_58_);
v___x_62_ = lean_apply_2(v_h__2_59_, v_x_57_, lean_box(0));
return v___x_62_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isPrefixOf_match__1_splitter___redArg(lean_object* v_x_63_, lean_object* v_x_64_, lean_object* v_h__1_65_, lean_object* v_h__2_66_, lean_object* v_h__3_67_){
_start:
{
switch(lean_obj_tag(v_x_64_))
{
case 0:
{
lean_object* v___x_68_; 
lean_dec(v_h__3_67_);
lean_dec(v_h__2_66_);
v___x_68_ = lean_apply_1(v_h__1_65_, v_x_63_);
return v___x_68_;
}
case 1:
{
lean_object* v_pre_69_; lean_object* v_str_70_; lean_object* v___x_71_; 
lean_dec(v_h__2_66_);
lean_dec(v_h__1_65_);
v_pre_69_ = lean_ctor_get(v_x_64_, 0);
lean_inc(v_pre_69_);
v_str_70_ = lean_ctor_get(v_x_64_, 1);
lean_inc_ref(v_str_70_);
lean_dec_ref_known(v_x_64_, 2);
v___x_71_ = lean_apply_3(v_h__3_67_, v_x_63_, v_pre_69_, v_str_70_);
return v___x_71_;
}
default: 
{
lean_object* v_pre_72_; lean_object* v_i_73_; lean_object* v___x_74_; 
lean_dec(v_h__3_67_);
lean_dec(v_h__1_65_);
v_pre_72_ = lean_ctor_get(v_x_64_, 0);
lean_inc(v_pre_72_);
v_i_73_ = lean_ctor_get(v_x_64_, 1);
lean_inc(v_i_73_);
lean_dec_ref_known(v_x_64_, 2);
v___x_74_ = lean_apply_3(v_h__2_66_, v_x_63_, v_pre_72_, v_i_73_);
return v___x_74_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isPrefixOf_match__1_splitter(lean_object* v_motive_75_, lean_object* v_x_76_, lean_object* v_x_77_, lean_object* v_h__1_78_, lean_object* v_h__2_79_, lean_object* v_h__3_80_){
_start:
{
switch(lean_obj_tag(v_x_77_))
{
case 0:
{
lean_object* v___x_81_; 
lean_dec(v_h__3_80_);
lean_dec(v_h__2_79_);
v___x_81_ = lean_apply_1(v_h__1_78_, v_x_76_);
return v___x_81_;
}
case 1:
{
lean_object* v_pre_82_; lean_object* v_str_83_; lean_object* v___x_84_; 
lean_dec(v_h__2_79_);
lean_dec(v_h__1_78_);
v_pre_82_ = lean_ctor_get(v_x_77_, 0);
lean_inc(v_pre_82_);
v_str_83_ = lean_ctor_get(v_x_77_, 1);
lean_inc_ref(v_str_83_);
lean_dec_ref_known(v_x_77_, 2);
v___x_84_ = lean_apply_3(v_h__3_80_, v_x_76_, v_pre_82_, v_str_83_);
return v___x_84_;
}
default: 
{
lean_object* v_pre_85_; lean_object* v_i_86_; lean_object* v___x_87_; 
lean_dec(v_h__3_80_);
lean_dec(v_h__1_78_);
v_pre_85_ = lean_ctor_get(v_x_77_, 0);
lean_inc(v_pre_85_);
v_i_86_ = lean_ctor_get(v_x_77_, 1);
lean_inc(v_i_86_);
lean_dec_ref_known(v_x_77_, 2);
v___x_87_ = lean_apply_3(v_h__2_79_, v_x_76_, v_pre_85_, v_i_86_);
return v___x_87_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_appendCore_match__1_splitter___redArg(lean_object* v_x_88_, lean_object* v_x_89_, lean_object* v_h__1_90_, lean_object* v_h__2_91_, lean_object* v_h__3_92_){
_start:
{
switch(lean_obj_tag(v_x_89_))
{
case 0:
{
lean_object* v___x_93_; 
lean_dec(v_h__3_92_);
lean_dec(v_h__2_91_);
v___x_93_ = lean_apply_1(v_h__1_90_, v_x_88_);
return v___x_93_;
}
case 1:
{
lean_object* v_pre_94_; lean_object* v_str_95_; lean_object* v___x_96_; 
lean_dec(v_h__3_92_);
lean_dec(v_h__1_90_);
v_pre_94_ = lean_ctor_get(v_x_89_, 0);
lean_inc(v_pre_94_);
v_str_95_ = lean_ctor_get(v_x_89_, 1);
lean_inc_ref(v_str_95_);
lean_dec_ref_known(v_x_89_, 2);
v___x_96_ = lean_apply_3(v_h__2_91_, v_x_88_, v_pre_94_, v_str_95_);
return v___x_96_;
}
default: 
{
lean_object* v_pre_97_; lean_object* v_i_98_; lean_object* v___x_99_; 
lean_dec(v_h__2_91_);
lean_dec(v_h__1_90_);
v_pre_97_ = lean_ctor_get(v_x_89_, 0);
lean_inc(v_pre_97_);
v_i_98_ = lean_ctor_get(v_x_89_, 1);
lean_inc(v_i_98_);
lean_dec_ref_known(v_x_89_, 2);
v___x_99_ = lean_apply_3(v_h__3_92_, v_x_88_, v_pre_97_, v_i_98_);
return v___x_99_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_appendCore_match__1_splitter(lean_object* v_motive_100_, lean_object* v_x_101_, lean_object* v_x_102_, lean_object* v_h__1_103_, lean_object* v_h__2_104_, lean_object* v_h__3_105_){
_start:
{
switch(lean_obj_tag(v_x_102_))
{
case 0:
{
lean_object* v___x_106_; 
lean_dec(v_h__3_105_);
lean_dec(v_h__2_104_);
v___x_106_ = lean_apply_1(v_h__1_103_, v_x_101_);
return v___x_106_;
}
case 1:
{
lean_object* v_pre_107_; lean_object* v_str_108_; lean_object* v___x_109_; 
lean_dec(v_h__3_105_);
lean_dec(v_h__1_103_);
v_pre_107_ = lean_ctor_get(v_x_102_, 0);
lean_inc(v_pre_107_);
v_str_108_ = lean_ctor_get(v_x_102_, 1);
lean_inc_ref(v_str_108_);
lean_dec_ref_known(v_x_102_, 2);
v___x_109_ = lean_apply_3(v_h__2_104_, v_x_101_, v_pre_107_, v_str_108_);
return v___x_109_;
}
default: 
{
lean_object* v_pre_110_; lean_object* v_i_111_; lean_object* v___x_112_; 
lean_dec(v_h__2_104_);
lean_dec(v_h__1_103_);
v_pre_110_ = lean_ctor_get(v_x_102_, 0);
lean_inc(v_pre_110_);
v_i_111_ = lean_ctor_get(v_x_102_, 1);
lean_inc(v_i_111_);
lean_dec_ref_known(v_x_102_, 2);
v___x_112_ = lean_apply_3(v_h__3_105_, v_x_101_, v_pre_110_, v_i_111_);
return v___x_112_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__4_splitter___redArg(lean_object* v_x_113_, lean_object* v_x_114_, lean_object* v_h__1_115_, lean_object* v_h__2_116_, lean_object* v_h__3_117_, lean_object* v_h__4_118_, lean_object* v_h__5_119_, lean_object* v_h__6_120_, lean_object* v_h__7_121_){
_start:
{
switch(lean_obj_tag(v_x_113_))
{
case 0:
{
lean_dec(v_h__7_121_);
lean_dec(v_h__6_120_);
lean_dec(v_h__5_119_);
lean_dec(v_h__4_118_);
lean_dec(v_h__3_117_);
if (lean_obj_tag(v_x_114_) == 0)
{
lean_object* v___x_122_; lean_object* v___x_123_; 
lean_dec(v_h__2_116_);
v___x_122_ = lean_box(0);
v___x_123_ = lean_apply_1(v_h__1_115_, v___x_122_);
return v___x_123_;
}
else
{
lean_object* v___x_124_; 
lean_dec(v_h__1_115_);
v___x_124_ = lean_apply_2(v_h__2_116_, v_x_114_, lean_box(0));
return v___x_124_;
}
}
case 1:
{
lean_dec(v_h__5_119_);
lean_dec(v_h__4_118_);
lean_dec(v_h__2_116_);
lean_dec(v_h__1_115_);
switch(lean_obj_tag(v_x_114_))
{
case 0:
{
lean_object* v___x_125_; 
lean_dec(v_h__7_121_);
lean_dec(v_h__6_120_);
v___x_125_ = lean_apply_2(v_h__3_117_, v_x_113_, lean_box(0));
return v___x_125_;
}
case 1:
{
lean_object* v_pre_126_; lean_object* v_str_127_; lean_object* v_pre_128_; lean_object* v_str_129_; lean_object* v___x_130_; 
lean_dec(v_h__6_120_);
lean_dec(v_h__3_117_);
v_pre_126_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_pre_126_);
v_str_127_ = lean_ctor_get(v_x_113_, 1);
lean_inc_ref(v_str_127_);
lean_dec_ref_known(v_x_113_, 2);
v_pre_128_ = lean_ctor_get(v_x_114_, 0);
lean_inc(v_pre_128_);
v_str_129_ = lean_ctor_get(v_x_114_, 1);
lean_inc_ref(v_str_129_);
lean_dec_ref_known(v_x_114_, 2);
v___x_130_ = lean_apply_4(v_h__7_121_, v_pre_126_, v_str_127_, v_pre_128_, v_str_129_);
return v___x_130_;
}
default: 
{
lean_object* v_pre_131_; lean_object* v_str_132_; lean_object* v_pre_133_; lean_object* v_i_134_; lean_object* v___x_135_; 
lean_dec(v_h__7_121_);
lean_dec(v_h__3_117_);
v_pre_131_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_pre_131_);
v_str_132_ = lean_ctor_get(v_x_113_, 1);
lean_inc_ref(v_str_132_);
lean_dec_ref_known(v_x_113_, 2);
v_pre_133_ = lean_ctor_get(v_x_114_, 0);
lean_inc(v_pre_133_);
v_i_134_ = lean_ctor_get(v_x_114_, 1);
lean_inc(v_i_134_);
lean_dec_ref_known(v_x_114_, 2);
v___x_135_ = lean_apply_4(v_h__6_120_, v_pre_131_, v_str_132_, v_pre_133_, v_i_134_);
return v___x_135_;
}
}
}
default: 
{
lean_dec(v_h__7_121_);
lean_dec(v_h__6_120_);
lean_dec(v_h__2_116_);
lean_dec(v_h__1_115_);
switch(lean_obj_tag(v_x_114_))
{
case 0:
{
lean_object* v___x_136_; 
lean_dec(v_h__5_119_);
lean_dec(v_h__4_118_);
v___x_136_ = lean_apply_2(v_h__3_117_, v_x_113_, lean_box(0));
return v___x_136_;
}
case 1:
{
lean_object* v_pre_137_; lean_object* v_i_138_; lean_object* v_pre_139_; lean_object* v_str_140_; lean_object* v___x_141_; 
lean_dec(v_h__4_118_);
lean_dec(v_h__3_117_);
v_pre_137_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_pre_137_);
v_i_138_ = lean_ctor_get(v_x_113_, 1);
lean_inc(v_i_138_);
lean_dec_ref_known(v_x_113_, 2);
v_pre_139_ = lean_ctor_get(v_x_114_, 0);
lean_inc(v_pre_139_);
v_str_140_ = lean_ctor_get(v_x_114_, 1);
lean_inc_ref(v_str_140_);
lean_dec_ref_known(v_x_114_, 2);
v___x_141_ = lean_apply_4(v_h__5_119_, v_pre_137_, v_i_138_, v_pre_139_, v_str_140_);
return v___x_141_;
}
default: 
{
lean_object* v_pre_142_; lean_object* v_i_143_; lean_object* v_pre_144_; lean_object* v_i_145_; lean_object* v___x_146_; 
lean_dec(v_h__5_119_);
lean_dec(v_h__3_117_);
v_pre_142_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_pre_142_);
v_i_143_ = lean_ctor_get(v_x_113_, 1);
lean_inc(v_i_143_);
lean_dec_ref_known(v_x_113_, 2);
v_pre_144_ = lean_ctor_get(v_x_114_, 0);
lean_inc(v_pre_144_);
v_i_145_ = lean_ctor_get(v_x_114_, 1);
lean_inc(v_i_145_);
lean_dec_ref_known(v_x_114_, 2);
v___x_146_ = lean_apply_4(v_h__4_118_, v_pre_142_, v_i_143_, v_pre_144_, v_i_145_);
return v___x_146_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__4_splitter(lean_object* v_motive_147_, lean_object* v_x_148_, lean_object* v_x_149_, lean_object* v_h__1_150_, lean_object* v_h__2_151_, lean_object* v_h__3_152_, lean_object* v_h__4_153_, lean_object* v_h__5_154_, lean_object* v_h__6_155_, lean_object* v_h__7_156_){
_start:
{
switch(lean_obj_tag(v_x_148_))
{
case 0:
{
lean_dec(v_h__7_156_);
lean_dec(v_h__6_155_);
lean_dec(v_h__5_154_);
lean_dec(v_h__4_153_);
lean_dec(v_h__3_152_);
if (lean_obj_tag(v_x_149_) == 0)
{
lean_object* v___x_157_; lean_object* v___x_158_; 
lean_dec(v_h__2_151_);
v___x_157_ = lean_box(0);
v___x_158_ = lean_apply_1(v_h__1_150_, v___x_157_);
return v___x_158_;
}
else
{
lean_object* v___x_159_; 
lean_dec(v_h__1_150_);
v___x_159_ = lean_apply_2(v_h__2_151_, v_x_149_, lean_box(0));
return v___x_159_;
}
}
case 1:
{
lean_dec(v_h__5_154_);
lean_dec(v_h__4_153_);
lean_dec(v_h__2_151_);
lean_dec(v_h__1_150_);
switch(lean_obj_tag(v_x_149_))
{
case 0:
{
lean_object* v___x_160_; 
lean_dec(v_h__7_156_);
lean_dec(v_h__6_155_);
v___x_160_ = lean_apply_2(v_h__3_152_, v_x_148_, lean_box(0));
return v___x_160_;
}
case 1:
{
lean_object* v_pre_161_; lean_object* v_str_162_; lean_object* v_pre_163_; lean_object* v_str_164_; lean_object* v___x_165_; 
lean_dec(v_h__6_155_);
lean_dec(v_h__3_152_);
v_pre_161_ = lean_ctor_get(v_x_148_, 0);
lean_inc(v_pre_161_);
v_str_162_ = lean_ctor_get(v_x_148_, 1);
lean_inc_ref(v_str_162_);
lean_dec_ref_known(v_x_148_, 2);
v_pre_163_ = lean_ctor_get(v_x_149_, 0);
lean_inc(v_pre_163_);
v_str_164_ = lean_ctor_get(v_x_149_, 1);
lean_inc_ref(v_str_164_);
lean_dec_ref_known(v_x_149_, 2);
v___x_165_ = lean_apply_4(v_h__7_156_, v_pre_161_, v_str_162_, v_pre_163_, v_str_164_);
return v___x_165_;
}
default: 
{
lean_object* v_pre_166_; lean_object* v_str_167_; lean_object* v_pre_168_; lean_object* v_i_169_; lean_object* v___x_170_; 
lean_dec(v_h__7_156_);
lean_dec(v_h__3_152_);
v_pre_166_ = lean_ctor_get(v_x_148_, 0);
lean_inc(v_pre_166_);
v_str_167_ = lean_ctor_get(v_x_148_, 1);
lean_inc_ref(v_str_167_);
lean_dec_ref_known(v_x_148_, 2);
v_pre_168_ = lean_ctor_get(v_x_149_, 0);
lean_inc(v_pre_168_);
v_i_169_ = lean_ctor_get(v_x_149_, 1);
lean_inc(v_i_169_);
lean_dec_ref_known(v_x_149_, 2);
v___x_170_ = lean_apply_4(v_h__6_155_, v_pre_166_, v_str_167_, v_pre_168_, v_i_169_);
return v___x_170_;
}
}
}
default: 
{
lean_dec(v_h__7_156_);
lean_dec(v_h__6_155_);
lean_dec(v_h__2_151_);
lean_dec(v_h__1_150_);
switch(lean_obj_tag(v_x_149_))
{
case 0:
{
lean_object* v___x_171_; 
lean_dec(v_h__5_154_);
lean_dec(v_h__4_153_);
v___x_171_ = lean_apply_2(v_h__3_152_, v_x_148_, lean_box(0));
return v___x_171_;
}
case 1:
{
lean_object* v_pre_172_; lean_object* v_i_173_; lean_object* v_pre_174_; lean_object* v_str_175_; lean_object* v___x_176_; 
lean_dec(v_h__4_153_);
lean_dec(v_h__3_152_);
v_pre_172_ = lean_ctor_get(v_x_148_, 0);
lean_inc(v_pre_172_);
v_i_173_ = lean_ctor_get(v_x_148_, 1);
lean_inc(v_i_173_);
lean_dec_ref_known(v_x_148_, 2);
v_pre_174_ = lean_ctor_get(v_x_149_, 0);
lean_inc(v_pre_174_);
v_str_175_ = lean_ctor_get(v_x_149_, 1);
lean_inc_ref(v_str_175_);
lean_dec_ref_known(v_x_149_, 2);
v___x_176_ = lean_apply_4(v_h__5_154_, v_pre_172_, v_i_173_, v_pre_174_, v_str_175_);
return v___x_176_;
}
default: 
{
lean_object* v_pre_177_; lean_object* v_i_178_; lean_object* v_pre_179_; lean_object* v_i_180_; lean_object* v___x_181_; 
lean_dec(v_h__5_154_);
lean_dec(v_h__3_152_);
v_pre_177_ = lean_ctor_get(v_x_148_, 0);
lean_inc(v_pre_177_);
v_i_178_ = lean_ctor_get(v_x_148_, 1);
lean_inc(v_i_178_);
lean_dec_ref_known(v_x_148_, 2);
v_pre_179_ = lean_ctor_get(v_x_149_, 0);
lean_inc(v_pre_179_);
v_i_180_ = lean_ctor_get(v_x_149_, 1);
lean_inc(v_i_180_);
lean_dec_ref_known(v_x_149_, 2);
v___x_181_ = lean_apply_4(v_h__4_153_, v_pre_177_, v_i_178_, v_pre_179_, v_i_180_);
return v___x_181_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter___redArg(uint8_t v_x_182_, lean_object* v_h__1_183_, lean_object* v_h__2_184_){
_start:
{
if (v_x_182_ == 1)
{
lean_object* v___x_185_; lean_object* v___x_186_; 
lean_dec(v_h__2_184_);
v___x_185_ = lean_box(0);
v___x_186_ = lean_apply_1(v_h__1_183_, v___x_185_);
return v___x_186_;
}
else
{
lean_object* v___x_187_; lean_object* v___x_188_; 
lean_dec(v_h__1_183_);
v___x_187_ = lean_box(v_x_182_);
v___x_188_ = lean_apply_2(v_h__2_184_, v___x_187_, lean_box(0));
return v___x_188_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter___redArg___boxed(lean_object* v_x_189_, lean_object* v_h__1_190_, lean_object* v_h__2_191_){
_start:
{
uint8_t v_x_13__boxed_192_; lean_object* v_res_193_; 
v_x_13__boxed_192_ = lean_unbox(v_x_189_);
v_res_193_ = l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter___redArg(v_x_13__boxed_192_, v_h__1_190_, v_h__2_191_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter(lean_object* v_motive_194_, uint8_t v_x_195_, lean_object* v_h__1_196_, lean_object* v_h__2_197_){
_start:
{
if (v_x_195_ == 1)
{
lean_object* v___x_198_; lean_object* v___x_199_; 
lean_dec(v_h__2_197_);
v___x_198_ = lean_box(0);
v___x_199_ = lean_apply_1(v_h__1_196_, v___x_198_);
return v___x_199_;
}
else
{
lean_object* v___x_200_; lean_object* v___x_201_; 
lean_dec(v_h__1_196_);
v___x_200_ = lean_box(v_x_195_);
v___x_201_ = lean_apply_2(v_h__2_197_, v___x_200_, lean_box(0));
return v___x_201_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter___boxed(lean_object* v_motive_202_, lean_object* v_x_203_, lean_object* v_h__1_204_, lean_object* v_h__2_205_){
_start:
{
uint8_t v_x_24__boxed_206_; lean_object* v_res_207_; 
v_x_24__boxed_206_ = lean_unbox(v_x_203_);
v_res_207_ = l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter(v_motive_202_, v_x_24__boxed_206_, v_h__1_204_, v_h__2_205_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Lake_Name_quoteFrom(lean_object* v_ref_219_, lean_object* v_n_220_, uint8_t v_canonical_221_){
_start:
{
lean_object* v___x_222_; lean_object* v_ref_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_222_ = l_Lean_SourceInfo_fromRef(v_ref_219_, v_canonical_221_);
v_ref_223_ = l_Lean_Syntax_setHeadInfo(v_ref_219_, v___x_222_);
v___x_224_ = lean_box(0);
lean_inc(v_n_220_);
v___x_225_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_224_, v_n_220_);
if (lean_obj_tag(v___x_225_) == 0)
{
lean_object* v___x_226_; lean_object* v_stx_227_; 
v___x_226_ = l_Lean_quoteNameMk(v_n_220_);
v_stx_227_ = l_Lean_Syntax_copyHeadTailInfoFrom(v___x_226_, v_ref_223_);
lean_dec(v_ref_223_);
return v_stx_227_;
}
else
{
lean_object* v_val_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v_stx_240_; 
lean_dec(v_n_220_);
v_val_228_ = lean_ctor_get(v___x_225_, 0);
lean_inc(v_val_228_);
lean_dec_ref_known(v___x_225_, 1);
v___x_229_ = ((lean_object*)(l_Lake_Name_quoteFrom___closed__4));
v___x_230_ = ((lean_object*)(l_Lake_Name_quoteFrom___closed__5));
v___x_231_ = ((lean_object*)(l_Lake_Name_quoteFrom___closed__6));
v___x_232_ = lean_string_intercalate(v___x_231_, v_val_228_);
v___x_233_ = lean_string_append(v___x_230_, v___x_232_);
lean_dec_ref(v___x_232_);
v___x_234_ = lean_box(2);
v___x_235_ = l_Lean_Syntax_mkNameLit(v___x_233_, v___x_234_);
v___x_236_ = lean_unsigned_to_nat(1u);
v___x_237_ = lean_mk_empty_array_with_capacity(v___x_236_);
v___x_238_ = lean_array_push(v___x_237_, v___x_235_);
v___x_239_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_239_, 0, v___x_234_);
lean_ctor_set(v___x_239_, 1, v___x_229_);
lean_ctor_set(v___x_239_, 2, v___x_238_);
v_stx_240_ = l_Lean_Syntax_copyHeadTailInfoFrom(v___x_239_, v_ref_223_);
lean_dec(v_ref_223_);
return v_stx_240_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Name_quoteFrom___boxed(lean_object* v_ref_241_, lean_object* v_n_242_, lean_object* v_canonical_243_){
_start:
{
uint8_t v_canonical_boxed_244_; lean_object* v_res_245_; 
v_canonical_boxed_244_ = lean_unbox(v_canonical_243_);
v_res_245_ = l_Lake_Name_quoteFrom(v_ref_241_, v_n_242_, v_canonical_boxed_244_);
return v_res_245_;
}
}
lean_object* runtime_initialize_Lean_Data_Json(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_RBArray(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_UInt(uint8_t builtin);
lean_object* runtime_initialize_Init_Prelude(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Name(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_Name(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_RBArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_Name(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json(uint8_t builtin);
lean_object* initialize_Lake_Util_RBArray(uint8_t builtin);
lean_object* initialize_Init_Data_Ord_UInt(uint8_t builtin);
lean_object* initialize_Init_Prelude(uint8_t builtin);
lean_object* initialize_Lean_Data_Name(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_Name(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_RBArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_Name(builtin);
}
#ifdef __cplusplus
}
#endif
