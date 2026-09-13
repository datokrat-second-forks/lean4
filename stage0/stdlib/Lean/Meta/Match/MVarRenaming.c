// Lean compiler output
// Module: Lean.Meta.Match.MVarRenaming
// Imports: public import Lean.Util.ReplaceExpr
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
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_MVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
uint8_t l_Lean_MVarIdMap_isEmpty___redArg(lean_object*);
lean_object* lean_replace_expr(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_MVarRenaming_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_find_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MVarRenaming_find_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_Meta_MVarRenaming_find_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Lean_Meta_MVarRenaming_find_x21___closed__0 = (const lean_object*)&l_Lean_Meta_MVarRenaming_find_x21___closed__0_value;
static const lean_string_object l_Lean_Meta_MVarRenaming_find_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Lean_Meta_MVarRenaming_find_x21___closed__1 = (const lean_object*)&l_Lean_Meta_MVarRenaming_find_x21___closed__1_value;
static const lean_string_object l_Lean_Meta_MVarRenaming_find_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Lean_Meta_MVarRenaming_find_x21___closed__2 = (const lean_object*)&l_Lean_Meta_MVarRenaming_find_x21___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MVarRenaming_find_x21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MVarRenaming_find_x21___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_find_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_find_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_apply___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_apply___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_apply(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_apply___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_MVarRenaming_isEmpty(lean_object* v_s_1_){
_start:
{
uint8_t v___x_2_; 
v___x_2_ = l_Lean_MVarIdMap_isEmpty___redArg(v_s_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_isEmpty___boxed(lean_object* v_s_3_){
_start:
{
uint8_t v_res_4_; lean_object* v_r_5_; 
v_res_4_ = l_Lean_Meta_MVarRenaming_isEmpty(v_s_3_);
lean_dec(v_s_3_);
v_r_5_ = lean_box(v_res_4_);
return v_r_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_find_x3f(lean_object* v_s_6_, lean_object* v_mvarId_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_MVarIdMap_get_x3f_spec__0___redArg(v_s_6_, v_mvarId_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_find_x3f___boxed(lean_object* v_s_9_, lean_object* v_mvarId_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_Meta_MVarRenaming_find_x3f(v_s_9_, v_mvarId_10_);
lean_dec(v_mvarId_10_);
lean_dec(v_s_9_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MVarRenaming_find_x21_spec__0(lean_object* v_msg_12_){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_box(0);
v___x_14_ = lean_panic_fn_borrowed(v___x_13_, v_msg_12_);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Meta_MVarRenaming_find_x21___closed__3(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_18_ = ((lean_object*)(l_Lean_Meta_MVarRenaming_find_x21___closed__2));
v___x_19_ = lean_unsigned_to_nat(14u);
v___x_20_ = lean_unsigned_to_nat(22u);
v___x_21_ = ((lean_object*)(l_Lean_Meta_MVarRenaming_find_x21___closed__1));
v___x_22_ = ((lean_object*)(l_Lean_Meta_MVarRenaming_find_x21___closed__0));
v___x_23_ = l_mkPanicMessageWithDecl(v___x_22_, v___x_21_, v___x_20_, v___x_19_, v___x_18_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_find_x21(lean_object* v_s_24_, lean_object* v_mvarId_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_MVarIdMap_get_x3f_spec__0___redArg(v_s_24_, v_mvarId_25_);
if (lean_obj_tag(v___x_26_) == 0)
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_obj_once(&l_Lean_Meta_MVarRenaming_find_x21___closed__3, &l_Lean_Meta_MVarRenaming_find_x21___closed__3_once, _init_l_Lean_Meta_MVarRenaming_find_x21___closed__3);
v___x_28_ = l_panic___at___00Lean_Meta_MVarRenaming_find_x21_spec__0(v___x_27_);
return v___x_28_;
}
else
{
lean_object* v_val_29_; 
v_val_29_ = lean_ctor_get(v___x_26_, 0);
lean_inc(v_val_29_);
lean_dec_ref_known(v___x_26_, 1);
return v_val_29_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_find_x21___boxed(lean_object* v_s_30_, lean_object* v_mvarId_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_Meta_MVarRenaming_find_x21(v_s_30_, v_mvarId_31_);
lean_dec(v_mvarId_31_);
lean_dec(v_s_30_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_insert(lean_object* v_s_33_, lean_object* v_mvarId_34_, lean_object* v_mvarId_x27_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(v_mvarId_34_, v_mvarId_x27_35_, v_s_33_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_apply___lam__0(lean_object* v_s_37_, lean_object* v_e_38_){
_start:
{
if (lean_obj_tag(v_e_38_) == 2)
{
lean_object* v_mvarId_39_; lean_object* v___x_40_; 
v_mvarId_39_ = lean_ctor_get(v_e_38_, 0);
v___x_40_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_MVarIdMap_get_x3f_spec__0___redArg(v_s_37_, v_mvarId_39_);
if (lean_obj_tag(v___x_40_) == 0)
{
lean_object* v___x_41_; 
v___x_41_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_41_, 0, v_e_38_);
return v___x_41_;
}
else
{
lean_object* v_val_42_; lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_50_; 
lean_dec_ref_known(v_e_38_, 1);
v_val_42_ = lean_ctor_get(v___x_40_, 0);
v_isSharedCheck_50_ = !lean_is_exclusive(v___x_40_);
if (v_isSharedCheck_50_ == 0)
{
v___x_44_ = v___x_40_;
v_isShared_45_ = v_isSharedCheck_50_;
goto v_resetjp_43_;
}
else
{
lean_inc(v_val_42_);
lean_dec(v___x_40_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_50_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
lean_object* v___x_46_; lean_object* v___x_48_; 
v___x_46_ = l_Lean_mkMVar(v_val_42_);
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 0, v___x_46_);
v___x_48_ = v___x_44_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v___x_46_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
}
}
else
{
lean_object* v___x_51_; 
lean_dec_ref(v_e_38_);
v___x_51_ = lean_box(0);
return v___x_51_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_apply___lam__0___boxed(lean_object* v_s_52_, lean_object* v_e_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lean_Meta_MVarRenaming_apply___lam__0(v_s_52_, v_e_53_);
lean_dec(v_s_52_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_apply(lean_object* v_s_55_, lean_object* v_e_56_){
_start:
{
uint8_t v___x_57_; 
v___x_57_ = l_Lean_Expr_hasMVar(v_e_56_);
if (v___x_57_ == 0)
{
lean_dec(v_s_55_);
lean_inc_ref(v_e_56_);
return v_e_56_;
}
else
{
uint8_t v___x_58_; 
v___x_58_ = l_Lean_MVarIdMap_isEmpty___redArg(v_s_55_);
if (v___x_58_ == 0)
{
lean_object* v___f_59_; lean_object* v___x_60_; 
v___f_59_ = lean_alloc_closure((void*)(l_Lean_Meta_MVarRenaming_apply___lam__0___boxed), 2, 1);
lean_closure_set(v___f_59_, 0, v_s_55_);
v___x_60_ = lean_replace_expr(v___f_59_, v_e_56_);
lean_dec_ref(v___f_59_);
return v___x_60_;
}
else
{
lean_dec(v_s_55_);
lean_inc_ref(v_e_56_);
return v_e_56_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MVarRenaming_apply___boxed(lean_object* v_s_61_, lean_object* v_e_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lean_Meta_MVarRenaming_apply(v_s_61_, v_e_62_);
lean_dec_ref(v_e_62_);
return v_res_63_;
}
}
lean_object* runtime_initialize_Lean_Util_ReplaceExpr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_MVarRenaming(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Util_ReplaceExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_MVarRenaming(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_ReplaceExpr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_MVarRenaming(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_ReplaceExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MVarRenaming(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_MVarRenaming(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_MVarRenaming(builtin);
}
#ifdef __cplusplus
}
#endif
