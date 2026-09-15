// Lean compiler output
// Module: Std.Time.Time.Unit.Nanosecond
// Imports: public import Std.Time.Internal public import Init.Transport
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
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_neg___boxed(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
lean_object* l_Int_repr___boxed(lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toBounded___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_instReprOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instReprOrdinal___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instReprOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instReprOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instReprOrdinal = (const lean_object*)&l_Std_Time_Nanosecond_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLEOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLTOrdinal;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLEOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLEOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLTOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLTOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instOrdOrdinal___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOrdOrdinal___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instOrdOrdinal___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instOrdOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instOrdOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instOrdOrdinal = (const lean_object*)&l_Std_Time_Nanosecond_instOrdOrdinal___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_val___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOrdinal(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOrdinal___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instInhabitedOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_toUnitVal(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_toUnitVal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_val___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOffset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOffset___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_instReprOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instReprOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instReprOffset___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instReprOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instReprOffset = (const lean_object*)&l_Std_Time_Nanosecond_instReprOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Nanosecond_instToStringOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_repr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instToStringOffset___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instToStringOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instToStringOffset = (const lean_object*)&l_Std_Time_Nanosecond_instToStringOffset___closed__0_value;
static lean_once_cell_t l_Std_Time_Nanosecond_instInhabitedOffset___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Nanosecond_instInhabitedOffset___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instInhabitedOffset;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqOffset___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_instAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instAddOffset___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instAddOffset = (const lean_object*)&l_Std_Time_Nanosecond_instAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Nanosecond_instSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instSubOffset___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instSubOffset = (const lean_object*)&l_Std_Time_Nanosecond_instSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Nanosecond_instNegOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_neg___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instNegOffset___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instNegOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instNegOffset = (const lean_object*)&l_Std_Time_Nanosecond_instNegOffset___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLEOffset;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLTOffset;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instOrdOffset = (const lean_object*)&l_Std_Time_Nanosecond_instOrdOrdinal___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOffset(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLeOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLeOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLtOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLtOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofInt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toBounded___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instReprSpan = (const lean_object*)&l_Std_Time_Nanosecond_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqSpan(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqSpan___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLESpan;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLTSpan;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLESpan(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLESpan___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLTSpan(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLTSpan___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instOrdSpan = (const lean_object*)&l_Std_Time_Nanosecond_instOrdOrdinal___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_val___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instInhabitedSpan;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toOffset(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toOffset___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00Std_Time_Nanosecond_Span_toOffset_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Nanosecond_Span_toOffset_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_toBounded___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_Ordinal_instReprOfDay = (const lean_object*)&l_Std_Time_Nanosecond_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instLEOfDay;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instLTOfDay;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLEOfDay(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLEOfDay___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLTOfDay(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLTOfDay___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_Ordinal_instOrdOfDay = (const lean_object*)&l_Std_Time_Nanosecond_instOrdOrdinal___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_val___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instInhabitedOfDay;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofNat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofFin(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toOffset(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toOffset___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_mk(lean_object* v_toBounded_1_){
_start:
{
lean_inc(v_toBounded_1_);
return v_toBounded_1_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_mk___boxed(lean_object* v_toBounded_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l_Std_Time_Nanosecond_Ordinal_mk(v_toBounded_2_);
lean_dec(v_toBounded_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toBounded(lean_object* v_self_4_){
_start:
{
lean_inc(v_self_4_);
return v_self_4_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toBounded___boxed(lean_object* v_self_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Std_Time_Nanosecond_Ordinal_toBounded(v_self_5_);
lean_dec(v_self_5_);
return v_res_6_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_unsigned_to_nat(0u);
v___x_8_ = lean_nat_to_int(v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0(lean_object* v_x_9_, lean_object* v_prec_10_){
_start:
{
lean_object* v___x_11_; uint8_t v___x_12_; 
v___x_11_ = lean_obj_once(&l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0);
v___x_12_ = lean_int_dec_lt(v_x_9_, v___x_11_);
if (v___x_12_ == 0)
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = l_Int_repr(v_x_9_);
v___x_14_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
return v___x_14_;
}
else
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_15_ = l_Int_repr(v_x_9_);
v___x_16_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
v___x_17_ = l_Repr_addAppParen(v___x_16_, v_prec_10_);
return v___x_17_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0___boxed(lean_object* v_x_18_, lean_object* v_prec_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Std_Time_Nanosecond_instReprOrdinal___lam__0(v_x_18_, v_prec_19_);
lean_dec(v_prec_19_);
lean_dec(v_x_18_);
return v_res_20_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqOrdinal(lean_object* v_a_23_, lean_object* v_b_24_){
_start:
{
uint8_t v___x_25_; 
v___x_25_ = lean_int_dec_eq(v_a_23_, v_b_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqOrdinal___boxed(lean_object* v_a_26_, lean_object* v_b_27_){
_start:
{
uint8_t v_res_28_; lean_object* v_r_29_; 
v_res_28_ = l_Std_Time_Nanosecond_instDecidableEqOrdinal(v_a_26_, v_b_27_);
lean_dec(v_b_27_);
lean_dec(v_a_26_);
v_r_29_ = lean_box(v_res_28_);
return v_r_29_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLEOrdinal(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_box(0);
return v___x_30_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLTOrdinal(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_box(0);
return v___x_31_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLEOrdinal(lean_object* v_a_32_, lean_object* v_b_33_){
_start:
{
uint8_t v___x_34_; 
v___x_34_ = lean_int_dec_le(v_a_32_, v_b_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLEOrdinal___boxed(lean_object* v_a_35_, lean_object* v_b_36_){
_start:
{
uint8_t v_res_37_; lean_object* v_r_38_; 
v_res_37_ = l_Std_Time_Nanosecond_instDecidableLEOrdinal(v_a_35_, v_b_36_);
lean_dec(v_b_36_);
lean_dec(v_a_35_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLTOrdinal(lean_object* v_a_39_, lean_object* v_b_40_){
_start:
{
uint8_t v___x_41_; 
v___x_41_ = lean_int_dec_lt(v_a_39_, v_b_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLTOrdinal___boxed(lean_object* v_a_42_, lean_object* v_b_43_){
_start:
{
uint8_t v_res_44_; lean_object* v_r_45_; 
v_res_44_ = l_Std_Time_Nanosecond_instDecidableLTOrdinal(v_a_42_, v_b_43_);
lean_dec(v_b_43_);
lean_dec(v_a_42_);
v_r_45_ = lean_box(v_res_44_);
return v_r_45_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instOrdOrdinal___lam__0(lean_object* v_x_46_, lean_object* v_y_47_){
_start:
{
uint8_t v___x_48_; 
v___x_48_ = lean_int_dec_lt(v_x_46_, v_y_47_);
if (v___x_48_ == 0)
{
uint8_t v___x_49_; 
v___x_49_ = lean_int_dec_eq(v_x_46_, v_y_47_);
if (v___x_49_ == 0)
{
uint8_t v___x_50_; 
v___x_50_ = 2;
return v___x_50_;
}
else
{
uint8_t v___x_51_; 
v___x_51_ = 1;
return v___x_51_;
}
}
else
{
uint8_t v___x_52_; 
v___x_52_ = 0;
return v___x_52_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOrdOrdinal___lam__0___boxed(lean_object* v_x_53_, lean_object* v_y_54_){
_start:
{
uint8_t v_res_55_; lean_object* v_r_56_; 
v_res_55_ = l_Std_Time_Nanosecond_instOrdOrdinal___lam__0(v_x_53_, v_y_54_);
lean_dec(v_y_54_);
lean_dec(v_x_53_);
v_r_56_ = lean_box(v_res_55_);
return v_r_56_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_val(lean_object* v_ordinal_59_){
_start:
{
lean_inc(v_ordinal_59_);
return v_ordinal_59_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_val___boxed(lean_object* v_ordinal_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Std_Time_Nanosecond_Ordinal_val(v_ordinal_60_);
lean_dec(v_ordinal_60_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOrdinal(lean_object* v_n_62_){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = lean_unsigned_to_nat(1000000000u);
v___x_64_ = lean_nat_mod(v_n_62_, v___x_63_);
v___x_65_ = lean_nat_to_int(v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOrdinal___boxed(lean_object* v_n_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Std_Time_Nanosecond_instOfNatOrdinal(v_n_66_);
lean_dec(v_n_66_);
return v_res_67_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = lean_unsigned_to_nat(1000000000u);
v___x_69_ = lean_unsigned_to_nat(0u);
v___x_70_ = lean_nat_mod(v___x_69_, v___x_68_);
return v___x_70_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_obj_once(&l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0, &l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0);
v___x_72_ = lean_nat_to_int(v___x_71_);
return v___x_72_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lean_obj_once(&l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1, &l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_mk(lean_object* v_toUnitVal_74_){
_start:
{
lean_inc(v_toUnitVal_74_);
return v_toUnitVal_74_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_mk___boxed(lean_object* v_toUnitVal_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Std_Time_Nanosecond_Offset_mk(v_toUnitVal_75_);
lean_dec(v_toUnitVal_75_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_toUnitVal(lean_object* v_self_77_){
_start:
{
lean_inc(v_self_77_);
return v_self_77_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_toUnitVal___boxed(lean_object* v_self_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l_Std_Time_Nanosecond_Offset_toUnitVal(v_self_78_);
lean_dec(v_self_78_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_val(lean_object* v_offset_80_){
_start:
{
lean_inc(v_offset_80_);
return v_offset_80_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_val___boxed(lean_object* v_offset_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Std_Time_Nanosecond_Offset_val(v_offset_81_);
lean_dec(v_offset_81_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOffset___lam__0(lean_object* v_offset_83_, lean_object* v_prec_84_){
_start:
{
lean_object* v___x_85_; uint8_t v___x_86_; 
v___x_85_ = lean_obj_once(&l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0);
v___x_86_ = lean_int_dec_lt(v_offset_83_, v___x_85_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = l_Int_repr(v_offset_83_);
v___x_88_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
return v___x_88_;
}
else
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_89_ = l_Int_repr(v_offset_83_);
v___x_90_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
v___x_91_ = l_Repr_addAppParen(v___x_90_, v_prec_84_);
return v___x_91_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOffset___lam__0___boxed(lean_object* v_offset_92_, lean_object* v_prec_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Std_Time_Nanosecond_instReprOffset___lam__0(v_offset_92_, v_prec_93_);
lean_dec(v_prec_93_);
lean_dec(v_offset_92_);
return v_res_94_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedOffset___closed__0(void){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_99_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedOffset(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Std_Time_Nanosecond_instInhabitedOffset___closed__0, &l_Std_Time_Nanosecond_instInhabitedOffset___closed__0_once, _init_l_Std_Time_Nanosecond_instInhabitedOffset___closed__0);
return v___x_100_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqOffset(lean_object* v_x_101_, lean_object* v_y_102_){
_start:
{
uint8_t v___x_103_; 
v___x_103_ = lean_int_dec_eq(v_x_101_, v_y_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqOffset___boxed(lean_object* v_x_104_, lean_object* v_y_105_){
_start:
{
uint8_t v_res_106_; lean_object* v_r_107_; 
v_res_106_ = l_Std_Time_Nanosecond_instDecidableEqOffset(v_x_104_, v_y_105_);
lean_dec(v_y_105_);
lean_dec(v_x_104_);
v_r_107_ = lean_box(v_res_106_);
return v_r_107_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLEOffset(void){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = lean_box(0);
return v___x_114_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLTOffset(void){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lean_box(0);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOffset(lean_object* v_n_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_nat_to_int(v_n_117_);
return v___x_118_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLeOffset(lean_object* v_x_119_, lean_object* v_y_120_){
_start:
{
uint8_t v___x_121_; 
v___x_121_ = lean_int_dec_le(v_x_119_, v_y_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLeOffset___boxed(lean_object* v_x_122_, lean_object* v_y_123_){
_start:
{
uint8_t v_res_124_; lean_object* v_r_125_; 
v_res_124_ = l_Std_Time_Nanosecond_instDecidableLeOffset(v_x_122_, v_y_123_);
lean_dec(v_y_123_);
lean_dec(v_x_122_);
v_r_125_ = lean_box(v_res_124_);
return v_r_125_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLtOffset(lean_object* v_x_126_, lean_object* v_y_127_){
_start:
{
uint8_t v___x_128_; 
v___x_128_ = lean_int_dec_lt(v_x_126_, v_y_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLtOffset___boxed(lean_object* v_x_129_, lean_object* v_y_130_){
_start:
{
uint8_t v_res_131_; lean_object* v_r_132_; 
v_res_131_ = l_Std_Time_Nanosecond_instDecidableLtOffset(v_x_129_, v_y_130_);
lean_dec(v_y_130_);
lean_dec(v_x_129_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofNat(lean_object* v_data_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = lean_nat_to_int(v_data_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofInt(lean_object* v_data_135_){
_start:
{
lean_inc(v_data_135_);
return v_data_135_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofInt___boxed(lean_object* v_data_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Std_Time_Nanosecond_Offset_ofInt(v_data_136_);
lean_dec(v_data_136_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_mk(lean_object* v_toBounded_138_){
_start:
{
lean_inc(v_toBounded_138_);
return v_toBounded_138_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_mk___boxed(lean_object* v_toBounded_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Std_Time_Nanosecond_Span_mk(v_toBounded_139_);
lean_dec(v_toBounded_139_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toBounded(lean_object* v_self_141_){
_start:
{
lean_inc(v_self_141_);
return v_self_141_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toBounded___boxed(lean_object* v_self_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_Std_Time_Nanosecond_Span_toBounded(v_self_142_);
lean_dec(v_self_142_);
return v_res_143_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqSpan(lean_object* v_a_145_, lean_object* v_b_146_){
_start:
{
uint8_t v___x_147_; 
v___x_147_ = lean_int_dec_eq(v_a_145_, v_b_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqSpan___boxed(lean_object* v_a_148_, lean_object* v_b_149_){
_start:
{
uint8_t v_res_150_; lean_object* v_r_151_; 
v_res_150_ = l_Std_Time_Nanosecond_instDecidableEqSpan(v_a_148_, v_b_149_);
lean_dec(v_b_149_);
lean_dec(v_a_148_);
v_r_151_ = lean_box(v_res_150_);
return v_r_151_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLESpan(void){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lean_box(0);
return v___x_152_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLTSpan(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_box(0);
return v___x_153_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLESpan(lean_object* v_a_154_, lean_object* v_b_155_){
_start:
{
uint8_t v___x_156_; 
v___x_156_ = lean_int_dec_le(v_a_154_, v_b_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLESpan___boxed(lean_object* v_a_157_, lean_object* v_b_158_){
_start:
{
uint8_t v_res_159_; lean_object* v_r_160_; 
v_res_159_ = l_Std_Time_Nanosecond_instDecidableLESpan(v_a_157_, v_b_158_);
lean_dec(v_b_158_);
lean_dec(v_a_157_);
v_r_160_ = lean_box(v_res_159_);
return v_r_160_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLTSpan(lean_object* v_a_161_, lean_object* v_b_162_){
_start:
{
uint8_t v___x_163_; 
v___x_163_ = lean_int_dec_lt(v_a_161_, v_b_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLTSpan___boxed(lean_object* v_a_164_, lean_object* v_b_165_){
_start:
{
uint8_t v_res_166_; lean_object* v_r_167_; 
v_res_166_ = l_Std_Time_Nanosecond_instDecidableLTSpan(v_a_164_, v_b_165_);
lean_dec(v_b_165_);
lean_dec(v_a_164_);
v_r_167_ = lean_box(v_res_166_);
return v_r_167_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_val(lean_object* v_span_169_){
_start:
{
lean_inc(v_span_169_);
return v_span_169_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_val___boxed(lean_object* v_span_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Std_Time_Nanosecond_Span_val(v_span_170_);
lean_dec(v_span_170_);
return v_res_171_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedSpan(void){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = lean_obj_once(&l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toOffset(lean_object* v_span_173_){
_start:
{
lean_inc(v_span_173_);
return v_span_173_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toOffset___boxed(lean_object* v_span_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Std_Time_Nanosecond_Span_toOffset(v_span_174_);
lean_dec(v_span_174_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00Std_Time_Nanosecond_Span_toOffset_spec__0_spec__0(lean_object* v_a_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = lean_nat_to_int(v_a_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Nanosecond_Span_toOffset_spec__0(lean_object* v_a_178_){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = lean_nat_to_int(v_a_178_);
v___x_180_ = l_Rat_ofInt(v___x_179_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_mk(lean_object* v_toBounded_181_){
_start:
{
lean_inc(v_toBounded_181_);
return v_toBounded_181_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_mk___boxed(lean_object* v_toBounded_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Std_Time_Nanosecond_Ordinal_OfDay_mk(v_toBounded_182_);
lean_dec(v_toBounded_182_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_toBounded(lean_object* v_self_184_){
_start:
{
lean_inc(v_self_184_);
return v_self_184_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_toBounded___boxed(lean_object* v_self_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Std_Time_Nanosecond_Ordinal_OfDay_toBounded(v_self_185_);
lean_dec(v_self_185_);
return v_res_186_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay(lean_object* v_a_188_, lean_object* v_b_189_){
_start:
{
uint8_t v___x_190_; 
v___x_190_ = lean_int_dec_eq(v_a_188_, v_b_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay___boxed(lean_object* v_a_191_, lean_object* v_b_192_){
_start:
{
uint8_t v_res_193_; lean_object* v_r_194_; 
v_res_193_ = l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay(v_a_191_, v_b_192_);
lean_dec(v_b_192_);
lean_dec(v_a_191_);
v_r_194_ = lean_box(v_res_193_);
return v_r_194_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_Ordinal_instLEOfDay(void){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = lean_box(0);
return v___x_195_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_Ordinal_instLTOfDay(void){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = lean_box(0);
return v___x_196_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLEOfDay(lean_object* v_a_197_, lean_object* v_b_198_){
_start:
{
uint8_t v___x_199_; 
v___x_199_ = lean_int_dec_le(v_a_197_, v_b_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLEOfDay___boxed(lean_object* v_a_200_, lean_object* v_b_201_){
_start:
{
uint8_t v_res_202_; lean_object* v_r_203_; 
v_res_202_ = l_Std_Time_Nanosecond_Ordinal_instDecidableLEOfDay(v_a_200_, v_b_201_);
lean_dec(v_b_201_);
lean_dec(v_a_200_);
v_r_203_ = lean_box(v_res_202_);
return v_r_203_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLTOfDay(lean_object* v_a_204_, lean_object* v_b_205_){
_start:
{
uint8_t v___x_206_; 
v___x_206_ = lean_int_dec_lt(v_a_204_, v_b_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLTOfDay___boxed(lean_object* v_a_207_, lean_object* v_b_208_){
_start:
{
uint8_t v_res_209_; lean_object* v_r_210_; 
v_res_209_ = l_Std_Time_Nanosecond_Ordinal_instDecidableLTOfDay(v_a_207_, v_b_208_);
lean_dec(v_b_208_);
lean_dec(v_a_207_);
v_r_210_ = lean_box(v_res_209_);
return v_r_210_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_val(lean_object* v_ordinal_212_){
_start:
{
lean_inc(v_ordinal_212_);
return v_ordinal_212_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_val___boxed(lean_object* v_ordinal_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Std_Time_Nanosecond_Ordinal_OfDay_val(v_ordinal_213_);
lean_dec(v_ordinal_213_);
return v_res_214_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_Ordinal_instInhabitedOfDay(void){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = lean_obj_once(&l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___redArg(lean_object* v_data_216_){
_start:
{
lean_inc(v_data_216_);
return v_data_216_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___redArg___boxed(lean_object* v_data_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Std_Time_Nanosecond_Ordinal_ofInt___redArg(v_data_217_);
lean_dec(v_data_217_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt(lean_object* v_data_219_, lean_object* v_h_220_){
_start:
{
lean_inc(v_data_219_);
return v_data_219_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___boxed(lean_object* v_data_221_, lean_object* v_h_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Std_Time_Nanosecond_Ordinal_ofInt(v_data_221_, v_h_222_);
lean_dec(v_data_221_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofNat___redArg(lean_object* v_data_224_){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = lean_nat_to_int(v_data_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofNat(lean_object* v_data_226_, lean_object* v_h_227_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = lean_nat_to_int(v_data_226_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofFin(lean_object* v_data_229_){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = lean_nat_to_int(v_data_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toOffset(lean_object* v_ordinal_231_){
_start:
{
lean_inc(v_ordinal_231_);
return v_ordinal_231_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toOffset___boxed(lean_object* v_ordinal_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Std_Time_Nanosecond_Ordinal_toOffset(v_ordinal_232_);
lean_dec(v_ordinal_232_);
return v_res_233_;
}
}
lean_object* runtime_initialize_Std_Time_Internal(uint8_t builtin);
lean_object* runtime_initialize_Init_Transport(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Time_Unit_Nanosecond(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_Nanosecond_instLEOrdinal = _init_l_Std_Time_Nanosecond_instLEOrdinal();
lean_mark_persistent(l_Std_Time_Nanosecond_instLEOrdinal);
l_Std_Time_Nanosecond_instLTOrdinal = _init_l_Std_Time_Nanosecond_instLTOrdinal();
lean_mark_persistent(l_Std_Time_Nanosecond_instLTOrdinal);
l_Std_Time_Nanosecond_instInhabitedOrdinal = _init_l_Std_Time_Nanosecond_instInhabitedOrdinal();
lean_mark_persistent(l_Std_Time_Nanosecond_instInhabitedOrdinal);
l_Std_Time_Nanosecond_instInhabitedOffset = _init_l_Std_Time_Nanosecond_instInhabitedOffset();
lean_mark_persistent(l_Std_Time_Nanosecond_instInhabitedOffset);
l_Std_Time_Nanosecond_instLEOffset = _init_l_Std_Time_Nanosecond_instLEOffset();
lean_mark_persistent(l_Std_Time_Nanosecond_instLEOffset);
l_Std_Time_Nanosecond_instLTOffset = _init_l_Std_Time_Nanosecond_instLTOffset();
lean_mark_persistent(l_Std_Time_Nanosecond_instLTOffset);
l_Std_Time_Nanosecond_instLESpan = _init_l_Std_Time_Nanosecond_instLESpan();
lean_mark_persistent(l_Std_Time_Nanosecond_instLESpan);
l_Std_Time_Nanosecond_instLTSpan = _init_l_Std_Time_Nanosecond_instLTSpan();
lean_mark_persistent(l_Std_Time_Nanosecond_instLTSpan);
l_Std_Time_Nanosecond_instInhabitedSpan = _init_l_Std_Time_Nanosecond_instInhabitedSpan();
lean_mark_persistent(l_Std_Time_Nanosecond_instInhabitedSpan);
l_Std_Time_Nanosecond_Ordinal_instLEOfDay = _init_l_Std_Time_Nanosecond_Ordinal_instLEOfDay();
lean_mark_persistent(l_Std_Time_Nanosecond_Ordinal_instLEOfDay);
l_Std_Time_Nanosecond_Ordinal_instLTOfDay = _init_l_Std_Time_Nanosecond_Ordinal_instLTOfDay();
lean_mark_persistent(l_Std_Time_Nanosecond_Ordinal_instLTOfDay);
l_Std_Time_Nanosecond_Ordinal_instInhabitedOfDay = _init_l_Std_Time_Nanosecond_Ordinal_instInhabitedOfDay();
lean_mark_persistent(l_Std_Time_Nanosecond_Ordinal_instInhabitedOfDay);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Time_Unit_Nanosecond(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Internal(uint8_t builtin);
lean_object* initialize_Init_Transport(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Time_Unit_Nanosecond(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Time_Unit_Nanosecond(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Time_Unit_Nanosecond(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Time_Unit_Nanosecond(builtin);
}
#ifdef __cplusplus
}
#endif
