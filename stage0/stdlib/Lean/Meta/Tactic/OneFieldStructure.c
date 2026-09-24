// Lean compiler output
// Module: Lean.Meta.Tactic.OneFieldStructure
// Imports: public import Lean.Meta.Basic public import Lean.Meta.VirtualStructure import Lean.Meta.WHNF import Lean.Structure import Lean.ProjFns
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
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_isClass(lean_object*, lean_object*);
lean_object* l_Lean_getNonRecStructureCtor_x3f(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkProjFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getVirtualProjInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getVirtualCtorInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_realStructure_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_realStructure_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_virtualStructure_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_virtualStructure_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_inv(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkApp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkApp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkApp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_Bijection_unapply_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_Bijection_unapply_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkAppAndSimplify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkAppAndSimplify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__0;
static const lean_closure_object l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__0 = (const lean_object*)&l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__0_value;
static const lean_string_object l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__1 = (const lean_object*)&l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__1_value;
static const lean_string_object l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__2 = (const lean_object*)&l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
lean_object* v_a_8_; lean_object* v___x_9_; 
v_a_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_a_8_);
lean_dec_ref(v_t_6_);
v___x_9_ = lean_apply_1(v_k_7_, v_a_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, lean_object* v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorElim___redArg(v_t_12_, v_k_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_18_, v_h_19_, v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_realStructure_elim___redArg(lean_object* v_t_22_, lean_object* v_realStructure_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorElim___redArg(v_t_22_, v_realStructure_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_realStructure_elim(lean_object* v_motive_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_realStructure_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorElim___redArg(v_t_26_, v_realStructure_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_virtualStructure_elim___redArg(lean_object* v_t_30_, lean_object* v_virtualStructure_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorElim___redArg(v_t_30_, v_virtualStructure_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_virtualStructure_elim(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_virtualStructure_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_Meta_OneFieldStructure_OneFieldStructureInfo_ctorElim___redArg(v_t_34_, v_virtualStructure_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_inv(lean_object* v_b_38_){
_start:
{
uint8_t v_isCtor_39_; 
v_isCtor_39_ = lean_ctor_get_uint8(v_b_38_, sizeof(void*)*3);
if (v_isCtor_39_ == 0)
{
lean_object* v_structureInfo_40_; lean_object* v_us_41_; lean_object* v_params_42_; lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_50_; 
v_structureInfo_40_ = lean_ctor_get(v_b_38_, 0);
v_us_41_ = lean_ctor_get(v_b_38_, 1);
v_params_42_ = lean_ctor_get(v_b_38_, 2);
v_isSharedCheck_50_ = !lean_is_exclusive(v_b_38_);
if (v_isSharedCheck_50_ == 0)
{
v___x_44_ = v_b_38_;
v_isShared_45_ = v_isSharedCheck_50_;
goto v_resetjp_43_;
}
else
{
lean_inc(v_params_42_);
lean_inc(v_us_41_);
lean_inc(v_structureInfo_40_);
lean_dec(v_b_38_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_50_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
uint8_t v___x_46_; lean_object* v___x_48_; 
v___x_46_ = 1;
if (v_isShared_45_ == 0)
{
v___x_48_ = v___x_44_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v_structureInfo_40_);
lean_ctor_set(v_reuseFailAlloc_49_, 1, v_us_41_);
lean_ctor_set(v_reuseFailAlloc_49_, 2, v_params_42_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
lean_ctor_set_uint8(v___x_48_, sizeof(void*)*3, v___x_46_);
return v___x_48_;
}
}
}
else
{
lean_object* v_structureInfo_51_; lean_object* v_us_52_; lean_object* v_params_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_61_; 
v_structureInfo_51_ = lean_ctor_get(v_b_38_, 0);
v_us_52_ = lean_ctor_get(v_b_38_, 1);
v_params_53_ = lean_ctor_get(v_b_38_, 2);
v_isSharedCheck_61_ = !lean_is_exclusive(v_b_38_);
if (v_isSharedCheck_61_ == 0)
{
v___x_55_ = v_b_38_;
v_isShared_56_ = v_isSharedCheck_61_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_params_53_);
lean_inc(v_us_52_);
lean_inc(v_structureInfo_51_);
lean_dec(v_b_38_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_61_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
uint8_t v___x_57_; lean_object* v___x_59_; 
v___x_57_ = 0;
if (v_isShared_56_ == 0)
{
v___x_59_ = v___x_55_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_structureInfo_51_);
lean_ctor_set(v_reuseFailAlloc_60_, 1, v_us_52_);
lean_ctor_set(v_reuseFailAlloc_60_, 2, v_params_53_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
lean_ctor_set_uint8(v___x_59_, sizeof(void*)*3, v___x_57_);
return v___x_59_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkApp___redArg(lean_object* v_b_62_, lean_object* v_e_63_, lean_object* v_a_64_){
_start:
{
uint8_t v_isCtor_66_; 
v_isCtor_66_ = lean_ctor_get_uint8(v_b_62_, sizeof(void*)*3);
if (v_isCtor_66_ == 0)
{
lean_object* v_structureInfo_67_; 
v_structureInfo_67_ = lean_ctor_get(v_b_62_, 0);
lean_inc_ref(v_structureInfo_67_);
if (lean_obj_tag(v_structureInfo_67_) == 0)
{
lean_object* v_us_68_; lean_object* v_params_69_; lean_object* v_a_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v_us_68_ = lean_ctor_get(v_b_62_, 1);
lean_inc(v_us_68_);
v_params_69_ = lean_ctor_get(v_b_62_, 2);
lean_inc_ref(v_params_69_);
lean_dec_ref(v_b_62_);
v_a_70_ = lean_ctor_get(v_structureInfo_67_, 0);
lean_inc_ref(v_a_70_);
lean_dec_ref_known(v_structureInfo_67_, 1);
v___x_71_ = lean_unsigned_to_nat(0u);
v___x_72_ = l_Lean_Meta_mkProjFn___redArg(v_a_70_, v_us_68_, v_params_69_, v___x_71_, v_e_63_, v_a_64_);
lean_dec_ref(v_params_69_);
return v___x_72_;
}
else
{
lean_object* v_a_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_86_; 
v_a_73_ = lean_ctor_get(v_structureInfo_67_, 0);
v_isSharedCheck_86_ = !lean_is_exclusive(v_structureInfo_67_);
if (v_isSharedCheck_86_ == 0)
{
v___x_75_ = v_structureInfo_67_;
v_isShared_76_ = v_isSharedCheck_86_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_a_73_);
lean_dec(v_structureInfo_67_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_86_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v_us_77_; lean_object* v_params_78_; lean_object* v_projName_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_84_; 
v_us_77_ = lean_ctor_get(v_b_62_, 1);
lean_inc(v_us_77_);
v_params_78_ = lean_ctor_get(v_b_62_, 2);
lean_inc_ref(v_params_78_);
lean_dec_ref(v_b_62_);
v_projName_79_ = lean_ctor_get(v_a_73_, 2);
lean_inc(v_projName_79_);
lean_dec_ref(v_a_73_);
v___x_80_ = l_Lean_mkConst(v_projName_79_, v_us_77_);
v___x_81_ = l_Lean_mkAppN(v___x_80_, v_params_78_);
lean_dec_ref(v_params_78_);
v___x_82_ = l_Lean_Expr_app___override(v___x_81_, v_e_63_);
if (v_isShared_76_ == 0)
{
lean_ctor_set_tag(v___x_75_, 0);
lean_ctor_set(v___x_75_, 0, v___x_82_);
v___x_84_ = v___x_75_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_82_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
return v___x_84_;
}
}
}
}
else
{
lean_object* v_structureInfo_87_; 
v_structureInfo_87_ = lean_ctor_get(v_b_62_, 0);
lean_inc_ref(v_structureInfo_87_);
if (lean_obj_tag(v_structureInfo_87_) == 0)
{
lean_object* v_a_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_102_; 
v_a_88_ = lean_ctor_get(v_structureInfo_87_, 0);
v_isSharedCheck_102_ = !lean_is_exclusive(v_structureInfo_87_);
if (v_isSharedCheck_102_ == 0)
{
v___x_90_ = v_structureInfo_87_;
v_isShared_91_ = v_isSharedCheck_102_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_a_88_);
lean_dec(v_structureInfo_87_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_102_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v_toConstantVal_92_; lean_object* v_us_93_; lean_object* v_params_94_; lean_object* v_name_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_100_; 
v_toConstantVal_92_ = lean_ctor_get(v_a_88_, 0);
lean_inc_ref(v_toConstantVal_92_);
lean_dec_ref(v_a_88_);
v_us_93_ = lean_ctor_get(v_b_62_, 1);
lean_inc(v_us_93_);
v_params_94_ = lean_ctor_get(v_b_62_, 2);
lean_inc_ref(v_params_94_);
lean_dec_ref(v_b_62_);
v_name_95_ = lean_ctor_get(v_toConstantVal_92_, 0);
lean_inc(v_name_95_);
lean_dec_ref(v_toConstantVal_92_);
v___x_96_ = l_Lean_mkConst(v_name_95_, v_us_93_);
v___x_97_ = l_Lean_mkAppN(v___x_96_, v_params_94_);
lean_dec_ref(v_params_94_);
v___x_98_ = l_Lean_Expr_app___override(v___x_97_, v_e_63_);
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 0, v___x_98_);
v___x_100_ = v___x_90_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v___x_98_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
}
else
{
lean_object* v_a_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_116_; 
v_a_103_ = lean_ctor_get(v_structureInfo_87_, 0);
v_isSharedCheck_116_ = !lean_is_exclusive(v_structureInfo_87_);
if (v_isSharedCheck_116_ == 0)
{
v___x_105_ = v_structureInfo_87_;
v_isShared_106_ = v_isSharedCheck_116_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_a_103_);
lean_dec(v_structureInfo_87_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_116_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v_us_107_; lean_object* v_params_108_; lean_object* v_ctorName_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_114_; 
v_us_107_ = lean_ctor_get(v_b_62_, 1);
lean_inc(v_us_107_);
v_params_108_ = lean_ctor_get(v_b_62_, 2);
lean_inc_ref(v_params_108_);
lean_dec_ref(v_b_62_);
v_ctorName_109_ = lean_ctor_get(v_a_103_, 1);
lean_inc(v_ctorName_109_);
lean_dec_ref(v_a_103_);
v___x_110_ = l_Lean_mkConst(v_ctorName_109_, v_us_107_);
v___x_111_ = l_Lean_mkAppN(v___x_110_, v_params_108_);
lean_dec_ref(v_params_108_);
v___x_112_ = l_Lean_Expr_app___override(v___x_111_, v_e_63_);
if (v_isShared_106_ == 0)
{
lean_ctor_set_tag(v___x_105_, 0);
lean_ctor_set(v___x_105_, 0, v___x_112_);
v___x_114_ = v___x_105_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v___x_112_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkApp___redArg___boxed(lean_object* v_b_117_, lean_object* v_e_118_, lean_object* v_a_119_, lean_object* v_a_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lean_Meta_OneFieldStructure_Bijection_mkApp___redArg(v_b_117_, v_e_118_, v_a_119_);
lean_dec(v_a_119_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkApp(lean_object* v_b_122_, lean_object* v_e_123_, lean_object* v_a_124_, lean_object* v_a_125_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = l_Lean_Meta_OneFieldStructure_Bijection_mkApp___redArg(v_b_122_, v_e_123_, v_a_125_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkApp___boxed(lean_object* v_b_128_, lean_object* v_e_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l_Lean_Meta_OneFieldStructure_Bijection_mkApp(v_b_128_, v_e_129_, v_a_130_, v_a_131_);
lean_dec(v_a_131_);
lean_dec_ref(v_a_130_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_Bijection_unapply_x3f(lean_object* v_b_134_, lean_object* v_e_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_){
_start:
{
uint8_t v___x_147_; 
v___x_147_ = l_Lean_Expr_isApp(v_e_135_);
if (v___x_147_ == 0)
{
if (lean_obj_tag(v_e_135_) == 11)
{
lean_object* v_typeName_148_; lean_object* v_idx_149_; lean_object* v_struct_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
v_typeName_148_ = lean_ctor_get(v_e_135_, 0);
lean_inc(v_typeName_148_);
v_idx_149_ = lean_ctor_get(v_e_135_, 1);
lean_inc(v_idx_149_);
v_struct_150_ = lean_ctor_get(v_e_135_, 2);
lean_inc_ref(v_struct_150_);
lean_dec_ref_known(v_e_135_, 3);
v___x_151_ = lean_unsigned_to_nat(0u);
v___x_152_ = lean_nat_dec_eq(v_idx_149_, v___x_151_);
lean_dec(v_idx_149_);
if (v___x_152_ == 0)
{
lean_dec_ref(v_struct_150_);
lean_dec(v_typeName_148_);
lean_dec_ref(v_b_134_);
goto v___jp_144_;
}
else
{
lean_object* v_structureInfo_153_; 
v_structureInfo_153_ = lean_ctor_get(v_b_134_, 0);
lean_inc_ref(v_structureInfo_153_);
if (lean_obj_tag(v_structureInfo_153_) == 0)
{
uint8_t v_isCtor_154_; lean_object* v_us_155_; lean_object* v_params_156_; lean_object* v_a_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_200_; 
v_isCtor_154_ = lean_ctor_get_uint8(v_b_134_, sizeof(void*)*3);
v_us_155_ = lean_ctor_get(v_b_134_, 1);
lean_inc(v_us_155_);
v_params_156_ = lean_ctor_get(v_b_134_, 2);
lean_inc_ref(v_params_156_);
lean_dec_ref(v_b_134_);
v_a_157_ = lean_ctor_get(v_structureInfo_153_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v_structureInfo_153_);
if (v_isSharedCheck_200_ == 0)
{
v___x_159_ = v_structureInfo_153_;
v_isShared_160_ = v_isSharedCheck_200_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_a_157_);
lean_dec(v_structureInfo_153_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_200_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
uint8_t v___y_162_; 
if (v_isCtor_154_ == 0)
{
goto v___jp_197_;
}
else
{
if (v___x_147_ == 0)
{
lean_dec(v_typeName_148_);
v___y_162_ = v___x_147_;
goto v___jp_161_;
}
else
{
goto v___jp_197_;
}
}
v___jp_161_:
{
if (v___y_162_ == 0)
{
lean_del_object(v___x_159_);
lean_dec_ref(v_a_157_);
lean_dec_ref(v_params_156_);
lean_dec(v_us_155_);
lean_dec_ref(v_struct_150_);
goto v___jp_141_;
}
else
{
lean_object* v___x_163_; 
lean_inc(v_a_139_);
lean_inc_ref(v_a_138_);
lean_inc(v_a_137_);
lean_inc_ref(v_a_136_);
lean_inc_ref(v_struct_150_);
v___x_163_ = lean_infer_type(v_struct_150_, v_a_136_, v_a_137_, v_a_138_, v_a_139_);
if (lean_obj_tag(v___x_163_) == 0)
{
lean_object* v_a_164_; lean_object* v___x_165_; 
v_a_164_ = lean_ctor_get(v___x_163_, 0);
lean_inc(v_a_164_);
lean_dec_ref_known(v___x_163_, 1);
v___x_165_ = l_Lean_Meta_whnfD(v_a_164_, v_a_136_, v_a_137_, v_a_138_, v_a_139_);
if (lean_obj_tag(v___x_165_) == 0)
{
lean_object* v_a_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_180_; 
v_a_166_ = lean_ctor_get(v___x_165_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_180_ == 0)
{
v___x_168_ = v___x_165_;
v_isShared_169_ = v_isSharedCheck_180_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_a_166_);
lean_dec(v___x_165_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_180_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v_induct_170_; lean_object* v___x_171_; lean_object* v___x_172_; uint8_t v___x_173_; 
v_induct_170_ = lean_ctor_get(v_a_157_, 1);
lean_inc(v_induct_170_);
lean_dec_ref(v_a_157_);
v___x_171_ = l_Lean_mkConst(v_induct_170_, v_us_155_);
v___x_172_ = l_Lean_mkAppN(v___x_171_, v_params_156_);
lean_dec_ref(v_params_156_);
v___x_173_ = lean_expr_eqv(v_a_166_, v___x_172_);
lean_dec_ref(v___x_172_);
lean_dec(v_a_166_);
if (v___x_173_ == 0)
{
lean_del_object(v___x_168_);
lean_del_object(v___x_159_);
lean_dec_ref(v_struct_150_);
goto v___jp_141_;
}
else
{
lean_object* v___x_175_; 
if (v_isShared_160_ == 0)
{
lean_ctor_set_tag(v___x_159_, 1);
lean_ctor_set(v___x_159_, 0, v_struct_150_);
v___x_175_ = v___x_159_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_struct_150_);
v___x_175_ = v_reuseFailAlloc_179_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
lean_object* v___x_177_; 
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 0, v___x_175_);
v___x_177_ = v___x_168_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
}
else
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_188_; 
lean_del_object(v___x_159_);
lean_dec_ref(v_a_157_);
lean_dec_ref(v_params_156_);
lean_dec(v_us_155_);
lean_dec_ref(v_struct_150_);
v_a_181_ = lean_ctor_get(v___x_165_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_188_ == 0)
{
v___x_183_ = v___x_165_;
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_165_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_181_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
else
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_196_; 
lean_del_object(v___x_159_);
lean_dec_ref(v_a_157_);
lean_dec_ref(v_params_156_);
lean_dec(v_us_155_);
lean_dec_ref(v_struct_150_);
v_a_189_ = lean_ctor_get(v___x_163_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_196_ == 0)
{
v___x_191_ = v___x_163_;
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_163_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_194_; 
if (v_isShared_192_ == 0)
{
v___x_194_ = v___x_191_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_a_189_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
}
}
v___jp_197_:
{
lean_object* v_induct_198_; uint8_t v___x_199_; 
v_induct_198_ = lean_ctor_get(v_a_157_, 1);
v___x_199_ = lean_name_eq(v_typeName_148_, v_induct_198_);
lean_dec(v_typeName_148_);
v___y_162_ = v___x_199_;
goto v___jp_161_;
}
}
}
else
{
lean_object* v___x_201_; lean_object* v___x_202_; 
lean_dec_ref(v_structureInfo_153_);
lean_dec_ref(v_struct_150_);
lean_dec(v_typeName_148_);
lean_dec_ref(v_b_134_);
v___x_201_ = lean_box(0);
v___x_202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
return v___x_202_;
}
}
}
else
{
lean_dec_ref(v_e_135_);
lean_dec_ref(v_b_134_);
goto v___jp_144_;
}
}
else
{
lean_object* v_x_203_; lean_object* v___x_204_; 
v_x_203_ = l_Lean_Expr_appArg_x21(v_e_135_);
lean_inc_ref(v_x_203_);
v___x_204_ = l_Lean_Meta_OneFieldStructure_Bijection_mkApp___redArg(v_b_134_, v_x_203_, v_a_139_);
if (lean_obj_tag(v___x_204_) == 0)
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_218_; 
v_a_205_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_218_ == 0)
{
v___x_207_ = v___x_204_;
v_isShared_208_ = v_isSharedCheck_218_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_204_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_218_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
uint8_t v___x_209_; 
v___x_209_ = lean_expr_eqv(v_a_205_, v_e_135_);
lean_dec_ref(v_e_135_);
lean_dec(v_a_205_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; lean_object* v___x_212_; 
lean_dec_ref(v_x_203_);
v___x_210_ = lean_box(0);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___x_210_);
v___x_212_ = v___x_207_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_210_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
else
{
lean_object* v___x_214_; lean_object* v___x_216_; 
v___x_214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_214_, 0, v_x_203_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___x_214_);
v___x_216_ = v___x_207_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v___x_214_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
else
{
lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_226_; 
lean_dec_ref(v_x_203_);
lean_dec_ref(v_e_135_);
v_a_219_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_226_ == 0)
{
v___x_221_ = v___x_204_;
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_219_);
lean_dec(v___x_204_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_224_; 
if (v_isShared_222_ == 0)
{
v___x_224_ = v___x_221_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_a_219_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
v___jp_141_:
{
lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_142_ = lean_box(0);
v___x_143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
return v___x_143_;
}
v___jp_144_:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = lean_box(0);
v___x_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_Bijection_unapply_x3f___boxed(lean_object* v_b_227_, lean_object* v_e_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_Bijection_unapply_x3f(v_b_227_, v_e_228_, v_a_229_, v_a_230_, v_a_231_, v_a_232_);
lean_dec(v_a_232_);
lean_dec_ref(v_a_231_);
lean_dec(v_a_230_);
lean_dec_ref(v_a_229_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkAppAndSimplify(lean_object* v_b_235_, lean_object* v_e_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
lean_inc_ref(v_b_235_);
v___x_242_ = l_Lean_Meta_OneFieldStructure_Bijection_inv(v_b_235_);
lean_inc_ref(v_e_236_);
v___x_243_ = l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_Bijection_unapply_x3f(v___x_242_, v_e_236_, v_a_237_, v_a_238_, v_a_239_, v_a_240_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_253_; 
v_a_244_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_253_ == 0)
{
v___x_246_ = v___x_243_;
v_isShared_247_ = v_isSharedCheck_253_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_a_244_);
lean_dec(v___x_243_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_253_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
if (lean_obj_tag(v_a_244_) == 1)
{
lean_object* v_val_248_; lean_object* v___x_250_; 
lean_dec_ref(v_e_236_);
lean_dec_ref(v_b_235_);
v_val_248_ = lean_ctor_get(v_a_244_, 0);
lean_inc(v_val_248_);
lean_dec_ref_known(v_a_244_, 1);
if (v_isShared_247_ == 0)
{
lean_ctor_set(v___x_246_, 0, v_val_248_);
v___x_250_ = v___x_246_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_val_248_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
}
}
else
{
lean_object* v___x_252_; 
lean_del_object(v___x_246_);
lean_dec(v_a_244_);
v___x_252_ = l_Lean_Meta_OneFieldStructure_Bijection_mkApp___redArg(v_b_235_, v_e_236_, v_a_240_);
return v___x_252_;
}
}
}
else
{
lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_261_; 
lean_dec_ref(v_e_236_);
lean_dec_ref(v_b_235_);
v_a_254_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_261_ == 0)
{
v___x_256_ = v___x_243_;
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_dec(v___x_243_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_a_254_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkAppAndSimplify___boxed(lean_object* v_b_262_, lean_object* v_e_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lean_Meta_OneFieldStructure_Bijection_mkAppAndSimplify(v_b_262_, v_e_263_, v_a_264_, v_a_265_, v_a_266_, v_a_267_);
lean_dec(v_a_267_);
lean_dec_ref(v_a_266_);
lean_dec(v_a_265_);
lean_dec_ref(v_a_264_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___redArg(uint8_t v_isCtor_270_, lean_object* v_structName_271_, lean_object* v_us_272_, lean_object* v_params_273_, lean_object* v_a_274_){
_start:
{
lean_object* v___x_276_; lean_object* v_env_280_; uint8_t v___x_281_; 
v___x_276_ = lean_st_ref_get(v_a_274_);
v_env_280_ = lean_ctor_get(v___x_276_, 0);
lean_inc_ref_n(v_env_280_, 2);
lean_dec(v___x_276_);
v___x_281_ = l_Lean_isClass(v_env_280_, v_structName_271_);
if (v___x_281_ == 0)
{
lean_object* v___x_282_; 
v___x_282_ = l_Lean_getNonRecStructureCtor_x3f(v_env_280_, v_structName_271_);
if (lean_obj_tag(v___x_282_) == 1)
{
lean_object* v_val_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_296_; 
v_val_283_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_296_ == 0)
{
v___x_285_ = v___x_282_;
v_isShared_286_ = v_isSharedCheck_296_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_val_283_);
lean_dec(v___x_282_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_296_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v_numFields_287_; lean_object* v___x_288_; uint8_t v___x_289_; 
v_numFields_287_ = lean_ctor_get(v_val_283_, 4);
v___x_288_ = lean_unsigned_to_nat(1u);
v___x_289_ = lean_nat_dec_eq(v_numFields_287_, v___x_288_);
if (v___x_289_ == 0)
{
lean_del_object(v___x_285_);
lean_dec(v_val_283_);
lean_dec_ref(v_params_273_);
lean_dec(v_us_272_);
goto v___jp_277_;
}
else
{
if (v___x_281_ == 0)
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_293_; 
v___x_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_290_, 0, v_val_283_);
v___x_291_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_291_, 0, v___x_290_);
lean_ctor_set(v___x_291_, 1, v_us_272_);
lean_ctor_set(v___x_291_, 2, v_params_273_);
lean_ctor_set_uint8(v___x_291_, sizeof(void*)*3, v_isCtor_270_);
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 0, v___x_291_);
v___x_293_ = v___x_285_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_291_);
v___x_293_ = v_reuseFailAlloc_295_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
lean_object* v___x_294_; 
v___x_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
return v___x_294_;
}
}
else
{
lean_del_object(v___x_285_);
lean_dec(v_val_283_);
lean_dec_ref(v_params_273_);
lean_dec(v_us_272_);
goto v___jp_277_;
}
}
}
}
else
{
lean_object* v___x_297_; lean_object* v___x_298_; 
lean_dec(v___x_282_);
lean_dec_ref(v_params_273_);
lean_dec(v_us_272_);
v___x_297_ = lean_box(0);
v___x_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
return v___x_298_;
}
}
else
{
lean_object* v___x_299_; lean_object* v___x_300_; 
lean_dec_ref(v_env_280_);
lean_dec_ref(v_params_273_);
lean_dec(v_us_272_);
lean_dec(v_structName_271_);
v___x_299_ = lean_box(0);
v___x_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
return v___x_300_;
}
v___jp_277_:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = lean_box(0);
v___x_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
return v___x_279_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___redArg___boxed(lean_object* v_isCtor_301_, lean_object* v_structName_302_, lean_object* v_us_303_, lean_object* v_params_304_, lean_object* v_a_305_, lean_object* v_a_306_){
_start:
{
uint8_t v_isCtor_boxed_307_; lean_object* v_res_308_; 
v_isCtor_boxed_307_ = lean_unbox(v_isCtor_301_);
v_res_308_ = l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___redArg(v_isCtor_boxed_307_, v_structName_302_, v_us_303_, v_params_304_, v_a_305_);
lean_dec(v_a_305_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f(uint8_t v_isCtor_309_, lean_object* v_structName_310_, lean_object* v_us_311_, lean_object* v_params_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___redArg(v_isCtor_309_, v_structName_310_, v_us_311_, v_params_312_, v_a_316_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___boxed(lean_object* v_isCtor_319_, lean_object* v_structName_320_, lean_object* v_us_321_, lean_object* v_params_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_){
_start:
{
uint8_t v_isCtor_boxed_328_; lean_object* v_res_329_; 
v_isCtor_boxed_328_ = lean_unbox(v_isCtor_319_);
v_res_329_ = l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f(v_isCtor_boxed_328_, v_structName_320_, v_us_321_, v_params_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
lean_dec(v_a_326_);
lean_dec_ref(v_a_325_);
lean_dec(v_a_324_);
lean_dec_ref(v_a_323_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___lam__0(lean_object* v_val_330_, lean_object* v_us_331_, lean_object* v_params_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_){
_start:
{
uint8_t v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_338_ = 0;
v___x_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_339_, 0, v_val_330_);
v___x_340_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_340_, 0, v___x_339_);
lean_ctor_set(v___x_340_, 1, v_us_331_);
lean_ctor_set(v___x_340_, 2, v_params_332_);
lean_ctor_set_uint8(v___x_340_, sizeof(void*)*3, v___x_338_);
v___x_341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
v___x_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___lam__0___boxed(lean_object* v_val_343_, lean_object* v_us_344_, lean_object* v_params_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___lam__0(v_val_343_, v_us_344_, v_params_345_, v___y_346_, v___y_347_, v___y_348_, v___y_349_);
lean_dec(v___y_349_);
lean_dec_ref(v___y_348_);
lean_dec(v___y_347_);
lean_dec_ref(v___y_346_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___lam__1(lean_object* v_val_352_, lean_object* v_us_353_, lean_object* v_params_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
uint8_t v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_360_ = 1;
v___x_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_361_, 0, v_val_352_);
v___x_362_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_362_, 0, v___x_361_);
lean_ctor_set(v___x_362_, 1, v_us_353_);
lean_ctor_set(v___x_362_, 2, v_params_354_);
lean_ctor_set_uint8(v___x_362_, sizeof(void*)*3, v___x_360_);
v___x_363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
v___x_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___lam__1___boxed(lean_object* v_val_365_, lean_object* v_us_366_, lean_object* v_params_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___lam__1(v_val_365_, v_us_366_, v_params_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
return v_res_373_;
}
}
static lean_object* _init_l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_374_; 
v___x_374_ = l_instMonadEIO___redArg();
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0(lean_object* v_msg_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v_toApplicative_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_448_; 
v___x_385_ = lean_obj_once(&l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__0, &l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__0);
v___x_386_ = l_StateRefT_x27_instMonad___redArg(v___x_385_);
v_toApplicative_387_ = lean_ctor_get(v___x_386_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_386_);
if (v_isSharedCheck_448_ == 0)
{
lean_object* v_unused_449_; 
v_unused_449_ = lean_ctor_get(v___x_386_, 1);
lean_dec(v_unused_449_);
v___x_389_ = v___x_386_;
v_isShared_390_ = v_isSharedCheck_448_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_toApplicative_387_);
lean_dec(v___x_386_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_448_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v_toFunctor_391_; lean_object* v_toSeq_392_; lean_object* v_toSeqLeft_393_; lean_object* v_toSeqRight_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_446_; 
v_toFunctor_391_ = lean_ctor_get(v_toApplicative_387_, 0);
v_toSeq_392_ = lean_ctor_get(v_toApplicative_387_, 2);
v_toSeqLeft_393_ = lean_ctor_get(v_toApplicative_387_, 3);
v_toSeqRight_394_ = lean_ctor_get(v_toApplicative_387_, 4);
v_isSharedCheck_446_ = !lean_is_exclusive(v_toApplicative_387_);
if (v_isSharedCheck_446_ == 0)
{
lean_object* v_unused_447_; 
v_unused_447_ = lean_ctor_get(v_toApplicative_387_, 1);
lean_dec(v_unused_447_);
v___x_396_ = v_toApplicative_387_;
v_isShared_397_ = v_isSharedCheck_446_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_toSeqRight_394_);
lean_inc(v_toSeqLeft_393_);
lean_inc(v_toSeq_392_);
lean_inc(v_toFunctor_391_);
lean_dec(v_toApplicative_387_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_446_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___f_398_; lean_object* v___f_399_; lean_object* v___f_400_; lean_object* v___f_401_; lean_object* v___x_402_; lean_object* v___f_403_; lean_object* v___f_404_; lean_object* v___f_405_; lean_object* v___x_407_; 
v___f_398_ = ((lean_object*)(l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__1));
v___f_399_ = ((lean_object*)(l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_391_);
v___f_400_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_400_, 0, v_toFunctor_391_);
v___f_401_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_401_, 0, v_toFunctor_391_);
v___x_402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_402_, 0, v___f_400_);
lean_ctor_set(v___x_402_, 1, v___f_401_);
v___f_403_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_403_, 0, v_toSeqRight_394_);
v___f_404_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_404_, 0, v_toSeqLeft_393_);
v___f_405_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_405_, 0, v_toSeq_392_);
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 4, v___f_403_);
lean_ctor_set(v___x_396_, 3, v___f_404_);
lean_ctor_set(v___x_396_, 2, v___f_405_);
lean_ctor_set(v___x_396_, 1, v___f_398_);
lean_ctor_set(v___x_396_, 0, v___x_402_);
v___x_407_ = v___x_396_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v___x_402_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v___f_398_);
lean_ctor_set(v_reuseFailAlloc_445_, 2, v___f_405_);
lean_ctor_set(v_reuseFailAlloc_445_, 3, v___f_404_);
lean_ctor_set(v_reuseFailAlloc_445_, 4, v___f_403_);
v___x_407_ = v_reuseFailAlloc_445_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
lean_object* v___x_409_; 
if (v_isShared_390_ == 0)
{
lean_ctor_set(v___x_389_, 1, v___f_399_);
lean_ctor_set(v___x_389_, 0, v___x_407_);
v___x_409_ = v___x_389_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_407_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v___f_399_);
v___x_409_ = v_reuseFailAlloc_444_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
lean_object* v___x_410_; lean_object* v_toApplicative_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_442_; 
v___x_410_ = l_StateRefT_x27_instMonad___redArg(v___x_409_);
v_toApplicative_411_ = lean_ctor_get(v___x_410_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_410_);
if (v_isSharedCheck_442_ == 0)
{
lean_object* v_unused_443_; 
v_unused_443_ = lean_ctor_get(v___x_410_, 1);
lean_dec(v_unused_443_);
v___x_413_ = v___x_410_;
v_isShared_414_ = v_isSharedCheck_442_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_toApplicative_411_);
lean_dec(v___x_410_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_442_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v_toFunctor_415_; lean_object* v_toSeq_416_; lean_object* v_toSeqLeft_417_; lean_object* v_toSeqRight_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_440_; 
v_toFunctor_415_ = lean_ctor_get(v_toApplicative_411_, 0);
v_toSeq_416_ = lean_ctor_get(v_toApplicative_411_, 2);
v_toSeqLeft_417_ = lean_ctor_get(v_toApplicative_411_, 3);
v_toSeqRight_418_ = lean_ctor_get(v_toApplicative_411_, 4);
v_isSharedCheck_440_ = !lean_is_exclusive(v_toApplicative_411_);
if (v_isSharedCheck_440_ == 0)
{
lean_object* v_unused_441_; 
v_unused_441_ = lean_ctor_get(v_toApplicative_411_, 1);
lean_dec(v_unused_441_);
v___x_420_ = v_toApplicative_411_;
v_isShared_421_ = v_isSharedCheck_440_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_toSeqRight_418_);
lean_inc(v_toSeqLeft_417_);
lean_inc(v_toSeq_416_);
lean_inc(v_toFunctor_415_);
lean_dec(v_toApplicative_411_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_440_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___f_422_; lean_object* v___f_423_; lean_object* v___f_424_; lean_object* v___f_425_; lean_object* v___x_426_; lean_object* v___f_427_; lean_object* v___f_428_; lean_object* v___f_429_; lean_object* v___x_431_; 
v___f_422_ = ((lean_object*)(l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__3));
v___f_423_ = ((lean_object*)(l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__4));
lean_inc_ref(v_toFunctor_415_);
v___f_424_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_424_, 0, v_toFunctor_415_);
v___f_425_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_425_, 0, v_toFunctor_415_);
v___x_426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_426_, 0, v___f_424_);
lean_ctor_set(v___x_426_, 1, v___f_425_);
v___f_427_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_427_, 0, v_toSeqRight_418_);
v___f_428_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_428_, 0, v_toSeqLeft_417_);
v___f_429_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_429_, 0, v_toSeq_416_);
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 4, v___f_427_);
lean_ctor_set(v___x_420_, 3, v___f_428_);
lean_ctor_set(v___x_420_, 2, v___f_429_);
lean_ctor_set(v___x_420_, 1, v___f_422_);
lean_ctor_set(v___x_420_, 0, v___x_426_);
v___x_431_ = v___x_420_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v___x_426_);
lean_ctor_set(v_reuseFailAlloc_439_, 1, v___f_422_);
lean_ctor_set(v_reuseFailAlloc_439_, 2, v___f_429_);
lean_ctor_set(v_reuseFailAlloc_439_, 3, v___f_428_);
lean_ctor_set(v_reuseFailAlloc_439_, 4, v___f_427_);
v___x_431_ = v_reuseFailAlloc_439_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
lean_object* v___x_433_; 
if (v_isShared_414_ == 0)
{
lean_ctor_set(v___x_413_, 1, v___f_423_);
lean_ctor_set(v___x_413_, 0, v___x_431_);
v___x_433_ = v___x_413_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v___x_431_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v___f_423_);
v___x_433_ = v_reuseFailAlloc_438_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_3789__overap_436_; lean_object* v___x_437_; 
v___x_434_ = lean_box(0);
v___x_435_ = l_instInhabitedOfMonad___redArg(v___x_433_, v___x_434_);
v___x_3789__overap_436_ = lean_panic_fn_borrowed(v___x_435_, v_msg_379_);
lean_dec(v___x_435_);
lean_inc(v___y_383_);
lean_inc_ref(v___y_382_);
lean_inc(v___y_381_);
lean_inc_ref(v___y_380_);
v___x_437_ = lean_apply_5(v___x_3789__overap_436_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, lean_box(0));
return v___x_437_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___boxed(lean_object* v_msg_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0(v_msg_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec(v___y_452_);
lean_dec_ref(v___y_451_);
return v_res_456_;
}
}
static lean_object* _init_l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__3(void){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_460_ = ((lean_object*)(l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__2));
v___x_461_ = lean_unsigned_to_nat(11u);
v___x_462_ = lean_unsigned_to_nat(122u);
v___x_463_ = ((lean_object*)(l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__1));
v___x_464_ = ((lean_object*)(l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__0));
v___x_465_ = l_mkPanicMessageWithDecl(v___x_464_, v___x_463_, v___x_462_, v___x_461_, v___x_460_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0(lean_object* v_constName_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v___x_472_; lean_object* v_env_476_; uint8_t v___x_477_; lean_object* v___x_478_; 
v___x_472_ = lean_st_ref_get(v___y_470_);
v_env_476_ = lean_ctor_get(v___x_472_, 0);
lean_inc_ref(v_env_476_);
lean_dec(v___x_472_);
v___x_477_ = 0;
v___x_478_ = l_Lean_Environment_findAsync_x3f(v_env_476_, v_constName_466_, v___x_477_);
if (lean_obj_tag(v___x_478_) == 1)
{
lean_object* v_val_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_498_; 
v_val_479_ = lean_ctor_get(v___x_478_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_478_);
if (v_isSharedCheck_498_ == 0)
{
v___x_481_ = v___x_478_;
v_isShared_482_ = v_isSharedCheck_498_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_val_479_);
lean_dec(v___x_478_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_498_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
uint8_t v_kind_483_; 
v_kind_483_ = lean_ctor_get_uint8(v_val_479_, sizeof(void*)*3);
if (v_kind_483_ == 6)
{
lean_object* v___x_484_; 
v___x_484_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_479_);
if (lean_obj_tag(v___x_484_) == 6)
{
lean_object* v_val_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_495_; 
v_val_485_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_495_ == 0)
{
v___x_487_ = v___x_484_;
v_isShared_488_ = v_isSharedCheck_495_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_val_485_);
lean_dec(v___x_484_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_495_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 0, v_val_485_);
v___x_490_ = v___x_481_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_val_485_);
v___x_490_ = v_reuseFailAlloc_494_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
lean_object* v___x_492_; 
if (v_isShared_488_ == 0)
{
lean_ctor_set_tag(v___x_487_, 0);
lean_ctor_set(v___x_487_, 0, v___x_490_);
v___x_492_ = v___x_487_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_490_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
else
{
lean_object* v___x_496_; lean_object* v___x_497_; 
lean_dec_ref(v___x_484_);
lean_del_object(v___x_481_);
v___x_496_ = lean_obj_once(&l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__3, &l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__3_once, _init_l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__3);
v___x_497_ = l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0(v___x_496_, v___y_467_, v___y_468_, v___y_469_, v___y_470_);
return v___x_497_;
}
}
else
{
lean_del_object(v___x_481_);
lean_dec(v_val_479_);
goto v___jp_473_;
}
}
}
else
{
lean_dec(v___x_478_);
goto v___jp_473_;
}
v___jp_473_:
{
lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_474_ = lean_box(0);
v___x_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
return v___x_475_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___boxed(lean_object* v_constName_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0(v_constName_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
return v_res_505_;
}
}
static lean_object* _init_l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0(void){
_start:
{
lean_object* v___x_506_; lean_object* v_dummy_507_; 
v___x_506_ = lean_box(0);
v_dummy_507_ = l_Lean_Expr_sort___override(v___x_506_);
return v_dummy_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f(lean_object* v_e_508_, lean_object* v_outer_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_){
_start:
{
lean_object* v_e_518_; 
v_e_518_ = l_Lean_Expr_consumeMData(v_e_508_);
lean_dec_ref(v_e_508_);
switch(lean_obj_tag(v_e_518_))
{
case 1:
{
lean_object* v_fvarId_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v_fvarId_519_ = lean_ctor_get(v_e_518_, 0);
lean_inc(v_fvarId_519_);
lean_dec_ref_known(v_e_518_, 1);
v___x_520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_520_, 0, v_fvarId_519_);
lean_ctor_set(v___x_520_, 1, v_outer_509_);
v___x_521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
v___x_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
return v___x_522_;
}
case 11:
{
lean_object* v_typeName_523_; lean_object* v_idx_524_; lean_object* v_struct_525_; lean_object* v___x_526_; uint8_t v___x_527_; 
v_typeName_523_ = lean_ctor_get(v_e_518_, 0);
lean_inc(v_typeName_523_);
v_idx_524_ = lean_ctor_get(v_e_518_, 1);
lean_inc(v_idx_524_);
v_struct_525_ = lean_ctor_get(v_e_518_, 2);
lean_inc_ref(v_struct_525_);
lean_dec_ref_known(v_e_518_, 3);
v___x_526_ = lean_unsigned_to_nat(0u);
v___x_527_ = lean_nat_dec_eq(v_idx_524_, v___x_526_);
lean_dec(v_idx_524_);
if (v___x_527_ == 0)
{
lean_dec_ref(v_struct_525_);
lean_dec(v_typeName_523_);
lean_dec(v_outer_509_);
goto v___jp_515_;
}
else
{
lean_object* v___x_528_; 
lean_inc(v_a_513_);
lean_inc_ref(v_a_512_);
lean_inc(v_a_511_);
lean_inc_ref(v_a_510_);
lean_inc_ref(v_struct_525_);
v___x_528_ = lean_infer_type(v_struct_525_, v_a_510_, v_a_511_, v_a_512_, v_a_513_);
if (lean_obj_tag(v___x_528_) == 0)
{
lean_object* v_a_529_; lean_object* v___x_530_; 
v_a_529_ = lean_ctor_get(v___x_528_, 0);
lean_inc(v_a_529_);
lean_dec_ref_known(v___x_528_, 1);
v___x_530_ = l_Lean_Meta_whnfD(v_a_529_, v_a_510_, v_a_511_, v_a_512_, v_a_513_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_569_; 
v_a_531_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_569_ == 0)
{
v___x_533_ = v___x_530_;
v_isShared_534_ = v_isSharedCheck_569_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_dec(v___x_530_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_569_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_535_; 
v___x_535_ = l_Lean_Expr_getAppFn(v_a_531_);
if (lean_obj_tag(v___x_535_) == 4)
{
lean_object* v_us_536_; uint8_t v___x_537_; lean_object* v_dummy_538_; lean_object* v_nargs_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
lean_del_object(v___x_533_);
v_us_536_ = lean_ctor_get(v___x_535_, 1);
lean_inc(v_us_536_);
lean_dec_ref_known(v___x_535_, 2);
v___x_537_ = 0;
v_dummy_538_ = lean_obj_once(&l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0, &l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0_once, _init_l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0);
v_nargs_539_ = l_Lean_Expr_getAppNumArgs(v_a_531_);
lean_inc(v_nargs_539_);
v___x_540_ = lean_mk_array(v_nargs_539_, v_dummy_538_);
v___x_541_ = lean_unsigned_to_nat(1u);
v___x_542_ = lean_nat_sub(v_nargs_539_, v___x_541_);
lean_dec(v_nargs_539_);
v___x_543_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_531_, v___x_540_, v___x_542_);
v___x_544_ = l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___redArg(v___x_537_, v_typeName_523_, v_us_536_, v___x_543_, v_a_513_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_556_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_556_ == 0)
{
v___x_547_ = v___x_544_;
v_isShared_548_ = v_isSharedCheck_556_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_a_545_);
lean_dec(v___x_544_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_556_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
if (lean_obj_tag(v_a_545_) == 1)
{
lean_object* v_val_549_; lean_object* v___x_550_; 
lean_del_object(v___x_547_);
v_val_549_ = lean_ctor_get(v_a_545_, 0);
lean_inc(v_val_549_);
lean_dec_ref_known(v_a_545_, 1);
v___x_550_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_550_, 0, v_val_549_);
lean_ctor_set(v___x_550_, 1, v_outer_509_);
v_e_508_ = v_struct_525_;
v_outer_509_ = v___x_550_;
goto _start;
}
else
{
lean_object* v___x_552_; lean_object* v___x_554_; 
lean_dec(v_a_545_);
lean_dec_ref(v_struct_525_);
lean_dec(v_outer_509_);
v___x_552_ = lean_box(0);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v___x_552_);
v___x_554_ = v___x_547_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v___x_552_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec_ref(v_struct_525_);
lean_dec(v_outer_509_);
v_a_557_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_544_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_544_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
else
{
lean_object* v___x_565_; lean_object* v___x_567_; 
lean_dec_ref(v___x_535_);
lean_dec(v_a_531_);
lean_dec_ref(v_struct_525_);
lean_dec(v_typeName_523_);
lean_dec(v_outer_509_);
v___x_565_ = lean_box(0);
if (v_isShared_534_ == 0)
{
lean_ctor_set(v___x_533_, 0, v___x_565_);
v___x_567_ = v___x_533_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v___x_565_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
}
else
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
lean_dec_ref(v_struct_525_);
lean_dec(v_typeName_523_);
lean_dec(v_outer_509_);
v_a_570_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___x_530_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_530_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
if (v_isShared_573_ == 0)
{
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_a_570_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
}
else
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_585_; 
lean_dec_ref(v_struct_525_);
lean_dec(v_typeName_523_);
lean_dec(v_outer_509_);
v_a_578_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_585_ == 0)
{
v___x_580_ = v___x_528_;
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_528_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_583_; 
if (v_isShared_581_ == 0)
{
v___x_583_ = v___x_580_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_a_578_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
}
}
case 5:
{
lean_object* v___x_586_; 
v___x_586_ = l_Lean_Expr_getAppFn(v_e_518_);
if (lean_obj_tag(v___x_586_) == 4)
{
lean_object* v_declName_587_; lean_object* v_us_588_; lean_object* v___x_589_; lean_object* v_dummy_590_; lean_object* v_nargs_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v_args_595_; lean_object* v_numParams_597_; lean_object* v_mkBijection_x3f_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; lean_object* v___y_602_; lean_object* v___x_632_; lean_object* v_env_633_; lean_object* v___x_634_; 
v_declName_587_ = lean_ctor_get(v___x_586_, 0);
lean_inc_n(v_declName_587_, 2);
v_us_588_ = lean_ctor_get(v___x_586_, 1);
lean_inc(v_us_588_);
lean_dec_ref_known(v___x_586_, 2);
v___x_589_ = l_Lean_instInhabitedExpr;
v_dummy_590_ = lean_obj_once(&l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0, &l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0_once, _init_l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0);
v_nargs_591_ = l_Lean_Expr_getAppNumArgs(v_e_518_);
lean_inc(v_nargs_591_);
v___x_592_ = lean_mk_array(v_nargs_591_, v_dummy_590_);
v___x_593_ = lean_unsigned_to_nat(1u);
v___x_594_ = lean_nat_sub(v_nargs_591_, v___x_593_);
lean_dec(v_nargs_591_);
v_args_595_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_518_, v___x_592_, v___x_594_);
v___x_632_ = lean_st_ref_get(v_a_513_);
v_env_633_ = lean_ctor_get(v___x_632_, 0);
lean_inc_ref(v_env_633_);
lean_dec(v___x_632_);
v___x_634_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_633_, v_declName_587_);
if (lean_obj_tag(v___x_634_) == 1)
{
lean_object* v_val_635_; lean_object* v_ctorName_636_; lean_object* v___x_637_; 
lean_dec(v_declName_587_);
v_val_635_ = lean_ctor_get(v___x_634_, 0);
lean_inc(v_val_635_);
lean_dec_ref_known(v___x_634_, 1);
v_ctorName_636_ = lean_ctor_get(v_val_635_, 0);
lean_inc(v_ctorName_636_);
lean_dec(v_val_635_);
v___x_637_ = l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0(v_ctorName_636_, v_a_510_, v_a_511_, v_a_512_, v_a_513_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_652_; 
v_a_638_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_652_ == 0)
{
v___x_640_ = v___x_637_;
v_isShared_641_ = v_isSharedCheck_652_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___x_637_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_652_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
if (lean_obj_tag(v_a_638_) == 1)
{
lean_object* v_val_642_; lean_object* v_induct_643_; lean_object* v_numParams_644_; uint8_t v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
lean_del_object(v___x_640_);
v_val_642_ = lean_ctor_get(v_a_638_, 0);
lean_inc(v_val_642_);
lean_dec_ref_known(v_a_638_, 1);
v_induct_643_ = lean_ctor_get(v_val_642_, 1);
lean_inc(v_induct_643_);
v_numParams_644_ = lean_ctor_get(v_val_642_, 3);
lean_inc(v_numParams_644_);
lean_dec(v_val_642_);
v___x_645_ = 0;
v___x_646_ = lean_box(v___x_645_);
v___x_647_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___boxed), 9, 3);
lean_closure_set(v___x_647_, 0, v___x_646_);
lean_closure_set(v___x_647_, 1, v_induct_643_);
lean_closure_set(v___x_647_, 2, v_us_588_);
v_numParams_597_ = v_numParams_644_;
v_mkBijection_x3f_598_ = v___x_647_;
v___y_599_ = v_a_510_;
v___y_600_ = v_a_511_;
v___y_601_ = v_a_512_;
v___y_602_ = v_a_513_;
goto v___jp_596_;
}
else
{
lean_object* v___x_648_; lean_object* v___x_650_; 
lean_dec(v_a_638_);
lean_dec_ref(v_args_595_);
lean_dec(v_us_588_);
lean_dec(v_outer_509_);
v___x_648_ = lean_box(0);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 0, v___x_648_);
v___x_650_ = v___x_640_;
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
lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_660_; 
lean_dec_ref(v_args_595_);
lean_dec(v_us_588_);
lean_dec(v_outer_509_);
v_a_653_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_660_ == 0)
{
v___x_655_ = v___x_637_;
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v___x_637_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_658_; 
if (v_isShared_656_ == 0)
{
v___x_658_ = v___x_655_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_653_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
else
{
lean_object* v___x_661_; 
lean_dec(v___x_634_);
lean_inc(v_declName_587_);
v___x_661_ = l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0(v_declName_587_, v_a_510_, v_a_511_, v_a_512_, v_a_513_);
if (lean_obj_tag(v___x_661_) == 0)
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_688_; 
v_a_662_ = lean_ctor_get(v___x_661_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_688_ == 0)
{
v___x_664_ = v___x_661_;
v_isShared_665_ = v_isSharedCheck_688_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_661_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_688_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
if (lean_obj_tag(v_a_662_) == 1)
{
lean_object* v_val_666_; lean_object* v_induct_667_; lean_object* v_numParams_668_; uint8_t v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
lean_del_object(v___x_664_);
lean_dec(v_declName_587_);
v_val_666_ = lean_ctor_get(v_a_662_, 0);
lean_inc(v_val_666_);
lean_dec_ref_known(v_a_662_, 1);
v_induct_667_ = lean_ctor_get(v_val_666_, 1);
lean_inc(v_induct_667_);
v_numParams_668_ = lean_ctor_get(v_val_666_, 3);
lean_inc(v_numParams_668_);
lean_dec(v_val_666_);
v___x_669_ = 1;
v___x_670_ = lean_box(v___x_669_);
v___x_671_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___boxed), 9, 3);
lean_closure_set(v___x_671_, 0, v___x_670_);
lean_closure_set(v___x_671_, 1, v_induct_667_);
lean_closure_set(v___x_671_, 2, v_us_588_);
v_numParams_597_ = v_numParams_668_;
v_mkBijection_x3f_598_ = v___x_671_;
v___y_599_ = v_a_510_;
v___y_600_ = v_a_511_;
v___y_601_ = v_a_512_;
v___y_602_ = v_a_513_;
goto v___jp_596_;
}
else
{
lean_object* v___x_672_; lean_object* v_env_673_; lean_object* v___x_674_; 
lean_dec(v_a_662_);
v___x_672_ = lean_st_ref_get(v_a_513_);
v_env_673_ = lean_ctor_get(v___x_672_, 0);
lean_inc_ref(v_env_673_);
lean_dec(v___x_672_);
lean_inc(v_declName_587_);
v___x_674_ = l_Lean_Environment_getVirtualProjInfo_x3f(v_env_673_, v_declName_587_);
if (lean_obj_tag(v___x_674_) == 1)
{
lean_object* v_val_675_; lean_object* v_numParams_676_; lean_object* v___f_677_; 
lean_del_object(v___x_664_);
lean_dec(v_declName_587_);
v_val_675_ = lean_ctor_get(v___x_674_, 0);
lean_inc(v_val_675_);
lean_dec_ref_known(v___x_674_, 1);
v_numParams_676_ = lean_ctor_get(v_val_675_, 3);
lean_inc(v_numParams_676_);
v___f_677_ = lean_alloc_closure((void*)(l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___lam__0___boxed), 8, 2);
lean_closure_set(v___f_677_, 0, v_val_675_);
lean_closure_set(v___f_677_, 1, v_us_588_);
v_numParams_597_ = v_numParams_676_;
v_mkBijection_x3f_598_ = v___f_677_;
v___y_599_ = v_a_510_;
v___y_600_ = v_a_511_;
v___y_601_ = v_a_512_;
v___y_602_ = v_a_513_;
goto v___jp_596_;
}
else
{
lean_object* v___x_678_; lean_object* v_env_679_; lean_object* v___x_680_; 
lean_dec(v___x_674_);
v___x_678_ = lean_st_ref_get(v_a_513_);
v_env_679_ = lean_ctor_get(v___x_678_, 0);
lean_inc_ref(v_env_679_);
lean_dec(v___x_678_);
v___x_680_ = l_Lean_Environment_getVirtualCtorInfo_x3f(v_env_679_, v_declName_587_);
if (lean_obj_tag(v___x_680_) == 1)
{
lean_object* v_val_681_; lean_object* v_numParams_682_; lean_object* v___f_683_; 
lean_del_object(v___x_664_);
v_val_681_ = lean_ctor_get(v___x_680_, 0);
lean_inc(v_val_681_);
lean_dec_ref_known(v___x_680_, 1);
v_numParams_682_ = lean_ctor_get(v_val_681_, 3);
lean_inc(v_numParams_682_);
v___f_683_ = lean_alloc_closure((void*)(l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___lam__1___boxed), 8, 2);
lean_closure_set(v___f_683_, 0, v_val_681_);
lean_closure_set(v___f_683_, 1, v_us_588_);
v_numParams_597_ = v_numParams_682_;
v_mkBijection_x3f_598_ = v___f_683_;
v___y_599_ = v_a_510_;
v___y_600_ = v_a_511_;
v___y_601_ = v_a_512_;
v___y_602_ = v_a_513_;
goto v___jp_596_;
}
else
{
lean_object* v___x_684_; lean_object* v___x_686_; 
lean_dec(v___x_680_);
lean_dec_ref(v_args_595_);
lean_dec(v_us_588_);
lean_dec(v_outer_509_);
v___x_684_ = lean_box(0);
if (v_isShared_665_ == 0)
{
lean_ctor_set(v___x_664_, 0, v___x_684_);
v___x_686_ = v___x_664_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v___x_684_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
}
}
}
else
{
lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_696_; 
lean_dec_ref(v_args_595_);
lean_dec(v_us_588_);
lean_dec(v_declName_587_);
lean_dec(v_outer_509_);
v_a_689_ = lean_ctor_get(v___x_661_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_696_ == 0)
{
v___x_691_ = v___x_661_;
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___x_661_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_692_ == 0)
{
v___x_694_ = v___x_691_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_a_689_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
v___jp_596_:
{
lean_object* v___x_603_; lean_object* v___x_604_; uint8_t v___x_605_; 
v___x_603_ = lean_array_get_size(v_args_595_);
v___x_604_ = lean_nat_add(v_numParams_597_, v___x_593_);
v___x_605_ = lean_nat_dec_eq(v___x_603_, v___x_604_);
lean_dec(v___x_604_);
if (v___x_605_ == 0)
{
lean_object* v___x_606_; lean_object* v___x_607_; 
lean_dec_ref(v_mkBijection_x3f_598_);
lean_dec(v_numParams_597_);
lean_dec_ref(v_args_595_);
lean_dec(v_outer_509_);
v___x_606_ = lean_box(0);
v___x_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_607_, 0, v___x_606_);
return v___x_607_;
}
else
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_608_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_597_);
v___x_609_ = l_Array_extract___redArg(v_args_595_, v___x_608_, v_numParams_597_);
lean_inc(v___y_602_);
lean_inc_ref(v___y_601_);
lean_inc(v___y_600_);
lean_inc_ref(v___y_599_);
v___x_610_ = lean_apply_6(v_mkBijection_x3f_598_, v___x_609_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, lean_box(0));
if (lean_obj_tag(v___x_610_) == 0)
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_623_; 
v_a_611_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_623_ == 0)
{
v___x_613_ = v___x_610_;
v_isShared_614_ = v_isSharedCheck_623_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_610_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_623_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
if (lean_obj_tag(v_a_611_) == 1)
{
lean_object* v_val_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
lean_del_object(v___x_613_);
v_val_615_ = lean_ctor_get(v_a_611_, 0);
lean_inc(v_val_615_);
lean_dec_ref_known(v_a_611_, 1);
v___x_616_ = lean_array_get(v___x_589_, v_args_595_, v_numParams_597_);
lean_dec(v_numParams_597_);
lean_dec_ref(v_args_595_);
v___x_617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_617_, 0, v_val_615_);
lean_ctor_set(v___x_617_, 1, v_outer_509_);
v_e_508_ = v___x_616_;
v_outer_509_ = v___x_617_;
v_a_510_ = v___y_599_;
v_a_511_ = v___y_600_;
v_a_512_ = v___y_601_;
v_a_513_ = v___y_602_;
goto _start;
}
else
{
lean_object* v___x_619_; lean_object* v___x_621_; 
lean_dec(v_a_611_);
lean_dec(v_numParams_597_);
lean_dec_ref(v_args_595_);
lean_dec(v_outer_509_);
v___x_619_ = lean_box(0);
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 0, v___x_619_);
v___x_621_ = v___x_613_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_619_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
}
else
{
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_631_; 
lean_dec(v_numParams_597_);
lean_dec_ref(v_args_595_);
lean_dec(v_outer_509_);
v_a_624_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_631_ == 0)
{
v___x_626_ = v___x_610_;
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_610_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_629_; 
if (v_isShared_627_ == 0)
{
v___x_629_ = v___x_626_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_a_624_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
}
}
}
else
{
lean_object* v___x_697_; lean_object* v___x_698_; 
lean_dec_ref_known(v_e_518_, 2);
lean_dec_ref(v___x_586_);
lean_dec(v_outer_509_);
v___x_697_ = lean_box(0);
v___x_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
return v___x_698_;
}
}
default: 
{
lean_dec_ref(v_e_518_);
lean_dec(v_outer_509_);
goto v___jp_515_;
}
}
v___jp_515_:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = lean_box(0);
v___x_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
return v___x_517_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___boxed(lean_object* v_e_699_, lean_object* v_outer_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f(v_e_699_, v_outer_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_);
lean_dec(v_a_704_);
lean_dec_ref(v_a_703_);
lean_dec(v_a_702_);
lean_dec_ref(v_a_701_);
return v_res_706_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_VirtualStructure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* runtime_initialize_Lean_Structure(uint8_t builtin);
lean_object* runtime_initialize_Lean_ProjFns(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_OneFieldStructure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_VirtualStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_OneFieldStructure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_VirtualStructure(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* initialize_Lean_Structure(uint8_t builtin);
lean_object* initialize_Lean_ProjFns(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_OneFieldStructure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_VirtualStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_OneFieldStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_OneFieldStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_OneFieldStructure(builtin);
}
#ifdef __cplusplus
}
#endif
