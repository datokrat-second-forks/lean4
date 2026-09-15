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
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Int_repr___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_mk(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_mk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toBounded___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toBounded___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toBounded(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toBounded___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_equiv___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_equiv___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_Second_Ordinal_equiv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Second_Ordinal_equiv___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Second_Ordinal_equiv___redArg___closed__0 = (const lean_object*)&l_Std_Time_Second_Ordinal_equiv___redArg___closed__0_value;
static const lean_ctor_object l_Std_Time_Second_Ordinal_equiv___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Time_Second_Ordinal_equiv___redArg___closed__0_value),((lean_object*)&l_Std_Time_Second_Ordinal_equiv___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_Second_Ordinal_equiv___redArg___closed__1 = (const lean_object*)&l_Std_Time_Second_Ordinal_equiv___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_equiv___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_equiv___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Second_Ordinal_equiv___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Second_Ordinal_equiv___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_equiv(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_equiv___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Second_instReprOrdinal___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Second_instReprOrdinal___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Second_instReprOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Second_instReprOrdinal___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Second_instToStringOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Second_instToStringOrdinal___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLEOrdinal(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLEOrdinal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLTOrdinal(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLTOrdinal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableEqOrdinal(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableEqOrdinal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Second_instOrdOrdinal___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Second_instOrdOrdinal___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Second_instOrdOrdinal___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Second_instOrdOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Second_instOrdOrdinal___closed__0;
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
LEAN_EXPORT const lean_object* l_Std_Time_Second_Offset_equiv = (const lean_object*)&l_Std_Time_Second_Ordinal_equiv___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_val___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOffset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOffset___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Second_instReprOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Second_instReprOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Second_instReprOffset___closed__0 = (const lean_object*)&l_Std_Time_Second_instReprOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Second_instReprOffset = (const lean_object*)&l_Std_Time_Second_instReprOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Second_instToStringOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_repr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Second_instToStringOffset___closed__0 = (const lean_object*)&l_Std_Time_Second_instToStringOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Second_instToStringOffset = (const lean_object*)&l_Std_Time_Second_instToStringOffset___closed__0_value;
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
LEAN_EXPORT uint8_t l_Std_Time_Second_instOrdOffset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOffset___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Second_instOrdOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Second_instOrdOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Second_instOrdOffset___closed__0 = (const lean_object*)&l_Std_Time_Second_instOrdOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Second_instOrdOffset = (const lean_object*)&l_Std_Time_Second_instOrdOffset___closed__0_value;
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
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_equiv___redArg___lam__0(lean_object* v___y_19_){
_start:
{
lean_inc(v___y_19_);
return v___y_19_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_equiv___redArg___lam__0___boxed(lean_object* v___y_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Std_Time_Second_Ordinal_equiv___redArg___lam__0(v___y_20_);
lean_dec(v___y_20_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_equiv___redArg(){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = ((lean_object*)(l_Std_Time_Second_Ordinal_equiv___redArg___closed__1));
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_equiv___redArg___boxed(lean_object* v___dummy_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Std_Time_Second_Ordinal_equiv___redArg();
return v_res_28_;
}
}
static lean_object* _init_l_Std_Time_Second_Ordinal_equiv___closed__0(void){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Std_Time_Second_Ordinal_equiv___redArg();
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_equiv(uint8_t v_leap_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_obj_once(&l_Std_Time_Second_Ordinal_equiv___closed__0, &l_Std_Time_Second_Ordinal_equiv___closed__0_once, _init_l_Std_Time_Second_Ordinal_equiv___closed__0);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_equiv___boxed(lean_object* v_leap_32_){
_start:
{
uint8_t v_leap_boxed_33_; lean_object* v_res_34_; 
v_leap_boxed_33_ = lean_unbox(v_leap_32_);
v_res_34_ = l_Std_Time_Second_Ordinal_equiv(v_leap_boxed_33_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLEOrdinal___redArg(){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_box(0);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLEOrdinal___redArg___boxed(lean_object* v___dummy_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Std_Time_Second_instLEOrdinal___redArg();
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLEOrdinal(uint8_t v_leap_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lean_box(0);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLEOrdinal___boxed(lean_object* v_leap_41_){
_start:
{
uint8_t v_leap_boxed_42_; lean_object* v_res_43_; 
v_leap_boxed_42_ = lean_unbox(v_leap_41_);
v_res_43_ = l_Std_Time_Second_instLEOrdinal(v_leap_boxed_42_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLTOrdinal___redArg(){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_box(0);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLTOrdinal___redArg___boxed(lean_object* v___dummy_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Std_Time_Second_instLTOrdinal___redArg();
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLTOrdinal(uint8_t v_leap_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_box(0);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instLTOrdinal___boxed(lean_object* v_leap_50_){
_start:
{
uint8_t v_leap_boxed_51_; lean_object* v_res_52_; 
v_leap_boxed_51_ = lean_unbox(v_leap_50_);
v_res_52_ = l_Std_Time_Second_instLTOrdinal(v_leap_boxed_51_);
return v_res_52_;
}
}
static lean_object* _init_l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = lean_unsigned_to_nat(0u);
v___x_54_ = lean_nat_to_int(v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg___lam__0(lean_object* v___x_55_, lean_object* v_x_56_, lean_object* v_prec_57_){
_start:
{
lean_object* v_invFun_58_; lean_object* v___x_59_; lean_object* v___x_60_; uint8_t v___x_61_; 
v_invFun_58_ = lean_ctor_get(v___x_55_, 1);
lean_inc(v_invFun_58_);
lean_dec_ref(v___x_55_);
v___x_59_ = lean_apply_1(v_invFun_58_, v_x_56_);
v___x_60_ = lean_obj_once(&l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0, &l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0_once, _init_l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0);
v___x_61_ = lean_int_dec_lt(v___x_59_, v___x_60_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = l_Int_repr(v___x_59_);
lean_dec(v___x_59_);
v___x_63_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
return v___x_63_;
}
else
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = l_Int_repr(v___x_59_);
lean_dec(v___x_59_);
v___x_65_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
v___x_66_ = l_Repr_addAppParen(v___x_65_, v_prec_57_);
return v___x_66_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg___lam__0___boxed(lean_object* v___x_67_, lean_object* v_x_68_, lean_object* v_prec_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Std_Time_Second_instReprOrdinal___redArg___lam__0(v___x_67_, v_x_68_, v_prec_69_);
lean_dec(v_prec_69_);
return v_res_70_;
}
}
static lean_object* _init_l_Std_Time_Second_instReprOrdinal___redArg___closed__0(void){
_start:
{
lean_object* v___x_71_; lean_object* v___f_72_; 
v___x_71_ = lean_obj_once(&l_Std_Time_Second_Ordinal_equiv___closed__0, &l_Std_Time_Second_Ordinal_equiv___closed__0_once, _init_l_Std_Time_Second_Ordinal_equiv___closed__0);
v___f_72_ = lean_alloc_closure((void*)(l_Std_Time_Second_instReprOrdinal___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_72_, 0, v___x_71_);
return v___f_72_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg(){
_start:
{
lean_object* v___f_74_; 
v___f_74_ = lean_obj_once(&l_Std_Time_Second_instReprOrdinal___redArg___closed__0, &l_Std_Time_Second_instReprOrdinal___redArg___closed__0_once, _init_l_Std_Time_Second_instReprOrdinal___redArg___closed__0);
return v___f_74_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___redArg___boxed(lean_object* v___dummy_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Std_Time_Second_instReprOrdinal___redArg();
return v_res_76_;
}
}
static lean_object* _init_l_Std_Time_Second_instReprOrdinal___closed__0(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l_Std_Time_Second_instReprOrdinal___redArg();
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal(uint8_t v_leap_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = lean_obj_once(&l_Std_Time_Second_instReprOrdinal___closed__0, &l_Std_Time_Second_instReprOrdinal___closed__0_once, _init_l_Std_Time_Second_instReprOrdinal___closed__0);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOrdinal___boxed(lean_object* v_leap_80_){
_start:
{
uint8_t v_leap_boxed_81_; lean_object* v_res_82_; 
v_leap_boxed_81_ = lean_unbox(v_leap_80_);
v_res_82_ = l_Std_Time_Second_instReprOrdinal(v_leap_boxed_81_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal___redArg___lam__0(lean_object* v_invFun_83_, lean_object* v_x_84_){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_apply_1(v_invFun_83_, v_x_84_);
v___x_86_ = l_Int_repr(v___x_85_);
lean_dec(v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal___redArg(){
_start:
{
lean_object* v___x_88_; lean_object* v_invFun_89_; lean_object* v___f_90_; 
v___x_88_ = lean_obj_once(&l_Std_Time_Second_Ordinal_equiv___closed__0, &l_Std_Time_Second_Ordinal_equiv___closed__0_once, _init_l_Std_Time_Second_Ordinal_equiv___closed__0);
v_invFun_89_ = lean_ctor_get(v___x_88_, 1);
lean_inc(v_invFun_89_);
v___f_90_ = lean_alloc_closure((void*)(l_Std_Time_Second_instToStringOrdinal___redArg___lam__0), 2, 1);
lean_closure_set(v___f_90_, 0, v_invFun_89_);
return v___f_90_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal___redArg___boxed(lean_object* v___dummy_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Std_Time_Second_instToStringOrdinal___redArg();
return v_res_92_;
}
}
static lean_object* _init_l_Std_Time_Second_instToStringOrdinal___closed__0(void){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = l_Std_Time_Second_instToStringOrdinal___redArg();
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal(uint8_t v_leap_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lean_obj_once(&l_Std_Time_Second_instToStringOrdinal___closed__0, &l_Std_Time_Second_instToStringOrdinal___closed__0_once, _init_l_Std_Time_Second_instToStringOrdinal___closed__0);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instToStringOrdinal___boxed(lean_object* v_leap_96_){
_start:
{
uint8_t v_leap_boxed_97_; lean_object* v_res_98_; 
v_leap_boxed_97_ = lean_unbox(v_leap_96_);
v_res_98_ = l_Std_Time_Second_instToStringOrdinal(v_leap_boxed_97_);
return v_res_98_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLEOrdinal(uint8_t v_leap_99_, lean_object* v_a_100_, lean_object* v_b_101_){
_start:
{
lean_object* v___x_102_; lean_object* v_invFun_103_; lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_102_ = lean_obj_once(&l_Std_Time_Second_Ordinal_equiv___closed__0, &l_Std_Time_Second_Ordinal_equiv___closed__0_once, _init_l_Std_Time_Second_Ordinal_equiv___closed__0);
v_invFun_103_ = lean_ctor_get(v___x_102_, 1);
lean_inc_n(v_invFun_103_, 2);
v___x_104_ = lean_apply_1(v_invFun_103_, v_a_100_);
v___x_105_ = lean_apply_1(v_invFun_103_, v_b_101_);
v___x_106_ = lean_int_dec_le(v___x_104_, v___x_105_);
lean_dec(v___x_105_);
lean_dec(v___x_104_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLEOrdinal___boxed(lean_object* v_leap_107_, lean_object* v_a_108_, lean_object* v_b_109_){
_start:
{
uint8_t v_leap_boxed_110_; uint8_t v_res_111_; lean_object* v_r_112_; 
v_leap_boxed_110_ = lean_unbox(v_leap_107_);
v_res_111_ = l_Std_Time_Second_instDecidableLEOrdinal(v_leap_boxed_110_, v_a_108_, v_b_109_);
v_r_112_ = lean_box(v_res_111_);
return v_r_112_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLTOrdinal(uint8_t v_leap_113_, lean_object* v_a_114_, lean_object* v_b_115_){
_start:
{
lean_object* v___x_116_; lean_object* v_invFun_117_; lean_object* v___x_118_; lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_116_ = lean_obj_once(&l_Std_Time_Second_Ordinal_equiv___closed__0, &l_Std_Time_Second_Ordinal_equiv___closed__0_once, _init_l_Std_Time_Second_Ordinal_equiv___closed__0);
v_invFun_117_ = lean_ctor_get(v___x_116_, 1);
lean_inc_n(v_invFun_117_, 2);
v___x_118_ = lean_apply_1(v_invFun_117_, v_a_114_);
v___x_119_ = lean_apply_1(v_invFun_117_, v_b_115_);
v___x_120_ = lean_int_dec_lt(v___x_118_, v___x_119_);
lean_dec(v___x_119_);
lean_dec(v___x_118_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLTOrdinal___boxed(lean_object* v_leap_121_, lean_object* v_a_122_, lean_object* v_b_123_){
_start:
{
uint8_t v_leap_boxed_124_; uint8_t v_res_125_; lean_object* v_r_126_; 
v_leap_boxed_124_ = lean_unbox(v_leap_121_);
v_res_125_ = l_Std_Time_Second_instDecidableLTOrdinal(v_leap_boxed_124_, v_a_122_, v_b_123_);
v_r_126_ = lean_box(v_res_125_);
return v_r_126_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableEqOrdinal(uint8_t v_leap_127_, lean_object* v_a_128_, lean_object* v_b_129_){
_start:
{
lean_object* v___x_130_; lean_object* v_invFun_131_; lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_130_ = lean_obj_once(&l_Std_Time_Second_Ordinal_equiv___closed__0, &l_Std_Time_Second_Ordinal_equiv___closed__0_once, _init_l_Std_Time_Second_Ordinal_equiv___closed__0);
v_invFun_131_ = lean_ctor_get(v___x_130_, 1);
lean_inc_n(v_invFun_131_, 2);
v___x_132_ = lean_apply_1(v_invFun_131_, v_a_128_);
v___x_133_ = lean_apply_1(v_invFun_131_, v_b_129_);
v___x_134_ = lean_int_dec_eq(v___x_132_, v___x_133_);
lean_dec(v___x_133_);
lean_dec(v___x_132_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableEqOrdinal___boxed(lean_object* v_leap_135_, lean_object* v_a_136_, lean_object* v_b_137_){
_start:
{
uint8_t v_leap_boxed_138_; uint8_t v_res_139_; lean_object* v_r_140_; 
v_leap_boxed_138_ = lean_unbox(v_leap_135_);
v_res_139_ = l_Std_Time_Second_instDecidableEqOrdinal(v_leap_boxed_138_, v_a_136_, v_b_137_);
v_r_140_ = lean_box(v_res_139_);
return v_r_140_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instOrdOrdinal___redArg___lam__0(lean_object* v___x_141_, lean_object* v_x_142_, lean_object* v_y_143_){
_start:
{
lean_object* v_invFun_144_; lean_object* v___x_145_; lean_object* v___x_146_; uint8_t v___x_147_; 
v_invFun_144_ = lean_ctor_get(v___x_141_, 1);
lean_inc_n(v_invFun_144_, 2);
lean_dec_ref(v___x_141_);
v___x_145_ = lean_apply_1(v_invFun_144_, v_x_142_);
v___x_146_ = lean_apply_1(v_invFun_144_, v_y_143_);
v___x_147_ = lean_int_dec_lt(v___x_145_, v___x_146_);
if (v___x_147_ == 0)
{
uint8_t v___x_148_; 
v___x_148_ = lean_int_dec_eq(v___x_145_, v___x_146_);
lean_dec(v___x_146_);
lean_dec(v___x_145_);
if (v___x_148_ == 0)
{
uint8_t v___x_149_; 
v___x_149_ = 2;
return v___x_149_;
}
else
{
uint8_t v___x_150_; 
v___x_150_ = 1;
return v___x_150_;
}
}
else
{
uint8_t v___x_151_; 
lean_dec(v___x_146_);
lean_dec(v___x_145_);
v___x_151_ = 0;
return v___x_151_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal___redArg___lam__0___boxed(lean_object* v___x_152_, lean_object* v_x_153_, lean_object* v_y_154_){
_start:
{
uint8_t v_res_155_; lean_object* v_r_156_; 
v_res_155_ = l_Std_Time_Second_instOrdOrdinal___redArg___lam__0(v___x_152_, v_x_153_, v_y_154_);
v_r_156_ = lean_box(v_res_155_);
return v_r_156_;
}
}
static lean_object* _init_l_Std_Time_Second_instOrdOrdinal___redArg___closed__0(void){
_start:
{
lean_object* v___x_157_; lean_object* v___f_158_; 
v___x_157_ = lean_obj_once(&l_Std_Time_Second_Ordinal_equiv___closed__0, &l_Std_Time_Second_Ordinal_equiv___closed__0_once, _init_l_Std_Time_Second_Ordinal_equiv___closed__0);
v___f_158_ = lean_alloc_closure((void*)(l_Std_Time_Second_instOrdOrdinal___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_158_, 0, v___x_157_);
return v___f_158_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal___redArg(){
_start:
{
lean_object* v___f_160_; 
v___f_160_ = lean_obj_once(&l_Std_Time_Second_instOrdOrdinal___redArg___closed__0, &l_Std_Time_Second_instOrdOrdinal___redArg___closed__0_once, _init_l_Std_Time_Second_instOrdOrdinal___redArg___closed__0);
return v___f_160_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal___redArg___boxed(lean_object* v___dummy_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Std_Time_Second_instOrdOrdinal___redArg();
return v_res_162_;
}
}
static lean_object* _init_l_Std_Time_Second_instOrdOrdinal___closed__0(void){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = l_Std_Time_Second_instOrdOrdinal___redArg();
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal(uint8_t v_leap_164_){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = lean_obj_once(&l_Std_Time_Second_instOrdOrdinal___closed__0, &l_Std_Time_Second_instOrdOrdinal___closed__0_once, _init_l_Std_Time_Second_instOrdOrdinal___closed__0);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOrdinal___boxed(lean_object* v_leap_166_){
_start:
{
uint8_t v_leap_boxed_167_; lean_object* v_res_168_; 
v_leap_boxed_167_ = lean_unbox(v_leap_166_);
v_res_168_ = l_Std_Time_Second_instOrdOrdinal(v_leap_boxed_167_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_val___redArg(lean_object* v_ordinal_169_){
_start:
{
lean_inc(v_ordinal_169_);
return v_ordinal_169_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_val___redArg___boxed(lean_object* v_ordinal_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Std_Time_Second_Ordinal_val___redArg(v_ordinal_170_);
lean_dec(v_ordinal_170_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_val(uint8_t v_leap_172_, lean_object* v_ordinal_173_){
_start:
{
lean_inc(v_ordinal_173_);
return v_ordinal_173_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_val___boxed(lean_object* v_leap_174_, lean_object* v_ordinal_175_){
_start:
{
uint8_t v_leap_boxed_176_; lean_object* v_res_177_; 
v_leap_boxed_176_ = lean_unbox(v_leap_174_);
v_res_177_ = l_Std_Time_Second_Ordinal_val(v_leap_boxed_176_, v_ordinal_175_);
lean_dec(v_ordinal_175_);
return v_res_177_;
}
}
static lean_object* _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__0(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = lean_unsigned_to_nat(59u);
v___x_179_ = lean_nat_to_int(v___x_178_);
return v___x_179_;
}
}
static lean_object* _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__1(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_180_ = lean_obj_once(&l_Std_Time_Second_instOfNatOrdinal___redArg___closed__0, &l_Std_Time_Second_instOfNatOrdinal___redArg___closed__0_once, _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__0);
v___x_181_ = lean_obj_once(&l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0, &l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0_once, _init_l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0);
v___x_182_ = lean_int_add(v___x_181_, v___x_180_);
return v___x_182_;
}
}
static lean_object* _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__2(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_183_ = lean_obj_once(&l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0, &l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0_once, _init_l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0);
v___x_184_ = lean_obj_once(&l_Std_Time_Second_instOfNatOrdinal___redArg___closed__1, &l_Std_Time_Second_instOfNatOrdinal___redArg___closed__1_once, _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__1);
v___x_185_ = lean_int_sub(v___x_184_, v___x_183_);
return v___x_185_;
}
}
static lean_object* _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__3(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lean_unsigned_to_nat(1u);
v___x_187_ = lean_nat_to_int(v___x_186_);
return v___x_187_;
}
}
static lean_object* _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__4(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v_range_190_; 
v___x_188_ = lean_obj_once(&l_Std_Time_Second_instOfNatOrdinal___redArg___closed__3, &l_Std_Time_Second_instOfNatOrdinal___redArg___closed__3_once, _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__3);
v___x_189_ = lean_obj_once(&l_Std_Time_Second_instOfNatOrdinal___redArg___closed__2, &l_Std_Time_Second_instOfNatOrdinal___redArg___closed__2_once, _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__2);
v_range_190_ = lean_int_add(v___x_189_, v___x_188_);
return v_range_190_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOfNatOrdinal___redArg(lean_object* v_n_191_){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v_range_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_192_ = lean_obj_once(&l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0, &l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0_once, _init_l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0);
v___x_193_ = lean_nat_to_int(v_n_191_);
v_range_194_ = lean_obj_once(&l_Std_Time_Second_instOfNatOrdinal___redArg___closed__4, &l_Std_Time_Second_instOfNatOrdinal___redArg___closed__4_once, _init_l_Std_Time_Second_instOfNatOrdinal___redArg___closed__4);
v___x_195_ = lean_int_sub(v___x_193_, v___x_192_);
lean_dec(v___x_193_);
v___x_196_ = lean_int_emod(v___x_195_, v_range_194_);
lean_dec(v___x_195_);
v___x_197_ = lean_int_add(v___x_196_, v_range_194_);
lean_dec(v___x_196_);
v___x_198_ = lean_int_emod(v___x_197_, v_range_194_);
lean_dec(v___x_197_);
v___x_199_ = lean_int_add(v___x_198_, v___x_192_);
lean_dec(v___x_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOfNatOrdinal(uint8_t v_leap_200_, lean_object* v_n_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = l_Std_Time_Second_instOfNatOrdinal___redArg(v_n_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOfNatOrdinal___boxed(lean_object* v_leap_203_, lean_object* v_n_204_){
_start:
{
uint8_t v_leap_boxed_205_; lean_object* v_res_206_; 
v_leap_boxed_205_ = lean_unbox(v_leap_203_);
v_res_206_ = l_Std_Time_Second_instOfNatOrdinal(v_leap_boxed_205_, v_n_204_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_mk(lean_object* v_toUnitVal_207_){
_start:
{
lean_inc(v_toUnitVal_207_);
return v_toUnitVal_207_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_mk___boxed(lean_object* v_toUnitVal_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Std_Time_Second_Offset_mk(v_toUnitVal_208_);
lean_dec(v_toUnitVal_208_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_toUnitVal(lean_object* v_self_210_){
_start:
{
lean_inc(v_self_210_);
return v_self_210_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_toUnitVal___boxed(lean_object* v_self_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Std_Time_Second_Offset_toUnitVal(v_self_211_);
lean_dec(v_self_211_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_val(lean_object* v_offset_214_){
_start:
{
lean_inc(v_offset_214_);
return v_offset_214_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_val___boxed(lean_object* v_offset_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Std_Time_Second_Offset_val(v_offset_215_);
lean_dec(v_offset_215_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOffset___lam__0(lean_object* v_offset_217_, lean_object* v_prec_218_){
_start:
{
lean_object* v___x_219_; uint8_t v___x_220_; 
v___x_219_ = lean_obj_once(&l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0, &l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0_once, _init_l_Std_Time_Second_instReprOrdinal___redArg___lam__0___closed__0);
v___x_220_ = lean_int_dec_lt(v_offset_217_, v___x_219_);
if (v___x_220_ == 0)
{
lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_221_ = l_Int_repr(v_offset_217_);
v___x_222_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
return v___x_222_;
}
else
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_223_ = l_Int_repr(v_offset_217_);
v___x_224_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
v___x_225_ = l_Repr_addAppParen(v___x_224_, v_prec_218_);
return v___x_225_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instReprOffset___lam__0___boxed(lean_object* v_offset_226_, lean_object* v_prec_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l_Std_Time_Second_instReprOffset___lam__0(v_offset_226_, v_prec_227_);
lean_dec(v_prec_227_);
lean_dec(v_offset_226_);
return v_res_228_;
}
}
static lean_object* _init_l_Std_Time_Second_instInhabitedOffset___closed__0(void){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_233_;
}
}
static lean_object* _init_l_Std_Time_Second_instInhabitedOffset(void){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = lean_obj_once(&l_Std_Time_Second_instInhabitedOffset___closed__0, &l_Std_Time_Second_instInhabitedOffset___closed__0_once, _init_l_Std_Time_Second_instInhabitedOffset___closed__0);
return v___x_234_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableEqOffset(lean_object* v_x_235_, lean_object* v_y_236_){
_start:
{
uint8_t v___x_237_; 
v___x_237_ = lean_int_dec_eq(v_x_235_, v_y_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableEqOffset___boxed(lean_object* v_x_238_, lean_object* v_y_239_){
_start:
{
uint8_t v_res_240_; lean_object* v_r_241_; 
v_res_240_ = l_Std_Time_Second_instDecidableEqOffset(v_x_238_, v_y_239_);
lean_dec(v_y_239_);
lean_dec(v_x_238_);
v_r_241_ = lean_box(v_res_240_);
return v_r_241_;
}
}
static lean_object* _init_l_Std_Time_Second_instLEOffset(void){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = lean_box(0);
return v___x_248_;
}
}
static lean_object* _init_l_Std_Time_Second_instLTOffset(void){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = lean_box(0);
return v___x_249_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instOrdOffset___lam__0(lean_object* v_x_250_, lean_object* v_y_251_){
_start:
{
uint8_t v___x_252_; 
v___x_252_ = lean_int_dec_lt(v_x_250_, v_y_251_);
if (v___x_252_ == 0)
{
uint8_t v___x_253_; 
v___x_253_ = lean_int_dec_eq(v_x_250_, v_y_251_);
if (v___x_253_ == 0)
{
uint8_t v___x_254_; 
v___x_254_ = 2;
return v___x_254_;
}
else
{
uint8_t v___x_255_; 
v___x_255_ = 1;
return v___x_255_;
}
}
else
{
uint8_t v___x_256_; 
v___x_256_ = 0;
return v___x_256_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOrdOffset___lam__0___boxed(lean_object* v_x_257_, lean_object* v_y_258_){
_start:
{
uint8_t v_res_259_; lean_object* v_r_260_; 
v_res_259_ = l_Std_Time_Second_instOrdOffset___lam__0(v_x_257_, v_y_258_);
lean_dec(v_y_258_);
lean_dec(v_x_257_);
v_r_260_ = lean_box(v_res_259_);
return v_r_260_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instOfNatOffset(lean_object* v_n_263_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = lean_nat_to_int(v_n_263_);
return v___x_264_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLeOffset(lean_object* v_x_265_, lean_object* v_y_266_){
_start:
{
uint8_t v___x_267_; 
v___x_267_ = lean_int_dec_le(v_x_265_, v_y_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLeOffset___boxed(lean_object* v_x_268_, lean_object* v_y_269_){
_start:
{
uint8_t v_res_270_; lean_object* v_r_271_; 
v_res_270_ = l_Std_Time_Second_instDecidableLeOffset(v_x_268_, v_y_269_);
lean_dec(v_y_269_);
lean_dec(v_x_268_);
v_r_271_ = lean_box(v_res_270_);
return v_r_271_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Second_instDecidableLtOffset(lean_object* v_x_272_, lean_object* v_y_273_){
_start:
{
uint8_t v___x_274_; 
v___x_274_ = lean_int_dec_lt(v_x_272_, v_y_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_instDecidableLtOffset___boxed(lean_object* v_x_275_, lean_object* v_y_276_){
_start:
{
uint8_t v_res_277_; lean_object* v_r_278_; 
v_res_277_ = l_Std_Time_Second_instDecidableLtOffset(v_x_275_, v_y_276_);
lean_dec(v_y_276_);
lean_dec(v_x_275_);
v_r_278_ = lean_box(v_res_277_);
return v_r_278_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_ofNat(lean_object* v_data_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = lean_nat_to_int(v_data_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_ofInt(lean_object* v_data_281_){
_start:
{
lean_inc(v_data_281_);
return v_data_281_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Offset_ofInt___boxed(lean_object* v_data_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Std_Time_Second_Offset_ofInt(v_data_282_);
lean_dec(v_data_282_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofInt___redArg(lean_object* v_data_284_){
_start:
{
lean_inc(v_data_284_);
return v_data_284_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofInt___redArg___boxed(lean_object* v_data_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l_Std_Time_Second_Ordinal_ofInt___redArg(v_data_285_);
lean_dec(v_data_285_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofInt(uint8_t v_leap_287_, lean_object* v_data_288_, lean_object* v_h_289_){
_start:
{
lean_inc(v_data_288_);
return v_data_288_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofInt___boxed(lean_object* v_leap_290_, lean_object* v_data_291_, lean_object* v_h_292_){
_start:
{
uint8_t v_leap_boxed_293_; lean_object* v_res_294_; 
v_leap_boxed_293_ = lean_unbox(v_leap_290_);
v_res_294_ = l_Std_Time_Second_Ordinal_ofInt(v_leap_boxed_293_, v_data_291_, v_h_292_);
lean_dec(v_data_291_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofNat___redArg(lean_object* v_data_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = lean_nat_to_int(v_data_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofNat(uint8_t v_leap_297_, lean_object* v_data_298_, lean_object* v_h_299_){
_start:
{
lean_object* v___x_300_; 
v___x_300_ = lean_nat_to_int(v_data_298_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofNat___boxed(lean_object* v_leap_301_, lean_object* v_data_302_, lean_object* v_h_303_){
_start:
{
uint8_t v_leap_boxed_304_; lean_object* v_res_305_; 
v_leap_boxed_304_ = lean_unbox(v_leap_301_);
v_res_305_ = l_Std_Time_Second_Ordinal_ofNat(v_leap_boxed_304_, v_data_302_, v_h_303_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofFin___redArg(lean_object* v_data_306_){
_start:
{
lean_object* v___x_307_; 
v___x_307_ = lean_nat_to_int(v_data_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofFin(uint8_t v_leap_308_, lean_object* v_data_309_){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = lean_nat_to_int(v_data_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_ofFin___boxed(lean_object* v_leap_311_, lean_object* v_data_312_){
_start:
{
uint8_t v_leap_boxed_313_; lean_object* v_res_314_; 
v_leap_boxed_313_ = lean_unbox(v_leap_311_);
v_res_314_ = l_Std_Time_Second_Ordinal_ofFin(v_leap_boxed_313_, v_data_312_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toOffset___redArg(lean_object* v_ordinal_315_){
_start:
{
lean_inc(v_ordinal_315_);
return v_ordinal_315_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toOffset___redArg___boxed(lean_object* v_ordinal_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Std_Time_Second_Ordinal_toOffset___redArg(v_ordinal_316_);
lean_dec(v_ordinal_316_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toOffset(uint8_t v_leap_318_, lean_object* v_ordinal_319_){
_start:
{
lean_inc(v_ordinal_319_);
return v_ordinal_319_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Second_Ordinal_toOffset___boxed(lean_object* v_leap_320_, lean_object* v_ordinal_321_){
_start:
{
uint8_t v_leap_boxed_322_; lean_object* v_res_323_; 
v_leap_boxed_322_ = lean_unbox(v_leap_320_);
v_res_323_ = l_Std_Time_Second_Ordinal_toOffset(v_leap_boxed_322_, v_ordinal_321_);
lean_dec(v_ordinal_321_);
return v_res_323_;
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
