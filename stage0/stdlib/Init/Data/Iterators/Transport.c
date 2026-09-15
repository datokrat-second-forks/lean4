// Lean compiler output
// Module: Init.Data.Iterators.Transport
// Imports: public import Init.Data.Iterators.Basic public import Init.Data.Function
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
LEAN_EXPORT lean_object* l_Std_IterM_mapState___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_mapState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_PlausibleIterStep_ofEquiv___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_PlausibleIterStep_ofEquiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_PlausibleIterStep_ofEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Iterator_ofEquiv___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Iterator_ofEquiv___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Iterator_ofEquiv___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_Iterator_ofEquiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_mapState___redArg(lean_object* v_f_1_, lean_object* v_it_2_){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_apply_1(v_f_1_, v_it_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_mapState(lean_object* v_00_u03b1_4_, lean_object* v_00_u03b1_x27_5_, lean_object* v_00_u03b2_6_, lean_object* v_m_7_, lean_object* v_f_8_, lean_object* v_it_9_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_apply_1(v_f_8_, v_it_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_PlausibleIterStep_ofEquiv___redArg(lean_object* v_e_11_, lean_object* v_s_12_){
_start:
{
switch(lean_obj_tag(v_s_12_))
{
case 0:
{
lean_object* v_toFun_13_; lean_object* v_it_14_; lean_object* v_out_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_23_; 
v_toFun_13_ = lean_ctor_get(v_e_11_, 0);
lean_inc(v_toFun_13_);
lean_dec_ref(v_e_11_);
v_it_14_ = lean_ctor_get(v_s_12_, 0);
v_out_15_ = lean_ctor_get(v_s_12_, 1);
v_isSharedCheck_23_ = !lean_is_exclusive(v_s_12_);
if (v_isSharedCheck_23_ == 0)
{
v___x_17_ = v_s_12_;
v_isShared_18_ = v_isSharedCheck_23_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_out_15_);
lean_inc(v_it_14_);
lean_dec(v_s_12_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_23_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_19_; lean_object* v___x_21_; 
v___x_19_ = lean_apply_1(v_toFun_13_, v_it_14_);
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 0, v___x_19_);
v___x_21_ = v___x_17_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_22_; 
v_reuseFailAlloc_22_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_22_, 0, v___x_19_);
lean_ctor_set(v_reuseFailAlloc_22_, 1, v_out_15_);
v___x_21_ = v_reuseFailAlloc_22_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
return v___x_21_;
}
}
}
case 1:
{
lean_object* v_toFun_24_; lean_object* v_it_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_33_; 
v_toFun_24_ = lean_ctor_get(v_e_11_, 0);
lean_inc(v_toFun_24_);
lean_dec_ref(v_e_11_);
v_it_25_ = lean_ctor_get(v_s_12_, 0);
v_isSharedCheck_33_ = !lean_is_exclusive(v_s_12_);
if (v_isSharedCheck_33_ == 0)
{
v___x_27_ = v_s_12_;
v_isShared_28_ = v_isSharedCheck_33_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_it_25_);
lean_dec(v_s_12_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_33_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v___x_29_; lean_object* v___x_31_; 
v___x_29_ = lean_apply_1(v_toFun_24_, v_it_25_);
if (v_isShared_28_ == 0)
{
lean_ctor_set(v___x_27_, 0, v___x_29_);
v___x_31_ = v___x_27_;
goto v_reusejp_30_;
}
else
{
lean_object* v_reuseFailAlloc_32_; 
v_reuseFailAlloc_32_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_32_, 0, v___x_29_);
v___x_31_ = v_reuseFailAlloc_32_;
goto v_reusejp_30_;
}
v_reusejp_30_:
{
return v___x_31_;
}
}
}
default: 
{
lean_object* v___x_34_; 
lean_dec_ref(v_e_11_);
v___x_34_ = lean_box(2);
return v___x_34_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_PlausibleIterStep_ofEquiv(lean_object* v_00_u03b1_35_, lean_object* v_00_u03b1_x27_36_, lean_object* v_00_u03b2_37_, lean_object* v_m_38_, lean_object* v_e_39_, lean_object* v_i_40_, lean_object* v_it_41_, lean_object* v_s_42_){
_start:
{
switch(lean_obj_tag(v_s_42_))
{
case 0:
{
lean_object* v_toFun_43_; lean_object* v_it_44_; lean_object* v_out_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_53_; 
v_toFun_43_ = lean_ctor_get(v_e_39_, 0);
lean_inc(v_toFun_43_);
lean_dec_ref(v_e_39_);
v_it_44_ = lean_ctor_get(v_s_42_, 0);
v_out_45_ = lean_ctor_get(v_s_42_, 1);
v_isSharedCheck_53_ = !lean_is_exclusive(v_s_42_);
if (v_isSharedCheck_53_ == 0)
{
v___x_47_ = v_s_42_;
v_isShared_48_ = v_isSharedCheck_53_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_out_45_);
lean_inc(v_it_44_);
lean_dec(v_s_42_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_53_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_49_; lean_object* v___x_51_; 
v___x_49_ = lean_apply_1(v_toFun_43_, v_it_44_);
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 0, v___x_49_);
v___x_51_ = v___x_47_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_52_; 
v_reuseFailAlloc_52_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_52_, 0, v___x_49_);
lean_ctor_set(v_reuseFailAlloc_52_, 1, v_out_45_);
v___x_51_ = v_reuseFailAlloc_52_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
return v___x_51_;
}
}
}
case 1:
{
lean_object* v_toFun_54_; lean_object* v_it_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_63_; 
v_toFun_54_ = lean_ctor_get(v_e_39_, 0);
lean_inc(v_toFun_54_);
lean_dec_ref(v_e_39_);
v_it_55_ = lean_ctor_get(v_s_42_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v_s_42_);
if (v_isSharedCheck_63_ == 0)
{
v___x_57_ = v_s_42_;
v_isShared_58_ = v_isSharedCheck_63_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_it_55_);
lean_dec(v_s_42_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_63_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_59_; lean_object* v___x_61_; 
v___x_59_ = lean_apply_1(v_toFun_54_, v_it_55_);
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 0, v___x_59_);
v___x_61_ = v___x_57_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v___x_59_);
v___x_61_ = v_reuseFailAlloc_62_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
return v___x_61_;
}
}
}
default: 
{
lean_object* v___x_64_; 
lean_dec_ref(v_e_39_);
v___x_64_ = lean_box(2);
return v___x_64_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_PlausibleIterStep_ofEquiv___boxed(lean_object* v_00_u03b1_65_, lean_object* v_00_u03b1_x27_66_, lean_object* v_00_u03b2_67_, lean_object* v_m_68_, lean_object* v_e_69_, lean_object* v_i_70_, lean_object* v_it_71_, lean_object* v_s_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Std_Iterators_PlausibleIterStep_ofEquiv(v_00_u03b1_65_, v_00_u03b1_x27_66_, v_00_u03b2_67_, v_m_68_, v_e_69_, v_i_70_, v_it_71_, v_s_72_);
lean_dec(v_it_71_);
lean_dec(v_i_70_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Iterator_ofEquiv___redArg___lam__0(lean_object* v_e_74_, lean_object* v_s_75_){
_start:
{
switch(lean_obj_tag(v_s_75_))
{
case 0:
{
lean_object* v_toFun_76_; lean_object* v_it_77_; lean_object* v_out_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_86_; 
v_toFun_76_ = lean_ctor_get(v_e_74_, 0);
lean_inc(v_toFun_76_);
lean_dec_ref(v_e_74_);
v_it_77_ = lean_ctor_get(v_s_75_, 0);
v_out_78_ = lean_ctor_get(v_s_75_, 1);
v_isSharedCheck_86_ = !lean_is_exclusive(v_s_75_);
if (v_isSharedCheck_86_ == 0)
{
v___x_80_ = v_s_75_;
v_isShared_81_ = v_isSharedCheck_86_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_out_78_);
lean_inc(v_it_77_);
lean_dec(v_s_75_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_86_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_82_; lean_object* v___x_84_; 
v___x_82_ = lean_apply_1(v_toFun_76_, v_it_77_);
if (v_isShared_81_ == 0)
{
lean_ctor_set(v___x_80_, 0, v___x_82_);
v___x_84_ = v___x_80_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_82_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v_out_78_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
return v___x_84_;
}
}
}
case 1:
{
lean_object* v_toFun_87_; lean_object* v_it_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_96_; 
v_toFun_87_ = lean_ctor_get(v_e_74_, 0);
lean_inc(v_toFun_87_);
lean_dec_ref(v_e_74_);
v_it_88_ = lean_ctor_get(v_s_75_, 0);
v_isSharedCheck_96_ = !lean_is_exclusive(v_s_75_);
if (v_isSharedCheck_96_ == 0)
{
v___x_90_ = v_s_75_;
v_isShared_91_ = v_isSharedCheck_96_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_it_88_);
lean_dec(v_s_75_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_96_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_92_; lean_object* v___x_94_; 
v___x_92_ = lean_apply_1(v_toFun_87_, v_it_88_);
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 0, v___x_92_);
v___x_94_ = v___x_90_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v___x_92_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
default: 
{
lean_object* v___x_97_; 
lean_dec_ref(v_e_74_);
v___x_97_ = lean_box(2);
return v___x_97_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Iterator_ofEquiv___redArg___lam__1(lean_object* v_inst_98_, lean_object* v_e_99_, lean_object* v_i_100_, lean_object* v___f_101_, lean_object* v_it_102_){
_start:
{
lean_object* v_map_103_; lean_object* v_invFun_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v_map_103_ = lean_ctor_get(v_inst_98_, 0);
lean_inc(v_map_103_);
lean_dec_ref(v_inst_98_);
v_invFun_104_ = lean_ctor_get(v_e_99_, 1);
lean_inc(v_invFun_104_);
lean_dec_ref(v_e_99_);
v___x_105_ = lean_apply_1(v_invFun_104_, v_it_102_);
v___x_106_ = lean_apply_1(v_i_100_, v___x_105_);
v___x_107_ = lean_apply_4(v_map_103_, lean_box(0), lean_box(0), v___f_101_, v___x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Iterator_ofEquiv___redArg(lean_object* v_inst_108_, lean_object* v_e_109_, lean_object* v_i_110_){
_start:
{
lean_object* v___f_111_; lean_object* v___f_112_; 
lean_inc_ref(v_e_109_);
v___f_111_ = lean_alloc_closure((void*)(l_Std_Iterators_Iterator_ofEquiv___redArg___lam__0), 2, 1);
lean_closure_set(v___f_111_, 0, v_e_109_);
v___f_112_ = lean_alloc_closure((void*)(l_Std_Iterators_Iterator_ofEquiv___redArg___lam__1), 5, 4);
lean_closure_set(v___f_112_, 0, v_inst_108_);
lean_closure_set(v___f_112_, 1, v_e_109_);
lean_closure_set(v___f_112_, 2, v_i_110_);
lean_closure_set(v___f_112_, 3, v___f_111_);
return v___f_112_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_Iterator_ofEquiv(lean_object* v_00_u03b1_113_, lean_object* v_00_u03b1_x27_114_, lean_object* v_00_u03b2_115_, lean_object* v_m_116_, lean_object* v_inst_117_, lean_object* v_e_118_, lean_object* v_i_119_){
_start:
{
lean_object* v___f_120_; lean_object* v___f_121_; 
lean_inc_ref(v_e_118_);
v___f_120_ = lean_alloc_closure((void*)(l_Std_Iterators_Iterator_ofEquiv___redArg___lam__0), 2, 1);
lean_closure_set(v___f_120_, 0, v_e_118_);
v___f_121_ = lean_alloc_closure((void*)(l_Std_Iterators_Iterator_ofEquiv___redArg___lam__1), 5, 4);
lean_closure_set(v___f_121_, 0, v_inst_117_);
lean_closure_set(v___f_121_, 1, v_e_118_);
lean_closure_set(v___f_121_, 2, v_i_119_);
lean_closure_set(v___f_121_, 3, v___f_120_);
return v___f_121_;
}
}
lean_object* runtime_initialize_Init_Data_Iterators_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Function(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Iterators_Transport(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Iterators_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Iterators_Transport(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Iterators_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Function(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Iterators_Transport(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Iterators_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Iterators_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Iterators_Transport(builtin);
}
#ifdef __cplusplus
}
#endif
