// Lean compiler output
// Module: Init.UDecidable.Instances
// Imports: public import Init.UDecidable public import Init.Data.UInt.Basic public import Init.Data.Char.Basic public import Init.Data.Array.DecidableEq public import Init.Data.Nat.Lemmas
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
uint8_t l___private_Init_Data_Nat_Lemmas_0__Nat_anyLTTR_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l___private_Init_Data_Nat_Lemmas_0__Nat_allLTTR_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UInt8_Internal_ble___boxed(lean_object*, lean_object*);
uint8_t lean_uint8_dec_lt(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UInt8_Internal_blt___boxed(lean_object*, lean_object*);
uint8_t lean_uint16_dec_le(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_Internal_ble___boxed(lean_object*, lean_object*);
uint8_t lean_uint16_dec_lt(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_Internal_blt___boxed(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UInt32_Internal_ble___boxed(lean_object*, lean_object*);
uint8_t lean_uint32_dec_lt(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UInt32_Internal_blt___boxed(lean_object*, lean_object*);
uint8_t lean_uint64_dec_le(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_Internal_ble___boxed(lean_object*, lean_object*);
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_Internal_blt___boxed(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
LEAN_EXPORT lean_object* l_USize_Internal_ble___boxed(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l_USize_Internal_blt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt8Le(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt8Le___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt8Lt(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt8Lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt16Le(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt16Le___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt16Lt(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt16Lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt32Le(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt32Le___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt32Lt(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt32Lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt64Le(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt64Le___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt64Lt(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt64Lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUSizeLe(size_t, size_t);
LEAN_EXPORT lean_object* l_UDecidable_instUSizeLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUSizeLt(size_t, size_t);
LEAN_EXPORT lean_object* l_UDecidable_instUSizeLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instCharLe(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UDecidable_instCharLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instCharLt(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UDecidable_instCharLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instBoolForall___redArg(lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instBoolForall___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instBoolForall(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instBoolForall___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instBoolExists___redArg(lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instBoolExists___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instBoolExists(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instBoolExists___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instArrayEq___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instArrayEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instArrayEq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instArrayEq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instArrayEq(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instArrayEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instForallNatLt___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instForallNatLt___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instForallNatLt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instForallNatLt___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instForallNatLt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instForallNatLt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instForallNatLe___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instForallNatLe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instForallNatLe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instForallNatLe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instForallFin___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instForallFin___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instForallFin___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instForallFin___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instForallFin(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instForallFin___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLt_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLt_x27___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLt_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLt_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLe_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLe_x27___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLe_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLe_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLt___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLe___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instExistsFin___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instExistsFin___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instExistsFin(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instExistsFin___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UInt8_Internal_ble___boxed(lean_object* v_a_3_, lean_object* v_b_4_){
_start:
{
uint8_t v_a_boxed_5_; uint8_t v_b_boxed_6_; uint8_t v_res_7_; lean_object* v_r_8_; 
v_a_boxed_5_ = lean_unbox(v_a_3_);
v_b_boxed_6_ = lean_unbox(v_b_4_);
v_res_7_ = lean_uint8_dec_le(v_a_boxed_5_, v_b_boxed_6_);
v_r_8_ = lean_box(v_res_7_);
return v_r_8_;
}
}
LEAN_EXPORT lean_object* l_UInt8_Internal_blt___boxed(lean_object* v_a_11_, lean_object* v_b_12_){
_start:
{
uint8_t v_a_boxed_13_; uint8_t v_b_boxed_14_; uint8_t v_res_15_; lean_object* v_r_16_; 
v_a_boxed_13_ = lean_unbox(v_a_11_);
v_b_boxed_14_ = lean_unbox(v_b_12_);
v_res_15_ = lean_uint8_dec_lt(v_a_boxed_13_, v_b_boxed_14_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT lean_object* l_UInt16_Internal_ble___boxed(lean_object* v_a_19_, lean_object* v_b_20_){
_start:
{
uint16_t v_a_boxed_21_; uint16_t v_b_boxed_22_; uint8_t v_res_23_; lean_object* v_r_24_; 
v_a_boxed_21_ = lean_unbox(v_a_19_);
v_b_boxed_22_ = lean_unbox(v_b_20_);
v_res_23_ = lean_uint16_dec_le(v_a_boxed_21_, v_b_boxed_22_);
v_r_24_ = lean_box(v_res_23_);
return v_r_24_;
}
}
LEAN_EXPORT lean_object* l_UInt16_Internal_blt___boxed(lean_object* v_a_27_, lean_object* v_b_28_){
_start:
{
uint16_t v_a_boxed_29_; uint16_t v_b_boxed_30_; uint8_t v_res_31_; lean_object* v_r_32_; 
v_a_boxed_29_ = lean_unbox(v_a_27_);
v_b_boxed_30_ = lean_unbox(v_b_28_);
v_res_31_ = lean_uint16_dec_lt(v_a_boxed_29_, v_b_boxed_30_);
v_r_32_ = lean_box(v_res_31_);
return v_r_32_;
}
}
LEAN_EXPORT lean_object* l_UInt32_Internal_ble___boxed(lean_object* v_a_35_, lean_object* v_b_36_){
_start:
{
uint32_t v_a_boxed_37_; uint32_t v_b_boxed_38_; uint8_t v_res_39_; lean_object* v_r_40_; 
v_a_boxed_37_ = lean_unbox_uint32(v_a_35_);
lean_dec(v_a_35_);
v_b_boxed_38_ = lean_unbox_uint32(v_b_36_);
lean_dec(v_b_36_);
v_res_39_ = lean_uint32_dec_le(v_a_boxed_37_, v_b_boxed_38_);
v_r_40_ = lean_box(v_res_39_);
return v_r_40_;
}
}
LEAN_EXPORT lean_object* l_UInt32_Internal_blt___boxed(lean_object* v_a_43_, lean_object* v_b_44_){
_start:
{
uint32_t v_a_boxed_45_; uint32_t v_b_boxed_46_; uint8_t v_res_47_; lean_object* v_r_48_; 
v_a_boxed_45_ = lean_unbox_uint32(v_a_43_);
lean_dec(v_a_43_);
v_b_boxed_46_ = lean_unbox_uint32(v_b_44_);
lean_dec(v_b_44_);
v_res_47_ = lean_uint32_dec_lt(v_a_boxed_45_, v_b_boxed_46_);
v_r_48_ = lean_box(v_res_47_);
return v_r_48_;
}
}
LEAN_EXPORT lean_object* l_UInt64_Internal_ble___boxed(lean_object* v_a_51_, lean_object* v_b_52_){
_start:
{
uint64_t v_a_boxed_53_; uint64_t v_b_boxed_54_; uint8_t v_res_55_; lean_object* v_r_56_; 
v_a_boxed_53_ = lean_unbox_uint64(v_a_51_);
lean_dec_ref(v_a_51_);
v_b_boxed_54_ = lean_unbox_uint64(v_b_52_);
lean_dec_ref(v_b_52_);
v_res_55_ = lean_uint64_dec_le(v_a_boxed_53_, v_b_boxed_54_);
v_r_56_ = lean_box(v_res_55_);
return v_r_56_;
}
}
LEAN_EXPORT lean_object* l_UInt64_Internal_blt___boxed(lean_object* v_a_59_, lean_object* v_b_60_){
_start:
{
uint64_t v_a_boxed_61_; uint64_t v_b_boxed_62_; uint8_t v_res_63_; lean_object* v_r_64_; 
v_a_boxed_61_ = lean_unbox_uint64(v_a_59_);
lean_dec_ref(v_a_59_);
v_b_boxed_62_ = lean_unbox_uint64(v_b_60_);
lean_dec_ref(v_b_60_);
v_res_63_ = lean_uint64_dec_lt(v_a_boxed_61_, v_b_boxed_62_);
v_r_64_ = lean_box(v_res_63_);
return v_r_64_;
}
}
LEAN_EXPORT lean_object* l_USize_Internal_ble___boxed(lean_object* v_a_67_, lean_object* v_b_68_){
_start:
{
size_t v_a_boxed_69_; size_t v_b_boxed_70_; uint8_t v_res_71_; lean_object* v_r_72_; 
v_a_boxed_69_ = lean_unbox_usize(v_a_67_);
lean_dec(v_a_67_);
v_b_boxed_70_ = lean_unbox_usize(v_b_68_);
lean_dec(v_b_68_);
v_res_71_ = lean_usize_dec_le(v_a_boxed_69_, v_b_boxed_70_);
v_r_72_ = lean_box(v_res_71_);
return v_r_72_;
}
}
LEAN_EXPORT lean_object* l_USize_Internal_blt___boxed(lean_object* v_a_75_, lean_object* v_b_76_){
_start:
{
size_t v_a_boxed_77_; size_t v_b_boxed_78_; uint8_t v_res_79_; lean_object* v_r_80_; 
v_a_boxed_77_ = lean_unbox_usize(v_a_75_);
lean_dec(v_a_75_);
v_b_boxed_78_ = lean_unbox_usize(v_b_76_);
lean_dec(v_b_76_);
v_res_79_ = lean_usize_dec_lt(v_a_boxed_77_, v_b_boxed_78_);
v_r_80_ = lean_box(v_res_79_);
return v_r_80_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt8Le(uint8_t v_a_81_, uint8_t v_b_82_){
_start:
{
uint8_t v___x_83_; 
v___x_83_ = lean_uint8_dec_le(v_a_81_, v_b_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt8Le___boxed(lean_object* v_a_84_, lean_object* v_b_85_){
_start:
{
uint8_t v_a_boxed_86_; uint8_t v_b_boxed_87_; uint8_t v_res_88_; lean_object* v_r_89_; 
v_a_boxed_86_ = lean_unbox(v_a_84_);
v_b_boxed_87_ = lean_unbox(v_b_85_);
v_res_88_ = l_UDecidable_instUInt8Le(v_a_boxed_86_, v_b_boxed_87_);
v_r_89_ = lean_box(v_res_88_);
return v_r_89_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt8Lt(uint8_t v_a_90_, uint8_t v_b_91_){
_start:
{
uint8_t v___x_92_; 
v___x_92_ = lean_uint8_dec_lt(v_a_90_, v_b_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt8Lt___boxed(lean_object* v_a_93_, lean_object* v_b_94_){
_start:
{
uint8_t v_a_boxed_95_; uint8_t v_b_boxed_96_; uint8_t v_res_97_; lean_object* v_r_98_; 
v_a_boxed_95_ = lean_unbox(v_a_93_);
v_b_boxed_96_ = lean_unbox(v_b_94_);
v_res_97_ = l_UDecidable_instUInt8Lt(v_a_boxed_95_, v_b_boxed_96_);
v_r_98_ = lean_box(v_res_97_);
return v_r_98_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt16Le(uint16_t v_a_99_, uint16_t v_b_100_){
_start:
{
uint8_t v___x_101_; 
v___x_101_ = lean_uint16_dec_le(v_a_99_, v_b_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt16Le___boxed(lean_object* v_a_102_, lean_object* v_b_103_){
_start:
{
uint16_t v_a_boxed_104_; uint16_t v_b_boxed_105_; uint8_t v_res_106_; lean_object* v_r_107_; 
v_a_boxed_104_ = lean_unbox(v_a_102_);
v_b_boxed_105_ = lean_unbox(v_b_103_);
v_res_106_ = l_UDecidable_instUInt16Le(v_a_boxed_104_, v_b_boxed_105_);
v_r_107_ = lean_box(v_res_106_);
return v_r_107_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt16Lt(uint16_t v_a_108_, uint16_t v_b_109_){
_start:
{
uint8_t v___x_110_; 
v___x_110_ = lean_uint16_dec_lt(v_a_108_, v_b_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt16Lt___boxed(lean_object* v_a_111_, lean_object* v_b_112_){
_start:
{
uint16_t v_a_boxed_113_; uint16_t v_b_boxed_114_; uint8_t v_res_115_; lean_object* v_r_116_; 
v_a_boxed_113_ = lean_unbox(v_a_111_);
v_b_boxed_114_ = lean_unbox(v_b_112_);
v_res_115_ = l_UDecidable_instUInt16Lt(v_a_boxed_113_, v_b_boxed_114_);
v_r_116_ = lean_box(v_res_115_);
return v_r_116_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt32Le(uint32_t v_a_117_, uint32_t v_b_118_){
_start:
{
uint8_t v___x_119_; 
v___x_119_ = lean_uint32_dec_le(v_a_117_, v_b_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt32Le___boxed(lean_object* v_a_120_, lean_object* v_b_121_){
_start:
{
uint32_t v_a_boxed_122_; uint32_t v_b_boxed_123_; uint8_t v_res_124_; lean_object* v_r_125_; 
v_a_boxed_122_ = lean_unbox_uint32(v_a_120_);
lean_dec(v_a_120_);
v_b_boxed_123_ = lean_unbox_uint32(v_b_121_);
lean_dec(v_b_121_);
v_res_124_ = l_UDecidable_instUInt32Le(v_a_boxed_122_, v_b_boxed_123_);
v_r_125_ = lean_box(v_res_124_);
return v_r_125_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt32Lt(uint32_t v_a_126_, uint32_t v_b_127_){
_start:
{
uint8_t v___x_128_; 
v___x_128_ = lean_uint32_dec_lt(v_a_126_, v_b_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt32Lt___boxed(lean_object* v_a_129_, lean_object* v_b_130_){
_start:
{
uint32_t v_a_boxed_131_; uint32_t v_b_boxed_132_; uint8_t v_res_133_; lean_object* v_r_134_; 
v_a_boxed_131_ = lean_unbox_uint32(v_a_129_);
lean_dec(v_a_129_);
v_b_boxed_132_ = lean_unbox_uint32(v_b_130_);
lean_dec(v_b_130_);
v_res_133_ = l_UDecidable_instUInt32Lt(v_a_boxed_131_, v_b_boxed_132_);
v_r_134_ = lean_box(v_res_133_);
return v_r_134_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt64Le(uint64_t v_a_135_, uint64_t v_b_136_){
_start:
{
uint8_t v___x_137_; 
v___x_137_ = lean_uint64_dec_le(v_a_135_, v_b_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt64Le___boxed(lean_object* v_a_138_, lean_object* v_b_139_){
_start:
{
uint64_t v_a_boxed_140_; uint64_t v_b_boxed_141_; uint8_t v_res_142_; lean_object* v_r_143_; 
v_a_boxed_140_ = lean_unbox_uint64(v_a_138_);
lean_dec_ref(v_a_138_);
v_b_boxed_141_ = lean_unbox_uint64(v_b_139_);
lean_dec_ref(v_b_139_);
v_res_142_ = l_UDecidable_instUInt64Le(v_a_boxed_140_, v_b_boxed_141_);
v_r_143_ = lean_box(v_res_142_);
return v_r_143_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt64Lt(uint64_t v_a_144_, uint64_t v_b_145_){
_start:
{
uint8_t v___x_146_; 
v___x_146_ = lean_uint64_dec_lt(v_a_144_, v_b_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt64Lt___boxed(lean_object* v_a_147_, lean_object* v_b_148_){
_start:
{
uint64_t v_a_boxed_149_; uint64_t v_b_boxed_150_; uint8_t v_res_151_; lean_object* v_r_152_; 
v_a_boxed_149_ = lean_unbox_uint64(v_a_147_);
lean_dec_ref(v_a_147_);
v_b_boxed_150_ = lean_unbox_uint64(v_b_148_);
lean_dec_ref(v_b_148_);
v_res_151_ = l_UDecidable_instUInt64Lt(v_a_boxed_149_, v_b_boxed_150_);
v_r_152_ = lean_box(v_res_151_);
return v_r_152_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUSizeLe(size_t v_a_153_, size_t v_b_154_){
_start:
{
uint8_t v___x_155_; 
v___x_155_ = lean_usize_dec_le(v_a_153_, v_b_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUSizeLe___boxed(lean_object* v_a_156_, lean_object* v_b_157_){
_start:
{
size_t v_a_boxed_158_; size_t v_b_boxed_159_; uint8_t v_res_160_; lean_object* v_r_161_; 
v_a_boxed_158_ = lean_unbox_usize(v_a_156_);
lean_dec(v_a_156_);
v_b_boxed_159_ = lean_unbox_usize(v_b_157_);
lean_dec(v_b_157_);
v_res_160_ = l_UDecidable_instUSizeLe(v_a_boxed_158_, v_b_boxed_159_);
v_r_161_ = lean_box(v_res_160_);
return v_r_161_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUSizeLt(size_t v_a_162_, size_t v_b_163_){
_start:
{
uint8_t v___x_164_; 
v___x_164_ = lean_usize_dec_lt(v_a_162_, v_b_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUSizeLt___boxed(lean_object* v_a_165_, lean_object* v_b_166_){
_start:
{
size_t v_a_boxed_167_; size_t v_b_boxed_168_; uint8_t v_res_169_; lean_object* v_r_170_; 
v_a_boxed_167_ = lean_unbox_usize(v_a_165_);
lean_dec(v_a_165_);
v_b_boxed_168_ = lean_unbox_usize(v_b_166_);
lean_dec(v_b_166_);
v_res_169_ = l_UDecidable_instUSizeLt(v_a_boxed_167_, v_b_boxed_168_);
v_r_170_ = lean_box(v_res_169_);
return v_r_170_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instCharLe(uint32_t v_c_171_, uint32_t v_d_172_){
_start:
{
uint8_t v___x_173_; 
v___x_173_ = lean_uint32_dec_le(v_c_171_, v_d_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instCharLe___boxed(lean_object* v_c_174_, lean_object* v_d_175_){
_start:
{
uint32_t v_c_boxed_176_; uint32_t v_d_boxed_177_; uint8_t v_res_178_; lean_object* v_r_179_; 
v_c_boxed_176_ = lean_unbox_uint32(v_c_174_);
lean_dec(v_c_174_);
v_d_boxed_177_ = lean_unbox_uint32(v_d_175_);
lean_dec(v_d_175_);
v_res_178_ = l_UDecidable_instCharLe(v_c_boxed_176_, v_d_boxed_177_);
v_r_179_ = lean_box(v_res_178_);
return v_r_179_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instCharLt(uint32_t v_c_180_, uint32_t v_d_181_){
_start:
{
uint8_t v___x_182_; 
v___x_182_ = lean_uint32_dec_lt(v_c_180_, v_d_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instCharLt___boxed(lean_object* v_c_183_, lean_object* v_d_184_){
_start:
{
uint32_t v_c_boxed_185_; uint32_t v_d_boxed_186_; uint8_t v_res_187_; lean_object* v_r_188_; 
v_c_boxed_185_ = lean_unbox_uint32(v_c_183_);
lean_dec(v_c_183_);
v_d_boxed_186_ = lean_unbox_uint32(v_d_184_);
lean_dec(v_d_184_);
v_res_187_ = l_UDecidable_instCharLt(v_c_boxed_185_, v_d_boxed_186_);
v_r_188_ = lean_box(v_res_187_);
return v_r_188_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instBoolForall___redArg(lean_object* v_inst_189_){
_start:
{
uint8_t v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_190_ = 1;
v___x_191_ = lean_box(v___x_190_);
lean_inc_ref(v_inst_189_);
v___x_192_ = lean_apply_1(v_inst_189_, v___x_191_);
v___x_193_ = lean_unbox(v___x_192_);
if (v___x_193_ == 0)
{
uint8_t v___x_194_; 
lean_dec_ref(v_inst_189_);
v___x_194_ = lean_unbox(v___x_192_);
return v___x_194_;
}
else
{
uint8_t v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_195_ = 0;
v___x_196_ = lean_box(v___x_195_);
v___x_197_ = lean_apply_1(v_inst_189_, v___x_196_);
v___x_198_ = lean_unbox(v___x_197_);
return v___x_198_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instBoolForall___redArg___boxed(lean_object* v_inst_199_){
_start:
{
uint8_t v_res_200_; lean_object* v_r_201_; 
v_res_200_ = l_UDecidable_instBoolForall___redArg(v_inst_199_);
v_r_201_ = lean_box(v_res_200_);
return v_r_201_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instBoolForall(lean_object* v_p_202_, lean_object* v_inst_203_){
_start:
{
uint8_t v___x_204_; 
v___x_204_ = l_UDecidable_instBoolForall___redArg(v_inst_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instBoolForall___boxed(lean_object* v_p_205_, lean_object* v_inst_206_){
_start:
{
uint8_t v_res_207_; lean_object* v_r_208_; 
v_res_207_ = l_UDecidable_instBoolForall(v_p_205_, v_inst_206_);
v_r_208_ = lean_box(v_res_207_);
return v_r_208_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instBoolExists___redArg(lean_object* v_inst_209_){
_start:
{
uint8_t v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; uint8_t v___x_213_; 
v___x_210_ = 1;
v___x_211_ = lean_box(v___x_210_);
lean_inc_ref(v_inst_209_);
v___x_212_ = lean_apply_1(v_inst_209_, v___x_211_);
v___x_213_ = lean_unbox(v___x_212_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; uint8_t v___x_215_; 
v___x_214_ = lean_apply_1(v_inst_209_, v___x_212_);
v___x_215_ = lean_unbox(v___x_214_);
return v___x_215_;
}
else
{
uint8_t v___x_216_; 
lean_dec_ref(v_inst_209_);
v___x_216_ = lean_unbox(v___x_212_);
return v___x_216_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instBoolExists___redArg___boxed(lean_object* v_inst_217_){
_start:
{
uint8_t v_res_218_; lean_object* v_r_219_; 
v_res_218_ = l_UDecidable_instBoolExists___redArg(v_inst_217_);
v_r_219_ = lean_box(v_res_218_);
return v_r_219_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instBoolExists(lean_object* v_p_220_, lean_object* v_inst_221_){
_start:
{
uint8_t v___x_222_; 
v___x_222_ = l_UDecidable_instBoolExists___redArg(v_inst_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instBoolExists___boxed(lean_object* v_p_223_, lean_object* v_inst_224_){
_start:
{
uint8_t v_res_225_; lean_object* v_r_226_; 
v_res_225_ = l_UDecidable_instBoolExists(v_p_223_, v_inst_224_);
v_r_226_ = lean_box(v_res_225_);
return v_r_226_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instArrayEq___redArg___lam__0(lean_object* v_inst_227_, lean_object* v_a_228_, lean_object* v_b_229_){
_start:
{
lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_230_ = lean_apply_2(v_inst_227_, v_a_228_, v_b_229_);
v___x_231_ = lean_unbox(v___x_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instArrayEq___redArg___lam__0___boxed(lean_object* v_inst_232_, lean_object* v_a_233_, lean_object* v_b_234_){
_start:
{
uint8_t v_res_235_; lean_object* v_r_236_; 
v_res_235_ = l_UDecidable_instArrayEq___redArg___lam__0(v_inst_232_, v_a_233_, v_b_234_);
v_r_236_ = lean_box(v_res_235_);
return v_r_236_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instArrayEq___redArg(lean_object* v_inst_237_, lean_object* v_xs_238_, lean_object* v_ys_239_){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; 
v___x_240_ = lean_array_get_size(v_xs_238_);
v___x_241_ = lean_array_get_size(v_ys_239_);
v___x_242_ = lean_nat_dec_eq(v___x_240_, v___x_241_);
if (v___x_242_ == 0)
{
lean_dec_ref(v_inst_237_);
return v___x_242_;
}
else
{
lean_object* v___f_243_; uint8_t v___x_244_; 
v___f_243_ = lean_alloc_closure((void*)(l_UDecidable_instArrayEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_243_, 0, v_inst_237_);
v___x_244_ = l_Array_isEqvAux___redArg(v_xs_238_, v_ys_239_, v___f_243_, v___x_240_);
return v___x_244_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instArrayEq___redArg___boxed(lean_object* v_inst_245_, lean_object* v_xs_246_, lean_object* v_ys_247_){
_start:
{
uint8_t v_res_248_; lean_object* v_r_249_; 
v_res_248_ = l_UDecidable_instArrayEq___redArg(v_inst_245_, v_xs_246_, v_ys_247_);
lean_dec_ref(v_ys_247_);
lean_dec_ref(v_xs_246_);
v_r_249_ = lean_box(v_res_248_);
return v_r_249_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instArrayEq(lean_object* v_00_u03b1_250_, lean_object* v_inst_251_, lean_object* v_xs_252_, lean_object* v_ys_253_){
_start:
{
uint8_t v___x_254_; 
v___x_254_ = l_UDecidable_instArrayEq___redArg(v_inst_251_, v_xs_252_, v_ys_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instArrayEq___boxed(lean_object* v_00_u03b1_255_, lean_object* v_inst_256_, lean_object* v_xs_257_, lean_object* v_ys_258_){
_start:
{
uint8_t v_res_259_; lean_object* v_r_260_; 
v_res_259_ = l_UDecidable_instArrayEq(v_00_u03b1_255_, v_inst_256_, v_xs_257_, v_ys_258_);
lean_dec_ref(v_ys_258_);
lean_dec_ref(v_xs_257_);
v_r_260_ = lean_box(v_res_259_);
return v_r_260_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instForallNatLt___redArg___lam__0(lean_object* v_inst_261_, lean_object* v_k_262_, lean_object* v_h_263_){
_start:
{
lean_object* v___x_264_; uint8_t v___x_265_; 
v___x_264_ = lean_apply_2(v_inst_261_, v_k_262_, lean_box(0));
v___x_265_ = lean_unbox(v___x_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instForallNatLt___redArg___lam__0___boxed(lean_object* v_inst_266_, lean_object* v_k_267_, lean_object* v_h_268_){
_start:
{
uint8_t v_res_269_; lean_object* v_r_270_; 
v_res_269_ = l_UDecidable_instForallNatLt___redArg___lam__0(v_inst_266_, v_k_267_, v_h_268_);
v_r_270_ = lean_box(v_res_269_);
return v_r_270_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instForallNatLt___redArg(lean_object* v_n_271_, lean_object* v_inst_272_){
_start:
{
lean_object* v___f_273_; uint8_t v___x_274_; 
v___f_273_ = lean_alloc_closure((void*)(l_UDecidable_instForallNatLt___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_273_, 0, v_inst_272_);
lean_inc(v_n_271_);
v___x_274_ = l___private_Init_Data_Nat_Lemmas_0__Nat_allLTTR_loop(v_n_271_, v___f_273_, v_n_271_, lean_box(0));
lean_dec(v_n_271_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instForallNatLt___redArg___boxed(lean_object* v_n_275_, lean_object* v_inst_276_){
_start:
{
uint8_t v_res_277_; lean_object* v_r_278_; 
v_res_277_ = l_UDecidable_instForallNatLt___redArg(v_n_275_, v_inst_276_);
v_r_278_ = lean_box(v_res_277_);
return v_r_278_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instForallNatLt(lean_object* v_n_279_, lean_object* v_p_280_, lean_object* v_inst_281_){
_start:
{
uint8_t v___x_282_; 
v___x_282_ = l_UDecidable_instForallNatLt___redArg(v_n_279_, v_inst_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instForallNatLt___boxed(lean_object* v_n_283_, lean_object* v_p_284_, lean_object* v_inst_285_){
_start:
{
uint8_t v_res_286_; lean_object* v_r_287_; 
v_res_286_ = l_UDecidable_instForallNatLt(v_n_283_, v_p_284_, v_inst_285_);
v_r_287_ = lean_box(v_res_286_);
return v_r_287_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instForallNatLe___redArg(lean_object* v_n_288_, lean_object* v_inst_289_){
_start:
{
lean_object* v___f_290_; lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v___f_290_ = lean_alloc_closure((void*)(l_UDecidable_instForallNatLt___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_290_, 0, v_inst_289_);
v___x_291_ = lean_unsigned_to_nat(1u);
v___x_292_ = lean_nat_add(v_n_288_, v___x_291_);
v___x_293_ = l_UDecidable_instForallNatLt___redArg(v___x_292_, v___f_290_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instForallNatLe___redArg___boxed(lean_object* v_n_294_, lean_object* v_inst_295_){
_start:
{
uint8_t v_res_296_; lean_object* v_r_297_; 
v_res_296_ = l_UDecidable_instForallNatLe___redArg(v_n_294_, v_inst_295_);
lean_dec(v_n_294_);
v_r_297_ = lean_box(v_res_296_);
return v_r_297_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instForallNatLe(lean_object* v_n_298_, lean_object* v_p_299_, lean_object* v_inst_300_){
_start:
{
uint8_t v___x_301_; 
v___x_301_ = l_UDecidable_instForallNatLe___redArg(v_n_298_, v_inst_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instForallNatLe___boxed(lean_object* v_n_302_, lean_object* v_p_303_, lean_object* v_inst_304_){
_start:
{
uint8_t v_res_305_; lean_object* v_r_306_; 
v_res_305_ = l_UDecidable_instForallNatLe(v_n_302_, v_p_303_, v_inst_304_);
lean_dec(v_n_302_);
v_r_306_ = lean_box(v_res_305_);
return v_r_306_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instForallFin___redArg___lam__0(lean_object* v_inst_307_, lean_object* v_k_308_, lean_object* v_h_309_){
_start:
{
lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_310_ = lean_apply_1(v_inst_307_, v_k_308_);
v___x_311_ = lean_unbox(v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instForallFin___redArg___lam__0___boxed(lean_object* v_inst_312_, lean_object* v_k_313_, lean_object* v_h_314_){
_start:
{
uint8_t v_res_315_; lean_object* v_r_316_; 
v_res_315_ = l_UDecidable_instForallFin___redArg___lam__0(v_inst_312_, v_k_313_, v_h_314_);
v_r_316_ = lean_box(v_res_315_);
return v_r_316_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instForallFin___redArg(lean_object* v_n_317_, lean_object* v_inst_318_){
_start:
{
lean_object* v___f_319_; uint8_t v___x_320_; 
v___f_319_ = lean_alloc_closure((void*)(l_UDecidable_instForallFin___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_319_, 0, v_inst_318_);
v___x_320_ = l_UDecidable_instForallNatLt___redArg(v_n_317_, v___f_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instForallFin___redArg___boxed(lean_object* v_n_321_, lean_object* v_inst_322_){
_start:
{
uint8_t v_res_323_; lean_object* v_r_324_; 
v_res_323_ = l_UDecidable_instForallFin___redArg(v_n_321_, v_inst_322_);
v_r_324_ = lean_box(v_res_323_);
return v_r_324_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instForallFin(lean_object* v_n_325_, lean_object* v_p_326_, lean_object* v_inst_327_){
_start:
{
uint8_t v___x_328_; 
v___x_328_ = l_UDecidable_instForallFin___redArg(v_n_325_, v_inst_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instForallFin___boxed(lean_object* v_n_329_, lean_object* v_p_330_, lean_object* v_inst_331_){
_start:
{
uint8_t v_res_332_; lean_object* v_r_333_; 
v_res_332_ = l_UDecidable_instForallFin(v_n_329_, v_p_330_, v_inst_331_);
v_r_333_ = lean_box(v_res_332_);
return v_r_333_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLt_x27___redArg(lean_object* v_n_334_, lean_object* v_inst_335_){
_start:
{
lean_object* v___f_336_; uint8_t v___x_337_; 
v___f_336_ = lean_alloc_closure((void*)(l_UDecidable_instForallNatLt___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_336_, 0, v_inst_335_);
lean_inc(v_n_334_);
v___x_337_ = l___private_Init_Data_Nat_Lemmas_0__Nat_anyLTTR_loop(v_n_334_, v___f_336_, v_n_334_, lean_box(0));
lean_dec(v_n_334_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLt_x27___redArg___boxed(lean_object* v_n_338_, lean_object* v_inst_339_){
_start:
{
uint8_t v_res_340_; lean_object* v_r_341_; 
v_res_340_ = l_UDecidable_instExistsNatLt_x27___redArg(v_n_338_, v_inst_339_);
v_r_341_ = lean_box(v_res_340_);
return v_r_341_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLt_x27(lean_object* v_n_342_, lean_object* v_p_343_, lean_object* v_inst_344_){
_start:
{
uint8_t v___x_345_; 
v___x_345_ = l_UDecidable_instExistsNatLt_x27___redArg(v_n_342_, v_inst_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLt_x27___boxed(lean_object* v_n_346_, lean_object* v_p_347_, lean_object* v_inst_348_){
_start:
{
uint8_t v_res_349_; lean_object* v_r_350_; 
v_res_349_ = l_UDecidable_instExistsNatLt_x27(v_n_346_, v_p_347_, v_inst_348_);
v_r_350_ = lean_box(v_res_349_);
return v_r_350_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLe_x27___redArg(lean_object* v_n_351_, lean_object* v_inst_352_){
_start:
{
lean_object* v___f_353_; lean_object* v___x_354_; lean_object* v___x_355_; uint8_t v___x_356_; 
v___f_353_ = lean_alloc_closure((void*)(l_UDecidable_instForallNatLt___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_353_, 0, v_inst_352_);
v___x_354_ = lean_unsigned_to_nat(1u);
v___x_355_ = lean_nat_add(v_n_351_, v___x_354_);
v___x_356_ = l_UDecidable_instExistsNatLt_x27___redArg(v___x_355_, v___f_353_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLe_x27___redArg___boxed(lean_object* v_n_357_, lean_object* v_inst_358_){
_start:
{
uint8_t v_res_359_; lean_object* v_r_360_; 
v_res_359_ = l_UDecidable_instExistsNatLe_x27___redArg(v_n_357_, v_inst_358_);
lean_dec(v_n_357_);
v_r_360_ = lean_box(v_res_359_);
return v_r_360_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLe_x27(lean_object* v_n_361_, lean_object* v_p_362_, lean_object* v_inst_363_){
_start:
{
uint8_t v___x_364_; 
v___x_364_ = l_UDecidable_instExistsNatLe_x27___redArg(v_n_361_, v_inst_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLe_x27___boxed(lean_object* v_n_365_, lean_object* v_p_366_, lean_object* v_inst_367_){
_start:
{
uint8_t v_res_368_; lean_object* v_r_369_; 
v_res_368_ = l_UDecidable_instExistsNatLe_x27(v_n_365_, v_p_366_, v_inst_367_);
lean_dec(v_n_365_);
v_r_369_ = lean_box(v_res_368_);
return v_r_369_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLt___redArg(lean_object* v_inst_370_, lean_object* v_x_371_){
_start:
{
lean_object* v___f_372_; uint8_t v___x_373_; 
v___f_372_ = lean_alloc_closure((void*)(l_UDecidable_instForallFin___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_372_, 0, v_inst_370_);
v___x_373_ = l_UDecidable_instExistsNatLt_x27___redArg(v_x_371_, v___f_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLt___redArg___boxed(lean_object* v_inst_374_, lean_object* v_x_375_){
_start:
{
uint8_t v_res_376_; lean_object* v_r_377_; 
v_res_376_ = l_UDecidable_instExistsNatLt___redArg(v_inst_374_, v_x_375_);
v_r_377_ = lean_box(v_res_376_);
return v_r_377_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLt(lean_object* v_p_378_, lean_object* v_inst_379_, lean_object* v_x_380_){
_start:
{
uint8_t v___x_381_; 
v___x_381_ = l_UDecidable_instExistsNatLt___redArg(v_inst_379_, v_x_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLt___boxed(lean_object* v_p_382_, lean_object* v_inst_383_, lean_object* v_x_384_){
_start:
{
uint8_t v_res_385_; lean_object* v_r_386_; 
v_res_385_ = l_UDecidable_instExistsNatLt(v_p_382_, v_inst_383_, v_x_384_);
v_r_386_ = lean_box(v_res_385_);
return v_r_386_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLe___redArg(lean_object* v_inst_387_, lean_object* v_x_388_){
_start:
{
lean_object* v___f_389_; uint8_t v___x_390_; 
v___f_389_ = lean_alloc_closure((void*)(l_UDecidable_instForallFin___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_389_, 0, v_inst_387_);
v___x_390_ = l_UDecidable_instExistsNatLe_x27___redArg(v_x_388_, v___f_389_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLe___redArg___boxed(lean_object* v_inst_391_, lean_object* v_x_392_){
_start:
{
uint8_t v_res_393_; lean_object* v_r_394_; 
v_res_393_ = l_UDecidable_instExistsNatLe___redArg(v_inst_391_, v_x_392_);
lean_dec(v_x_392_);
v_r_394_ = lean_box(v_res_393_);
return v_r_394_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instExistsNatLe(lean_object* v_p_395_, lean_object* v_inst_396_, lean_object* v_x_397_){
_start:
{
uint8_t v___x_398_; 
v___x_398_ = l_UDecidable_instExistsNatLe___redArg(v_inst_396_, v_x_397_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instExistsNatLe___boxed(lean_object* v_p_399_, lean_object* v_inst_400_, lean_object* v_x_401_){
_start:
{
uint8_t v_res_402_; lean_object* v_r_403_; 
v_res_402_ = l_UDecidable_instExistsNatLe(v_p_399_, v_inst_400_, v_x_401_);
lean_dec(v_x_401_);
v_r_403_ = lean_box(v_res_402_);
return v_r_403_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instExistsFin___redArg(lean_object* v_n_404_, lean_object* v_inst_405_){
_start:
{
lean_object* v___f_406_; uint8_t v___x_407_; 
v___f_406_ = lean_alloc_closure((void*)(l_UDecidable_instForallFin___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_406_, 0, v_inst_405_);
v___x_407_ = l_UDecidable_instExistsNatLt_x27___redArg(v_n_404_, v___f_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instExistsFin___redArg___boxed(lean_object* v_n_408_, lean_object* v_inst_409_){
_start:
{
uint8_t v_res_410_; lean_object* v_r_411_; 
v_res_410_ = l_UDecidable_instExistsFin___redArg(v_n_408_, v_inst_409_);
v_r_411_ = lean_box(v_res_410_);
return v_r_411_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instExistsFin(lean_object* v_n_412_, lean_object* v_p_413_, lean_object* v_inst_414_){
_start:
{
uint8_t v___x_415_; 
v___x_415_ = l_UDecidable_instExistsFin___redArg(v_n_412_, v_inst_414_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instExistsFin___boxed(lean_object* v_n_416_, lean_object* v_p_417_, lean_object* v_inst_418_){
_start:
{
uint8_t v_res_419_; lean_object* v_r_420_; 
v_res_419_ = l_UDecidable_instExistsFin(v_n_416_, v_p_417_, v_inst_418_);
v_r_420_ = lean_box(v_res_419_);
return v_r_420_;
}
}
lean_object* runtime_initialize_Init_UDecidable(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Char_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_DecidableEq(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Lemmas(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_UDecidable_Instances(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_UDecidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_DecidableEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_UDecidable_Instances(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_UDecidable(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Char_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Array_DecidableEq(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_UDecidable_Instances(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_UDecidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_DecidableEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_UDecidable_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_UDecidable_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_UDecidable_Instances(builtin);
}
#ifdef __cplusplus
}
#endif
