// Lean compiler output
// Module: Lean.Compiler.LCNF.Renaming
// Imports: public import Lean.Compiler.LCNF.CompilerM
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
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_FVarIdMap_isEmpty___redArg(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_LCtx_addFunDecl(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addParam(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_applyRenaming(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_applyRenaming(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_applyRenaming___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_applyRenaming___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming___redArg(uint8_t v_pu_1_, lean_object* v_param_2_, lean_object* v_r_3_, lean_object* v_a_4_){
_start:
{
lean_object* v_fvarId_6_; lean_object* v_type_7_; uint8_t v_borrow_8_; lean_object* v___x_9_; 
v_fvarId_6_ = lean_ctor_get(v_param_2_, 0);
v_type_7_ = lean_ctor_get(v_param_2_, 2);
v_borrow_8_ = lean_ctor_get_uint8(v_param_2_, sizeof(void*)*3);
v___x_9_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_r_3_, v_fvarId_6_);
if (lean_obj_tag(v___x_9_) == 1)
{
lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_36_; 
lean_inc_ref(v_type_7_);
lean_inc(v_fvarId_6_);
v_isSharedCheck_36_ = !lean_is_exclusive(v_param_2_);
if (v_isSharedCheck_36_ == 0)
{
lean_object* v_unused_37_; lean_object* v_unused_38_; lean_object* v_unused_39_; 
v_unused_37_ = lean_ctor_get(v_param_2_, 2);
lean_dec(v_unused_37_);
v_unused_38_ = lean_ctor_get(v_param_2_, 1);
lean_dec(v_unused_38_);
v_unused_39_ = lean_ctor_get(v_param_2_, 0);
lean_dec(v_unused_39_);
v___x_11_ = v_param_2_;
v_isShared_12_ = v_isSharedCheck_36_;
goto v_resetjp_10_;
}
else
{
lean_dec(v_param_2_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_36_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
lean_object* v_val_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_35_; 
v_val_13_ = lean_ctor_get(v___x_9_, 0);
v_isSharedCheck_35_ = !lean_is_exclusive(v___x_9_);
if (v_isSharedCheck_35_ == 0)
{
v___x_15_ = v___x_9_;
v_isShared_16_ = v_isSharedCheck_35_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_val_13_);
lean_dec(v___x_9_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_35_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
lean_object* v_param_18_; 
if (v_isShared_12_ == 0)
{
lean_ctor_set(v___x_11_, 1, v_val_13_);
v_param_18_ = v___x_11_;
goto v_reusejp_17_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v_fvarId_6_);
lean_ctor_set(v_reuseFailAlloc_34_, 1, v_val_13_);
lean_ctor_set(v_reuseFailAlloc_34_, 2, v_type_7_);
lean_ctor_set_uint8(v_reuseFailAlloc_34_, sizeof(void*)*3, v_borrow_8_);
v_param_18_ = v_reuseFailAlloc_34_;
goto v_reusejp_17_;
}
v_reusejp_17_:
{
lean_object* v___x_19_; lean_object* v_lctx_20_; lean_object* v_nextIdx_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_33_; 
v___x_19_ = lean_st_ref_take(v_a_4_);
v_lctx_20_ = lean_ctor_get(v___x_19_, 0);
v_nextIdx_21_ = lean_ctor_get(v___x_19_, 1);
v_isSharedCheck_33_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_33_ == 0)
{
v___x_23_ = v___x_19_;
v_isShared_24_ = v_isSharedCheck_33_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_nextIdx_21_);
lean_inc(v_lctx_20_);
lean_dec(v___x_19_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_33_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_25_; lean_object* v___x_27_; 
lean_inc_ref(v_param_18_);
v___x_25_ = l_Lean_Compiler_LCNF_LCtx_addParam(v_pu_1_, v_lctx_20_, v_param_18_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 0, v___x_25_);
v___x_27_ = v___x_23_;
goto v_reusejp_26_;
}
else
{
lean_object* v_reuseFailAlloc_32_; 
v_reuseFailAlloc_32_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_32_, 0, v___x_25_);
lean_ctor_set(v_reuseFailAlloc_32_, 1, v_nextIdx_21_);
v___x_27_ = v_reuseFailAlloc_32_;
goto v_reusejp_26_;
}
v_reusejp_26_:
{
lean_object* v___x_28_; lean_object* v___x_30_; 
v___x_28_ = lean_st_ref_put(v_a_4_, v___x_27_);
if (v_isShared_16_ == 0)
{
lean_ctor_set_tag(v___x_15_, 0);
lean_ctor_set(v___x_15_, 0, v_param_18_);
v___x_30_ = v___x_15_;
goto v_reusejp_29_;
}
else
{
lean_object* v_reuseFailAlloc_31_; 
v_reuseFailAlloc_31_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_31_, 0, v_param_18_);
v___x_30_ = v_reuseFailAlloc_31_;
goto v_reusejp_29_;
}
v_reusejp_29_:
{
return v___x_30_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_40_; 
lean_dec(v___x_9_);
v___x_40_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_40_, 0, v_param_2_);
return v___x_40_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming___redArg___boxed(lean_object* v_pu_41_, lean_object* v_param_42_, lean_object* v_r_43_, lean_object* v_a_44_, lean_object* v___y_45_){
_start:
{
uint8_t v_pu_boxed_46_; lean_object* v_res_47_; 
v_pu_boxed_46_ = lean_unbox(v_pu_41_);
v_res_47_ = l_Lean_Compiler_LCNF_Param_applyRenaming___redArg(v_pu_boxed_46_, v_param_42_, v_r_43_, v_a_44_);
lean_dec(v_a_44_);
lean_dec(v_r_43_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming(uint8_t v_pu_48_, lean_object* v_param_49_, lean_object* v_r_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Compiler_LCNF_Param_applyRenaming___redArg(v_pu_48_, v_param_49_, v_r_50_, v_a_52_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_applyRenaming___boxed(lean_object* v_pu_57_, lean_object* v_param_58_, lean_object* v_r_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v___y_64_){
_start:
{
uint8_t v_pu_boxed_65_; lean_object* v_res_66_; 
v_pu_boxed_65_ = lean_unbox(v_pu_57_);
v_res_66_ = l_Lean_Compiler_LCNF_Param_applyRenaming(v_pu_boxed_65_, v_param_58_, v_r_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_);
lean_dec(v_a_63_);
lean_dec_ref(v_a_62_);
lean_dec(v_a_61_);
lean_dec_ref(v_a_60_);
lean_dec(v_r_59_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming___redArg(uint8_t v_pu_67_, lean_object* v_decl_68_, lean_object* v_r_69_, lean_object* v_a_70_){
_start:
{
lean_object* v_fvarId_72_; lean_object* v_type_73_; lean_object* v_value_74_; lean_object* v___x_75_; 
v_fvarId_72_ = lean_ctor_get(v_decl_68_, 0);
v_type_73_ = lean_ctor_get(v_decl_68_, 2);
v_value_74_ = lean_ctor_get(v_decl_68_, 3);
v___x_75_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_r_69_, v_fvarId_72_);
if (lean_obj_tag(v___x_75_) == 1)
{
lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_102_; 
lean_inc(v_value_74_);
lean_inc_ref(v_type_73_);
lean_inc(v_fvarId_72_);
v_isSharedCheck_102_ = !lean_is_exclusive(v_decl_68_);
if (v_isSharedCheck_102_ == 0)
{
lean_object* v_unused_103_; lean_object* v_unused_104_; lean_object* v_unused_105_; lean_object* v_unused_106_; 
v_unused_103_ = lean_ctor_get(v_decl_68_, 3);
lean_dec(v_unused_103_);
v_unused_104_ = lean_ctor_get(v_decl_68_, 2);
lean_dec(v_unused_104_);
v_unused_105_ = lean_ctor_get(v_decl_68_, 1);
lean_dec(v_unused_105_);
v_unused_106_ = lean_ctor_get(v_decl_68_, 0);
lean_dec(v_unused_106_);
v___x_77_ = v_decl_68_;
v_isShared_78_ = v_isSharedCheck_102_;
goto v_resetjp_76_;
}
else
{
lean_dec(v_decl_68_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_102_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v_val_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_101_; 
v_val_79_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_101_ == 0)
{
v___x_81_ = v___x_75_;
v_isShared_82_ = v_isSharedCheck_101_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_val_79_);
lean_dec(v___x_75_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_101_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v_decl_84_; 
if (v_isShared_78_ == 0)
{
lean_ctor_set(v___x_77_, 1, v_val_79_);
v_decl_84_ = v___x_77_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_fvarId_72_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v_val_79_);
lean_ctor_set(v_reuseFailAlloc_100_, 2, v_type_73_);
lean_ctor_set(v_reuseFailAlloc_100_, 3, v_value_74_);
v_decl_84_ = v_reuseFailAlloc_100_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
lean_object* v___x_85_; lean_object* v_lctx_86_; lean_object* v_nextIdx_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_99_; 
v___x_85_ = lean_st_ref_take(v_a_70_);
v_lctx_86_ = lean_ctor_get(v___x_85_, 0);
v_nextIdx_87_ = lean_ctor_get(v___x_85_, 1);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_99_ == 0)
{
v___x_89_ = v___x_85_;
v_isShared_90_ = v_isSharedCheck_99_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_nextIdx_87_);
lean_inc(v_lctx_86_);
lean_dec(v___x_85_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_99_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_91_; lean_object* v___x_93_; 
lean_inc_ref(v_decl_84_);
v___x_91_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v_pu_67_, v_lctx_86_, v_decl_84_);
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 0, v___x_91_);
v___x_93_ = v___x_89_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v___x_91_);
lean_ctor_set(v_reuseFailAlloc_98_, 1, v_nextIdx_87_);
v___x_93_ = v_reuseFailAlloc_98_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
lean_object* v___x_94_; lean_object* v___x_96_; 
v___x_94_ = lean_st_ref_put(v_a_70_, v___x_93_);
if (v_isShared_82_ == 0)
{
lean_ctor_set_tag(v___x_81_, 0);
lean_ctor_set(v___x_81_, 0, v_decl_84_);
v___x_96_ = v___x_81_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v_decl_84_);
v___x_96_ = v_reuseFailAlloc_97_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
return v___x_96_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_107_; 
lean_dec(v___x_75_);
v___x_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_107_, 0, v_decl_68_);
return v___x_107_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming___redArg___boxed(lean_object* v_pu_108_, lean_object* v_decl_109_, lean_object* v_r_110_, lean_object* v_a_111_, lean_object* v___y_112_){
_start:
{
uint8_t v_pu_boxed_113_; lean_object* v_res_114_; 
v_pu_boxed_113_ = lean_unbox(v_pu_108_);
v_res_114_ = l_Lean_Compiler_LCNF_LetDecl_applyRenaming___redArg(v_pu_boxed_113_, v_decl_109_, v_r_110_, v_a_111_);
lean_dec(v_a_111_);
lean_dec(v_r_110_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming(uint8_t v_pu_115_, lean_object* v_decl_116_, lean_object* v_r_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lean_Compiler_LCNF_LetDecl_applyRenaming___redArg(v_pu_115_, v_decl_116_, v_r_117_, v_a_119_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_applyRenaming___boxed(lean_object* v_pu_124_, lean_object* v_decl_125_, lean_object* v_r_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v___y_131_){
_start:
{
uint8_t v_pu_boxed_132_; lean_object* v_res_133_; 
v_pu_boxed_132_ = lean_unbox(v_pu_124_);
v_res_133_ = l_Lean_Compiler_LCNF_LetDecl_applyRenaming(v_pu_boxed_132_, v_decl_125_, v_r_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_);
lean_dec(v_a_130_);
lean_dec_ref(v_a_129_);
lean_dec(v_a_128_);
lean_dec_ref(v_a_127_);
lean_dec(v_r_126_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg(uint8_t v_pu_134_, lean_object* v_r_135_, lean_object* v_i_136_, lean_object* v_as_137_, lean_object* v___y_138_){
_start:
{
lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_140_ = lean_array_get_size(v_as_137_);
v___x_141_ = lean_nat_dec_lt(v_i_136_, v___x_140_);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; 
lean_dec(v_i_136_);
v___x_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_142_, 0, v_as_137_);
return v___x_142_;
}
else
{
lean_object* v_a_143_; lean_object* v___x_144_; 
v_a_143_ = lean_array_fget_borrowed(v_as_137_, v_i_136_);
lean_inc(v_a_143_);
v___x_144_ = l_Lean_Compiler_LCNF_Param_applyRenaming___redArg(v_pu_134_, v_a_143_, v_r_135_, v___y_138_);
if (lean_obj_tag(v___x_144_) == 0)
{
lean_object* v_a_145_; size_t v___x_146_; size_t v___x_147_; uint8_t v___x_148_; 
v_a_145_ = lean_ctor_get(v___x_144_, 0);
lean_inc(v_a_145_);
lean_dec_ref_known(v___x_144_, 1);
v___x_146_ = lean_ptr_addr(v_a_143_);
v___x_147_ = lean_ptr_addr(v_a_145_);
v___x_148_ = lean_usize_dec_eq(v___x_146_, v___x_147_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_149_ = lean_unsigned_to_nat(1u);
v___x_150_ = lean_nat_add(v_i_136_, v___x_149_);
v___x_151_ = lean_array_fset(v_as_137_, v_i_136_, v_a_145_);
lean_dec(v_i_136_);
v_i_136_ = v___x_150_;
v_as_137_ = v___x_151_;
goto _start;
}
else
{
lean_object* v___x_153_; lean_object* v___x_154_; 
lean_dec(v_a_145_);
v___x_153_ = lean_unsigned_to_nat(1u);
v___x_154_ = lean_nat_add(v_i_136_, v___x_153_);
lean_dec(v_i_136_);
v_i_136_ = v___x_154_;
goto _start;
}
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
lean_dec_ref(v_as_137_);
lean_dec(v_i_136_);
v_a_156_ = lean_ctor_get(v___x_144_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_144_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_144_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg___boxed(lean_object* v_pu_164_, lean_object* v_r_165_, lean_object* v_i_166_, lean_object* v_as_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
uint8_t v_pu_boxed_170_; lean_object* v_res_171_; 
v_pu_boxed_170_ = lean_unbox(v_pu_164_);
v_res_171_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg(v_pu_boxed_170_, v_r_165_, v_i_166_, v_as_167_, v___y_168_);
lean_dec(v___y_168_);
lean_dec(v_r_165_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__2(uint8_t v_pu_172_, lean_object* v_r_173_, lean_object* v_i_174_, lean_object* v_as_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_){
_start:
{
lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_181_ = lean_array_get_size(v_as_175_);
v___x_182_ = lean_nat_dec_lt(v_i_174_, v___x_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; 
lean_dec(v_i_174_);
v___x_183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_183_, 0, v_as_175_);
return v___x_183_;
}
else
{
lean_object* v_a_184_; lean_object* v_a_186_; 
v_a_184_ = lean_array_fget_borrowed(v_as_175_, v_i_174_);
switch(lean_obj_tag(v_a_184_))
{
case 0:
{
lean_object* v_params_197_; lean_object* v_code_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v_params_197_ = lean_ctor_get(v_a_184_, 1);
v_code_198_ = lean_ctor_get(v_a_184_, 2);
v___x_199_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_params_197_);
v___x_200_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg(v_pu_172_, v_r_173_, v___x_199_, v_params_197_, v___y_177_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_object* v_a_201_; lean_object* v___x_202_; 
v_a_201_ = lean_ctor_get(v___x_200_, 0);
lean_inc(v_a_201_);
lean_dec_ref_known(v___x_200_, 1);
lean_inc_ref(v_code_198_);
v___x_202_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_172_, v_code_198_, v_r_173_, v___y_176_, v___y_177_, v___y_178_, v___y_179_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; lean_object* v___x_204_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_203_);
lean_dec_ref_known(v___x_202_, 1);
lean_inc_ref(v_a_184_);
v___x_204_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(v_pu_172_, v_a_184_, v_a_201_, v_a_203_);
v_a_186_ = v___x_204_;
goto v___jp_185_;
}
else
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_212_; 
lean_dec(v_a_201_);
lean_dec_ref(v_as_175_);
lean_dec(v_i_174_);
v_a_205_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_212_ == 0)
{
v___x_207_ = v___x_202_;
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_202_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_210_; 
if (v_isShared_208_ == 0)
{
v___x_210_ = v___x_207_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_a_205_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
else
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
lean_dec_ref(v_as_175_);
lean_dec(v_i_174_);
v_a_213_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_220_ == 0)
{
v___x_215_ = v___x_200_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_200_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_213_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
case 1:
{
lean_object* v_code_221_; lean_object* v___x_222_; 
v_code_221_ = lean_ctor_get(v_a_184_, 1);
lean_inc_ref(v_code_221_);
v___x_222_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_172_, v_code_221_, v_r_173_, v___y_176_, v___y_177_, v___y_178_, v___y_179_);
if (lean_obj_tag(v___x_222_) == 0)
{
lean_object* v_a_223_; lean_object* v___x_224_; 
v_a_223_ = lean_ctor_get(v___x_222_, 0);
lean_inc(v_a_223_);
lean_dec_ref_known(v___x_222_, 1);
lean_inc_ref(v_a_184_);
v___x_224_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_184_, v_a_223_);
v_a_186_ = v___x_224_;
goto v___jp_185_;
}
else
{
lean_object* v_a_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_232_; 
lean_dec_ref(v_as_175_);
lean_dec(v_i_174_);
v_a_225_ = lean_ctor_get(v___x_222_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_222_);
if (v_isSharedCheck_232_ == 0)
{
v___x_227_ = v___x_222_;
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_a_225_);
lean_dec(v___x_222_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_230_; 
if (v_isShared_228_ == 0)
{
v___x_230_ = v___x_227_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_a_225_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
default: 
{
lean_object* v_code_233_; lean_object* v___x_234_; 
v_code_233_ = lean_ctor_get(v_a_184_, 0);
lean_inc_ref(v_code_233_);
v___x_234_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_172_, v_code_233_, v_r_173_, v___y_176_, v___y_177_, v___y_178_, v___y_179_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v_a_235_; lean_object* v___x_236_; 
v_a_235_ = lean_ctor_get(v___x_234_, 0);
lean_inc(v_a_235_);
lean_dec_ref_known(v___x_234_, 1);
lean_inc_ref(v_a_184_);
v___x_236_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_184_, v_a_235_);
v_a_186_ = v___x_236_;
goto v___jp_185_;
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_244_; 
lean_dec_ref(v_as_175_);
lean_dec(v_i_174_);
v_a_237_ = lean_ctor_get(v___x_234_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_244_ == 0)
{
v___x_239_ = v___x_234_;
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_234_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_240_ == 0)
{
v___x_242_ = v___x_239_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_a_237_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
}
v___jp_185_:
{
size_t v___x_187_; size_t v___x_188_; uint8_t v___x_189_; 
v___x_187_ = lean_ptr_addr(v_a_184_);
v___x_188_ = lean_ptr_addr(v_a_186_);
v___x_189_ = lean_usize_dec_eq(v___x_187_, v___x_188_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_190_ = lean_unsigned_to_nat(1u);
v___x_191_ = lean_nat_add(v_i_174_, v___x_190_);
v___x_192_ = lean_array_fset(v_as_175_, v_i_174_, v_a_186_);
lean_dec(v_i_174_);
v_i_174_ = v___x_191_;
v_as_175_ = v___x_192_;
goto _start;
}
else
{
lean_object* v___x_194_; lean_object* v___x_195_; 
lean_dec_ref(v_a_186_);
v___x_194_ = lean_unsigned_to_nat(1u);
v___x_195_ = lean_nat_add(v_i_174_, v___x_194_);
lean_dec(v_i_174_);
v_i_174_ = v___x_195_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_applyRenaming(uint8_t v_pu_245_, lean_object* v_code_246_, lean_object* v_r_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
switch(lean_obj_tag(v_code_246_))
{
case 0:
{
lean_object* v_decl_253_; lean_object* v_k_254_; lean_object* v___x_255_; 
v_decl_253_ = lean_ctor_get(v_code_246_, 0);
v_k_254_ = lean_ctor_get(v_code_246_, 1);
lean_inc_ref(v_decl_253_);
v___x_255_ = l_Lean_Compiler_LCNF_LetDecl_applyRenaming___redArg(v_pu_245_, v_decl_253_, v_r_247_, v_a_249_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v_a_256_; lean_object* v___x_257_; 
v_a_256_ = lean_ctor_get(v___x_255_, 0);
lean_inc(v_a_256_);
lean_dec_ref_known(v___x_255_, 1);
lean_inc_ref(v_k_254_);
v___x_257_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_245_, v_k_254_, v_r_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_257_) == 0)
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_295_; 
v_a_258_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_295_ == 0)
{
v___x_260_ = v___x_257_;
v_isShared_261_ = v_isSharedCheck_295_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_257_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_295_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
size_t v___x_262_; size_t v___x_263_; uint8_t v___x_264_; 
v___x_262_ = lean_ptr_addr(v_k_254_);
v___x_263_ = lean_ptr_addr(v_a_258_);
v___x_264_ = lean_usize_dec_eq(v___x_262_, v___x_263_);
if (v___x_264_ == 0)
{
lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_274_; 
v_isSharedCheck_274_ = !lean_is_exclusive(v_code_246_);
if (v_isSharedCheck_274_ == 0)
{
lean_object* v_unused_275_; lean_object* v_unused_276_; 
v_unused_275_ = lean_ctor_get(v_code_246_, 1);
lean_dec(v_unused_275_);
v_unused_276_ = lean_ctor_get(v_code_246_, 0);
lean_dec(v_unused_276_);
v___x_266_ = v_code_246_;
v_isShared_267_ = v_isSharedCheck_274_;
goto v_resetjp_265_;
}
else
{
lean_dec(v_code_246_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_274_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 1, v_a_258_);
lean_ctor_set(v___x_266_, 0, v_a_256_);
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_256_);
lean_ctor_set(v_reuseFailAlloc_273_, 1, v_a_258_);
v___x_269_ = v_reuseFailAlloc_273_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v___x_271_; 
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v___x_269_);
v___x_271_ = v___x_260_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v___x_269_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
else
{
size_t v___x_277_; size_t v___x_278_; uint8_t v___x_279_; 
v___x_277_ = lean_ptr_addr(v_decl_253_);
v___x_278_ = lean_ptr_addr(v_a_256_);
v___x_279_ = lean_usize_dec_eq(v___x_277_, v___x_278_);
if (v___x_279_ == 0)
{
lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_289_; 
v_isSharedCheck_289_ = !lean_is_exclusive(v_code_246_);
if (v_isSharedCheck_289_ == 0)
{
lean_object* v_unused_290_; lean_object* v_unused_291_; 
v_unused_290_ = lean_ctor_get(v_code_246_, 1);
lean_dec(v_unused_290_);
v_unused_291_ = lean_ctor_get(v_code_246_, 0);
lean_dec(v_unused_291_);
v___x_281_ = v_code_246_;
v_isShared_282_ = v_isSharedCheck_289_;
goto v_resetjp_280_;
}
else
{
lean_dec(v_code_246_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_289_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 1, v_a_258_);
lean_ctor_set(v___x_281_, 0, v_a_256_);
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_a_256_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v_a_258_);
v___x_284_ = v_reuseFailAlloc_288_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
lean_object* v___x_286_; 
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v___x_284_);
v___x_286_ = v___x_260_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_284_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
else
{
lean_object* v___x_293_; 
lean_dec(v_a_258_);
lean_dec(v_a_256_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v_code_246_);
v___x_293_ = v___x_260_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_code_246_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
}
}
else
{
lean_dec(v_a_256_);
lean_dec_ref_known(v_code_246_, 2);
return v___x_257_;
}
}
else
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
lean_dec_ref_known(v_code_246_, 2);
v_a_296_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_303_ == 0)
{
v___x_298_ = v___x_255_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_255_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_296_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
case 1:
{
lean_object* v_decl_304_; lean_object* v_k_305_; lean_object* v___x_306_; 
v_decl_304_ = lean_ctor_get(v_code_246_, 0);
v_k_305_ = lean_ctor_get(v_code_246_, 1);
lean_inc_ref(v_decl_304_);
v___x_306_ = l_Lean_Compiler_LCNF_FunDecl_applyRenaming(v_pu_245_, v_decl_304_, v_r_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v_a_307_; lean_object* v___x_308_; 
v_a_307_ = lean_ctor_get(v___x_306_, 0);
lean_inc(v_a_307_);
lean_dec_ref_known(v___x_306_, 1);
lean_inc_ref(v_k_305_);
v___x_308_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_245_, v_k_305_, v_r_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_346_; 
v_a_309_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_346_ == 0)
{
v___x_311_ = v___x_308_;
v_isShared_312_ = v_isSharedCheck_346_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_308_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_346_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
size_t v___x_313_; size_t v___x_314_; uint8_t v___x_315_; 
v___x_313_ = lean_ptr_addr(v_k_305_);
v___x_314_ = lean_ptr_addr(v_a_309_);
v___x_315_ = lean_usize_dec_eq(v___x_313_, v___x_314_);
if (v___x_315_ == 0)
{
lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_325_; 
v_isSharedCheck_325_ = !lean_is_exclusive(v_code_246_);
if (v_isSharedCheck_325_ == 0)
{
lean_object* v_unused_326_; lean_object* v_unused_327_; 
v_unused_326_ = lean_ctor_get(v_code_246_, 1);
lean_dec(v_unused_326_);
v_unused_327_ = lean_ctor_get(v_code_246_, 0);
lean_dec(v_unused_327_);
v___x_317_ = v_code_246_;
v_isShared_318_ = v_isSharedCheck_325_;
goto v_resetjp_316_;
}
else
{
lean_dec(v_code_246_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_325_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
lean_ctor_set(v___x_317_, 1, v_a_309_);
lean_ctor_set(v___x_317_, 0, v_a_307_);
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_a_307_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v_a_309_);
v___x_320_ = v_reuseFailAlloc_324_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
lean_object* v___x_322_; 
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 0, v___x_320_);
v___x_322_ = v___x_311_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v___x_320_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
else
{
size_t v___x_328_; size_t v___x_329_; uint8_t v___x_330_; 
v___x_328_ = lean_ptr_addr(v_decl_304_);
v___x_329_ = lean_ptr_addr(v_a_307_);
v___x_330_ = lean_usize_dec_eq(v___x_328_, v___x_329_);
if (v___x_330_ == 0)
{
lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_340_; 
v_isSharedCheck_340_ = !lean_is_exclusive(v_code_246_);
if (v_isSharedCheck_340_ == 0)
{
lean_object* v_unused_341_; lean_object* v_unused_342_; 
v_unused_341_ = lean_ctor_get(v_code_246_, 1);
lean_dec(v_unused_341_);
v_unused_342_ = lean_ctor_get(v_code_246_, 0);
lean_dec(v_unused_342_);
v___x_332_ = v_code_246_;
v_isShared_333_ = v_isSharedCheck_340_;
goto v_resetjp_331_;
}
else
{
lean_dec(v_code_246_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_340_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_335_; 
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 1, v_a_309_);
lean_ctor_set(v___x_332_, 0, v_a_307_);
v___x_335_ = v___x_332_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_a_307_);
lean_ctor_set(v_reuseFailAlloc_339_, 1, v_a_309_);
v___x_335_ = v_reuseFailAlloc_339_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
lean_object* v___x_337_; 
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 0, v___x_335_);
v___x_337_ = v___x_311_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_335_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
}
else
{
lean_object* v___x_344_; 
lean_dec(v_a_309_);
lean_dec(v_a_307_);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 0, v_code_246_);
v___x_344_ = v___x_311_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_code_246_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
}
}
else
{
lean_dec(v_a_307_);
lean_dec_ref_known(v_code_246_, 2);
return v___x_308_;
}
}
else
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_354_; 
lean_dec_ref_known(v_code_246_, 2);
v_a_347_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_354_ == 0)
{
v___x_349_ = v___x_306_;
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_306_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_352_; 
if (v_isShared_350_ == 0)
{
v___x_352_ = v___x_349_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_a_347_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
case 2:
{
lean_object* v_decl_355_; lean_object* v_k_356_; lean_object* v___x_357_; 
v_decl_355_ = lean_ctor_get(v_code_246_, 0);
v_k_356_ = lean_ctor_get(v_code_246_, 1);
lean_inc_ref(v_decl_355_);
v___x_357_ = l_Lean_Compiler_LCNF_FunDecl_applyRenaming(v_pu_245_, v_decl_355_, v_r_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v_a_358_; lean_object* v___x_359_; 
v_a_358_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_a_358_);
lean_dec_ref_known(v___x_357_, 1);
lean_inc_ref(v_k_356_);
v___x_359_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_245_, v_k_356_, v_r_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_397_; 
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_397_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_397_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_397_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
size_t v___x_364_; size_t v___x_365_; uint8_t v___x_366_; 
v___x_364_ = lean_ptr_addr(v_k_356_);
v___x_365_ = lean_ptr_addr(v_a_360_);
v___x_366_ = lean_usize_dec_eq(v___x_364_, v___x_365_);
if (v___x_366_ == 0)
{
lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_376_; 
v_isSharedCheck_376_ = !lean_is_exclusive(v_code_246_);
if (v_isSharedCheck_376_ == 0)
{
lean_object* v_unused_377_; lean_object* v_unused_378_; 
v_unused_377_ = lean_ctor_get(v_code_246_, 1);
lean_dec(v_unused_377_);
v_unused_378_ = lean_ctor_get(v_code_246_, 0);
lean_dec(v_unused_378_);
v___x_368_ = v_code_246_;
v_isShared_369_ = v_isSharedCheck_376_;
goto v_resetjp_367_;
}
else
{
lean_dec(v_code_246_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_376_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_371_; 
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 1, v_a_360_);
lean_ctor_set(v___x_368_, 0, v_a_358_);
v___x_371_ = v___x_368_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_a_358_);
lean_ctor_set(v_reuseFailAlloc_375_, 1, v_a_360_);
v___x_371_ = v_reuseFailAlloc_375_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
lean_object* v___x_373_; 
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_371_);
v___x_373_ = v___x_362_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v___x_371_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
}
else
{
size_t v___x_379_; size_t v___x_380_; uint8_t v___x_381_; 
v___x_379_ = lean_ptr_addr(v_decl_355_);
v___x_380_ = lean_ptr_addr(v_a_358_);
v___x_381_ = lean_usize_dec_eq(v___x_379_, v___x_380_);
if (v___x_381_ == 0)
{
lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_391_; 
v_isSharedCheck_391_ = !lean_is_exclusive(v_code_246_);
if (v_isSharedCheck_391_ == 0)
{
lean_object* v_unused_392_; lean_object* v_unused_393_; 
v_unused_392_ = lean_ctor_get(v_code_246_, 1);
lean_dec(v_unused_392_);
v_unused_393_ = lean_ctor_get(v_code_246_, 0);
lean_dec(v_unused_393_);
v___x_383_ = v_code_246_;
v_isShared_384_ = v_isSharedCheck_391_;
goto v_resetjp_382_;
}
else
{
lean_dec(v_code_246_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_391_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_386_; 
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 1, v_a_360_);
lean_ctor_set(v___x_383_, 0, v_a_358_);
v___x_386_ = v___x_383_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_358_);
lean_ctor_set(v_reuseFailAlloc_390_, 1, v_a_360_);
v___x_386_ = v_reuseFailAlloc_390_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
lean_object* v___x_388_; 
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_386_);
v___x_388_ = v___x_362_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_386_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
else
{
lean_object* v___x_395_; 
lean_dec(v_a_360_);
lean_dec(v_a_358_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v_code_246_);
v___x_395_ = v___x_362_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_code_246_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
}
}
else
{
lean_dec(v_a_358_);
lean_dec_ref_known(v_code_246_, 2);
return v___x_359_;
}
}
else
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_405_; 
lean_dec_ref_known(v_code_246_, 2);
v_a_398_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_405_ == 0)
{
v___x_400_ = v___x_357_;
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v___x_357_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_403_; 
if (v_isShared_401_ == 0)
{
v___x_403_ = v___x_400_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_a_398_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
case 4:
{
lean_object* v_cases_406_; lean_object* v_typeName_407_; lean_object* v_resultType_408_; lean_object* v_discr_409_; lean_object* v_alts_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_449_; 
v_cases_406_ = lean_ctor_get(v_code_246_, 0);
lean_inc_ref(v_cases_406_);
v_typeName_407_ = lean_ctor_get(v_cases_406_, 0);
v_resultType_408_ = lean_ctor_get(v_cases_406_, 1);
v_discr_409_ = lean_ctor_get(v_cases_406_, 2);
v_alts_410_ = lean_ctor_get(v_cases_406_, 3);
v_isSharedCheck_449_ = !lean_is_exclusive(v_cases_406_);
if (v_isSharedCheck_449_ == 0)
{
v___x_412_ = v_cases_406_;
v_isShared_413_ = v_isSharedCheck_449_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_alts_410_);
lean_inc(v_discr_409_);
lean_inc(v_resultType_408_);
lean_inc(v_typeName_407_);
lean_dec(v_cases_406_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_449_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_410_);
v___x_415_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__2(v_pu_245_, v_r_247_, v___x_414_, v_alts_410_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_440_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_440_ == 0)
{
v___x_418_ = v___x_415_;
v_isShared_419_ = v_isSharedCheck_440_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v___x_415_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_440_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
size_t v___x_420_; size_t v___x_421_; uint8_t v___x_422_; 
v___x_420_ = lean_ptr_addr(v_alts_410_);
lean_dec_ref(v_alts_410_);
v___x_421_ = lean_ptr_addr(v_a_416_);
v___x_422_ = lean_usize_dec_eq(v___x_420_, v___x_421_);
if (v___x_422_ == 0)
{
lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_435_; 
v_isSharedCheck_435_ = !lean_is_exclusive(v_code_246_);
if (v_isSharedCheck_435_ == 0)
{
lean_object* v_unused_436_; 
v_unused_436_ = lean_ctor_get(v_code_246_, 0);
lean_dec(v_unused_436_);
v___x_424_ = v_code_246_;
v_isShared_425_ = v_isSharedCheck_435_;
goto v_resetjp_423_;
}
else
{
lean_dec(v_code_246_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_435_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_427_; 
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 3, v_a_416_);
v___x_427_ = v___x_412_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_typeName_407_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_resultType_408_);
lean_ctor_set(v_reuseFailAlloc_434_, 2, v_discr_409_);
lean_ctor_set(v_reuseFailAlloc_434_, 3, v_a_416_);
v___x_427_ = v_reuseFailAlloc_434_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
lean_object* v___x_429_; 
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v___x_427_);
v___x_429_ = v___x_424_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v___x_427_);
v___x_429_ = v_reuseFailAlloc_433_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
lean_object* v___x_431_; 
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_429_);
v___x_431_ = v___x_418_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_429_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
}
}
else
{
lean_object* v___x_438_; 
lean_dec(v_a_416_);
lean_del_object(v___x_412_);
lean_dec(v_discr_409_);
lean_dec_ref(v_resultType_408_);
lean_dec(v_typeName_407_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v_code_246_);
v___x_438_ = v___x_418_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_code_246_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
else
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
lean_del_object(v___x_412_);
lean_dec_ref(v_alts_410_);
lean_dec(v_discr_409_);
lean_dec_ref(v_resultType_408_);
lean_dec(v_typeName_407_);
lean_dec_ref_known(v_code_246_, 1);
v_a_441_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v___x_415_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_415_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_444_ == 0)
{
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_a_441_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
}
case 7:
{
lean_object* v_fvarId_450_; lean_object* v_i_451_; lean_object* v_y_452_; lean_object* v_k_453_; lean_object* v___x_454_; 
v_fvarId_450_ = lean_ctor_get(v_code_246_, 0);
v_i_451_ = lean_ctor_get(v_code_246_, 1);
v_y_452_ = lean_ctor_get(v_code_246_, 2);
v_k_453_ = lean_ctor_get(v_code_246_, 3);
lean_inc_ref(v_k_453_);
v___x_454_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_245_, v_k_453_, v_r_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_479_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_479_ == 0)
{
v___x_457_ = v___x_454_;
v_isShared_458_ = v_isSharedCheck_479_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_a_455_);
lean_dec(v___x_454_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_479_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
size_t v___x_459_; size_t v___x_460_; uint8_t v___x_461_; 
v___x_459_ = lean_ptr_addr(v_k_453_);
v___x_460_ = lean_ptr_addr(v_a_455_);
v___x_461_ = lean_usize_dec_eq(v___x_459_, v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_471_; 
lean_inc(v_y_452_);
lean_inc(v_i_451_);
lean_inc(v_fvarId_450_);
v_isSharedCheck_471_ = !lean_is_exclusive(v_code_246_);
if (v_isSharedCheck_471_ == 0)
{
lean_object* v_unused_472_; lean_object* v_unused_473_; lean_object* v_unused_474_; lean_object* v_unused_475_; 
v_unused_472_ = lean_ctor_get(v_code_246_, 3);
lean_dec(v_unused_472_);
v_unused_473_ = lean_ctor_get(v_code_246_, 2);
lean_dec(v_unused_473_);
v_unused_474_ = lean_ctor_get(v_code_246_, 1);
lean_dec(v_unused_474_);
v_unused_475_ = lean_ctor_get(v_code_246_, 0);
lean_dec(v_unused_475_);
v___x_463_ = v_code_246_;
v_isShared_464_ = v_isSharedCheck_471_;
goto v_resetjp_462_;
}
else
{
lean_dec(v_code_246_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_471_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 3, v_a_455_);
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_fvarId_450_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v_i_451_);
lean_ctor_set(v_reuseFailAlloc_470_, 2, v_y_452_);
lean_ctor_set(v_reuseFailAlloc_470_, 3, v_a_455_);
v___x_466_ = v_reuseFailAlloc_470_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
lean_object* v___x_468_; 
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 0, v___x_466_);
v___x_468_ = v___x_457_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v___x_466_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
else
{
lean_object* v___x_477_; 
lean_dec(v_a_455_);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 0, v_code_246_);
v___x_477_ = v___x_457_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_code_246_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_246_, 4);
return v___x_454_;
}
}
case 8:
{
lean_object* v_fvarId_480_; lean_object* v_i_481_; lean_object* v_y_482_; lean_object* v_k_483_; lean_object* v___x_484_; 
v_fvarId_480_ = lean_ctor_get(v_code_246_, 0);
v_i_481_ = lean_ctor_get(v_code_246_, 1);
v_y_482_ = lean_ctor_get(v_code_246_, 2);
v_k_483_ = lean_ctor_get(v_code_246_, 3);
lean_inc_ref(v_k_483_);
v___x_484_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_245_, v_k_483_, v_r_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_509_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_509_ == 0)
{
v___x_487_ = v___x_484_;
v_isShared_488_ = v_isSharedCheck_509_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_484_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_509_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
size_t v___x_489_; size_t v___x_490_; uint8_t v___x_491_; 
v___x_489_ = lean_ptr_addr(v_k_483_);
v___x_490_ = lean_ptr_addr(v_a_485_);
v___x_491_ = lean_usize_dec_eq(v___x_489_, v___x_490_);
if (v___x_491_ == 0)
{
lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_501_; 
lean_inc(v_y_482_);
lean_inc(v_i_481_);
lean_inc(v_fvarId_480_);
v_isSharedCheck_501_ = !lean_is_exclusive(v_code_246_);
if (v_isSharedCheck_501_ == 0)
{
lean_object* v_unused_502_; lean_object* v_unused_503_; lean_object* v_unused_504_; lean_object* v_unused_505_; 
v_unused_502_ = lean_ctor_get(v_code_246_, 3);
lean_dec(v_unused_502_);
v_unused_503_ = lean_ctor_get(v_code_246_, 2);
lean_dec(v_unused_503_);
v_unused_504_ = lean_ctor_get(v_code_246_, 1);
lean_dec(v_unused_504_);
v_unused_505_ = lean_ctor_get(v_code_246_, 0);
lean_dec(v_unused_505_);
v___x_493_ = v_code_246_;
v_isShared_494_ = v_isSharedCheck_501_;
goto v_resetjp_492_;
}
else
{
lean_dec(v_code_246_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_501_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 3, v_a_485_);
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_fvarId_480_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v_i_481_);
lean_ctor_set(v_reuseFailAlloc_500_, 2, v_y_482_);
lean_ctor_set(v_reuseFailAlloc_500_, 3, v_a_485_);
v___x_496_ = v_reuseFailAlloc_500_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
lean_object* v___x_498_; 
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_496_);
v___x_498_ = v___x_487_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
else
{
lean_object* v___x_507_; 
lean_dec(v_a_485_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v_code_246_);
v___x_507_ = v___x_487_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_code_246_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_246_, 4);
return v___x_484_;
}
}
case 9:
{
lean_object* v_fvarId_510_; lean_object* v_i_511_; lean_object* v_offset_512_; lean_object* v_y_513_; lean_object* v_ty_514_; lean_object* v_k_515_; lean_object* v___x_516_; 
v_fvarId_510_ = lean_ctor_get(v_code_246_, 0);
v_i_511_ = lean_ctor_get(v_code_246_, 1);
v_offset_512_ = lean_ctor_get(v_code_246_, 2);
v_y_513_ = lean_ctor_get(v_code_246_, 3);
v_ty_514_ = lean_ctor_get(v_code_246_, 4);
v_k_515_ = lean_ctor_get(v_code_246_, 5);
lean_inc_ref(v_k_515_);
v___x_516_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_245_, v_k_515_, v_r_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_543_; 
v_a_517_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_543_ == 0)
{
v___x_519_ = v___x_516_;
v_isShared_520_ = v_isSharedCheck_543_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_516_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_543_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
size_t v___x_521_; size_t v___x_522_; uint8_t v___x_523_; 
v___x_521_ = lean_ptr_addr(v_k_515_);
v___x_522_ = lean_ptr_addr(v_a_517_);
v___x_523_ = lean_usize_dec_eq(v___x_521_, v___x_522_);
if (v___x_523_ == 0)
{
lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_533_; 
lean_inc_ref(v_ty_514_);
lean_inc(v_y_513_);
lean_inc(v_offset_512_);
lean_inc(v_i_511_);
lean_inc(v_fvarId_510_);
v_isSharedCheck_533_ = !lean_is_exclusive(v_code_246_);
if (v_isSharedCheck_533_ == 0)
{
lean_object* v_unused_534_; lean_object* v_unused_535_; lean_object* v_unused_536_; lean_object* v_unused_537_; lean_object* v_unused_538_; lean_object* v_unused_539_; 
v_unused_534_ = lean_ctor_get(v_code_246_, 5);
lean_dec(v_unused_534_);
v_unused_535_ = lean_ctor_get(v_code_246_, 4);
lean_dec(v_unused_535_);
v_unused_536_ = lean_ctor_get(v_code_246_, 3);
lean_dec(v_unused_536_);
v_unused_537_ = lean_ctor_get(v_code_246_, 2);
lean_dec(v_unused_537_);
v_unused_538_ = lean_ctor_get(v_code_246_, 1);
lean_dec(v_unused_538_);
v_unused_539_ = lean_ctor_get(v_code_246_, 0);
lean_dec(v_unused_539_);
v___x_525_ = v_code_246_;
v_isShared_526_ = v_isSharedCheck_533_;
goto v_resetjp_524_;
}
else
{
lean_dec(v_code_246_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_533_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 5, v_a_517_);
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_fvarId_510_);
lean_ctor_set(v_reuseFailAlloc_532_, 1, v_i_511_);
lean_ctor_set(v_reuseFailAlloc_532_, 2, v_offset_512_);
lean_ctor_set(v_reuseFailAlloc_532_, 3, v_y_513_);
lean_ctor_set(v_reuseFailAlloc_532_, 4, v_ty_514_);
lean_ctor_set(v_reuseFailAlloc_532_, 5, v_a_517_);
v___x_528_ = v_reuseFailAlloc_532_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_530_; 
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_528_);
v___x_530_ = v___x_519_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_528_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
else
{
lean_object* v___x_541_; 
lean_dec(v_a_517_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v_code_246_);
v___x_541_ = v___x_519_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_code_246_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_246_, 6);
return v___x_516_;
}
}
case 10:
{
lean_object* v_fvarId_544_; lean_object* v_cidx_545_; lean_object* v_k_546_; lean_object* v___x_547_; 
v_fvarId_544_ = lean_ctor_get(v_code_246_, 0);
v_cidx_545_ = lean_ctor_get(v_code_246_, 1);
v_k_546_ = lean_ctor_get(v_code_246_, 2);
lean_inc_ref(v_k_546_);
v___x_547_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_245_, v_k_546_, v_r_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_547_) == 0)
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_571_; 
v_a_548_ = lean_ctor_get(v___x_547_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_547_);
if (v_isSharedCheck_571_ == 0)
{
v___x_550_ = v___x_547_;
v_isShared_551_ = v_isSharedCheck_571_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_547_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_571_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
size_t v___x_552_; size_t v___x_553_; uint8_t v___x_554_; 
v___x_552_ = lean_ptr_addr(v_k_546_);
v___x_553_ = lean_ptr_addr(v_a_548_);
v___x_554_ = lean_usize_dec_eq(v___x_552_, v___x_553_);
if (v___x_554_ == 0)
{
lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_564_; 
lean_inc(v_cidx_545_);
lean_inc(v_fvarId_544_);
v_isSharedCheck_564_ = !lean_is_exclusive(v_code_246_);
if (v_isSharedCheck_564_ == 0)
{
lean_object* v_unused_565_; lean_object* v_unused_566_; lean_object* v_unused_567_; 
v_unused_565_ = lean_ctor_get(v_code_246_, 2);
lean_dec(v_unused_565_);
v_unused_566_ = lean_ctor_get(v_code_246_, 1);
lean_dec(v_unused_566_);
v_unused_567_ = lean_ctor_get(v_code_246_, 0);
lean_dec(v_unused_567_);
v___x_556_ = v_code_246_;
v_isShared_557_ = v_isSharedCheck_564_;
goto v_resetjp_555_;
}
else
{
lean_dec(v_code_246_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_564_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 2, v_a_548_);
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_fvarId_544_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_cidx_545_);
lean_ctor_set(v_reuseFailAlloc_563_, 2, v_a_548_);
v___x_559_ = v_reuseFailAlloc_563_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
lean_object* v___x_561_; 
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 0, v___x_559_);
v___x_561_ = v___x_550_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v___x_559_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
else
{
lean_object* v___x_569_; 
lean_dec(v_a_548_);
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 0, v_code_246_);
v___x_569_ = v___x_550_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_code_246_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_246_, 3);
return v___x_547_;
}
}
case 11:
{
lean_object* v_fvarId_572_; lean_object* v_n_573_; uint8_t v_check_574_; uint8_t v_persistent_575_; lean_object* v_k_576_; lean_object* v___x_577_; 
v_fvarId_572_ = lean_ctor_get(v_code_246_, 0);
v_n_573_ = lean_ctor_get(v_code_246_, 1);
v_check_574_ = lean_ctor_get_uint8(v_code_246_, sizeof(void*)*3);
v_persistent_575_ = lean_ctor_get_uint8(v_code_246_, sizeof(void*)*3 + 1);
v_k_576_ = lean_ctor_get(v_code_246_, 2);
lean_inc_ref(v_k_576_);
v___x_577_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_245_, v_k_576_, v_r_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_601_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_601_ == 0)
{
v___x_580_ = v___x_577_;
v_isShared_581_ = v_isSharedCheck_601_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_577_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_601_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
size_t v___x_582_; size_t v___x_583_; uint8_t v___x_584_; 
v___x_582_ = lean_ptr_addr(v_k_576_);
v___x_583_ = lean_ptr_addr(v_a_578_);
v___x_584_ = lean_usize_dec_eq(v___x_582_, v___x_583_);
if (v___x_584_ == 0)
{
lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_594_; 
lean_inc(v_n_573_);
lean_inc(v_fvarId_572_);
v_isSharedCheck_594_ = !lean_is_exclusive(v_code_246_);
if (v_isSharedCheck_594_ == 0)
{
lean_object* v_unused_595_; lean_object* v_unused_596_; lean_object* v_unused_597_; 
v_unused_595_ = lean_ctor_get(v_code_246_, 2);
lean_dec(v_unused_595_);
v_unused_596_ = lean_ctor_get(v_code_246_, 1);
lean_dec(v_unused_596_);
v_unused_597_ = lean_ctor_get(v_code_246_, 0);
lean_dec(v_unused_597_);
v___x_586_ = v_code_246_;
v_isShared_587_ = v_isSharedCheck_594_;
goto v_resetjp_585_;
}
else
{
lean_dec(v_code_246_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_594_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 2, v_a_578_);
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_fvarId_572_);
lean_ctor_set(v_reuseFailAlloc_593_, 1, v_n_573_);
lean_ctor_set(v_reuseFailAlloc_593_, 2, v_a_578_);
lean_ctor_set_uint8(v_reuseFailAlloc_593_, sizeof(void*)*3, v_check_574_);
lean_ctor_set_uint8(v_reuseFailAlloc_593_, sizeof(void*)*3 + 1, v_persistent_575_);
v___x_589_ = v_reuseFailAlloc_593_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
lean_object* v___x_591_; 
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 0, v___x_589_);
v___x_591_ = v___x_580_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_589_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
}
else
{
lean_object* v___x_599_; 
lean_dec(v_a_578_);
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 0, v_code_246_);
v___x_599_ = v___x_580_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_code_246_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_246_, 3);
return v___x_577_;
}
}
case 12:
{
lean_object* v_fvarId_602_; lean_object* v_n_603_; uint8_t v_check_604_; uint8_t v_persistent_605_; lean_object* v_objs_x3f_606_; lean_object* v_k_607_; lean_object* v___x_608_; 
v_fvarId_602_ = lean_ctor_get(v_code_246_, 0);
v_n_603_ = lean_ctor_get(v_code_246_, 1);
v_check_604_ = lean_ctor_get_uint8(v_code_246_, sizeof(void*)*4);
v_persistent_605_ = lean_ctor_get_uint8(v_code_246_, sizeof(void*)*4 + 1);
v_objs_x3f_606_ = lean_ctor_get(v_code_246_, 2);
v_k_607_ = lean_ctor_get(v_code_246_, 3);
lean_inc_ref(v_k_607_);
v___x_608_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_245_, v_k_607_, v_r_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_633_; 
v_a_609_ = lean_ctor_get(v___x_608_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_633_ == 0)
{
v___x_611_ = v___x_608_;
v_isShared_612_ = v_isSharedCheck_633_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v___x_608_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_633_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
size_t v___x_613_; size_t v___x_614_; uint8_t v___x_615_; 
v___x_613_ = lean_ptr_addr(v_k_607_);
v___x_614_ = lean_ptr_addr(v_a_609_);
v___x_615_ = lean_usize_dec_eq(v___x_613_, v___x_614_);
if (v___x_615_ == 0)
{
lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_625_; 
lean_inc(v_objs_x3f_606_);
lean_inc(v_n_603_);
lean_inc(v_fvarId_602_);
v_isSharedCheck_625_ = !lean_is_exclusive(v_code_246_);
if (v_isSharedCheck_625_ == 0)
{
lean_object* v_unused_626_; lean_object* v_unused_627_; lean_object* v_unused_628_; lean_object* v_unused_629_; 
v_unused_626_ = lean_ctor_get(v_code_246_, 3);
lean_dec(v_unused_626_);
v_unused_627_ = lean_ctor_get(v_code_246_, 2);
lean_dec(v_unused_627_);
v_unused_628_ = lean_ctor_get(v_code_246_, 1);
lean_dec(v_unused_628_);
v_unused_629_ = lean_ctor_get(v_code_246_, 0);
lean_dec(v_unused_629_);
v___x_617_ = v_code_246_;
v_isShared_618_ = v_isSharedCheck_625_;
goto v_resetjp_616_;
}
else
{
lean_dec(v_code_246_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_625_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 3, v_a_609_);
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_fvarId_602_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_n_603_);
lean_ctor_set(v_reuseFailAlloc_624_, 2, v_objs_x3f_606_);
lean_ctor_set(v_reuseFailAlloc_624_, 3, v_a_609_);
lean_ctor_set_uint8(v_reuseFailAlloc_624_, sizeof(void*)*4, v_check_604_);
lean_ctor_set_uint8(v_reuseFailAlloc_624_, sizeof(void*)*4 + 1, v_persistent_605_);
v___x_620_ = v_reuseFailAlloc_624_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
lean_object* v___x_622_; 
if (v_isShared_612_ == 0)
{
lean_ctor_set(v___x_611_, 0, v___x_620_);
v___x_622_ = v___x_611_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_620_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
else
{
lean_object* v___x_631_; 
lean_dec(v_a_609_);
if (v_isShared_612_ == 0)
{
lean_ctor_set(v___x_611_, 0, v_code_246_);
v___x_631_ = v___x_611_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_code_246_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_246_, 4);
return v___x_608_;
}
}
case 13:
{
lean_object* v_fvarId_634_; lean_object* v_k_635_; lean_object* v___x_636_; 
v_fvarId_634_ = lean_ctor_get(v_code_246_, 0);
v_k_635_ = lean_ctor_get(v_code_246_, 1);
lean_inc_ref(v_k_635_);
v___x_636_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_245_, v_k_635_, v_r_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_636_) == 0)
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_659_; 
v_a_637_ = lean_ctor_get(v___x_636_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_636_);
if (v_isSharedCheck_659_ == 0)
{
v___x_639_ = v___x_636_;
v_isShared_640_ = v_isSharedCheck_659_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_636_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_659_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
size_t v___x_641_; size_t v___x_642_; uint8_t v___x_643_; 
v___x_641_ = lean_ptr_addr(v_k_635_);
v___x_642_ = lean_ptr_addr(v_a_637_);
v___x_643_ = lean_usize_dec_eq(v___x_641_, v___x_642_);
if (v___x_643_ == 0)
{
lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_653_; 
lean_inc(v_fvarId_634_);
v_isSharedCheck_653_ = !lean_is_exclusive(v_code_246_);
if (v_isSharedCheck_653_ == 0)
{
lean_object* v_unused_654_; lean_object* v_unused_655_; 
v_unused_654_ = lean_ctor_get(v_code_246_, 1);
lean_dec(v_unused_654_);
v_unused_655_ = lean_ctor_get(v_code_246_, 0);
lean_dec(v_unused_655_);
v___x_645_ = v_code_246_;
v_isShared_646_ = v_isSharedCheck_653_;
goto v_resetjp_644_;
}
else
{
lean_dec(v_code_246_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_653_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 1, v_a_637_);
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_fvarId_634_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v_a_637_);
v___x_648_ = v_reuseFailAlloc_652_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
lean_object* v___x_650_; 
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 0, v___x_648_);
v___x_650_ = v___x_639_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_648_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
else
{
lean_object* v___x_657_; 
lean_dec(v_a_637_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 0, v_code_246_);
v___x_657_ = v___x_639_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_code_246_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_246_, 2);
return v___x_636_;
}
}
default: 
{
lean_object* v___x_660_; 
v___x_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_660_, 0, v_code_246_);
return v___x_660_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_applyRenaming(uint8_t v_pu_661_, lean_object* v_decl_662_, lean_object* v_r_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_){
_start:
{
lean_object* v_fvarId_669_; lean_object* v_params_670_; lean_object* v_type_671_; lean_object* v_value_672_; lean_object* v___x_673_; 
v_fvarId_669_ = lean_ctor_get(v_decl_662_, 0);
v_params_670_ = lean_ctor_get(v_decl_662_, 2);
lean_inc_ref(v_params_670_);
v_type_671_ = lean_ctor_get(v_decl_662_, 3);
lean_inc_ref(v_type_671_);
v_value_672_ = lean_ctor_get(v_decl_662_, 4);
v___x_673_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_r_663_, v_fvarId_669_);
if (lean_obj_tag(v___x_673_) == 1)
{
lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_704_; 
lean_inc_ref(v_value_672_);
lean_inc(v_fvarId_669_);
v_isSharedCheck_704_ = !lean_is_exclusive(v_decl_662_);
if (v_isSharedCheck_704_ == 0)
{
lean_object* v_unused_705_; lean_object* v_unused_706_; lean_object* v_unused_707_; lean_object* v_unused_708_; lean_object* v_unused_709_; 
v_unused_705_ = lean_ctor_get(v_decl_662_, 4);
lean_dec(v_unused_705_);
v_unused_706_ = lean_ctor_get(v_decl_662_, 3);
lean_dec(v_unused_706_);
v_unused_707_ = lean_ctor_get(v_decl_662_, 2);
lean_dec(v_unused_707_);
v_unused_708_ = lean_ctor_get(v_decl_662_, 1);
lean_dec(v_unused_708_);
v_unused_709_ = lean_ctor_get(v_decl_662_, 0);
lean_dec(v_unused_709_);
v___x_675_ = v_decl_662_;
v_isShared_676_ = v_isSharedCheck_704_;
goto v_resetjp_674_;
}
else
{
lean_dec(v_decl_662_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_704_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v_val_677_; lean_object* v_decl_679_; 
v_val_677_ = lean_ctor_get(v___x_673_, 0);
lean_inc(v_val_677_);
lean_dec_ref_known(v___x_673_, 1);
lean_inc_ref(v_value_672_);
lean_inc_ref(v_type_671_);
lean_inc_ref(v_params_670_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 1, v_val_677_);
v_decl_679_ = v___x_675_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_fvarId_669_);
lean_ctor_set(v_reuseFailAlloc_703_, 1, v_val_677_);
lean_ctor_set(v_reuseFailAlloc_703_, 2, v_params_670_);
lean_ctor_set(v_reuseFailAlloc_703_, 3, v_type_671_);
lean_ctor_set(v_reuseFailAlloc_703_, 4, v_value_672_);
v_decl_679_ = v_reuseFailAlloc_703_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_680_; lean_object* v_lctx_681_; lean_object* v_nextIdx_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_702_; 
v___x_680_ = lean_st_ref_take(v_a_665_);
v_lctx_681_ = lean_ctor_get(v___x_680_, 0);
v_nextIdx_682_ = lean_ctor_get(v___x_680_, 1);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_702_ == 0)
{
v___x_684_ = v___x_680_;
v_isShared_685_ = v_isSharedCheck_702_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_nextIdx_682_);
lean_inc(v_lctx_681_);
lean_dec(v___x_680_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_702_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_686_; lean_object* v___x_688_; 
lean_inc_ref(v_decl_679_);
v___x_686_ = l_Lean_Compiler_LCNF_LCtx_addFunDecl(v_pu_661_, v_lctx_681_, v_decl_679_);
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 0, v___x_686_);
v___x_688_ = v___x_684_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v___x_686_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v_nextIdx_682_);
v___x_688_ = v_reuseFailAlloc_701_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_689_ = lean_st_ref_put(v_a_665_, v___x_688_);
v___x_690_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_661_, v_value_672_, v_r_663_, v_a_664_, v_a_665_, v_a_666_, v_a_667_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v_a_691_; lean_object* v___x_692_; 
v_a_691_ = lean_ctor_get(v___x_690_, 0);
lean_inc(v_a_691_);
lean_dec_ref_known(v___x_690_, 1);
v___x_692_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_661_, v_decl_679_, v_type_671_, v_params_670_, v_a_691_, v_a_665_);
return v___x_692_;
}
else
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_700_; 
lean_dec_ref(v_decl_679_);
lean_dec_ref(v_type_671_);
lean_dec_ref(v_params_670_);
v_a_693_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_700_ == 0)
{
v___x_695_ = v___x_690_;
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_690_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_698_; 
if (v_isShared_696_ == 0)
{
v___x_698_ = v___x_695_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_a_693_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_710_; 
lean_dec(v___x_673_);
lean_inc_ref(v_value_672_);
v___x_710_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_661_, v_value_672_, v_r_663_, v_a_664_, v_a_665_, v_a_666_, v_a_667_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v_a_711_; lean_object* v___x_712_; 
v_a_711_ = lean_ctor_get(v___x_710_, 0);
lean_inc(v_a_711_);
lean_dec_ref_known(v___x_710_, 1);
v___x_712_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_661_, v_decl_662_, v_type_671_, v_params_670_, v_a_711_, v_a_665_);
return v___x_712_;
}
else
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
lean_dec_ref(v_type_671_);
lean_dec_ref(v_params_670_);
lean_dec_ref(v_decl_662_);
v_a_713_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_710_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_710_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_718_; 
if (v_isShared_716_ == 0)
{
v___x_718_ = v___x_715_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_713_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_applyRenaming___boxed(lean_object* v_pu_721_, lean_object* v_decl_722_, lean_object* v_r_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v___y_728_){
_start:
{
uint8_t v_pu_boxed_729_; lean_object* v_res_730_; 
v_pu_boxed_729_ = lean_unbox(v_pu_721_);
v_res_730_ = l_Lean_Compiler_LCNF_FunDecl_applyRenaming(v_pu_boxed_729_, v_decl_722_, v_r_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
lean_dec(v_a_727_);
lean_dec_ref(v_a_726_);
lean_dec(v_a_725_);
lean_dec_ref(v_a_724_);
lean_dec(v_r_723_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__2___boxed(lean_object* v_pu_731_, lean_object* v_r_732_, lean_object* v_i_733_, lean_object* v_as_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
uint8_t v_pu_boxed_740_; lean_object* v_res_741_; 
v_pu_boxed_740_ = lean_unbox(v_pu_731_);
v_res_741_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__2(v_pu_boxed_740_, v_r_732_, v_i_733_, v_as_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
lean_dec(v_r_732_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_applyRenaming___boxed(lean_object* v_pu_742_, lean_object* v_code_743_, lean_object* v_r_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v___y_749_){
_start:
{
uint8_t v_pu_boxed_750_; lean_object* v_res_751_; 
v_pu_boxed_750_ = lean_unbox(v_pu_742_);
v_res_751_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_boxed_750_, v_code_743_, v_r_744_, v_a_745_, v_a_746_, v_a_747_, v_a_748_);
lean_dec(v_a_748_);
lean_dec_ref(v_a_747_);
lean_dec(v_a_746_);
lean_dec_ref(v_a_745_);
lean_dec(v_r_744_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1(uint8_t v_pu_752_, lean_object* v_r_753_, lean_object* v_i_754_, lean_object* v_as_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg(v_pu_752_, v_r_753_, v_i_754_, v_as_755_, v___y_757_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___boxed(lean_object* v_pu_762_, lean_object* v_r_763_, lean_object* v_i_764_, lean_object* v_as_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
uint8_t v_pu_boxed_771_; lean_object* v_res_772_; 
v_pu_boxed_771_ = lean_unbox(v_pu_762_);
v_res_772_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1(v_pu_boxed_771_, v_r_763_, v_i_764_, v_as_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
lean_dec(v___y_767_);
lean_dec_ref(v___y_766_);
lean_dec(v_r_763_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___redArg(lean_object* v_f_773_, lean_object* v_v_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_){
_start:
{
if (lean_obj_tag(v_v_774_) == 0)
{
lean_object* v_code_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_804_; 
v_code_780_ = lean_ctor_get(v_v_774_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v_v_774_);
if (v_isSharedCheck_804_ == 0)
{
v___x_782_ = v_v_774_;
v_isShared_783_ = v_isSharedCheck_804_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_code_780_);
lean_dec(v_v_774_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_804_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_784_; 
lean_inc(v___y_778_);
lean_inc_ref(v___y_777_);
lean_inc(v___y_776_);
lean_inc_ref(v___y_775_);
v___x_784_ = lean_apply_6(v_f_773_, v_code_780_, v___y_775_, v___y_776_, v___y_777_, v___y_778_, lean_box(0));
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_795_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_795_ == 0)
{
v___x_787_ = v___x_784_;
v_isShared_788_ = v_isSharedCheck_795_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_784_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_795_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 0, v_a_785_);
v___x_790_ = v___x_782_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_a_785_);
v___x_790_ = v_reuseFailAlloc_794_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
lean_object* v___x_792_; 
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v___x_790_);
v___x_792_ = v___x_787_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_790_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
else
{
lean_object* v_a_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_803_; 
lean_del_object(v___x_782_);
v_a_796_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_803_ == 0)
{
v___x_798_ = v___x_784_;
v_isShared_799_ = v_isSharedCheck_803_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_a_796_);
lean_dec(v___x_784_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_803_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_801_; 
if (v_isShared_799_ == 0)
{
v___x_801_ = v___x_798_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_a_796_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
return v___x_801_;
}
}
}
}
}
else
{
lean_object* v___x_805_; 
lean_dec_ref(v_f_773_);
v___x_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_805_, 0, v_v_774_);
return v___x_805_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___redArg___boxed(lean_object* v_f_806_, lean_object* v_v_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___redArg(v_f_806_, v_v_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0(uint8_t v_pu_814_, lean_object* v_f_815_, lean_object* v_v_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
lean_object* v___x_822_; 
v___x_822_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___redArg(v_f_815_, v_v_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___boxed(lean_object* v_pu_823_, lean_object* v_f_824_, lean_object* v_v_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_){
_start:
{
uint8_t v_pu_boxed_831_; lean_object* v_res_832_; 
v_pu_boxed_831_ = lean_unbox(v_pu_823_);
v_res_832_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0(v_pu_boxed_831_, v_f_824_, v_v_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_);
lean_dec(v___y_829_);
lean_dec_ref(v___y_828_);
lean_dec(v___y_827_);
lean_dec_ref(v___y_826_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming___lam__0(uint8_t v_pu_833_, lean_object* v_r_834_, lean_object* v_x_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
lean_object* v___x_841_; 
v___x_841_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v_pu_833_, v_x_835_, v_r_834_, v___y_836_, v___y_837_, v___y_838_, v___y_839_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming___lam__0___boxed(lean_object* v_pu_842_, lean_object* v_r_843_, lean_object* v_x_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_){
_start:
{
uint8_t v_pu_boxed_850_; lean_object* v_res_851_; 
v_pu_boxed_850_ = lean_unbox(v_pu_842_);
v_res_851_ = l_Lean_Compiler_LCNF_Decl_applyRenaming___lam__0(v_pu_boxed_850_, v_r_843_, v_x_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
lean_dec(v___y_846_);
lean_dec_ref(v___y_845_);
lean_dec(v_r_843_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming(uint8_t v_pu_852_, lean_object* v_decl_853_, lean_object* v_r_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_){
_start:
{
uint8_t v___x_860_; 
v___x_860_ = l_Lean_FVarIdMap_isEmpty___redArg(v_r_854_);
if (v___x_860_ == 0)
{
lean_object* v_toSignature_861_; lean_object* v_value_862_; uint8_t v_recursive_863_; lean_object* v_inlineAttr_x3f_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_913_; 
v_toSignature_861_ = lean_ctor_get(v_decl_853_, 0);
v_value_862_ = lean_ctor_get(v_decl_853_, 1);
v_recursive_863_ = lean_ctor_get_uint8(v_decl_853_, sizeof(void*)*3);
v_inlineAttr_x3f_864_ = lean_ctor_get(v_decl_853_, 2);
v_isSharedCheck_913_ = !lean_is_exclusive(v_decl_853_);
if (v_isSharedCheck_913_ == 0)
{
v___x_866_ = v_decl_853_;
v_isShared_867_ = v_isSharedCheck_913_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_inlineAttr_x3f_864_);
lean_inc(v_value_862_);
lean_inc(v_toSignature_861_);
lean_dec(v_decl_853_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_913_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v_name_868_; lean_object* v_levelParams_869_; lean_object* v_type_870_; lean_object* v_params_871_; uint8_t v_safe_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_912_; 
v_name_868_ = lean_ctor_get(v_toSignature_861_, 0);
v_levelParams_869_ = lean_ctor_get(v_toSignature_861_, 1);
v_type_870_ = lean_ctor_get(v_toSignature_861_, 2);
v_params_871_ = lean_ctor_get(v_toSignature_861_, 3);
v_safe_872_ = lean_ctor_get_uint8(v_toSignature_861_, sizeof(void*)*4);
v_isSharedCheck_912_ = !lean_is_exclusive(v_toSignature_861_);
if (v_isSharedCheck_912_ == 0)
{
v___x_874_ = v_toSignature_861_;
v_isShared_875_ = v_isSharedCheck_912_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_params_871_);
lean_inc(v_type_870_);
lean_inc(v_levelParams_869_);
lean_inc(v_name_868_);
lean_dec(v_toSignature_861_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_912_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_876_; lean_object* v___f_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_876_ = lean_box(v_pu_852_);
lean_inc(v_r_854_);
v___f_877_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_applyRenaming___lam__0___boxed), 8, 2);
lean_closure_set(v___f_877_, 0, v___x_876_);
lean_closure_set(v___f_877_, 1, v_r_854_);
v___x_878_ = lean_unsigned_to_nat(0u);
v___x_879_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_Code_applyRenaming_spec__1___redArg(v_pu_852_, v_r_854_, v___x_878_, v_params_871_, v_a_856_);
lean_dec(v_r_854_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; lean_object* v___x_881_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_a_880_);
lean_dec_ref_known(v___x_879_, 1);
v___x_881_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_applyRenaming_spec__0___redArg(v___f_877_, v_value_862_, v_a_855_, v_a_856_, v_a_857_, v_a_858_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_895_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_895_ == 0)
{
v___x_884_ = v___x_881_;
v_isShared_885_ = v_isSharedCheck_895_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_881_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_895_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 3, v_a_880_);
v___x_887_ = v___x_874_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_name_868_);
lean_ctor_set(v_reuseFailAlloc_894_, 1, v_levelParams_869_);
lean_ctor_set(v_reuseFailAlloc_894_, 2, v_type_870_);
lean_ctor_set(v_reuseFailAlloc_894_, 3, v_a_880_);
lean_ctor_set_uint8(v_reuseFailAlloc_894_, sizeof(void*)*4, v_safe_872_);
v___x_887_ = v_reuseFailAlloc_894_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
lean_object* v___x_889_; 
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 1, v_a_882_);
lean_ctor_set(v___x_866_, 0, v___x_887_);
v___x_889_ = v___x_866_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v___x_887_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v_a_882_);
lean_ctor_set(v_reuseFailAlloc_893_, 2, v_inlineAttr_x3f_864_);
lean_ctor_set_uint8(v_reuseFailAlloc_893_, sizeof(void*)*3, v_recursive_863_);
v___x_889_ = v_reuseFailAlloc_893_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
lean_object* v___x_891_; 
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 0, v___x_889_);
v___x_891_ = v___x_884_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_889_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
}
else
{
lean_object* v_a_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_903_; 
lean_dec(v_a_880_);
lean_del_object(v___x_874_);
lean_dec_ref(v_type_870_);
lean_dec(v_levelParams_869_);
lean_dec(v_name_868_);
lean_del_object(v___x_866_);
lean_dec(v_inlineAttr_x3f_864_);
v_a_896_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_903_ == 0)
{
v___x_898_ = v___x_881_;
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_a_896_);
lean_dec(v___x_881_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_899_ == 0)
{
v___x_901_ = v___x_898_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_a_896_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
lean_dec_ref(v___f_877_);
lean_del_object(v___x_874_);
lean_dec_ref(v_type_870_);
lean_dec(v_levelParams_869_);
lean_dec(v_name_868_);
lean_del_object(v___x_866_);
lean_dec(v_inlineAttr_x3f_864_);
lean_dec_ref(v_value_862_);
v_a_904_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_879_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_879_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_904_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
}
}
else
{
lean_object* v___x_914_; 
lean_dec(v_r_854_);
v___x_914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_914_, 0, v_decl_853_);
return v___x_914_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyRenaming___boxed(lean_object* v_pu_915_, lean_object* v_decl_916_, lean_object* v_r_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v___y_922_){
_start:
{
uint8_t v_pu_boxed_923_; lean_object* v_res_924_; 
v_pu_boxed_923_ = lean_unbox(v_pu_915_);
v_res_924_ = l_Lean_Compiler_LCNF_Decl_applyRenaming(v_pu_boxed_923_, v_decl_916_, v_r_917_, v_a_918_, v_a_919_, v_a_920_, v_a_921_);
lean_dec(v_a_921_);
lean_dec_ref(v_a_920_);
lean_dec(v_a_919_);
lean_dec_ref(v_a_918_);
return v_res_924_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Renaming(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Renaming(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Renaming(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Renaming(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Renaming(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Renaming(builtin);
}
#ifdef __cplusplus
}
#endif
