// Lean compiler output
// Module: Lean.Data.SSet
// Imports: public import Lean.Data.SMap
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
lean_object* l_Lean_SMap_empty___redArg();
uint8_t l_Lean_SMap_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_switch___redArg(lean_object*);
lean_object* l_Lean_SMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_fold___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_repr___redArg(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_SMap_forM___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_SSet_empty___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SSet_empty___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_SSet_empty___redArg();
LEAN_EXPORT lean_object* l_Lean_SSet_empty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_empty(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_empty___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_instEmptyCollection___redArg();
LEAN_EXPORT lean_object* l_Lean_SSet_instEmptyCollection___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_instEmptyCollection(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_instEmptyCollection___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Lean_SSet_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_instInhabited___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_SSet_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_contains___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_SSet_contains(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_forM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_switch___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_switch(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_switch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_fold___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_fold___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_fold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_toList___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_SSet_toList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SSet_toList___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SSet_toList___redArg___closed__0 = (const lean_object*)&l_Lean_SSet_toList___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SSet_toList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_toList(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SSet_toList___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toSSet___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toSSet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toSSet(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprSSet___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ".toSSet"};
static const lean_object* l_Lean_instReprSSet___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_instReprSSet___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instReprSSet___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprSSet___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instReprSSet___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_instReprSSet___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instReprSSet___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprSSet___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprSSet___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprSSet(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprSSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_SSet_empty___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_SMap_empty___redArg();
return v___x_1_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_empty___redArg(){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_obj_once(&l_Lean_SSet_empty___redArg___closed__0, &l_Lean_SSet_empty___redArg___closed__0_once, _init_l_Lean_SSet_empty___redArg___closed__0);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_empty___redArg___boxed(lean_object* v___dummy_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_SSet_empty___redArg();
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_empty(lean_object* v_00_u03b1_6_, lean_object* v_inst_7_, lean_object* v_inst_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l_Lean_SSet_empty___redArg___closed__0, &l_Lean_SSet_empty___redArg___closed__0_once, _init_l_Lean_SSet_empty___redArg___closed__0);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_empty___boxed(lean_object* v_00_u03b1_10_, lean_object* v_inst_11_, lean_object* v_inst_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Lean_SSet_empty(v_00_u03b1_10_, v_inst_11_, v_inst_12_);
lean_dec_ref(v_inst_12_);
lean_dec_ref(v_inst_11_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_instEmptyCollection___redArg(){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_obj_once(&l_Lean_SSet_empty___redArg___closed__0, &l_Lean_SSet_empty___redArg___closed__0_once, _init_l_Lean_SSet_empty___redArg___closed__0);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_instEmptyCollection___redArg___boxed(lean_object* v___dummy_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l_Lean_SSet_instEmptyCollection___redArg();
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_instEmptyCollection(lean_object* v_00_u03b1_18_, lean_object* v_inst_19_, lean_object* v_inst_20_){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_obj_once(&l_Lean_SSet_empty___redArg___closed__0, &l_Lean_SSet_empty___redArg___closed__0_once, _init_l_Lean_SSet_empty___redArg___closed__0);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_instEmptyCollection___boxed(lean_object* v_00_u03b1_22_, lean_object* v_inst_23_, lean_object* v_inst_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_SSet_instEmptyCollection(v_00_u03b1_22_, v_inst_23_, v_inst_24_);
lean_dec_ref(v_inst_24_);
lean_dec_ref(v_inst_23_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_instInhabited___redArg(){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_obj_once(&l_Lean_SSet_empty___redArg___closed__0, &l_Lean_SSet_empty___redArg___closed__0_once, _init_l_Lean_SSet_empty___redArg___closed__0);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_instInhabited___redArg___boxed(lean_object* v___dummy_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_SSet_instInhabited___redArg();
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_instInhabited(lean_object* v_00_u03b1_30_, lean_object* v_inst_31_, lean_object* v_inst_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_obj_once(&l_Lean_SSet_empty___redArg___closed__0, &l_Lean_SSet_empty___redArg___closed__0_once, _init_l_Lean_SSet_empty___redArg___closed__0);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_instInhabited___boxed(lean_object* v_00_u03b1_34_, lean_object* v_inst_35_, lean_object* v_inst_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_SSet_instInhabited(v_00_u03b1_34_, v_inst_35_, v_inst_36_);
lean_dec_ref(v_inst_36_);
lean_dec_ref(v_inst_35_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_insert___redArg(lean_object* v_inst_38_, lean_object* v_inst_39_, lean_object* v_s_40_, lean_object* v_a_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_box(0);
v___x_43_ = l_Lean_SMap_insert___redArg(v_inst_38_, v_inst_39_, v_s_40_, v_a_41_, v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_insert(lean_object* v_00_u03b1_44_, lean_object* v_inst_45_, lean_object* v_inst_46_, lean_object* v_s_47_, lean_object* v_a_48_){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_box(0);
v___x_50_ = l_Lean_SMap_insert___redArg(v_inst_45_, v_inst_46_, v_s_47_, v_a_48_, v___x_49_);
return v___x_50_;
}
}
LEAN_EXPORT uint8_t l_Lean_SSet_contains___redArg(lean_object* v_inst_51_, lean_object* v_inst_52_, lean_object* v_s_53_, lean_object* v_a_54_){
_start:
{
uint8_t v___x_55_; 
v___x_55_ = l_Lean_SMap_contains___redArg(v_inst_51_, v_inst_52_, v_s_53_, v_a_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_contains___redArg___boxed(lean_object* v_inst_56_, lean_object* v_inst_57_, lean_object* v_s_58_, lean_object* v_a_59_){
_start:
{
uint8_t v_res_60_; lean_object* v_r_61_; 
v_res_60_ = l_Lean_SSet_contains___redArg(v_inst_56_, v_inst_57_, v_s_58_, v_a_59_);
v_r_61_ = lean_box(v_res_60_);
return v_r_61_;
}
}
LEAN_EXPORT uint8_t l_Lean_SSet_contains(lean_object* v_00_u03b1_62_, lean_object* v_inst_63_, lean_object* v_inst_64_, lean_object* v_s_65_, lean_object* v_a_66_){
_start:
{
uint8_t v___x_67_; 
v___x_67_ = l_Lean_SMap_contains___redArg(v_inst_63_, v_inst_64_, v_s_65_, v_a_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_contains___boxed(lean_object* v_00_u03b1_68_, lean_object* v_inst_69_, lean_object* v_inst_70_, lean_object* v_s_71_, lean_object* v_a_72_){
_start:
{
uint8_t v_res_73_; lean_object* v_r_74_; 
v_res_73_ = l_Lean_SSet_contains(v_00_u03b1_68_, v_inst_69_, v_inst_70_, v_s_71_, v_a_72_);
v_r_74_ = lean_box(v_res_73_);
return v_r_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_forM___redArg___lam__0(lean_object* v_f_75_, lean_object* v_a_76_, lean_object* v_x_77_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lean_apply_1(v_f_75_, v_a_76_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_forM___redArg(lean_object* v_inst_79_, lean_object* v_s_80_, lean_object* v_f_81_){
_start:
{
lean_object* v___f_82_; lean_object* v___x_83_; 
v___f_82_ = lean_alloc_closure((void*)(l_Lean_SSet_forM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_82_, 0, v_f_81_);
v___x_83_ = l_Lean_SMap_forM___redArg(v_inst_79_, v_s_80_, v___f_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_forM(lean_object* v_00_u03b1_84_, lean_object* v_inst_85_, lean_object* v_inst_86_, lean_object* v_m_87_, lean_object* v_inst_88_, lean_object* v_s_89_, lean_object* v_f_90_){
_start:
{
lean_object* v___f_91_; lean_object* v___x_92_; 
v___f_91_ = lean_alloc_closure((void*)(l_Lean_SSet_forM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_91_, 0, v_f_90_);
v___x_92_ = l_Lean_SMap_forM___redArg(v_inst_88_, v_s_89_, v___f_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_forM___boxed(lean_object* v_00_u03b1_93_, lean_object* v_inst_94_, lean_object* v_inst_95_, lean_object* v_m_96_, lean_object* v_inst_97_, lean_object* v_s_98_, lean_object* v_f_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Lean_SSet_forM(v_00_u03b1_93_, v_inst_94_, v_inst_95_, v_m_96_, v_inst_97_, v_s_98_, v_f_99_);
lean_dec_ref(v_inst_95_);
lean_dec_ref(v_inst_94_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_switch___redArg(lean_object* v_s_101_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l_Lean_SMap_switch___redArg(v_s_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_switch(lean_object* v_00_u03b1_103_, lean_object* v_inst_104_, lean_object* v_inst_105_, lean_object* v_s_106_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = l_Lean_SMap_switch___redArg(v_s_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_switch___boxed(lean_object* v_00_u03b1_108_, lean_object* v_inst_109_, lean_object* v_inst_110_, lean_object* v_s_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_Lean_SSet_switch(v_00_u03b1_108_, v_inst_109_, v_inst_110_, v_s_111_);
lean_dec_ref(v_inst_110_);
lean_dec_ref(v_inst_109_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_fold___redArg___lam__0(lean_object* v_f_113_, lean_object* v_d_114_, lean_object* v_a_115_, lean_object* v_x_116_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = lean_apply_2(v_f_113_, v_d_114_, v_a_115_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_fold___redArg(lean_object* v_f_118_, lean_object* v_init_119_, lean_object* v_s_120_){
_start:
{
lean_object* v___f_121_; lean_object* v___x_122_; 
v___f_121_ = lean_alloc_closure((void*)(l_Lean_SSet_fold___redArg___lam__0), 4, 1);
lean_closure_set(v___f_121_, 0, v_f_118_);
v___x_122_ = l_Lean_SMap_fold___redArg(v___f_121_, v_init_119_, v_s_120_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_fold(lean_object* v_00_u03b1_123_, lean_object* v_inst_124_, lean_object* v_inst_125_, lean_object* v_00_u03c3_126_, lean_object* v_f_127_, lean_object* v_init_128_, lean_object* v_s_129_){
_start:
{
lean_object* v___f_130_; lean_object* v___x_131_; 
v___f_130_ = lean_alloc_closure((void*)(l_Lean_SSet_fold___redArg___lam__0), 4, 1);
lean_closure_set(v___f_130_, 0, v_f_127_);
v___x_131_ = l_Lean_SMap_fold___redArg(v___f_130_, v_init_128_, v_s_129_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_fold___boxed(lean_object* v_00_u03b1_132_, lean_object* v_inst_133_, lean_object* v_inst_134_, lean_object* v_00_u03c3_135_, lean_object* v_f_136_, lean_object* v_init_137_, lean_object* v_s_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_SSet_fold(v_00_u03b1_132_, v_inst_133_, v_inst_134_, v_00_u03c3_135_, v_f_136_, v_init_137_, v_s_138_);
lean_dec_ref(v_inst_134_);
lean_dec_ref(v_inst_133_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_toList___redArg___lam__0(lean_object* v_d_140_, lean_object* v_a_141_, lean_object* v_x_142_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_143_, 0, v_a_141_);
lean_ctor_set(v___x_143_, 1, v_d_140_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_toList___redArg(lean_object* v_m_145_){
_start:
{
lean_object* v___f_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___f_146_ = ((lean_object*)(l_Lean_SSet_toList___redArg___closed__0));
v___x_147_ = lean_box(0);
v___x_148_ = l_Lean_SMap_fold___redArg(v___f_146_, v___x_147_, v_m_145_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_toList(lean_object* v_00_u03b1_149_, lean_object* v_inst_150_, lean_object* v_inst_151_, lean_object* v_m_152_){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = l_Lean_SSet_toList___redArg(v_m_152_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_SSet_toList___boxed(lean_object* v_00_u03b1_154_, lean_object* v_inst_155_, lean_object* v_inst_156_, lean_object* v_m_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Lean_SSet_toList(v_00_u03b1_154_, v_inst_155_, v_inst_156_, v_m_157_);
lean_dec_ref(v_inst_156_);
lean_dec_ref(v_inst_155_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toSSet___redArg___lam__0(lean_object* v_inst_159_, lean_object* v_inst_160_, lean_object* v_s_161_, lean_object* v_a_162_){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = lean_box(0);
v___x_164_ = l_Lean_SMap_insert___redArg(v_inst_159_, v_inst_160_, v_s_161_, v_a_162_, v___x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toSSet___redArg(lean_object* v_inst_165_, lean_object* v_inst_166_, lean_object* v_es_167_){
_start:
{
lean_object* v___f_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___f_168_ = lean_alloc_closure((void*)(l_Lean_List_toSSet___redArg___lam__0), 4, 2);
lean_closure_set(v___f_168_, 0, v_inst_165_);
lean_closure_set(v___f_168_, 1, v_inst_166_);
v___x_169_ = lean_obj_once(&l_Lean_SSet_empty___redArg___closed__0, &l_Lean_SSet_empty___redArg___closed__0_once, _init_l_Lean_SSet_empty___redArg___closed__0);
v___x_170_ = l_List_foldl___redArg(v___f_168_, v___x_169_, v_es_167_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toSSet(lean_object* v_00_u03b1_171_, lean_object* v_inst_172_, lean_object* v_inst_173_, lean_object* v_es_174_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = l_Lean_List_toSSet___redArg(v_inst_172_, v_inst_173_, v_es_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprSSet___redArg___lam__0(lean_object* v_inst_179_, lean_object* v_v_180_, lean_object* v_prec_181_){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_182_ = l_Lean_SSet_toList___redArg(v_v_180_);
v___x_183_ = l_List_repr___redArg(v_inst_179_, v___x_182_);
v___x_184_ = ((lean_object*)(l_Lean_instReprSSet___redArg___lam__0___closed__1));
v___x_185_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_183_);
lean_ctor_set(v___x_185_, 1, v___x_184_);
v___x_186_ = l_Repr_addAppParen(v___x_185_, v_prec_181_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprSSet___redArg___lam__0___boxed(lean_object* v_inst_187_, lean_object* v_v_188_, lean_object* v_prec_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l_Lean_instReprSSet___redArg___lam__0(v_inst_187_, v_v_188_, v_prec_189_);
lean_dec(v_prec_189_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprSSet___redArg(lean_object* v_inst_191_){
_start:
{
lean_object* v___f_192_; 
v___f_192_ = lean_alloc_closure((void*)(l_Lean_instReprSSet___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_192_, 0, v_inst_191_);
return v___f_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprSSet(lean_object* v_00_u03b1_193_, lean_object* v_x_194_, lean_object* v_x_195_, lean_object* v_inst_196_){
_start:
{
lean_object* v___f_197_; 
v___f_197_ = lean_alloc_closure((void*)(l_Lean_instReprSSet___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_197_, 0, v_inst_196_);
return v___f_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprSSet___boxed(lean_object* v_00_u03b1_198_, lean_object* v_x_199_, lean_object* v_x_200_, lean_object* v_inst_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Lean_instReprSSet(v_00_u03b1_198_, v_x_199_, v_x_200_, v_inst_201_);
lean_dec_ref(v_x_200_);
lean_dec_ref(v_x_199_);
return v_res_202_;
}
}
lean_object* runtime_initialize_Lean_Data_SMap(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_SSet(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_SMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_SSet(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_SMap(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_SSet(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_SMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_SSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_SSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_SSet(builtin);
}
#ifdef __cplusplus
}
#endif
