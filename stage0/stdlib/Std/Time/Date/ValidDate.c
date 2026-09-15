// Lean compiler output
// Module: Std.Time.Date.ValidDate
// Imports: public import Std.Time.Date.Unit.Month import all Std.Time.Date.Unit.Month import Init.Data.Bool
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
lean_object* lean_int_sub(lean_object*, lean_object*);
extern lean_object* l_Std_Time_Month_Ordinal_equiv;
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Std_Time_Day_instOrdOrdinal;
lean_object* l_Std_Time_Month_Ordinal_days(uint8_t, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
extern lean_object* l_Std_Time_Day_Ordinal_equiv;
lean_object* l_Std_Time_Month_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
lean_object* l_Std_Time_Day_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableEqProd___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_Month_Ordinal_cumulativeDays(uint8_t, lean_object*);
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__0;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__1;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__2;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__3;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__4;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__5;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__6;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__7;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__8;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__9;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__10;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__11;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__12;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__13;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__14;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__15;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__16;
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___redArg___closed__17;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedValidDate___redArg();
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedValidDate___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_instInhabitedValidDate___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedValidDate___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedValidDate(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedValidDate___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqValidDate___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqValidDate___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqValidDate(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqValidDate___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_instOrdValidDate___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdValidDate___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instOrdValidDate___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdValidDate___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdValidDate___redArg___closed__0 = (const lean_object*)&l_Std_Time_instOrdValidDate___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instOrdValidDate___redArg();
LEAN_EXPORT lean_object* l_Std_Time_instOrdValidDate___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdValidDate(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_instOrdValidDate___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_ValidDate_dayOfYear(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_ValidDate_dayOfYear___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Date_ValidDate_0__Std_Time_ValidDate_ofOrdinal_go___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Date_ValidDate_0__Std_Time_ValidDate_ofOrdinal_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Date_ValidDate_0__Std_Time_ValidDate_ofOrdinal_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Date_ValidDate_0__Std_Time_ValidDate_ofOrdinal_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_ValidDate_ofOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_ValidDate_ofOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_ValidDate_ofOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_ValidDate_ofOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_ValidDate_ofOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_ValidDate_ofOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_ValidDate_ofOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_ValidDate_ofOrdinal___closed__3;
static lean_once_cell_t l_Std_Time_ValidDate_ofOrdinal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_ValidDate_ofOrdinal___closed__4;
static lean_once_cell_t l_Std_Time_ValidDate_ofOrdinal___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_ValidDate_ofOrdinal___closed__5;
static lean_once_cell_t l_Std_Time_ValidDate_ofOrdinal___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_ValidDate_ofOrdinal___closed__6;
static lean_once_cell_t l_Std_Time_ValidDate_ofOrdinal___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_ValidDate_ofOrdinal___closed__7;
static lean_once_cell_t l_Std_Time_ValidDate_ofOrdinal___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_ValidDate_ofOrdinal___closed__8;
LEAN_EXPORT lean_object* l_Std_Time_ValidDate_ofOrdinal(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_ValidDate_ofOrdinal___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(1u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_unsigned_to_nat(11u);
v___x_4_ = lean_nat_to_int(v___x_3_);
return v___x_4_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__2(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_5_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__1, &l_Std_Time_instInhabitedValidDate___redArg___closed__1_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__1);
v___x_6_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__0, &l_Std_Time_instInhabitedValidDate___redArg___closed__0_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__0);
v___x_7_ = lean_int_add(v___x_6_, v___x_5_);
return v___x_7_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__3(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__0, &l_Std_Time_instInhabitedValidDate___redArg___closed__0_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__0);
v___x_9_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__2, &l_Std_Time_instInhabitedValidDate___redArg___closed__2_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__2);
v___x_10_ = lean_int_sub(v___x_9_, v___x_8_);
return v___x_10_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__4(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v_range_13_; 
v___x_11_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__0, &l_Std_Time_instInhabitedValidDate___redArg___closed__0_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__0);
v___x_12_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__3, &l_Std_Time_instInhabitedValidDate___redArg___closed__3_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__3);
v_range_13_ = lean_int_add(v___x_12_, v___x_11_);
return v_range_13_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__5(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__0, &l_Std_Time_instInhabitedValidDate___redArg___closed__0_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__0);
v___x_15_ = lean_int_sub(v___x_14_, v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__6(void){
_start:
{
lean_object* v_range_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v_range_16_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__4, &l_Std_Time_instInhabitedValidDate___redArg___closed__4_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__4);
v___x_17_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__5, &l_Std_Time_instInhabitedValidDate___redArg___closed__5_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__5);
v___x_18_ = lean_int_emod(v___x_17_, v_range_16_);
return v___x_18_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__7(void){
_start:
{
lean_object* v_range_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v_range_19_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__4, &l_Std_Time_instInhabitedValidDate___redArg___closed__4_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__4);
v___x_20_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__6, &l_Std_Time_instInhabitedValidDate___redArg___closed__6_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__6);
v___x_21_ = lean_int_add(v___x_20_, v_range_19_);
return v___x_21_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__8(void){
_start:
{
lean_object* v_range_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v_range_22_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__4, &l_Std_Time_instInhabitedValidDate___redArg___closed__4_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__4);
v___x_23_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__7, &l_Std_Time_instInhabitedValidDate___redArg___closed__7_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__7);
v___x_24_ = lean_int_emod(v___x_23_, v_range_22_);
return v___x_24_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__9(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_25_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__0, &l_Std_Time_instInhabitedValidDate___redArg___closed__0_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__0);
v___x_26_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__8, &l_Std_Time_instInhabitedValidDate___redArg___closed__8_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__8);
v___x_27_ = lean_int_add(v___x_26_, v___x_25_);
return v___x_27_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__10(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_unsigned_to_nat(30u);
v___x_29_ = lean_nat_to_int(v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__11(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__10, &l_Std_Time_instInhabitedValidDate___redArg___closed__10_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__10);
v___x_31_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__0, &l_Std_Time_instInhabitedValidDate___redArg___closed__0_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__0);
v___x_32_ = lean_int_add(v___x_31_, v___x_30_);
return v___x_32_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__12(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_33_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__0, &l_Std_Time_instInhabitedValidDate___redArg___closed__0_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__0);
v___x_34_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__11, &l_Std_Time_instInhabitedValidDate___redArg___closed__11_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__11);
v___x_35_ = lean_int_sub(v___x_34_, v___x_33_);
return v___x_35_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__13(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v_range_38_; 
v___x_36_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__0, &l_Std_Time_instInhabitedValidDate___redArg___closed__0_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__0);
v___x_37_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__12, &l_Std_Time_instInhabitedValidDate___redArg___closed__12_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__12);
v_range_38_ = lean_int_add(v___x_37_, v___x_36_);
return v_range_38_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__14(void){
_start:
{
lean_object* v_range_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v_range_39_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__13, &l_Std_Time_instInhabitedValidDate___redArg___closed__13_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__13);
v___x_40_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__5, &l_Std_Time_instInhabitedValidDate___redArg___closed__5_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__5);
v___x_41_ = lean_int_emod(v___x_40_, v_range_39_);
return v___x_41_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__15(void){
_start:
{
lean_object* v_range_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v_range_42_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__13, &l_Std_Time_instInhabitedValidDate___redArg___closed__13_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__13);
v___x_43_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__14, &l_Std_Time_instInhabitedValidDate___redArg___closed__14_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__14);
v___x_44_ = lean_int_add(v___x_43_, v_range_42_);
return v___x_44_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__16(void){
_start:
{
lean_object* v_range_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v_range_45_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__13, &l_Std_Time_instInhabitedValidDate___redArg___closed__13_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__13);
v___x_46_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__15, &l_Std_Time_instInhabitedValidDate___redArg___closed__15_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__15);
v___x_47_ = lean_int_emod(v___x_46_, v_range_45_);
return v___x_47_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___redArg___closed__17(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_48_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__0, &l_Std_Time_instInhabitedValidDate___redArg___closed__0_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__0);
v___x_49_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__16, &l_Std_Time_instInhabitedValidDate___redArg___closed__16_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__16);
v___x_50_ = lean_int_add(v___x_49_, v___x_48_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedValidDate___redArg(){
_start:
{
lean_object* v___x_52_; lean_object* v_toFun_53_; lean_object* v___x_54_; lean_object* v_toFun_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_52_ = l_Std_Time_Month_Ordinal_equiv;
v_toFun_53_ = lean_ctor_get(v___x_52_, 0);
v___x_54_ = l_Std_Time_Day_Ordinal_equiv;
v_toFun_55_ = lean_ctor_get(v___x_54_, 0);
v___x_56_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__9, &l_Std_Time_instInhabitedValidDate___redArg___closed__9_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__9);
lean_inc(v_toFun_53_);
v___x_57_ = lean_apply_1(v_toFun_53_, v___x_56_);
v___x_58_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__17, &l_Std_Time_instInhabitedValidDate___redArg___closed__17_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__17);
lean_inc(v_toFun_55_);
v___x_59_ = lean_apply_1(v_toFun_55_, v___x_58_);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_57_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedValidDate___redArg___boxed(lean_object* v___dummy_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Std_Time_instInhabitedValidDate___redArg();
return v_res_62_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedValidDate___closed__0(void){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Std_Time_instInhabitedValidDate___redArg();
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedValidDate(uint8_t v_l_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___closed__0, &l_Std_Time_instInhabitedValidDate___closed__0_once, _init_l_Std_Time_instInhabitedValidDate___closed__0);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedValidDate___boxed(lean_object* v_l_66_){
_start:
{
uint8_t v_l_boxed_67_; lean_object* v_res_68_; 
v_l_boxed_67_ = lean_unbox(v_l_66_);
v_res_68_ = l_Std_Time_instInhabitedValidDate(v_l_boxed_67_);
return v_res_68_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqValidDate___redArg(lean_object* v_a_69_, lean_object* v_b_70_){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; uint8_t v___x_73_; 
v___x_71_ = lean_alloc_closure((void*)(l_Std_Time_Month_instDecidableEqOrdinal___boxed), 2, 0);
v___x_72_ = lean_alloc_closure((void*)(l_Std_Time_Day_instDecidableEqOrdinal___boxed), 2, 0);
v___x_73_ = l_instDecidableEqProd___redArg(v___x_71_, v___x_72_, v_a_69_, v_b_70_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqValidDate___redArg___boxed(lean_object* v_a_74_, lean_object* v_b_75_){
_start:
{
uint8_t v_res_76_; lean_object* v_r_77_; 
v_res_76_ = l_Std_Time_instDecidableEqValidDate___redArg(v_a_74_, v_b_75_);
v_r_77_ = lean_box(v_res_76_);
return v_r_77_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqValidDate(uint8_t v_leap_78_, lean_object* v_a_79_, lean_object* v_b_80_){
_start:
{
uint8_t v___x_81_; 
v___x_81_ = l_Std_Time_instDecidableEqValidDate___redArg(v_a_79_, v_b_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqValidDate___boxed(lean_object* v_leap_82_, lean_object* v_a_83_, lean_object* v_b_84_){
_start:
{
uint8_t v_leap_boxed_85_; uint8_t v_res_86_; lean_object* v_r_87_; 
v_leap_boxed_85_ = lean_unbox(v_leap_82_);
v_res_86_ = l_Std_Time_instDecidableEqValidDate(v_leap_boxed_85_, v_a_83_, v_b_84_);
v_r_87_ = lean_box(v_res_86_);
return v_r_87_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instOrdValidDate___redArg___lam__0(lean_object* v_a_88_, lean_object* v_b_89_){
_start:
{
lean_object* v_fst_90_; lean_object* v_snd_91_; lean_object* v_fst_92_; lean_object* v_snd_93_; lean_object* v___x_94_; lean_object* v_invFun_95_; lean_object* v___x_96_; lean_object* v___x_97_; uint8_t v___x_98_; 
v_fst_90_ = lean_ctor_get(v_a_88_, 0);
lean_inc(v_fst_90_);
v_snd_91_ = lean_ctor_get(v_a_88_, 1);
lean_inc(v_snd_91_);
lean_dec_ref(v_a_88_);
v_fst_92_ = lean_ctor_get(v_b_89_, 0);
lean_inc(v_fst_92_);
v_snd_93_ = lean_ctor_get(v_b_89_, 1);
lean_inc(v_snd_93_);
lean_dec_ref(v_b_89_);
v___x_94_ = l_Std_Time_Month_Ordinal_equiv;
v_invFun_95_ = lean_ctor_get(v___x_94_, 1);
lean_inc_n(v_invFun_95_, 2);
v___x_96_ = lean_apply_1(v_invFun_95_, v_fst_90_);
v___x_97_ = lean_apply_1(v_invFun_95_, v_fst_92_);
v___x_98_ = lean_int_dec_lt(v___x_96_, v___x_97_);
if (v___x_98_ == 0)
{
uint8_t v___x_99_; 
v___x_99_ = lean_int_dec_eq(v___x_96_, v___x_97_);
lean_dec(v___x_97_);
lean_dec(v___x_96_);
if (v___x_99_ == 0)
{
uint8_t v___x_100_; 
lean_dec(v_snd_93_);
lean_dec(v_snd_91_);
v___x_100_ = 2;
return v___x_100_;
}
else
{
lean_object* v___x_89__overap_101_; lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_89__overap_101_ = l_Std_Time_Day_instOrdOrdinal;
v___x_102_ = lean_apply_2(v___x_89__overap_101_, v_snd_91_, v_snd_93_);
v___x_103_ = lean_unbox(v___x_102_);
return v___x_103_;
}
}
else
{
uint8_t v___x_104_; 
lean_dec(v___x_97_);
lean_dec(v___x_96_);
lean_dec(v_snd_93_);
lean_dec(v_snd_91_);
v___x_104_ = 0;
return v___x_104_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdValidDate___redArg___lam__0___boxed(lean_object* v_a_105_, lean_object* v_b_106_){
_start:
{
uint8_t v_res_107_; lean_object* v_r_108_; 
v_res_107_ = l_Std_Time_instOrdValidDate___redArg___lam__0(v_a_105_, v_b_106_);
v_r_108_ = lean_box(v_res_107_);
return v_r_108_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdValidDate___redArg(){
_start:
{
lean_object* v___f_111_; 
v___f_111_ = ((lean_object*)(l_Std_Time_instOrdValidDate___redArg___closed__0));
return v___f_111_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdValidDate___redArg___boxed(lean_object* v___dummy_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Std_Time_instOrdValidDate___redArg();
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdValidDate(uint8_t v_leap_114_){
_start:
{
lean_object* v___f_115_; 
v___f_115_ = ((lean_object*)(l_Std_Time_instOrdValidDate___redArg___closed__0));
return v___f_115_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdValidDate___boxed(lean_object* v_leap_116_){
_start:
{
uint8_t v_leap_boxed_117_; lean_object* v_res_118_; 
v_leap_boxed_117_ = lean_unbox(v_leap_116_);
v_res_118_ = l_Std_Time_instOrdValidDate(v_leap_boxed_117_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_ValidDate_dayOfYear(uint8_t v_leap_119_, lean_object* v_ordinal_120_){
_start:
{
lean_object* v_fst_121_; lean_object* v_snd_122_; lean_object* v_days_123_; lean_object* v_bounded_124_; 
v_fst_121_ = lean_ctor_get(v_ordinal_120_, 0);
v_snd_122_ = lean_ctor_get(v_ordinal_120_, 1);
v_days_123_ = l_Std_Time_Month_Ordinal_cumulativeDays(v_leap_119_, v_fst_121_);
v_bounded_124_ = lean_int_add(v_days_123_, v_snd_122_);
lean_dec(v_days_123_);
return v_bounded_124_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_ValidDate_dayOfYear___boxed(lean_object* v_leap_125_, lean_object* v_ordinal_126_){
_start:
{
uint8_t v_leap_boxed_127_; lean_object* v_res_128_; 
v_leap_boxed_127_ = lean_unbox(v_leap_125_);
v_res_128_ = l_Std_Time_ValidDate_dayOfYear(v_leap_boxed_127_, v_ordinal_126_);
lean_dec_ref(v_ordinal_126_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Date_ValidDate_0__Std_Time_ValidDate_ofOrdinal_go___redArg(uint8_t v_leap_129_, lean_object* v_ordinal_130_, lean_object* v_idx_131_, lean_object* v_acc_132_){
_start:
{
lean_object* v_monthDays_133_; lean_object* v___x_134_; uint8_t v___x_135_; 
v_monthDays_133_ = l_Std_Time_Month_Ordinal_days(v_leap_129_, v_idx_131_);
v___x_134_ = lean_int_add(v_acc_132_, v_monthDays_133_);
lean_dec(v_monthDays_133_);
v___x_135_ = lean_int_dec_le(v_ordinal_130_, v___x_134_);
if (v___x_135_ == 0)
{
lean_object* v___x_136_; lean_object* v_idx_u2082_137_; 
lean_dec(v_acc_132_);
v___x_136_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__0, &l_Std_Time_instInhabitedValidDate___redArg___closed__0_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__0);
v_idx_u2082_137_ = lean_int_add(v_idx_131_, v___x_136_);
lean_dec(v_idx_131_);
v_idx_131_ = v_idx_u2082_137_;
v_acc_132_ = v___x_134_;
goto _start;
}
else
{
lean_object* v___x_139_; lean_object* v_days_u2081_140_; lean_object* v___x_141_; 
lean_dec(v___x_134_);
v___x_139_ = lean_int_neg(v_acc_132_);
lean_dec(v_acc_132_);
v_days_u2081_140_ = lean_int_add(v_ordinal_130_, v___x_139_);
lean_dec(v___x_139_);
v___x_141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_141_, 0, v_idx_131_);
lean_ctor_set(v___x_141_, 1, v_days_u2081_140_);
return v___x_141_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Date_ValidDate_0__Std_Time_ValidDate_ofOrdinal_go___redArg___boxed(lean_object* v_leap_142_, lean_object* v_ordinal_143_, lean_object* v_idx_144_, lean_object* v_acc_145_){
_start:
{
uint8_t v_leap_boxed_146_; lean_object* v_res_147_; 
v_leap_boxed_146_ = lean_unbox(v_leap_142_);
v_res_147_ = l___private_Std_Time_Date_ValidDate_0__Std_Time_ValidDate_ofOrdinal_go___redArg(v_leap_boxed_146_, v_ordinal_143_, v_idx_144_, v_acc_145_);
lean_dec(v_ordinal_143_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Date_ValidDate_0__Std_Time_ValidDate_ofOrdinal_go(uint8_t v_leap_148_, lean_object* v_ordinal_149_, lean_object* v_idx_150_, lean_object* v_acc_151_, lean_object* v_h_152_, lean_object* v_p_153_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = l___private_Std_Time_Date_ValidDate_0__Std_Time_ValidDate_ofOrdinal_go___redArg(v_leap_148_, v_ordinal_149_, v_idx_150_, v_acc_151_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Date_ValidDate_0__Std_Time_ValidDate_ofOrdinal_go___boxed(lean_object* v_leap_155_, lean_object* v_ordinal_156_, lean_object* v_idx_157_, lean_object* v_acc_158_, lean_object* v_h_159_, lean_object* v_p_160_){
_start:
{
uint8_t v_leap_boxed_161_; lean_object* v_res_162_; 
v_leap_boxed_161_ = lean_unbox(v_leap_155_);
v_res_162_ = l___private_Std_Time_Date_ValidDate_0__Std_Time_ValidDate_ofOrdinal_go(v_leap_boxed_161_, v_ordinal_156_, v_idx_157_, v_acc_158_, v_h_159_, v_p_160_);
lean_dec(v_ordinal_156_);
return v_res_162_;
}
}
static lean_object* _init_l_Std_Time_ValidDate_ofOrdinal___closed__0(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = lean_unsigned_to_nat(11u);
v___x_164_ = lean_nat_to_int(v___x_163_);
return v___x_164_;
}
}
static lean_object* _init_l_Std_Time_ValidDate_ofOrdinal___closed__1(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_165_ = lean_obj_once(&l_Std_Time_ValidDate_ofOrdinal___closed__0, &l_Std_Time_ValidDate_ofOrdinal___closed__0_once, _init_l_Std_Time_ValidDate_ofOrdinal___closed__0);
v___x_166_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__0, &l_Std_Time_instInhabitedValidDate___redArg___closed__0_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__0);
v___x_167_ = lean_int_add(v___x_166_, v___x_165_);
return v___x_167_;
}
}
static lean_object* _init_l_Std_Time_ValidDate_ofOrdinal___closed__2(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__0, &l_Std_Time_instInhabitedValidDate___redArg___closed__0_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__0);
v___x_169_ = lean_obj_once(&l_Std_Time_ValidDate_ofOrdinal___closed__1, &l_Std_Time_ValidDate_ofOrdinal___closed__1_once, _init_l_Std_Time_ValidDate_ofOrdinal___closed__1);
v___x_170_ = lean_int_sub(v___x_169_, v___x_168_);
return v___x_170_;
}
}
static lean_object* _init_l_Std_Time_ValidDate_ofOrdinal___closed__3(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v_range_173_; 
v___x_171_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__0, &l_Std_Time_instInhabitedValidDate___redArg___closed__0_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__0);
v___x_172_ = lean_obj_once(&l_Std_Time_ValidDate_ofOrdinal___closed__2, &l_Std_Time_ValidDate_ofOrdinal___closed__2_once, _init_l_Std_Time_ValidDate_ofOrdinal___closed__2);
v_range_173_ = lean_int_add(v___x_172_, v___x_171_);
return v_range_173_;
}
}
static lean_object* _init_l_Std_Time_ValidDate_ofOrdinal___closed__4(void){
_start:
{
lean_object* v_range_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v_range_174_ = lean_obj_once(&l_Std_Time_ValidDate_ofOrdinal___closed__3, &l_Std_Time_ValidDate_ofOrdinal___closed__3_once, _init_l_Std_Time_ValidDate_ofOrdinal___closed__3);
v___x_175_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__5, &l_Std_Time_instInhabitedValidDate___redArg___closed__5_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__5);
v___x_176_ = lean_int_emod(v___x_175_, v_range_174_);
return v___x_176_;
}
}
static lean_object* _init_l_Std_Time_ValidDate_ofOrdinal___closed__5(void){
_start:
{
lean_object* v_range_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v_range_177_ = lean_obj_once(&l_Std_Time_ValidDate_ofOrdinal___closed__3, &l_Std_Time_ValidDate_ofOrdinal___closed__3_once, _init_l_Std_Time_ValidDate_ofOrdinal___closed__3);
v___x_178_ = lean_obj_once(&l_Std_Time_ValidDate_ofOrdinal___closed__4, &l_Std_Time_ValidDate_ofOrdinal___closed__4_once, _init_l_Std_Time_ValidDate_ofOrdinal___closed__4);
v___x_179_ = lean_int_add(v___x_178_, v_range_177_);
return v___x_179_;
}
}
static lean_object* _init_l_Std_Time_ValidDate_ofOrdinal___closed__6(void){
_start:
{
lean_object* v_range_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v_range_180_ = lean_obj_once(&l_Std_Time_ValidDate_ofOrdinal___closed__3, &l_Std_Time_ValidDate_ofOrdinal___closed__3_once, _init_l_Std_Time_ValidDate_ofOrdinal___closed__3);
v___x_181_ = lean_obj_once(&l_Std_Time_ValidDate_ofOrdinal___closed__5, &l_Std_Time_ValidDate_ofOrdinal___closed__5_once, _init_l_Std_Time_ValidDate_ofOrdinal___closed__5);
v___x_182_ = lean_int_emod(v___x_181_, v_range_180_);
return v___x_182_;
}
}
static lean_object* _init_l_Std_Time_ValidDate_ofOrdinal___closed__7(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_183_ = lean_obj_once(&l_Std_Time_instInhabitedValidDate___redArg___closed__0, &l_Std_Time_instInhabitedValidDate___redArg___closed__0_once, _init_l_Std_Time_instInhabitedValidDate___redArg___closed__0);
v___x_184_ = lean_obj_once(&l_Std_Time_ValidDate_ofOrdinal___closed__6, &l_Std_Time_ValidDate_ofOrdinal___closed__6_once, _init_l_Std_Time_ValidDate_ofOrdinal___closed__6);
v___x_185_ = lean_int_add(v___x_184_, v___x_183_);
return v___x_185_;
}
}
static lean_object* _init_l_Std_Time_ValidDate_ofOrdinal___closed__8(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lean_unsigned_to_nat(0u);
v___x_187_ = lean_nat_to_int(v___x_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_ValidDate_ofOrdinal(uint8_t v_leap_188_, lean_object* v_ordinal_189_){
_start:
{
lean_object* v___x_190_; lean_object* v_toFun_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_190_ = l_Std_Time_Month_Ordinal_equiv;
v_toFun_191_ = lean_ctor_get(v___x_190_, 0);
v___x_192_ = lean_obj_once(&l_Std_Time_ValidDate_ofOrdinal___closed__7, &l_Std_Time_ValidDate_ofOrdinal___closed__7_once, _init_l_Std_Time_ValidDate_ofOrdinal___closed__7);
lean_inc(v_toFun_191_);
v___x_193_ = lean_apply_1(v_toFun_191_, v___x_192_);
v___x_194_ = lean_obj_once(&l_Std_Time_ValidDate_ofOrdinal___closed__8, &l_Std_Time_ValidDate_ofOrdinal___closed__8_once, _init_l_Std_Time_ValidDate_ofOrdinal___closed__8);
v___x_195_ = l___private_Std_Time_Date_ValidDate_0__Std_Time_ValidDate_ofOrdinal_go___redArg(v_leap_188_, v_ordinal_189_, v___x_193_, v___x_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_ValidDate_ofOrdinal___boxed(lean_object* v_leap_196_, lean_object* v_ordinal_197_){
_start:
{
uint8_t v_leap_boxed_198_; lean_object* v_res_199_; 
v_leap_boxed_198_ = lean_unbox(v_leap_196_);
v_res_199_ = l_Std_Time_ValidDate_ofOrdinal(v_leap_boxed_198_, v_ordinal_197_);
lean_dec(v_ordinal_197_);
return v_res_199_;
}
}
lean_object* runtime_initialize_Std_Time_Date_Unit_Month(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Date_Unit_Month(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Bool(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Date_ValidDate(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Date_Unit_Month(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Date_Unit_Month(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Date_ValidDate(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Date_Unit_Month(uint8_t builtin);
lean_object* initialize_Std_Time_Date_Unit_Month(uint8_t builtin);
lean_object* initialize_Init_Data_Bool(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Date_ValidDate(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Date_Unit_Month(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Date_Unit_Month(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Date_ValidDate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Date_ValidDate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Date_ValidDate(builtin);
}
#ifdef __cplusplus
}
#endif
