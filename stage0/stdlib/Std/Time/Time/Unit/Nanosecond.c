// Lean compiler output
// Module: Std.Time.Time.Unit.Nanosecond
// Imports: public import Std.Time.Internal
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
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_neg___boxed(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
lean_object* l_Int_repr___boxed(lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
static lean_once_cell_t l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_instReprOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instReprOrdinal___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instReprOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instReprOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instReprOrdinal = (const lean_object*)&l_Std_Time_Nanosecond_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLEOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLTOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOrdinal(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOrdinal___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instInhabitedOrdinal;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLeOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLeOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLeOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLeOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLtOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLtOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLtOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLtOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instOrdOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOrdOrdinal___aux__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instOrdOrdinal___aux__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instOrdOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instOrdOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instOrdOrdinal = (const lean_object*)&l_Std_Time_Nanosecond_instOrdOrdinal___closed__0_value;
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
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instOrdOffset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOrdOffset___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_instOrdOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instOrdOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instOrdOffset___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instOrdOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instOrdOffset = (const lean_object*)&l_Std_Time_Nanosecond_instOrdOffset___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOffset(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLeOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLeOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLtOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLtOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofInt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprSpan___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprSpan___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instReprSpan = (const lean_object*)&l_Std_Time_Nanosecond_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqSpan___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqSpan___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqSpan(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqSpan___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLESpan;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLTSpan;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instInhabitedSpan;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLeSpan___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLeSpan___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLeSpan(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLeSpan___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLtSpan___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLtSpan___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLtSpan(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLtSpan___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instOrdSpan___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOrdSpan___aux__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_instOrdSpan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instOrdSpan___aux__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instOrdSpan___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instOrdSpan___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instOrdSpan = (const lean_object*)&l_Std_Time_Nanosecond_instOrdSpan___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toOffset(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toOffset___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00Std_Time_Nanosecond_Span_toOffset_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Nanosecond_Span_toOffset_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instReprOfDay___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instReprOfDay___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_Ordinal_instReprOfDay = (const lean_object*)&l_Std_Time_Nanosecond_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instLEOfDay;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instLTOfDay;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instInhabitedOfDay;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLeOfDay___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLeOfDay___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLeOfDay(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLeOfDay___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLtOfDay___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLtOfDay___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLtOfDay(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLtOfDay___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instOrdOfDay___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instOrdOfDay___aux__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_Ordinal_instOrdOfDay___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_Ordinal_instOrdOfDay___aux__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_Ordinal_instOrdOfDay___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_Ordinal_instOrdOfDay___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_Ordinal_instOrdOfDay = (const lean_object*)&l_Std_Time_Nanosecond_Ordinal_instOrdOfDay___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofNat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofFin(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toOffset(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toOffset___boxed(lean_object*);
static lean_object* _init_l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___aux__1(lean_object* v_n_3_, lean_object* v_a_4_){
_start:
{
lean_object* v___x_5_; uint8_t v___x_6_; 
v___x_5_ = lean_obj_once(&l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0, &l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0);
v___x_6_ = lean_int_dec_lt(v_n_3_, v___x_5_);
if (v___x_6_ == 0)
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = l_Int_repr(v_n_3_);
v___x_8_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
else
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = l_Int_repr(v_n_3_);
v___x_10_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
v___x_11_ = l_Repr_addAppParen(v___x_10_, v_a_4_);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___aux__1___boxed(lean_object* v_n_12_, lean_object* v_a_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Std_Time_Nanosecond_instReprOrdinal___aux__1(v_n_12_, v_a_13_);
lean_dec(v_a_13_);
lean_dec(v_n_12_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0(lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v___x_17_; uint8_t v___x_18_; 
v___x_17_ = lean_obj_once(&l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0, &l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0);
v___x_18_ = lean_int_dec_lt(v___y_15_, v___x_17_);
if (v___x_18_ == 0)
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = l_Int_repr(v___y_15_);
v___x_20_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_20_, 0, v___x_19_);
return v___x_20_;
}
else
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_21_ = l_Int_repr(v___y_15_);
v___x_22_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
v___x_23_ = l_Repr_addAppParen(v___x_22_, v___y_16_);
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0___boxed(lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Std_Time_Nanosecond_instReprOrdinal___lam__0(v___y_24_, v___y_25_);
lean_dec(v___y_25_);
lean_dec(v___y_24_);
return v_res_26_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqOrdinal___aux__1(lean_object* v_a_29_, lean_object* v_b_30_){
_start:
{
uint8_t v___x_31_; 
v___x_31_ = lean_int_dec_eq(v_a_29_, v_b_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqOrdinal___aux__1___boxed(lean_object* v_a_32_, lean_object* v_b_33_){
_start:
{
uint8_t v_res_34_; lean_object* v_r_35_; 
v_res_34_ = l_Std_Time_Nanosecond_instDecidableEqOrdinal___aux__1(v_a_32_, v_b_33_);
lean_dec(v_b_33_);
lean_dec(v_a_32_);
v_r_35_ = lean_box(v_res_34_);
return v_r_35_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqOrdinal(lean_object* v_a_36_, lean_object* v_b_37_){
_start:
{
uint8_t v___x_38_; 
v___x_38_ = lean_int_dec_eq(v_a_36_, v_b_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqOrdinal___boxed(lean_object* v_a_39_, lean_object* v_b_40_){
_start:
{
uint8_t v_res_41_; lean_object* v_r_42_; 
v_res_41_ = l_Std_Time_Nanosecond_instDecidableEqOrdinal(v_a_39_, v_b_40_);
lean_dec(v_b_40_);
lean_dec(v_a_39_);
v_r_42_ = lean_box(v_res_41_);
return v_r_42_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLEOrdinal(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = lean_box(0);
return v___x_43_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLTOrdinal(void){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lean_box(0);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOrdinal(lean_object* v_n_45_){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_unsigned_to_nat(1000000000u);
v___x_47_ = lean_nat_mod(v_n_45_, v___x_46_);
v___x_48_ = lean_nat_to_int(v___x_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOrdinal___boxed(lean_object* v_n_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Std_Time_Nanosecond_instOfNatOrdinal(v_n_49_);
lean_dec(v_n_49_);
return v_res_50_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = lean_unsigned_to_nat(1000000000u);
v___x_52_ = lean_unsigned_to_nat(0u);
v___x_53_ = lean_nat_mod(v___x_52_, v___x_51_);
return v___x_53_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_obj_once(&l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0, &l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0);
v___x_55_ = lean_nat_to_int(v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_obj_once(&l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1, &l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1);
return v___x_56_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLeOrdinal___aux__1(lean_object* v_x_57_, lean_object* v_y_58_){
_start:
{
uint8_t v___x_59_; 
v___x_59_ = lean_int_dec_le(v_x_57_, v_y_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLeOrdinal___aux__1___boxed(lean_object* v_x_60_, lean_object* v_y_61_){
_start:
{
uint8_t v_res_62_; lean_object* v_r_63_; 
v_res_62_ = l_Std_Time_Nanosecond_instDecidableLeOrdinal___aux__1(v_x_60_, v_y_61_);
lean_dec(v_y_61_);
lean_dec(v_x_60_);
v_r_63_ = lean_box(v_res_62_);
return v_r_63_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLeOrdinal(lean_object* v___y_64_, lean_object* v___y_65_){
_start:
{
uint8_t v___x_66_; 
v___x_66_ = lean_int_dec_le(v___y_64_, v___y_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLeOrdinal___boxed(lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
uint8_t v_res_69_; lean_object* v_r_70_; 
v_res_69_ = l_Std_Time_Nanosecond_instDecidableLeOrdinal(v___y_67_, v___y_68_);
lean_dec(v___y_68_);
lean_dec(v___y_67_);
v_r_70_ = lean_box(v_res_69_);
return v_r_70_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLtOrdinal___aux__1(lean_object* v_x_71_, lean_object* v_y_72_){
_start:
{
uint8_t v___x_73_; 
v___x_73_ = lean_int_dec_lt(v_x_71_, v_y_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLtOrdinal___aux__1___boxed(lean_object* v_x_74_, lean_object* v_y_75_){
_start:
{
uint8_t v_res_76_; lean_object* v_r_77_; 
v_res_76_ = l_Std_Time_Nanosecond_instDecidableLtOrdinal___aux__1(v_x_74_, v_y_75_);
lean_dec(v_y_75_);
lean_dec(v_x_74_);
v_r_77_ = lean_box(v_res_76_);
return v_r_77_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLtOrdinal(lean_object* v___y_78_, lean_object* v___y_79_){
_start:
{
uint8_t v___x_80_; 
v___x_80_ = lean_int_dec_lt(v___y_78_, v___y_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLtOrdinal___boxed(lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
uint8_t v_res_83_; lean_object* v_r_84_; 
v_res_83_ = l_Std_Time_Nanosecond_instDecidableLtOrdinal(v___y_81_, v___y_82_);
lean_dec(v___y_82_);
lean_dec(v___y_81_);
v_r_84_ = lean_box(v_res_83_);
return v_r_84_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instOrdOrdinal___aux__1(lean_object* v_x_85_, lean_object* v_y_86_){
_start:
{
uint8_t v___x_87_; 
v___x_87_ = lean_int_dec_lt(v_x_85_, v_y_86_);
if (v___x_87_ == 0)
{
uint8_t v___x_88_; 
v___x_88_ = lean_int_dec_eq(v_x_85_, v_y_86_);
if (v___x_88_ == 0)
{
uint8_t v___x_89_; 
v___x_89_ = 2;
return v___x_89_;
}
else
{
uint8_t v___x_90_; 
v___x_90_ = 1;
return v___x_90_;
}
}
else
{
uint8_t v___x_91_; 
v___x_91_ = 0;
return v___x_91_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOrdOrdinal___aux__1___boxed(lean_object* v_x_92_, lean_object* v_y_93_){
_start:
{
uint8_t v_res_94_; lean_object* v_r_95_; 
v_res_94_ = l_Std_Time_Nanosecond_instOrdOrdinal___aux__1(v_x_92_, v_y_93_);
lean_dec(v_y_93_);
lean_dec(v_x_92_);
v_r_95_ = lean_box(v_res_94_);
return v_r_95_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_mk(lean_object* v_toUnitVal_98_){
_start:
{
lean_inc(v_toUnitVal_98_);
return v_toUnitVal_98_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_mk___boxed(lean_object* v_toUnitVal_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Std_Time_Nanosecond_Offset_mk(v_toUnitVal_99_);
lean_dec(v_toUnitVal_99_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_toUnitVal(lean_object* v_self_101_){
_start:
{
lean_inc(v_self_101_);
return v_self_101_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_toUnitVal___boxed(lean_object* v_self_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Std_Time_Nanosecond_Offset_toUnitVal(v_self_102_);
lean_dec(v_self_102_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_val(lean_object* v_offset_104_){
_start:
{
lean_inc(v_offset_104_);
return v_offset_104_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_val___boxed(lean_object* v_offset_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Std_Time_Nanosecond_Offset_val(v_offset_105_);
lean_dec(v_offset_105_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOffset___lam__0(lean_object* v_offset_107_, lean_object* v_prec_108_){
_start:
{
lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_109_ = lean_obj_once(&l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0, &l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0);
v___x_110_ = lean_int_dec_lt(v_offset_107_, v___x_109_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = l_Int_repr(v_offset_107_);
v___x_112_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
return v___x_112_;
}
else
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_113_ = l_Int_repr(v_offset_107_);
v___x_114_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
v___x_115_ = l_Repr_addAppParen(v___x_114_, v_prec_108_);
return v___x_115_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOffset___lam__0___boxed(lean_object* v_offset_116_, lean_object* v_prec_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Std_Time_Nanosecond_instReprOffset___lam__0(v_offset_116_, v_prec_117_);
lean_dec(v_prec_117_);
lean_dec(v_offset_116_);
return v_res_118_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedOffset___closed__0(void){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_123_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedOffset(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lean_obj_once(&l_Std_Time_Nanosecond_instInhabitedOffset___closed__0, &l_Std_Time_Nanosecond_instInhabitedOffset___closed__0_once, _init_l_Std_Time_Nanosecond_instInhabitedOffset___closed__0);
return v___x_124_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqOffset(lean_object* v_x_125_, lean_object* v_y_126_){
_start:
{
uint8_t v___x_127_; 
v___x_127_ = lean_int_dec_eq(v_x_125_, v_y_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqOffset___boxed(lean_object* v_x_128_, lean_object* v_y_129_){
_start:
{
uint8_t v_res_130_; lean_object* v_r_131_; 
v_res_130_ = l_Std_Time_Nanosecond_instDecidableEqOffset(v_x_128_, v_y_129_);
lean_dec(v_y_129_);
lean_dec(v_x_128_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLEOffset(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_box(0);
return v___x_138_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLTOffset(void){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lean_box(0);
return v___x_139_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instOrdOffset___lam__0(lean_object* v_x_140_, lean_object* v_y_141_){
_start:
{
uint8_t v___x_142_; 
v___x_142_ = lean_int_dec_lt(v_x_140_, v_y_141_);
if (v___x_142_ == 0)
{
uint8_t v___x_143_; 
v___x_143_ = lean_int_dec_eq(v_x_140_, v_y_141_);
if (v___x_143_ == 0)
{
uint8_t v___x_144_; 
v___x_144_ = 2;
return v___x_144_;
}
else
{
uint8_t v___x_145_; 
v___x_145_ = 1;
return v___x_145_;
}
}
else
{
uint8_t v___x_146_; 
v___x_146_ = 0;
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOrdOffset___lam__0___boxed(lean_object* v_x_147_, lean_object* v_y_148_){
_start:
{
uint8_t v_res_149_; lean_object* v_r_150_; 
v_res_149_ = l_Std_Time_Nanosecond_instOrdOffset___lam__0(v_x_147_, v_y_148_);
lean_dec(v_y_148_);
lean_dec(v_x_147_);
v_r_150_ = lean_box(v_res_149_);
return v_r_150_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOffset(lean_object* v_n_153_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_nat_to_int(v_n_153_);
return v___x_154_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLeOffset(lean_object* v_x_155_, lean_object* v_y_156_){
_start:
{
uint8_t v___x_157_; 
v___x_157_ = lean_int_dec_le(v_x_155_, v_y_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLeOffset___boxed(lean_object* v_x_158_, lean_object* v_y_159_){
_start:
{
uint8_t v_res_160_; lean_object* v_r_161_; 
v_res_160_ = l_Std_Time_Nanosecond_instDecidableLeOffset(v_x_158_, v_y_159_);
lean_dec(v_y_159_);
lean_dec(v_x_158_);
v_r_161_ = lean_box(v_res_160_);
return v_r_161_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLtOffset(lean_object* v_x_162_, lean_object* v_y_163_){
_start:
{
uint8_t v___x_164_; 
v___x_164_ = lean_int_dec_lt(v_x_162_, v_y_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLtOffset___boxed(lean_object* v_x_165_, lean_object* v_y_166_){
_start:
{
uint8_t v_res_167_; lean_object* v_r_168_; 
v_res_167_ = l_Std_Time_Nanosecond_instDecidableLtOffset(v_x_165_, v_y_166_);
lean_dec(v_y_166_);
lean_dec(v_x_165_);
v_r_168_ = lean_box(v_res_167_);
return v_r_168_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofNat(lean_object* v_data_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_nat_to_int(v_data_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofInt(lean_object* v_data_171_){
_start:
{
lean_inc(v_data_171_);
return v_data_171_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofInt___boxed(lean_object* v_data_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Std_Time_Nanosecond_Offset_ofInt(v_data_172_);
lean_dec(v_data_172_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprSpan___aux__1(lean_object* v_n_174_, lean_object* v_a_175_){
_start:
{
lean_object* v___x_176_; uint8_t v___x_177_; 
v___x_176_ = lean_obj_once(&l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0, &l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0);
v___x_177_ = lean_int_dec_lt(v_n_174_, v___x_176_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = l_Int_repr(v_n_174_);
v___x_179_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_179_, 0, v___x_178_);
return v___x_179_;
}
else
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_180_ = l_Int_repr(v_n_174_);
v___x_181_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
v___x_182_ = l_Repr_addAppParen(v___x_181_, v_a_175_);
return v___x_182_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprSpan___aux__1___boxed(lean_object* v_n_183_, lean_object* v_a_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l_Std_Time_Nanosecond_instReprSpan___aux__1(v_n_183_, v_a_184_);
lean_dec(v_a_184_);
lean_dec(v_n_183_);
return v_res_185_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqSpan___aux__1(lean_object* v_a_187_, lean_object* v_b_188_){
_start:
{
uint8_t v___x_189_; 
v___x_189_ = lean_int_dec_eq(v_a_187_, v_b_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqSpan___aux__1___boxed(lean_object* v_a_190_, lean_object* v_b_191_){
_start:
{
uint8_t v_res_192_; lean_object* v_r_193_; 
v_res_192_ = l_Std_Time_Nanosecond_instDecidableEqSpan___aux__1(v_a_190_, v_b_191_);
lean_dec(v_b_191_);
lean_dec(v_a_190_);
v_r_193_ = lean_box(v_res_192_);
return v_r_193_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqSpan(lean_object* v_a_194_, lean_object* v_b_195_){
_start:
{
uint8_t v___x_196_; 
v___x_196_ = lean_int_dec_eq(v_a_194_, v_b_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqSpan___boxed(lean_object* v_a_197_, lean_object* v_b_198_){
_start:
{
uint8_t v_res_199_; lean_object* v_r_200_; 
v_res_199_ = l_Std_Time_Nanosecond_instDecidableEqSpan(v_a_197_, v_b_198_);
lean_dec(v_b_198_);
lean_dec(v_a_197_);
v_r_200_ = lean_box(v_res_199_);
return v_r_200_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLESpan(void){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = lean_box(0);
return v___x_201_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLTSpan(void){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = lean_box(0);
return v___x_202_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedSpan(void){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = lean_obj_once(&l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0, &l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0);
return v___x_203_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLeSpan___aux__1(lean_object* v_x_204_, lean_object* v_y_205_){
_start:
{
uint8_t v___x_206_; 
v___x_206_ = lean_int_dec_le(v_x_204_, v_y_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLeSpan___aux__1___boxed(lean_object* v_x_207_, lean_object* v_y_208_){
_start:
{
uint8_t v_res_209_; lean_object* v_r_210_; 
v_res_209_ = l_Std_Time_Nanosecond_instDecidableLeSpan___aux__1(v_x_207_, v_y_208_);
lean_dec(v_y_208_);
lean_dec(v_x_207_);
v_r_210_ = lean_box(v_res_209_);
return v_r_210_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLeSpan(lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
uint8_t v___x_213_; 
v___x_213_ = lean_int_dec_le(v___y_211_, v___y_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLeSpan___boxed(lean_object* v___y_214_, lean_object* v___y_215_){
_start:
{
uint8_t v_res_216_; lean_object* v_r_217_; 
v_res_216_ = l_Std_Time_Nanosecond_instDecidableLeSpan(v___y_214_, v___y_215_);
lean_dec(v___y_215_);
lean_dec(v___y_214_);
v_r_217_ = lean_box(v_res_216_);
return v_r_217_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLtSpan___aux__1(lean_object* v_x_218_, lean_object* v_y_219_){
_start:
{
uint8_t v___x_220_; 
v___x_220_ = lean_int_dec_lt(v_x_218_, v_y_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLtSpan___aux__1___boxed(lean_object* v_x_221_, lean_object* v_y_222_){
_start:
{
uint8_t v_res_223_; lean_object* v_r_224_; 
v_res_223_ = l_Std_Time_Nanosecond_instDecidableLtSpan___aux__1(v_x_221_, v_y_222_);
lean_dec(v_y_222_);
lean_dec(v_x_221_);
v_r_224_ = lean_box(v_res_223_);
return v_r_224_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLtSpan(lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
uint8_t v___x_227_; 
v___x_227_ = lean_int_dec_lt(v___y_225_, v___y_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLtSpan___boxed(lean_object* v___y_228_, lean_object* v___y_229_){
_start:
{
uint8_t v_res_230_; lean_object* v_r_231_; 
v_res_230_ = l_Std_Time_Nanosecond_instDecidableLtSpan(v___y_228_, v___y_229_);
lean_dec(v___y_229_);
lean_dec(v___y_228_);
v_r_231_ = lean_box(v_res_230_);
return v_r_231_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instOrdSpan___aux__1(lean_object* v_x_232_, lean_object* v_y_233_){
_start:
{
uint8_t v___x_234_; 
v___x_234_ = lean_int_dec_lt(v_x_232_, v_y_233_);
if (v___x_234_ == 0)
{
uint8_t v___x_235_; 
v___x_235_ = lean_int_dec_eq(v_x_232_, v_y_233_);
if (v___x_235_ == 0)
{
uint8_t v___x_236_; 
v___x_236_ = 2;
return v___x_236_;
}
else
{
uint8_t v___x_237_; 
v___x_237_ = 1;
return v___x_237_;
}
}
else
{
uint8_t v___x_238_; 
v___x_238_ = 0;
return v___x_238_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOrdSpan___aux__1___boxed(lean_object* v_x_239_, lean_object* v_y_240_){
_start:
{
uint8_t v_res_241_; lean_object* v_r_242_; 
v_res_241_ = l_Std_Time_Nanosecond_instOrdSpan___aux__1(v_x_239_, v_y_240_);
lean_dec(v_y_240_);
lean_dec(v_x_239_);
v_r_242_ = lean_box(v_res_241_);
return v_r_242_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toOffset(lean_object* v_span_245_){
_start:
{
lean_inc(v_span_245_);
return v_span_245_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toOffset___boxed(lean_object* v_span_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Std_Time_Nanosecond_Span_toOffset(v_span_246_);
lean_dec(v_span_246_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00Std_Time_Nanosecond_Span_toOffset_spec__0_spec__0(lean_object* v_a_248_){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = lean_nat_to_int(v_a_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Nanosecond_Span_toOffset_spec__0(lean_object* v_a_250_){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_251_ = lean_nat_to_int(v_a_250_);
v___x_252_ = l_Rat_ofInt(v___x_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instReprOfDay___aux__1(lean_object* v_n_253_, lean_object* v_a_254_){
_start:
{
lean_object* v___x_255_; uint8_t v___x_256_; 
v___x_255_ = lean_obj_once(&l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0, &l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0);
v___x_256_ = lean_int_dec_lt(v_n_253_, v___x_255_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = l_Int_repr(v_n_253_);
v___x_258_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
return v___x_258_;
}
else
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_259_ = l_Int_repr(v_n_253_);
v___x_260_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
v___x_261_ = l_Repr_addAppParen(v___x_260_, v_a_254_);
return v___x_261_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instReprOfDay___aux__1___boxed(lean_object* v_n_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Std_Time_Nanosecond_Ordinal_instReprOfDay___aux__1(v_n_262_, v_a_263_);
lean_dec(v_a_263_);
lean_dec(v_n_262_);
return v_res_264_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay___aux__1(lean_object* v_a_266_, lean_object* v_b_267_){
_start:
{
uint8_t v___x_268_; 
v___x_268_ = lean_int_dec_eq(v_a_266_, v_b_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay___aux__1___boxed(lean_object* v_a_269_, lean_object* v_b_270_){
_start:
{
uint8_t v_res_271_; lean_object* v_r_272_; 
v_res_271_ = l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay___aux__1(v_a_269_, v_b_270_);
lean_dec(v_b_270_);
lean_dec(v_a_269_);
v_r_272_ = lean_box(v_res_271_);
return v_r_272_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay(lean_object* v_a_273_, lean_object* v_b_274_){
_start:
{
uint8_t v___x_275_; 
v___x_275_ = lean_int_dec_eq(v_a_273_, v_b_274_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay___boxed(lean_object* v_a_276_, lean_object* v_b_277_){
_start:
{
uint8_t v_res_278_; lean_object* v_r_279_; 
v_res_278_ = l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay(v_a_276_, v_b_277_);
lean_dec(v_b_277_);
lean_dec(v_a_276_);
v_r_279_ = lean_box(v_res_278_);
return v_r_279_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_Ordinal_instLEOfDay(void){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = lean_box(0);
return v___x_280_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_Ordinal_instLTOfDay(void){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = lean_box(0);
return v___x_281_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_Ordinal_instInhabitedOfDay(void){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = lean_obj_once(&l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0, &l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Nanosecond_instReprOrdinal___aux__1___closed__0);
return v___x_282_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLeOfDay___aux__1(lean_object* v_x_283_, lean_object* v_y_284_){
_start:
{
uint8_t v___x_285_; 
v___x_285_ = lean_int_dec_le(v_x_283_, v_y_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLeOfDay___aux__1___boxed(lean_object* v_x_286_, lean_object* v_y_287_){
_start:
{
uint8_t v_res_288_; lean_object* v_r_289_; 
v_res_288_ = l_Std_Time_Nanosecond_Ordinal_instDecidableLeOfDay___aux__1(v_x_286_, v_y_287_);
lean_dec(v_y_287_);
lean_dec(v_x_286_);
v_r_289_ = lean_box(v_res_288_);
return v_r_289_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLeOfDay(lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
uint8_t v___x_292_; 
v___x_292_ = lean_int_dec_le(v___y_290_, v___y_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLeOfDay___boxed(lean_object* v___y_293_, lean_object* v___y_294_){
_start:
{
uint8_t v_res_295_; lean_object* v_r_296_; 
v_res_295_ = l_Std_Time_Nanosecond_Ordinal_instDecidableLeOfDay(v___y_293_, v___y_294_);
lean_dec(v___y_294_);
lean_dec(v___y_293_);
v_r_296_ = lean_box(v_res_295_);
return v_r_296_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLtOfDay___aux__1(lean_object* v_x_297_, lean_object* v_y_298_){
_start:
{
uint8_t v___x_299_; 
v___x_299_ = lean_int_dec_lt(v_x_297_, v_y_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLtOfDay___aux__1___boxed(lean_object* v_x_300_, lean_object* v_y_301_){
_start:
{
uint8_t v_res_302_; lean_object* v_r_303_; 
v_res_302_ = l_Std_Time_Nanosecond_Ordinal_instDecidableLtOfDay___aux__1(v_x_300_, v_y_301_);
lean_dec(v_y_301_);
lean_dec(v_x_300_);
v_r_303_ = lean_box(v_res_302_);
return v_r_303_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLtOfDay(lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
uint8_t v___x_306_; 
v___x_306_ = lean_int_dec_lt(v___y_304_, v___y_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLtOfDay___boxed(lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
uint8_t v_res_309_; lean_object* v_r_310_; 
v_res_309_ = l_Std_Time_Nanosecond_Ordinal_instDecidableLtOfDay(v___y_307_, v___y_308_);
lean_dec(v___y_308_);
lean_dec(v___y_307_);
v_r_310_ = lean_box(v_res_309_);
return v_r_310_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instOrdOfDay___aux__1(lean_object* v_x_311_, lean_object* v_y_312_){
_start:
{
uint8_t v___x_313_; 
v___x_313_ = lean_int_dec_lt(v_x_311_, v_y_312_);
if (v___x_313_ == 0)
{
uint8_t v___x_314_; 
v___x_314_ = lean_int_dec_eq(v_x_311_, v_y_312_);
if (v___x_314_ == 0)
{
uint8_t v___x_315_; 
v___x_315_ = 2;
return v___x_315_;
}
else
{
uint8_t v___x_316_; 
v___x_316_ = 1;
return v___x_316_;
}
}
else
{
uint8_t v___x_317_; 
v___x_317_ = 0;
return v___x_317_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instOrdOfDay___aux__1___boxed(lean_object* v_x_318_, lean_object* v_y_319_){
_start:
{
uint8_t v_res_320_; lean_object* v_r_321_; 
v_res_320_ = l_Std_Time_Nanosecond_Ordinal_instOrdOfDay___aux__1(v_x_318_, v_y_319_);
lean_dec(v_y_319_);
lean_dec(v_x_318_);
v_r_321_ = lean_box(v_res_320_);
return v_r_321_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___redArg(lean_object* v_data_324_){
_start:
{
lean_inc(v_data_324_);
return v_data_324_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___redArg___boxed(lean_object* v_data_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Std_Time_Nanosecond_Ordinal_ofInt___redArg(v_data_325_);
lean_dec(v_data_325_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt(lean_object* v_data_327_, lean_object* v_h_328_){
_start:
{
lean_inc(v_data_327_);
return v_data_327_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___boxed(lean_object* v_data_329_, lean_object* v_h_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Std_Time_Nanosecond_Ordinal_ofInt(v_data_329_, v_h_330_);
lean_dec(v_data_329_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofNat___redArg(lean_object* v_data_332_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = lean_nat_to_int(v_data_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofNat(lean_object* v_data_334_, lean_object* v_h_335_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = lean_nat_to_int(v_data_334_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofFin(lean_object* v_data_337_){
_start:
{
lean_object* v___x_338_; 
v___x_338_ = lean_nat_to_int(v_data_337_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toOffset(lean_object* v_ordinal_339_){
_start:
{
lean_inc(v_ordinal_339_);
return v_ordinal_339_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toOffset___boxed(lean_object* v_ordinal_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Std_Time_Nanosecond_Ordinal_toOffset(v_ordinal_340_);
lean_dec(v_ordinal_340_);
return v_res_341_;
}
}
lean_object* runtime_initialize_Std_Time_Internal(uint8_t builtin);
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
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Time_Unit_Nanosecond(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Internal(builtin);
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
