// Lean compiler output
// Module: Std.Http.Internal.Char
// Imports: public import Init.Data.Char public import Init.Data.String.Basic public import Init.Data.Int.Basic public import Init.Grind
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
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t l_Nat_blt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_uint8_dec_lt(uint8_t, uint8_t);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_inRange(uint32_t, uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_inRange___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isAscii(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isAscii___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isAsciiByte(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isAsciiByte___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isDigitByte(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isDigitByte___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isAlphaByte(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isAlphaByte___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_tchar(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_tchar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_vchar(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_vchar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_qdtext(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_qdtext___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_quotedPairChar(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_quotedPairChar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_quotedStringChar(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_quotedStringChar___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_qdtext_match__1_splitter___redArg(uint32_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_qdtext_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_qdtext_match__1_splitter(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_qdtext_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_quotedPairChar_match__1_splitter___redArg(uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_quotedPairChar_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_quotedPairChar_match__1_splitter(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_quotedPairChar_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_fieldVchar(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_fieldVchar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_fieldContent(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_fieldContent___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_ctext(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_ctext___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_etagc(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_etagc___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_ows(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_ows___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_bws(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_bws___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_rws(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_rws___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_obsText(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_obsText___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_reasonPhraseChar(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_reasonPhraseChar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isHexDigit(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isHexDigit___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isHexDigitByte(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isHexDigitByte___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isAlphaNum(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isAlphaNum___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isAsciiAlphaNumChar(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isAsciiAlphaNumChar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isValidSchemeChar(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isValidSchemeChar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isValidDomainNameChar(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isValidDomainNameChar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isUnreserved(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isUnreserved___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isSubDelims(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isSubDelims___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isPChar(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isPChar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isQueryChar(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isQueryChar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isFragmentChar(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isFragmentChar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isUserInfoChar(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isUserInfoChar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isQueryDataChar(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isQueryDataChar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_inRange(uint32_t v_c_1_, uint32_t v_lo_2_, uint32_t v_hi_3_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = lean_uint32_dec_le(v_lo_2_, v_c_1_);
if (v___x_4_ == 0)
{
return v___x_4_;
}
else
{
uint8_t v___x_5_; 
v___x_5_ = lean_uint32_dec_le(v_c_1_, v_hi_3_);
return v___x_5_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_inRange___boxed(lean_object* v_c_6_, lean_object* v_lo_7_, lean_object* v_hi_8_){
_start:
{
uint32_t v_c_boxed_9_; uint32_t v_lo_boxed_10_; uint32_t v_hi_boxed_11_; uint8_t v_res_12_; lean_object* v_r_13_; 
v_c_boxed_9_ = lean_unbox_uint32(v_c_6_);
lean_dec(v_c_6_);
v_lo_boxed_10_ = lean_unbox_uint32(v_lo_7_);
lean_dec(v_lo_7_);
v_hi_boxed_11_ = lean_unbox_uint32(v_hi_8_);
lean_dec(v_hi_8_);
v_res_12_ = l_Std_Http_Internal_Char_inRange(v_c_boxed_9_, v_lo_boxed_10_, v_hi_boxed_11_);
v_r_13_ = lean_box(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isAscii(uint32_t v_c_14_){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; uint8_t v___x_17_; 
v___x_15_ = lean_uint32_to_nat(v_c_14_);
v___x_16_ = lean_unsigned_to_nat(128u);
v___x_17_ = l_Nat_blt(v___x_15_, v___x_16_);
lean_dec(v___x_15_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isAscii___boxed(lean_object* v_c_18_){
_start:
{
uint32_t v_c_boxed_19_; uint8_t v_res_20_; lean_object* v_r_21_; 
v_c_boxed_19_ = lean_unbox_uint32(v_c_18_);
lean_dec(v_c_18_);
v_res_20_ = l_Std_Http_Internal_Char_isAscii(v_c_boxed_19_);
v_r_21_ = lean_box(v_res_20_);
return v_r_21_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isAsciiByte(uint8_t v_c_22_){
_start:
{
uint8_t v___x_23_; uint8_t v___x_24_; 
v___x_23_ = 128;
v___x_24_ = lean_uint8_dec_lt(v_c_22_, v___x_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isAsciiByte___boxed(lean_object* v_c_25_){
_start:
{
uint8_t v_c_boxed_26_; uint8_t v_res_27_; lean_object* v_r_28_; 
v_c_boxed_26_ = lean_unbox(v_c_25_);
v_res_27_ = l_Std_Http_Internal_Char_isAsciiByte(v_c_boxed_26_);
v_r_28_ = lean_box(v_res_27_);
return v_r_28_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isDigitByte(uint8_t v_c_29_){
_start:
{
uint8_t v___x_30_; uint8_t v___x_31_; 
v___x_30_ = 48;
v___x_31_ = lean_uint8_dec_le(v___x_30_, v_c_29_);
if (v___x_31_ == 0)
{
return v___x_31_;
}
else
{
uint8_t v___x_32_; uint8_t v___x_33_; 
v___x_32_ = 57;
v___x_33_ = lean_uint8_dec_le(v_c_29_, v___x_32_);
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isDigitByte___boxed(lean_object* v_c_34_){
_start:
{
uint8_t v_c_boxed_35_; uint8_t v_res_36_; lean_object* v_r_37_; 
v_c_boxed_35_ = lean_unbox(v_c_34_);
v_res_36_ = l_Std_Http_Internal_Char_isDigitByte(v_c_boxed_35_);
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isAlphaByte(uint8_t v_c_38_){
_start:
{
uint8_t v___x_44_; uint8_t v___x_45_; 
v___x_44_ = 65;
v___x_45_ = lean_uint8_dec_le(v___x_44_, v_c_38_);
if (v___x_45_ == 0)
{
goto v___jp_39_;
}
else
{
uint8_t v___x_46_; uint8_t v___x_47_; 
v___x_46_ = 90;
v___x_47_ = lean_uint8_dec_le(v_c_38_, v___x_46_);
if (v___x_47_ == 0)
{
goto v___jp_39_;
}
else
{
return v___x_47_;
}
}
v___jp_39_:
{
uint8_t v___x_40_; uint8_t v___x_41_; 
v___x_40_ = 97;
v___x_41_ = lean_uint8_dec_le(v___x_40_, v_c_38_);
if (v___x_41_ == 0)
{
return v___x_41_;
}
else
{
uint8_t v___x_42_; uint8_t v___x_43_; 
v___x_42_ = 122;
v___x_43_ = lean_uint8_dec_le(v_c_38_, v___x_42_);
return v___x_43_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isAlphaByte___boxed(lean_object* v_c_48_){
_start:
{
uint8_t v_c_boxed_49_; uint8_t v_res_50_; lean_object* v_r_51_; 
v_c_boxed_49_ = lean_unbox(v_c_48_);
v_res_50_ = l_Std_Http_Internal_Char_isAlphaByte(v_c_boxed_49_);
v_r_51_ = lean_box(v_res_50_);
return v_r_51_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_tchar(uint32_t v_c_52_){
_start:
{
uint32_t v___x_63_; uint8_t v___x_64_; 
v___x_63_ = 33;
v___x_64_ = lean_uint32_dec_eq(v_c_52_, v___x_63_);
if (v___x_64_ == 0)
{
uint32_t v___x_65_; uint8_t v___x_66_; 
v___x_65_ = 35;
v___x_66_ = lean_uint32_dec_eq(v_c_52_, v___x_65_);
if (v___x_66_ == 0)
{
uint32_t v___x_67_; uint8_t v___x_68_; 
v___x_67_ = 36;
v___x_68_ = lean_uint32_dec_eq(v_c_52_, v___x_67_);
if (v___x_68_ == 0)
{
uint32_t v___x_69_; uint8_t v___x_70_; 
v___x_69_ = 37;
v___x_70_ = lean_uint32_dec_eq(v_c_52_, v___x_69_);
if (v___x_70_ == 0)
{
uint32_t v___x_71_; uint8_t v___x_72_; 
v___x_71_ = 38;
v___x_72_ = lean_uint32_dec_eq(v_c_52_, v___x_71_);
if (v___x_72_ == 0)
{
uint32_t v___x_73_; uint8_t v___x_74_; 
v___x_73_ = 39;
v___x_74_ = lean_uint32_dec_eq(v_c_52_, v___x_73_);
if (v___x_74_ == 0)
{
uint32_t v___x_75_; uint8_t v___x_76_; 
v___x_75_ = 42;
v___x_76_ = lean_uint32_dec_eq(v_c_52_, v___x_75_);
if (v___x_76_ == 0)
{
uint32_t v___x_77_; uint8_t v___x_78_; 
v___x_77_ = 43;
v___x_78_ = lean_uint32_dec_eq(v_c_52_, v___x_77_);
if (v___x_78_ == 0)
{
uint32_t v___x_79_; uint8_t v___x_80_; 
v___x_79_ = 45;
v___x_80_ = lean_uint32_dec_eq(v_c_52_, v___x_79_);
if (v___x_80_ == 0)
{
uint32_t v___x_81_; uint8_t v___x_82_; 
v___x_81_ = 46;
v___x_82_ = lean_uint32_dec_eq(v_c_52_, v___x_81_);
if (v___x_82_ == 0)
{
uint32_t v___x_83_; uint8_t v___x_84_; 
v___x_83_ = 94;
v___x_84_ = lean_uint32_dec_eq(v_c_52_, v___x_83_);
if (v___x_84_ == 0)
{
uint32_t v___x_85_; uint8_t v___x_86_; 
v___x_85_ = 95;
v___x_86_ = lean_uint32_dec_eq(v_c_52_, v___x_85_);
if (v___x_86_ == 0)
{
uint32_t v___x_87_; uint8_t v___x_88_; 
v___x_87_ = 96;
v___x_88_ = lean_uint32_dec_eq(v_c_52_, v___x_87_);
if (v___x_88_ == 0)
{
uint32_t v___x_89_; uint8_t v___x_90_; 
v___x_89_ = 124;
v___x_90_ = lean_uint32_dec_eq(v_c_52_, v___x_89_);
if (v___x_90_ == 0)
{
uint32_t v___x_91_; uint8_t v___x_92_; 
v___x_91_ = 126;
v___x_92_ = lean_uint32_dec_eq(v_c_52_, v___x_91_);
if (v___x_92_ == 0)
{
uint32_t v___x_93_; uint8_t v___x_94_; 
v___x_93_ = 48;
v___x_94_ = lean_uint32_dec_le(v___x_93_, v_c_52_);
if (v___x_94_ == 0)
{
goto v___jp_58_;
}
else
{
uint32_t v___x_95_; uint8_t v___x_96_; 
v___x_95_ = 57;
v___x_96_ = lean_uint32_dec_le(v_c_52_, v___x_95_);
if (v___x_96_ == 0)
{
goto v___jp_58_;
}
else
{
return v___x_96_;
}
}
}
else
{
return v___x_92_;
}
}
else
{
return v___x_90_;
}
}
else
{
return v___x_88_;
}
}
else
{
return v___x_86_;
}
}
else
{
return v___x_84_;
}
}
else
{
return v___x_82_;
}
}
else
{
return v___x_80_;
}
}
else
{
return v___x_78_;
}
}
else
{
return v___x_76_;
}
}
else
{
return v___x_74_;
}
}
else
{
return v___x_72_;
}
}
else
{
return v___x_70_;
}
}
else
{
return v___x_68_;
}
}
else
{
return v___x_66_;
}
}
else
{
return v___x_64_;
}
v___jp_53_:
{
uint32_t v___x_54_; uint8_t v___x_55_; 
v___x_54_ = 97;
v___x_55_ = lean_uint32_dec_le(v___x_54_, v_c_52_);
if (v___x_55_ == 0)
{
return v___x_55_;
}
else
{
uint32_t v___x_56_; uint8_t v___x_57_; 
v___x_56_ = 122;
v___x_57_ = lean_uint32_dec_le(v_c_52_, v___x_56_);
return v___x_57_;
}
}
v___jp_58_:
{
uint32_t v___x_59_; uint8_t v___x_60_; 
v___x_59_ = 65;
v___x_60_ = lean_uint32_dec_le(v___x_59_, v_c_52_);
if (v___x_60_ == 0)
{
goto v___jp_53_;
}
else
{
uint32_t v___x_61_; uint8_t v___x_62_; 
v___x_61_ = 90;
v___x_62_ = lean_uint32_dec_le(v_c_52_, v___x_61_);
if (v___x_62_ == 0)
{
goto v___jp_53_;
}
else
{
return v___x_62_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_tchar___boxed(lean_object* v_c_97_){
_start:
{
uint32_t v_c_boxed_98_; uint8_t v_res_99_; lean_object* v_r_100_; 
v_c_boxed_98_ = lean_unbox_uint32(v_c_97_);
lean_dec(v_c_97_);
v_res_99_ = l_Std_Http_Internal_Char_tchar(v_c_boxed_98_);
v_r_100_ = lean_box(v_res_99_);
return v_r_100_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_vchar(uint32_t v_c_101_){
_start:
{
uint32_t v___x_102_; uint8_t v___x_103_; 
v___x_102_ = 33;
v___x_103_ = lean_uint32_dec_le(v___x_102_, v_c_101_);
if (v___x_103_ == 0)
{
return v___x_103_;
}
else
{
uint32_t v___x_104_; uint8_t v___x_105_; 
v___x_104_ = 126;
v___x_105_ = lean_uint32_dec_le(v_c_101_, v___x_104_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_vchar___boxed(lean_object* v_c_106_){
_start:
{
uint32_t v_c_boxed_107_; uint8_t v_res_108_; lean_object* v_r_109_; 
v_c_boxed_107_ = lean_unbox_uint32(v_c_106_);
lean_dec(v_c_106_);
v_res_108_ = l_Std_Http_Internal_Char_vchar(v_c_boxed_107_);
v_r_109_ = lean_box(v_res_108_);
return v_r_109_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_qdtext(uint32_t v_c_110_){
_start:
{
uint32_t v___x_116_; uint8_t v___x_117_; 
v___x_116_ = 9;
v___x_117_ = lean_uint32_dec_eq(v_c_110_, v___x_116_);
if (v___x_117_ == 0)
{
uint32_t v___x_118_; uint8_t v___x_119_; 
v___x_118_ = 32;
v___x_119_ = lean_uint32_dec_eq(v_c_110_, v___x_118_);
if (v___x_119_ == 0)
{
uint32_t v___x_120_; uint8_t v___x_121_; 
v___x_120_ = 33;
v___x_121_ = lean_uint32_dec_eq(v_c_110_, v___x_120_);
if (v___x_121_ == 0)
{
uint32_t v___x_122_; uint8_t v___x_123_; 
v___x_122_ = 35;
v___x_123_ = lean_uint32_dec_le(v___x_122_, v_c_110_);
if (v___x_123_ == 0)
{
goto v___jp_111_;
}
else
{
uint32_t v___x_124_; uint8_t v___x_125_; 
v___x_124_ = 91;
v___x_125_ = lean_uint32_dec_le(v_c_110_, v___x_124_);
if (v___x_125_ == 0)
{
goto v___jp_111_;
}
else
{
return v___x_125_;
}
}
}
else
{
return v___x_121_;
}
}
else
{
return v___x_119_;
}
}
else
{
return v___x_117_;
}
v___jp_111_:
{
uint32_t v___x_112_; uint8_t v___x_113_; 
v___x_112_ = 93;
v___x_113_ = lean_uint32_dec_le(v___x_112_, v_c_110_);
if (v___x_113_ == 0)
{
return v___x_113_;
}
else
{
uint32_t v___x_114_; uint8_t v___x_115_; 
v___x_114_ = 126;
v___x_115_ = lean_uint32_dec_le(v_c_110_, v___x_114_);
return v___x_115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_qdtext___boxed(lean_object* v_c_126_){
_start:
{
uint32_t v_c_boxed_127_; uint8_t v_res_128_; lean_object* v_r_129_; 
v_c_boxed_127_ = lean_unbox_uint32(v_c_126_);
lean_dec(v_c_126_);
v_res_128_ = l_Std_Http_Internal_Char_qdtext(v_c_boxed_127_);
v_r_129_ = lean_box(v_res_128_);
return v_r_129_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_quotedPairChar(uint32_t v_c_130_){
_start:
{
uint32_t v___x_131_; uint8_t v___x_132_; 
v___x_131_ = 9;
v___x_132_ = lean_uint32_dec_eq(v_c_130_, v___x_131_);
if (v___x_132_ == 0)
{
uint32_t v___x_133_; uint8_t v___x_134_; 
v___x_133_ = 32;
v___x_134_ = lean_uint32_dec_eq(v_c_130_, v___x_133_);
if (v___x_134_ == 0)
{
uint32_t v___x_135_; uint8_t v___x_136_; 
v___x_135_ = 33;
v___x_136_ = lean_uint32_dec_le(v___x_135_, v_c_130_);
if (v___x_136_ == 0)
{
return v___x_136_;
}
else
{
uint32_t v___x_137_; uint8_t v___x_138_; 
v___x_137_ = 126;
v___x_138_ = lean_uint32_dec_le(v_c_130_, v___x_137_);
return v___x_138_;
}
}
else
{
return v___x_134_;
}
}
else
{
return v___x_132_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_quotedPairChar___boxed(lean_object* v_c_139_){
_start:
{
uint32_t v_c_boxed_140_; uint8_t v_res_141_; lean_object* v_r_142_; 
v_c_boxed_140_ = lean_unbox_uint32(v_c_139_);
lean_dec(v_c_139_);
v_res_141_ = l_Std_Http_Internal_Char_quotedPairChar(v_c_boxed_140_);
v_r_142_ = lean_box(v_res_141_);
return v_r_142_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_quotedStringChar(uint32_t v_c_143_){
_start:
{
uint32_t v___x_158_; uint8_t v___x_159_; 
v___x_158_ = 9;
v___x_159_ = lean_uint32_dec_eq(v_c_143_, v___x_158_);
if (v___x_159_ == 0)
{
uint32_t v___x_160_; uint8_t v___x_161_; 
v___x_160_ = 32;
v___x_161_ = lean_uint32_dec_eq(v_c_143_, v___x_160_);
if (v___x_161_ == 0)
{
uint32_t v___x_162_; uint8_t v___x_163_; 
v___x_162_ = 33;
v___x_163_ = lean_uint32_dec_eq(v_c_143_, v___x_162_);
if (v___x_163_ == 0)
{
uint32_t v___x_164_; uint8_t v___x_165_; 
v___x_164_ = 35;
v___x_165_ = lean_uint32_dec_le(v___x_164_, v_c_143_);
if (v___x_165_ == 0)
{
goto v___jp_153_;
}
else
{
uint32_t v___x_166_; uint8_t v___x_167_; 
v___x_166_ = 91;
v___x_167_ = lean_uint32_dec_le(v_c_143_, v___x_166_);
if (v___x_167_ == 0)
{
goto v___jp_153_;
}
else
{
return v___x_167_;
}
}
}
else
{
return v___x_163_;
}
}
else
{
return v___x_161_;
}
}
else
{
return v___x_159_;
}
v___jp_144_:
{
uint32_t v___x_145_; uint8_t v___x_146_; 
v___x_145_ = 9;
v___x_146_ = lean_uint32_dec_eq(v_c_143_, v___x_145_);
if (v___x_146_ == 0)
{
uint32_t v___x_147_; uint8_t v___x_148_; 
v___x_147_ = 32;
v___x_148_ = lean_uint32_dec_eq(v_c_143_, v___x_147_);
if (v___x_148_ == 0)
{
uint32_t v___x_149_; uint8_t v___x_150_; 
v___x_149_ = 33;
v___x_150_ = lean_uint32_dec_le(v___x_149_, v_c_143_);
if (v___x_150_ == 0)
{
return v___x_150_;
}
else
{
uint32_t v___x_151_; uint8_t v___x_152_; 
v___x_151_ = 126;
v___x_152_ = lean_uint32_dec_le(v_c_143_, v___x_151_);
return v___x_152_;
}
}
else
{
return v___x_148_;
}
}
else
{
return v___x_146_;
}
}
v___jp_153_:
{
uint32_t v___x_154_; uint8_t v___x_155_; 
v___x_154_ = 93;
v___x_155_ = lean_uint32_dec_le(v___x_154_, v_c_143_);
if (v___x_155_ == 0)
{
goto v___jp_144_;
}
else
{
uint32_t v___x_156_; uint8_t v___x_157_; 
v___x_156_ = 126;
v___x_157_ = lean_uint32_dec_le(v_c_143_, v___x_156_);
if (v___x_157_ == 0)
{
goto v___jp_144_;
}
else
{
return v___x_157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_quotedStringChar___boxed(lean_object* v_c_168_){
_start:
{
uint32_t v_c_boxed_169_; uint8_t v_res_170_; lean_object* v_r_171_; 
v_c_boxed_169_ = lean_unbox_uint32(v_c_168_);
lean_dec(v_c_168_);
v_res_170_ = l_Std_Http_Internal_Char_quotedStringChar(v_c_boxed_169_);
v_r_171_ = lean_box(v_res_170_);
return v_r_171_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_qdtext_match__1_splitter___redArg(uint32_t v_c_172_, lean_object* v_h__1_173_, lean_object* v_h__2_174_, lean_object* v_h__3_175_, lean_object* v_h__4_176_){
_start:
{
uint32_t v___x_177_; uint8_t v___x_178_; 
v___x_177_ = 9;
v___x_178_ = lean_uint32_dec_eq(v_c_172_, v___x_177_);
if (v___x_178_ == 0)
{
uint32_t v___x_179_; uint8_t v___x_180_; 
lean_dec(v_h__1_173_);
v___x_179_ = 32;
v___x_180_ = lean_uint32_dec_eq(v_c_172_, v___x_179_);
if (v___x_180_ == 0)
{
uint32_t v___x_181_; uint8_t v___x_182_; 
lean_dec(v_h__2_174_);
v___x_181_ = 33;
v___x_182_ = lean_uint32_dec_eq(v_c_172_, v___x_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; lean_object* v___x_184_; 
lean_dec(v_h__3_175_);
v___x_183_ = lean_box_uint32(v_c_172_);
v___x_184_ = lean_apply_4(v_h__4_176_, v___x_183_, lean_box(0), lean_box(0), lean_box(0));
return v___x_184_;
}
else
{
lean_object* v___x_185_; lean_object* v___x_186_; 
lean_dec(v_h__4_176_);
v___x_185_ = lean_box(0);
v___x_186_ = lean_apply_1(v_h__3_175_, v___x_185_);
return v___x_186_;
}
}
else
{
lean_object* v___x_187_; lean_object* v___x_188_; 
lean_dec(v_h__4_176_);
lean_dec(v_h__3_175_);
v___x_187_ = lean_box(0);
v___x_188_ = lean_apply_1(v_h__2_174_, v___x_187_);
return v___x_188_;
}
}
else
{
lean_object* v___x_189_; lean_object* v___x_190_; 
lean_dec(v_h__4_176_);
lean_dec(v_h__3_175_);
lean_dec(v_h__2_174_);
v___x_189_ = lean_box(0);
v___x_190_ = lean_apply_1(v_h__1_173_, v___x_189_);
return v___x_190_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_qdtext_match__1_splitter___redArg___boxed(lean_object* v_c_191_, lean_object* v_h__1_192_, lean_object* v_h__2_193_, lean_object* v_h__3_194_, lean_object* v_h__4_195_){
_start:
{
uint32_t v_c_43__boxed_196_; lean_object* v_res_197_; 
v_c_43__boxed_196_ = lean_unbox_uint32(v_c_191_);
lean_dec(v_c_191_);
v_res_197_ = l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_qdtext_match__1_splitter___redArg(v_c_43__boxed_196_, v_h__1_192_, v_h__2_193_, v_h__3_194_, v_h__4_195_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_qdtext_match__1_splitter(lean_object* v_motive_198_, uint32_t v_c_199_, lean_object* v_h__1_200_, lean_object* v_h__2_201_, lean_object* v_h__3_202_, lean_object* v_h__4_203_){
_start:
{
uint32_t v___x_204_; uint8_t v___x_205_; 
v___x_204_ = 9;
v___x_205_ = lean_uint32_dec_eq(v_c_199_, v___x_204_);
if (v___x_205_ == 0)
{
uint32_t v___x_206_; uint8_t v___x_207_; 
lean_dec(v_h__1_200_);
v___x_206_ = 32;
v___x_207_ = lean_uint32_dec_eq(v_c_199_, v___x_206_);
if (v___x_207_ == 0)
{
uint32_t v___x_208_; uint8_t v___x_209_; 
lean_dec(v_h__2_201_);
v___x_208_ = 33;
v___x_209_ = lean_uint32_dec_eq(v_c_199_, v___x_208_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; lean_object* v___x_211_; 
lean_dec(v_h__3_202_);
v___x_210_ = lean_box_uint32(v_c_199_);
v___x_211_ = lean_apply_4(v_h__4_203_, v___x_210_, lean_box(0), lean_box(0), lean_box(0));
return v___x_211_;
}
else
{
lean_object* v___x_212_; lean_object* v___x_213_; 
lean_dec(v_h__4_203_);
v___x_212_ = lean_box(0);
v___x_213_ = lean_apply_1(v_h__3_202_, v___x_212_);
return v___x_213_;
}
}
else
{
lean_object* v___x_214_; lean_object* v___x_215_; 
lean_dec(v_h__4_203_);
lean_dec(v_h__3_202_);
v___x_214_ = lean_box(0);
v___x_215_ = lean_apply_1(v_h__2_201_, v___x_214_);
return v___x_215_;
}
}
else
{
lean_object* v___x_216_; lean_object* v___x_217_; 
lean_dec(v_h__4_203_);
lean_dec(v_h__3_202_);
lean_dec(v_h__2_201_);
v___x_216_ = lean_box(0);
v___x_217_ = lean_apply_1(v_h__1_200_, v___x_216_);
return v___x_217_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_qdtext_match__1_splitter___boxed(lean_object* v_motive_218_, lean_object* v_c_219_, lean_object* v_h__1_220_, lean_object* v_h__2_221_, lean_object* v_h__3_222_, lean_object* v_h__4_223_){
_start:
{
uint32_t v_c_74__boxed_224_; lean_object* v_res_225_; 
v_c_74__boxed_224_ = lean_unbox_uint32(v_c_219_);
lean_dec(v_c_219_);
v_res_225_ = l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_qdtext_match__1_splitter(v_motive_218_, v_c_74__boxed_224_, v_h__1_220_, v_h__2_221_, v_h__3_222_, v_h__4_223_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_quotedPairChar_match__1_splitter___redArg(uint32_t v_c_226_, lean_object* v_h__1_227_, lean_object* v_h__2_228_, lean_object* v_h__3_229_){
_start:
{
uint32_t v___x_230_; uint8_t v___x_231_; 
v___x_230_ = 9;
v___x_231_ = lean_uint32_dec_eq(v_c_226_, v___x_230_);
if (v___x_231_ == 0)
{
uint32_t v___x_232_; uint8_t v___x_233_; 
lean_dec(v_h__1_227_);
v___x_232_ = 32;
v___x_233_ = lean_uint32_dec_eq(v_c_226_, v___x_232_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; lean_object* v___x_235_; 
lean_dec(v_h__2_228_);
v___x_234_ = lean_box_uint32(v_c_226_);
v___x_235_ = lean_apply_3(v_h__3_229_, v___x_234_, lean_box(0), lean_box(0));
return v___x_235_;
}
else
{
lean_object* v___x_236_; lean_object* v___x_237_; 
lean_dec(v_h__3_229_);
v___x_236_ = lean_box(0);
v___x_237_ = lean_apply_1(v_h__2_228_, v___x_236_);
return v___x_237_;
}
}
else
{
lean_object* v___x_238_; lean_object* v___x_239_; 
lean_dec(v_h__3_229_);
lean_dec(v_h__2_228_);
v___x_238_ = lean_box(0);
v___x_239_ = lean_apply_1(v_h__1_227_, v___x_238_);
return v___x_239_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_quotedPairChar_match__1_splitter___redArg___boxed(lean_object* v_c_240_, lean_object* v_h__1_241_, lean_object* v_h__2_242_, lean_object* v_h__3_243_){
_start:
{
uint32_t v_c_31__boxed_244_; lean_object* v_res_245_; 
v_c_31__boxed_244_ = lean_unbox_uint32(v_c_240_);
lean_dec(v_c_240_);
v_res_245_ = l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_quotedPairChar_match__1_splitter___redArg(v_c_31__boxed_244_, v_h__1_241_, v_h__2_242_, v_h__3_243_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_quotedPairChar_match__1_splitter(lean_object* v_motive_246_, uint32_t v_c_247_, lean_object* v_h__1_248_, lean_object* v_h__2_249_, lean_object* v_h__3_250_){
_start:
{
uint32_t v___x_251_; uint8_t v___x_252_; 
v___x_251_ = 9;
v___x_252_ = lean_uint32_dec_eq(v_c_247_, v___x_251_);
if (v___x_252_ == 0)
{
uint32_t v___x_253_; uint8_t v___x_254_; 
lean_dec(v_h__1_248_);
v___x_253_ = 32;
v___x_254_ = lean_uint32_dec_eq(v_c_247_, v___x_253_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; lean_object* v___x_256_; 
lean_dec(v_h__2_249_);
v___x_255_ = lean_box_uint32(v_c_247_);
v___x_256_ = lean_apply_3(v_h__3_250_, v___x_255_, lean_box(0), lean_box(0));
return v___x_256_;
}
else
{
lean_object* v___x_257_; lean_object* v___x_258_; 
lean_dec(v_h__3_250_);
v___x_257_ = lean_box(0);
v___x_258_ = lean_apply_1(v_h__2_249_, v___x_257_);
return v___x_258_;
}
}
else
{
lean_object* v___x_259_; lean_object* v___x_260_; 
lean_dec(v_h__3_250_);
lean_dec(v_h__2_249_);
v___x_259_ = lean_box(0);
v___x_260_ = lean_apply_1(v_h__1_248_, v___x_259_);
return v___x_260_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_quotedPairChar_match__1_splitter___boxed(lean_object* v_motive_261_, lean_object* v_c_262_, lean_object* v_h__1_263_, lean_object* v_h__2_264_, lean_object* v_h__3_265_){
_start:
{
uint32_t v_c_54__boxed_266_; lean_object* v_res_267_; 
v_c_54__boxed_266_ = lean_unbox_uint32(v_c_262_);
lean_dec(v_c_262_);
v_res_267_ = l___private_Std_Http_Internal_Char_0__Std_Http_Internal_Char_quotedPairChar_match__1_splitter(v_motive_261_, v_c_54__boxed_266_, v_h__1_263_, v_h__2_264_, v_h__3_265_);
return v_res_267_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_fieldVchar(uint32_t v_c_268_){
_start:
{
uint32_t v___x_269_; uint8_t v___x_270_; 
v___x_269_ = 33;
v___x_270_ = lean_uint32_dec_le(v___x_269_, v_c_268_);
if (v___x_270_ == 0)
{
return v___x_270_;
}
else
{
uint32_t v___x_271_; uint8_t v___x_272_; 
v___x_271_ = 126;
v___x_272_ = lean_uint32_dec_le(v_c_268_, v___x_271_);
return v___x_272_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_fieldVchar___boxed(lean_object* v_c_273_){
_start:
{
uint32_t v_c_boxed_274_; uint8_t v_res_275_; lean_object* v_r_276_; 
v_c_boxed_274_ = lean_unbox_uint32(v_c_273_);
lean_dec(v_c_273_);
v_res_275_ = l_Std_Http_Internal_Char_fieldVchar(v_c_boxed_274_);
v_r_276_ = lean_box(v_res_275_);
return v_r_276_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_fieldContent(uint32_t v_c_277_){
_start:
{
uint32_t v___x_283_; uint8_t v___x_284_; 
v___x_283_ = 33;
v___x_284_ = lean_uint32_dec_le(v___x_283_, v_c_277_);
if (v___x_284_ == 0)
{
goto v___jp_278_;
}
else
{
uint32_t v___x_285_; uint8_t v___x_286_; 
v___x_285_ = 126;
v___x_286_ = lean_uint32_dec_le(v_c_277_, v___x_285_);
if (v___x_286_ == 0)
{
goto v___jp_278_;
}
else
{
return v___x_286_;
}
}
v___jp_278_:
{
uint32_t v___x_279_; uint8_t v___x_280_; 
v___x_279_ = 32;
v___x_280_ = lean_uint32_dec_eq(v_c_277_, v___x_279_);
if (v___x_280_ == 0)
{
uint32_t v___x_281_; uint8_t v___x_282_; 
v___x_281_ = 9;
v___x_282_ = lean_uint32_dec_eq(v_c_277_, v___x_281_);
return v___x_282_;
}
else
{
return v___x_280_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_fieldContent___boxed(lean_object* v_c_287_){
_start:
{
uint32_t v_c_boxed_288_; uint8_t v_res_289_; lean_object* v_r_290_; 
v_c_boxed_288_ = lean_unbox_uint32(v_c_287_);
lean_dec(v_c_287_);
v_res_289_ = l_Std_Http_Internal_Char_fieldContent(v_c_boxed_288_);
v_r_290_ = lean_box(v_res_289_);
return v_r_290_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_ctext(uint32_t v_c_291_){
_start:
{
uint32_t v___x_302_; uint8_t v___x_303_; 
v___x_302_ = 9;
v___x_303_ = lean_uint32_dec_eq(v_c_291_, v___x_302_);
if (v___x_303_ == 0)
{
uint32_t v___x_304_; uint8_t v___x_305_; 
v___x_304_ = 32;
v___x_305_ = lean_uint32_dec_eq(v_c_291_, v___x_304_);
if (v___x_305_ == 0)
{
uint32_t v___x_306_; uint8_t v___x_307_; 
v___x_306_ = 33;
v___x_307_ = lean_uint32_dec_le(v___x_306_, v_c_291_);
if (v___x_307_ == 0)
{
goto v___jp_297_;
}
else
{
uint32_t v___x_308_; uint8_t v___x_309_; 
v___x_308_ = 39;
v___x_309_ = lean_uint32_dec_le(v_c_291_, v___x_308_);
if (v___x_309_ == 0)
{
goto v___jp_297_;
}
else
{
return v___x_309_;
}
}
}
else
{
return v___x_305_;
}
}
else
{
return v___x_303_;
}
v___jp_292_:
{
uint32_t v___x_293_; uint8_t v___x_294_; 
v___x_293_ = 93;
v___x_294_ = lean_uint32_dec_le(v___x_293_, v_c_291_);
if (v___x_294_ == 0)
{
return v___x_294_;
}
else
{
uint32_t v___x_295_; uint8_t v___x_296_; 
v___x_295_ = 126;
v___x_296_ = lean_uint32_dec_le(v_c_291_, v___x_295_);
return v___x_296_;
}
}
v___jp_297_:
{
uint32_t v___x_298_; uint8_t v___x_299_; 
v___x_298_ = 42;
v___x_299_ = lean_uint32_dec_le(v___x_298_, v_c_291_);
if (v___x_299_ == 0)
{
goto v___jp_292_;
}
else
{
uint32_t v___x_300_; uint8_t v___x_301_; 
v___x_300_ = 91;
v___x_301_ = lean_uint32_dec_le(v_c_291_, v___x_300_);
if (v___x_301_ == 0)
{
goto v___jp_292_;
}
else
{
return v___x_301_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_ctext___boxed(lean_object* v_c_310_){
_start:
{
uint32_t v_c_boxed_311_; uint8_t v_res_312_; lean_object* v_r_313_; 
v_c_boxed_311_ = lean_unbox_uint32(v_c_310_);
lean_dec(v_c_310_);
v_res_312_ = l_Std_Http_Internal_Char_ctext(v_c_boxed_311_);
v_r_313_ = lean_box(v_res_312_);
return v_r_313_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_etagc(uint32_t v_c_314_){
_start:
{
uint32_t v___x_315_; uint8_t v___x_316_; 
v___x_315_ = 33;
v___x_316_ = lean_uint32_dec_eq(v_c_314_, v___x_315_);
if (v___x_316_ == 0)
{
uint32_t v___x_317_; uint8_t v___x_318_; 
v___x_317_ = 35;
v___x_318_ = lean_uint32_dec_le(v___x_317_, v_c_314_);
if (v___x_318_ == 0)
{
return v___x_318_;
}
else
{
uint32_t v___x_319_; uint8_t v___x_320_; 
v___x_319_ = 126;
v___x_320_ = lean_uint32_dec_le(v_c_314_, v___x_319_);
return v___x_320_;
}
}
else
{
return v___x_316_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_etagc___boxed(lean_object* v_c_321_){
_start:
{
uint32_t v_c_boxed_322_; uint8_t v_res_323_; lean_object* v_r_324_; 
v_c_boxed_322_ = lean_unbox_uint32(v_c_321_);
lean_dec(v_c_321_);
v_res_323_ = l_Std_Http_Internal_Char_etagc(v_c_boxed_322_);
v_r_324_ = lean_box(v_res_323_);
return v_r_324_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_ows(uint32_t v_c_325_){
_start:
{
uint32_t v___x_326_; uint8_t v___x_327_; 
v___x_326_ = 32;
v___x_327_ = lean_uint32_dec_eq(v_c_325_, v___x_326_);
if (v___x_327_ == 0)
{
uint32_t v___x_328_; uint8_t v___x_329_; 
v___x_328_ = 9;
v___x_329_ = lean_uint32_dec_eq(v_c_325_, v___x_328_);
return v___x_329_;
}
else
{
return v___x_327_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_ows___boxed(lean_object* v_c_330_){
_start:
{
uint32_t v_c_boxed_331_; uint8_t v_res_332_; lean_object* v_r_333_; 
v_c_boxed_331_ = lean_unbox_uint32(v_c_330_);
lean_dec(v_c_330_);
v_res_332_ = l_Std_Http_Internal_Char_ows(v_c_boxed_331_);
v_r_333_ = lean_box(v_res_332_);
return v_r_333_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_bws(uint32_t v_c_334_){
_start:
{
uint32_t v___x_335_; uint8_t v___x_336_; 
v___x_335_ = 32;
v___x_336_ = lean_uint32_dec_eq(v_c_334_, v___x_335_);
if (v___x_336_ == 0)
{
uint32_t v___x_337_; uint8_t v___x_338_; 
v___x_337_ = 9;
v___x_338_ = lean_uint32_dec_eq(v_c_334_, v___x_337_);
return v___x_338_;
}
else
{
return v___x_336_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_bws___boxed(lean_object* v_c_339_){
_start:
{
uint32_t v_c_boxed_340_; uint8_t v_res_341_; lean_object* v_r_342_; 
v_c_boxed_340_ = lean_unbox_uint32(v_c_339_);
lean_dec(v_c_339_);
v_res_341_ = l_Std_Http_Internal_Char_bws(v_c_boxed_340_);
v_r_342_ = lean_box(v_res_341_);
return v_r_342_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_rws(uint32_t v_c_343_){
_start:
{
uint32_t v___x_344_; uint8_t v___x_345_; 
v___x_344_ = 32;
v___x_345_ = lean_uint32_dec_eq(v_c_343_, v___x_344_);
if (v___x_345_ == 0)
{
uint32_t v___x_346_; uint8_t v___x_347_; 
v___x_346_ = 9;
v___x_347_ = lean_uint32_dec_eq(v_c_343_, v___x_346_);
return v___x_347_;
}
else
{
return v___x_345_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_rws___boxed(lean_object* v_c_348_){
_start:
{
uint32_t v_c_boxed_349_; uint8_t v_res_350_; lean_object* v_r_351_; 
v_c_boxed_349_ = lean_unbox_uint32(v_c_348_);
lean_dec(v_c_348_);
v_res_350_ = l_Std_Http_Internal_Char_rws(v_c_boxed_349_);
v_r_351_ = lean_box(v_res_350_);
return v_r_351_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_obsText(uint32_t v_c_352_){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_353_ = lean_unsigned_to_nat(128u);
v___x_354_ = lean_uint32_to_nat(v_c_352_);
v___x_355_ = lean_nat_dec_le(v___x_353_, v___x_354_);
lean_dec(v___x_354_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_obsText___boxed(lean_object* v_c_356_){
_start:
{
uint32_t v_c_boxed_357_; uint8_t v_res_358_; lean_object* v_r_359_; 
v_c_boxed_357_ = lean_unbox_uint32(v_c_356_);
lean_dec(v_c_356_);
v_res_358_ = l_Std_Http_Internal_Char_obsText(v_c_boxed_357_);
v_r_359_ = lean_box(v_res_358_);
return v_r_359_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_reasonPhraseChar(uint32_t v_c_360_){
_start:
{
uint32_t v___x_361_; uint8_t v___x_362_; 
v___x_361_ = 9;
v___x_362_ = lean_uint32_dec_eq(v_c_360_, v___x_361_);
if (v___x_362_ == 0)
{
uint32_t v___x_363_; uint8_t v___x_364_; 
v___x_363_ = 32;
v___x_364_ = lean_uint32_dec_eq(v_c_360_, v___x_363_);
if (v___x_364_ == 0)
{
uint32_t v___x_365_; uint8_t v___x_366_; 
v___x_365_ = 33;
v___x_366_ = lean_uint32_dec_le(v___x_365_, v_c_360_);
if (v___x_366_ == 0)
{
return v___x_366_;
}
else
{
uint32_t v___x_367_; uint8_t v___x_368_; 
v___x_367_ = 126;
v___x_368_ = lean_uint32_dec_le(v_c_360_, v___x_367_);
return v___x_368_;
}
}
else
{
return v___x_364_;
}
}
else
{
return v___x_362_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_reasonPhraseChar___boxed(lean_object* v_c_369_){
_start:
{
uint32_t v_c_boxed_370_; uint8_t v_res_371_; lean_object* v_r_372_; 
v_c_boxed_370_ = lean_unbox_uint32(v_c_369_);
lean_dec(v_c_369_);
v_res_371_ = l_Std_Http_Internal_Char_reasonPhraseChar(v_c_boxed_370_);
v_r_372_ = lean_box(v_res_371_);
return v_r_372_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isHexDigit(uint32_t v_c_373_){
_start:
{
uint32_t v___x_374_; uint8_t v___x_375_; 
v___x_374_ = 97;
v___x_375_ = lean_uint32_dec_eq(v_c_373_, v___x_374_);
if (v___x_375_ == 0)
{
uint32_t v___x_376_; uint8_t v___x_377_; 
v___x_376_ = 98;
v___x_377_ = lean_uint32_dec_eq(v_c_373_, v___x_376_);
if (v___x_377_ == 0)
{
uint32_t v___x_378_; uint8_t v___x_379_; 
v___x_378_ = 99;
v___x_379_ = lean_uint32_dec_eq(v_c_373_, v___x_378_);
if (v___x_379_ == 0)
{
uint32_t v___x_380_; uint8_t v___x_381_; 
v___x_380_ = 100;
v___x_381_ = lean_uint32_dec_eq(v_c_373_, v___x_380_);
if (v___x_381_ == 0)
{
uint32_t v___x_382_; uint8_t v___x_383_; 
v___x_382_ = 101;
v___x_383_ = lean_uint32_dec_eq(v_c_373_, v___x_382_);
if (v___x_383_ == 0)
{
uint32_t v___x_384_; uint8_t v___x_385_; 
v___x_384_ = 102;
v___x_385_ = lean_uint32_dec_eq(v_c_373_, v___x_384_);
if (v___x_385_ == 0)
{
uint32_t v___x_386_; uint8_t v___x_387_; 
v___x_386_ = 65;
v___x_387_ = lean_uint32_dec_eq(v_c_373_, v___x_386_);
if (v___x_387_ == 0)
{
uint32_t v___x_388_; uint8_t v___x_389_; 
v___x_388_ = 66;
v___x_389_ = lean_uint32_dec_eq(v_c_373_, v___x_388_);
if (v___x_389_ == 0)
{
uint32_t v___x_390_; uint8_t v___x_391_; 
v___x_390_ = 67;
v___x_391_ = lean_uint32_dec_eq(v_c_373_, v___x_390_);
if (v___x_391_ == 0)
{
uint32_t v___x_392_; uint8_t v___x_393_; 
v___x_392_ = 68;
v___x_393_ = lean_uint32_dec_eq(v_c_373_, v___x_392_);
if (v___x_393_ == 0)
{
uint32_t v___x_394_; uint8_t v___x_395_; 
v___x_394_ = 69;
v___x_395_ = lean_uint32_dec_eq(v_c_373_, v___x_394_);
if (v___x_395_ == 0)
{
uint32_t v___x_396_; uint8_t v___x_397_; 
v___x_396_ = 70;
v___x_397_ = lean_uint32_dec_eq(v_c_373_, v___x_396_);
if (v___x_397_ == 0)
{
uint32_t v___x_398_; uint8_t v___x_399_; 
v___x_398_ = 48;
v___x_399_ = lean_uint32_dec_le(v___x_398_, v_c_373_);
if (v___x_399_ == 0)
{
return v___x_399_;
}
else
{
uint32_t v___x_400_; uint8_t v___x_401_; 
v___x_400_ = 57;
v___x_401_ = lean_uint32_dec_le(v_c_373_, v___x_400_);
return v___x_401_;
}
}
else
{
return v___x_397_;
}
}
else
{
return v___x_395_;
}
}
else
{
return v___x_393_;
}
}
else
{
return v___x_391_;
}
}
else
{
return v___x_389_;
}
}
else
{
return v___x_387_;
}
}
else
{
return v___x_385_;
}
}
else
{
return v___x_383_;
}
}
else
{
return v___x_381_;
}
}
else
{
return v___x_379_;
}
}
else
{
return v___x_377_;
}
}
else
{
return v___x_375_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isHexDigit___boxed(lean_object* v_c_402_){
_start:
{
uint32_t v_c_boxed_403_; uint8_t v_res_404_; lean_object* v_r_405_; 
v_c_boxed_403_ = lean_unbox_uint32(v_c_402_);
lean_dec(v_c_402_);
v_res_404_ = l_Std_Http_Internal_Char_isHexDigit(v_c_boxed_403_);
v_r_405_ = lean_box(v_res_404_);
return v_r_405_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isHexDigitByte(uint8_t v_c_406_){
_start:
{
uint8_t v___x_417_; uint8_t v___x_418_; 
v___x_417_ = 48;
v___x_418_ = lean_uint8_dec_le(v___x_417_, v_c_406_);
if (v___x_418_ == 0)
{
goto v___jp_412_;
}
else
{
uint8_t v___x_419_; uint8_t v___x_420_; 
v___x_419_ = 57;
v___x_420_ = lean_uint8_dec_le(v_c_406_, v___x_419_);
if (v___x_420_ == 0)
{
goto v___jp_412_;
}
else
{
return v___x_420_;
}
}
v___jp_407_:
{
uint8_t v___x_408_; uint8_t v___x_409_; 
v___x_408_ = 65;
v___x_409_ = lean_uint8_dec_le(v___x_408_, v_c_406_);
if (v___x_409_ == 0)
{
return v___x_409_;
}
else
{
uint8_t v___x_410_; uint8_t v___x_411_; 
v___x_410_ = 70;
v___x_411_ = lean_uint8_dec_le(v_c_406_, v___x_410_);
return v___x_411_;
}
}
v___jp_412_:
{
uint8_t v___x_413_; uint8_t v___x_414_; 
v___x_413_ = 97;
v___x_414_ = lean_uint8_dec_le(v___x_413_, v_c_406_);
if (v___x_414_ == 0)
{
goto v___jp_407_;
}
else
{
uint8_t v___x_415_; uint8_t v___x_416_; 
v___x_415_ = 102;
v___x_416_ = lean_uint8_dec_le(v_c_406_, v___x_415_);
if (v___x_416_ == 0)
{
goto v___jp_407_;
}
else
{
return v___x_416_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isHexDigitByte___boxed(lean_object* v_c_421_){
_start:
{
uint8_t v_c_boxed_422_; uint8_t v_res_423_; lean_object* v_r_424_; 
v_c_boxed_422_ = lean_unbox(v_c_421_);
v_res_423_ = l_Std_Http_Internal_Char_isHexDigitByte(v_c_boxed_422_);
v_r_424_ = lean_box(v_res_423_);
return v_r_424_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isAlphaNum(uint8_t v_c_425_){
_start:
{
uint8_t v___x_436_; uint8_t v___x_437_; 
v___x_436_ = 48;
v___x_437_ = lean_uint8_dec_le(v___x_436_, v_c_425_);
if (v___x_437_ == 0)
{
goto v___jp_431_;
}
else
{
uint8_t v___x_438_; uint8_t v___x_439_; 
v___x_438_ = 57;
v___x_439_ = lean_uint8_dec_le(v_c_425_, v___x_438_);
if (v___x_439_ == 0)
{
goto v___jp_431_;
}
else
{
return v___x_439_;
}
}
v___jp_426_:
{
uint8_t v___x_427_; uint8_t v___x_428_; 
v___x_427_ = 65;
v___x_428_ = lean_uint8_dec_le(v___x_427_, v_c_425_);
if (v___x_428_ == 0)
{
return v___x_428_;
}
else
{
uint8_t v___x_429_; uint8_t v___x_430_; 
v___x_429_ = 90;
v___x_430_ = lean_uint8_dec_le(v_c_425_, v___x_429_);
return v___x_430_;
}
}
v___jp_431_:
{
uint8_t v___x_432_; uint8_t v___x_433_; 
v___x_432_ = 97;
v___x_433_ = lean_uint8_dec_le(v___x_432_, v_c_425_);
if (v___x_433_ == 0)
{
goto v___jp_426_;
}
else
{
uint8_t v___x_434_; uint8_t v___x_435_; 
v___x_434_ = 122;
v___x_435_ = lean_uint8_dec_le(v_c_425_, v___x_434_);
if (v___x_435_ == 0)
{
goto v___jp_426_;
}
else
{
return v___x_435_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isAlphaNum___boxed(lean_object* v_c_440_){
_start:
{
uint8_t v_c_boxed_441_; uint8_t v_res_442_; lean_object* v_r_443_; 
v_c_boxed_441_ = lean_unbox(v_c_440_);
v_res_442_ = l_Std_Http_Internal_Char_isAlphaNum(v_c_boxed_441_);
v_r_443_ = lean_box(v_res_442_);
return v_r_443_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isAsciiAlphaNumChar(uint32_t v_c_444_){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_455_ = lean_uint32_to_nat(v_c_444_);
v___x_456_ = lean_unsigned_to_nat(128u);
v___x_457_ = l_Nat_blt(v___x_455_, v___x_456_);
lean_dec(v___x_455_);
if (v___x_457_ == 0)
{
return v___x_457_;
}
else
{
uint32_t v___x_458_; uint8_t v___x_459_; 
v___x_458_ = 48;
v___x_459_ = lean_uint32_dec_le(v___x_458_, v_c_444_);
if (v___x_459_ == 0)
{
goto v___jp_450_;
}
else
{
uint32_t v___x_460_; uint8_t v___x_461_; 
v___x_460_ = 57;
v___x_461_ = lean_uint32_dec_le(v_c_444_, v___x_460_);
if (v___x_461_ == 0)
{
goto v___jp_450_;
}
else
{
return v___x_461_;
}
}
}
v___jp_445_:
{
uint32_t v___x_446_; uint8_t v___x_447_; 
v___x_446_ = 97;
v___x_447_ = lean_uint32_dec_le(v___x_446_, v_c_444_);
if (v___x_447_ == 0)
{
return v___x_447_;
}
else
{
uint32_t v___x_448_; uint8_t v___x_449_; 
v___x_448_ = 122;
v___x_449_ = lean_uint32_dec_le(v_c_444_, v___x_448_);
return v___x_449_;
}
}
v___jp_450_:
{
uint32_t v___x_451_; uint8_t v___x_452_; 
v___x_451_ = 65;
v___x_452_ = lean_uint32_dec_le(v___x_451_, v_c_444_);
if (v___x_452_ == 0)
{
goto v___jp_445_;
}
else
{
uint32_t v___x_453_; uint8_t v___x_454_; 
v___x_453_ = 90;
v___x_454_ = lean_uint32_dec_le(v_c_444_, v___x_453_);
if (v___x_454_ == 0)
{
goto v___jp_445_;
}
else
{
return v___x_454_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isAsciiAlphaNumChar___boxed(lean_object* v_c_462_){
_start:
{
uint32_t v_c_boxed_463_; uint8_t v_res_464_; lean_object* v_r_465_; 
v_c_boxed_463_ = lean_unbox_uint32(v_c_462_);
lean_dec(v_c_462_);
v_res_464_ = l_Std_Http_Internal_Char_isAsciiAlphaNumChar(v_c_boxed_463_);
v_r_465_ = lean_box(v_res_464_);
return v_r_465_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isValidSchemeChar(uint32_t v_c_466_){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_484_ = lean_uint32_to_nat(v_c_466_);
v___x_485_ = lean_unsigned_to_nat(128u);
v___x_486_ = l_Nat_blt(v___x_484_, v___x_485_);
lean_dec(v___x_484_);
if (v___x_486_ == 0)
{
goto v___jp_467_;
}
else
{
uint32_t v___x_487_; uint8_t v___x_488_; 
v___x_487_ = 48;
v___x_488_ = lean_uint32_dec_le(v___x_487_, v_c_466_);
if (v___x_488_ == 0)
{
goto v___jp_479_;
}
else
{
uint32_t v___x_489_; uint8_t v___x_490_; 
v___x_489_ = 57;
v___x_490_ = lean_uint32_dec_le(v_c_466_, v___x_489_);
if (v___x_490_ == 0)
{
goto v___jp_479_;
}
else
{
return v___x_490_;
}
}
}
v___jp_467_:
{
uint32_t v___x_468_; uint8_t v___x_469_; 
v___x_468_ = 43;
v___x_469_ = lean_uint32_dec_eq(v_c_466_, v___x_468_);
if (v___x_469_ == 0)
{
uint32_t v___x_470_; uint8_t v___x_471_; 
v___x_470_ = 45;
v___x_471_ = lean_uint32_dec_eq(v_c_466_, v___x_470_);
if (v___x_471_ == 0)
{
uint32_t v___x_472_; uint8_t v___x_473_; 
v___x_472_ = 46;
v___x_473_ = lean_uint32_dec_eq(v_c_466_, v___x_472_);
return v___x_473_;
}
else
{
return v___x_471_;
}
}
else
{
return v___x_469_;
}
}
v___jp_474_:
{
uint32_t v___x_475_; uint8_t v___x_476_; 
v___x_475_ = 97;
v___x_476_ = lean_uint32_dec_le(v___x_475_, v_c_466_);
if (v___x_476_ == 0)
{
goto v___jp_467_;
}
else
{
uint32_t v___x_477_; uint8_t v___x_478_; 
v___x_477_ = 122;
v___x_478_ = lean_uint32_dec_le(v_c_466_, v___x_477_);
if (v___x_478_ == 0)
{
goto v___jp_467_;
}
else
{
return v___x_478_;
}
}
}
v___jp_479_:
{
uint32_t v___x_480_; uint8_t v___x_481_; 
v___x_480_ = 65;
v___x_481_ = lean_uint32_dec_le(v___x_480_, v_c_466_);
if (v___x_481_ == 0)
{
goto v___jp_474_;
}
else
{
uint32_t v___x_482_; uint8_t v___x_483_; 
v___x_482_ = 90;
v___x_483_ = lean_uint32_dec_le(v_c_466_, v___x_482_);
if (v___x_483_ == 0)
{
goto v___jp_474_;
}
else
{
return v___x_483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isValidSchemeChar___boxed(lean_object* v_c_491_){
_start:
{
uint32_t v_c_boxed_492_; uint8_t v_res_493_; lean_object* v_r_494_; 
v_c_boxed_492_ = lean_unbox_uint32(v_c_491_);
lean_dec(v_c_491_);
v_res_493_ = l_Std_Http_Internal_Char_isValidSchemeChar(v_c_boxed_492_);
v_r_494_ = lean_box(v_res_493_);
return v_r_494_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isValidDomainNameChar(uint32_t v_c_495_){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_511_ = lean_uint32_to_nat(v_c_495_);
v___x_512_ = lean_unsigned_to_nat(128u);
v___x_513_ = l_Nat_blt(v___x_511_, v___x_512_);
lean_dec(v___x_511_);
if (v___x_513_ == 0)
{
goto v___jp_496_;
}
else
{
uint32_t v___x_514_; uint8_t v___x_515_; 
v___x_514_ = 48;
v___x_515_ = lean_uint32_dec_le(v___x_514_, v_c_495_);
if (v___x_515_ == 0)
{
goto v___jp_506_;
}
else
{
uint32_t v___x_516_; uint8_t v___x_517_; 
v___x_516_ = 57;
v___x_517_ = lean_uint32_dec_le(v_c_495_, v___x_516_);
if (v___x_517_ == 0)
{
goto v___jp_506_;
}
else
{
return v___x_517_;
}
}
}
v___jp_496_:
{
uint32_t v___x_497_; uint8_t v___x_498_; 
v___x_497_ = 45;
v___x_498_ = lean_uint32_dec_eq(v_c_495_, v___x_497_);
if (v___x_498_ == 0)
{
uint32_t v___x_499_; uint8_t v___x_500_; 
v___x_499_ = 46;
v___x_500_ = lean_uint32_dec_eq(v_c_495_, v___x_499_);
return v___x_500_;
}
else
{
return v___x_498_;
}
}
v___jp_501_:
{
uint32_t v___x_502_; uint8_t v___x_503_; 
v___x_502_ = 97;
v___x_503_ = lean_uint32_dec_le(v___x_502_, v_c_495_);
if (v___x_503_ == 0)
{
goto v___jp_496_;
}
else
{
uint32_t v___x_504_; uint8_t v___x_505_; 
v___x_504_ = 122;
v___x_505_ = lean_uint32_dec_le(v_c_495_, v___x_504_);
if (v___x_505_ == 0)
{
goto v___jp_496_;
}
else
{
return v___x_505_;
}
}
}
v___jp_506_:
{
uint32_t v___x_507_; uint8_t v___x_508_; 
v___x_507_ = 65;
v___x_508_ = lean_uint32_dec_le(v___x_507_, v_c_495_);
if (v___x_508_ == 0)
{
goto v___jp_501_;
}
else
{
uint32_t v___x_509_; uint8_t v___x_510_; 
v___x_509_ = 90;
v___x_510_ = lean_uint32_dec_le(v_c_495_, v___x_509_);
if (v___x_510_ == 0)
{
goto v___jp_501_;
}
else
{
return v___x_510_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isValidDomainNameChar___boxed(lean_object* v_c_518_){
_start:
{
uint32_t v_c_boxed_519_; uint8_t v_res_520_; lean_object* v_r_521_; 
v_c_boxed_519_ = lean_unbox_uint32(v_c_518_);
lean_dec(v_c_518_);
v_res_520_ = l_Std_Http_Internal_Char_isValidDomainNameChar(v_c_boxed_519_);
v_r_521_ = lean_box(v_res_520_);
return v_r_521_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isUnreserved(uint8_t v_c_522_){
_start:
{
uint8_t v___x_542_; uint8_t v___x_543_; 
v___x_542_ = 48;
v___x_543_ = lean_uint8_dec_le(v___x_542_, v_c_522_);
if (v___x_543_ == 0)
{
goto v___jp_537_;
}
else
{
uint8_t v___x_544_; uint8_t v___x_545_; 
v___x_544_ = 57;
v___x_545_ = lean_uint8_dec_le(v_c_522_, v___x_544_);
if (v___x_545_ == 0)
{
goto v___jp_537_;
}
else
{
return v___x_545_;
}
}
v___jp_523_:
{
uint8_t v___x_524_; uint8_t v___x_525_; 
v___x_524_ = 45;
v___x_525_ = lean_uint8_dec_eq(v_c_522_, v___x_524_);
if (v___x_525_ == 0)
{
uint8_t v___x_526_; uint8_t v___x_527_; 
v___x_526_ = 46;
v___x_527_ = lean_uint8_dec_eq(v_c_522_, v___x_526_);
if (v___x_527_ == 0)
{
uint8_t v___x_528_; uint8_t v___x_529_; 
v___x_528_ = 95;
v___x_529_ = lean_uint8_dec_eq(v_c_522_, v___x_528_);
if (v___x_529_ == 0)
{
uint8_t v___x_530_; uint8_t v___x_531_; 
v___x_530_ = 126;
v___x_531_ = lean_uint8_dec_eq(v_c_522_, v___x_530_);
return v___x_531_;
}
else
{
return v___x_529_;
}
}
else
{
return v___x_527_;
}
}
else
{
return v___x_525_;
}
}
v___jp_532_:
{
uint8_t v___x_533_; uint8_t v___x_534_; 
v___x_533_ = 65;
v___x_534_ = lean_uint8_dec_le(v___x_533_, v_c_522_);
if (v___x_534_ == 0)
{
goto v___jp_523_;
}
else
{
uint8_t v___x_535_; uint8_t v___x_536_; 
v___x_535_ = 90;
v___x_536_ = lean_uint8_dec_le(v_c_522_, v___x_535_);
if (v___x_536_ == 0)
{
goto v___jp_523_;
}
else
{
return v___x_536_;
}
}
}
v___jp_537_:
{
uint8_t v___x_538_; uint8_t v___x_539_; 
v___x_538_ = 97;
v___x_539_ = lean_uint8_dec_le(v___x_538_, v_c_522_);
if (v___x_539_ == 0)
{
goto v___jp_532_;
}
else
{
uint8_t v___x_540_; uint8_t v___x_541_; 
v___x_540_ = 122;
v___x_541_ = lean_uint8_dec_le(v_c_522_, v___x_540_);
if (v___x_541_ == 0)
{
goto v___jp_532_;
}
else
{
return v___x_541_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isUnreserved___boxed(lean_object* v_c_546_){
_start:
{
uint8_t v_c_boxed_547_; uint8_t v_res_548_; lean_object* v_r_549_; 
v_c_boxed_547_ = lean_unbox(v_c_546_);
v_res_548_ = l_Std_Http_Internal_Char_isUnreserved(v_c_boxed_547_);
v_r_549_ = lean_box(v_res_548_);
return v_r_549_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isSubDelims(uint8_t v_c_550_){
_start:
{
uint8_t v___x_551_; uint8_t v___x_552_; 
v___x_551_ = 33;
v___x_552_ = lean_uint8_dec_eq(v_c_550_, v___x_551_);
if (v___x_552_ == 0)
{
uint8_t v___x_553_; uint8_t v___x_554_; 
v___x_553_ = 36;
v___x_554_ = lean_uint8_dec_eq(v_c_550_, v___x_553_);
if (v___x_554_ == 0)
{
uint8_t v___x_555_; uint8_t v___x_556_; 
v___x_555_ = 38;
v___x_556_ = lean_uint8_dec_eq(v_c_550_, v___x_555_);
if (v___x_556_ == 0)
{
uint8_t v___x_557_; uint8_t v___x_558_; 
v___x_557_ = 39;
v___x_558_ = lean_uint8_dec_eq(v_c_550_, v___x_557_);
if (v___x_558_ == 0)
{
uint8_t v___x_559_; uint8_t v___x_560_; 
v___x_559_ = 40;
v___x_560_ = lean_uint8_dec_eq(v_c_550_, v___x_559_);
if (v___x_560_ == 0)
{
uint8_t v___x_561_; uint8_t v___x_562_; 
v___x_561_ = 41;
v___x_562_ = lean_uint8_dec_eq(v_c_550_, v___x_561_);
if (v___x_562_ == 0)
{
uint8_t v___x_563_; uint8_t v___x_564_; 
v___x_563_ = 42;
v___x_564_ = lean_uint8_dec_eq(v_c_550_, v___x_563_);
if (v___x_564_ == 0)
{
uint8_t v___x_565_; uint8_t v___x_566_; 
v___x_565_ = 43;
v___x_566_ = lean_uint8_dec_eq(v_c_550_, v___x_565_);
if (v___x_566_ == 0)
{
uint8_t v___x_567_; uint8_t v___x_568_; 
v___x_567_ = 44;
v___x_568_ = lean_uint8_dec_eq(v_c_550_, v___x_567_);
if (v___x_568_ == 0)
{
uint8_t v___x_569_; uint8_t v___x_570_; 
v___x_569_ = 59;
v___x_570_ = lean_uint8_dec_eq(v_c_550_, v___x_569_);
if (v___x_570_ == 0)
{
uint8_t v___x_571_; uint8_t v___x_572_; 
v___x_571_ = 61;
v___x_572_ = lean_uint8_dec_eq(v_c_550_, v___x_571_);
return v___x_572_;
}
else
{
return v___x_570_;
}
}
else
{
return v___x_568_;
}
}
else
{
return v___x_566_;
}
}
else
{
return v___x_564_;
}
}
else
{
return v___x_562_;
}
}
else
{
return v___x_560_;
}
}
else
{
return v___x_558_;
}
}
else
{
return v___x_556_;
}
}
else
{
return v___x_554_;
}
}
else
{
return v___x_552_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isSubDelims___boxed(lean_object* v_c_573_){
_start:
{
uint8_t v_c_boxed_574_; uint8_t v_res_575_; lean_object* v_r_576_; 
v_c_boxed_574_ = lean_unbox(v_c_573_);
v_res_575_ = l_Std_Http_Internal_Char_isSubDelims(v_c_boxed_574_);
v_r_576_ = lean_box(v_res_575_);
return v_r_576_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isPChar(uint8_t v_c_577_){
_start:
{
uint8_t v___x_623_; uint8_t v___x_624_; 
v___x_623_ = 48;
v___x_624_ = lean_uint8_dec_le(v___x_623_, v_c_577_);
if (v___x_624_ == 0)
{
goto v___jp_618_;
}
else
{
uint8_t v___x_625_; uint8_t v___x_626_; 
v___x_625_ = 57;
v___x_626_ = lean_uint8_dec_le(v_c_577_, v___x_625_);
if (v___x_626_ == 0)
{
goto v___jp_618_;
}
else
{
return v___x_626_;
}
}
v___jp_578_:
{
uint8_t v___x_579_; uint8_t v___x_580_; 
v___x_579_ = 45;
v___x_580_ = lean_uint8_dec_eq(v_c_577_, v___x_579_);
if (v___x_580_ == 0)
{
uint8_t v___x_581_; uint8_t v___x_582_; 
v___x_581_ = 46;
v___x_582_ = lean_uint8_dec_eq(v_c_577_, v___x_581_);
if (v___x_582_ == 0)
{
uint8_t v___x_583_; uint8_t v___x_584_; 
v___x_583_ = 95;
v___x_584_ = lean_uint8_dec_eq(v_c_577_, v___x_583_);
if (v___x_584_ == 0)
{
uint8_t v___x_585_; uint8_t v___x_586_; 
v___x_585_ = 126;
v___x_586_ = lean_uint8_dec_eq(v_c_577_, v___x_585_);
if (v___x_586_ == 0)
{
uint8_t v___x_587_; uint8_t v___x_588_; 
v___x_587_ = 33;
v___x_588_ = lean_uint8_dec_eq(v_c_577_, v___x_587_);
if (v___x_588_ == 0)
{
uint8_t v___x_589_; uint8_t v___x_590_; 
v___x_589_ = 36;
v___x_590_ = lean_uint8_dec_eq(v_c_577_, v___x_589_);
if (v___x_590_ == 0)
{
uint8_t v___x_591_; uint8_t v___x_592_; 
v___x_591_ = 38;
v___x_592_ = lean_uint8_dec_eq(v_c_577_, v___x_591_);
if (v___x_592_ == 0)
{
uint8_t v___x_593_; uint8_t v___x_594_; 
v___x_593_ = 39;
v___x_594_ = lean_uint8_dec_eq(v_c_577_, v___x_593_);
if (v___x_594_ == 0)
{
uint8_t v___x_595_; uint8_t v___x_596_; 
v___x_595_ = 40;
v___x_596_ = lean_uint8_dec_eq(v_c_577_, v___x_595_);
if (v___x_596_ == 0)
{
uint8_t v___x_597_; uint8_t v___x_598_; 
v___x_597_ = 41;
v___x_598_ = lean_uint8_dec_eq(v_c_577_, v___x_597_);
if (v___x_598_ == 0)
{
uint8_t v___x_599_; uint8_t v___x_600_; 
v___x_599_ = 42;
v___x_600_ = lean_uint8_dec_eq(v_c_577_, v___x_599_);
if (v___x_600_ == 0)
{
uint8_t v___x_601_; uint8_t v___x_602_; 
v___x_601_ = 43;
v___x_602_ = lean_uint8_dec_eq(v_c_577_, v___x_601_);
if (v___x_602_ == 0)
{
uint8_t v___x_603_; uint8_t v___x_604_; 
v___x_603_ = 44;
v___x_604_ = lean_uint8_dec_eq(v_c_577_, v___x_603_);
if (v___x_604_ == 0)
{
uint8_t v___x_605_; uint8_t v___x_606_; 
v___x_605_ = 59;
v___x_606_ = lean_uint8_dec_eq(v_c_577_, v___x_605_);
if (v___x_606_ == 0)
{
uint8_t v___x_607_; uint8_t v___x_608_; 
v___x_607_ = 61;
v___x_608_ = lean_uint8_dec_eq(v_c_577_, v___x_607_);
if (v___x_608_ == 0)
{
uint8_t v___x_609_; uint8_t v___x_610_; 
v___x_609_ = 58;
v___x_610_ = lean_uint8_dec_eq(v_c_577_, v___x_609_);
if (v___x_610_ == 0)
{
uint8_t v___x_611_; uint8_t v___x_612_; 
v___x_611_ = 64;
v___x_612_ = lean_uint8_dec_eq(v_c_577_, v___x_611_);
return v___x_612_;
}
else
{
return v___x_610_;
}
}
else
{
return v___x_608_;
}
}
else
{
return v___x_606_;
}
}
else
{
return v___x_604_;
}
}
else
{
return v___x_602_;
}
}
else
{
return v___x_600_;
}
}
else
{
return v___x_598_;
}
}
else
{
return v___x_596_;
}
}
else
{
return v___x_594_;
}
}
else
{
return v___x_592_;
}
}
else
{
return v___x_590_;
}
}
else
{
return v___x_588_;
}
}
else
{
return v___x_586_;
}
}
else
{
return v___x_584_;
}
}
else
{
return v___x_582_;
}
}
else
{
return v___x_580_;
}
}
v___jp_613_:
{
uint8_t v___x_614_; uint8_t v___x_615_; 
v___x_614_ = 65;
v___x_615_ = lean_uint8_dec_le(v___x_614_, v_c_577_);
if (v___x_615_ == 0)
{
goto v___jp_578_;
}
else
{
uint8_t v___x_616_; uint8_t v___x_617_; 
v___x_616_ = 90;
v___x_617_ = lean_uint8_dec_le(v_c_577_, v___x_616_);
if (v___x_617_ == 0)
{
goto v___jp_578_;
}
else
{
return v___x_617_;
}
}
}
v___jp_618_:
{
uint8_t v___x_619_; uint8_t v___x_620_; 
v___x_619_ = 97;
v___x_620_ = lean_uint8_dec_le(v___x_619_, v_c_577_);
if (v___x_620_ == 0)
{
goto v___jp_613_;
}
else
{
uint8_t v___x_621_; uint8_t v___x_622_; 
v___x_621_ = 122;
v___x_622_ = lean_uint8_dec_le(v_c_577_, v___x_621_);
if (v___x_622_ == 0)
{
goto v___jp_613_;
}
else
{
return v___x_622_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isPChar___boxed(lean_object* v_c_627_){
_start:
{
uint8_t v_c_boxed_628_; uint8_t v_res_629_; lean_object* v_r_630_; 
v_c_boxed_628_ = lean_unbox(v_c_627_);
v_res_629_ = l_Std_Http_Internal_Char_isPChar(v_c_boxed_628_);
v_r_630_ = lean_box(v_res_629_);
return v_r_630_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isQueryChar(uint8_t v_c_631_){
_start:
{
uint8_t v___x_681_; uint8_t v___x_682_; 
v___x_681_ = 48;
v___x_682_ = lean_uint8_dec_le(v___x_681_, v_c_631_);
if (v___x_682_ == 0)
{
goto v___jp_676_;
}
else
{
uint8_t v___x_683_; uint8_t v___x_684_; 
v___x_683_ = 57;
v___x_684_ = lean_uint8_dec_le(v_c_631_, v___x_683_);
if (v___x_684_ == 0)
{
goto v___jp_676_;
}
else
{
return v___x_684_;
}
}
v___jp_632_:
{
uint8_t v___x_633_; uint8_t v___x_634_; 
v___x_633_ = 45;
v___x_634_ = lean_uint8_dec_eq(v_c_631_, v___x_633_);
if (v___x_634_ == 0)
{
uint8_t v___x_635_; uint8_t v___x_636_; 
v___x_635_ = 46;
v___x_636_ = lean_uint8_dec_eq(v_c_631_, v___x_635_);
if (v___x_636_ == 0)
{
uint8_t v___x_637_; uint8_t v___x_638_; 
v___x_637_ = 95;
v___x_638_ = lean_uint8_dec_eq(v_c_631_, v___x_637_);
if (v___x_638_ == 0)
{
uint8_t v___x_639_; uint8_t v___x_640_; 
v___x_639_ = 126;
v___x_640_ = lean_uint8_dec_eq(v_c_631_, v___x_639_);
if (v___x_640_ == 0)
{
uint8_t v___x_641_; uint8_t v___x_642_; 
v___x_641_ = 33;
v___x_642_ = lean_uint8_dec_eq(v_c_631_, v___x_641_);
if (v___x_642_ == 0)
{
uint8_t v___x_643_; uint8_t v___x_644_; 
v___x_643_ = 36;
v___x_644_ = lean_uint8_dec_eq(v_c_631_, v___x_643_);
if (v___x_644_ == 0)
{
uint8_t v___x_645_; uint8_t v___x_646_; 
v___x_645_ = 38;
v___x_646_ = lean_uint8_dec_eq(v_c_631_, v___x_645_);
if (v___x_646_ == 0)
{
uint8_t v___x_647_; uint8_t v___x_648_; 
v___x_647_ = 39;
v___x_648_ = lean_uint8_dec_eq(v_c_631_, v___x_647_);
if (v___x_648_ == 0)
{
uint8_t v___x_649_; uint8_t v___x_650_; 
v___x_649_ = 40;
v___x_650_ = lean_uint8_dec_eq(v_c_631_, v___x_649_);
if (v___x_650_ == 0)
{
uint8_t v___x_651_; uint8_t v___x_652_; 
v___x_651_ = 41;
v___x_652_ = lean_uint8_dec_eq(v_c_631_, v___x_651_);
if (v___x_652_ == 0)
{
uint8_t v___x_653_; uint8_t v___x_654_; 
v___x_653_ = 42;
v___x_654_ = lean_uint8_dec_eq(v_c_631_, v___x_653_);
if (v___x_654_ == 0)
{
uint8_t v___x_655_; uint8_t v___x_656_; 
v___x_655_ = 43;
v___x_656_ = lean_uint8_dec_eq(v_c_631_, v___x_655_);
if (v___x_656_ == 0)
{
uint8_t v___x_657_; uint8_t v___x_658_; 
v___x_657_ = 44;
v___x_658_ = lean_uint8_dec_eq(v_c_631_, v___x_657_);
if (v___x_658_ == 0)
{
uint8_t v___x_659_; uint8_t v___x_660_; 
v___x_659_ = 59;
v___x_660_ = lean_uint8_dec_eq(v_c_631_, v___x_659_);
if (v___x_660_ == 0)
{
uint8_t v___x_661_; uint8_t v___x_662_; 
v___x_661_ = 61;
v___x_662_ = lean_uint8_dec_eq(v_c_631_, v___x_661_);
if (v___x_662_ == 0)
{
uint8_t v___x_663_; uint8_t v___x_664_; 
v___x_663_ = 58;
v___x_664_ = lean_uint8_dec_eq(v_c_631_, v___x_663_);
if (v___x_664_ == 0)
{
uint8_t v___x_665_; uint8_t v___x_666_; 
v___x_665_ = 64;
v___x_666_ = lean_uint8_dec_eq(v_c_631_, v___x_665_);
if (v___x_666_ == 0)
{
uint8_t v___x_667_; uint8_t v___x_668_; 
v___x_667_ = 47;
v___x_668_ = lean_uint8_dec_eq(v_c_631_, v___x_667_);
if (v___x_668_ == 0)
{
uint8_t v___x_669_; uint8_t v___x_670_; 
v___x_669_ = 63;
v___x_670_ = lean_uint8_dec_eq(v_c_631_, v___x_669_);
return v___x_670_;
}
else
{
return v___x_668_;
}
}
else
{
return v___x_666_;
}
}
else
{
return v___x_664_;
}
}
else
{
return v___x_662_;
}
}
else
{
return v___x_660_;
}
}
else
{
return v___x_658_;
}
}
else
{
return v___x_656_;
}
}
else
{
return v___x_654_;
}
}
else
{
return v___x_652_;
}
}
else
{
return v___x_650_;
}
}
else
{
return v___x_648_;
}
}
else
{
return v___x_646_;
}
}
else
{
return v___x_644_;
}
}
else
{
return v___x_642_;
}
}
else
{
return v___x_640_;
}
}
else
{
return v___x_638_;
}
}
else
{
return v___x_636_;
}
}
else
{
return v___x_634_;
}
}
v___jp_671_:
{
uint8_t v___x_672_; uint8_t v___x_673_; 
v___x_672_ = 65;
v___x_673_ = lean_uint8_dec_le(v___x_672_, v_c_631_);
if (v___x_673_ == 0)
{
goto v___jp_632_;
}
else
{
uint8_t v___x_674_; uint8_t v___x_675_; 
v___x_674_ = 90;
v___x_675_ = lean_uint8_dec_le(v_c_631_, v___x_674_);
if (v___x_675_ == 0)
{
goto v___jp_632_;
}
else
{
return v___x_675_;
}
}
}
v___jp_676_:
{
uint8_t v___x_677_; uint8_t v___x_678_; 
v___x_677_ = 97;
v___x_678_ = lean_uint8_dec_le(v___x_677_, v_c_631_);
if (v___x_678_ == 0)
{
goto v___jp_671_;
}
else
{
uint8_t v___x_679_; uint8_t v___x_680_; 
v___x_679_ = 122;
v___x_680_ = lean_uint8_dec_le(v_c_631_, v___x_679_);
if (v___x_680_ == 0)
{
goto v___jp_671_;
}
else
{
return v___x_680_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isQueryChar___boxed(lean_object* v_c_685_){
_start:
{
uint8_t v_c_boxed_686_; uint8_t v_res_687_; lean_object* v_r_688_; 
v_c_boxed_686_ = lean_unbox(v_c_685_);
v_res_687_ = l_Std_Http_Internal_Char_isQueryChar(v_c_boxed_686_);
v_r_688_ = lean_box(v_res_687_);
return v_r_688_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isFragmentChar(uint8_t v_c_689_){
_start:
{
uint8_t v___x_739_; uint8_t v___x_740_; 
v___x_739_ = 48;
v___x_740_ = lean_uint8_dec_le(v___x_739_, v_c_689_);
if (v___x_740_ == 0)
{
goto v___jp_734_;
}
else
{
uint8_t v___x_741_; uint8_t v___x_742_; 
v___x_741_ = 57;
v___x_742_ = lean_uint8_dec_le(v_c_689_, v___x_741_);
if (v___x_742_ == 0)
{
goto v___jp_734_;
}
else
{
return v___x_742_;
}
}
v___jp_690_:
{
uint8_t v___x_691_; uint8_t v___x_692_; 
v___x_691_ = 45;
v___x_692_ = lean_uint8_dec_eq(v_c_689_, v___x_691_);
if (v___x_692_ == 0)
{
uint8_t v___x_693_; uint8_t v___x_694_; 
v___x_693_ = 46;
v___x_694_ = lean_uint8_dec_eq(v_c_689_, v___x_693_);
if (v___x_694_ == 0)
{
uint8_t v___x_695_; uint8_t v___x_696_; 
v___x_695_ = 95;
v___x_696_ = lean_uint8_dec_eq(v_c_689_, v___x_695_);
if (v___x_696_ == 0)
{
uint8_t v___x_697_; uint8_t v___x_698_; 
v___x_697_ = 126;
v___x_698_ = lean_uint8_dec_eq(v_c_689_, v___x_697_);
if (v___x_698_ == 0)
{
uint8_t v___x_699_; uint8_t v___x_700_; 
v___x_699_ = 33;
v___x_700_ = lean_uint8_dec_eq(v_c_689_, v___x_699_);
if (v___x_700_ == 0)
{
uint8_t v___x_701_; uint8_t v___x_702_; 
v___x_701_ = 36;
v___x_702_ = lean_uint8_dec_eq(v_c_689_, v___x_701_);
if (v___x_702_ == 0)
{
uint8_t v___x_703_; uint8_t v___x_704_; 
v___x_703_ = 38;
v___x_704_ = lean_uint8_dec_eq(v_c_689_, v___x_703_);
if (v___x_704_ == 0)
{
uint8_t v___x_705_; uint8_t v___x_706_; 
v___x_705_ = 39;
v___x_706_ = lean_uint8_dec_eq(v_c_689_, v___x_705_);
if (v___x_706_ == 0)
{
uint8_t v___x_707_; uint8_t v___x_708_; 
v___x_707_ = 40;
v___x_708_ = lean_uint8_dec_eq(v_c_689_, v___x_707_);
if (v___x_708_ == 0)
{
uint8_t v___x_709_; uint8_t v___x_710_; 
v___x_709_ = 41;
v___x_710_ = lean_uint8_dec_eq(v_c_689_, v___x_709_);
if (v___x_710_ == 0)
{
uint8_t v___x_711_; uint8_t v___x_712_; 
v___x_711_ = 42;
v___x_712_ = lean_uint8_dec_eq(v_c_689_, v___x_711_);
if (v___x_712_ == 0)
{
uint8_t v___x_713_; uint8_t v___x_714_; 
v___x_713_ = 43;
v___x_714_ = lean_uint8_dec_eq(v_c_689_, v___x_713_);
if (v___x_714_ == 0)
{
uint8_t v___x_715_; uint8_t v___x_716_; 
v___x_715_ = 44;
v___x_716_ = lean_uint8_dec_eq(v_c_689_, v___x_715_);
if (v___x_716_ == 0)
{
uint8_t v___x_717_; uint8_t v___x_718_; 
v___x_717_ = 59;
v___x_718_ = lean_uint8_dec_eq(v_c_689_, v___x_717_);
if (v___x_718_ == 0)
{
uint8_t v___x_719_; uint8_t v___x_720_; 
v___x_719_ = 61;
v___x_720_ = lean_uint8_dec_eq(v_c_689_, v___x_719_);
if (v___x_720_ == 0)
{
uint8_t v___x_721_; uint8_t v___x_722_; 
v___x_721_ = 58;
v___x_722_ = lean_uint8_dec_eq(v_c_689_, v___x_721_);
if (v___x_722_ == 0)
{
uint8_t v___x_723_; uint8_t v___x_724_; 
v___x_723_ = 64;
v___x_724_ = lean_uint8_dec_eq(v_c_689_, v___x_723_);
if (v___x_724_ == 0)
{
uint8_t v___x_725_; uint8_t v___x_726_; 
v___x_725_ = 47;
v___x_726_ = lean_uint8_dec_eq(v_c_689_, v___x_725_);
if (v___x_726_ == 0)
{
uint8_t v___x_727_; uint8_t v___x_728_; 
v___x_727_ = 63;
v___x_728_ = lean_uint8_dec_eq(v_c_689_, v___x_727_);
return v___x_728_;
}
else
{
return v___x_726_;
}
}
else
{
return v___x_724_;
}
}
else
{
return v___x_722_;
}
}
else
{
return v___x_720_;
}
}
else
{
return v___x_718_;
}
}
else
{
return v___x_716_;
}
}
else
{
return v___x_714_;
}
}
else
{
return v___x_712_;
}
}
else
{
return v___x_710_;
}
}
else
{
return v___x_708_;
}
}
else
{
return v___x_706_;
}
}
else
{
return v___x_704_;
}
}
else
{
return v___x_702_;
}
}
else
{
return v___x_700_;
}
}
else
{
return v___x_698_;
}
}
else
{
return v___x_696_;
}
}
else
{
return v___x_694_;
}
}
else
{
return v___x_692_;
}
}
v___jp_729_:
{
uint8_t v___x_730_; uint8_t v___x_731_; 
v___x_730_ = 65;
v___x_731_ = lean_uint8_dec_le(v___x_730_, v_c_689_);
if (v___x_731_ == 0)
{
goto v___jp_690_;
}
else
{
uint8_t v___x_732_; uint8_t v___x_733_; 
v___x_732_ = 90;
v___x_733_ = lean_uint8_dec_le(v_c_689_, v___x_732_);
if (v___x_733_ == 0)
{
goto v___jp_690_;
}
else
{
return v___x_733_;
}
}
}
v___jp_734_:
{
uint8_t v___x_735_; uint8_t v___x_736_; 
v___x_735_ = 97;
v___x_736_ = lean_uint8_dec_le(v___x_735_, v_c_689_);
if (v___x_736_ == 0)
{
goto v___jp_729_;
}
else
{
uint8_t v___x_737_; uint8_t v___x_738_; 
v___x_737_ = 122;
v___x_738_ = lean_uint8_dec_le(v_c_689_, v___x_737_);
if (v___x_738_ == 0)
{
goto v___jp_729_;
}
else
{
return v___x_738_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isFragmentChar___boxed(lean_object* v_c_743_){
_start:
{
uint8_t v_c_boxed_744_; uint8_t v_res_745_; lean_object* v_r_746_; 
v_c_boxed_744_ = lean_unbox(v_c_743_);
v_res_745_ = l_Std_Http_Internal_Char_isFragmentChar(v_c_boxed_744_);
v_r_746_ = lean_box(v_res_745_);
return v_r_746_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isUserInfoChar(uint8_t v_c_747_){
_start:
{
uint8_t v___x_791_; uint8_t v___x_792_; 
v___x_791_ = 48;
v___x_792_ = lean_uint8_dec_le(v___x_791_, v_c_747_);
if (v___x_792_ == 0)
{
goto v___jp_786_;
}
else
{
uint8_t v___x_793_; uint8_t v___x_794_; 
v___x_793_ = 57;
v___x_794_ = lean_uint8_dec_le(v_c_747_, v___x_793_);
if (v___x_794_ == 0)
{
goto v___jp_786_;
}
else
{
return v___x_794_;
}
}
v___jp_748_:
{
uint8_t v___x_749_; uint8_t v___x_750_; 
v___x_749_ = 45;
v___x_750_ = lean_uint8_dec_eq(v_c_747_, v___x_749_);
if (v___x_750_ == 0)
{
uint8_t v___x_751_; uint8_t v___x_752_; 
v___x_751_ = 46;
v___x_752_ = lean_uint8_dec_eq(v_c_747_, v___x_751_);
if (v___x_752_ == 0)
{
uint8_t v___x_753_; uint8_t v___x_754_; 
v___x_753_ = 95;
v___x_754_ = lean_uint8_dec_eq(v_c_747_, v___x_753_);
if (v___x_754_ == 0)
{
uint8_t v___x_755_; uint8_t v___x_756_; 
v___x_755_ = 126;
v___x_756_ = lean_uint8_dec_eq(v_c_747_, v___x_755_);
if (v___x_756_ == 0)
{
uint8_t v___x_757_; uint8_t v___x_758_; 
v___x_757_ = 33;
v___x_758_ = lean_uint8_dec_eq(v_c_747_, v___x_757_);
if (v___x_758_ == 0)
{
uint8_t v___x_759_; uint8_t v___x_760_; 
v___x_759_ = 36;
v___x_760_ = lean_uint8_dec_eq(v_c_747_, v___x_759_);
if (v___x_760_ == 0)
{
uint8_t v___x_761_; uint8_t v___x_762_; 
v___x_761_ = 38;
v___x_762_ = lean_uint8_dec_eq(v_c_747_, v___x_761_);
if (v___x_762_ == 0)
{
uint8_t v___x_763_; uint8_t v___x_764_; 
v___x_763_ = 39;
v___x_764_ = lean_uint8_dec_eq(v_c_747_, v___x_763_);
if (v___x_764_ == 0)
{
uint8_t v___x_765_; uint8_t v___x_766_; 
v___x_765_ = 40;
v___x_766_ = lean_uint8_dec_eq(v_c_747_, v___x_765_);
if (v___x_766_ == 0)
{
uint8_t v___x_767_; uint8_t v___x_768_; 
v___x_767_ = 41;
v___x_768_ = lean_uint8_dec_eq(v_c_747_, v___x_767_);
if (v___x_768_ == 0)
{
uint8_t v___x_769_; uint8_t v___x_770_; 
v___x_769_ = 42;
v___x_770_ = lean_uint8_dec_eq(v_c_747_, v___x_769_);
if (v___x_770_ == 0)
{
uint8_t v___x_771_; uint8_t v___x_772_; 
v___x_771_ = 43;
v___x_772_ = lean_uint8_dec_eq(v_c_747_, v___x_771_);
if (v___x_772_ == 0)
{
uint8_t v___x_773_; uint8_t v___x_774_; 
v___x_773_ = 44;
v___x_774_ = lean_uint8_dec_eq(v_c_747_, v___x_773_);
if (v___x_774_ == 0)
{
uint8_t v___x_775_; uint8_t v___x_776_; 
v___x_775_ = 59;
v___x_776_ = lean_uint8_dec_eq(v_c_747_, v___x_775_);
if (v___x_776_ == 0)
{
uint8_t v___x_777_; uint8_t v___x_778_; 
v___x_777_ = 61;
v___x_778_ = lean_uint8_dec_eq(v_c_747_, v___x_777_);
if (v___x_778_ == 0)
{
uint8_t v___x_779_; uint8_t v___x_780_; 
v___x_779_ = 58;
v___x_780_ = lean_uint8_dec_eq(v_c_747_, v___x_779_);
return v___x_780_;
}
else
{
return v___x_778_;
}
}
else
{
return v___x_776_;
}
}
else
{
return v___x_774_;
}
}
else
{
return v___x_772_;
}
}
else
{
return v___x_770_;
}
}
else
{
return v___x_768_;
}
}
else
{
return v___x_766_;
}
}
else
{
return v___x_764_;
}
}
else
{
return v___x_762_;
}
}
else
{
return v___x_760_;
}
}
else
{
return v___x_758_;
}
}
else
{
return v___x_756_;
}
}
else
{
return v___x_754_;
}
}
else
{
return v___x_752_;
}
}
else
{
return v___x_750_;
}
}
v___jp_781_:
{
uint8_t v___x_782_; uint8_t v___x_783_; 
v___x_782_ = 65;
v___x_783_ = lean_uint8_dec_le(v___x_782_, v_c_747_);
if (v___x_783_ == 0)
{
goto v___jp_748_;
}
else
{
uint8_t v___x_784_; uint8_t v___x_785_; 
v___x_784_ = 90;
v___x_785_ = lean_uint8_dec_le(v_c_747_, v___x_784_);
if (v___x_785_ == 0)
{
goto v___jp_748_;
}
else
{
return v___x_785_;
}
}
}
v___jp_786_:
{
uint8_t v___x_787_; uint8_t v___x_788_; 
v___x_787_ = 97;
v___x_788_ = lean_uint8_dec_le(v___x_787_, v_c_747_);
if (v___x_788_ == 0)
{
goto v___jp_781_;
}
else
{
uint8_t v___x_789_; uint8_t v___x_790_; 
v___x_789_ = 122;
v___x_790_ = lean_uint8_dec_le(v_c_747_, v___x_789_);
if (v___x_790_ == 0)
{
goto v___jp_781_;
}
else
{
return v___x_790_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isUserInfoChar___boxed(lean_object* v_c_795_){
_start:
{
uint8_t v_c_boxed_796_; uint8_t v_res_797_; lean_object* v_r_798_; 
v_c_boxed_796_ = lean_unbox(v_c_795_);
v_res_797_ = l_Std_Http_Internal_Char_isUserInfoChar(v_c_boxed_796_);
v_r_798_ = lean_box(v_res_797_);
return v_r_798_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Char_isQueryDataChar(uint8_t v_c_799_){
_start:
{
uint8_t v___y_801_; uint8_t v___x_856_; uint8_t v___x_857_; 
v___x_856_ = 48;
v___x_857_ = lean_uint8_dec_le(v___x_856_, v_c_799_);
if (v___x_857_ == 0)
{
goto v___jp_851_;
}
else
{
uint8_t v___x_858_; uint8_t v___x_859_; 
v___x_858_ = 57;
v___x_859_ = lean_uint8_dec_le(v_c_799_, v___x_858_);
if (v___x_859_ == 0)
{
goto v___jp_851_;
}
else
{
v___y_801_ = v___x_859_;
goto v___jp_800_;
}
}
v___jp_800_:
{
uint8_t v___x_802_; uint8_t v___x_803_; 
v___x_802_ = 38;
v___x_803_ = lean_uint8_dec_eq(v_c_799_, v___x_802_);
if (v___x_803_ == 0)
{
if (v___y_801_ == 0)
{
return v___y_801_;
}
else
{
uint8_t v___x_804_; uint8_t v___x_805_; 
v___x_804_ = 61;
v___x_805_ = lean_uint8_dec_eq(v_c_799_, v___x_804_);
if (v___x_805_ == 0)
{
return v___y_801_;
}
else
{
return v___x_803_;
}
}
}
else
{
uint8_t v___x_806_; 
v___x_806_ = 0;
return v___x_806_;
}
}
v___jp_807_:
{
uint8_t v___x_808_; uint8_t v___x_809_; 
v___x_808_ = 45;
v___x_809_ = lean_uint8_dec_eq(v_c_799_, v___x_808_);
if (v___x_809_ == 0)
{
uint8_t v___x_810_; uint8_t v___x_811_; 
v___x_810_ = 46;
v___x_811_ = lean_uint8_dec_eq(v_c_799_, v___x_810_);
if (v___x_811_ == 0)
{
uint8_t v___x_812_; uint8_t v___x_813_; 
v___x_812_ = 95;
v___x_813_ = lean_uint8_dec_eq(v_c_799_, v___x_812_);
if (v___x_813_ == 0)
{
uint8_t v___x_814_; uint8_t v___x_815_; 
v___x_814_ = 126;
v___x_815_ = lean_uint8_dec_eq(v_c_799_, v___x_814_);
if (v___x_815_ == 0)
{
uint8_t v___x_816_; uint8_t v___x_817_; 
v___x_816_ = 33;
v___x_817_ = lean_uint8_dec_eq(v_c_799_, v___x_816_);
if (v___x_817_ == 0)
{
uint8_t v___x_818_; uint8_t v___x_819_; 
v___x_818_ = 36;
v___x_819_ = lean_uint8_dec_eq(v_c_799_, v___x_818_);
if (v___x_819_ == 0)
{
uint8_t v___x_820_; uint8_t v___x_821_; 
v___x_820_ = 38;
v___x_821_ = lean_uint8_dec_eq(v_c_799_, v___x_820_);
if (v___x_821_ == 0)
{
uint8_t v___x_822_; uint8_t v___x_823_; 
v___x_822_ = 39;
v___x_823_ = lean_uint8_dec_eq(v_c_799_, v___x_822_);
if (v___x_823_ == 0)
{
uint8_t v___x_824_; uint8_t v___x_825_; 
v___x_824_ = 40;
v___x_825_ = lean_uint8_dec_eq(v_c_799_, v___x_824_);
if (v___x_825_ == 0)
{
uint8_t v___x_826_; uint8_t v___x_827_; 
v___x_826_ = 41;
v___x_827_ = lean_uint8_dec_eq(v_c_799_, v___x_826_);
if (v___x_827_ == 0)
{
uint8_t v___x_828_; uint8_t v___x_829_; 
v___x_828_ = 42;
v___x_829_ = lean_uint8_dec_eq(v_c_799_, v___x_828_);
if (v___x_829_ == 0)
{
uint8_t v___x_830_; uint8_t v___x_831_; 
v___x_830_ = 43;
v___x_831_ = lean_uint8_dec_eq(v_c_799_, v___x_830_);
if (v___x_831_ == 0)
{
uint8_t v___x_832_; uint8_t v___x_833_; 
v___x_832_ = 44;
v___x_833_ = lean_uint8_dec_eq(v_c_799_, v___x_832_);
if (v___x_833_ == 0)
{
uint8_t v___x_834_; uint8_t v___x_835_; 
v___x_834_ = 59;
v___x_835_ = lean_uint8_dec_eq(v_c_799_, v___x_834_);
if (v___x_835_ == 0)
{
uint8_t v___x_836_; uint8_t v___x_837_; 
v___x_836_ = 61;
v___x_837_ = lean_uint8_dec_eq(v_c_799_, v___x_836_);
if (v___x_837_ == 0)
{
uint8_t v___x_838_; uint8_t v___x_839_; 
v___x_838_ = 58;
v___x_839_ = lean_uint8_dec_eq(v_c_799_, v___x_838_);
if (v___x_839_ == 0)
{
uint8_t v___x_840_; uint8_t v___x_841_; 
v___x_840_ = 64;
v___x_841_ = lean_uint8_dec_eq(v_c_799_, v___x_840_);
if (v___x_841_ == 0)
{
uint8_t v___x_842_; uint8_t v___x_843_; 
v___x_842_ = 47;
v___x_843_ = lean_uint8_dec_eq(v_c_799_, v___x_842_);
if (v___x_843_ == 0)
{
uint8_t v___x_844_; uint8_t v___x_845_; 
v___x_844_ = 63;
v___x_845_ = lean_uint8_dec_eq(v_c_799_, v___x_844_);
if (v___x_845_ == 0)
{
return v___x_845_;
}
else
{
v___y_801_ = v___x_845_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_843_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_841_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_839_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_837_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_835_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_833_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_831_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_829_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_827_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_825_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_823_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_821_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_819_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_817_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_815_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_813_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_811_;
goto v___jp_800_;
}
}
else
{
v___y_801_ = v___x_809_;
goto v___jp_800_;
}
}
v___jp_846_:
{
uint8_t v___x_847_; uint8_t v___x_848_; 
v___x_847_ = 65;
v___x_848_ = lean_uint8_dec_le(v___x_847_, v_c_799_);
if (v___x_848_ == 0)
{
goto v___jp_807_;
}
else
{
uint8_t v___x_849_; uint8_t v___x_850_; 
v___x_849_ = 90;
v___x_850_ = lean_uint8_dec_le(v_c_799_, v___x_849_);
if (v___x_850_ == 0)
{
goto v___jp_807_;
}
else
{
v___y_801_ = v___x_850_;
goto v___jp_800_;
}
}
}
v___jp_851_:
{
uint8_t v___x_852_; uint8_t v___x_853_; 
v___x_852_ = 97;
v___x_853_ = lean_uint8_dec_le(v___x_852_, v_c_799_);
if (v___x_853_ == 0)
{
goto v___jp_846_;
}
else
{
uint8_t v___x_854_; uint8_t v___x_855_; 
v___x_854_ = 122;
v___x_855_ = lean_uint8_dec_le(v_c_799_, v___x_854_);
if (v___x_855_ == 0)
{
goto v___jp_846_;
}
else
{
v___y_801_ = v___x_855_;
goto v___jp_800_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Char_isQueryDataChar___boxed(lean_object* v_c_860_){
_start:
{
uint8_t v_c_boxed_861_; uint8_t v_res_862_; lean_object* v_r_863_; 
v_c_boxed_861_ = lean_unbox(v_c_860_);
v_res_862_ = l_Std_Http_Internal_Char_isQueryDataChar(v_c_boxed_861_);
v_r_863_ = lean_box(v_res_862_);
return v_r_863_;
}
}
lean_object* runtime_initialize_Init_Data_Char(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Internal_Char(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Char(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Internal_Char(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Char(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Int_Basic(uint8_t builtin);
lean_object* initialize_Init_Grind(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Internal_Char(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Char(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Internal_Char(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Internal_Char(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Internal_Char(builtin);
}
#ifdef __cplusplus
}
#endif
