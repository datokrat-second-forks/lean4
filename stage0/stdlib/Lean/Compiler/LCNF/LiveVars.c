// Lean compiler output
// Module: Lean.Compiler.LCNF.LiveVars
// Imports: public import Lean.Compiler.LCNF.CompilerM import Lean.Compiler.LCNF.DependsOn
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
lean_object* l_Lean_FVarIdHashSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn(uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_FVarIdHashSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(uint8_t, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "_private.Lean.Compiler.LCNF.LiveVars.0.Lean.Compiler.LCNF.Code.isFVarLiveIn.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Compiler.LCNF.LiveVars"};
static const lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_isFVarLiveIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_isFVarLiveIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar___redArg(lean_object* v_fvarId_1_, lean_object* v_x_2_, lean_object* v_a_3_){
_start:
{
uint8_t v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_5_ = l_Lean_instBEqFVarId_beq(v_x_2_, v_fvarId_1_);
v___x_6_ = lean_box(v___x_5_);
v___x_7_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
lean_ctor_set(v___x_7_, 1, v_a_3_);
v___x_8_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar___redArg___boxed(lean_object* v_fvarId_9_, lean_object* v_x_10_, lean_object* v_a_11_, lean_object* v___y_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar___redArg(v_fvarId_9_, v_x_10_, v_a_11_);
lean_dec(v_x_10_);
lean_dec(v_fvarId_9_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar(lean_object* v_fvarId_14_, lean_object* v_x_15_, lean_object* v_a_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_){
_start:
{
uint8_t v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_23_ = l_Lean_instBEqFVarId_beq(v_x_15_, v_fvarId_14_);
v___x_24_ = lean_box(v___x_23_);
v___x_25_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
lean_ctor_set(v___x_25_, 1, v_a_17_);
v___x_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar___boxed(lean_object* v_fvarId_27_, lean_object* v_x_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v___y_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar(v_fvarId_27_, v_x_28_, v_a_29_, v_a_30_, v_a_31_, v_a_32_, v_a_33_, v_a_34_);
lean_dec(v_a_34_);
lean_dec_ref(v_a_33_);
lean_dec(v_a_32_);
lean_dec_ref(v_a_31_);
lean_dec_ref(v_a_29_);
lean_dec(v_x_28_);
lean_dec(v_fvarId_27_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited___redArg(lean_object* v_jp_37_, lean_object* v_a_38_){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_40_ = lean_box(0);
v___x_41_ = l_Lean_FVarIdHashSet_insert(v_a_38_, v_jp_37_);
v___x_42_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_42_, 0, v___x_40_);
lean_ctor_set(v___x_42_, 1, v___x_41_);
v___x_43_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited___redArg___boxed(lean_object* v_jp_44_, lean_object* v_a_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited___redArg(v_jp_44_, v_a_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited(lean_object* v_jp_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_56_ = lean_box(0);
v___x_57_ = l_Lean_FVarIdHashSet_insert(v_a_50_, v_jp_48_);
v___x_58_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_56_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
v___x_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited___boxed(lean_object* v_jp_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v___y_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited(v_jp_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_);
lean_dec(v_a_66_);
lean_dec_ref(v_a_65_);
lean_dec(v_a_64_);
lean_dec_ref(v_a_63_);
lean_dec_ref(v_a_61_);
return v_res_68_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l_instMonadEIO___redArg();
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0(lean_object* v_msg_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v_toApplicative_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_157_; 
v___x_82_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__0);
v___x_83_ = l_StateRefT_x27_instMonad___redArg(v___x_82_);
v_toApplicative_84_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_157_ == 0)
{
lean_object* v_unused_158_; 
v_unused_158_ = lean_ctor_get(v___x_83_, 1);
lean_dec(v_unused_158_);
v___x_86_ = v___x_83_;
v_isShared_87_ = v_isSharedCheck_157_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_toApplicative_84_);
lean_dec(v___x_83_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_157_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v_toFunctor_88_; lean_object* v_toSeq_89_; lean_object* v_toSeqLeft_90_; lean_object* v_toSeqRight_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_155_; 
v_toFunctor_88_ = lean_ctor_get(v_toApplicative_84_, 0);
v_toSeq_89_ = lean_ctor_get(v_toApplicative_84_, 2);
v_toSeqLeft_90_ = lean_ctor_get(v_toApplicative_84_, 3);
v_toSeqRight_91_ = lean_ctor_get(v_toApplicative_84_, 4);
v_isSharedCheck_155_ = !lean_is_exclusive(v_toApplicative_84_);
if (v_isSharedCheck_155_ == 0)
{
lean_object* v_unused_156_; 
v_unused_156_ = lean_ctor_get(v_toApplicative_84_, 1);
lean_dec(v_unused_156_);
v___x_93_ = v_toApplicative_84_;
v_isShared_94_ = v_isSharedCheck_155_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_toSeqRight_91_);
lean_inc(v_toSeqLeft_90_);
lean_inc(v_toSeq_89_);
lean_inc(v_toFunctor_88_);
lean_dec(v_toApplicative_84_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_155_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v___f_95_; lean_object* v___f_96_; lean_object* v___f_97_; lean_object* v___f_98_; lean_object* v___x_99_; lean_object* v___f_100_; lean_object* v___f_101_; lean_object* v___f_102_; lean_object* v___x_104_; 
v___f_95_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__1));
v___f_96_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__2));
lean_inc_ref(v_toFunctor_88_);
v___f_97_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_97_, 0, v_toFunctor_88_);
v___f_98_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_98_, 0, v_toFunctor_88_);
v___x_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_99_, 0, v___f_97_);
lean_ctor_set(v___x_99_, 1, v___f_98_);
v___f_100_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_100_, 0, v_toSeqRight_91_);
v___f_101_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_101_, 0, v_toSeqLeft_90_);
v___f_102_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_102_, 0, v_toSeq_89_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 4, v___f_100_);
lean_ctor_set(v___x_93_, 3, v___f_101_);
lean_ctor_set(v___x_93_, 2, v___f_102_);
lean_ctor_set(v___x_93_, 1, v___f_95_);
lean_ctor_set(v___x_93_, 0, v___x_99_);
v___x_104_ = v___x_93_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_99_);
lean_ctor_set(v_reuseFailAlloc_154_, 1, v___f_95_);
lean_ctor_set(v_reuseFailAlloc_154_, 2, v___f_102_);
lean_ctor_set(v_reuseFailAlloc_154_, 3, v___f_101_);
lean_ctor_set(v_reuseFailAlloc_154_, 4, v___f_100_);
v___x_104_ = v_reuseFailAlloc_154_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
lean_object* v___x_106_; 
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 1, v___f_96_);
lean_ctor_set(v___x_86_, 0, v___x_104_);
v___x_106_ = v___x_86_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v___x_104_);
lean_ctor_set(v_reuseFailAlloc_153_, 1, v___f_96_);
v___x_106_ = v_reuseFailAlloc_153_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_object* v___x_107_; lean_object* v_toApplicative_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_151_; 
v___x_107_ = l_StateRefT_x27_instMonad___redArg(v___x_106_);
v_toApplicative_108_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_151_ == 0)
{
lean_object* v_unused_152_; 
v_unused_152_ = lean_ctor_get(v___x_107_, 1);
lean_dec(v_unused_152_);
v___x_110_ = v___x_107_;
v_isShared_111_ = v_isSharedCheck_151_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_toApplicative_108_);
lean_dec(v___x_107_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_151_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v_toFunctor_112_; lean_object* v_toSeq_113_; lean_object* v_toSeqLeft_114_; lean_object* v_toSeqRight_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_149_; 
v_toFunctor_112_ = lean_ctor_get(v_toApplicative_108_, 0);
v_toSeq_113_ = lean_ctor_get(v_toApplicative_108_, 2);
v_toSeqLeft_114_ = lean_ctor_get(v_toApplicative_108_, 3);
v_toSeqRight_115_ = lean_ctor_get(v_toApplicative_108_, 4);
v_isSharedCheck_149_ = !lean_is_exclusive(v_toApplicative_108_);
if (v_isSharedCheck_149_ == 0)
{
lean_object* v_unused_150_; 
v_unused_150_ = lean_ctor_get(v_toApplicative_108_, 1);
lean_dec(v_unused_150_);
v___x_117_ = v_toApplicative_108_;
v_isShared_118_ = v_isSharedCheck_149_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_toSeqRight_115_);
lean_inc(v_toSeqLeft_114_);
lean_inc(v_toSeq_113_);
lean_inc(v_toFunctor_112_);
lean_dec(v_toApplicative_108_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_149_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___f_119_; lean_object* v___f_120_; lean_object* v___f_121_; lean_object* v___f_122_; lean_object* v___x_123_; lean_object* v___f_124_; lean_object* v___f_125_; lean_object* v___f_126_; lean_object* v___x_128_; 
v___f_119_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__3));
v___f_120_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__4));
lean_inc_ref(v_toFunctor_112_);
v___f_121_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_121_, 0, v_toFunctor_112_);
v___f_122_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_122_, 0, v_toFunctor_112_);
v___x_123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_123_, 0, v___f_121_);
lean_ctor_set(v___x_123_, 1, v___f_122_);
v___f_124_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_124_, 0, v_toSeqRight_115_);
v___f_125_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_125_, 0, v_toSeqLeft_114_);
v___f_126_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_126_, 0, v_toSeq_113_);
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 4, v___f_124_);
lean_ctor_set(v___x_117_, 3, v___f_125_);
lean_ctor_set(v___x_117_, 2, v___f_126_);
lean_ctor_set(v___x_117_, 1, v___f_119_);
lean_ctor_set(v___x_117_, 0, v___x_123_);
v___x_128_ = v___x_117_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_123_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v___f_119_);
lean_ctor_set(v_reuseFailAlloc_148_, 2, v___f_126_);
lean_ctor_set(v_reuseFailAlloc_148_, 3, v___f_125_);
lean_ctor_set(v_reuseFailAlloc_148_, 4, v___f_124_);
v___x_128_ = v_reuseFailAlloc_148_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
lean_object* v___x_130_; 
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 1, v___f_120_);
lean_ctor_set(v___x_110_, 0, v___x_128_);
v___x_130_ = v___x_110_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v___x_128_);
lean_ctor_set(v_reuseFailAlloc_147_, 1, v___f_120_);
v___x_130_ = v_reuseFailAlloc_147_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
lean_object* v___f_131_; lean_object* v___f_132_; lean_object* v___f_133_; lean_object* v___f_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___f_144_; lean_object* v___x_15774__overap_145_; lean_object* v___x_146_; 
lean_inc_ref_n(v___x_130_, 6);
v___f_131_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_131_, 0, v___x_130_);
v___f_132_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_132_, 0, v___x_130_);
v___f_133_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_133_, 0, v___x_130_);
v___f_134_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_134_, 0, v___x_130_);
v___x_135_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_135_, 0, lean_box(0));
lean_closure_set(v___x_135_, 1, lean_box(0));
lean_closure_set(v___x_135_, 2, v___x_130_);
v___x_136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v___f_131_);
v___x_137_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_137_, 0, lean_box(0));
lean_closure_set(v___x_137_, 1, lean_box(0));
lean_closure_set(v___x_137_, 2, v___x_130_);
v___x_138_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_138_, 0, v___x_136_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
lean_ctor_set(v___x_138_, 2, v___f_132_);
lean_ctor_set(v___x_138_, 3, v___f_133_);
lean_ctor_set(v___x_138_, 4, v___f_134_);
v___x_139_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_139_, 0, lean_box(0));
lean_closure_set(v___x_139_, 1, lean_box(0));
lean_closure_set(v___x_139_, 2, v___x_130_);
v___x_140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_138_);
lean_ctor_set(v___x_140_, 1, v___x_139_);
v___x_141_ = 0;
v___x_142_ = lean_box(v___x_141_);
v___x_143_ = l_instInhabitedOfMonad___redArg(v___x_140_, v___x_142_);
v___f_144_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_144_, 0, v___x_143_);
v___x_15774__overap_145_ = lean_panic_fn_borrowed(v___f_144_, v_msg_74_);
lean_dec_ref(v___f_144_);
lean_inc(v___y_80_);
lean_inc_ref(v___y_79_);
lean_inc(v___y_78_);
lean_inc_ref(v___y_77_);
lean_inc_ref(v___y_75_);
v___x_146_ = lean_apply_7(v___x_15774__overap_145_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, lean_box(0));
return v___x_146_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___boxed(lean_object* v_msg_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0(v_msg_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
lean_dec_ref(v___y_160_);
return v_res_167_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__1(lean_object* v_a_168_, lean_object* v_as_169_, size_t v_i_170_, size_t v_stop_171_){
_start:
{
uint8_t v___x_172_; 
v___x_172_ = lean_usize_dec_eq(v_i_170_, v_stop_171_);
if (v___x_172_ == 0)
{
lean_object* v_targetSet_173_; lean_object* v___x_174_; uint8_t v___x_175_; uint8_t v___x_176_; 
v_targetSet_173_ = lean_ctor_get(v_a_168_, 0);
v___x_174_ = lean_array_uget_borrowed(v_as_169_, v_i_170_);
v___x_175_ = 1;
v___x_176_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(v___x_175_, v___x_174_, v_targetSet_173_);
if (v___x_176_ == 0)
{
size_t v___x_177_; size_t v___x_178_; 
v___x_177_ = ((size_t)1ULL);
v___x_178_ = lean_usize_add(v_i_170_, v___x_177_);
v_i_170_ = v___x_178_;
goto _start;
}
else
{
return v___x_176_;
}
}
else
{
uint8_t v___x_180_; 
v___x_180_ = 0;
return v___x_180_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__1___boxed(lean_object* v_a_181_, lean_object* v_as_182_, lean_object* v_i_183_, lean_object* v_stop_184_){
_start:
{
size_t v_i_boxed_185_; size_t v_stop_boxed_186_; uint8_t v_res_187_; lean_object* v_r_188_; 
v_i_boxed_185_ = lean_unbox_usize(v_i_183_);
lean_dec(v_i_183_);
v_stop_boxed_186_ = lean_unbox_usize(v_stop_184_);
lean_dec(v_stop_184_);
v_res_187_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__1(v_a_181_, v_as_182_, v_i_boxed_185_, v_stop_boxed_186_);
lean_dec_ref(v_as_182_);
lean_dec_ref(v_a_181_);
v_r_188_ = lean_box(v_res_187_);
return v_r_188_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__3(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_192_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__2));
v___x_193_ = lean_unsigned_to_nat(48u);
v___x_194_ = lean_unsigned_to_nat(76u);
v___x_195_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__1));
v___x_196_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__0));
v___x_197_ = l_mkPanicMessageWithDecl(v___x_196_, v___x_195_, v___x_194_, v___x_193_, v___x_192_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go(lean_object* v_fvarId_198_, lean_object* v_c_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_){
_start:
{
switch(lean_obj_tag(v_c_199_))
{
case 0:
{
lean_object* v_decl_207_; lean_object* v_k_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_221_; 
v_decl_207_ = lean_ctor_get(v_c_199_, 0);
v_k_208_ = lean_ctor_get(v_c_199_, 1);
v_isSharedCheck_221_ = !lean_is_exclusive(v_c_199_);
if (v_isSharedCheck_221_ == 0)
{
v___x_210_ = v_c_199_;
v_isShared_211_ = v_isSharedCheck_221_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_k_208_);
lean_inc(v_decl_207_);
lean_dec(v_c_199_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_221_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v_targetSet_212_; uint8_t v___x_213_; uint8_t v___x_214_; 
v_targetSet_212_ = lean_ctor_get(v_a_200_, 0);
v___x_213_ = 1;
v___x_214_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn(v___x_213_, v_decl_207_, v_targetSet_212_);
lean_dec_ref(v_decl_207_);
if (v___x_214_ == 0)
{
lean_del_object(v___x_210_);
v_c_199_ = v_k_208_;
goto _start;
}
else
{
lean_object* v___x_216_; lean_object* v___x_218_; 
lean_dec_ref(v_k_208_);
v___x_216_ = lean_box(v___x_214_);
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 1, v_a_201_);
lean_ctor_set(v___x_210_, 0, v___x_216_);
v___x_218_ = v___x_210_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v___x_216_);
lean_ctor_set(v_reuseFailAlloc_220_, 1, v_a_201_);
v___x_218_ = v_reuseFailAlloc_220_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
lean_object* v___x_219_; 
v___x_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
return v___x_219_;
}
}
}
}
case 2:
{
lean_object* v_decl_222_; lean_object* v_k_223_; lean_object* v_fvarId_224_; lean_object* v_value_225_; lean_object* v___x_226_; 
v_decl_222_ = lean_ctor_get(v_c_199_, 0);
lean_inc_ref(v_decl_222_);
v_k_223_ = lean_ctor_get(v_c_199_, 1);
lean_inc_ref(v_k_223_);
lean_dec_ref_known(v_c_199_, 2);
v_fvarId_224_ = lean_ctor_get(v_decl_222_, 0);
lean_inc(v_fvarId_224_);
v_value_225_ = lean_ctor_get(v_decl_222_, 4);
lean_inc_ref(v_value_225_);
lean_dec_ref(v_decl_222_);
v___x_226_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go(v_fvarId_198_, v_value_225_, v_a_200_, v_a_201_, v_a_202_, v_a_203_, v_a_204_, v_a_205_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_a_227_; lean_object* v_fst_228_; uint8_t v___x_229_; 
v_a_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_a_227_);
v_fst_228_ = lean_ctor_get(v_a_227_, 0);
v___x_229_ = lean_unbox(v_fst_228_);
if (v___x_229_ == 0)
{
lean_object* v_snd_230_; lean_object* v___x_231_; 
lean_dec_ref_known(v___x_226_, 1);
v_snd_230_ = lean_ctor_get(v_a_227_, 1);
lean_inc(v_snd_230_);
lean_dec(v_a_227_);
v___x_231_ = l_Lean_FVarIdHashSet_insert(v_snd_230_, v_fvarId_224_);
v_c_199_ = v_k_223_;
v_a_201_ = v___x_231_;
goto _start;
}
else
{
lean_dec(v_a_227_);
lean_dec(v_fvarId_224_);
lean_dec_ref(v_k_223_);
return v___x_226_;
}
}
else
{
lean_dec(v_fvarId_224_);
lean_dec_ref(v_k_223_);
return v___x_226_;
}
}
case 3:
{
lean_object* v_fvarId_233_; lean_object* v_args_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_272_; 
v_fvarId_233_ = lean_ctor_get(v_c_199_, 0);
v_args_234_ = lean_ctor_get(v_c_199_, 1);
v_isSharedCheck_272_ = !lean_is_exclusive(v_c_199_);
if (v_isSharedCheck_272_ == 0)
{
v___x_236_ = v_c_199_;
v_isShared_237_ = v_isSharedCheck_272_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_args_234_);
lean_inc(v_fvarId_233_);
lean_dec(v_c_199_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_272_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
uint8_t v___y_239_; lean_object* v___x_263_; lean_object* v___x_264_; uint8_t v___x_265_; 
v___x_263_ = lean_unsigned_to_nat(0u);
v___x_264_ = lean_array_get_size(v_args_234_);
v___x_265_ = lean_nat_dec_lt(v___x_263_, v___x_264_);
if (v___x_265_ == 0)
{
lean_dec_ref(v_args_234_);
v___y_239_ = v___x_265_;
goto v___jp_238_;
}
else
{
if (v___x_265_ == 0)
{
lean_dec_ref(v_args_234_);
v___y_239_ = v___x_265_;
goto v___jp_238_;
}
else
{
size_t v___x_266_; size_t v___x_267_; uint8_t v___x_268_; 
v___x_266_ = ((size_t)0ULL);
v___x_267_ = lean_usize_of_nat(v___x_264_);
v___x_268_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__1(v_a_200_, v_args_234_, v___x_266_, v___x_267_);
lean_dec_ref(v_args_234_);
if (v___x_268_ == 0)
{
v___y_239_ = v___x_268_;
goto v___jp_238_;
}
else
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
lean_del_object(v___x_236_);
lean_dec(v_fvarId_233_);
v___x_269_ = lean_box(v___x_268_);
v___x_270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
lean_ctor_set(v___x_270_, 1, v_a_201_);
v___x_271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
return v___x_271_;
}
}
}
v___jp_238_:
{
uint8_t v___x_240_; 
v___x_240_ = l_Lean_FVarIdHashSet_contains(v_a_201_, v_fvarId_233_);
if (v___x_240_ == 0)
{
uint8_t v___x_241_; lean_object* v___x_242_; 
lean_del_object(v___x_236_);
v___x_241_ = 1;
v___x_242_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_241_, v_fvarId_233_, v_a_203_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_object* v_a_243_; 
v_a_243_ = lean_ctor_get(v___x_242_, 0);
lean_inc(v_a_243_);
lean_dec_ref_known(v___x_242_, 1);
if (lean_obj_tag(v_a_243_) == 1)
{
lean_object* v_val_244_; lean_object* v_value_245_; lean_object* v___x_246_; 
v_val_244_ = lean_ctor_get(v_a_243_, 0);
lean_inc(v_val_244_);
lean_dec_ref_known(v_a_243_, 1);
v_value_245_ = lean_ctor_get(v_val_244_, 4);
lean_inc_ref(v_value_245_);
lean_dec(v_val_244_);
v___x_246_ = l_Lean_FVarIdHashSet_insert(v_a_201_, v_fvarId_233_);
v_c_199_ = v_value_245_;
v_a_201_ = v___x_246_;
goto _start;
}
else
{
lean_object* v___x_248_; lean_object* v___x_249_; 
lean_dec(v_a_243_);
lean_dec(v_fvarId_233_);
v___x_248_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__3, &l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__3);
v___x_249_ = l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0(v___x_248_, v_a_200_, v_a_201_, v_a_202_, v_a_203_, v_a_204_, v_a_205_);
return v___x_249_;
}
}
else
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_257_; 
lean_dec(v_fvarId_233_);
lean_dec_ref(v_a_201_);
v_a_250_ = lean_ctor_get(v___x_242_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_257_ == 0)
{
v___x_252_ = v___x_242_;
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_242_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_255_; 
if (v_isShared_253_ == 0)
{
v___x_255_ = v___x_252_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_a_250_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
}
else
{
lean_object* v___x_258_; lean_object* v___x_260_; 
lean_dec(v_fvarId_233_);
v___x_258_ = lean_box(v___y_239_);
if (v_isShared_237_ == 0)
{
lean_ctor_set_tag(v___x_236_, 0);
lean_ctor_set(v___x_236_, 1, v_a_201_);
lean_ctor_set(v___x_236_, 0, v___x_258_);
v___x_260_ = v___x_236_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_258_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v_a_201_);
v___x_260_ = v_reuseFailAlloc_262_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
lean_object* v___x_261_; 
v___x_261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
return v___x_261_;
}
}
}
}
}
case 4:
{
lean_object* v_cases_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_301_; 
v_cases_273_ = lean_ctor_get(v_c_199_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v_c_199_);
if (v_isSharedCheck_301_ == 0)
{
v___x_275_ = v_c_199_;
v_isShared_276_ = v_isSharedCheck_301_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_cases_273_);
lean_dec(v_c_199_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_301_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v_discr_277_; lean_object* v_alts_278_; uint8_t v___x_279_; 
v_discr_277_ = lean_ctor_get(v_cases_273_, 2);
lean_inc(v_discr_277_);
v_alts_278_ = lean_ctor_get(v_cases_273_, 3);
lean_inc_ref(v_alts_278_);
lean_dec_ref(v_cases_273_);
v___x_279_ = l_Lean_instBEqFVarId_beq(v_discr_277_, v_fvarId_198_);
lean_dec(v_discr_277_);
if (v___x_279_ == 0)
{
lean_object* v___x_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_280_ = lean_unsigned_to_nat(0u);
v___x_281_ = lean_array_get_size(v_alts_278_);
v___x_282_ = lean_nat_dec_lt(v___x_280_, v___x_281_);
if (v___x_282_ == 0)
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_286_; 
lean_dec_ref(v_alts_278_);
v___x_283_ = lean_box(v___x_282_);
v___x_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set(v___x_284_, 1, v_a_201_);
if (v_isShared_276_ == 0)
{
lean_ctor_set_tag(v___x_275_, 0);
lean_ctor_set(v___x_275_, 0, v___x_284_);
v___x_286_ = v___x_275_;
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
else
{
if (v___x_282_ == 0)
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_291_; 
lean_dec_ref(v_alts_278_);
v___x_288_ = lean_box(v___x_282_);
v___x_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
lean_ctor_set(v___x_289_, 1, v_a_201_);
if (v_isShared_276_ == 0)
{
lean_ctor_set_tag(v___x_275_, 0);
lean_ctor_set(v___x_275_, 0, v___x_289_);
v___x_291_ = v___x_275_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v___x_289_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
else
{
size_t v___x_293_; size_t v___x_294_; lean_object* v___x_295_; 
lean_del_object(v___x_275_);
v___x_293_ = ((size_t)0ULL);
v___x_294_ = lean_usize_of_nat(v___x_281_);
v___x_295_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__2(v_fvarId_198_, v_alts_278_, v___x_293_, v___x_294_, v_a_200_, v_a_201_, v_a_202_, v_a_203_, v_a_204_, v_a_205_);
lean_dec_ref(v_alts_278_);
return v___x_295_;
}
}
}
else
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_299_; 
lean_dec_ref(v_alts_278_);
v___x_296_ = lean_box(v___x_279_);
v___x_297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v_a_201_);
if (v_isShared_276_ == 0)
{
lean_ctor_set_tag(v___x_275_, 0);
lean_ctor_set(v___x_275_, 0, v___x_297_);
v___x_299_ = v___x_275_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_297_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_312_; 
v_fvarId_302_ = lean_ctor_get(v_c_199_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v_c_199_);
if (v_isSharedCheck_312_ == 0)
{
v___x_304_ = v_c_199_;
v_isShared_305_ = v_isSharedCheck_312_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_fvarId_302_);
lean_dec(v_c_199_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_312_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
uint8_t v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_310_; 
v___x_306_ = l_Lean_instBEqFVarId_beq(v_fvarId_302_, v_fvarId_198_);
lean_dec(v_fvarId_302_);
v___x_307_ = lean_box(v___x_306_);
v___x_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
lean_ctor_set(v___x_308_, 1, v_a_201_);
if (v_isShared_305_ == 0)
{
lean_ctor_set_tag(v___x_304_, 0);
lean_ctor_set(v___x_304_, 0, v___x_308_);
v___x_310_ = v___x_304_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v___x_308_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
case 6:
{
lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_322_; 
v_isSharedCheck_322_ = !lean_is_exclusive(v_c_199_);
if (v_isSharedCheck_322_ == 0)
{
lean_object* v_unused_323_; 
v_unused_323_ = lean_ctor_get(v_c_199_, 0);
lean_dec(v_unused_323_);
v___x_314_ = v_c_199_;
v_isShared_315_ = v_isSharedCheck_322_;
goto v_resetjp_313_;
}
else
{
lean_dec(v_c_199_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_322_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
uint8_t v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_320_; 
v___x_316_ = 0;
v___x_317_ = lean_box(v___x_316_);
v___x_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
lean_ctor_set(v___x_318_, 1, v_a_201_);
if (v_isShared_315_ == 0)
{
lean_ctor_set_tag(v___x_314_, 0);
lean_ctor_set(v___x_314_, 0, v___x_318_);
v___x_320_ = v___x_314_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_318_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
case 7:
{
lean_object* v_fvarId_324_; lean_object* v_y_325_; lean_object* v_k_326_; uint8_t v___x_327_; 
v_fvarId_324_ = lean_ctor_get(v_c_199_, 0);
lean_inc(v_fvarId_324_);
v_y_325_ = lean_ctor_get(v_c_199_, 2);
lean_inc(v_y_325_);
v_k_326_ = lean_ctor_get(v_c_199_, 3);
lean_inc_ref(v_k_326_);
lean_dec_ref_known(v_c_199_, 4);
v___x_327_ = l_Lean_instBEqFVarId_beq(v_fvarId_324_, v_fvarId_198_);
lean_dec(v_fvarId_324_);
if (v___x_327_ == 0)
{
lean_object* v_targetSet_328_; uint8_t v___x_329_; uint8_t v___x_330_; 
v_targetSet_328_ = lean_ctor_get(v_a_200_, 0);
v___x_329_ = 1;
v___x_330_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(v___x_329_, v_y_325_, v_targetSet_328_);
lean_dec(v_y_325_);
if (v___x_330_ == 0)
{
v_c_199_ = v_k_326_;
goto _start;
}
else
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
lean_dec_ref(v_k_326_);
v___x_332_ = lean_box(v___x_330_);
v___x_333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
lean_ctor_set(v___x_333_, 1, v_a_201_);
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
}
else
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
lean_dec_ref(v_k_326_);
lean_dec(v_y_325_);
v___x_335_ = lean_box(v___x_327_);
v___x_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v_a_201_);
v___x_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
return v___x_337_;
}
}
case 8:
{
lean_object* v_fvarId_338_; lean_object* v_y_339_; lean_object* v_k_340_; uint8_t v___x_341_; 
v_fvarId_338_ = lean_ctor_get(v_c_199_, 0);
lean_inc(v_fvarId_338_);
v_y_339_ = lean_ctor_get(v_c_199_, 2);
lean_inc(v_y_339_);
v_k_340_ = lean_ctor_get(v_c_199_, 3);
lean_inc_ref(v_k_340_);
lean_dec_ref_known(v_c_199_, 4);
v___x_341_ = l_Lean_instBEqFVarId_beq(v_fvarId_338_, v_fvarId_198_);
lean_dec(v_fvarId_338_);
if (v___x_341_ == 0)
{
uint8_t v___x_342_; 
v___x_342_ = l_Lean_instBEqFVarId_beq(v_y_339_, v_fvarId_198_);
lean_dec(v_y_339_);
if (v___x_342_ == 0)
{
v_c_199_ = v_k_340_;
goto _start;
}
else
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
lean_dec_ref(v_k_340_);
v___x_344_ = lean_box(v___x_342_);
v___x_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_345_, 0, v___x_344_);
lean_ctor_set(v___x_345_, 1, v_a_201_);
v___x_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
return v___x_346_;
}
}
else
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
lean_dec_ref(v_k_340_);
lean_dec(v_y_339_);
v___x_347_ = lean_box(v___x_341_);
v___x_348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
lean_ctor_set(v___x_348_, 1, v_a_201_);
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
return v___x_349_;
}
}
case 9:
{
lean_object* v_fvarId_350_; lean_object* v_y_351_; lean_object* v_k_352_; uint8_t v___x_353_; 
v_fvarId_350_ = lean_ctor_get(v_c_199_, 0);
lean_inc(v_fvarId_350_);
v_y_351_ = lean_ctor_get(v_c_199_, 3);
lean_inc(v_y_351_);
v_k_352_ = lean_ctor_get(v_c_199_, 5);
lean_inc_ref(v_k_352_);
lean_dec_ref_known(v_c_199_, 6);
v___x_353_ = l_Lean_instBEqFVarId_beq(v_fvarId_350_, v_fvarId_198_);
lean_dec(v_fvarId_350_);
if (v___x_353_ == 0)
{
uint8_t v___x_354_; 
v___x_354_ = l_Lean_instBEqFVarId_beq(v_y_351_, v_fvarId_198_);
lean_dec(v_y_351_);
if (v___x_354_ == 0)
{
v_c_199_ = v_k_352_;
goto _start;
}
else
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
lean_dec_ref(v_k_352_);
v___x_356_ = lean_box(v___x_354_);
v___x_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
lean_ctor_set(v___x_357_, 1, v_a_201_);
v___x_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
return v___x_358_;
}
}
else
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
lean_dec_ref(v_k_352_);
lean_dec(v_y_351_);
v___x_359_ = lean_box(v___x_353_);
v___x_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v_a_201_);
v___x_361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
return v___x_361_;
}
}
case 12:
{
lean_object* v_fvarId_362_; lean_object* v_k_363_; uint8_t v___x_364_; 
v_fvarId_362_ = lean_ctor_get(v_c_199_, 0);
lean_inc(v_fvarId_362_);
v_k_363_ = lean_ctor_get(v_c_199_, 3);
lean_inc_ref(v_k_363_);
lean_dec_ref_known(v_c_199_, 4);
v___x_364_ = l_Lean_instBEqFVarId_beq(v_fvarId_362_, v_fvarId_198_);
lean_dec(v_fvarId_362_);
if (v___x_364_ == 0)
{
v_c_199_ = v_k_363_;
goto _start;
}
else
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
lean_dec_ref(v_k_363_);
v___x_366_ = lean_box(v___x_364_);
v___x_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
lean_ctor_set(v___x_367_, 1, v_a_201_);
v___x_368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
return v___x_368_;
}
}
case 13:
{
lean_object* v_fvarId_369_; lean_object* v_k_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_381_; 
v_fvarId_369_ = lean_ctor_get(v_c_199_, 0);
v_k_370_ = lean_ctor_get(v_c_199_, 1);
v_isSharedCheck_381_ = !lean_is_exclusive(v_c_199_);
if (v_isSharedCheck_381_ == 0)
{
v___x_372_ = v_c_199_;
v_isShared_373_ = v_isSharedCheck_381_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_k_370_);
lean_inc(v_fvarId_369_);
lean_dec(v_c_199_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_381_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
uint8_t v___x_374_; 
v___x_374_ = l_Lean_instBEqFVarId_beq(v_fvarId_369_, v_fvarId_198_);
lean_dec(v_fvarId_369_);
if (v___x_374_ == 0)
{
lean_del_object(v___x_372_);
v_c_199_ = v_k_370_;
goto _start;
}
else
{
lean_object* v___x_376_; lean_object* v___x_378_; 
lean_dec_ref(v_k_370_);
v___x_376_ = lean_box(v___x_374_);
if (v_isShared_373_ == 0)
{
lean_ctor_set_tag(v___x_372_, 0);
lean_ctor_set(v___x_372_, 1, v_a_201_);
lean_ctor_set(v___x_372_, 0, v___x_376_);
v___x_378_ = v___x_372_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v___x_376_);
lean_ctor_set(v_reuseFailAlloc_380_, 1, v_a_201_);
v___x_378_ = v_reuseFailAlloc_380_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
lean_object* v___x_379_; 
v___x_379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
return v___x_379_;
}
}
}
}
default: 
{
lean_object* v_fvarId_382_; lean_object* v_k_383_; uint8_t v___x_384_; 
v_fvarId_382_ = lean_ctor_get(v_c_199_, 0);
lean_inc(v_fvarId_382_);
v_k_383_ = lean_ctor_get(v_c_199_, 2);
lean_inc_ref(v_k_383_);
lean_dec_ref(v_c_199_);
v___x_384_ = l_Lean_instBEqFVarId_beq(v_fvarId_382_, v_fvarId_198_);
lean_dec(v_fvarId_382_);
if (v___x_384_ == 0)
{
v_c_199_ = v_k_383_;
goto _start;
}
else
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
lean_dec_ref(v_k_383_);
v___x_386_ = lean_box(v___x_384_);
v___x_387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
lean_ctor_set(v___x_387_, 1, v_a_201_);
v___x_388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_388_, 0, v___x_387_);
return v___x_388_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__2(lean_object* v_fvarId_389_, lean_object* v_as_390_, size_t v_i_391_, size_t v_stop_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
uint8_t v___x_400_; 
v___x_400_ = lean_usize_dec_eq(v_i_391_, v_stop_392_);
if (v___x_400_ == 0)
{
uint8_t v___x_401_; lean_object* v___y_403_; lean_object* v___x_429_; 
v___x_401_ = 1;
v___x_429_ = lean_array_uget_borrowed(v_as_390_, v_i_391_);
switch(lean_obj_tag(v___x_429_))
{
case 0:
{
lean_object* v_code_430_; 
v_code_430_ = lean_ctor_get(v___x_429_, 2);
lean_inc_ref(v_code_430_);
v___y_403_ = v_code_430_;
goto v___jp_402_;
}
case 1:
{
lean_object* v_code_431_; 
v_code_431_ = lean_ctor_get(v___x_429_, 1);
lean_inc_ref(v_code_431_);
v___y_403_ = v_code_431_;
goto v___jp_402_;
}
default: 
{
lean_object* v_code_432_; 
v_code_432_ = lean_ctor_get(v___x_429_, 0);
lean_inc_ref(v_code_432_);
v___y_403_ = v_code_432_;
goto v___jp_402_;
}
}
v___jp_402_:
{
lean_object* v___x_404_; 
v___x_404_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go(v_fvarId_389_, v___y_403_, v___y_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_428_; 
v_a_405_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_428_ == 0)
{
v___x_407_ = v___x_404_;
v_isShared_408_ = v_isSharedCheck_428_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_404_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_428_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v_fst_409_; uint8_t v___x_410_; 
v_fst_409_ = lean_ctor_get(v_a_405_, 0);
v___x_410_ = lean_unbox(v_fst_409_);
if (v___x_410_ == 0)
{
lean_object* v_snd_411_; size_t v___x_412_; size_t v___x_413_; 
lean_del_object(v___x_407_);
v_snd_411_ = lean_ctor_get(v_a_405_, 1);
lean_inc(v_snd_411_);
lean_dec(v_a_405_);
v___x_412_ = ((size_t)1ULL);
v___x_413_ = lean_usize_add(v_i_391_, v___x_412_);
v_i_391_ = v___x_413_;
v___y_394_ = v_snd_411_;
goto _start;
}
else
{
lean_object* v_snd_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_426_; 
v_snd_415_ = lean_ctor_get(v_a_405_, 1);
v_isSharedCheck_426_ = !lean_is_exclusive(v_a_405_);
if (v_isSharedCheck_426_ == 0)
{
lean_object* v_unused_427_; 
v_unused_427_ = lean_ctor_get(v_a_405_, 0);
lean_dec(v_unused_427_);
v___x_417_ = v_a_405_;
v_isShared_418_ = v_isSharedCheck_426_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_snd_415_);
lean_dec(v_a_405_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_426_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_419_; lean_object* v___x_421_; 
v___x_419_ = lean_box(v___x_401_);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 0, v___x_419_);
v___x_421_ = v___x_417_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_419_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_snd_415_);
v___x_421_ = v_reuseFailAlloc_425_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
lean_object* v___x_423_; 
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 0, v___x_421_);
v___x_423_ = v___x_407_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_421_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
}
}
}
else
{
return v___x_404_;
}
}
}
else
{
uint8_t v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_433_ = 0;
v___x_434_ = lean_box(v___x_433_);
v___x_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
lean_ctor_set(v___x_435_, 1, v___y_394_);
v___x_436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_436_, 0, v___x_435_);
return v___x_436_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__2___boxed(lean_object* v_fvarId_437_, lean_object* v_as_438_, lean_object* v_i_439_, lean_object* v_stop_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
size_t v_i_boxed_448_; size_t v_stop_boxed_449_; lean_object* v_res_450_; 
v_i_boxed_448_ = lean_unbox_usize(v_i_439_);
lean_dec(v_i_439_);
v_stop_boxed_449_ = lean_unbox_usize(v_stop_440_);
lean_dec(v_stop_440_);
v_res_450_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__2(v_fvarId_437_, v_as_438_, v_i_boxed_448_, v_stop_boxed_449_, v___y_441_, v___y_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec(v___y_444_);
lean_dec_ref(v___y_443_);
lean_dec_ref(v___y_441_);
lean_dec_ref(v_as_438_);
lean_dec(v_fvarId_437_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___boxed(lean_object* v_fvarId_451_, lean_object* v_c_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v___y_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go(v_fvarId_451_, v_c_452_, v_a_453_, v_a_454_, v_a_455_, v_a_456_, v_a_457_, v_a_458_);
lean_dec(v_a_458_);
lean_dec_ref(v_a_457_);
lean_dec(v_a_456_);
lean_dec_ref(v_a_455_);
lean_dec_ref(v_a_453_);
lean_dec(v_fvarId_451_);
return v_res_460_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0___redArg(lean_object* v_k_461_, lean_object* v_t_462_){
_start:
{
if (lean_obj_tag(v_t_462_) == 0)
{
lean_object* v_k_463_; lean_object* v_l_464_; lean_object* v_r_465_; uint8_t v___x_466_; 
v_k_463_ = lean_ctor_get(v_t_462_, 1);
v_l_464_ = lean_ctor_get(v_t_462_, 3);
v_r_465_ = lean_ctor_get(v_t_462_, 4);
v___x_466_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_461_, v_k_463_);
switch(v___x_466_)
{
case 0:
{
v_t_462_ = v_l_464_;
goto _start;
}
case 1:
{
uint8_t v___x_468_; 
v___x_468_ = 1;
return v___x_468_;
}
default: 
{
v_t_462_ = v_r_465_;
goto _start;
}
}
}
else
{
uint8_t v___x_470_; 
v___x_470_ = 0;
return v___x_470_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0___redArg___boxed(lean_object* v_k_471_, lean_object* v_t_472_){
_start:
{
uint8_t v_res_473_; lean_object* v_r_474_; 
v_res_473_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0___redArg(v_k_471_, v_t_472_);
lean_dec(v_t_472_);
lean_dec(v_k_471_);
v_r_474_ = lean_box(v_res_473_);
return v_r_474_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__1___redArg(lean_object* v_k_475_, lean_object* v_v_476_, lean_object* v_t_477_){
_start:
{
if (lean_obj_tag(v_t_477_) == 0)
{
lean_object* v_size_478_; lean_object* v_k_479_; lean_object* v_v_480_; lean_object* v_l_481_; lean_object* v_r_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_762_; 
v_size_478_ = lean_ctor_get(v_t_477_, 0);
v_k_479_ = lean_ctor_get(v_t_477_, 1);
v_v_480_ = lean_ctor_get(v_t_477_, 2);
v_l_481_ = lean_ctor_get(v_t_477_, 3);
v_r_482_ = lean_ctor_get(v_t_477_, 4);
v_isSharedCheck_762_ = !lean_is_exclusive(v_t_477_);
if (v_isSharedCheck_762_ == 0)
{
v___x_484_ = v_t_477_;
v_isShared_485_ = v_isSharedCheck_762_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_r_482_);
lean_inc(v_l_481_);
lean_inc(v_v_480_);
lean_inc(v_k_479_);
lean_inc(v_size_478_);
lean_dec(v_t_477_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_762_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
uint8_t v___x_486_; 
v___x_486_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_475_, v_k_479_);
switch(v___x_486_)
{
case 0:
{
lean_object* v_impl_487_; lean_object* v___x_488_; 
lean_dec(v_size_478_);
v_impl_487_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__1___redArg(v_k_475_, v_v_476_, v_l_481_);
v___x_488_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_482_) == 0)
{
lean_object* v_size_489_; lean_object* v_size_490_; lean_object* v_k_491_; lean_object* v_v_492_; lean_object* v_l_493_; lean_object* v_r_494_; lean_object* v___x_495_; lean_object* v___x_496_; uint8_t v___x_497_; 
v_size_489_ = lean_ctor_get(v_r_482_, 0);
v_size_490_ = lean_ctor_get(v_impl_487_, 0);
lean_inc(v_size_490_);
v_k_491_ = lean_ctor_get(v_impl_487_, 1);
lean_inc(v_k_491_);
v_v_492_ = lean_ctor_get(v_impl_487_, 2);
lean_inc(v_v_492_);
v_l_493_ = lean_ctor_get(v_impl_487_, 3);
lean_inc(v_l_493_);
v_r_494_ = lean_ctor_get(v_impl_487_, 4);
lean_inc(v_r_494_);
v___x_495_ = lean_unsigned_to_nat(3u);
v___x_496_ = lean_nat_mul(v___x_495_, v_size_489_);
v___x_497_ = lean_nat_dec_lt(v___x_496_, v_size_490_);
lean_dec(v___x_496_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_501_; 
lean_dec(v_r_494_);
lean_dec(v_l_493_);
lean_dec(v_v_492_);
lean_dec(v_k_491_);
v___x_498_ = lean_nat_add(v___x_488_, v_size_490_);
lean_dec(v_size_490_);
v___x_499_ = lean_nat_add(v___x_498_, v_size_489_);
lean_dec(v___x_498_);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 3, v_impl_487_);
lean_ctor_set(v___x_484_, 0, v___x_499_);
v___x_501_ = v___x_484_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v___x_499_);
lean_ctor_set(v_reuseFailAlloc_502_, 1, v_k_479_);
lean_ctor_set(v_reuseFailAlloc_502_, 2, v_v_480_);
lean_ctor_set(v_reuseFailAlloc_502_, 3, v_impl_487_);
lean_ctor_set(v_reuseFailAlloc_502_, 4, v_r_482_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
else
{
lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_568_; 
v_isSharedCheck_568_ = !lean_is_exclusive(v_impl_487_);
if (v_isSharedCheck_568_ == 0)
{
lean_object* v_unused_569_; lean_object* v_unused_570_; lean_object* v_unused_571_; lean_object* v_unused_572_; lean_object* v_unused_573_; 
v_unused_569_ = lean_ctor_get(v_impl_487_, 4);
lean_dec(v_unused_569_);
v_unused_570_ = lean_ctor_get(v_impl_487_, 3);
lean_dec(v_unused_570_);
v_unused_571_ = lean_ctor_get(v_impl_487_, 2);
lean_dec(v_unused_571_);
v_unused_572_ = lean_ctor_get(v_impl_487_, 1);
lean_dec(v_unused_572_);
v_unused_573_ = lean_ctor_get(v_impl_487_, 0);
lean_dec(v_unused_573_);
v___x_504_ = v_impl_487_;
v_isShared_505_ = v_isSharedCheck_568_;
goto v_resetjp_503_;
}
else
{
lean_dec(v_impl_487_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_568_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v_size_506_; lean_object* v_size_507_; lean_object* v_k_508_; lean_object* v_v_509_; lean_object* v_l_510_; lean_object* v_r_511_; lean_object* v___x_512_; lean_object* v___x_513_; uint8_t v___x_514_; 
v_size_506_ = lean_ctor_get(v_l_493_, 0);
v_size_507_ = lean_ctor_get(v_r_494_, 0);
v_k_508_ = lean_ctor_get(v_r_494_, 1);
v_v_509_ = lean_ctor_get(v_r_494_, 2);
v_l_510_ = lean_ctor_get(v_r_494_, 3);
v_r_511_ = lean_ctor_get(v_r_494_, 4);
v___x_512_ = lean_unsigned_to_nat(2u);
v___x_513_ = lean_nat_mul(v___x_512_, v_size_506_);
v___x_514_ = lean_nat_dec_lt(v_size_507_, v___x_513_);
lean_dec(v___x_513_);
if (v___x_514_ == 0)
{
lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_543_; 
lean_inc(v_r_511_);
lean_inc(v_l_510_);
lean_inc(v_v_509_);
lean_inc(v_k_508_);
v_isSharedCheck_543_ = !lean_is_exclusive(v_r_494_);
if (v_isSharedCheck_543_ == 0)
{
lean_object* v_unused_544_; lean_object* v_unused_545_; lean_object* v_unused_546_; lean_object* v_unused_547_; lean_object* v_unused_548_; 
v_unused_544_ = lean_ctor_get(v_r_494_, 4);
lean_dec(v_unused_544_);
v_unused_545_ = lean_ctor_get(v_r_494_, 3);
lean_dec(v_unused_545_);
v_unused_546_ = lean_ctor_get(v_r_494_, 2);
lean_dec(v_unused_546_);
v_unused_547_ = lean_ctor_get(v_r_494_, 1);
lean_dec(v_unused_547_);
v_unused_548_ = lean_ctor_get(v_r_494_, 0);
lean_dec(v_unused_548_);
v___x_516_ = v_r_494_;
v_isShared_517_ = v_isSharedCheck_543_;
goto v_resetjp_515_;
}
else
{
lean_dec(v_r_494_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_543_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___y_521_; lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___x_531_; lean_object* v___y_533_; 
v___x_518_ = lean_nat_add(v___x_488_, v_size_490_);
lean_dec(v_size_490_);
v___x_519_ = lean_nat_add(v___x_518_, v_size_489_);
lean_dec(v___x_518_);
v___x_531_ = lean_nat_add(v___x_488_, v_size_506_);
if (lean_obj_tag(v_l_510_) == 0)
{
lean_object* v_size_541_; 
v_size_541_ = lean_ctor_get(v_l_510_, 0);
lean_inc(v_size_541_);
v___y_533_ = v_size_541_;
goto v___jp_532_;
}
else
{
lean_object* v___x_542_; 
v___x_542_ = lean_unsigned_to_nat(0u);
v___y_533_ = v___x_542_;
goto v___jp_532_;
}
v___jp_520_:
{
lean_object* v___x_524_; lean_object* v___x_526_; 
v___x_524_ = lean_nat_add(v___y_521_, v___y_523_);
lean_dec(v___y_523_);
lean_dec(v___y_521_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 4, v_r_482_);
lean_ctor_set(v___x_516_, 3, v_r_511_);
lean_ctor_set(v___x_516_, 2, v_v_480_);
lean_ctor_set(v___x_516_, 1, v_k_479_);
lean_ctor_set(v___x_516_, 0, v___x_524_);
v___x_526_ = v___x_516_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_524_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v_k_479_);
lean_ctor_set(v_reuseFailAlloc_530_, 2, v_v_480_);
lean_ctor_set(v_reuseFailAlloc_530_, 3, v_r_511_);
lean_ctor_set(v_reuseFailAlloc_530_, 4, v_r_482_);
v___x_526_ = v_reuseFailAlloc_530_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
lean_object* v___x_528_; 
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 4, v___x_526_);
lean_ctor_set(v___x_504_, 3, v___y_522_);
lean_ctor_set(v___x_504_, 2, v_v_509_);
lean_ctor_set(v___x_504_, 1, v_k_508_);
lean_ctor_set(v___x_504_, 0, v___x_519_);
v___x_528_ = v___x_504_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v___x_519_);
lean_ctor_set(v_reuseFailAlloc_529_, 1, v_k_508_);
lean_ctor_set(v_reuseFailAlloc_529_, 2, v_v_509_);
lean_ctor_set(v_reuseFailAlloc_529_, 3, v___y_522_);
lean_ctor_set(v_reuseFailAlloc_529_, 4, v___x_526_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
v___jp_532_:
{
lean_object* v___x_534_; lean_object* v___x_536_; 
v___x_534_ = lean_nat_add(v___x_531_, v___y_533_);
lean_dec(v___y_533_);
lean_dec(v___x_531_);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 4, v_l_510_);
lean_ctor_set(v___x_484_, 3, v_l_493_);
lean_ctor_set(v___x_484_, 2, v_v_492_);
lean_ctor_set(v___x_484_, 1, v_k_491_);
lean_ctor_set(v___x_484_, 0, v___x_534_);
v___x_536_ = v___x_484_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v___x_534_);
lean_ctor_set(v_reuseFailAlloc_540_, 1, v_k_491_);
lean_ctor_set(v_reuseFailAlloc_540_, 2, v_v_492_);
lean_ctor_set(v_reuseFailAlloc_540_, 3, v_l_493_);
lean_ctor_set(v_reuseFailAlloc_540_, 4, v_l_510_);
v___x_536_ = v_reuseFailAlloc_540_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
lean_object* v___x_537_; 
v___x_537_ = lean_nat_add(v___x_488_, v_size_489_);
if (lean_obj_tag(v_r_511_) == 0)
{
lean_object* v_size_538_; 
v_size_538_ = lean_ctor_get(v_r_511_, 0);
lean_inc(v_size_538_);
v___y_521_ = v___x_537_;
v___y_522_ = v___x_536_;
v___y_523_ = v_size_538_;
goto v___jp_520_;
}
else
{
lean_object* v___x_539_; 
v___x_539_ = lean_unsigned_to_nat(0u);
v___y_521_ = v___x_537_;
v___y_522_ = v___x_536_;
v___y_523_ = v___x_539_;
goto v___jp_520_;
}
}
}
}
}
else
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_554_; 
lean_del_object(v___x_484_);
v___x_549_ = lean_nat_add(v___x_488_, v_size_490_);
lean_dec(v_size_490_);
v___x_550_ = lean_nat_add(v___x_549_, v_size_489_);
lean_dec(v___x_549_);
v___x_551_ = lean_nat_add(v___x_488_, v_size_489_);
v___x_552_ = lean_nat_add(v___x_551_, v_size_507_);
lean_dec(v___x_551_);
lean_inc_ref(v_r_482_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 4, v_r_482_);
lean_ctor_set(v___x_504_, 3, v_r_494_);
lean_ctor_set(v___x_504_, 2, v_v_480_);
lean_ctor_set(v___x_504_, 1, v_k_479_);
lean_ctor_set(v___x_504_, 0, v___x_552_);
v___x_554_ = v___x_504_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v___x_552_);
lean_ctor_set(v_reuseFailAlloc_567_, 1, v_k_479_);
lean_ctor_set(v_reuseFailAlloc_567_, 2, v_v_480_);
lean_ctor_set(v_reuseFailAlloc_567_, 3, v_r_494_);
lean_ctor_set(v_reuseFailAlloc_567_, 4, v_r_482_);
v___x_554_ = v_reuseFailAlloc_567_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
v_isSharedCheck_561_ = !lean_is_exclusive(v_r_482_);
if (v_isSharedCheck_561_ == 0)
{
lean_object* v_unused_562_; lean_object* v_unused_563_; lean_object* v_unused_564_; lean_object* v_unused_565_; lean_object* v_unused_566_; 
v_unused_562_ = lean_ctor_get(v_r_482_, 4);
lean_dec(v_unused_562_);
v_unused_563_ = lean_ctor_get(v_r_482_, 3);
lean_dec(v_unused_563_);
v_unused_564_ = lean_ctor_get(v_r_482_, 2);
lean_dec(v_unused_564_);
v_unused_565_ = lean_ctor_get(v_r_482_, 1);
lean_dec(v_unused_565_);
v_unused_566_ = lean_ctor_get(v_r_482_, 0);
lean_dec(v_unused_566_);
v___x_556_ = v_r_482_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_dec(v_r_482_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 4, v___x_554_);
lean_ctor_set(v___x_556_, 3, v_l_493_);
lean_ctor_set(v___x_556_, 2, v_v_492_);
lean_ctor_set(v___x_556_, 1, v_k_491_);
lean_ctor_set(v___x_556_, 0, v___x_550_);
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v___x_550_);
lean_ctor_set(v_reuseFailAlloc_560_, 1, v_k_491_);
lean_ctor_set(v_reuseFailAlloc_560_, 2, v_v_492_);
lean_ctor_set(v_reuseFailAlloc_560_, 3, v_l_493_);
lean_ctor_set(v_reuseFailAlloc_560_, 4, v___x_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_574_; 
v_l_574_ = lean_ctor_get(v_impl_487_, 3);
lean_inc(v_l_574_);
if (lean_obj_tag(v_l_574_) == 0)
{
lean_object* v_r_575_; lean_object* v_k_576_; lean_object* v_v_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_588_; 
v_r_575_ = lean_ctor_get(v_impl_487_, 4);
v_k_576_ = lean_ctor_get(v_impl_487_, 1);
v_v_577_ = lean_ctor_get(v_impl_487_, 2);
v_isSharedCheck_588_ = !lean_is_exclusive(v_impl_487_);
if (v_isSharedCheck_588_ == 0)
{
lean_object* v_unused_589_; lean_object* v_unused_590_; 
v_unused_589_ = lean_ctor_get(v_impl_487_, 3);
lean_dec(v_unused_589_);
v_unused_590_ = lean_ctor_get(v_impl_487_, 0);
lean_dec(v_unused_590_);
v___x_579_ = v_impl_487_;
v_isShared_580_ = v_isSharedCheck_588_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_r_575_);
lean_inc(v_v_577_);
lean_inc(v_k_576_);
lean_dec(v_impl_487_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_588_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_581_; lean_object* v___x_583_; 
v___x_581_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_575_);
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 3, v_r_575_);
lean_ctor_set(v___x_579_, 2, v_v_480_);
lean_ctor_set(v___x_579_, 1, v_k_479_);
lean_ctor_set(v___x_579_, 0, v___x_488_);
v___x_583_ = v___x_579_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v___x_488_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v_k_479_);
lean_ctor_set(v_reuseFailAlloc_587_, 2, v_v_480_);
lean_ctor_set(v_reuseFailAlloc_587_, 3, v_r_575_);
lean_ctor_set(v_reuseFailAlloc_587_, 4, v_r_575_);
v___x_583_ = v_reuseFailAlloc_587_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
lean_object* v___x_585_; 
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 4, v___x_583_);
lean_ctor_set(v___x_484_, 3, v_l_574_);
lean_ctor_set(v___x_484_, 2, v_v_577_);
lean_ctor_set(v___x_484_, 1, v_k_576_);
lean_ctor_set(v___x_484_, 0, v___x_581_);
v___x_585_ = v___x_484_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v___x_581_);
lean_ctor_set(v_reuseFailAlloc_586_, 1, v_k_576_);
lean_ctor_set(v_reuseFailAlloc_586_, 2, v_v_577_);
lean_ctor_set(v_reuseFailAlloc_586_, 3, v_l_574_);
lean_ctor_set(v_reuseFailAlloc_586_, 4, v___x_583_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
}
else
{
lean_object* v_r_591_; 
v_r_591_ = lean_ctor_get(v_impl_487_, 4);
lean_inc(v_r_591_);
if (lean_obj_tag(v_r_591_) == 0)
{
lean_object* v_k_592_; lean_object* v_v_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_616_; 
v_k_592_ = lean_ctor_get(v_impl_487_, 1);
v_v_593_ = lean_ctor_get(v_impl_487_, 2);
v_isSharedCheck_616_ = !lean_is_exclusive(v_impl_487_);
if (v_isSharedCheck_616_ == 0)
{
lean_object* v_unused_617_; lean_object* v_unused_618_; lean_object* v_unused_619_; 
v_unused_617_ = lean_ctor_get(v_impl_487_, 4);
lean_dec(v_unused_617_);
v_unused_618_ = lean_ctor_get(v_impl_487_, 3);
lean_dec(v_unused_618_);
v_unused_619_ = lean_ctor_get(v_impl_487_, 0);
lean_dec(v_unused_619_);
v___x_595_ = v_impl_487_;
v_isShared_596_ = v_isSharedCheck_616_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_v_593_);
lean_inc(v_k_592_);
lean_dec(v_impl_487_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_616_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v_k_597_; lean_object* v_v_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_612_; 
v_k_597_ = lean_ctor_get(v_r_591_, 1);
v_v_598_ = lean_ctor_get(v_r_591_, 2);
v_isSharedCheck_612_ = !lean_is_exclusive(v_r_591_);
if (v_isSharedCheck_612_ == 0)
{
lean_object* v_unused_613_; lean_object* v_unused_614_; lean_object* v_unused_615_; 
v_unused_613_ = lean_ctor_get(v_r_591_, 4);
lean_dec(v_unused_613_);
v_unused_614_ = lean_ctor_get(v_r_591_, 3);
lean_dec(v_unused_614_);
v_unused_615_ = lean_ctor_get(v_r_591_, 0);
lean_dec(v_unused_615_);
v___x_600_ = v_r_591_;
v_isShared_601_ = v_isSharedCheck_612_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_v_598_);
lean_inc(v_k_597_);
lean_dec(v_r_591_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_612_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v___x_604_; 
v___x_602_ = lean_unsigned_to_nat(3u);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 4, v_l_574_);
lean_ctor_set(v___x_600_, 3, v_l_574_);
lean_ctor_set(v___x_600_, 2, v_v_593_);
lean_ctor_set(v___x_600_, 1, v_k_592_);
lean_ctor_set(v___x_600_, 0, v___x_488_);
v___x_604_ = v___x_600_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_488_);
lean_ctor_set(v_reuseFailAlloc_611_, 1, v_k_592_);
lean_ctor_set(v_reuseFailAlloc_611_, 2, v_v_593_);
lean_ctor_set(v_reuseFailAlloc_611_, 3, v_l_574_);
lean_ctor_set(v_reuseFailAlloc_611_, 4, v_l_574_);
v___x_604_ = v_reuseFailAlloc_611_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
lean_object* v___x_606_; 
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 4, v_l_574_);
lean_ctor_set(v___x_595_, 2, v_v_480_);
lean_ctor_set(v___x_595_, 1, v_k_479_);
lean_ctor_set(v___x_595_, 0, v___x_488_);
v___x_606_ = v___x_595_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v___x_488_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v_k_479_);
lean_ctor_set(v_reuseFailAlloc_610_, 2, v_v_480_);
lean_ctor_set(v_reuseFailAlloc_610_, 3, v_l_574_);
lean_ctor_set(v_reuseFailAlloc_610_, 4, v_l_574_);
v___x_606_ = v_reuseFailAlloc_610_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
lean_object* v___x_608_; 
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 4, v___x_606_);
lean_ctor_set(v___x_484_, 3, v___x_604_);
lean_ctor_set(v___x_484_, 2, v_v_598_);
lean_ctor_set(v___x_484_, 1, v_k_597_);
lean_ctor_set(v___x_484_, 0, v___x_602_);
v___x_608_ = v___x_484_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v___x_602_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v_k_597_);
lean_ctor_set(v_reuseFailAlloc_609_, 2, v_v_598_);
lean_ctor_set(v_reuseFailAlloc_609_, 3, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_609_, 4, v___x_606_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
}
}
else
{
lean_object* v___x_620_; lean_object* v___x_622_; 
v___x_620_ = lean_unsigned_to_nat(2u);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 4, v_r_591_);
lean_ctor_set(v___x_484_, 3, v_impl_487_);
lean_ctor_set(v___x_484_, 0, v___x_620_);
v___x_622_ = v___x_484_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_620_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v_k_479_);
lean_ctor_set(v_reuseFailAlloc_623_, 2, v_v_480_);
lean_ctor_set(v_reuseFailAlloc_623_, 3, v_impl_487_);
lean_ctor_set(v_reuseFailAlloc_623_, 4, v_r_591_);
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
}
case 1:
{
lean_object* v___x_625_; 
lean_dec(v_v_480_);
lean_dec(v_k_479_);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 2, v_v_476_);
lean_ctor_set(v___x_484_, 1, v_k_475_);
v___x_625_ = v___x_484_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v_size_478_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_k_475_);
lean_ctor_set(v_reuseFailAlloc_626_, 2, v_v_476_);
lean_ctor_set(v_reuseFailAlloc_626_, 3, v_l_481_);
lean_ctor_set(v_reuseFailAlloc_626_, 4, v_r_482_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
default: 
{
lean_object* v_impl_627_; lean_object* v___x_628_; 
lean_dec(v_size_478_);
v_impl_627_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__1___redArg(v_k_475_, v_v_476_, v_r_482_);
v___x_628_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_481_) == 0)
{
lean_object* v_size_629_; lean_object* v_size_630_; lean_object* v_k_631_; lean_object* v_v_632_; lean_object* v_l_633_; lean_object* v_r_634_; lean_object* v___x_635_; lean_object* v___x_636_; uint8_t v___x_637_; 
v_size_629_ = lean_ctor_get(v_l_481_, 0);
v_size_630_ = lean_ctor_get(v_impl_627_, 0);
lean_inc(v_size_630_);
v_k_631_ = lean_ctor_get(v_impl_627_, 1);
lean_inc(v_k_631_);
v_v_632_ = lean_ctor_get(v_impl_627_, 2);
lean_inc(v_v_632_);
v_l_633_ = lean_ctor_get(v_impl_627_, 3);
lean_inc(v_l_633_);
v_r_634_ = lean_ctor_get(v_impl_627_, 4);
lean_inc(v_r_634_);
v___x_635_ = lean_unsigned_to_nat(3u);
v___x_636_ = lean_nat_mul(v___x_635_, v_size_629_);
v___x_637_ = lean_nat_dec_lt(v___x_636_, v_size_630_);
lean_dec(v___x_636_);
if (v___x_637_ == 0)
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_641_; 
lean_dec(v_r_634_);
lean_dec(v_l_633_);
lean_dec(v_v_632_);
lean_dec(v_k_631_);
v___x_638_ = lean_nat_add(v___x_628_, v_size_629_);
v___x_639_ = lean_nat_add(v___x_638_, v_size_630_);
lean_dec(v_size_630_);
lean_dec(v___x_638_);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 4, v_impl_627_);
lean_ctor_set(v___x_484_, 0, v___x_639_);
v___x_641_ = v___x_484_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v___x_639_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v_k_479_);
lean_ctor_set(v_reuseFailAlloc_642_, 2, v_v_480_);
lean_ctor_set(v_reuseFailAlloc_642_, 3, v_l_481_);
lean_ctor_set(v_reuseFailAlloc_642_, 4, v_impl_627_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
else
{
lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_706_; 
v_isSharedCheck_706_ = !lean_is_exclusive(v_impl_627_);
if (v_isSharedCheck_706_ == 0)
{
lean_object* v_unused_707_; lean_object* v_unused_708_; lean_object* v_unused_709_; lean_object* v_unused_710_; lean_object* v_unused_711_; 
v_unused_707_ = lean_ctor_get(v_impl_627_, 4);
lean_dec(v_unused_707_);
v_unused_708_ = lean_ctor_get(v_impl_627_, 3);
lean_dec(v_unused_708_);
v_unused_709_ = lean_ctor_get(v_impl_627_, 2);
lean_dec(v_unused_709_);
v_unused_710_ = lean_ctor_get(v_impl_627_, 1);
lean_dec(v_unused_710_);
v_unused_711_ = lean_ctor_get(v_impl_627_, 0);
lean_dec(v_unused_711_);
v___x_644_ = v_impl_627_;
v_isShared_645_ = v_isSharedCheck_706_;
goto v_resetjp_643_;
}
else
{
lean_dec(v_impl_627_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_706_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v_size_646_; lean_object* v_k_647_; lean_object* v_v_648_; lean_object* v_l_649_; lean_object* v_r_650_; lean_object* v_size_651_; lean_object* v___x_652_; lean_object* v___x_653_; uint8_t v___x_654_; 
v_size_646_ = lean_ctor_get(v_l_633_, 0);
v_k_647_ = lean_ctor_get(v_l_633_, 1);
v_v_648_ = lean_ctor_get(v_l_633_, 2);
v_l_649_ = lean_ctor_get(v_l_633_, 3);
v_r_650_ = lean_ctor_get(v_l_633_, 4);
v_size_651_ = lean_ctor_get(v_r_634_, 0);
v___x_652_ = lean_unsigned_to_nat(2u);
v___x_653_ = lean_nat_mul(v___x_652_, v_size_651_);
v___x_654_ = lean_nat_dec_lt(v_size_646_, v___x_653_);
lean_dec(v___x_653_);
if (v___x_654_ == 0)
{
lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_682_; 
lean_inc(v_r_650_);
lean_inc(v_l_649_);
lean_inc(v_v_648_);
lean_inc(v_k_647_);
v_isSharedCheck_682_ = !lean_is_exclusive(v_l_633_);
if (v_isSharedCheck_682_ == 0)
{
lean_object* v_unused_683_; lean_object* v_unused_684_; lean_object* v_unused_685_; lean_object* v_unused_686_; lean_object* v_unused_687_; 
v_unused_683_ = lean_ctor_get(v_l_633_, 4);
lean_dec(v_unused_683_);
v_unused_684_ = lean_ctor_get(v_l_633_, 3);
lean_dec(v_unused_684_);
v_unused_685_ = lean_ctor_get(v_l_633_, 2);
lean_dec(v_unused_685_);
v_unused_686_ = lean_ctor_get(v_l_633_, 1);
lean_dec(v_unused_686_);
v_unused_687_ = lean_ctor_get(v_l_633_, 0);
lean_dec(v_unused_687_);
v___x_656_ = v_l_633_;
v_isShared_657_ = v_isSharedCheck_682_;
goto v_resetjp_655_;
}
else
{
lean_dec(v_l_633_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_682_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___y_661_; lean_object* v___y_662_; lean_object* v___y_663_; lean_object* v___y_672_; 
v___x_658_ = lean_nat_add(v___x_628_, v_size_629_);
v___x_659_ = lean_nat_add(v___x_658_, v_size_630_);
lean_dec(v_size_630_);
if (lean_obj_tag(v_l_649_) == 0)
{
lean_object* v_size_680_; 
v_size_680_ = lean_ctor_get(v_l_649_, 0);
lean_inc(v_size_680_);
v___y_672_ = v_size_680_;
goto v___jp_671_;
}
else
{
lean_object* v___x_681_; 
v___x_681_ = lean_unsigned_to_nat(0u);
v___y_672_ = v___x_681_;
goto v___jp_671_;
}
v___jp_660_:
{
lean_object* v___x_664_; lean_object* v___x_666_; 
v___x_664_ = lean_nat_add(v___y_662_, v___y_663_);
lean_dec(v___y_663_);
lean_dec(v___y_662_);
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 4, v_r_634_);
lean_ctor_set(v___x_656_, 3, v_r_650_);
lean_ctor_set(v___x_656_, 2, v_v_632_);
lean_ctor_set(v___x_656_, 1, v_k_631_);
lean_ctor_set(v___x_656_, 0, v___x_664_);
v___x_666_ = v___x_656_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v___x_664_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v_k_631_);
lean_ctor_set(v_reuseFailAlloc_670_, 2, v_v_632_);
lean_ctor_set(v_reuseFailAlloc_670_, 3, v_r_650_);
lean_ctor_set(v_reuseFailAlloc_670_, 4, v_r_634_);
v___x_666_ = v_reuseFailAlloc_670_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
lean_object* v___x_668_; 
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 4, v___x_666_);
lean_ctor_set(v___x_644_, 3, v___y_661_);
lean_ctor_set(v___x_644_, 2, v_v_648_);
lean_ctor_set(v___x_644_, 1, v_k_647_);
lean_ctor_set(v___x_644_, 0, v___x_659_);
v___x_668_ = v___x_644_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v___x_659_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_k_647_);
lean_ctor_set(v_reuseFailAlloc_669_, 2, v_v_648_);
lean_ctor_set(v_reuseFailAlloc_669_, 3, v___y_661_);
lean_ctor_set(v_reuseFailAlloc_669_, 4, v___x_666_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
v___jp_671_:
{
lean_object* v___x_673_; lean_object* v___x_675_; 
v___x_673_ = lean_nat_add(v___x_658_, v___y_672_);
lean_dec(v___y_672_);
lean_dec(v___x_658_);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 4, v_l_649_);
lean_ctor_set(v___x_484_, 0, v___x_673_);
v___x_675_ = v___x_484_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v___x_673_);
lean_ctor_set(v_reuseFailAlloc_679_, 1, v_k_479_);
lean_ctor_set(v_reuseFailAlloc_679_, 2, v_v_480_);
lean_ctor_set(v_reuseFailAlloc_679_, 3, v_l_481_);
lean_ctor_set(v_reuseFailAlloc_679_, 4, v_l_649_);
v___x_675_ = v_reuseFailAlloc_679_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
lean_object* v___x_676_; 
v___x_676_ = lean_nat_add(v___x_628_, v_size_651_);
if (lean_obj_tag(v_r_650_) == 0)
{
lean_object* v_size_677_; 
v_size_677_ = lean_ctor_get(v_r_650_, 0);
lean_inc(v_size_677_);
v___y_661_ = v___x_675_;
v___y_662_ = v___x_676_;
v___y_663_ = v_size_677_;
goto v___jp_660_;
}
else
{
lean_object* v___x_678_; 
v___x_678_ = lean_unsigned_to_nat(0u);
v___y_661_ = v___x_675_;
v___y_662_ = v___x_676_;
v___y_663_ = v___x_678_;
goto v___jp_660_;
}
}
}
}
}
else
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_692_; 
lean_del_object(v___x_484_);
v___x_688_ = lean_nat_add(v___x_628_, v_size_629_);
v___x_689_ = lean_nat_add(v___x_688_, v_size_630_);
lean_dec(v_size_630_);
v___x_690_ = lean_nat_add(v___x_688_, v_size_646_);
lean_dec(v___x_688_);
lean_inc_ref(v_l_481_);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 4, v_l_633_);
lean_ctor_set(v___x_644_, 3, v_l_481_);
lean_ctor_set(v___x_644_, 2, v_v_480_);
lean_ctor_set(v___x_644_, 1, v_k_479_);
lean_ctor_set(v___x_644_, 0, v___x_690_);
v___x_692_ = v___x_644_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v___x_690_);
lean_ctor_set(v_reuseFailAlloc_705_, 1, v_k_479_);
lean_ctor_set(v_reuseFailAlloc_705_, 2, v_v_480_);
lean_ctor_set(v_reuseFailAlloc_705_, 3, v_l_481_);
lean_ctor_set(v_reuseFailAlloc_705_, 4, v_l_633_);
v___x_692_ = v_reuseFailAlloc_705_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_699_; 
v_isSharedCheck_699_ = !lean_is_exclusive(v_l_481_);
if (v_isSharedCheck_699_ == 0)
{
lean_object* v_unused_700_; lean_object* v_unused_701_; lean_object* v_unused_702_; lean_object* v_unused_703_; lean_object* v_unused_704_; 
v_unused_700_ = lean_ctor_get(v_l_481_, 4);
lean_dec(v_unused_700_);
v_unused_701_ = lean_ctor_get(v_l_481_, 3);
lean_dec(v_unused_701_);
v_unused_702_ = lean_ctor_get(v_l_481_, 2);
lean_dec(v_unused_702_);
v_unused_703_ = lean_ctor_get(v_l_481_, 1);
lean_dec(v_unused_703_);
v_unused_704_ = lean_ctor_get(v_l_481_, 0);
lean_dec(v_unused_704_);
v___x_694_ = v_l_481_;
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
else
{
lean_dec(v_l_481_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
lean_ctor_set(v___x_694_, 4, v_r_634_);
lean_ctor_set(v___x_694_, 3, v___x_692_);
lean_ctor_set(v___x_694_, 2, v_v_632_);
lean_ctor_set(v___x_694_, 1, v_k_631_);
lean_ctor_set(v___x_694_, 0, v___x_689_);
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_689_);
lean_ctor_set(v_reuseFailAlloc_698_, 1, v_k_631_);
lean_ctor_set(v_reuseFailAlloc_698_, 2, v_v_632_);
lean_ctor_set(v_reuseFailAlloc_698_, 3, v___x_692_);
lean_ctor_set(v_reuseFailAlloc_698_, 4, v_r_634_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_712_; 
v_l_712_ = lean_ctor_get(v_impl_627_, 3);
lean_inc(v_l_712_);
if (lean_obj_tag(v_l_712_) == 0)
{
lean_object* v_r_713_; lean_object* v_k_714_; lean_object* v_v_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_738_; 
v_r_713_ = lean_ctor_get(v_impl_627_, 4);
v_k_714_ = lean_ctor_get(v_impl_627_, 1);
v_v_715_ = lean_ctor_get(v_impl_627_, 2);
v_isSharedCheck_738_ = !lean_is_exclusive(v_impl_627_);
if (v_isSharedCheck_738_ == 0)
{
lean_object* v_unused_739_; lean_object* v_unused_740_; 
v_unused_739_ = lean_ctor_get(v_impl_627_, 3);
lean_dec(v_unused_739_);
v_unused_740_ = lean_ctor_get(v_impl_627_, 0);
lean_dec(v_unused_740_);
v___x_717_ = v_impl_627_;
v_isShared_718_ = v_isSharedCheck_738_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_r_713_);
lean_inc(v_v_715_);
lean_inc(v_k_714_);
lean_dec(v_impl_627_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_738_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v_k_719_; lean_object* v_v_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_734_; 
v_k_719_ = lean_ctor_get(v_l_712_, 1);
v_v_720_ = lean_ctor_get(v_l_712_, 2);
v_isSharedCheck_734_ = !lean_is_exclusive(v_l_712_);
if (v_isSharedCheck_734_ == 0)
{
lean_object* v_unused_735_; lean_object* v_unused_736_; lean_object* v_unused_737_; 
v_unused_735_ = lean_ctor_get(v_l_712_, 4);
lean_dec(v_unused_735_);
v_unused_736_ = lean_ctor_get(v_l_712_, 3);
lean_dec(v_unused_736_);
v_unused_737_ = lean_ctor_get(v_l_712_, 0);
lean_dec(v_unused_737_);
v___x_722_ = v_l_712_;
v_isShared_723_ = v_isSharedCheck_734_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_v_720_);
lean_inc(v_k_719_);
lean_dec(v_l_712_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_734_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_724_; lean_object* v___x_726_; 
v___x_724_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_713_, 2);
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 4, v_r_713_);
lean_ctor_set(v___x_722_, 3, v_r_713_);
lean_ctor_set(v___x_722_, 2, v_v_480_);
lean_ctor_set(v___x_722_, 1, v_k_479_);
lean_ctor_set(v___x_722_, 0, v___x_628_);
v___x_726_ = v___x_722_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v___x_628_);
lean_ctor_set(v_reuseFailAlloc_733_, 1, v_k_479_);
lean_ctor_set(v_reuseFailAlloc_733_, 2, v_v_480_);
lean_ctor_set(v_reuseFailAlloc_733_, 3, v_r_713_);
lean_ctor_set(v_reuseFailAlloc_733_, 4, v_r_713_);
v___x_726_ = v_reuseFailAlloc_733_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_object* v___x_728_; 
lean_inc(v_r_713_);
if (v_isShared_718_ == 0)
{
lean_ctor_set(v___x_717_, 3, v_r_713_);
lean_ctor_set(v___x_717_, 0, v___x_628_);
v___x_728_ = v___x_717_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___x_628_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v_k_714_);
lean_ctor_set(v_reuseFailAlloc_732_, 2, v_v_715_);
lean_ctor_set(v_reuseFailAlloc_732_, 3, v_r_713_);
lean_ctor_set(v_reuseFailAlloc_732_, 4, v_r_713_);
v___x_728_ = v_reuseFailAlloc_732_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
lean_object* v___x_730_; 
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 4, v___x_728_);
lean_ctor_set(v___x_484_, 3, v___x_726_);
lean_ctor_set(v___x_484_, 2, v_v_720_);
lean_ctor_set(v___x_484_, 1, v_k_719_);
lean_ctor_set(v___x_484_, 0, v___x_724_);
v___x_730_ = v___x_484_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v___x_724_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v_k_719_);
lean_ctor_set(v_reuseFailAlloc_731_, 2, v_v_720_);
lean_ctor_set(v_reuseFailAlloc_731_, 3, v___x_726_);
lean_ctor_set(v_reuseFailAlloc_731_, 4, v___x_728_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
}
}
}
else
{
lean_object* v_r_741_; 
v_r_741_ = lean_ctor_get(v_impl_627_, 4);
lean_inc(v_r_741_);
if (lean_obj_tag(v_r_741_) == 0)
{
lean_object* v_k_742_; lean_object* v_v_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_754_; 
v_k_742_ = lean_ctor_get(v_impl_627_, 1);
v_v_743_ = lean_ctor_get(v_impl_627_, 2);
v_isSharedCheck_754_ = !lean_is_exclusive(v_impl_627_);
if (v_isSharedCheck_754_ == 0)
{
lean_object* v_unused_755_; lean_object* v_unused_756_; lean_object* v_unused_757_; 
v_unused_755_ = lean_ctor_get(v_impl_627_, 4);
lean_dec(v_unused_755_);
v_unused_756_ = lean_ctor_get(v_impl_627_, 3);
lean_dec(v_unused_756_);
v_unused_757_ = lean_ctor_get(v_impl_627_, 0);
lean_dec(v_unused_757_);
v___x_745_ = v_impl_627_;
v_isShared_746_ = v_isSharedCheck_754_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_v_743_);
lean_inc(v_k_742_);
lean_dec(v_impl_627_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_754_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_747_; lean_object* v___x_749_; 
v___x_747_ = lean_unsigned_to_nat(3u);
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 4, v_l_712_);
lean_ctor_set(v___x_745_, 2, v_v_480_);
lean_ctor_set(v___x_745_, 1, v_k_479_);
lean_ctor_set(v___x_745_, 0, v___x_628_);
v___x_749_ = v___x_745_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v___x_628_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_k_479_);
lean_ctor_set(v_reuseFailAlloc_753_, 2, v_v_480_);
lean_ctor_set(v_reuseFailAlloc_753_, 3, v_l_712_);
lean_ctor_set(v_reuseFailAlloc_753_, 4, v_l_712_);
v___x_749_ = v_reuseFailAlloc_753_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
lean_object* v___x_751_; 
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 4, v_r_741_);
lean_ctor_set(v___x_484_, 3, v___x_749_);
lean_ctor_set(v___x_484_, 2, v_v_743_);
lean_ctor_set(v___x_484_, 1, v_k_742_);
lean_ctor_set(v___x_484_, 0, v___x_747_);
v___x_751_ = v___x_484_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v___x_747_);
lean_ctor_set(v_reuseFailAlloc_752_, 1, v_k_742_);
lean_ctor_set(v_reuseFailAlloc_752_, 2, v_v_743_);
lean_ctor_set(v_reuseFailAlloc_752_, 3, v___x_749_);
lean_ctor_set(v_reuseFailAlloc_752_, 4, v_r_741_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
else
{
lean_object* v___x_758_; lean_object* v___x_760_; 
v___x_758_ = lean_unsigned_to_nat(2u);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 4, v_impl_627_);
lean_ctor_set(v___x_484_, 3, v_r_741_);
lean_ctor_set(v___x_484_, 0, v___x_758_);
v___x_760_ = v___x_484_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v___x_758_);
lean_ctor_set(v_reuseFailAlloc_761_, 1, v_k_479_);
lean_ctor_set(v_reuseFailAlloc_761_, 2, v_v_480_);
lean_ctor_set(v_reuseFailAlloc_761_, 3, v_r_741_);
lean_ctor_set(v_reuseFailAlloc_761_, 4, v_impl_627_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
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
lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_763_ = lean_unsigned_to_nat(1u);
v___x_764_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_764_, 0, v___x_763_);
lean_ctor_set(v___x_764_, 1, v_k_475_);
lean_ctor_set(v___x_764_, 2, v_v_476_);
lean_ctor_set(v___x_764_, 3, v_t_477_);
lean_ctor_set(v___x_764_, 4, v_t_477_);
return v___x_764_;
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__0(void){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_765_ = lean_box(0);
v___x_766_ = lean_unsigned_to_nat(16u);
v___x_767_ = lean_mk_array(v___x_766_, v___x_765_);
return v___x_767_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__1(void){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_768_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__0, &l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__0_once, _init_l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__0);
v___x_769_ = lean_unsigned_to_nat(0u);
v___x_770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_770_, 0, v___x_769_);
lean_ctor_set(v___x_770_, 1, v___x_768_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_isFVarLiveIn(lean_object* v_c_771_, lean_object* v_fvarId_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_){
_start:
{
lean_object* v___y_779_; lean_object* v___x_800_; uint8_t v___x_801_; 
v___x_800_ = lean_box(1);
v___x_801_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0___redArg(v_fvarId_772_, v___x_800_);
if (v___x_801_ == 0)
{
lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_802_ = lean_box(0);
lean_inc(v_fvarId_772_);
v___x_803_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__1___redArg(v_fvarId_772_, v___x_802_, v___x_800_);
v___y_779_ = v___x_803_;
goto v___jp_778_;
}
else
{
v___y_779_ = v___x_800_;
goto v___jp_778_;
}
v___jp_778_:
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
lean_inc(v_fvarId_772_);
v___x_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_780_, 0, v___y_779_);
lean_ctor_set(v___x_780_, 1, v_fvarId_772_);
v___x_781_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__1, &l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__1_once, _init_l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__1);
v___x_782_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go(v_fvarId_772_, v_c_771_, v___x_780_, v___x_781_, v_a_773_, v_a_774_, v_a_775_, v_a_776_);
lean_dec_ref_known(v___x_780_, 2);
lean_dec(v_fvarId_772_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_791_; 
v_a_783_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_791_ == 0)
{
v___x_785_ = v___x_782_;
v_isShared_786_ = v_isSharedCheck_791_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_782_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_791_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v_fst_787_; lean_object* v___x_789_; 
v_fst_787_ = lean_ctor_get(v_a_783_, 0);
lean_inc(v_fst_787_);
lean_dec(v_a_783_);
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 0, v_fst_787_);
v___x_789_ = v___x_785_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_fst_787_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
else
{
lean_object* v_a_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_799_; 
v_a_792_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_799_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_799_ == 0)
{
v___x_794_ = v___x_782_;
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_a_792_);
lean_dec(v___x_782_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_797_; 
if (v_isShared_795_ == 0)
{
v___x_797_ = v___x_794_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_a_792_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
return v___x_797_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_isFVarLiveIn___boxed(lean_object* v_c_804_, lean_object* v_fvarId_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v___y_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_804_, v_fvarId_805_, v_a_806_, v_a_807_, v_a_808_, v_a_809_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_a_807_);
lean_dec_ref(v_a_806_);
return v_res_811_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0(lean_object* v_00_u03b2_812_, lean_object* v_k_813_, lean_object* v_t_814_){
_start:
{
uint8_t v___x_815_; 
v___x_815_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0___redArg(v_k_813_, v_t_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0___boxed(lean_object* v_00_u03b2_816_, lean_object* v_k_817_, lean_object* v_t_818_){
_start:
{
uint8_t v_res_819_; lean_object* v_r_820_; 
v_res_819_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0(v_00_u03b2_816_, v_k_817_, v_t_818_);
lean_dec(v_t_818_);
lean_dec(v_k_817_);
v_r_820_ = lean_box(v_res_819_);
return v_r_820_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__1(lean_object* v_00_u03b2_821_, lean_object* v_k_822_, lean_object* v_v_823_, lean_object* v_t_824_, lean_object* v_hl_825_){
_start:
{
lean_object* v___x_826_; 
v___x_826_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__1___redArg(v_k_822_, v_v_823_, v_t_824_);
return v___x_826_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_LiveVars(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_LiveVars(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_LiveVars(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_LiveVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_LiveVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_LiveVars(builtin);
}
#ifdef __cplusplus
}
#endif
