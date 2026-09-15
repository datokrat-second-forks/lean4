// Lean compiler output
// Module: Lake.Util.Lock
// Imports: public import Init.System.IO import Init.Data.ToString.Macro
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
lean_object* l_IO_sleep(uint32_t);
lean_object* lean_get_stderr();
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_putStrLn(lean_object*, lean_object*);
lean_object* l_System_FilePath_parent(lean_object*);
lean_object* l_IO_FS_createDirAll(lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
uint32_t lean_io_process_get_pid();
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_IO_FS_Handle_putStrLn(lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* lean_io_remove_file(lean_object*);
lean_object* l_IO_eprintln___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "warning: waiting for prior `lake build` invocation to finish... (remove '"};
static const lean_object* l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___closed__0 = (const lean_object*)&l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___closed__0_value;
static const lean_string_object l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "' if stuck)"};
static const lean_object* l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___closed__1 = (const lean_object*)&l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_busyAcquireLockFile(lean_object*);
LEAN_EXPORT lean_object* l_Lake_busyAcquireLockFile___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__1___boxed(lean_object*);
static const lean_string_object l_Lake_withLockFile___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "warning: `"};
static const lean_object* l_Lake_withLockFile___redArg___lam__2___closed__0 = (const lean_object*)&l_Lake_withLockFile___redArg___lam__2___closed__0_value;
static const lean_string_object l_Lake_withLockFile___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "` was deleted before the lock was released"};
static const lean_object* l_Lake_withLockFile___redArg___lam__2___closed__1 = (const lean_object*)&l_Lake_withLockFile___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_withLockFile___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_withLockFile___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_withLockFile___redArg___closed__0 = (const lean_object*)&l_Lake_withLockFile___redArg___closed__0_value;
static const lean_closure_object l_Lake_withLockFile___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_withLockFile___redArg___closed__1 = (const lean_object*)&l_Lake_withLockFile___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLockFile(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___lam__0(lean_object* v_lockFile_1_, lean_object* v_____r_2_){
_start:
{
uint8_t v___x_4_; lean_object* v___x_5_; 
v___x_4_ = 2;
v___x_5_ = lean_io_prim_handle_mk(v_lockFile_1_, v___x_4_);
if (lean_obj_tag(v___x_5_) == 0)
{
lean_object* v_a_6_; uint32_t v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v_a_6_ = lean_ctor_get(v___x_5_, 0);
lean_inc(v_a_6_);
lean_dec_ref_known(v___x_5_, 1);
v___x_7_ = lean_io_process_get_pid();
v___x_8_ = lean_uint32_to_nat(v___x_7_);
v___x_9_ = l_Nat_reprFast(v___x_8_);
v___x_10_ = l_IO_FS_Handle_putStrLn(v_a_6_, v___x_9_);
lean_dec(v_a_6_);
return v___x_10_;
}
else
{
lean_object* v_a_11_; lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_18_; 
v_a_11_ = lean_ctor_get(v___x_5_, 0);
v_isSharedCheck_18_ = !lean_is_exclusive(v___x_5_);
if (v_isSharedCheck_18_ == 0)
{
v___x_13_ = v___x_5_;
v_isShared_14_ = v_isSharedCheck_18_;
goto v_resetjp_12_;
}
else
{
lean_inc(v_a_11_);
lean_dec(v___x_5_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_18_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_16_; 
if (v_isShared_14_ == 0)
{
v___x_16_ = v___x_13_;
goto v_reusejp_15_;
}
else
{
lean_object* v_reuseFailAlloc_17_; 
v_reuseFailAlloc_17_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_17_, 0, v_a_11_);
v___x_16_ = v_reuseFailAlloc_17_;
goto v_reusejp_15_;
}
v_reusejp_15_:
{
return v___x_16_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___lam__0___boxed(lean_object* v_lockFile_19_, lean_object* v_____r_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___lam__0(v_lockFile_19_, v_____r_20_);
lean_dec_ref(v_lockFile_19_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop(lean_object* v_lockFile_25_, uint8_t v_firstTime_26_){
_start:
{
lean_object* v___y_34_; lean_object* v___x_44_; 
lean_inc_ref(v_lockFile_25_);
v___x_44_ = l_System_FilePath_parent(v_lockFile_25_);
if (lean_obj_tag(v___x_44_) == 1)
{
lean_object* v_val_45_; lean_object* v___x_46_; 
v_val_45_ = lean_ctor_get(v___x_44_, 0);
lean_inc(v_val_45_);
lean_dec_ref_known(v___x_44_, 1);
v___x_46_ = l_IO_FS_createDirAll(v_val_45_);
if (lean_obj_tag(v___x_46_) == 0)
{
lean_object* v_a_47_; lean_object* v___x_48_; 
v_a_47_ = lean_ctor_get(v___x_46_, 0);
lean_inc(v_a_47_);
lean_dec_ref_known(v___x_46_, 1);
v___x_48_ = l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___lam__0(v_lockFile_25_, v_a_47_);
v___y_34_ = v___x_48_;
goto v___jp_33_;
}
else
{
v___y_34_ = v___x_46_;
goto v___jp_33_;
}
}
else
{
lean_object* v___x_49_; lean_object* v___x_50_; 
lean_dec(v___x_44_);
v___x_49_ = lean_box(0);
v___x_50_ = l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___lam__0(v_lockFile_25_, v___x_49_);
v___y_34_ = v___x_50_;
goto v___jp_33_;
}
v___jp_28_:
{
uint32_t v___x_29_; lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_29_ = 300;
v___x_30_ = l_IO_sleep(v___x_29_);
v___x_31_ = 0;
v_firstTime_26_ = v___x_31_;
goto _start;
}
v___jp_33_:
{
if (lean_obj_tag(v___y_34_) == 0)
{
lean_dec_ref(v_lockFile_25_);
return v___y_34_;
}
else
{
lean_object* v_a_35_; 
v_a_35_ = lean_ctor_get(v___y_34_, 0);
if (lean_obj_tag(v_a_35_) == 0)
{
lean_dec_ref_known(v___y_34_, 1);
if (v_firstTime_26_ == 0)
{
goto v___jp_28_;
}
else
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_36_ = lean_get_stderr();
v___x_37_ = ((lean_object*)(l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___closed__0));
v___x_38_ = lean_string_append(v___x_37_, v_lockFile_25_);
v___x_39_ = ((lean_object*)(l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___closed__1));
v___x_40_ = lean_string_append(v___x_38_, v___x_39_);
lean_inc_ref(v___x_36_);
v___x_41_ = l_IO_FS_Stream_putStrLn(v___x_36_, v___x_40_);
if (lean_obj_tag(v___x_41_) == 0)
{
lean_object* v_flush_42_; lean_object* v___x_43_; 
lean_dec_ref_known(v___x_41_, 1);
v_flush_42_ = lean_ctor_get(v___x_36_, 0);
lean_inc_ref(v_flush_42_);
lean_dec_ref(v___x_36_);
v___x_43_ = lean_apply_1(v_flush_42_, lean_box(0));
if (lean_obj_tag(v___x_43_) == 0)
{
lean_dec_ref_known(v___x_43_, 1);
goto v___jp_28_;
}
else
{
lean_dec_ref(v_lockFile_25_);
return v___x_43_;
}
}
else
{
lean_dec_ref(v___x_36_);
lean_dec_ref(v_lockFile_25_);
return v___x_41_;
}
}
}
else
{
lean_dec_ref(v_lockFile_25_);
return v___y_34_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop___boxed(lean_object* v_lockFile_51_, lean_object* v_firstTime_52_, lean_object* v___y_53_){
_start:
{
uint8_t v_firstTime_boxed_54_; lean_object* v_res_55_; 
v_firstTime_boxed_54_ = lean_unbox(v_firstTime_52_);
v_res_55_ = l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop(v_lockFile_51_, v_firstTime_boxed_54_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lake_busyAcquireLockFile(lean_object* v_lockFile_56_){
_start:
{
uint8_t v___x_58_; lean_object* v___x_59_; 
v___x_58_ = 1;
v___x_59_ = l___private_Lake_Util_Lock_0__Lake_busyAcquireLockFile_busyLoop(v_lockFile_56_, v___x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lake_busyAcquireLockFile___boxed(lean_object* v_lockFile_60_, lean_object* v___y_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lake_busyAcquireLockFile(v_lockFile_60_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__0(lean_object* v_act_63_, lean_object* v_____r_64_){
_start:
{
lean_inc(v_act_63_);
return v_act_63_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__0___boxed(lean_object* v_act_65_, lean_object* v_____r_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lake_withLockFile___redArg___lam__0(v_act_65_, v_____r_66_);
lean_dec(v_act_65_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__1(lean_object* v_x_68_){
_start:
{
lean_object* v_fst_69_; 
v_fst_69_ = lean_ctor_get(v_x_68_, 0);
lean_inc(v_fst_69_);
return v_fst_69_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__1___boxed(lean_object* v_x_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lake_withLockFile___redArg___lam__1(v_x_70_);
lean_dec_ref(v_x_70_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__2(lean_object* v_lockFile_74_, lean_object* v___f_75_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_io_remove_file(v_lockFile_74_);
if (lean_obj_tag(v___x_77_) == 0)
{
lean_dec_ref(v___f_75_);
return v___x_77_;
}
else
{
lean_object* v_a_78_; 
v_a_78_ = lean_ctor_get(v___x_77_, 0);
lean_inc(v_a_78_);
if (lean_obj_tag(v_a_78_) == 11)
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
lean_dec_ref_known(v_a_78_, 2);
lean_dec_ref_known(v___x_77_, 1);
v___x_79_ = ((lean_object*)(l_Lake_withLockFile___redArg___lam__2___closed__0));
v___x_80_ = lean_string_append(v___x_79_, v_lockFile_74_);
v___x_81_ = ((lean_object*)(l_Lake_withLockFile___redArg___lam__2___closed__1));
v___x_82_ = lean_string_append(v___x_80_, v___x_81_);
v___x_83_ = l_IO_eprintln___redArg(v___f_75_, v___x_82_);
return v___x_83_;
}
else
{
lean_dec(v_a_78_);
lean_dec_ref(v___f_75_);
return v___x_77_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__2___boxed(lean_object* v_lockFile_84_, lean_object* v___f_85_, lean_object* v___y_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lake_withLockFile___redArg___lam__2(v_lockFile_84_, v___f_85_);
lean_dec_ref(v_lockFile_84_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__3(lean_object* v___x_88_, lean_object* v_x_89_){
_start:
{
lean_inc(v___x_88_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg___lam__3___boxed(lean_object* v___x_90_, lean_object* v_x_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lake_withLockFile___redArg___lam__3(v___x_90_, v_x_91_);
lean_dec(v_x_91_);
lean_dec(v___x_90_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLockFile___redArg(lean_object* v_inst_95_, lean_object* v_inst_96_, lean_object* v_inst_97_, lean_object* v_lockFile_98_, lean_object* v_act_99_){
_start:
{
lean_object* v_toApplicative_100_; lean_object* v_toFunctor_101_; lean_object* v_toBind_102_; lean_object* v_map_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___f_106_; lean_object* v___f_107_; lean_object* v___f_108_; lean_object* v_this_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___f_112_; lean_object* v_y_113_; lean_object* v___x_114_; 
v_toApplicative_100_ = lean_ctor_get(v_inst_95_, 0);
v_toFunctor_101_ = lean_ctor_get(v_toApplicative_100_, 0);
lean_inc_ref(v_toFunctor_101_);
v_toBind_102_ = lean_ctor_get(v_inst_95_, 1);
lean_inc(v_toBind_102_);
lean_dec_ref(v_inst_95_);
v_map_103_ = lean_ctor_get(v_toFunctor_101_, 0);
lean_inc(v_map_103_);
lean_dec_ref(v_toFunctor_101_);
lean_inc_ref(v_lockFile_98_);
v___x_104_ = lean_alloc_closure((void*)(l_Lake_busyAcquireLockFile___boxed), 2, 1);
lean_closure_set(v___x_104_, 0, v_lockFile_98_);
lean_inc(v_inst_97_);
v___x_105_ = lean_apply_2(v_inst_97_, lean_box(0), v___x_104_);
v___f_106_ = lean_alloc_closure((void*)(l_Lake_withLockFile___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_106_, 0, v_act_99_);
v___f_107_ = ((lean_object*)(l_Lake_withLockFile___redArg___closed__0));
v___f_108_ = ((lean_object*)(l_Lake_withLockFile___redArg___closed__1));
v_this_109_ = lean_alloc_closure((void*)(l_Lake_withLockFile___redArg___lam__2___boxed), 3, 2);
lean_closure_set(v_this_109_, 0, v_lockFile_98_);
lean_closure_set(v_this_109_, 1, v___f_108_);
v___x_110_ = lean_apply_4(v_toBind_102_, lean_box(0), lean_box(0), v___x_105_, v___f_106_);
v___x_111_ = lean_apply_2(v_inst_97_, lean_box(0), v_this_109_);
v___f_112_ = lean_alloc_closure((void*)(l_Lake_withLockFile___redArg___lam__3___boxed), 2, 1);
lean_closure_set(v___f_112_, 0, v___x_111_);
v_y_113_ = lean_apply_4(v_inst_96_, lean_box(0), lean_box(0), v___x_110_, v___f_112_);
v___x_114_ = lean_apply_4(v_map_103_, lean_box(0), lean_box(0), v___f_107_, v_y_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLockFile(lean_object* v_m_115_, lean_object* v_00_u03b1_116_, lean_object* v_inst_117_, lean_object* v_inst_118_, lean_object* v_inst_119_, lean_object* v_lockFile_120_, lean_object* v_act_121_){
_start:
{
lean_object* v_toApplicative_122_; lean_object* v_toFunctor_123_; lean_object* v_toBind_124_; lean_object* v_map_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___f_128_; lean_object* v___f_129_; lean_object* v___f_130_; lean_object* v_this_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___f_134_; lean_object* v_y_135_; lean_object* v___x_136_; 
v_toApplicative_122_ = lean_ctor_get(v_inst_117_, 0);
v_toFunctor_123_ = lean_ctor_get(v_toApplicative_122_, 0);
lean_inc_ref(v_toFunctor_123_);
v_toBind_124_ = lean_ctor_get(v_inst_117_, 1);
lean_inc(v_toBind_124_);
lean_dec_ref(v_inst_117_);
v_map_125_ = lean_ctor_get(v_toFunctor_123_, 0);
lean_inc(v_map_125_);
lean_dec_ref(v_toFunctor_123_);
lean_inc_ref(v_lockFile_120_);
v___x_126_ = lean_alloc_closure((void*)(l_Lake_busyAcquireLockFile___boxed), 2, 1);
lean_closure_set(v___x_126_, 0, v_lockFile_120_);
lean_inc(v_inst_119_);
v___x_127_ = lean_apply_2(v_inst_119_, lean_box(0), v___x_126_);
v___f_128_ = lean_alloc_closure((void*)(l_Lake_withLockFile___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_128_, 0, v_act_121_);
v___f_129_ = ((lean_object*)(l_Lake_withLockFile___redArg___closed__0));
v___f_130_ = ((lean_object*)(l_Lake_withLockFile___redArg___closed__1));
v_this_131_ = lean_alloc_closure((void*)(l_Lake_withLockFile___redArg___lam__2___boxed), 3, 2);
lean_closure_set(v_this_131_, 0, v_lockFile_120_);
lean_closure_set(v_this_131_, 1, v___f_130_);
v___x_132_ = lean_apply_4(v_toBind_124_, lean_box(0), lean_box(0), v___x_127_, v___f_128_);
v___x_133_ = lean_apply_2(v_inst_119_, lean_box(0), v_this_131_);
v___f_134_ = lean_alloc_closure((void*)(l_Lake_withLockFile___redArg___lam__3___boxed), 2, 1);
lean_closure_set(v___f_134_, 0, v___x_133_);
v_y_135_ = lean_apply_4(v_inst_118_, lean_box(0), lean_box(0), v___x_132_, v___f_134_);
v___x_136_ = lean_apply_4(v_map_125_, lean_box(0), lean_box(0), v___f_129_, v_y_135_);
return v___x_136_;
}
}
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_Lock(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_Lock(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_Lock(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Lock(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_Lock(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_Lock(builtin);
}
#ifdef __cplusplus
}
#endif
