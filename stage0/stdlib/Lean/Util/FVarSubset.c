// Lean compiler output
// Module: Lean.Util.FVarSubset
// Imports: public import Lean.Util.CollectFVars public import Lean.Util.FindExpr
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
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* lean_find_ext_expr(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_fvarsSubset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_fvarsSubset___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_fvarsSubset___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_fvarsSubset___closed__0;
static lean_once_cell_t l_Lean_Expr_fvarsSubset___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_fvarsSubset___closed__1;
static const lean_array_object l_Lean_Expr_fvarsSubset___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Expr_fvarsSubset___closed__2 = (const lean_object*)&l_Lean_Expr_fvarsSubset___closed__2_value;
static lean_once_cell_t l_Lean_Expr_fvarsSubset___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_fvarsSubset___closed__3;
LEAN_EXPORT uint8_t l_Lean_Expr_fvarsSubset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_fvarsSubset___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_fvarsSubset___lam__0(lean_object* v_s_1_, lean_object* v_e_2_){
_start:
{
uint8_t v___x_3_; 
v___x_3_ = l_Lean_Expr_hasFVar(v_e_2_);
if (v___x_3_ == 0)
{
uint8_t v___x_4_; 
v___x_4_ = 2;
return v___x_4_;
}
else
{
uint8_t v___x_5_; 
v___x_5_ = l_Lean_Expr_isFVar(v_e_2_);
if (v___x_5_ == 0)
{
uint8_t v___x_6_; 
v___x_6_ = 1;
return v___x_6_;
}
else
{
lean_object* v_fvarSet_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v_fvarSet_7_ = lean_ctor_get(v_s_1_, 1);
v___x_8_ = l_Lean_Expr_fvarId_x21(v_e_2_);
v___x_9_ = l_Lean_FVarIdSet_contains(v_fvarSet_7_, v___x_8_);
lean_dec(v___x_8_);
if (v___x_9_ == 0)
{
if (v___x_5_ == 0)
{
uint8_t v___x_10_; 
v___x_10_ = 1;
return v___x_10_;
}
else
{
uint8_t v___x_11_; 
v___x_11_ = 0;
return v___x_11_;
}
}
else
{
uint8_t v___x_12_; 
v___x_12_ = 1;
return v___x_12_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_fvarsSubset___lam__0___boxed(lean_object* v_s_13_, lean_object* v_e_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Lean_Expr_fvarsSubset___lam__0(v_s_13_, v_e_14_);
lean_dec_ref(v_e_14_);
lean_dec_ref(v_s_13_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
static lean_object* _init_l_Lean_Expr_fvarsSubset___closed__0(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_17_ = lean_box(0);
v___x_18_ = lean_unsigned_to_nat(16u);
v___x_19_ = lean_mk_array(v___x_18_, v___x_17_);
return v___x_19_;
}
}
static lean_object* _init_l_Lean_Expr_fvarsSubset___closed__1(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_20_ = lean_obj_once(&l_Lean_Expr_fvarsSubset___closed__0, &l_Lean_Expr_fvarsSubset___closed__0_once, _init_l_Lean_Expr_fvarsSubset___closed__0);
v___x_21_ = lean_unsigned_to_nat(0u);
v___x_22_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
lean_ctor_set(v___x_22_, 1, v___x_20_);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Expr_fvarsSubset___closed__3(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_25_ = ((lean_object*)(l_Lean_Expr_fvarsSubset___closed__2));
v___x_26_ = lean_box(1);
v___x_27_ = lean_obj_once(&l_Lean_Expr_fvarsSubset___closed__1, &l_Lean_Expr_fvarsSubset___closed__1_once, _init_l_Lean_Expr_fvarsSubset___closed__1);
v___x_28_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_28_, 0, v___x_27_);
lean_ctor_set(v___x_28_, 1, v___x_26_);
lean_ctor_set(v___x_28_, 2, v___x_25_);
return v___x_28_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_fvarsSubset(lean_object* v_a_29_, lean_object* v_b_30_){
_start:
{
uint8_t v___x_31_; 
v___x_31_ = l_Lean_Expr_hasFVar(v_a_29_);
if (v___x_31_ == 0)
{
uint8_t v___x_32_; 
lean_dec_ref(v_b_30_);
v___x_32_ = 1;
return v___x_32_;
}
else
{
uint8_t v___x_33_; uint8_t v___x_34_; 
v___x_33_ = 0;
v___x_34_ = l_Lean_Expr_hasFVar(v_b_30_);
if (v___x_34_ == 0)
{
lean_dec_ref(v_b_30_);
return v___x_33_;
}
else
{
lean_object* v___x_35_; lean_object* v_s_36_; lean_object* v___f_37_; lean_object* v___x_38_; 
v___x_35_ = lean_obj_once(&l_Lean_Expr_fvarsSubset___closed__3, &l_Lean_Expr_fvarsSubset___closed__3_once, _init_l_Lean_Expr_fvarsSubset___closed__3);
v_s_36_ = l_Lean_collectFVars(v___x_35_, v_b_30_);
v___f_37_ = lean_alloc_closure((void*)(l_Lean_Expr_fvarsSubset___lam__0___boxed), 2, 1);
lean_closure_set(v___f_37_, 0, v_s_36_);
v___x_38_ = lean_find_ext_expr(v___f_37_, v_a_29_);
lean_dec_ref(v___f_37_);
if (lean_obj_tag(v___x_38_) == 0)
{
return v___x_34_;
}
else
{
lean_dec_ref_known(v___x_38_, 1);
return v___x_33_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_fvarsSubset___boxed(lean_object* v_a_39_, lean_object* v_b_40_){
_start:
{
uint8_t v_res_41_; lean_object* v_r_42_; 
v_res_41_ = l_Lean_Expr_fvarsSubset(v_a_39_, v_b_40_);
lean_dec_ref(v_a_39_);
v_r_42_ = lean_box(v_res_41_);
return v_r_42_;
}
}
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_FindExpr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_FVarSubset(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_FindExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_FVarSubset(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* initialize_Lean_Util_FindExpr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_FVarSubset(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_FindExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_FVarSubset(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_FVarSubset(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_FVarSubset(builtin);
}
#ifdef __cplusplus
}
#endif
