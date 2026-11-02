// Lean compiler output
// Module: Init.UDecidable.List
// Imports: public import Init.UDecidable public import Init.Data.List.Basic
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
LEAN_EXPORT uint8_t l_List_instUDecidableMemImpl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableMemImpl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableMemImpl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableMemImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableLexImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableLexImpl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableLexImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableLexImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableLT___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableLT___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableLT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableLT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableLE___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableLE___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableLE(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableBExImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableBExImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableBExImpl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableBExImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableBAllImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableBAllImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableBAllImpl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableBAllImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableSubset___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableSubset___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableSubset___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableSubset___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableSubset(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableSubset___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidablePairwiseImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidablePairwiseImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidablePairwiseImpl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidablePairwiseImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableNodup___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableNodup___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableNodup___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableNodup___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableNodup(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instUDecidableNodup___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instUDecidableMemImpl___redArg(lean_object* v_inst_1_, lean_object* v_a_2_, lean_object* v_x_3_){
_start:
{
if (lean_obj_tag(v_x_3_) == 0)
{
uint8_t v___x_4_; 
lean_dec(v_a_2_);
lean_dec_ref(v_inst_1_);
v___x_4_ = 0;
return v___x_4_;
}
else
{
lean_object* v_head_5_; lean_object* v_tail_6_; lean_object* v___x_7_; uint8_t v___x_8_; 
v_head_5_ = lean_ctor_get(v_x_3_, 0);
lean_inc(v_head_5_);
v_tail_6_ = lean_ctor_get(v_x_3_, 1);
lean_inc(v_tail_6_);
lean_dec_ref_known(v_x_3_, 2);
lean_inc_ref(v_inst_1_);
lean_inc(v_a_2_);
v___x_7_ = lean_apply_2(v_inst_1_, v_a_2_, v_head_5_);
v___x_8_ = lean_unbox(v___x_7_);
if (v___x_8_ == 0)
{
v_x_3_ = v_tail_6_;
goto _start;
}
else
{
uint8_t v___x_10_; 
lean_dec(v_tail_6_);
lean_dec(v_a_2_);
lean_dec_ref(v_inst_1_);
v___x_10_ = lean_unbox(v___x_7_);
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableMemImpl___redArg___boxed(lean_object* v_inst_11_, lean_object* v_a_12_, lean_object* v_x_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = l_List_instUDecidableMemImpl___redArg(v_inst_11_, v_a_12_, v_x_13_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableMemImpl(lean_object* v_00_u03b1_16_, lean_object* v_inst_17_, lean_object* v_a_18_, lean_object* v_x_19_){
_start:
{
uint8_t v___x_20_; 
v___x_20_ = l_List_instUDecidableMemImpl___redArg(v_inst_17_, v_a_18_, v_x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableMemImpl___boxed(lean_object* v_00_u03b1_21_, lean_object* v_inst_22_, lean_object* v_a_23_, lean_object* v_x_24_){
_start:
{
uint8_t v_res_25_; lean_object* v_r_26_; 
v_res_25_ = l_List_instUDecidableMemImpl(v_00_u03b1_21_, v_inst_22_, v_a_23_, v_x_24_);
v_r_26_ = lean_box(v_res_25_);
return v_r_26_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableLexImpl___redArg(lean_object* v_inst_27_, lean_object* v_inst_28_, lean_object* v_x_29_, lean_object* v_x_30_){
_start:
{
if (lean_obj_tag(v_x_29_) == 0)
{
lean_dec_ref(v_inst_28_);
lean_dec_ref(v_inst_27_);
if (lean_obj_tag(v_x_30_) == 0)
{
uint8_t v___x_31_; 
v___x_31_ = 0;
return v___x_31_;
}
else
{
uint8_t v___x_32_; 
lean_dec_ref_known(v_x_30_, 2);
v___x_32_ = 1;
return v___x_32_;
}
}
else
{
if (lean_obj_tag(v_x_30_) == 0)
{
uint8_t v___x_33_; 
lean_dec_ref_known(v_x_29_, 2);
lean_dec_ref(v_inst_28_);
lean_dec_ref(v_inst_27_);
v___x_33_ = 0;
return v___x_33_;
}
else
{
lean_object* v_head_34_; lean_object* v_tail_35_; lean_object* v_head_36_; lean_object* v_tail_37_; lean_object* v___x_38_; uint8_t v___x_39_; 
v_head_34_ = lean_ctor_get(v_x_29_, 0);
lean_inc_n(v_head_34_, 2);
v_tail_35_ = lean_ctor_get(v_x_29_, 1);
lean_inc(v_tail_35_);
lean_dec_ref_known(v_x_29_, 2);
v_head_36_ = lean_ctor_get(v_x_30_, 0);
lean_inc_n(v_head_36_, 2);
v_tail_37_ = lean_ctor_get(v_x_30_, 1);
lean_inc(v_tail_37_);
lean_dec_ref_known(v_x_30_, 2);
lean_inc_ref(v_inst_28_);
v___x_38_ = lean_apply_2(v_inst_28_, v_head_34_, v_head_36_);
v___x_39_ = lean_unbox(v___x_38_);
if (v___x_39_ == 0)
{
lean_object* v___x_40_; uint8_t v___x_41_; 
lean_inc_ref(v_inst_27_);
v___x_40_ = lean_apply_2(v_inst_27_, v_head_34_, v_head_36_);
v___x_41_ = lean_unbox(v___x_40_);
if (v___x_41_ == 0)
{
uint8_t v___x_42_; 
lean_dec(v_tail_37_);
lean_dec(v_tail_35_);
lean_dec_ref(v_inst_28_);
lean_dec_ref(v_inst_27_);
v___x_42_ = lean_unbox(v___x_40_);
return v___x_42_;
}
else
{
v_x_29_ = v_tail_35_;
v_x_30_ = v_tail_37_;
goto _start;
}
}
else
{
uint8_t v___x_44_; 
lean_dec(v_tail_37_);
lean_dec(v_head_36_);
lean_dec(v_tail_35_);
lean_dec(v_head_34_);
lean_dec_ref(v_inst_28_);
lean_dec_ref(v_inst_27_);
v___x_44_ = lean_unbox(v___x_38_);
return v___x_44_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableLexImpl___redArg___boxed(lean_object* v_inst_45_, lean_object* v_inst_46_, lean_object* v_x_47_, lean_object* v_x_48_){
_start:
{
uint8_t v_res_49_; lean_object* v_r_50_; 
v_res_49_ = l_List_instUDecidableLexImpl___redArg(v_inst_45_, v_inst_46_, v_x_47_, v_x_48_);
v_r_50_ = lean_box(v_res_49_);
return v_r_50_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableLexImpl(lean_object* v_00_u03b1_51_, lean_object* v_inst_52_, lean_object* v_r_53_, lean_object* v_inst_54_, lean_object* v_x_55_, lean_object* v_x_56_){
_start:
{
uint8_t v___x_57_; 
v___x_57_ = l_List_instUDecidableLexImpl___redArg(v_inst_52_, v_inst_54_, v_x_55_, v_x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableLexImpl___boxed(lean_object* v_00_u03b1_58_, lean_object* v_inst_59_, lean_object* v_r_60_, lean_object* v_inst_61_, lean_object* v_x_62_, lean_object* v_x_63_){
_start:
{
uint8_t v_res_64_; lean_object* v_r_65_; 
v_res_64_ = l_List_instUDecidableLexImpl(v_00_u03b1_58_, v_inst_59_, v_r_60_, v_inst_61_, v_x_62_, v_x_63_);
v_r_65_ = lean_box(v_res_64_);
return v_r_65_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableLT___redArg(lean_object* v_inst_66_, lean_object* v_inst_67_, lean_object* v_l_u2081_68_, lean_object* v_l_u2082_69_){
_start:
{
uint8_t v___x_70_; 
v___x_70_ = l_List_instUDecidableLexImpl___redArg(v_inst_66_, v_inst_67_, v_l_u2081_68_, v_l_u2082_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableLT___redArg___boxed(lean_object* v_inst_71_, lean_object* v_inst_72_, lean_object* v_l_u2081_73_, lean_object* v_l_u2082_74_){
_start:
{
uint8_t v_res_75_; lean_object* v_r_76_; 
v_res_75_ = l_List_instUDecidableLT___redArg(v_inst_71_, v_inst_72_, v_l_u2081_73_, v_l_u2082_74_);
v_r_76_ = lean_box(v_res_75_);
return v_r_76_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableLT(lean_object* v_00_u03b1_77_, lean_object* v_inst_78_, lean_object* v_inst_79_, lean_object* v_inst_80_, lean_object* v_l_u2081_81_, lean_object* v_l_u2082_82_){
_start:
{
uint8_t v___x_83_; 
v___x_83_ = l_List_instUDecidableLexImpl___redArg(v_inst_78_, v_inst_80_, v_l_u2081_81_, v_l_u2082_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableLT___boxed(lean_object* v_00_u03b1_84_, lean_object* v_inst_85_, lean_object* v_inst_86_, lean_object* v_inst_87_, lean_object* v_l_u2081_88_, lean_object* v_l_u2082_89_){
_start:
{
uint8_t v_res_90_; lean_object* v_r_91_; 
v_res_90_ = l_List_instUDecidableLT(v_00_u03b1_84_, v_inst_85_, v_inst_86_, v_inst_87_, v_l_u2081_88_, v_l_u2082_89_);
v_r_91_ = lean_box(v_res_90_);
return v_r_91_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableLE___redArg(lean_object* v_inst_92_, lean_object* v_inst_93_, lean_object* v_l_u2081_94_, lean_object* v_l_u2082_95_){
_start:
{
uint8_t v___x_96_; 
v___x_96_ = l_List_instUDecidableLexImpl___redArg(v_inst_92_, v_inst_93_, v_l_u2082_95_, v_l_u2081_94_);
if (v___x_96_ == 0)
{
uint8_t v___x_97_; 
v___x_97_ = 1;
return v___x_97_;
}
else
{
uint8_t v___x_98_; 
v___x_98_ = 0;
return v___x_98_;
}
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableLE___redArg___boxed(lean_object* v_inst_99_, lean_object* v_inst_100_, lean_object* v_l_u2081_101_, lean_object* v_l_u2082_102_){
_start:
{
uint8_t v_res_103_; lean_object* v_r_104_; 
v_res_103_ = l_List_instUDecidableLE___redArg(v_inst_99_, v_inst_100_, v_l_u2081_101_, v_l_u2082_102_);
v_r_104_ = lean_box(v_res_103_);
return v_r_104_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableLE(lean_object* v_00_u03b1_105_, lean_object* v_inst_106_, lean_object* v_inst_107_, lean_object* v_inst_108_, lean_object* v_l_u2081_109_, lean_object* v_l_u2082_110_){
_start:
{
uint8_t v___x_111_; 
v___x_111_ = l_List_instUDecidableLE___redArg(v_inst_106_, v_inst_108_, v_l_u2081_109_, v_l_u2082_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableLE___boxed(lean_object* v_00_u03b1_112_, lean_object* v_inst_113_, lean_object* v_inst_114_, lean_object* v_inst_115_, lean_object* v_l_u2081_116_, lean_object* v_l_u2082_117_){
_start:
{
uint8_t v_res_118_; lean_object* v_r_119_; 
v_res_118_ = l_List_instUDecidableLE(v_00_u03b1_112_, v_inst_113_, v_inst_114_, v_inst_115_, v_l_u2081_116_, v_l_u2082_117_);
v_r_119_ = lean_box(v_res_118_);
return v_r_119_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableBExImpl___redArg(lean_object* v_inst_120_, lean_object* v_x_121_){
_start:
{
if (lean_obj_tag(v_x_121_) == 0)
{
uint8_t v___x_122_; 
lean_dec_ref(v_inst_120_);
v___x_122_ = 0;
return v___x_122_;
}
else
{
lean_object* v_head_123_; lean_object* v_tail_124_; lean_object* v___x_125_; uint8_t v___x_126_; 
v_head_123_ = lean_ctor_get(v_x_121_, 0);
lean_inc(v_head_123_);
v_tail_124_ = lean_ctor_get(v_x_121_, 1);
lean_inc(v_tail_124_);
lean_dec_ref_known(v_x_121_, 2);
lean_inc_ref(v_inst_120_);
v___x_125_ = lean_apply_1(v_inst_120_, v_head_123_);
v___x_126_ = lean_unbox(v___x_125_);
if (v___x_126_ == 0)
{
v_x_121_ = v_tail_124_;
goto _start;
}
else
{
uint8_t v___x_128_; 
lean_dec(v_tail_124_);
lean_dec_ref(v_inst_120_);
v___x_128_ = lean_unbox(v___x_125_);
return v___x_128_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableBExImpl___redArg___boxed(lean_object* v_inst_129_, lean_object* v_x_130_){
_start:
{
uint8_t v_res_131_; lean_object* v_r_132_; 
v_res_131_ = l_List_instUDecidableBExImpl___redArg(v_inst_129_, v_x_130_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableBExImpl(lean_object* v_00_u03b1_133_, lean_object* v_p_134_, lean_object* v_inst_135_, lean_object* v_x_136_){
_start:
{
uint8_t v___x_137_; 
v___x_137_ = l_List_instUDecidableBExImpl___redArg(v_inst_135_, v_x_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableBExImpl___boxed(lean_object* v_00_u03b1_138_, lean_object* v_p_139_, lean_object* v_inst_140_, lean_object* v_x_141_){
_start:
{
uint8_t v_res_142_; lean_object* v_r_143_; 
v_res_142_ = l_List_instUDecidableBExImpl(v_00_u03b1_138_, v_p_139_, v_inst_140_, v_x_141_);
v_r_143_ = lean_box(v_res_142_);
return v_r_143_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableBAllImpl___redArg(lean_object* v_inst_144_, lean_object* v_x_145_){
_start:
{
if (lean_obj_tag(v_x_145_) == 0)
{
uint8_t v___x_146_; 
lean_dec_ref(v_inst_144_);
v___x_146_ = 1;
return v___x_146_;
}
else
{
lean_object* v_head_147_; lean_object* v_tail_148_; lean_object* v___x_149_; uint8_t v___x_150_; 
v_head_147_ = lean_ctor_get(v_x_145_, 0);
lean_inc(v_head_147_);
v_tail_148_ = lean_ctor_get(v_x_145_, 1);
lean_inc(v_tail_148_);
lean_dec_ref_known(v_x_145_, 2);
lean_inc_ref(v_inst_144_);
v___x_149_ = lean_apply_1(v_inst_144_, v_head_147_);
v___x_150_ = lean_unbox(v___x_149_);
if (v___x_150_ == 0)
{
uint8_t v___x_151_; 
lean_dec(v_tail_148_);
lean_dec_ref(v_inst_144_);
v___x_151_ = lean_unbox(v___x_149_);
return v___x_151_;
}
else
{
v_x_145_ = v_tail_148_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableBAllImpl___redArg___boxed(lean_object* v_inst_153_, lean_object* v_x_154_){
_start:
{
uint8_t v_res_155_; lean_object* v_r_156_; 
v_res_155_ = l_List_instUDecidableBAllImpl___redArg(v_inst_153_, v_x_154_);
v_r_156_ = lean_box(v_res_155_);
return v_r_156_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableBAllImpl(lean_object* v_00_u03b1_157_, lean_object* v_p_158_, lean_object* v_inst_159_, lean_object* v_x_160_){
_start:
{
uint8_t v___x_161_; 
v___x_161_ = l_List_instUDecidableBAllImpl___redArg(v_inst_159_, v_x_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableBAllImpl___boxed(lean_object* v_00_u03b1_162_, lean_object* v_p_163_, lean_object* v_inst_164_, lean_object* v_x_165_){
_start:
{
uint8_t v_res_166_; lean_object* v_r_167_; 
v_res_166_ = l_List_instUDecidableBAllImpl(v_00_u03b1_162_, v_p_163_, v_inst_164_, v_x_165_);
v_r_167_ = lean_box(v_res_166_);
return v_r_167_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableSubset___redArg___lam__0(lean_object* v_inst_168_, lean_object* v_x_169_, lean_object* v_a_170_){
_start:
{
uint8_t v___x_171_; 
v___x_171_ = l_List_instUDecidableMemImpl___redArg(v_inst_168_, v_a_170_, v_x_169_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableSubset___redArg___lam__0___boxed(lean_object* v_inst_172_, lean_object* v_x_173_, lean_object* v_a_174_){
_start:
{
uint8_t v_res_175_; lean_object* v_r_176_; 
v_res_175_ = l_List_instUDecidableSubset___redArg___lam__0(v_inst_172_, v_x_173_, v_a_174_);
v_r_176_ = lean_box(v_res_175_);
return v_r_176_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableSubset___redArg(lean_object* v_inst_177_, lean_object* v_x_178_, lean_object* v_x_179_){
_start:
{
lean_object* v___f_180_; uint8_t v___x_181_; 
v___f_180_ = lean_alloc_closure((void*)(l_List_instUDecidableSubset___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_180_, 0, v_inst_177_);
lean_closure_set(v___f_180_, 1, v_x_179_);
v___x_181_ = l_List_instUDecidableBAllImpl___redArg(v___f_180_, v_x_178_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableSubset___redArg___boxed(lean_object* v_inst_182_, lean_object* v_x_183_, lean_object* v_x_184_){
_start:
{
uint8_t v_res_185_; lean_object* v_r_186_; 
v_res_185_ = l_List_instUDecidableSubset___redArg(v_inst_182_, v_x_183_, v_x_184_);
v_r_186_ = lean_box(v_res_185_);
return v_r_186_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableSubset(lean_object* v_00_u03b1_187_, lean_object* v_inst_188_, lean_object* v_x_189_, lean_object* v_x_190_){
_start:
{
uint8_t v___x_191_; 
v___x_191_ = l_List_instUDecidableSubset___redArg(v_inst_188_, v_x_189_, v_x_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableSubset___boxed(lean_object* v_00_u03b1_192_, lean_object* v_inst_193_, lean_object* v_x_194_, lean_object* v_x_195_){
_start:
{
uint8_t v_res_196_; lean_object* v_r_197_; 
v_res_196_ = l_List_instUDecidableSubset(v_00_u03b1_192_, v_inst_193_, v_x_194_, v_x_195_);
v_r_197_ = lean_box(v_res_196_);
return v_r_197_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidablePairwiseImpl___redArg(lean_object* v_inst_198_, lean_object* v_x_199_){
_start:
{
if (lean_obj_tag(v_x_199_) == 0)
{
uint8_t v___x_200_; 
lean_dec_ref(v_inst_198_);
v___x_200_ = 1;
return v___x_200_;
}
else
{
lean_object* v_head_201_; lean_object* v_tail_202_; lean_object* v___x_203_; uint8_t v___x_204_; 
v_head_201_ = lean_ctor_get(v_x_199_, 0);
lean_inc(v_head_201_);
v_tail_202_ = lean_ctor_get(v_x_199_, 1);
lean_inc_n(v_tail_202_, 2);
lean_dec_ref_known(v_x_199_, 2);
lean_inc_ref(v_inst_198_);
v___x_203_ = lean_apply_1(v_inst_198_, v_head_201_);
v___x_204_ = l_List_instUDecidableBAllImpl___redArg(v___x_203_, v_tail_202_);
if (v___x_204_ == 0)
{
lean_dec(v_tail_202_);
lean_dec_ref(v_inst_198_);
return v___x_204_;
}
else
{
v_x_199_ = v_tail_202_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_instUDecidablePairwiseImpl___redArg___boxed(lean_object* v_inst_206_, lean_object* v_x_207_){
_start:
{
uint8_t v_res_208_; lean_object* v_r_209_; 
v_res_208_ = l_List_instUDecidablePairwiseImpl___redArg(v_inst_206_, v_x_207_);
v_r_209_ = lean_box(v_res_208_);
return v_r_209_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidablePairwiseImpl(lean_object* v_00_u03b1_210_, lean_object* v_R_211_, lean_object* v_inst_212_, lean_object* v_x_213_){
_start:
{
uint8_t v___x_214_; 
v___x_214_ = l_List_instUDecidablePairwiseImpl___redArg(v_inst_212_, v_x_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_List_instUDecidablePairwiseImpl___boxed(lean_object* v_00_u03b1_215_, lean_object* v_R_216_, lean_object* v_inst_217_, lean_object* v_x_218_){
_start:
{
uint8_t v_res_219_; lean_object* v_r_220_; 
v_res_219_ = l_List_instUDecidablePairwiseImpl(v_00_u03b1_215_, v_R_216_, v_inst_217_, v_x_218_);
v_r_220_ = lean_box(v_res_219_);
return v_r_220_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableNodup___redArg___lam__0(lean_object* v_inst_221_, lean_object* v_a_222_, lean_object* v_b_223_){
_start:
{
lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_224_ = lean_apply_2(v_inst_221_, v_a_222_, v_b_223_);
v___x_225_ = lean_unbox(v___x_224_);
if (v___x_225_ == 0)
{
uint8_t v___x_226_; 
v___x_226_ = 1;
return v___x_226_;
}
else
{
uint8_t v___x_227_; 
v___x_227_ = 0;
return v___x_227_;
}
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableNodup___redArg___lam__0___boxed(lean_object* v_inst_228_, lean_object* v_a_229_, lean_object* v_b_230_){
_start:
{
uint8_t v_res_231_; lean_object* v_r_232_; 
v_res_231_ = l_List_instUDecidableNodup___redArg___lam__0(v_inst_228_, v_a_229_, v_b_230_);
v_r_232_ = lean_box(v_res_231_);
return v_r_232_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableNodup___redArg(lean_object* v_inst_233_, lean_object* v_l_234_){
_start:
{
lean_object* v___f_235_; uint8_t v___x_236_; 
v___f_235_ = lean_alloc_closure((void*)(l_List_instUDecidableNodup___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_235_, 0, v_inst_233_);
v___x_236_ = l_List_instUDecidablePairwiseImpl___redArg(v___f_235_, v_l_234_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableNodup___redArg___boxed(lean_object* v_inst_237_, lean_object* v_l_238_){
_start:
{
uint8_t v_res_239_; lean_object* v_r_240_; 
v_res_239_ = l_List_instUDecidableNodup___redArg(v_inst_237_, v_l_238_);
v_r_240_ = lean_box(v_res_239_);
return v_r_240_;
}
}
LEAN_EXPORT uint8_t l_List_instUDecidableNodup(lean_object* v_00_u03b1_241_, lean_object* v_inst_242_, lean_object* v_l_243_){
_start:
{
uint8_t v___x_244_; 
v___x_244_ = l_List_instUDecidableNodup___redArg(v_inst_242_, v_l_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_List_instUDecidableNodup___boxed(lean_object* v_00_u03b1_245_, lean_object* v_inst_246_, lean_object* v_l_247_){
_start:
{
uint8_t v_res_248_; lean_object* v_r_249_; 
v_res_248_ = l_List_instUDecidableNodup(v_00_u03b1_245_, v_inst_246_, v_l_247_);
v_r_249_ = lean_box(v_res_248_);
return v_r_249_;
}
}
lean_object* runtime_initialize_Init_UDecidable(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_UDecidable_List(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_UDecidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_UDecidable_List(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_UDecidable(uint8_t builtin);
lean_object* initialize_Init_Data_List_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_UDecidable_List(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_UDecidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_UDecidable_List(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_UDecidable_List(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_UDecidable_List(builtin);
}
#ifdef __cplusplus
}
#endif
