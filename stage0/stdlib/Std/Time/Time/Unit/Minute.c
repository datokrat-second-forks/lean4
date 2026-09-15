// Lean compiler output
// Module: Std.Time.Time.Unit.Minute
// Imports: public import Std.Time.Time.Unit.Second public import Init.Transport
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
lean_object* l_Int_neg___boxed(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
lean_object* l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
lean_object* l_Int_repr___boxed(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_toBounded___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_equiv___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_equiv___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_Minute_Ordinal_equiv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Minute_Ordinal_equiv___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Minute_Ordinal_equiv___closed__0 = (const lean_object*)&l_Std_Time_Minute_Ordinal_equiv___closed__0_value;
static const lean_ctor_object l_Std_Time_Minute_Ordinal_equiv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Time_Minute_Ordinal_equiv___closed__0_value),((lean_object*)&l_Std_Time_Minute_Ordinal_equiv___closed__0_value)}};
static const lean_object* l_Std_Time_Minute_Ordinal_equiv___closed__1 = (const lean_object*)&l_Std_Time_Minute_Ordinal_equiv___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Time_Minute_Ordinal_equiv = (const lean_object*)&l_Std_Time_Minute_Ordinal_equiv___closed__1_value;
static lean_once_cell_t l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Minute_instReprOrdinal___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_instReprOrdinal___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Minute_instReprOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Minute_instReprOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Minute_Ordinal_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Minute_instReprOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Minute_instReprOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Minute_instReprOrdinal = (const lean_object*)&l_Std_Time_Minute_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Minute_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_instLEOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Minute_instLTOrdinal;
LEAN_EXPORT uint8_t l_Std_Time_Minute_instDecidableLEOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_instDecidableLEOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Minute_instDecidableLTOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_instDecidableLTOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Minute_instOrdOrdinal___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_instOrdOrdinal___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Minute_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Minute_instOrdOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Minute_Ordinal_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Minute_instOrdOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Minute_instOrdOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Minute_instOrdOrdinal = (const lean_object*)&l_Std_Time_Minute_instOrdOrdinal___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_val___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Minute_instOfNatOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Minute_instOfNatOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Minute_instOfNatOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Minute_instOfNatOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_Minute_instOfNatOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Minute_instOfNatOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_Minute_instOfNatOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Minute_instOfNatOrdinal___closed__3;
static lean_once_cell_t l_Std_Time_Minute_instOfNatOrdinal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Minute_instOfNatOrdinal___closed__4;
LEAN_EXPORT lean_object* l_Std_Time_Minute_instOfNatOrdinal(lean_object*);
static lean_once_cell_t l_Std_Time_Minute_instInhabitedOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Minute_instInhabitedOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Minute_instInhabitedOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Minute_instInhabitedOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_Minute_instInhabitedOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Minute_instInhabitedOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_Minute_instInhabitedOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Minute_instInhabitedOrdinal___closed__3;
static lean_once_cell_t l_Std_Time_Minute_instInhabitedOrdinal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Minute_instInhabitedOrdinal___closed__4;
LEAN_EXPORT lean_object* l_Std_Time_Minute_instInhabitedOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_toUnitVal(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_toUnitVal___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Minute_Offset_equiv = (const lean_object*)&l_Std_Time_Minute_Ordinal_equiv___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_val___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_instReprOffset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_instReprOffset___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Minute_instReprOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Minute_instReprOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Minute_instReprOffset___closed__0 = (const lean_object*)&l_Std_Time_Minute_instReprOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Minute_instReprOffset = (const lean_object*)&l_Std_Time_Minute_instReprOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Minute_instToStringOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_repr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Minute_instToStringOffset___closed__0 = (const lean_object*)&l_Std_Time_Minute_instToStringOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Minute_instToStringOffset = (const lean_object*)&l_Std_Time_Minute_instToStringOffset___closed__0_value;
static lean_once_cell_t l_Std_Time_Minute_instInhabitedOffset___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Minute_instInhabitedOffset___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Minute_instInhabitedOffset;
LEAN_EXPORT uint8_t l_Std_Time_Minute_instDecidableEqOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_instDecidableEqOffset___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Minute_instAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Minute_instAddOffset___closed__0 = (const lean_object*)&l_Std_Time_Minute_instAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Minute_instAddOffset = (const lean_object*)&l_Std_Time_Minute_instAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Minute_instSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Minute_instSubOffset___closed__0 = (const lean_object*)&l_Std_Time_Minute_instSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Minute_instSubOffset = (const lean_object*)&l_Std_Time_Minute_instSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Minute_instNegOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_neg___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Minute_instNegOffset___closed__0 = (const lean_object*)&l_Std_Time_Minute_instNegOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Minute_instNegOffset = (const lean_object*)&l_Std_Time_Minute_instNegOffset___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Minute_instLEOffset;
LEAN_EXPORT lean_object* l_Std_Time_Minute_instLTOffset;
LEAN_EXPORT uint8_t l_Std_Time_Minute_instOrdOffset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_instOrdOffset___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Minute_instOrdOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Minute_instOrdOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Minute_instOrdOffset___closed__0 = (const lean_object*)&l_Std_Time_Minute_instOrdOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Minute_instOrdOffset = (const lean_object*)&l_Std_Time_Minute_instOrdOffset___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Minute_instOfNatOffset(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Minute_instDecidableLeOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_instDecidableLeOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Minute_instDecidableLtOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_instDecidableLtOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_ofInt___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_ofInt___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_ofInt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_ofInt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_ofNat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_ofNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_ofFin(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_toOffset(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_toOffset___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_ofInt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_mk(lean_object* v_toBounded_1_){
_start:
{
lean_inc(v_toBounded_1_);
return v_toBounded_1_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_mk___boxed(lean_object* v_toBounded_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l_Std_Time_Minute_Ordinal_mk(v_toBounded_2_);
lean_dec(v_toBounded_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_toBounded(lean_object* v_self_4_){
_start:
{
lean_inc(v_self_4_);
return v_self_4_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_toBounded___boxed(lean_object* v_self_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Std_Time_Minute_Ordinal_toBounded(v_self_5_);
lean_dec(v_self_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_equiv___lam__0(lean_object* v___y_7_){
_start:
{
lean_inc(v___y_7_);
return v___y_7_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_equiv___lam__0___boxed(lean_object* v___y_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Std_Time_Minute_Ordinal_equiv___lam__0(v___y_8_);
lean_dec(v___y_8_);
return v_res_9_;
}
}
static lean_object* _init_l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_unsigned_to_nat(0u);
v___x_15_ = lean_nat_to_int(v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_instReprOrdinal___lam__0(lean_object* v___x_16_, lean_object* v_x_17_, lean_object* v_prec_18_){
_start:
{
lean_object* v_invFun_19_; lean_object* v___x_20_; lean_object* v___x_21_; uint8_t v___x_22_; 
v_invFun_19_ = lean_ctor_get(v___x_16_, 1);
lean_inc(v_invFun_19_);
lean_dec_ref(v___x_16_);
v___x_20_ = lean_apply_1(v_invFun_19_, v_x_17_);
v___x_21_ = lean_obj_once(&l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0);
v___x_22_ = lean_int_dec_lt(v___x_20_, v___x_21_);
if (v___x_22_ == 0)
{
lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_23_ = l_Int_repr(v___x_20_);
lean_dec(v___x_20_);
v___x_24_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
return v___x_24_;
}
else
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_25_ = l_Int_repr(v___x_20_);
lean_dec(v___x_20_);
v___x_26_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
v___x_27_ = l_Repr_addAppParen(v___x_26_, v_prec_18_);
return v___x_27_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_instReprOrdinal___lam__0___boxed(lean_object* v___x_28_, lean_object* v_x_29_, lean_object* v_prec_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Std_Time_Minute_instReprOrdinal___lam__0(v___x_28_, v_x_29_, v_prec_30_);
lean_dec(v_prec_30_);
return v_res_31_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Minute_instDecidableEqOrdinal(lean_object* v_a_35_, lean_object* v_b_36_){
_start:
{
lean_object* v___x_37_; lean_object* v_invFun_38_; lean_object* v___x_39_; lean_object* v___x_40_; uint8_t v___x_41_; 
v___x_37_ = ((lean_object*)(l_Std_Time_Minute_Ordinal_equiv));
v_invFun_38_ = lean_ctor_get(v___x_37_, 1);
lean_inc_n(v_invFun_38_, 2);
v___x_39_ = lean_apply_1(v_invFun_38_, v_a_35_);
v___x_40_ = lean_apply_1(v_invFun_38_, v_b_36_);
v___x_41_ = lean_int_dec_eq(v___x_39_, v___x_40_);
lean_dec(v___x_40_);
lean_dec(v___x_39_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_instDecidableEqOrdinal___boxed(lean_object* v_a_42_, lean_object* v_b_43_){
_start:
{
uint8_t v_res_44_; lean_object* v_r_45_; 
v_res_44_ = l_Std_Time_Minute_instDecidableEqOrdinal(v_a_42_, v_b_43_);
v_r_45_ = lean_box(v_res_44_);
return v_r_45_;
}
}
static lean_object* _init_l_Std_Time_Minute_instLEOrdinal(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_box(0);
return v___x_46_;
}
}
static lean_object* _init_l_Std_Time_Minute_instLTOrdinal(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_box(0);
return v___x_47_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Minute_instDecidableLEOrdinal(lean_object* v_a_48_, lean_object* v_b_49_){
_start:
{
lean_object* v___x_50_; lean_object* v_invFun_51_; lean_object* v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_50_ = ((lean_object*)(l_Std_Time_Minute_Ordinal_equiv));
v_invFun_51_ = lean_ctor_get(v___x_50_, 1);
lean_inc_n(v_invFun_51_, 2);
v___x_52_ = lean_apply_1(v_invFun_51_, v_a_48_);
v___x_53_ = lean_apply_1(v_invFun_51_, v_b_49_);
v___x_54_ = lean_int_dec_le(v___x_52_, v___x_53_);
lean_dec(v___x_53_);
lean_dec(v___x_52_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_instDecidableLEOrdinal___boxed(lean_object* v_a_55_, lean_object* v_b_56_){
_start:
{
uint8_t v_res_57_; lean_object* v_r_58_; 
v_res_57_ = l_Std_Time_Minute_instDecidableLEOrdinal(v_a_55_, v_b_56_);
v_r_58_ = lean_box(v_res_57_);
return v_r_58_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Minute_instDecidableLTOrdinal(lean_object* v_a_59_, lean_object* v_b_60_){
_start:
{
lean_object* v___x_61_; lean_object* v_invFun_62_; lean_object* v___x_63_; lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_61_ = ((lean_object*)(l_Std_Time_Minute_Ordinal_equiv));
v_invFun_62_ = lean_ctor_get(v___x_61_, 1);
lean_inc_n(v_invFun_62_, 2);
v___x_63_ = lean_apply_1(v_invFun_62_, v_a_59_);
v___x_64_ = lean_apply_1(v_invFun_62_, v_b_60_);
v___x_65_ = lean_int_dec_lt(v___x_63_, v___x_64_);
lean_dec(v___x_64_);
lean_dec(v___x_63_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_instDecidableLTOrdinal___boxed(lean_object* v_a_66_, lean_object* v_b_67_){
_start:
{
uint8_t v_res_68_; lean_object* v_r_69_; 
v_res_68_ = l_Std_Time_Minute_instDecidableLTOrdinal(v_a_66_, v_b_67_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Minute_instOrdOrdinal___lam__0(lean_object* v___x_70_, lean_object* v_x_71_, lean_object* v_y_72_){
_start:
{
lean_object* v_invFun_73_; lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; 
v_invFun_73_ = lean_ctor_get(v___x_70_, 1);
lean_inc_n(v_invFun_73_, 2);
lean_dec_ref(v___x_70_);
v___x_74_ = lean_apply_1(v_invFun_73_, v_x_71_);
v___x_75_ = lean_apply_1(v_invFun_73_, v_y_72_);
v___x_76_ = lean_int_dec_lt(v___x_74_, v___x_75_);
if (v___x_76_ == 0)
{
uint8_t v___x_77_; 
v___x_77_ = lean_int_dec_eq(v___x_74_, v___x_75_);
lean_dec(v___x_75_);
lean_dec(v___x_74_);
if (v___x_77_ == 0)
{
uint8_t v___x_78_; 
v___x_78_ = 2;
return v___x_78_;
}
else
{
uint8_t v___x_79_; 
v___x_79_ = 1;
return v___x_79_;
}
}
else
{
uint8_t v___x_80_; 
lean_dec(v___x_75_);
lean_dec(v___x_74_);
v___x_80_ = 0;
return v___x_80_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_instOrdOrdinal___lam__0___boxed(lean_object* v___x_81_, lean_object* v_x_82_, lean_object* v_y_83_){
_start:
{
uint8_t v_res_84_; lean_object* v_r_85_; 
v_res_84_ = l_Std_Time_Minute_instOrdOrdinal___lam__0(v___x_81_, v_x_82_, v_y_83_);
v_r_85_ = lean_box(v_res_84_);
return v_r_85_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_val(lean_object* v_ordinal_89_){
_start:
{
lean_inc(v_ordinal_89_);
return v_ordinal_89_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_val___boxed(lean_object* v_ordinal_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Std_Time_Minute_Ordinal_val(v_ordinal_90_);
lean_dec(v_ordinal_90_);
return v_res_91_;
}
}
static lean_object* _init_l_Std_Time_Minute_instOfNatOrdinal___closed__0(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_unsigned_to_nat(59u);
v___x_93_ = lean_nat_to_int(v___x_92_);
return v___x_93_;
}
}
static lean_object* _init_l_Std_Time_Minute_instOfNatOrdinal___closed__1(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = lean_obj_once(&l_Std_Time_Minute_instOfNatOrdinal___closed__0, &l_Std_Time_Minute_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Minute_instOfNatOrdinal___closed__0);
v___x_95_ = lean_obj_once(&l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0);
v___x_96_ = lean_int_add(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l_Std_Time_Minute_instOfNatOrdinal___closed__2(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = lean_obj_once(&l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0);
v___x_98_ = lean_obj_once(&l_Std_Time_Minute_instOfNatOrdinal___closed__1, &l_Std_Time_Minute_instOfNatOrdinal___closed__1_once, _init_l_Std_Time_Minute_instOfNatOrdinal___closed__1);
v___x_99_ = lean_int_sub(v___x_98_, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l_Std_Time_Minute_instOfNatOrdinal___closed__3(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lean_unsigned_to_nat(1u);
v___x_101_ = lean_nat_to_int(v___x_100_);
return v___x_101_;
}
}
static lean_object* _init_l_Std_Time_Minute_instOfNatOrdinal___closed__4(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v_range_104_; 
v___x_102_ = lean_obj_once(&l_Std_Time_Minute_instOfNatOrdinal___closed__3, &l_Std_Time_Minute_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Minute_instOfNatOrdinal___closed__3);
v___x_103_ = lean_obj_once(&l_Std_Time_Minute_instOfNatOrdinal___closed__2, &l_Std_Time_Minute_instOfNatOrdinal___closed__2_once, _init_l_Std_Time_Minute_instOfNatOrdinal___closed__2);
v_range_104_ = lean_int_add(v___x_103_, v___x_102_);
return v_range_104_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_instOfNatOrdinal(lean_object* v_n_105_){
_start:
{
lean_object* v___x_106_; lean_object* v_toFun_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v_range_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_106_ = ((lean_object*)(l_Std_Time_Minute_Ordinal_equiv));
v_toFun_107_ = lean_ctor_get(v___x_106_, 0);
v___x_108_ = lean_obj_once(&l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0);
v___x_109_ = lean_nat_to_int(v_n_105_);
v_range_110_ = lean_obj_once(&l_Std_Time_Minute_instOfNatOrdinal___closed__4, &l_Std_Time_Minute_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Minute_instOfNatOrdinal___closed__4);
v___x_111_ = lean_int_sub(v___x_109_, v___x_108_);
lean_dec(v___x_109_);
v___x_112_ = lean_int_emod(v___x_111_, v_range_110_);
lean_dec(v___x_111_);
v___x_113_ = lean_int_add(v___x_112_, v_range_110_);
lean_dec(v___x_112_);
v___x_114_ = lean_int_emod(v___x_113_, v_range_110_);
lean_dec(v___x_113_);
v___x_115_ = lean_int_add(v___x_114_, v___x_108_);
lean_dec(v___x_114_);
lean_inc(v_toFun_107_);
v___x_116_ = lean_apply_1(v_toFun_107_, v___x_115_);
return v___x_116_;
}
}
static lean_object* _init_l_Std_Time_Minute_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = lean_obj_once(&l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0);
v___x_118_ = lean_int_sub(v___x_117_, v___x_117_);
return v___x_118_;
}
}
static lean_object* _init_l_Std_Time_Minute_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v_range_119_ = lean_obj_once(&l_Std_Time_Minute_instOfNatOrdinal___closed__4, &l_Std_Time_Minute_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Minute_instOfNatOrdinal___closed__4);
v___x_120_ = lean_obj_once(&l_Std_Time_Minute_instInhabitedOrdinal___closed__0, &l_Std_Time_Minute_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Minute_instInhabitedOrdinal___closed__0);
v___x_121_ = lean_int_emod(v___x_120_, v_range_119_);
return v___x_121_;
}
}
static lean_object* _init_l_Std_Time_Minute_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v_range_122_ = lean_obj_once(&l_Std_Time_Minute_instOfNatOrdinal___closed__4, &l_Std_Time_Minute_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Minute_instOfNatOrdinal___closed__4);
v___x_123_ = lean_obj_once(&l_Std_Time_Minute_instInhabitedOrdinal___closed__1, &l_Std_Time_Minute_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Minute_instInhabitedOrdinal___closed__1);
v___x_124_ = lean_int_add(v___x_123_, v_range_122_);
return v___x_124_;
}
}
static lean_object* _init_l_Std_Time_Minute_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v_range_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v_range_125_ = lean_obj_once(&l_Std_Time_Minute_instOfNatOrdinal___closed__4, &l_Std_Time_Minute_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Minute_instOfNatOrdinal___closed__4);
v___x_126_ = lean_obj_once(&l_Std_Time_Minute_instInhabitedOrdinal___closed__2, &l_Std_Time_Minute_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Minute_instInhabitedOrdinal___closed__2);
v___x_127_ = lean_int_emod(v___x_126_, v_range_125_);
return v___x_127_;
}
}
static lean_object* _init_l_Std_Time_Minute_instInhabitedOrdinal___closed__4(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_128_ = lean_obj_once(&l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0);
v___x_129_ = lean_obj_once(&l_Std_Time_Minute_instInhabitedOrdinal___closed__3, &l_Std_Time_Minute_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Minute_instInhabitedOrdinal___closed__3);
v___x_130_ = lean_int_add(v___x_129_, v___x_128_);
return v___x_130_;
}
}
static lean_object* _init_l_Std_Time_Minute_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_131_; lean_object* v_toFun_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_131_ = ((lean_object*)(l_Std_Time_Minute_Ordinal_equiv));
v_toFun_132_ = lean_ctor_get(v___x_131_, 0);
v___x_133_ = lean_obj_once(&l_Std_Time_Minute_instInhabitedOrdinal___closed__4, &l_Std_Time_Minute_instInhabitedOrdinal___closed__4_once, _init_l_Std_Time_Minute_instInhabitedOrdinal___closed__4);
lean_inc(v_toFun_132_);
v___x_134_ = lean_apply_1(v_toFun_132_, v___x_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_mk(lean_object* v_toUnitVal_135_){
_start:
{
lean_inc(v_toUnitVal_135_);
return v_toUnitVal_135_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_mk___boxed(lean_object* v_toUnitVal_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Std_Time_Minute_Offset_mk(v_toUnitVal_136_);
lean_dec(v_toUnitVal_136_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_toUnitVal(lean_object* v_self_138_){
_start:
{
lean_inc(v_self_138_);
return v_self_138_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_toUnitVal___boxed(lean_object* v_self_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Std_Time_Minute_Offset_toUnitVal(v_self_139_);
lean_dec(v_self_139_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_val(lean_object* v_offset_142_){
_start:
{
lean_inc(v_offset_142_);
return v_offset_142_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_val___boxed(lean_object* v_offset_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Std_Time_Minute_Offset_val(v_offset_143_);
lean_dec(v_offset_143_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_instReprOffset___lam__0(lean_object* v_offset_145_, lean_object* v_prec_146_){
_start:
{
lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_147_ = lean_obj_once(&l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Minute_instReprOrdinal___lam__0___closed__0);
v___x_148_ = lean_int_dec_lt(v_offset_145_, v___x_147_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = l_Int_repr(v_offset_145_);
v___x_150_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
return v___x_150_;
}
else
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_151_ = l_Int_repr(v_offset_145_);
v___x_152_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
v___x_153_ = l_Repr_addAppParen(v___x_152_, v_prec_146_);
return v___x_153_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_instReprOffset___lam__0___boxed(lean_object* v_offset_154_, lean_object* v_prec_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Std_Time_Minute_instReprOffset___lam__0(v_offset_154_, v_prec_155_);
lean_dec(v_prec_155_);
lean_dec(v_offset_154_);
return v_res_156_;
}
}
static lean_object* _init_l_Std_Time_Minute_instInhabitedOffset___closed__0(void){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_161_;
}
}
static lean_object* _init_l_Std_Time_Minute_instInhabitedOffset(void){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lean_obj_once(&l_Std_Time_Minute_instInhabitedOffset___closed__0, &l_Std_Time_Minute_instInhabitedOffset___closed__0_once, _init_l_Std_Time_Minute_instInhabitedOffset___closed__0);
return v___x_162_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Minute_instDecidableEqOffset(lean_object* v_x_163_, lean_object* v_y_164_){
_start:
{
uint8_t v___x_165_; 
v___x_165_ = lean_int_dec_eq(v_x_163_, v_y_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_instDecidableEqOffset___boxed(lean_object* v_x_166_, lean_object* v_y_167_){
_start:
{
uint8_t v_res_168_; lean_object* v_r_169_; 
v_res_168_ = l_Std_Time_Minute_instDecidableEqOffset(v_x_166_, v_y_167_);
lean_dec(v_y_167_);
lean_dec(v_x_166_);
v_r_169_ = lean_box(v_res_168_);
return v_r_169_;
}
}
static lean_object* _init_l_Std_Time_Minute_instLEOffset(void){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lean_box(0);
return v___x_176_;
}
}
static lean_object* _init_l_Std_Time_Minute_instLTOffset(void){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = lean_box(0);
return v___x_177_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Minute_instOrdOffset___lam__0(lean_object* v_x_178_, lean_object* v_y_179_){
_start:
{
uint8_t v___x_180_; 
v___x_180_ = lean_int_dec_lt(v_x_178_, v_y_179_);
if (v___x_180_ == 0)
{
uint8_t v___x_181_; 
v___x_181_ = lean_int_dec_eq(v_x_178_, v_y_179_);
if (v___x_181_ == 0)
{
uint8_t v___x_182_; 
v___x_182_ = 2;
return v___x_182_;
}
else
{
uint8_t v___x_183_; 
v___x_183_ = 1;
return v___x_183_;
}
}
else
{
uint8_t v___x_184_; 
v___x_184_ = 0;
return v___x_184_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_instOrdOffset___lam__0___boxed(lean_object* v_x_185_, lean_object* v_y_186_){
_start:
{
uint8_t v_res_187_; lean_object* v_r_188_; 
v_res_187_ = l_Std_Time_Minute_instOrdOffset___lam__0(v_x_185_, v_y_186_);
lean_dec(v_y_186_);
lean_dec(v_x_185_);
v_r_188_ = lean_box(v_res_187_);
return v_r_188_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_instOfNatOffset(lean_object* v_n_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = lean_nat_to_int(v_n_191_);
return v___x_192_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Minute_instDecidableLeOffset(lean_object* v_x_193_, lean_object* v_y_194_){
_start:
{
uint8_t v___x_195_; 
v___x_195_ = lean_int_dec_le(v_x_193_, v_y_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_instDecidableLeOffset___boxed(lean_object* v_x_196_, lean_object* v_y_197_){
_start:
{
uint8_t v_res_198_; lean_object* v_r_199_; 
v_res_198_ = l_Std_Time_Minute_instDecidableLeOffset(v_x_196_, v_y_197_);
lean_dec(v_y_197_);
lean_dec(v_x_196_);
v_r_199_ = lean_box(v_res_198_);
return v_r_199_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Minute_instDecidableLtOffset(lean_object* v_x_200_, lean_object* v_y_201_){
_start:
{
uint8_t v___x_202_; 
v___x_202_ = lean_int_dec_lt(v_x_200_, v_y_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_instDecidableLtOffset___boxed(lean_object* v_x_203_, lean_object* v_y_204_){
_start:
{
uint8_t v_res_205_; lean_object* v_r_206_; 
v_res_205_ = l_Std_Time_Minute_instDecidableLtOffset(v_x_203_, v_y_204_);
lean_dec(v_y_204_);
lean_dec(v_x_203_);
v_r_206_ = lean_box(v_res_205_);
return v_r_206_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_ofInt___redArg(lean_object* v_data_207_){
_start:
{
lean_inc(v_data_207_);
return v_data_207_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_ofInt___redArg___boxed(lean_object* v_data_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Std_Time_Minute_Ordinal_ofInt___redArg(v_data_208_);
lean_dec(v_data_208_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_ofInt(lean_object* v_data_210_, lean_object* v_h_211_){
_start:
{
lean_inc(v_data_210_);
return v_data_210_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_ofInt___boxed(lean_object* v_data_212_, lean_object* v_h_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Std_Time_Minute_Ordinal_ofInt(v_data_212_, v_h_213_);
lean_dec(v_data_212_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_ofNat___redArg(lean_object* v_data_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = lean_nat_to_int(v_data_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_ofNat(lean_object* v_data_217_, lean_object* v_h_218_){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = lean_nat_to_int(v_data_217_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_ofFin(lean_object* v_data_220_){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lean_nat_to_int(v_data_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_toOffset(lean_object* v_ordinal_222_){
_start:
{
lean_inc(v_ordinal_222_);
return v_ordinal_222_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Ordinal_toOffset___boxed(lean_object* v_ordinal_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_Std_Time_Minute_Ordinal_toOffset(v_ordinal_223_);
lean_dec(v_ordinal_223_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_ofNat(lean_object* v_data_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = lean_nat_to_int(v_data_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_ofInt(lean_object* v_data_227_){
_start:
{
lean_inc(v_data_227_);
return v_data_227_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Minute_Offset_ofInt___boxed(lean_object* v_data_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Std_Time_Minute_Offset_ofInt(v_data_228_);
lean_dec(v_data_228_);
return v_res_229_;
}
}
lean_object* runtime_initialize_Std_Time_Time_Unit_Second(uint8_t builtin);
lean_object* runtime_initialize_Init_Transport(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Time_Unit_Minute(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Time_Unit_Second(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_Minute_instLEOrdinal = _init_l_Std_Time_Minute_instLEOrdinal();
lean_mark_persistent(l_Std_Time_Minute_instLEOrdinal);
l_Std_Time_Minute_instLTOrdinal = _init_l_Std_Time_Minute_instLTOrdinal();
lean_mark_persistent(l_Std_Time_Minute_instLTOrdinal);
l_Std_Time_Minute_instInhabitedOrdinal = _init_l_Std_Time_Minute_instInhabitedOrdinal();
lean_mark_persistent(l_Std_Time_Minute_instInhabitedOrdinal);
l_Std_Time_Minute_instInhabitedOffset = _init_l_Std_Time_Minute_instInhabitedOffset();
lean_mark_persistent(l_Std_Time_Minute_instInhabitedOffset);
l_Std_Time_Minute_instLEOffset = _init_l_Std_Time_Minute_instLEOffset();
lean_mark_persistent(l_Std_Time_Minute_instLEOffset);
l_Std_Time_Minute_instLTOffset = _init_l_Std_Time_Minute_instLTOffset();
lean_mark_persistent(l_Std_Time_Minute_instLTOffset);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Time_Unit_Minute(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Time_Unit_Second(uint8_t builtin);
lean_object* initialize_Init_Transport(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Time_Unit_Minute(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Time_Unit_Second(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Time_Unit_Minute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Time_Unit_Minute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Time_Unit_Minute(builtin);
}
#ifdef __cplusplus
}
#endif
