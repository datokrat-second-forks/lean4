// Lean compiler output
// Module: Lean.ImportingFlag
// Imports: public import Init.System.IO
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
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_io_initializing();
LEAN_EXPORT lean_object* l___private_Lean_ImportingFlag_0__Lean_initFn_00___x40_Lean_ImportingFlag_1124607303____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ImportingFlag_0__Lean_initFn_00___x40_Lean_ImportingFlag_1124607303____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ImportingFlag_0__Lean_importingRef;
LEAN_EXPORT lean_object* l___private_Lean_ImportingFlag_0__Lean_initFn_00___x40_Lean_ImportingFlag_2251799370____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ImportingFlag_0__Lean_initFn_00___x40_Lean_ImportingFlag_2251799370____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ImportingFlag_0__Lean_runInitializersRef;
LEAN_EXPORT lean_object* lean_enable_initializer_execution();
LEAN_EXPORT lean_object* l_Lean_enableInitializersExecution___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isInitializerExecutionEnabled();
LEAN_EXPORT lean_object* l_Lean_isInitializerExecutionEnabled___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_initializing();
LEAN_EXPORT lean_object* l_Lean_initializing___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withImporting___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withImporting___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withImporting(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withImporting___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_set_initializing(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ImportingFlag_0__Lean_setInitializing___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ImportingFlag_0__Lean_initFn_00___x40_Lean_ImportingFlag_1124607303____hygCtx___hyg_2_(){
_start:
{
uint8_t v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_2_ = 0;
v___x_3_ = lean_box(v___x_2_);
v___x_4_ = lean_st_mk_ref(v___x_3_);
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ImportingFlag_0__Lean_initFn_00___x40_Lean_ImportingFlag_1124607303____hygCtx___hyg_2____boxed(lean_object* v___y_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l___private_Lean_ImportingFlag_0__Lean_initFn_00___x40_Lean_ImportingFlag_1124607303____hygCtx___hyg_2_();
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ImportingFlag_0__Lean_initFn_00___x40_Lean_ImportingFlag_2251799370____hygCtx___hyg_2_(){
_start:
{
uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_9_ = 0;
v___x_10_ = lean_box(v___x_9_);
v___x_11_ = lean_st_mk_ref(v___x_10_);
v___x_12_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_12_, 0, v___x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ImportingFlag_0__Lean_initFn_00___x40_Lean_ImportingFlag_2251799370____hygCtx___hyg_2____boxed(lean_object* v___y_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l___private_Lean_ImportingFlag_0__Lean_initFn_00___x40_Lean_ImportingFlag_2251799370____hygCtx___hyg_2_();
return v_res_14_;
}
}
LEAN_EXPORT lean_object* lean_enable_initializer_execution(){
_start:
{
lean_object* v___x_16_; uint8_t v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_16_ = l___private_Lean_ImportingFlag_0__Lean_runInitializersRef;
v___x_17_ = 1;
v___x_18_ = lean_box(0);
v___x_19_ = lean_box(v___x_17_);
v___x_20_ = lean_st_ref_swap(v___x_16_, v___x_19_);
lean_dec(v___x_20_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_enableInitializersExecution___boxed(lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = lean_enable_initializer_execution();
return v_res_22_;
}
}
LEAN_EXPORT uint8_t l_Lean_isInitializerExecutionEnabled(){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; uint8_t v___x_26_; 
v___x_24_ = l___private_Lean_ImportingFlag_0__Lean_runInitializersRef;
v___x_25_ = lean_st_ref_get(v___x_24_);
v___x_26_ = lean_unbox(v___x_25_);
lean_dec(v___x_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInitializerExecutionEnabled___boxed(lean_object* v___y_27_){
_start:
{
uint8_t v_res_28_; lean_object* v_r_29_; 
v_res_28_ = l_Lean_isInitializerExecutionEnabled();
v_r_29_ = lean_box(v_res_28_);
return v_r_29_;
}
}
LEAN_EXPORT uint8_t l_Lean_initializing(){
_start:
{
uint8_t v___x_31_; 
v___x_31_ = lean_io_initializing();
if (v___x_31_ == 0)
{
lean_object* v___x_32_; lean_object* v___x_33_; uint8_t v___x_34_; 
v___x_32_ = l___private_Lean_ImportingFlag_0__Lean_importingRef;
v___x_33_ = lean_st_ref_get(v___x_32_);
v___x_34_ = lean_unbox(v___x_33_);
lean_dec(v___x_33_);
return v___x_34_;
}
else
{
return v___x_31_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_initializing___boxed(lean_object* v___y_35_){
_start:
{
uint8_t v_res_36_; lean_object* v_r_37_; 
v_res_36_ = l_Lean_initializing();
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_withImporting___redArg(lean_object* v_x_38_){
_start:
{
lean_object* v___x_40_; uint8_t v___x_41_; uint8_t v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_40_ = l___private_Lean_ImportingFlag_0__Lean_importingRef;
v___x_41_ = 1;
v___x_42_ = 0;
v___x_43_ = lean_box(v___x_41_);
v___x_44_ = lean_st_ref_swap(v___x_40_, v___x_43_);
lean_dec(v___x_44_);
v___x_45_ = lean_apply_1(v_x_38_, lean_box(0));
if (lean_obj_tag(v___x_45_) == 0)
{
lean_object* v_a_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_58_; 
v_a_46_ = lean_ctor_get(v___x_45_, 0);
v_isSharedCheck_58_ = !lean_is_exclusive(v___x_45_);
if (v_isSharedCheck_58_ == 0)
{
v___x_48_ = v___x_45_;
v_isShared_49_ = v_isSharedCheck_58_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_a_46_);
lean_dec(v___x_45_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_58_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_56_; 
v___x_50_ = lean_box(v___x_42_);
v___x_51_ = lean_st_ref_swap(v___x_40_, v___x_50_);
lean_dec(v___x_51_);
v___x_52_ = l___private_Lean_ImportingFlag_0__Lean_runInitializersRef;
v___x_53_ = lean_box(v___x_42_);
v___x_54_ = lean_st_ref_swap(v___x_52_, v___x_53_);
lean_dec(v___x_54_);
if (v_isShared_49_ == 0)
{
v___x_56_ = v___x_48_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v_a_46_);
v___x_56_ = v_reuseFailAlloc_57_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
return v___x_56_;
}
}
}
else
{
lean_object* v_a_59_; lean_object* v___x_61_; uint8_t v_isShared_62_; uint8_t v_isSharedCheck_71_; 
v_a_59_ = lean_ctor_get(v___x_45_, 0);
v_isSharedCheck_71_ = !lean_is_exclusive(v___x_45_);
if (v_isSharedCheck_71_ == 0)
{
v___x_61_ = v___x_45_;
v_isShared_62_ = v_isSharedCheck_71_;
goto v_resetjp_60_;
}
else
{
lean_inc(v_a_59_);
lean_dec(v___x_45_);
v___x_61_ = lean_box(0);
v_isShared_62_ = v_isSharedCheck_71_;
goto v_resetjp_60_;
}
v_resetjp_60_:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_69_; 
v___x_63_ = lean_box(v___x_42_);
v___x_64_ = lean_st_ref_swap(v___x_40_, v___x_63_);
lean_dec(v___x_64_);
v___x_65_ = l___private_Lean_ImportingFlag_0__Lean_runInitializersRef;
v___x_66_ = lean_box(v___x_42_);
v___x_67_ = lean_st_ref_swap(v___x_65_, v___x_66_);
lean_dec(v___x_67_);
if (v_isShared_62_ == 0)
{
v___x_69_ = v___x_61_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v_a_59_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withImporting___redArg___boxed(lean_object* v_x_72_, lean_object* v___y_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_withImporting___redArg(v_x_72_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_withImporting(lean_object* v_00_u03b1_75_, lean_object* v_x_76_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lean_withImporting___redArg(v_x_76_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_withImporting___boxed(lean_object* v_00_u03b1_79_, lean_object* v_x_80_, lean_object* v___y_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lean_withImporting(v_00_u03b1_79_, v_x_80_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* lean_set_initializing(uint8_t v_initializing_83_){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_85_ = l___private_Lean_ImportingFlag_0__Lean_importingRef;
v___x_86_ = lean_box(0);
v___x_87_ = lean_box(v_initializing_83_);
v___x_88_ = lean_st_ref_swap(v___x_85_, v___x_87_);
lean_dec(v___x_88_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ImportingFlag_0__Lean_setInitializing___boxed(lean_object* v_initializing_89_, lean_object* v___y_90_){
_start:
{
uint8_t v_initializing_boxed_91_; lean_object* v_res_92_; 
v_initializing_boxed_91_ = lean_unbox(v_initializing_89_);
v_res_92_ = lean_set_initializing(v_initializing_boxed_91_);
return v_res_92_;
}
}
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ImportingFlag(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ImportingFlag_0__Lean_initFn_00___x40_Lean_ImportingFlag_1124607303____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_ImportingFlag_0__Lean_importingRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_ImportingFlag_0__Lean_importingRef);
lean_dec_ref(res);
res = l___private_Lean_ImportingFlag_0__Lean_initFn_00___x40_Lean_ImportingFlag_2251799370____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_ImportingFlag_0__Lean_runInitializersRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_ImportingFlag_0__Lean_runInitializersRef);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ImportingFlag(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_IO(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ImportingFlag(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ImportingFlag(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ImportingFlag(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ImportingFlag(builtin);
}
#ifdef __cplusplus
}
#endif
