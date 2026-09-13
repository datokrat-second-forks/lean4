// Lean compiler output
// Module: Lean.Util.PtrSet
// Imports: public import Init.Data.Hashable public import Std.Data.HashSet.Basic
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
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_instHashablePtr___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instHashablePtr___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instHashablePtr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashablePtr___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHashablePtr___redArg___closed__0 = (const lean_object*)&l_Lean_instHashablePtr___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instHashablePtr___redArg();
LEAN_EXPORT lean_object* l_Lean_instHashablePtr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instHashablePtr(lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqPtr___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqPtr___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqPtr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqPtr___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqPtr___redArg___closed__0 = (const lean_object*)&l_Lean_instBEqPtr___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instBEqPtr___redArg();
LEAN_EXPORT lean_object* l_Lean_instBEqPtr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqPtr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPtrSet___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPtrSet___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPtrSet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPtrSet___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PtrSet_insert___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PtrSet_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PtrSet_contains___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PtrSet_contains___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PtrSet_contains(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PtrSet_contains___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPtrMap___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPtrMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPtrMap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPtrMap___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PtrMap_insert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PtrMap_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PtrMap_contains___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PtrMap_contains___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PtrMap_contains(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PtrMap_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PtrMap_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PtrMap_find_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PtrMap_find_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PtrMap_find_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_instHashablePtr___redArg___lam__0(lean_object* v_a_1_){
_start:
{
size_t v___x_2_; uint64_t v___x_3_; uint64_t v___x_4_; uint64_t v___x_5_; 
v___x_2_ = lean_ptr_addr(v_a_1_);
v___x_3_ = lean_usize_to_uint64(v___x_2_);
v___x_4_ = 11ULL;
v___x_5_ = lean_uint64_mix_hash(v___x_3_, v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_instHashablePtr___redArg___lam__0___boxed(lean_object* v_a_6_){
_start:
{
uint64_t v_res_7_; lean_object* v_r_8_; 
v_res_7_ = l_Lean_instHashablePtr___redArg___lam__0(v_a_6_);
lean_dec(v_a_6_);
v_r_8_ = lean_box_uint64(v_res_7_);
return v_r_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_instHashablePtr___redArg(){
_start:
{
lean_object* v___f_11_; 
v___f_11_ = ((lean_object*)(l_Lean_instHashablePtr___redArg___closed__0));
return v___f_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_instHashablePtr___redArg___boxed(lean_object* v___dummy_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Lean_instHashablePtr___redArg();
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_instHashablePtr(lean_object* v_00_u03b1_14_){
_start:
{
lean_object* v___f_15_; 
v___f_15_ = ((lean_object*)(l_Lean_instHashablePtr___redArg___closed__0));
return v___f_15_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqPtr___redArg___lam__0(lean_object* v_a_16_, lean_object* v_b_17_){
_start:
{
size_t v___x_18_; size_t v___x_19_; uint8_t v___x_20_; 
v___x_18_ = lean_ptr_addr(v_a_16_);
v___x_19_ = lean_ptr_addr(v_b_17_);
v___x_20_ = lean_usize_dec_eq(v___x_18_, v___x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqPtr___redArg___lam__0___boxed(lean_object* v_a_21_, lean_object* v_b_22_){
_start:
{
uint8_t v_res_23_; lean_object* v_r_24_; 
v_res_23_ = l_Lean_instBEqPtr___redArg___lam__0(v_a_21_, v_b_22_);
lean_dec(v_b_22_);
lean_dec(v_a_21_);
v_r_24_ = lean_box(v_res_23_);
return v_r_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqPtr___redArg(){
_start:
{
lean_object* v___f_27_; 
v___f_27_ = ((lean_object*)(l_Lean_instBEqPtr___redArg___closed__0));
return v___f_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqPtr___redArg___boxed(lean_object* v___dummy_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instBEqPtr___redArg();
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqPtr(lean_object* v_00_u03b1_30_){
_start:
{
lean_object* v___f_31_; 
v___f_31_ = ((lean_object*)(l_Lean_instBEqPtr___redArg___closed__0));
return v___f_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPtrSet___redArg(lean_object* v_capacity_32_){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_33_ = lean_unsigned_to_nat(0u);
v___x_34_ = lean_unsigned_to_nat(4u);
v___x_35_ = lean_nat_mul(v_capacity_32_, v___x_34_);
v___x_36_ = lean_unsigned_to_nat(3u);
v___x_37_ = lean_nat_div(v___x_35_, v___x_36_);
lean_dec(v___x_35_);
v___x_38_ = l_Nat_nextPowerOfTwo(v___x_37_);
lean_dec(v___x_37_);
v___x_39_ = lean_box(0);
v___x_40_ = lean_mk_array(v___x_38_, v___x_39_);
v___x_41_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_41_, 0, v___x_33_);
lean_ctor_set(v___x_41_, 1, v___x_40_);
v___x_42_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPtrSet___redArg___boxed(lean_object* v_capacity_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lean_mkPtrSet___redArg(v_capacity_43_);
lean_dec(v_capacity_43_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPtrSet(lean_object* v_00_u03b1_45_, lean_object* v_capacity_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_mkPtrSet___redArg(v_capacity_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPtrSet___boxed(lean_object* v_00_u03b1_48_, lean_object* v_capacity_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_mkPtrSet(v_00_u03b1_48_, v_capacity_49_);
lean_dec(v_capacity_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_PtrSet_insert___redArg(lean_object* v_s_51_, lean_object* v_a_52_){
_start:
{
lean_object* v_toHashSet_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_64_; 
v_toHashSet_53_ = lean_ctor_get(v_s_51_, 0);
v_isSharedCheck_64_ = !lean_is_exclusive(v_s_51_);
if (v_isSharedCheck_64_ == 0)
{
v___x_55_ = v_s_51_;
v_isShared_56_ = v_isSharedCheck_64_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_toHashSet_53_);
lean_dec(v_s_51_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_64_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___f_57_; lean_object* v___f_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_62_; 
v___f_57_ = ((lean_object*)(l_Lean_instBEqPtr___redArg___closed__0));
v___f_58_ = ((lean_object*)(l_Lean_instHashablePtr___redArg___closed__0));
v___x_59_ = lean_box(0);
v___x_60_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___f_57_, v___f_58_, v_toHashSet_53_, v_a_52_, v___x_59_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 0, v___x_60_);
v___x_62_ = v___x_55_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v___x_60_);
v___x_62_ = v_reuseFailAlloc_63_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
return v___x_62_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PtrSet_insert(lean_object* v_00_u03b1_65_, lean_object* v_s_66_, lean_object* v_a_67_){
_start:
{
lean_object* v_toHashSet_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_79_; 
v_toHashSet_68_ = lean_ctor_get(v_s_66_, 0);
v_isSharedCheck_79_ = !lean_is_exclusive(v_s_66_);
if (v_isSharedCheck_79_ == 0)
{
v___x_70_ = v_s_66_;
v_isShared_71_ = v_isSharedCheck_79_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_toHashSet_68_);
lean_dec(v_s_66_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_79_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v___f_72_; lean_object* v___f_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_77_; 
v___f_72_ = ((lean_object*)(l_Lean_instBEqPtr___redArg___closed__0));
v___f_73_ = ((lean_object*)(l_Lean_instHashablePtr___redArg___closed__0));
v___x_74_ = lean_box(0);
v___x_75_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___f_72_, v___f_73_, v_toHashSet_68_, v_a_67_, v___x_74_);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 0, v___x_75_);
v___x_77_ = v___x_70_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v___x_75_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PtrSet_contains___redArg(lean_object* v_s_80_, lean_object* v_a_81_){
_start:
{
lean_object* v_toHashSet_82_; lean_object* v___f_83_; lean_object* v___f_84_; uint8_t v___x_85_; 
v_toHashSet_82_ = lean_ctor_get(v_s_80_, 0);
v___f_83_ = ((lean_object*)(l_Lean_instBEqPtr___redArg___closed__0));
v___f_84_ = ((lean_object*)(l_Lean_instHashablePtr___redArg___closed__0));
v___x_85_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_83_, v___f_84_, v_toHashSet_82_, v_a_81_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_PtrSet_contains___redArg___boxed(lean_object* v_s_86_, lean_object* v_a_87_){
_start:
{
uint8_t v_res_88_; lean_object* v_r_89_; 
v_res_88_ = l_Lean_PtrSet_contains___redArg(v_s_86_, v_a_87_);
lean_dec_ref(v_s_86_);
v_r_89_ = lean_box(v_res_88_);
return v_r_89_;
}
}
LEAN_EXPORT uint8_t l_Lean_PtrSet_contains(lean_object* v_00_u03b1_90_, lean_object* v_s_91_, lean_object* v_a_92_){
_start:
{
lean_object* v_toHashSet_93_; lean_object* v___f_94_; lean_object* v___f_95_; uint8_t v___x_96_; 
v_toHashSet_93_ = lean_ctor_get(v_s_91_, 0);
v___f_94_ = ((lean_object*)(l_Lean_instBEqPtr___redArg___closed__0));
v___f_95_ = ((lean_object*)(l_Lean_instHashablePtr___redArg___closed__0));
v___x_96_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_94_, v___f_95_, v_toHashSet_93_, v_a_92_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_PtrSet_contains___boxed(lean_object* v_00_u03b1_97_, lean_object* v_s_98_, lean_object* v_a_99_){
_start:
{
uint8_t v_res_100_; lean_object* v_r_101_; 
v_res_100_ = l_Lean_PtrSet_contains(v_00_u03b1_97_, v_s_98_, v_a_99_);
lean_dec_ref(v_s_98_);
v_r_101_ = lean_box(v_res_100_);
return v_r_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPtrMap___redArg(lean_object* v_capacity_102_){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_103_ = lean_unsigned_to_nat(0u);
v___x_104_ = lean_unsigned_to_nat(4u);
v___x_105_ = lean_nat_mul(v_capacity_102_, v___x_104_);
v___x_106_ = lean_unsigned_to_nat(3u);
v___x_107_ = lean_nat_div(v___x_105_, v___x_106_);
lean_dec(v___x_105_);
v___x_108_ = l_Nat_nextPowerOfTwo(v___x_107_);
lean_dec(v___x_107_);
v___x_109_ = lean_box(0);
v___x_110_ = lean_mk_array(v___x_108_, v___x_109_);
v___x_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_103_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
v___x_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPtrMap___redArg___boxed(lean_object* v_capacity_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lean_mkPtrMap___redArg(v_capacity_113_);
lean_dec(v_capacity_113_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPtrMap(lean_object* v_00_u03b1_115_, lean_object* v_00_u03b2_116_, lean_object* v_capacity_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l_Lean_mkPtrMap___redArg(v_capacity_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPtrMap___boxed(lean_object* v_00_u03b1_119_, lean_object* v_00_u03b2_120_, lean_object* v_capacity_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_mkPtrMap(v_00_u03b1_119_, v_00_u03b2_120_, v_capacity_121_);
lean_dec(v_capacity_121_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_PtrMap_insert___redArg(lean_object* v_s_123_, lean_object* v_a_124_, lean_object* v_b_125_){
_start:
{
lean_object* v_toHashMap_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_136_; 
v_toHashMap_126_ = lean_ctor_get(v_s_123_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v_s_123_);
if (v_isSharedCheck_136_ == 0)
{
v___x_128_ = v_s_123_;
v_isShared_129_ = v_isSharedCheck_136_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_toHashMap_126_);
lean_dec(v_s_123_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_136_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___f_130_; lean_object* v___f_131_; lean_object* v___x_132_; lean_object* v___x_134_; 
v___f_130_ = ((lean_object*)(l_Lean_instBEqPtr___redArg___closed__0));
v___f_131_ = ((lean_object*)(l_Lean_instHashablePtr___redArg___closed__0));
v___x_132_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_130_, v___f_131_, v_toHashMap_126_, v_a_124_, v_b_125_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 0, v___x_132_);
v___x_134_ = v___x_128_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v___x_132_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PtrMap_insert(lean_object* v_00_u03b1_137_, lean_object* v_00_u03b2_138_, lean_object* v_s_139_, lean_object* v_a_140_, lean_object* v_b_141_){
_start:
{
lean_object* v_toHashMap_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_152_; 
v_toHashMap_142_ = lean_ctor_get(v_s_139_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v_s_139_);
if (v_isSharedCheck_152_ == 0)
{
v___x_144_ = v_s_139_;
v_isShared_145_ = v_isSharedCheck_152_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_toHashMap_142_);
lean_dec(v_s_139_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_152_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___f_146_; lean_object* v___f_147_; lean_object* v___x_148_; lean_object* v___x_150_; 
v___f_146_ = ((lean_object*)(l_Lean_instBEqPtr___redArg___closed__0));
v___f_147_ = ((lean_object*)(l_Lean_instHashablePtr___redArg___closed__0));
v___x_148_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_146_, v___f_147_, v_toHashMap_142_, v_a_140_, v_b_141_);
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 0, v___x_148_);
v___x_150_ = v___x_144_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v___x_148_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PtrMap_contains___redArg(lean_object* v_s_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_toHashMap_155_; lean_object* v___f_156_; lean_object* v___f_157_; uint8_t v___x_158_; 
v_toHashMap_155_ = lean_ctor_get(v_s_153_, 0);
v___f_156_ = ((lean_object*)(l_Lean_instBEqPtr___redArg___closed__0));
v___f_157_ = ((lean_object*)(l_Lean_instHashablePtr___redArg___closed__0));
v___x_158_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_156_, v___f_157_, v_toHashMap_155_, v_a_154_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_PtrMap_contains___redArg___boxed(lean_object* v_s_159_, lean_object* v_a_160_){
_start:
{
uint8_t v_res_161_; lean_object* v_r_162_; 
v_res_161_ = l_Lean_PtrMap_contains___redArg(v_s_159_, v_a_160_);
lean_dec_ref(v_s_159_);
v_r_162_ = lean_box(v_res_161_);
return v_r_162_;
}
}
LEAN_EXPORT uint8_t l_Lean_PtrMap_contains(lean_object* v_00_u03b1_163_, lean_object* v_00_u03b2_164_, lean_object* v_s_165_, lean_object* v_a_166_){
_start:
{
lean_object* v_toHashMap_167_; lean_object* v___f_168_; lean_object* v___f_169_; uint8_t v___x_170_; 
v_toHashMap_167_ = lean_ctor_get(v_s_165_, 0);
v___f_168_ = ((lean_object*)(l_Lean_instBEqPtr___redArg___closed__0));
v___f_169_ = ((lean_object*)(l_Lean_instHashablePtr___redArg___closed__0));
v___x_170_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_168_, v___f_169_, v_toHashMap_167_, v_a_166_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_PtrMap_contains___boxed(lean_object* v_00_u03b1_171_, lean_object* v_00_u03b2_172_, lean_object* v_s_173_, lean_object* v_a_174_){
_start:
{
uint8_t v_res_175_; lean_object* v_r_176_; 
v_res_175_ = l_Lean_PtrMap_contains(v_00_u03b1_171_, v_00_u03b2_172_, v_s_173_, v_a_174_);
lean_dec_ref(v_s_173_);
v_r_176_ = lean_box(v_res_175_);
return v_r_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_PtrMap_find_x3f___redArg(lean_object* v_s_177_, lean_object* v_a_178_){
_start:
{
lean_object* v_toHashMap_179_; lean_object* v___f_180_; lean_object* v___f_181_; lean_object* v___x_182_; 
v_toHashMap_179_ = lean_ctor_get(v_s_177_, 0);
v___f_180_ = ((lean_object*)(l_Lean_instBEqPtr___redArg___closed__0));
v___f_181_ = ((lean_object*)(l_Lean_instHashablePtr___redArg___closed__0));
v___x_182_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_180_, v___f_181_, v_toHashMap_179_, v_a_178_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_PtrMap_find_x3f___redArg___boxed(lean_object* v_s_183_, lean_object* v_a_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l_Lean_PtrMap_find_x3f___redArg(v_s_183_, v_a_184_);
lean_dec_ref(v_s_183_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_PtrMap_find_x3f(lean_object* v_00_u03b1_186_, lean_object* v_00_u03b2_187_, lean_object* v_s_188_, lean_object* v_a_189_){
_start:
{
lean_object* v_toHashMap_190_; lean_object* v___f_191_; lean_object* v___f_192_; lean_object* v___x_193_; 
v_toHashMap_190_ = lean_ctor_get(v_s_188_, 0);
v___f_191_ = ((lean_object*)(l_Lean_instBEqPtr___redArg___closed__0));
v___f_192_ = ((lean_object*)(l_Lean_instHashablePtr___redArg___closed__0));
v___x_193_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_191_, v___f_192_, v_toHashMap_190_, v_a_189_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PtrMap_find_x3f___boxed(lean_object* v_00_u03b1_194_, lean_object* v_00_u03b2_195_, lean_object* v_s_196_, lean_object* v_a_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Lean_PtrMap_find_x3f(v_00_u03b1_194_, v_00_u03b2_195_, v_s_196_, v_a_197_);
lean_dec_ref(v_s_196_);
return v_res_198_;
}
}
lean_object* runtime_initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashSet_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_PtrSet(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashSet_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_PtrSet(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* initialize_Std_Data_HashSet_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_PtrSet(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashSet_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_PtrSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_PtrSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_PtrSet(builtin);
}
#ifdef __cplusplus
}
#endif
