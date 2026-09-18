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
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_Bijection_unapply_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_Bijection_unapply_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkAppAndSimplify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkAppAndSimplify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkApp(lean_object* v_b_122_, lean_object* v_e_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = l_Lean_Meta_OneFieldStructure_Bijection_mkApp___redArg(v_b_122_, v_e_123_, v_a_127_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkApp___boxed(lean_object* v_b_130_, lean_object* v_e_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lean_Meta_OneFieldStructure_Bijection_mkApp(v_b_130_, v_e_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_);
lean_dec(v_a_135_);
lean_dec_ref(v_a_134_);
lean_dec(v_a_133_);
lean_dec_ref(v_a_132_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_Bijection_unapply_x3f(lean_object* v_b_138_, lean_object* v_e_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_){
_start:
{
uint8_t v___x_151_; 
v___x_151_ = l_Lean_Expr_isApp(v_e_139_);
if (v___x_151_ == 0)
{
if (lean_obj_tag(v_e_139_) == 11)
{
lean_object* v_typeName_152_; lean_object* v_idx_153_; lean_object* v_struct_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v_typeName_152_ = lean_ctor_get(v_e_139_, 0);
lean_inc(v_typeName_152_);
v_idx_153_ = lean_ctor_get(v_e_139_, 1);
lean_inc(v_idx_153_);
v_struct_154_ = lean_ctor_get(v_e_139_, 2);
lean_inc_ref(v_struct_154_);
lean_dec_ref_known(v_e_139_, 3);
v___x_155_ = lean_unsigned_to_nat(0u);
v___x_156_ = lean_nat_dec_eq(v_idx_153_, v___x_155_);
lean_dec(v_idx_153_);
if (v___x_156_ == 0)
{
lean_dec_ref(v_struct_154_);
lean_dec(v_typeName_152_);
lean_dec_ref(v_b_138_);
goto v___jp_148_;
}
else
{
lean_object* v_structureInfo_157_; 
v_structureInfo_157_ = lean_ctor_get(v_b_138_, 0);
lean_inc_ref(v_structureInfo_157_);
if (lean_obj_tag(v_structureInfo_157_) == 0)
{
uint8_t v_isCtor_158_; lean_object* v_us_159_; lean_object* v_params_160_; lean_object* v_a_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_204_; 
v_isCtor_158_ = lean_ctor_get_uint8(v_b_138_, sizeof(void*)*3);
v_us_159_ = lean_ctor_get(v_b_138_, 1);
lean_inc(v_us_159_);
v_params_160_ = lean_ctor_get(v_b_138_, 2);
lean_inc_ref(v_params_160_);
lean_dec_ref(v_b_138_);
v_a_161_ = lean_ctor_get(v_structureInfo_157_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v_structureInfo_157_);
if (v_isSharedCheck_204_ == 0)
{
v___x_163_ = v_structureInfo_157_;
v_isShared_164_ = v_isSharedCheck_204_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_a_161_);
lean_dec(v_structureInfo_157_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_204_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
uint8_t v___y_166_; 
if (v_isCtor_158_ == 0)
{
goto v___jp_201_;
}
else
{
if (v___x_151_ == 0)
{
lean_dec(v_typeName_152_);
v___y_166_ = v___x_151_;
goto v___jp_165_;
}
else
{
goto v___jp_201_;
}
}
v___jp_165_:
{
if (v___y_166_ == 0)
{
lean_del_object(v___x_163_);
lean_dec_ref(v_a_161_);
lean_dec_ref(v_params_160_);
lean_dec(v_us_159_);
lean_dec_ref(v_struct_154_);
goto v___jp_145_;
}
else
{
lean_object* v___x_167_; 
lean_inc(v_a_143_);
lean_inc_ref(v_a_142_);
lean_inc(v_a_141_);
lean_inc_ref(v_a_140_);
lean_inc_ref(v_struct_154_);
v___x_167_ = lean_infer_type(v_struct_154_, v_a_140_, v_a_141_, v_a_142_, v_a_143_);
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v_a_168_; lean_object* v___x_169_; 
v_a_168_ = lean_ctor_get(v___x_167_, 0);
lean_inc(v_a_168_);
lean_dec_ref_known(v___x_167_, 1);
v___x_169_ = l_Lean_Meta_whnfD(v_a_168_, v_a_140_, v_a_141_, v_a_142_, v_a_143_);
if (lean_obj_tag(v___x_169_) == 0)
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_184_; 
v_a_170_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_184_ == 0)
{
v___x_172_ = v___x_169_;
v_isShared_173_ = v_isSharedCheck_184_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_169_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_184_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v_induct_174_; lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; 
v_induct_174_ = lean_ctor_get(v_a_161_, 1);
lean_inc(v_induct_174_);
lean_dec_ref(v_a_161_);
v___x_175_ = l_Lean_mkConst(v_induct_174_, v_us_159_);
v___x_176_ = l_Lean_mkAppN(v___x_175_, v_params_160_);
lean_dec_ref(v_params_160_);
v___x_177_ = lean_expr_eqv(v_a_170_, v___x_176_);
lean_dec_ref(v___x_176_);
lean_dec(v_a_170_);
if (v___x_177_ == 0)
{
lean_del_object(v___x_172_);
lean_del_object(v___x_163_);
lean_dec_ref(v_struct_154_);
goto v___jp_145_;
}
else
{
lean_object* v___x_179_; 
if (v_isShared_164_ == 0)
{
lean_ctor_set_tag(v___x_163_, 1);
lean_ctor_set(v___x_163_, 0, v_struct_154_);
v___x_179_ = v___x_163_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_struct_154_);
v___x_179_ = v_reuseFailAlloc_183_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
lean_object* v___x_181_; 
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 0, v___x_179_);
v___x_181_ = v___x_172_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v___x_179_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
return v___x_181_;
}
}
}
}
}
else
{
lean_object* v_a_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_192_; 
lean_del_object(v___x_163_);
lean_dec_ref(v_a_161_);
lean_dec_ref(v_params_160_);
lean_dec(v_us_159_);
lean_dec_ref(v_struct_154_);
v_a_185_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_192_ == 0)
{
v___x_187_ = v___x_169_;
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_a_185_);
lean_dec(v___x_169_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_190_; 
if (v_isShared_188_ == 0)
{
v___x_190_ = v___x_187_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v_a_185_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
return v___x_190_;
}
}
}
}
else
{
lean_object* v_a_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_200_; 
lean_del_object(v___x_163_);
lean_dec_ref(v_a_161_);
lean_dec_ref(v_params_160_);
lean_dec(v_us_159_);
lean_dec_ref(v_struct_154_);
v_a_193_ = lean_ctor_get(v___x_167_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_200_ == 0)
{
v___x_195_ = v___x_167_;
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_a_193_);
lean_dec(v___x_167_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_198_; 
if (v_isShared_196_ == 0)
{
v___x_198_ = v___x_195_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_a_193_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
}
}
v___jp_201_:
{
lean_object* v_induct_202_; uint8_t v___x_203_; 
v_induct_202_ = lean_ctor_get(v_a_161_, 1);
v___x_203_ = lean_name_eq(v_typeName_152_, v_induct_202_);
lean_dec(v_typeName_152_);
v___y_166_ = v___x_203_;
goto v___jp_165_;
}
}
}
else
{
lean_object* v___x_205_; lean_object* v___x_206_; 
lean_dec_ref(v_structureInfo_157_);
lean_dec_ref(v_struct_154_);
lean_dec(v_typeName_152_);
lean_dec_ref(v_b_138_);
v___x_205_ = lean_box(0);
v___x_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
return v___x_206_;
}
}
}
else
{
lean_dec_ref(v_e_139_);
lean_dec_ref(v_b_138_);
goto v___jp_148_;
}
}
else
{
lean_object* v_x_207_; lean_object* v___x_208_; 
v_x_207_ = l_Lean_Expr_appArg_x21(v_e_139_);
lean_inc_ref(v_x_207_);
v___x_208_ = l_Lean_Meta_OneFieldStructure_Bijection_mkApp___redArg(v_b_138_, v_x_207_, v_a_143_);
if (lean_obj_tag(v___x_208_) == 0)
{
lean_object* v_a_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_222_; 
v_a_209_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_222_ == 0)
{
v___x_211_ = v___x_208_;
v_isShared_212_ = v_isSharedCheck_222_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_a_209_);
lean_dec(v___x_208_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_222_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
uint8_t v___x_213_; 
v___x_213_ = lean_expr_eqv(v_a_209_, v_e_139_);
lean_dec_ref(v_e_139_);
lean_dec(v_a_209_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; lean_object* v___x_216_; 
lean_dec_ref(v_x_207_);
v___x_214_ = lean_box(0);
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 0, v___x_214_);
v___x_216_ = v___x_211_;
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
else
{
lean_object* v___x_218_; lean_object* v___x_220_; 
v___x_218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_218_, 0, v_x_207_);
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 0, v___x_218_);
v___x_220_ = v___x_211_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_218_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
else
{
lean_object* v_a_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_230_; 
lean_dec_ref(v_x_207_);
lean_dec_ref(v_e_139_);
v_a_223_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_230_ == 0)
{
v___x_225_ = v___x_208_;
v_isShared_226_ = v_isSharedCheck_230_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_a_223_);
lean_dec(v___x_208_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_230_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v___x_228_; 
if (v_isShared_226_ == 0)
{
v___x_228_ = v___x_225_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v_a_223_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
}
}
v___jp_145_:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = lean_box(0);
v___x_147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
return v___x_147_;
}
v___jp_148_:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_box(0);
v___x_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
return v___x_150_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_Bijection_unapply_x3f___boxed(lean_object* v_b_231_, lean_object* v_e_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_Bijection_unapply_x3f(v_b_231_, v_e_232_, v_a_233_, v_a_234_, v_a_235_, v_a_236_);
lean_dec(v_a_236_);
lean_dec_ref(v_a_235_);
lean_dec(v_a_234_);
lean_dec_ref(v_a_233_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkAppAndSimplify(lean_object* v_b_239_, lean_object* v_e_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; 
lean_inc_ref(v_b_239_);
v___x_246_ = l_Lean_Meta_OneFieldStructure_Bijection_inv(v_b_239_);
lean_inc_ref(v_e_240_);
v___x_247_ = l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_Bijection_unapply_x3f(v___x_246_, v_e_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_257_; 
v_a_248_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_257_ == 0)
{
v___x_250_ = v___x_247_;
v_isShared_251_ = v_isSharedCheck_257_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_247_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_257_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
if (lean_obj_tag(v_a_248_) == 1)
{
lean_object* v_val_252_; lean_object* v___x_254_; 
lean_dec_ref(v_e_240_);
lean_dec_ref(v_b_239_);
v_val_252_ = lean_ctor_get(v_a_248_, 0);
lean_inc(v_val_252_);
lean_dec_ref_known(v_a_248_, 1);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 0, v_val_252_);
v___x_254_ = v___x_250_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_val_252_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
else
{
lean_object* v___x_256_; 
lean_del_object(v___x_250_);
lean_dec(v_a_248_);
v___x_256_ = l_Lean_Meta_OneFieldStructure_Bijection_mkApp___redArg(v_b_239_, v_e_240_, v_a_244_);
return v___x_256_;
}
}
}
else
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
lean_dec_ref(v_e_240_);
lean_dec_ref(v_b_239_);
v_a_258_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v___x_247_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_247_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_258_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_Bijection_mkAppAndSimplify___boxed(lean_object* v_b_266_, lean_object* v_e_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l_Lean_Meta_OneFieldStructure_Bijection_mkAppAndSimplify(v_b_266_, v_e_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
lean_dec(v_a_271_);
lean_dec_ref(v_a_270_);
lean_dec(v_a_269_);
lean_dec_ref(v_a_268_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___redArg(uint8_t v_isCtor_274_, lean_object* v_structName_275_, lean_object* v_us_276_, lean_object* v_params_277_, lean_object* v_a_278_){
_start:
{
lean_object* v___x_280_; lean_object* v_env_281_; lean_object* v___x_282_; 
v___x_280_ = lean_st_ref_get(v_a_278_);
v_env_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc_ref(v_env_281_);
lean_dec(v___x_280_);
v___x_282_ = l_Lean_getNonRecStructureCtor_x3f(v_env_281_, v_structName_275_);
if (lean_obj_tag(v___x_282_) == 1)
{
lean_object* v_val_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_298_; 
v_val_283_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_298_ == 0)
{
v___x_285_ = v___x_282_;
v_isShared_286_ = v_isSharedCheck_298_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_val_283_);
lean_dec(v___x_282_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_298_;
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
lean_object* v___x_290_; lean_object* v___x_291_; 
lean_del_object(v___x_285_);
lean_dec(v_val_283_);
lean_dec_ref(v_params_277_);
lean_dec(v_us_276_);
v___x_290_ = lean_box(0);
v___x_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
return v___x_291_;
}
else
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_295_; 
v___x_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_292_, 0, v_val_283_);
v___x_293_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v_us_276_);
lean_ctor_set(v___x_293_, 2, v_params_277_);
lean_ctor_set_uint8(v___x_293_, sizeof(void*)*3, v_isCtor_274_);
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 0, v___x_293_);
v___x_295_ = v___x_285_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v___x_293_);
v___x_295_ = v_reuseFailAlloc_297_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
lean_object* v___x_296_; 
v___x_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
return v___x_296_;
}
}
}
}
else
{
lean_object* v___x_299_; lean_object* v___x_300_; 
lean_dec(v___x_282_);
lean_dec_ref(v_params_277_);
lean_dec(v_us_276_);
v___x_299_ = lean_box(0);
v___x_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
return v___x_300_;
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
static lean_object* _init_l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = l_instMonadEIO___redArg();
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0(lean_object* v_msg_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v_toApplicative_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_404_; 
v___x_341_ = lean_obj_once(&l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__0, &l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__0);
v___x_342_ = l_StateRefT_x27_instMonad___redArg(v___x_341_);
v_toApplicative_343_ = lean_ctor_get(v___x_342_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_342_);
if (v_isSharedCheck_404_ == 0)
{
lean_object* v_unused_405_; 
v_unused_405_ = lean_ctor_get(v___x_342_, 1);
lean_dec(v_unused_405_);
v___x_345_ = v___x_342_;
v_isShared_346_ = v_isSharedCheck_404_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_toApplicative_343_);
lean_dec(v___x_342_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_404_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v_toFunctor_347_; lean_object* v_toSeq_348_; lean_object* v_toSeqLeft_349_; lean_object* v_toSeqRight_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_402_; 
v_toFunctor_347_ = lean_ctor_get(v_toApplicative_343_, 0);
v_toSeq_348_ = lean_ctor_get(v_toApplicative_343_, 2);
v_toSeqLeft_349_ = lean_ctor_get(v_toApplicative_343_, 3);
v_toSeqRight_350_ = lean_ctor_get(v_toApplicative_343_, 4);
v_isSharedCheck_402_ = !lean_is_exclusive(v_toApplicative_343_);
if (v_isSharedCheck_402_ == 0)
{
lean_object* v_unused_403_; 
v_unused_403_ = lean_ctor_get(v_toApplicative_343_, 1);
lean_dec(v_unused_403_);
v___x_352_ = v_toApplicative_343_;
v_isShared_353_ = v_isSharedCheck_402_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_toSeqRight_350_);
lean_inc(v_toSeqLeft_349_);
lean_inc(v_toSeq_348_);
lean_inc(v_toFunctor_347_);
lean_dec(v_toApplicative_343_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_402_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___f_354_; lean_object* v___f_355_; lean_object* v___f_356_; lean_object* v___f_357_; lean_object* v___x_358_; lean_object* v___f_359_; lean_object* v___f_360_; lean_object* v___f_361_; lean_object* v___x_363_; 
v___f_354_ = ((lean_object*)(l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__1));
v___f_355_ = ((lean_object*)(l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_347_);
v___f_356_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_356_, 0, v_toFunctor_347_);
v___f_357_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_357_, 0, v_toFunctor_347_);
v___x_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_358_, 0, v___f_356_);
lean_ctor_set(v___x_358_, 1, v___f_357_);
v___f_359_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_359_, 0, v_toSeqRight_350_);
v___f_360_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_360_, 0, v_toSeqLeft_349_);
v___f_361_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_361_, 0, v_toSeq_348_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 4, v___f_359_);
lean_ctor_set(v___x_352_, 3, v___f_360_);
lean_ctor_set(v___x_352_, 2, v___f_361_);
lean_ctor_set(v___x_352_, 1, v___f_354_);
lean_ctor_set(v___x_352_, 0, v___x_358_);
v___x_363_ = v___x_352_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v___x_358_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v___f_354_);
lean_ctor_set(v_reuseFailAlloc_401_, 2, v___f_361_);
lean_ctor_set(v_reuseFailAlloc_401_, 3, v___f_360_);
lean_ctor_set(v_reuseFailAlloc_401_, 4, v___f_359_);
v___x_363_ = v_reuseFailAlloc_401_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
lean_object* v___x_365_; 
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 1, v___f_355_);
lean_ctor_set(v___x_345_, 0, v___x_363_);
v___x_365_ = v___x_345_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v___x_363_);
lean_ctor_set(v_reuseFailAlloc_400_, 1, v___f_355_);
v___x_365_ = v_reuseFailAlloc_400_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
lean_object* v___x_366_; lean_object* v_toApplicative_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_398_; 
v___x_366_ = l_StateRefT_x27_instMonad___redArg(v___x_365_);
v_toApplicative_367_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_398_ == 0)
{
lean_object* v_unused_399_; 
v_unused_399_ = lean_ctor_get(v___x_366_, 1);
lean_dec(v_unused_399_);
v___x_369_ = v___x_366_;
v_isShared_370_ = v_isSharedCheck_398_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_toApplicative_367_);
lean_dec(v___x_366_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_398_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v_toFunctor_371_; lean_object* v_toSeq_372_; lean_object* v_toSeqLeft_373_; lean_object* v_toSeqRight_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_396_; 
v_toFunctor_371_ = lean_ctor_get(v_toApplicative_367_, 0);
v_toSeq_372_ = lean_ctor_get(v_toApplicative_367_, 2);
v_toSeqLeft_373_ = lean_ctor_get(v_toApplicative_367_, 3);
v_toSeqRight_374_ = lean_ctor_get(v_toApplicative_367_, 4);
v_isSharedCheck_396_ = !lean_is_exclusive(v_toApplicative_367_);
if (v_isSharedCheck_396_ == 0)
{
lean_object* v_unused_397_; 
v_unused_397_ = lean_ctor_get(v_toApplicative_367_, 1);
lean_dec(v_unused_397_);
v___x_376_ = v_toApplicative_367_;
v_isShared_377_ = v_isSharedCheck_396_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_toSeqRight_374_);
lean_inc(v_toSeqLeft_373_);
lean_inc(v_toSeq_372_);
lean_inc(v_toFunctor_371_);
lean_dec(v_toApplicative_367_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_396_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___f_378_; lean_object* v___f_379_; lean_object* v___f_380_; lean_object* v___f_381_; lean_object* v___x_382_; lean_object* v___f_383_; lean_object* v___f_384_; lean_object* v___f_385_; lean_object* v___x_387_; 
v___f_378_ = ((lean_object*)(l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__3));
v___f_379_ = ((lean_object*)(l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___closed__4));
lean_inc_ref(v_toFunctor_371_);
v___f_380_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_380_, 0, v_toFunctor_371_);
v___f_381_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_381_, 0, v_toFunctor_371_);
v___x_382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_382_, 0, v___f_380_);
lean_ctor_set(v___x_382_, 1, v___f_381_);
v___f_383_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_383_, 0, v_toSeqRight_374_);
v___f_384_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_384_, 0, v_toSeqLeft_373_);
v___f_385_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_385_, 0, v_toSeq_372_);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 4, v___f_383_);
lean_ctor_set(v___x_376_, 3, v___f_384_);
lean_ctor_set(v___x_376_, 2, v___f_385_);
lean_ctor_set(v___x_376_, 1, v___f_378_);
lean_ctor_set(v___x_376_, 0, v___x_382_);
v___x_387_ = v___x_376_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v___x_382_);
lean_ctor_set(v_reuseFailAlloc_395_, 1, v___f_378_);
lean_ctor_set(v_reuseFailAlloc_395_, 2, v___f_385_);
lean_ctor_set(v_reuseFailAlloc_395_, 3, v___f_384_);
lean_ctor_set(v_reuseFailAlloc_395_, 4, v___f_383_);
v___x_387_ = v_reuseFailAlloc_395_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
lean_object* v___x_389_; 
if (v_isShared_370_ == 0)
{
lean_ctor_set(v___x_369_, 1, v___f_379_);
lean_ctor_set(v___x_369_, 0, v___x_387_);
v___x_389_ = v___x_369_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v___x_387_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v___f_379_);
v___x_389_ = v_reuseFailAlloc_394_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_4472__overap_392_; lean_object* v___x_393_; 
v___x_390_ = lean_box(0);
v___x_391_ = l_instInhabitedOfMonad___redArg(v___x_389_, v___x_390_);
v___x_4472__overap_392_ = lean_panic_fn_borrowed(v___x_391_, v_msg_335_);
lean_dec(v___x_391_);
lean_inc(v___y_339_);
lean_inc_ref(v___y_338_);
lean_inc(v___y_337_);
lean_inc_ref(v___y_336_);
v___x_393_ = lean_apply_5(v___x_4472__overap_392_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, lean_box(0));
return v___x_393_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0___boxed(lean_object* v_msg_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0(v_msg_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
lean_dec(v___y_408_);
lean_dec_ref(v___y_407_);
return v_res_412_;
}
}
static lean_object* _init_l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__3(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_416_ = ((lean_object*)(l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__2));
v___x_417_ = lean_unsigned_to_nat(11u);
v___x_418_ = lean_unsigned_to_nat(122u);
v___x_419_ = ((lean_object*)(l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__1));
v___x_420_ = ((lean_object*)(l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__0));
v___x_421_ = l_mkPanicMessageWithDecl(v___x_420_, v___x_419_, v___x_418_, v___x_417_, v___x_416_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0(lean_object* v_constName_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
lean_object* v___x_428_; lean_object* v_env_432_; uint8_t v___x_433_; lean_object* v___x_434_; 
v___x_428_ = lean_st_ref_get(v___y_426_);
v_env_432_ = lean_ctor_get(v___x_428_, 0);
lean_inc_ref(v_env_432_);
lean_dec(v___x_428_);
v___x_433_ = 0;
v___x_434_ = l_Lean_Environment_findAsync_x3f(v_env_432_, v_constName_422_, v___x_433_);
if (lean_obj_tag(v___x_434_) == 1)
{
lean_object* v_val_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_454_; 
v_val_435_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_454_ == 0)
{
v___x_437_ = v___x_434_;
v_isShared_438_ = v_isSharedCheck_454_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_val_435_);
lean_dec(v___x_434_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_454_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
uint8_t v_kind_439_; 
v_kind_439_ = lean_ctor_get_uint8(v_val_435_, sizeof(void*)*3);
if (v_kind_439_ == 6)
{
lean_object* v___x_440_; 
v___x_440_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_435_);
if (lean_obj_tag(v___x_440_) == 6)
{
lean_object* v_val_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_451_; 
v_val_441_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_451_ == 0)
{
v___x_443_ = v___x_440_;
v_isShared_444_ = v_isSharedCheck_451_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_val_441_);
lean_dec(v___x_440_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_451_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 0, v_val_441_);
v___x_446_ = v___x_437_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_val_441_);
v___x_446_ = v_reuseFailAlloc_450_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
lean_object* v___x_448_; 
if (v_isShared_444_ == 0)
{
lean_ctor_set_tag(v___x_443_, 0);
lean_ctor_set(v___x_443_, 0, v___x_446_);
v___x_448_ = v___x_443_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_446_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
else
{
lean_object* v___x_452_; lean_object* v___x_453_; 
lean_dec_ref(v___x_440_);
lean_del_object(v___x_437_);
v___x_452_ = lean_obj_once(&l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__3, &l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__3_once, _init_l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___closed__3);
v___x_453_ = l_panic___at___00Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0_spec__0(v___x_452_, v___y_423_, v___y_424_, v___y_425_, v___y_426_);
return v___x_453_;
}
}
else
{
lean_del_object(v___x_437_);
lean_dec(v_val_435_);
goto v___jp_429_;
}
}
}
else
{
lean_dec(v___x_434_);
goto v___jp_429_;
}
v___jp_429_:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = lean_box(0);
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0___boxed(lean_object* v_constName_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0(v_constName_455_, v___y_456_, v___y_457_, v___y_458_, v___y_459_);
lean_dec(v___y_459_);
lean_dec_ref(v___y_458_);
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
return v_res_461_;
}
}
static lean_object* _init_l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0(void){
_start:
{
lean_object* v___x_462_; lean_object* v_dummy_463_; 
v___x_462_ = lean_box(0);
v_dummy_463_ = l_Lean_Expr_sort___override(v___x_462_);
return v_dummy_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f(lean_object* v_e_464_, lean_object* v_outer_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_){
_start:
{
lean_object* v_e_474_; 
v_e_474_ = l_Lean_Expr_consumeMData(v_e_464_);
lean_dec_ref(v_e_464_);
switch(lean_obj_tag(v_e_474_))
{
case 1:
{
lean_object* v_fvarId_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v_fvarId_475_ = lean_ctor_get(v_e_474_, 0);
lean_inc(v_fvarId_475_);
lean_dec_ref_known(v_e_474_, 1);
v___x_476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_476_, 0, v_fvarId_475_);
lean_ctor_set(v___x_476_, 1, v_outer_465_);
v___x_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_477_, 0, v___x_476_);
v___x_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_478_, 0, v___x_477_);
return v___x_478_;
}
case 11:
{
lean_object* v_typeName_479_; lean_object* v_idx_480_; lean_object* v_struct_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
v_typeName_479_ = lean_ctor_get(v_e_474_, 0);
lean_inc(v_typeName_479_);
v_idx_480_ = lean_ctor_get(v_e_474_, 1);
lean_inc(v_idx_480_);
v_struct_481_ = lean_ctor_get(v_e_474_, 2);
lean_inc_ref(v_struct_481_);
lean_dec_ref_known(v_e_474_, 3);
v___x_482_ = lean_unsigned_to_nat(0u);
v___x_483_ = lean_nat_dec_eq(v_idx_480_, v___x_482_);
lean_dec(v_idx_480_);
if (v___x_483_ == 0)
{
lean_dec_ref(v_struct_481_);
lean_dec(v_typeName_479_);
lean_dec(v_outer_465_);
goto v___jp_471_;
}
else
{
lean_object* v___x_484_; 
lean_inc(v_a_469_);
lean_inc_ref(v_a_468_);
lean_inc(v_a_467_);
lean_inc_ref(v_a_466_);
lean_inc_ref(v_struct_481_);
v___x_484_ = lean_infer_type(v_struct_481_, v_a_466_, v_a_467_, v_a_468_, v_a_469_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; lean_object* v___x_486_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
lean_inc(v_a_485_);
lean_dec_ref_known(v___x_484_, 1);
v___x_486_ = l_Lean_Meta_whnfD(v_a_485_, v_a_466_, v_a_467_, v_a_468_, v_a_469_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_525_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_525_ == 0)
{
v___x_489_ = v___x_486_;
v_isShared_490_ = v_isSharedCheck_525_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_dec(v___x_486_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_525_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_491_; 
v___x_491_ = l_Lean_Expr_getAppFn(v_a_487_);
if (lean_obj_tag(v___x_491_) == 4)
{
lean_object* v_us_492_; uint8_t v___x_493_; lean_object* v_dummy_494_; lean_object* v_nargs_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
lean_del_object(v___x_489_);
v_us_492_ = lean_ctor_get(v___x_491_, 1);
lean_inc(v_us_492_);
lean_dec_ref_known(v___x_491_, 2);
v___x_493_ = 0;
v_dummy_494_ = lean_obj_once(&l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0, &l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0_once, _init_l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0);
v_nargs_495_ = l_Lean_Expr_getAppNumArgs(v_a_487_);
lean_inc(v_nargs_495_);
v___x_496_ = lean_mk_array(v_nargs_495_, v_dummy_494_);
v___x_497_ = lean_unsigned_to_nat(1u);
v___x_498_ = lean_nat_sub(v_nargs_495_, v___x_497_);
lean_dec(v_nargs_495_);
v___x_499_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_487_, v___x_496_, v___x_498_);
v___x_500_ = l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___redArg(v___x_493_, v_typeName_479_, v_us_492_, v___x_499_, v_a_469_);
if (lean_obj_tag(v___x_500_) == 0)
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_512_; 
v_a_501_ = lean_ctor_get(v___x_500_, 0);
v_isSharedCheck_512_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_512_ == 0)
{
v___x_503_ = v___x_500_;
v_isShared_504_ = v_isSharedCheck_512_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_500_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_512_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
if (lean_obj_tag(v_a_501_) == 1)
{
lean_object* v_val_505_; lean_object* v___x_506_; 
lean_del_object(v___x_503_);
v_val_505_ = lean_ctor_get(v_a_501_, 0);
lean_inc(v_val_505_);
lean_dec_ref_known(v_a_501_, 1);
v___x_506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_506_, 0, v_val_505_);
lean_ctor_set(v___x_506_, 1, v_outer_465_);
v_e_464_ = v_struct_481_;
v_outer_465_ = v___x_506_;
goto _start;
}
else
{
lean_object* v___x_508_; lean_object* v___x_510_; 
lean_dec(v_a_501_);
lean_dec_ref(v_struct_481_);
lean_dec(v_outer_465_);
v___x_508_ = lean_box(0);
if (v_isShared_504_ == 0)
{
lean_ctor_set(v___x_503_, 0, v___x_508_);
v___x_510_ = v___x_503_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_508_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
}
else
{
lean_object* v_a_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_520_; 
lean_dec_ref(v_struct_481_);
lean_dec(v_outer_465_);
v_a_513_ = lean_ctor_get(v___x_500_, 0);
v_isSharedCheck_520_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_520_ == 0)
{
v___x_515_ = v___x_500_;
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_a_513_);
lean_dec(v___x_500_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_518_; 
if (v_isShared_516_ == 0)
{
v___x_518_ = v___x_515_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_a_513_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
return v___x_518_;
}
}
}
}
else
{
lean_object* v___x_521_; lean_object* v___x_523_; 
lean_dec_ref(v___x_491_);
lean_dec(v_a_487_);
lean_dec_ref(v_struct_481_);
lean_dec(v_typeName_479_);
lean_dec(v_outer_465_);
v___x_521_ = lean_box(0);
if (v_isShared_490_ == 0)
{
lean_ctor_set(v___x_489_, 0, v___x_521_);
v___x_523_ = v___x_489_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_521_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
lean_dec_ref(v_struct_481_);
lean_dec(v_typeName_479_);
lean_dec(v_outer_465_);
v_a_526_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_486_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_486_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
else
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_541_; 
lean_dec_ref(v_struct_481_);
lean_dec(v_typeName_479_);
lean_dec(v_outer_465_);
v_a_534_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_541_ == 0)
{
v___x_536_ = v___x_484_;
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_484_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_539_; 
if (v_isShared_537_ == 0)
{
v___x_539_ = v___x_536_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_534_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
}
}
case 5:
{
lean_object* v___x_542_; 
v___x_542_ = l_Lean_Expr_getAppFn(v_e_474_);
if (lean_obj_tag(v___x_542_) == 4)
{
lean_object* v_declName_543_; lean_object* v_us_544_; lean_object* v___x_545_; lean_object* v_dummy_546_; lean_object* v_nargs_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v_args_551_; lean_object* v___x_552_; lean_object* v_env_553_; lean_object* v___x_554_; 
v_declName_543_ = lean_ctor_get(v___x_542_, 0);
lean_inc_n(v_declName_543_, 2);
v_us_544_ = lean_ctor_get(v___x_542_, 1);
lean_inc(v_us_544_);
lean_dec_ref_known(v___x_542_, 2);
v___x_545_ = l_Lean_instInhabitedExpr;
v_dummy_546_ = lean_obj_once(&l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0, &l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0_once, _init_l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___closed__0);
v_nargs_547_ = l_Lean_Expr_getAppNumArgs(v_e_474_);
lean_inc(v_nargs_547_);
v___x_548_ = lean_mk_array(v_nargs_547_, v_dummy_546_);
v___x_549_ = lean_unsigned_to_nat(1u);
v___x_550_ = lean_nat_sub(v_nargs_547_, v___x_549_);
lean_dec(v_nargs_547_);
v_args_551_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_474_, v___x_548_, v___x_550_);
v___x_552_ = lean_st_ref_get(v_a_469_);
v_env_553_ = lean_ctor_get(v___x_552_, 0);
lean_inc_ref_n(v_env_553_, 2);
lean_dec(v___x_552_);
v___x_554_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_553_, v_declName_543_);
if (lean_obj_tag(v___x_554_) == 1)
{
lean_object* v_val_555_; lean_object* v_ctorName_556_; lean_object* v___x_557_; 
lean_dec_ref(v_env_553_);
lean_dec(v_declName_543_);
v_val_555_ = lean_ctor_get(v___x_554_, 0);
lean_inc(v_val_555_);
lean_dec_ref_known(v___x_554_, 1);
v_ctorName_556_ = lean_ctor_get(v_val_555_, 0);
lean_inc(v_ctorName_556_);
lean_dec(v_val_555_);
v___x_557_ = l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0(v_ctorName_556_, v_a_466_, v_a_467_, v_a_468_, v_a_469_);
if (lean_obj_tag(v___x_557_) == 0)
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_601_; 
v_a_558_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_601_ == 0)
{
v___x_560_ = v___x_557_;
v_isShared_561_ = v_isSharedCheck_601_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_557_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_601_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
if (lean_obj_tag(v_a_558_) == 1)
{
lean_object* v_val_562_; lean_object* v_induct_563_; lean_object* v_numParams_564_; lean_object* v___x_565_; lean_object* v___x_566_; uint8_t v___x_567_; 
v_val_562_ = lean_ctor_get(v_a_558_, 0);
lean_inc(v_val_562_);
lean_dec_ref_known(v_a_558_, 1);
v_induct_563_ = lean_ctor_get(v_val_562_, 1);
lean_inc(v_induct_563_);
v_numParams_564_ = lean_ctor_get(v_val_562_, 3);
lean_inc(v_numParams_564_);
lean_dec(v_val_562_);
v___x_565_ = lean_array_get_size(v_args_551_);
v___x_566_ = lean_nat_add(v_numParams_564_, v___x_549_);
v___x_567_ = lean_nat_dec_eq(v___x_565_, v___x_566_);
lean_dec(v___x_566_);
if (v___x_567_ == 0)
{
lean_object* v___x_568_; lean_object* v___x_570_; 
lean_dec(v_numParams_564_);
lean_dec(v_induct_563_);
lean_dec_ref(v_args_551_);
lean_dec(v_us_544_);
lean_dec(v_outer_465_);
v___x_568_ = lean_box(0);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 0, v___x_568_);
v___x_570_ = v___x_560_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_568_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
else
{
uint8_t v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
lean_del_object(v___x_560_);
v___x_572_ = 0;
v___x_573_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_564_);
v___x_574_ = l_Array_extract___redArg(v_args_551_, v___x_573_, v_numParams_564_);
v___x_575_ = lean_array_get(v___x_545_, v_args_551_, v_numParams_564_);
lean_dec(v_numParams_564_);
lean_dec_ref(v_args_551_);
v___x_576_ = l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___redArg(v___x_572_, v_induct_563_, v_us_544_, v___x_574_, v_a_469_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_588_; 
v_a_577_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_588_ == 0)
{
v___x_579_ = v___x_576_;
v_isShared_580_ = v_isSharedCheck_588_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_576_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_588_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
if (lean_obj_tag(v_a_577_) == 1)
{
lean_object* v_val_581_; lean_object* v___x_582_; 
lean_del_object(v___x_579_);
v_val_581_ = lean_ctor_get(v_a_577_, 0);
lean_inc(v_val_581_);
lean_dec_ref_known(v_a_577_, 1);
v___x_582_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_582_, 0, v_val_581_);
lean_ctor_set(v___x_582_, 1, v_outer_465_);
v_e_464_ = v___x_575_;
v_outer_465_ = v___x_582_;
goto _start;
}
else
{
lean_object* v___x_584_; lean_object* v___x_586_; 
lean_dec(v_a_577_);
lean_dec(v___x_575_);
lean_dec(v_outer_465_);
v___x_584_ = lean_box(0);
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 0, v___x_584_);
v___x_586_ = v___x_579_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v___x_584_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
}
else
{
lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_596_; 
lean_dec(v___x_575_);
lean_dec(v_outer_465_);
v_a_589_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_596_ == 0)
{
v___x_591_ = v___x_576_;
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_dec(v___x_576_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
if (v_isShared_592_ == 0)
{
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_a_589_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
}
}
}
else
{
lean_object* v___x_597_; lean_object* v___x_599_; 
lean_dec(v_a_558_);
lean_dec_ref(v_args_551_);
lean_dec(v_us_544_);
lean_dec(v_outer_465_);
v___x_597_ = lean_box(0);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 0, v___x_597_);
v___x_599_ = v___x_560_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v___x_597_);
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
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_609_; 
lean_dec_ref(v_args_551_);
lean_dec(v_us_544_);
lean_dec(v_outer_465_);
v_a_602_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_609_ == 0)
{
v___x_604_ = v___x_557_;
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_557_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_607_; 
if (v_isShared_605_ == 0)
{
v___x_607_ = v___x_604_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_a_602_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
}
else
{
lean_object* v___x_610_; 
lean_dec(v___x_554_);
lean_inc(v_declName_543_);
v___x_610_ = l_Lean_isCtor_x3f___at___00Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f_spec__0(v_declName_543_, v_a_466_, v_a_467_, v_a_468_, v_a_469_);
if (lean_obj_tag(v___x_610_) == 0)
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_700_; 
v_a_611_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_700_ == 0)
{
v___x_613_ = v___x_610_;
v_isShared_614_ = v_isSharedCheck_700_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_610_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_700_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
if (lean_obj_tag(v_a_611_) == 1)
{
lean_object* v_val_615_; lean_object* v_induct_616_; lean_object* v_numParams_617_; lean_object* v___x_618_; lean_object* v___x_619_; uint8_t v___x_620_; 
lean_dec_ref(v_env_553_);
lean_dec(v_declName_543_);
v_val_615_ = lean_ctor_get(v_a_611_, 0);
lean_inc(v_val_615_);
lean_dec_ref_known(v_a_611_, 1);
v_induct_616_ = lean_ctor_get(v_val_615_, 1);
lean_inc(v_induct_616_);
v_numParams_617_ = lean_ctor_get(v_val_615_, 3);
lean_inc(v_numParams_617_);
lean_dec(v_val_615_);
v___x_618_ = lean_array_get_size(v_args_551_);
v___x_619_ = lean_nat_add(v_numParams_617_, v___x_549_);
v___x_620_ = lean_nat_dec_eq(v___x_618_, v___x_619_);
lean_dec(v___x_619_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; lean_object* v___x_623_; 
lean_dec(v_numParams_617_);
lean_dec(v_induct_616_);
lean_dec_ref(v_args_551_);
lean_dec(v_us_544_);
lean_dec(v_outer_465_);
v___x_621_ = lean_box(0);
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 0, v___x_621_);
v___x_623_ = v___x_613_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_621_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
else
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
lean_del_object(v___x_613_);
v___x_625_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_617_);
v___x_626_ = l_Array_extract___redArg(v_args_551_, v___x_625_, v_numParams_617_);
v___x_627_ = lean_array_get(v___x_545_, v_args_551_, v_numParams_617_);
lean_dec(v_numParams_617_);
lean_dec_ref(v_args_551_);
v___x_628_ = l___private_Lean_Meta_Tactic_OneFieldStructure_0__Lean_Meta_OneFieldStructure_buildOneFieldStructureBijection_x3f___redArg(v___x_620_, v_induct_616_, v_us_544_, v___x_626_, v_a_469_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_640_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_640_ == 0)
{
v___x_631_ = v___x_628_;
v_isShared_632_ = v_isSharedCheck_640_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_628_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_640_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
if (lean_obj_tag(v_a_629_) == 1)
{
lean_object* v_val_633_; lean_object* v___x_634_; 
lean_del_object(v___x_631_);
v_val_633_ = lean_ctor_get(v_a_629_, 0);
lean_inc(v_val_633_);
lean_dec_ref_known(v_a_629_, 1);
v___x_634_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_634_, 0, v_val_633_);
lean_ctor_set(v___x_634_, 1, v_outer_465_);
v_e_464_ = v___x_627_;
v_outer_465_ = v___x_634_;
goto _start;
}
else
{
lean_object* v___x_636_; lean_object* v___x_638_; 
lean_dec(v_a_629_);
lean_dec(v___x_627_);
lean_dec(v_outer_465_);
v___x_636_ = lean_box(0);
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 0, v___x_636_);
v___x_638_ = v___x_631_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_636_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
}
else
{
lean_object* v_a_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_648_; 
lean_dec(v___x_627_);
lean_dec(v_outer_465_);
v_a_641_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_648_ == 0)
{
v___x_643_ = v___x_628_;
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_a_641_);
lean_dec(v___x_628_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_646_; 
if (v_isShared_644_ == 0)
{
v___x_646_ = v___x_643_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_a_641_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
}
}
else
{
lean_object* v___x_649_; 
lean_dec(v_a_611_);
lean_inc(v_declName_543_);
lean_inc_ref(v_env_553_);
v___x_649_ = l_Lean_Environment_getVirtualProjInfo_x3f(v_env_553_, v_declName_543_);
if (lean_obj_tag(v___x_649_) == 1)
{
lean_object* v_val_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_672_; 
lean_dec_ref(v_env_553_);
lean_dec(v_declName_543_);
v_val_650_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_672_ == 0)
{
v___x_652_ = v___x_649_;
v_isShared_653_ = v_isSharedCheck_672_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_val_650_);
lean_dec(v___x_649_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_672_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v_numParams_654_; lean_object* v___x_655_; lean_object* v___x_656_; uint8_t v___x_657_; 
v_numParams_654_ = lean_ctor_get(v_val_650_, 3);
v___x_655_ = lean_array_get_size(v_args_551_);
v___x_656_ = lean_nat_add(v_numParams_654_, v___x_549_);
v___x_657_ = lean_nat_dec_eq(v___x_655_, v___x_656_);
lean_dec(v___x_656_);
if (v___x_657_ == 0)
{
lean_object* v___x_658_; lean_object* v___x_660_; 
lean_del_object(v___x_652_);
lean_dec(v_val_650_);
lean_dec_ref(v_args_551_);
lean_dec(v_us_544_);
lean_dec(v_outer_465_);
v___x_658_ = lean_box(0);
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 0, v___x_658_);
v___x_660_ = v___x_613_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v___x_658_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
else
{
uint8_t v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_667_; 
lean_del_object(v___x_613_);
v___x_662_ = 0;
v___x_663_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_654_);
v___x_664_ = l_Array_extract___redArg(v_args_551_, v___x_663_, v_numParams_654_);
v___x_665_ = lean_array_get(v___x_545_, v_args_551_, v_numParams_654_);
lean_dec_ref(v_args_551_);
if (v_isShared_653_ == 0)
{
v___x_667_ = v___x_652_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_val_650_);
v___x_667_ = v_reuseFailAlloc_671_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_668_, 0, v___x_667_);
lean_ctor_set(v___x_668_, 1, v_us_544_);
lean_ctor_set(v___x_668_, 2, v___x_664_);
lean_ctor_set_uint8(v___x_668_, sizeof(void*)*3, v___x_662_);
v___x_669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_668_);
lean_ctor_set(v___x_669_, 1, v_outer_465_);
v_e_464_ = v___x_665_;
v_outer_465_ = v___x_669_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_673_; 
lean_dec(v___x_649_);
v___x_673_ = l_Lean_Environment_getVirtualCtorInfo_x3f(v_env_553_, v_declName_543_);
if (lean_obj_tag(v___x_673_) == 1)
{
lean_object* v_val_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_695_; 
v_val_674_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_695_ == 0)
{
v___x_676_ = v___x_673_;
v_isShared_677_ = v_isSharedCheck_695_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_val_674_);
lean_dec(v___x_673_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_695_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v_numParams_678_; lean_object* v___x_679_; lean_object* v___x_680_; uint8_t v___x_681_; 
v_numParams_678_ = lean_ctor_get(v_val_674_, 3);
v___x_679_ = lean_array_get_size(v_args_551_);
v___x_680_ = lean_nat_add(v_numParams_678_, v___x_549_);
v___x_681_ = lean_nat_dec_eq(v___x_679_, v___x_680_);
lean_dec(v___x_680_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; lean_object* v___x_684_; 
lean_del_object(v___x_676_);
lean_dec(v_val_674_);
lean_dec_ref(v_args_551_);
lean_dec(v_us_544_);
lean_dec(v_outer_465_);
v___x_682_ = lean_box(0);
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 0, v___x_682_);
v___x_684_ = v___x_613_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
else
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_690_; 
lean_del_object(v___x_613_);
v___x_686_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_678_);
v___x_687_ = l_Array_extract___redArg(v_args_551_, v___x_686_, v_numParams_678_);
v___x_688_ = lean_array_get(v___x_545_, v_args_551_, v_numParams_678_);
lean_dec_ref(v_args_551_);
if (v_isShared_677_ == 0)
{
v___x_690_ = v___x_676_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_val_674_);
v___x_690_ = v_reuseFailAlloc_694_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_691_, 0, v___x_690_);
lean_ctor_set(v___x_691_, 1, v_us_544_);
lean_ctor_set(v___x_691_, 2, v___x_687_);
lean_ctor_set_uint8(v___x_691_, sizeof(void*)*3, v___x_681_);
v___x_692_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_692_, 0, v___x_691_);
lean_ctor_set(v___x_692_, 1, v_outer_465_);
v_e_464_ = v___x_688_;
v_outer_465_ = v___x_692_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_696_; lean_object* v___x_698_; 
lean_dec(v___x_673_);
lean_dec_ref(v_args_551_);
lean_dec(v_us_544_);
lean_dec(v_outer_465_);
v___x_696_ = lean_box(0);
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 0, v___x_696_);
v___x_698_ = v___x_613_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v___x_696_);
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
else
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_708_; 
lean_dec_ref(v_env_553_);
lean_dec_ref(v_args_551_);
lean_dec(v_us_544_);
lean_dec(v_declName_543_);
lean_dec(v_outer_465_);
v_a_701_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_708_ == 0)
{
v___x_703_ = v___x_610_;
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_610_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_706_; 
if (v_isShared_704_ == 0)
{
v___x_706_ = v___x_703_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_a_701_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
}
}
else
{
lean_object* v___x_709_; lean_object* v___x_710_; 
lean_dec_ref(v___x_542_);
lean_dec_ref_known(v_e_474_, 2);
lean_dec(v_outer_465_);
v___x_709_ = lean_box(0);
v___x_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_710_, 0, v___x_709_);
return v___x_710_;
}
}
default: 
{
lean_dec_ref(v_e_474_);
lean_dec(v_outer_465_);
goto v___jp_471_;
}
}
v___jp_471_:
{
lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_472_ = lean_box(0);
v___x_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
return v___x_473_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f___boxed(lean_object* v_e_711_, lean_object* v_outer_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Lean_Meta_OneFieldStructure_bijectionWrappedFVar_x3f(v_e_711_, v_outer_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_);
lean_dec(v_a_716_);
lean_dec_ref(v_a_715_);
lean_dec(v_a_714_);
lean_dec_ref(v_a_713_);
return v_res_718_;
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
