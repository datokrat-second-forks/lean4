// Lean compiler output
// Module: Std.Time.Time.Unit.Second
// Imports: public import Std.Time.Time.Unit.Nanosecond public import Init.Transport
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
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_neg___boxed(lean_object*);
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
lean_object* l_Int_repr___boxed(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_mk(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_mk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toBounded___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toBounded___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toBounded(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toBounded___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instLEOrdinal___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Second_instLEOrdinal___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instLEOrdinal(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Second_instLEOrdinal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instLTOrdinal___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Second_instLTOrdinal___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instLTOrdinal(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Second_instLTOrdinal___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Second_instReprOrdinal___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Second_instReprOrdinal___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Second_instReprOrdinal___redArg___closed__0 = (const lean_object*)&l_Std_Time_Second_instReprOrdinal___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___boxed(lean_object*);
static const lean_closure_object l_Std_Time_Second_instToStringOrdinal___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_repr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Second_instToStringOrdinal___redArg___closed__0 = (const lean_object*)&l_Std_Time_Second_instToStringOrdinal___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLEOrdinal___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLEOrdinal___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLEOrdinal(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLEOrdinal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLTOrdinal___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLTOrdinal___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLTOrdinal(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLTOrdinal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableEqOrdinal___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableEqOrdinal___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableEqOrdinal(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableEqOrdinal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Second_instOrdOrdinal___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Second_instOrdOrdinal___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Second_instOrdOrdinal___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Second_instOrdOrdinal___redArg___closed__0 = (const lean_object*)&l_Std_Time_Second_instOrdOrdinal___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_val___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_val___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_val(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_val___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Second_instOfNatOrdinal___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Second_instOfNatOrdinal___redArg___closed__0;
static lean_once_cell_t l_Std_Time_Second_instOfNatOrdinal___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Second_instOfNatOrdinal___redArg___closed__1;
static lean_once_cell_t l_Std_Time_Second_instOfNatOrdinal___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Second_instOfNatOrdinal___redArg___closed__2;
static lean_once_cell_t l_Std_Time_Second_instOfNatOrdinal___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Second_instOfNatOrdinal___redArg___closed__3;
static lean_once_cell_t l_Std_Time_Second_instOfNatOrdinal___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Second_instOfNatOrdinal___redArg___closed__4;
LEAN_EXPORT lean_object* l_Std_Time_Second_instOfNatOrdinal___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instOfNatOrdinal(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instOfNatOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_toUnitVal(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_toUnitVal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_val___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOffset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOffset___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Second_instReprOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Second_instReprOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Second_instReprOffset___closed__0 = (const lean_object*)&l_Std_Time_Second_instReprOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Second_instReprOffset = (const lean_object*)&l_Std_Time_Second_instReprOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Second_instToStringOffset = (const lean_object*)&l_Std_Time_Second_instToStringOrdinal___redArg___closed__0_value;
static lean_once_cell_t l_Std_Time_Second_instInhabitedOffset___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Second_instInhabitedOffset___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Second_instInhabitedOffset;
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableEqOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableEqOffset___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Second_instAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Second_instAddOffset___closed__0 = (const lean_object*)&l_Std_Time_Second_instAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Second_instAddOffset = (const lean_object*)&l_Std_Time_Second_instAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Second_instSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Second_instSubOffset___closed__0 = (const lean_object*)&l_Std_Time_Second_instSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Second_instSubOffset = (const lean_object*)&l_Std_Time_Second_instSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Second_instNegOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_neg___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Second_instNegOffset___closed__0 = (const lean_object*)&l_Std_Time_Second_instNegOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Second_instNegOffset = (const lean_object*)&l_Std_Time_Second_instNegOffset___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Second_instLEOffset;
LEAN_EXPORT lean_object* l_Std_Time_Second_instLTOffset;
LEAN_EXPORT const lean_object* l_Std_Time_Second_instOrdOffset = (const lean_object*)&l_Std_Time_Second_instOrdOrdinal___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Second_instOfNatOffset(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLeOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLeOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLtOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLtOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_ofInt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofInt___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofInt___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofInt(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofInt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofNat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofNat(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofNat___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofFin___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofFin(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofFin___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toOffset___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toOffset___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toOffset(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_mk___redArg(lean_object* v_toBounded_1_){
_start:
{
lean_inc(v_toBounded_1_);
return v_toBounded_1_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_mk___redArg___boxed(lean_object* v_toBounded_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l_Std_Time_Second_Ordinal_mk___redArg(v_toBounded_2_);
lean_dec(v_toBounded_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_mk(uint8_t v_leap_4_, lean_object* v_toBounded_5_){
_start:
{
lean_inc(v_toBounded_5_);
return v_toBounded_5_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_mk___boxed(lean_object* v_leap_6_, lean_object* v_toBounded_7_){
_start:
{
uint8_t v_leap_boxed_8_; lean_object* v_res_9_; 
v_leap_boxed_8_ = lean_unbox(v_leap_6_);
v_res_9_ = l_Std_Time_Second_Ordinal_mk(v_leap_boxed_8_, v_toBounded_7_);
lean_dec(v_toBounded_7_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toBounded___redArg(lean_object* v_self_10_){
_start:
{
lean_inc(v_self_10_);
return v_self_10_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toBounded___redArg___boxed(lean_object* v_self_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Std_Time_Second_Ordinal_toBounded___redArg(v_self_11_);
lean_dec(v_self_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toBounded(uint8_t v_leap_13_, lean_object* v_self_14_){
_start:
{
lean_inc(v_self_14_);
return v_self_14_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toBounded___boxed(lean_object* v_leap_15_, lean_object* v_self_16_){
_start:
{
uint8_t v_leap_boxed_17_; lean_object* v_res_18_; 
v_leap_boxed_17_ = lean_unbox(v_leap_15_);
v_res_18_ = l_Std_Time_Second_Ordinal_toBounded(v_leap_boxed_17_, v_self_16_);
lean_dec(v_self_16_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLEOrdinal___redArg(){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_box(0);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLEOrdinal___redArg___boxed(lean_object* v___dummy_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Std_Time_Second_instLEOrdinal___redArg();
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLEOrdinal(uint8_t v_leap_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_box(0);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLEOrdinal___boxed(lean_object* v_leap_25_){
_start:
{
uint8_t v_leap_boxed_26_; lean_object* v_res_27_; 
v_leap_boxed_26_ = lean_unbox(v_leap_25_);
v_res_27_ = l_Std_Time_Second_instLEOrdinal(v_leap_boxed_26_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLTOrdinal___redArg(){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_box(0);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLTOrdinal___redArg___boxed(lean_object* v___dummy_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Std_Time_Second_instLTOrdinal___redArg();
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLTOrdinal(uint8_t v_leap_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_box(0);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLTOrdinal___boxed(lean_object* v_leap_34_){
_start:
{
uint8_t v_leap_boxed_35_; lean_object* v_res_36_; 
v_leap_boxed_35_ = lean_unbox(v_leap_34_);
v_res_36_ = l_Std_Time_Second_instLTOrdinal(v_leap_boxed_35_);
return v_res_36_;
}
}
static lean_object* _init_l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_unsigned_to_nat(0u);
v___x_38_ = lean_nat_to_int(v___x_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg___lam__0(lean_object* v_x_39_, lean_object* v_prec_40_){
_start:
{
lean_object* v___x_41_; uint8_t v___x_42_; 
v___x_41_ = lean_obj_once(&l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0, &l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0_once, _init_l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0);
v___x_42_ = lean_int_dec_lt(v_x_39_, v___x_41_);
if (v___x_42_ == 0)
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = l_Int_repr(v_x_39_);
v___x_44_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
return v___x_44_;
}
else
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_45_ = l_Int_repr(v_x_39_);
v___x_46_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
v___x_47_ = l_Repr_addAppParen(v___x_46_, v_prec_40_);
return v___x_47_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg___lam__0___boxed(lean_object* v_x_48_, lean_object* v_prec_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Std_Time_Second_instReprOrdinal___redArg___lam__0(v_x_48_, v_prec_49_);
lean_dec(v_prec_49_);
lean_dec(v_x_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg(){
_start:
{
lean_object* v___f_53_; 
v___f_53_ = ((lean_object*)(l_Std_Time_Second_instReprOrdinal___redArg___closed__0));
return v___f_53_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg___boxed(lean_object* v___dummy_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Std_Time_Second_instReprOrdinal___redArg();
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal(uint8_t v_leap_56_){
_start:
{
lean_object* v___f_57_; 
v___f_57_ = ((lean_object*)(l_Std_Time_Second_instReprOrdinal___redArg___closed__0));
return v___f_57_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___boxed(lean_object* v_leap_58_){
_start:
{
uint8_t v_leap_boxed_59_; lean_object* v_res_60_; 
v_leap_boxed_59_ = lean_unbox(v_leap_58_);
v_res_60_ = l_Std_Time_Second_instReprOrdinal(v_leap_boxed_59_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal___redArg(){
_start:
{
lean_object* v___f_63_; 
v___f_63_ = ((lean_object*)(l_Std_Time_Second_instToStringOrdinal___redArg___closed__0));
return v___f_63_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal___redArg___boxed(lean_object* v___dummy_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Std_Time_Second_instToStringOrdinal___redArg();
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal(uint8_t v_leap_66_){
_start:
{
lean_object* v___f_67_; 
v___f_67_ = ((lean_object*)(l_Std_Time_Second_instToStringOrdinal___redArg___closed__0));
return v___f_67_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal___boxed(lean_object* v_leap_68_){
_start:
{
uint8_t v_leap_boxed_69_; lean_object* v_res_70_; 
v_leap_boxed_69_ = lean_unbox(v_leap_68_);
v_res_70_ = l_Std_Time_Second_instToStringOrdinal(v_leap_boxed_69_);
return v_res_70_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLEOrdinal___redArg(lean_object* v_a_71_, lean_object* v_b_72_){
_start:
{
uint8_t v___x_73_; 
v___x_73_ = lean_int_dec_le(v_a_71_, v_b_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLEOrdinal___redArg___boxed(lean_object* v_a_74_, lean_object* v_b_75_){
_start:
{
uint8_t v_res_76_; lean_object* v_r_77_; 
v_res_76_ = l_Std_Time_Second_instDecidableLEOrdinal___redArg(v_a_74_, v_b_75_);
lean_dec(v_b_75_);
lean_dec(v_a_74_);
v_r_77_ = lean_box(v_res_76_);
return v_r_77_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLEOrdinal(uint8_t v_leap_78_, lean_object* v_a_79_, lean_object* v_b_80_){
_start:
{
uint8_t v___x_81_; 
v___x_81_ = lean_int_dec_le(v_a_79_, v_b_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLEOrdinal___boxed(lean_object* v_leap_82_, lean_object* v_a_83_, lean_object* v_b_84_){
_start:
{
uint8_t v_leap_boxed_85_; uint8_t v_res_86_; lean_object* v_r_87_; 
v_leap_boxed_85_ = lean_unbox(v_leap_82_);
v_res_86_ = l_Std_Time_Second_instDecidableLEOrdinal(v_leap_boxed_85_, v_a_83_, v_b_84_);
lean_dec(v_b_84_);
lean_dec(v_a_83_);
v_r_87_ = lean_box(v_res_86_);
return v_r_87_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLTOrdinal___redArg(lean_object* v_a_88_, lean_object* v_b_89_){
_start:
{
uint8_t v___x_90_; 
v___x_90_ = lean_int_dec_lt(v_a_88_, v_b_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLTOrdinal___redArg___boxed(lean_object* v_a_91_, lean_object* v_b_92_){
_start:
{
uint8_t v_res_93_; lean_object* v_r_94_; 
v_res_93_ = l_Std_Time_Second_instDecidableLTOrdinal___redArg(v_a_91_, v_b_92_);
lean_dec(v_b_92_);
lean_dec(v_a_91_);
v_r_94_ = lean_box(v_res_93_);
return v_r_94_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLTOrdinal(uint8_t v_leap_95_, lean_object* v_a_96_, lean_object* v_b_97_){
_start:
{
uint8_t v___x_98_; 
v___x_98_ = lean_int_dec_lt(v_a_96_, v_b_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLTOrdinal___boxed(lean_object* v_leap_99_, lean_object* v_a_100_, lean_object* v_b_101_){
_start:
{
uint8_t v_leap_boxed_102_; uint8_t v_res_103_; lean_object* v_r_104_; 
v_leap_boxed_102_ = lean_unbox(v_leap_99_);
v_res_103_ = l_Std_Time_Second_instDecidableLTOrdinal(v_leap_boxed_102_, v_a_100_, v_b_101_);
lean_dec(v_b_101_);
lean_dec(v_a_100_);
v_r_104_ = lean_box(v_res_103_);
return v_r_104_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableEqOrdinal___redArg(lean_object* v_a_105_, lean_object* v_b_106_){
_start:
{
uint8_t v___x_107_; 
v___x_107_ = lean_int_dec_eq(v_a_105_, v_b_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableEqOrdinal___redArg___boxed(lean_object* v_a_108_, lean_object* v_b_109_){
_start:
{
uint8_t v_res_110_; lean_object* v_r_111_; 
v_res_110_ = l_Std_Time_Second_instDecidableEqOrdinal___redArg(v_a_108_, v_b_109_);
lean_dec(v_b_109_);
lean_dec(v_a_108_);
v_r_111_ = lean_box(v_res_110_);
return v_r_111_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableEqOrdinal(uint8_t v_leap_112_, lean_object* v_a_113_, lean_object* v_b_114_){
_start:
{
uint8_t v___x_115_; 
v___x_115_ = lean_int_dec_eq(v_a_113_, v_b_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableEqOrdinal___boxed(lean_object* v_leap_116_, lean_object* v_a_117_, lean_object* v_b_118_){
_start:
{
uint8_t v_leap_boxed_119_; uint8_t v_res_120_; lean_object* v_r_121_; 
v_leap_boxed_119_ = lean_unbox(v_leap_116_);
v_res_120_ = l_Std_Time_Second_instDecidableEqOrdinal(v_leap_boxed_119_, v_a_117_, v_b_118_);
lean_dec(v_b_118_);
lean_dec(v_a_117_);
v_r_121_ = lean_box(v_res_120_);
return v_r_121_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instOrdOrdinal___redArg___lam__0(lean_object* v_x_122_, lean_object* v_y_123_){
_start:
{
uint8_t v___x_124_; 
v___x_124_ = lean_int_dec_lt(v_x_122_, v_y_123_);
if (v___x_124_ == 0)
{
uint8_t v___x_125_; 
v___x_125_ = lean_int_dec_eq(v_x_122_, v_y_123_);
if (v___x_125_ == 0)
{
uint8_t v___x_126_; 
v___x_126_ = 2;
return v___x_126_;
}
else
{
uint8_t v___x_127_; 
v___x_127_ = 1;
return v___x_127_;
}
}
else
{
uint8_t v___x_128_; 
v___x_128_ = 0;
return v___x_128_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal___redArg___lam__0___boxed(lean_object* v_x_129_, lean_object* v_y_130_){
_start:
{
uint8_t v_res_131_; lean_object* v_r_132_; 
v_res_131_ = l_Std_Time_Second_instOrdOrdinal___redArg___lam__0(v_x_129_, v_y_130_);
lean_dec(v_y_130_);
lean_dec(v_x_129_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal___redArg(){
_start:
{
lean_object* v___f_135_; 
v___f_135_ = ((lean_object*)(l_Std_Time_Second_instOrdOrdinal___redArg___closed__0));
return v___f_135_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal___redArg___boxed(lean_object* v___dummy_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Std_Time_Second_instOrdOrdinal___redArg();
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal(uint8_t v_leap_138_){
_start:
{
lean_object* v___f_139_; 
v___f_139_ = ((lean_object*)(l_Std_Time_Second_instOrdOrdinal___redArg___closed__0));
return v___f_139_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal___boxed(lean_object* v_leap_140_){
_start:
{
uint8_t v_leap_boxed_141_; lean_object* v_res_142_; 
v_leap_boxed_141_ = lean_unbox(v_leap_140_);
v_res_142_ = l_Std_Time_Second_instOrdOrdinal(v_leap_boxed_141_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_val___redArg(lean_object* v_ordinal_143_){
_start:
{
lean_inc(v_ordinal_143_);
return v_ordinal_143_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_val___redArg___boxed(lean_object* v_ordinal_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Std_Time_Second_Ordinal_val___redArg(v_ordinal_144_);
lean_dec(v_ordinal_144_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_val(uint8_t v_leap_146_, lean_object* v_ordinal_147_){
_start:
{
lean_inc(v_ordinal_147_);
return v_ordinal_147_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_val___boxed(lean_object* v_leap_148_, lean_object* v_ordinal_149_){
_start:
{
uint8_t v_leap_boxed_150_; lean_object* v_res_151_; 
v_leap_boxed_150_ = lean_unbox(v_leap_148_);
v_res_151_ = l_Std_Time_Second_Ordinal_val(v_leap_boxed_150_, v_ordinal_149_);
lean_dec(v_ordinal_149_);
return v_res_151_;
}
}
static lean_object* _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__0(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = lean_unsigned_to_nat(59u);
v___x_153_ = lean_nat_to_int(v___x_152_);
return v___x_153_;
}
}
static lean_object* _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__1(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = lean_obj_once(&l_Std_Time_Second_instOfNatOrdinal___redArg___closed__0, &l_Std_Time_Second_instOfNatOrdinal___redArg___closed__0_once, _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__0);
v___x_155_ = lean_obj_once(&l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0, &l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0_once, _init_l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0);
v___x_156_ = lean_int_add(v___x_155_, v___x_154_);
return v___x_156_;
}
}
static lean_object* _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__2(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_157_ = lean_obj_once(&l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0, &l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0_once, _init_l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0);
v___x_158_ = lean_obj_once(&l_Std_Time_Second_instOfNatOrdinal___redArg___closed__1, &l_Std_Time_Second_instOfNatOrdinal___redArg___closed__1_once, _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__1);
v___x_159_ = lean_int_sub(v___x_158_, v___x_157_);
return v___x_159_;
}
}
static lean_object* _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__3(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_unsigned_to_nat(1u);
v___x_161_ = lean_nat_to_int(v___x_160_);
return v___x_161_;
}
}
static lean_object* _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__4(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v_range_164_; 
v___x_162_ = lean_obj_once(&l_Std_Time_Second_instOfNatOrdinal___redArg___closed__3, &l_Std_Time_Second_instOfNatOrdinal___redArg___closed__3_once, _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__3);
v___x_163_ = lean_obj_once(&l_Std_Time_Second_instOfNatOrdinal___redArg___closed__2, &l_Std_Time_Second_instOfNatOrdinal___redArg___closed__2_once, _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__2);
v_range_164_ = lean_int_add(v___x_163_, v___x_162_);
return v_range_164_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOfNatOrdinal___redArg(lean_object* v_n_165_){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v_range_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_166_ = lean_obj_once(&l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0, &l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0_once, _init_l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0);
v___x_167_ = lean_nat_to_int(v_n_165_);
v_range_168_ = lean_obj_once(&l_Std_Time_Second_instOfNatOrdinal___redArg___closed__4, &l_Std_Time_Second_instOfNatOrdinal___redArg___closed__4_once, _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__4);
v___x_169_ = lean_int_sub(v___x_167_, v___x_166_);
lean_dec(v___x_167_);
v___x_170_ = lean_int_emod(v___x_169_, v_range_168_);
lean_dec(v___x_169_);
v___x_171_ = lean_int_add(v___x_170_, v_range_168_);
lean_dec(v___x_170_);
v___x_172_ = lean_int_emod(v___x_171_, v_range_168_);
lean_dec(v___x_171_);
v___x_173_ = lean_int_add(v___x_172_, v___x_166_);
lean_dec(v___x_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOfNatOrdinal(uint8_t v_leap_174_, lean_object* v_n_175_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = l_Std_Time_Second_instOfNatOrdinal___redArg(v_n_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOfNatOrdinal___boxed(lean_object* v_leap_177_, lean_object* v_n_178_){
_start:
{
uint8_t v_leap_boxed_179_; lean_object* v_res_180_; 
v_leap_boxed_179_ = lean_unbox(v_leap_177_);
v_res_180_ = l_Std_Time_Second_instOfNatOrdinal(v_leap_boxed_179_, v_n_178_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_mk(lean_object* v_toUnitVal_181_){
_start:
{
lean_inc(v_toUnitVal_181_);
return v_toUnitVal_181_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_mk___boxed(lean_object* v_toUnitVal_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Std_Time_Second_Offset_mk(v_toUnitVal_182_);
lean_dec(v_toUnitVal_182_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_toUnitVal(lean_object* v_self_184_){
_start:
{
lean_inc(v_self_184_);
return v_self_184_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_toUnitVal___boxed(lean_object* v_self_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Std_Time_Second_Offset_toUnitVal(v_self_185_);
lean_dec(v_self_185_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_val(lean_object* v_offset_187_){
_start:
{
lean_inc(v_offset_187_);
return v_offset_187_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_val___boxed(lean_object* v_offset_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Std_Time_Second_Offset_val(v_offset_188_);
lean_dec(v_offset_188_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOffset___lam__0(lean_object* v_offset_190_, lean_object* v_prec_191_){
_start:
{
lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_192_ = lean_obj_once(&l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0, &l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0_once, _init_l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0);
v___x_193_ = lean_int_dec_lt(v_offset_190_, v___x_192_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = l_Int_repr(v_offset_190_);
v___x_195_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
return v___x_195_;
}
else
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_196_ = l_Int_repr(v_offset_190_);
v___x_197_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_197_, 0, v___x_196_);
v___x_198_ = l_Repr_addAppParen(v___x_197_, v_prec_191_);
return v___x_198_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOffset___lam__0___boxed(lean_object* v_offset_199_, lean_object* v_prec_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Std_Time_Second_instReprOffset___lam__0(v_offset_199_, v_prec_200_);
lean_dec(v_prec_200_);
lean_dec(v_offset_199_);
return v_res_201_;
}
}
static lean_object* _init_l_Std_Time_Second_instInhabitedOffset___closed__0(void){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_205_;
}
}
static lean_object* _init_l_Std_Time_Second_instInhabitedOffset(void){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lean_obj_once(&l_Std_Time_Second_instInhabitedOffset___closed__0, &l_Std_Time_Second_instInhabitedOffset___closed__0_once, _init_l_Std_Time_Second_instInhabitedOffset___closed__0);
return v___x_206_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableEqOffset(lean_object* v_x_207_, lean_object* v_y_208_){
_start:
{
uint8_t v___x_209_; 
v___x_209_ = lean_int_dec_eq(v_x_207_, v_y_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableEqOffset___boxed(lean_object* v_x_210_, lean_object* v_y_211_){
_start:
{
uint8_t v_res_212_; lean_object* v_r_213_; 
v_res_212_ = l_Std_Time_Second_instDecidableEqOffset(v_x_210_, v_y_211_);
lean_dec(v_y_211_);
lean_dec(v_x_210_);
v_r_213_ = lean_box(v_res_212_);
return v_r_213_;
}
}
static lean_object* _init_l_Std_Time_Second_instLEOffset(void){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = lean_box(0);
return v___x_220_;
}
}
static lean_object* _init_l_Std_Time_Second_instLTOffset(void){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lean_box(0);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOfNatOffset(lean_object* v_n_223_){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = lean_nat_to_int(v_n_223_);
return v___x_224_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLeOffset(lean_object* v_x_225_, lean_object* v_y_226_){
_start:
{
uint8_t v___x_227_; 
v___x_227_ = lean_int_dec_le(v_x_225_, v_y_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLeOffset___boxed(lean_object* v_x_228_, lean_object* v_y_229_){
_start:
{
uint8_t v_res_230_; lean_object* v_r_231_; 
v_res_230_ = l_Std_Time_Second_instDecidableLeOffset(v_x_228_, v_y_229_);
lean_dec(v_y_229_);
lean_dec(v_x_228_);
v_r_231_ = lean_box(v_res_230_);
return v_r_231_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLtOffset(lean_object* v_x_232_, lean_object* v_y_233_){
_start:
{
uint8_t v___x_234_; 
v___x_234_ = lean_int_dec_lt(v_x_232_, v_y_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLtOffset___boxed(lean_object* v_x_235_, lean_object* v_y_236_){
_start:
{
uint8_t v_res_237_; lean_object* v_r_238_; 
v_res_237_ = l_Std_Time_Second_instDecidableLtOffset(v_x_235_, v_y_236_);
lean_dec(v_y_236_);
lean_dec(v_x_235_);
v_r_238_ = lean_box(v_res_237_);
return v_r_238_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_ofNat(lean_object* v_data_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = lean_nat_to_int(v_data_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_ofInt(lean_object* v_data_241_){
_start:
{
lean_inc(v_data_241_);
return v_data_241_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_ofInt___boxed(lean_object* v_data_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Std_Time_Second_Offset_ofInt(v_data_242_);
lean_dec(v_data_242_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofInt___redArg(lean_object* v_data_244_){
_start:
{
lean_inc(v_data_244_);
return v_data_244_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofInt___redArg___boxed(lean_object* v_data_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Std_Time_Second_Ordinal_ofInt___redArg(v_data_245_);
lean_dec(v_data_245_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofInt(uint8_t v_leap_247_, lean_object* v_data_248_, lean_object* v_h_249_){
_start:
{
lean_inc(v_data_248_);
return v_data_248_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofInt___boxed(lean_object* v_leap_250_, lean_object* v_data_251_, lean_object* v_h_252_){
_start:
{
uint8_t v_leap_boxed_253_; lean_object* v_res_254_; 
v_leap_boxed_253_ = lean_unbox(v_leap_250_);
v_res_254_ = l_Std_Time_Second_Ordinal_ofInt(v_leap_boxed_253_, v_data_251_, v_h_252_);
lean_dec(v_data_251_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofNat___redArg(lean_object* v_data_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = lean_nat_to_int(v_data_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofNat(uint8_t v_leap_257_, lean_object* v_data_258_, lean_object* v_h_259_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = lean_nat_to_int(v_data_258_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofNat___boxed(lean_object* v_leap_261_, lean_object* v_data_262_, lean_object* v_h_263_){
_start:
{
uint8_t v_leap_boxed_264_; lean_object* v_res_265_; 
v_leap_boxed_264_ = lean_unbox(v_leap_261_);
v_res_265_ = l_Std_Time_Second_Ordinal_ofNat(v_leap_boxed_264_, v_data_262_, v_h_263_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofFin___redArg(lean_object* v_data_266_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = lean_nat_to_int(v_data_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofFin(uint8_t v_leap_268_, lean_object* v_data_269_){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = lean_nat_to_int(v_data_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofFin___boxed(lean_object* v_leap_271_, lean_object* v_data_272_){
_start:
{
uint8_t v_leap_boxed_273_; lean_object* v_res_274_; 
v_leap_boxed_273_ = lean_unbox(v_leap_271_);
v_res_274_ = l_Std_Time_Second_Ordinal_ofFin(v_leap_boxed_273_, v_data_272_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toOffset___redArg(lean_object* v_ordinal_275_){
_start:
{
lean_inc(v_ordinal_275_);
return v_ordinal_275_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toOffset___redArg___boxed(lean_object* v_ordinal_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Std_Time_Second_Ordinal_toOffset___redArg(v_ordinal_276_);
lean_dec(v_ordinal_276_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toOffset(uint8_t v_leap_278_, lean_object* v_ordinal_279_){
_start:
{
lean_inc(v_ordinal_279_);
return v_ordinal_279_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toOffset___boxed(lean_object* v_leap_280_, lean_object* v_ordinal_281_){
_start:
{
uint8_t v_leap_boxed_282_; lean_object* v_res_283_; 
v_leap_boxed_282_ = lean_unbox(v_leap_280_);
v_res_283_ = l_Std_Time_Second_Ordinal_toOffset(v_leap_boxed_282_, v_ordinal_281_);
lean_dec(v_ordinal_281_);
return v_res_283_;
}
}
lean_object* runtime_initialize_Std_Time_Time_Unit_Nanosecond(uint8_t builtin);
lean_object* runtime_initialize_Init_Transport(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Time_Unit_Second(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Time_Unit_Nanosecond(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_Second_instInhabitedOffset = _init_l_Std_Time_Second_instInhabitedOffset();
lean_mark_persistent(l_Std_Time_Second_instInhabitedOffset);
l_Std_Time_Second_instLEOffset = _init_l_Std_Time_Second_instLEOffset();
lean_mark_persistent(l_Std_Time_Second_instLEOffset);
l_Std_Time_Second_instLTOffset = _init_l_Std_Time_Second_instLTOffset();
lean_mark_persistent(l_Std_Time_Second_instLTOffset);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Time_Unit_Second(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Time_Unit_Nanosecond(uint8_t builtin);
lean_object* initialize_Init_Transport(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Time_Unit_Second(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Time_Unit_Nanosecond(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Time_Unit_Second(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Time_Unit_Second(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Time_Unit_Second(builtin);
}
#ifdef __cplusplus
}
#endif
