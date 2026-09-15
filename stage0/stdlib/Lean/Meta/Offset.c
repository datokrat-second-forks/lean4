// Lean compiler output
// Module: Lean.Meta.Offset
// Imports: public import Lean.Data.LBool public import Lean.Meta.Basic import Lean.Meta.NatInstTesters import Lean.Util.SafeExponentiation
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
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstHAddNat___redArg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstHSubNat___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstHMulNat___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstHDivNat___redArg(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstHModNat___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstHPowNat___redArg(lean_object*, lean_object*);
lean_object* l_Lean_checkExponent(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstPowNat___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstAddNat___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstSubNat___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstMulNat___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstDivNat___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstModNat___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstNatPowNat___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstOfNatNat___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkInstHAdd;
extern lean_object* l_Lean_Nat_mkInstAdd;
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_is_expr_def_eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Bool_toLBool(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_mkNatAdd(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_pure(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instMonadMCtxMetaM;
lean_object* l_OptionT_lift(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadMCtxOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_lift___redArg___lam__0(lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__4_value),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__3_value)} };
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__3_value)} };
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__6_value;
static const lean_closure_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__0_value),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__1_value)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__8 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__8_value),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__2_value),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__5_value),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__6_value),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__7_value)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__9 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__9_value),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__3_value)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__10 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__11;
static const lean_closure_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__12 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__12_value;
static const lean_closure_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__13 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__13_value;
static const lean_closure_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__14 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__14_value;
static const lean_closure_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__15 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__15_value;
static const lean_closure_object l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_OptionT_lift___redArg___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__14_value)} };
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__16 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__16_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_evalNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_evalNat___closed__0 = (const lean_object*)&l_Lean_Meta_evalNat___closed__0_value;
static const lean_string_object l_Lean_Meta_evalNat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l_Lean_Meta_evalNat___closed__1 = (const lean_object*)&l_Lean_Meta_evalNat___closed__1_value;
static const lean_ctor_object l_Lean_Meta_evalNat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_evalNat___closed__2 = (const lean_object*)&l_Lean_Meta_evalNat___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__0 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_evalNat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__1 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pow"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__2 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_evalNat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 64, 52, 77, 166, 227, 131, 174)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__3 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mod"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__4 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_evalNat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__4_value),LEAN_SCALAR_PTR_LITERAL(244, 133, 16, 0, 168, 19, 182, 179)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__5 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "div"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__6 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_evalNat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__6_value),LEAN_SCALAR_PTR_LITERAL(67, 67, 214, 176, 223, 68, 36, 94)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__7 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mul"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__8 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_evalNat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__8_value),LEAN_SCALAR_PTR_LITERAL(124, 230, 50, 167, 103, 237, 136, 198)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__9 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sub"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__10 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_evalNat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__10_value),LEAN_SCALAR_PTR_LITERAL(9, 137, 41, 185, 216, 152, 145, 196)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__11 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__12 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_evalNat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__13_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__12_value),LEAN_SCALAR_PTR_LITERAL(210, 189, 86, 121, 130, 22, 242, 236)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__13 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__15 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__14 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__14_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__14_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__15_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__16 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "NatPow"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__17 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__17_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__17_value),LEAN_SCALAR_PTR_LITERAL(36, 252, 247, 75, 236, 16, 44, 32)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__2_value),LEAN_SCALAR_PTR_LITERAL(16, 205, 190, 14, 49, 232, 28, 251)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__18 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Mod"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__19 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__19_value),LEAN_SCALAR_PTR_LITERAL(141, 157, 192, 123, 66, 123, 34, 2)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__20_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__4_value),LEAN_SCALAR_PTR_LITERAL(26, 140, 125, 94, 9, 215, 242, 2)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__20 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__20_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Div"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__21 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__21_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__21_value),LEAN_SCALAR_PTR_LITERAL(153, 247, 56, 19, 64, 245, 190, 87)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__22_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__6_value),LEAN_SCALAR_PTR_LITERAL(25, 78, 24, 213, 240, 238, 239, 80)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__22 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__22_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Mul"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__23 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__23_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__23_value),LEAN_SCALAR_PTR_LITERAL(155, 25, 183, 66, 31, 85, 84, 65)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__24_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__8_value),LEAN_SCALAR_PTR_LITERAL(124, 210, 233, 157, 130, 57, 249, 157)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__24 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__24_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Sub"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__25 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__25_value),LEAN_SCALAR_PTR_LITERAL(203, 50, 219, 228, 204, 142, 182, 246)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__10_value),LEAN_SCALAR_PTR_LITERAL(153, 170, 154, 227, 136, 99, 108, 193)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__26 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__26_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Add"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__27 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__27_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__27_value),LEAN_SCALAR_PTR_LITERAL(123, 91, 0, 102, 155, 93, 69, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__28_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__12_value),LEAN_SCALAR_PTR_LITERAL(50, 34, 112, 179, 66, 45, 192, 92)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__28 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__28_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Pow"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__29 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__29_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__29_value),LEAN_SCALAR_PTR_LITERAL(237, 192, 51, 134, 187, 116, 61, 36)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__30_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__2_value),LEAN_SCALAR_PTR_LITERAL(141, 55, 159, 71, 164, 58, 139, 47)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__30 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__30_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hPow"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__32 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__32_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HPow"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__31 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__31_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__31_value),LEAN_SCALAR_PTR_LITERAL(155, 188, 136, 200, 106, 253, 76, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__33_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__32_value),LEAN_SCALAR_PTR_LITERAL(32, 63, 208, 57, 56, 184, 164, 144)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__33 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__33_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__35 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__35_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__34 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__34_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__34_value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__36_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__35_value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__36 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__36_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__38 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__38_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__37 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__37_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__37_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__39_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__38_value),LEAN_SCALAR_PTR_LITERAL(26, 183, 188, 240, 156, 118, 170, 84)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__39 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__39_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__41 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__41_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__40 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__40_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__40_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__42_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__41_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__42 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__42_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__44 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__44_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__43 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__43_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__43_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__45_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__44_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__45 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__45_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__47 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__47_value;
static const lean_string_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__46 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__46_value;
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__46_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__48_value_aux_0),((lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__47_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__48 = (const lean_object*)&l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__48_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_evalPow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_evalPow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_matchesInstance_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_matchesInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_matchesInstance_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_matchesInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchesInstance___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchesInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchesInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchesInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isOffset_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isOffset_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isDefEqOffset___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isDefEqOffset___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isDefEqOffset___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isDefEqOffset___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_isDefEqOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_evalNat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Meta_isDefEqOffset___closed__0 = (const lean_object*)&l_Lean_Meta_isDefEqOffset___closed__0_value;
static lean_once_cell_t l_Lean_Meta_isDefEqOffset___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_isDefEqOffset___closed__1;
static const lean_closure_object l_Lean_Meta_isDefEqOffset___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_isDefEqOffset___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_isDefEqOffset___closed__2 = (const lean_object*)&l_Lean_Meta_isDefEqOffset___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_isDefEqOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isDefEqOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__11(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__10));
v___x_25_ = l_StateRefT_x27_instMonad___redArg(v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg(lean_object* v_e_32_, lean_object* v_k_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_){
_start:
{
lean_object* v___x_39_; lean_object* v_toApplicative_40_; lean_object* v_toFunctor_41_; lean_object* v_toSeq_42_; lean_object* v_toSeqLeft_43_; lean_object* v_toSeqRight_44_; lean_object* v___f_45_; lean_object* v___f_46_; lean_object* v___f_47_; lean_object* v___f_48_; lean_object* v___x_49_; lean_object* v___f_50_; lean_object* v___f_51_; lean_object* v___f_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v_toApplicative_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_128_; 
v___x_39_ = lean_obj_once(&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__11, &l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__11_once, _init_l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__11);
v_toApplicative_40_ = lean_ctor_get(v___x_39_, 0);
v_toFunctor_41_ = lean_ctor_get(v_toApplicative_40_, 0);
v_toSeq_42_ = lean_ctor_get(v_toApplicative_40_, 2);
v_toSeqLeft_43_ = lean_ctor_get(v_toApplicative_40_, 3);
v_toSeqRight_44_ = lean_ctor_get(v_toApplicative_40_, 4);
v___f_45_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__12));
v___f_46_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_41_, 2);
v___f_47_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_47_, 0, v_toFunctor_41_);
v___f_48_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_48_, 0, v_toFunctor_41_);
v___x_49_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_49_, 0, v___f_47_);
lean_ctor_set(v___x_49_, 1, v___f_48_);
lean_inc(v_toSeqRight_44_);
v___f_50_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_50_, 0, v_toSeqRight_44_);
lean_inc(v_toSeqLeft_43_);
v___f_51_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_51_, 0, v_toSeqLeft_43_);
lean_inc(v_toSeq_42_);
v___f_52_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_52_, 0, v_toSeq_42_);
v___x_53_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_53_, 0, v___x_49_);
lean_ctor_set(v___x_53_, 1, v___f_45_);
lean_ctor_set(v___x_53_, 2, v___f_52_);
lean_ctor_set(v___x_53_, 3, v___f_51_);
lean_ctor_set(v___x_53_, 4, v___f_50_);
v___x_54_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
lean_ctor_set(v___x_54_, 1, v___f_46_);
v___x_55_ = l_StateRefT_x27_instMonad___redArg(v___x_54_);
v_toApplicative_56_ = lean_ctor_get(v___x_55_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_55_);
if (v_isSharedCheck_128_ == 0)
{
lean_object* v_unused_129_; 
v_unused_129_ = lean_ctor_get(v___x_55_, 1);
lean_dec(v_unused_129_);
v___x_58_ = v___x_55_;
v_isShared_59_ = v_isSharedCheck_128_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_toApplicative_56_);
lean_dec(v___x_55_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_128_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v_toFunctor_60_; lean_object* v_toSeq_61_; lean_object* v_toSeqLeft_62_; lean_object* v_toSeqRight_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_126_; 
v_toFunctor_60_ = lean_ctor_get(v_toApplicative_56_, 0);
v_toSeq_61_ = lean_ctor_get(v_toApplicative_56_, 2);
v_toSeqLeft_62_ = lean_ctor_get(v_toApplicative_56_, 3);
v_toSeqRight_63_ = lean_ctor_get(v_toApplicative_56_, 4);
v_isSharedCheck_126_ = !lean_is_exclusive(v_toApplicative_56_);
if (v_isSharedCheck_126_ == 0)
{
lean_object* v_unused_127_; 
v_unused_127_ = lean_ctor_get(v_toApplicative_56_, 1);
lean_dec(v_unused_127_);
v___x_65_ = v_toApplicative_56_;
v_isShared_66_ = v_isSharedCheck_126_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_toSeqRight_63_);
lean_inc(v_toSeqLeft_62_);
lean_inc(v_toSeq_61_);
lean_inc(v_toFunctor_60_);
lean_dec(v_toApplicative_56_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_126_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___f_67_; lean_object* v___f_68_; lean_object* v___f_69_; lean_object* v___f_70_; lean_object* v___x_71_; lean_object* v___f_72_; lean_object* v___f_73_; lean_object* v___f_74_; lean_object* v___x_76_; 
v___f_67_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__14));
v___f_68_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__15));
lean_inc_ref(v_toFunctor_60_);
v___f_69_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_69_, 0, v_toFunctor_60_);
v___f_70_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_70_, 0, v_toFunctor_60_);
v___x_71_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_71_, 0, v___f_69_);
lean_ctor_set(v___x_71_, 1, v___f_70_);
v___f_72_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_72_, 0, v_toSeqRight_63_);
v___f_73_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_73_, 0, v_toSeqLeft_62_);
v___f_74_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_74_, 0, v_toSeq_61_);
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 4, v___f_72_);
lean_ctor_set(v___x_65_, 3, v___f_73_);
lean_ctor_set(v___x_65_, 2, v___f_74_);
lean_ctor_set(v___x_65_, 1, v___f_67_);
lean_ctor_set(v___x_65_, 0, v___x_71_);
v___x_76_ = v___x_65_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v___x_71_);
lean_ctor_set(v_reuseFailAlloc_125_, 1, v___f_67_);
lean_ctor_set(v_reuseFailAlloc_125_, 2, v___f_74_);
lean_ctor_set(v_reuseFailAlloc_125_, 3, v___f_73_);
lean_ctor_set(v_reuseFailAlloc_125_, 4, v___f_72_);
v___x_76_ = v_reuseFailAlloc_125_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
lean_object* v___x_78_; 
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 1, v___f_68_);
lean_ctor_set(v___x_58_, 0, v___x_76_);
v___x_78_ = v___x_58_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_76_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v___f_68_);
v___x_78_ = v_reuseFailAlloc_124_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
lean_object* v___f_79_; lean_object* v___f_80_; lean_object* v___f_81_; lean_object* v___f_82_; lean_object* v___f_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v_getMCtx_90_; lean_object* v_modifyMCtx_91_; lean_object* v___x_92_; lean_object* v___f_93_; lean_object* v___f_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_425__overap_97_; lean_object* v___x_98_; 
lean_inc_ref_n(v___x_78_, 7);
v___f_79_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_79_, 0, v___x_78_);
v___f_80_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_80_, 0, v___x_78_);
v___f_81_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_81_, 0, v___x_78_);
v___f_82_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_82_, 0, v___x_78_);
v___f_83_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_83_, 0, v___x_78_);
v___x_84_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_84_, 0, v___f_79_);
lean_ctor_set(v___x_84_, 1, v___f_80_);
v___x_85_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_85_, 0, lean_box(0));
lean_closure_set(v___x_85_, 1, v___x_78_);
v___x_86_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_86_, 0, v___x_84_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
lean_ctor_set(v___x_86_, 2, v___f_81_);
lean_ctor_set(v___x_86_, 3, v___f_82_);
lean_ctor_set(v___x_86_, 4, v___f_83_);
v___x_87_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_87_, 0, lean_box(0));
lean_closure_set(v___x_87_, 1, v___x_78_);
v___x_88_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_86_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
v___x_89_ = l_Lean_Meta_instMonadMCtxMetaM;
v_getMCtx_90_ = lean_ctor_get(v___x_89_, 0);
v_modifyMCtx_91_ = lean_ctor_get(v___x_89_, 1);
v___x_92_ = lean_alloc_closure((void*)(l_OptionT_lift), 4, 2);
lean_closure_set(v___x_92_, 0, lean_box(0));
lean_closure_set(v___x_92_, 1, v___x_78_);
lean_inc(v_modifyMCtx_91_);
v___f_93_ = lean_alloc_closure((void*)(l_Lean_instMonadMCtxOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_93_, 0, v_modifyMCtx_91_);
lean_closure_set(v___f_93_, 1, v___x_92_);
v___f_94_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__16));
lean_inc(v_getMCtx_90_);
v___x_95_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 4);
lean_closure_set(v___x_95_, 0, lean_box(0));
lean_closure_set(v___x_95_, 1, lean_box(0));
lean_closure_set(v___x_95_, 2, v_getMCtx_90_);
lean_closure_set(v___x_95_, 3, v___f_94_);
v___x_96_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
lean_ctor_set(v___x_96_, 1, v___f_93_);
v___x_425__overap_97_ = l_Lean_instantiateMVars___redArg(v___x_88_, v___x_96_, v_e_32_);
lean_inc(v___y_37_);
lean_inc_ref(v___y_36_);
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
v___x_98_ = lean_apply_5(v___x_425__overap_97_, v___y_34_, v___y_35_, v___y_36_, v___y_37_, lean_box(0));
if (lean_obj_tag(v___x_98_) == 0)
{
lean_object* v_a_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_115_; 
v_a_99_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_115_ == 0)
{
v___x_101_ = v___x_98_;
v_isShared_102_ = v_isSharedCheck_115_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_a_99_);
lean_dec(v___x_98_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_115_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
if (lean_obj_tag(v_a_99_) == 0)
{
lean_object* v___x_103_; lean_object* v___x_105_; 
lean_dec_ref(v_k_33_);
v___x_103_ = lean_box(0);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 0, v___x_103_);
v___x_105_ = v___x_101_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v___x_103_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
else
{
lean_object* v_val_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v_val_107_ = lean_ctor_get(v_a_99_, 0);
lean_inc(v_val_107_);
lean_dec_ref_known(v_a_99_, 1);
v___x_108_ = l_Lean_Expr_getAppFn(v_val_107_);
v___x_109_ = l_Lean_Expr_isMVar(v___x_108_);
lean_dec_ref(v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; 
lean_del_object(v___x_101_);
lean_inc(v___y_37_);
lean_inc_ref(v___y_36_);
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
v___x_110_ = lean_apply_6(v_k_33_, v_val_107_, v___y_34_, v___y_35_, v___y_36_, v___y_37_, lean_box(0));
return v___x_110_;
}
else
{
lean_object* v___x_111_; lean_object* v___x_113_; 
lean_dec(v_val_107_);
lean_dec_ref(v_k_33_);
v___x_111_ = lean_box(0);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 0, v___x_111_);
v___x_113_ = v___x_101_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v___x_111_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
}
}
else
{
lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_123_; 
lean_dec_ref(v_k_33_);
v_a_116_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_123_ == 0)
{
v___x_118_ = v___x_98_;
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_98_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_121_; 
if (v_isShared_119_ == 0)
{
v___x_121_ = v___x_118_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_a_116_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___boxed(lean_object* v_e_130_, lean_object* v_k_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg(v_e_130_, v_k_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
lean_dec(v___y_133_);
lean_dec_ref(v___y_132_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars(lean_object* v_00_u03b1_138_, lean_object* v_e_139_, lean_object* v_k_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_){
_start:
{
lean_object* v___x_146_; lean_object* v_toApplicative_147_; lean_object* v_toFunctor_148_; lean_object* v_toSeq_149_; lean_object* v_toSeqLeft_150_; lean_object* v_toSeqRight_151_; lean_object* v___f_152_; lean_object* v___f_153_; lean_object* v___f_154_; lean_object* v___f_155_; lean_object* v___x_156_; lean_object* v___f_157_; lean_object* v___f_158_; lean_object* v___f_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v_toApplicative_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_235_; 
v___x_146_ = lean_obj_once(&l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__11, &l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__11_once, _init_l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__11);
v_toApplicative_147_ = lean_ctor_get(v___x_146_, 0);
v_toFunctor_148_ = lean_ctor_get(v_toApplicative_147_, 0);
v_toSeq_149_ = lean_ctor_get(v_toApplicative_147_, 2);
v_toSeqLeft_150_ = lean_ctor_get(v_toApplicative_147_, 3);
v_toSeqRight_151_ = lean_ctor_get(v_toApplicative_147_, 4);
v___f_152_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__12));
v___f_153_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_148_, 2);
v___f_154_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_154_, 0, v_toFunctor_148_);
v___f_155_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_155_, 0, v_toFunctor_148_);
v___x_156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_156_, 0, v___f_154_);
lean_ctor_set(v___x_156_, 1, v___f_155_);
lean_inc(v_toSeqRight_151_);
v___f_157_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_157_, 0, v_toSeqRight_151_);
lean_inc(v_toSeqLeft_150_);
v___f_158_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_158_, 0, v_toSeqLeft_150_);
lean_inc(v_toSeq_149_);
v___f_159_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_159_, 0, v_toSeq_149_);
v___x_160_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_160_, 0, v___x_156_);
lean_ctor_set(v___x_160_, 1, v___f_152_);
lean_ctor_set(v___x_160_, 2, v___f_159_);
lean_ctor_set(v___x_160_, 3, v___f_158_);
lean_ctor_set(v___x_160_, 4, v___f_157_);
v___x_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set(v___x_161_, 1, v___f_153_);
v___x_162_ = l_StateRefT_x27_instMonad___redArg(v___x_161_);
v_toApplicative_163_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_235_ == 0)
{
lean_object* v_unused_236_; 
v_unused_236_ = lean_ctor_get(v___x_162_, 1);
lean_dec(v_unused_236_);
v___x_165_ = v___x_162_;
v_isShared_166_ = v_isSharedCheck_235_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_toApplicative_163_);
lean_dec(v___x_162_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_235_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v_toFunctor_167_; lean_object* v_toSeq_168_; lean_object* v_toSeqLeft_169_; lean_object* v_toSeqRight_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_233_; 
v_toFunctor_167_ = lean_ctor_get(v_toApplicative_163_, 0);
v_toSeq_168_ = lean_ctor_get(v_toApplicative_163_, 2);
v_toSeqLeft_169_ = lean_ctor_get(v_toApplicative_163_, 3);
v_toSeqRight_170_ = lean_ctor_get(v_toApplicative_163_, 4);
v_isSharedCheck_233_ = !lean_is_exclusive(v_toApplicative_163_);
if (v_isSharedCheck_233_ == 0)
{
lean_object* v_unused_234_; 
v_unused_234_ = lean_ctor_get(v_toApplicative_163_, 1);
lean_dec(v_unused_234_);
v___x_172_ = v_toApplicative_163_;
v_isShared_173_ = v_isSharedCheck_233_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_toSeqRight_170_);
lean_inc(v_toSeqLeft_169_);
lean_inc(v_toSeq_168_);
lean_inc(v_toFunctor_167_);
lean_dec(v_toApplicative_163_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_233_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___f_174_; lean_object* v___f_175_; lean_object* v___f_176_; lean_object* v___f_177_; lean_object* v___x_178_; lean_object* v___f_179_; lean_object* v___f_180_; lean_object* v___f_181_; lean_object* v___x_183_; 
v___f_174_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__14));
v___f_175_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__15));
lean_inc_ref(v_toFunctor_167_);
v___f_176_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_176_, 0, v_toFunctor_167_);
v___f_177_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_177_, 0, v_toFunctor_167_);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v___f_176_);
lean_ctor_set(v___x_178_, 1, v___f_177_);
v___f_179_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_179_, 0, v_toSeqRight_170_);
v___f_180_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_180_, 0, v_toSeqLeft_169_);
v___f_181_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_181_, 0, v_toSeq_168_);
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 4, v___f_179_);
lean_ctor_set(v___x_172_, 3, v___f_180_);
lean_ctor_set(v___x_172_, 2, v___f_181_);
lean_ctor_set(v___x_172_, 1, v___f_174_);
lean_ctor_set(v___x_172_, 0, v___x_178_);
v___x_183_ = v___x_172_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v___x_178_);
lean_ctor_set(v_reuseFailAlloc_232_, 1, v___f_174_);
lean_ctor_set(v_reuseFailAlloc_232_, 2, v___f_181_);
lean_ctor_set(v_reuseFailAlloc_232_, 3, v___f_180_);
lean_ctor_set(v_reuseFailAlloc_232_, 4, v___f_179_);
v___x_183_ = v_reuseFailAlloc_232_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
lean_object* v___x_185_; 
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 1, v___f_175_);
lean_ctor_set(v___x_165_, 0, v___x_183_);
v___x_185_ = v___x_165_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v___x_183_);
lean_ctor_set(v_reuseFailAlloc_231_, 1, v___f_175_);
v___x_185_ = v_reuseFailAlloc_231_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
lean_object* v___f_186_; lean_object* v___f_187_; lean_object* v___f_188_; lean_object* v___f_189_; lean_object* v___f_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v_getMCtx_197_; lean_object* v_modifyMCtx_198_; lean_object* v___x_199_; lean_object* v___f_200_; lean_object* v___f_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_481__overap_204_; lean_object* v___x_205_; 
lean_inc_ref_n(v___x_185_, 7);
v___f_186_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_186_, 0, v___x_185_);
v___f_187_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_187_, 0, v___x_185_);
v___f_188_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_188_, 0, v___x_185_);
v___f_189_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_189_, 0, v___x_185_);
v___f_190_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_190_, 0, v___x_185_);
v___x_191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_191_, 0, v___f_186_);
lean_ctor_set(v___x_191_, 1, v___f_187_);
v___x_192_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_192_, 0, lean_box(0));
lean_closure_set(v___x_192_, 1, v___x_185_);
v___x_193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_193_, 0, v___x_191_);
lean_ctor_set(v___x_193_, 1, v___x_192_);
lean_ctor_set(v___x_193_, 2, v___f_188_);
lean_ctor_set(v___x_193_, 3, v___f_189_);
lean_ctor_set(v___x_193_, 4, v___f_190_);
v___x_194_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_194_, 0, lean_box(0));
lean_closure_set(v___x_194_, 1, v___x_185_);
v___x_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_193_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = l_Lean_Meta_instMonadMCtxMetaM;
v_getMCtx_197_ = lean_ctor_get(v___x_196_, 0);
v_modifyMCtx_198_ = lean_ctor_get(v___x_196_, 1);
v___x_199_ = lean_alloc_closure((void*)(l_OptionT_lift), 4, 2);
lean_closure_set(v___x_199_, 0, lean_box(0));
lean_closure_set(v___x_199_, 1, v___x_185_);
lean_inc(v_modifyMCtx_198_);
v___f_200_ = lean_alloc_closure((void*)(l_Lean_instMonadMCtxOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_200_, 0, v_modifyMCtx_198_);
lean_closure_set(v___f_200_, 1, v___x_199_);
v___f_201_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___redArg___closed__16));
lean_inc(v_getMCtx_197_);
v___x_202_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 4);
lean_closure_set(v___x_202_, 0, lean_box(0));
lean_closure_set(v___x_202_, 1, lean_box(0));
lean_closure_set(v___x_202_, 2, v_getMCtx_197_);
lean_closure_set(v___x_202_, 3, v___f_201_);
v___x_203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set(v___x_203_, 1, v___f_200_);
v___x_481__overap_204_ = l_Lean_instantiateMVars___redArg(v___x_195_, v___x_203_, v_e_139_);
lean_inc(v___y_144_);
lean_inc_ref(v___y_143_);
lean_inc(v___y_142_);
lean_inc_ref(v___y_141_);
v___x_205_ = lean_apply_5(v___x_481__overap_204_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, lean_box(0));
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_222_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_222_ == 0)
{
v___x_208_ = v___x_205_;
v_isShared_209_ = v_isSharedCheck_222_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v___x_205_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_222_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
if (lean_obj_tag(v_a_206_) == 0)
{
lean_object* v___x_210_; lean_object* v___x_212_; 
lean_dec_ref(v_k_140_);
v___x_210_ = lean_box(0);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_210_);
v___x_212_ = v___x_208_;
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
lean_object* v_val_214_; lean_object* v___x_215_; uint8_t v___x_216_; 
v_val_214_ = lean_ctor_get(v_a_206_, 0);
lean_inc(v_val_214_);
lean_dec_ref_known(v_a_206_, 1);
v___x_215_ = l_Lean_Expr_getAppFn(v_val_214_);
v___x_216_ = l_Lean_Expr_isMVar(v___x_215_);
lean_dec_ref(v___x_215_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; 
lean_del_object(v___x_208_);
lean_inc(v___y_144_);
lean_inc_ref(v___y_143_);
lean_inc(v___y_142_);
lean_inc_ref(v___y_141_);
v___x_217_ = lean_apply_6(v_k_140_, v_val_214_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, lean_box(0));
return v___x_217_;
}
else
{
lean_object* v___x_218_; lean_object* v___x_220_; 
lean_dec(v_val_214_);
lean_dec_ref(v_k_140_);
v___x_218_ = lean_box(0);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_218_);
v___x_220_ = v___x_208_;
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
}
else
{
lean_object* v_a_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_230_; 
lean_dec_ref(v_k_140_);
v_a_223_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_230_ == 0)
{
v___x_225_ = v___x_205_;
v_isShared_226_ = v_isSharedCheck_230_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_a_223_);
lean_dec(v___x_205_);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___boxed(lean_object* v_00_u03b1_237_, lean_object* v_e_238_, lean_object* v_k_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars(v_00_u03b1_237_, v_e_238_, v_k_239_, v___y_240_, v___y_241_, v___y_242_, v___y_243_);
lean_dec(v___y_243_);
lean_dec_ref(v___y_242_);
lean_dec(v___y_241_);
lean_dec_ref(v___y_240_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit(lean_object* v_e_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_341_, v___y_343_);
if (lean_obj_tag(v___x_350_) == 0)
{
lean_object* v_a_351_; lean_object* v___x_352_; uint8_t v___x_353_; 
v_a_351_ = lean_ctor_get(v___x_350_, 0);
lean_inc(v_a_351_);
lean_dec_ref_known(v___x_350_, 1);
v___x_352_ = l_Lean_Expr_cleanupAnnotations(v_a_351_);
v___x_353_ = l_Lean_Expr_isApp(v___x_352_);
if (v___x_353_ == 0)
{
lean_dec_ref(v___x_352_);
goto v___jp_347_;
}
else
{
lean_object* v_arg_354_; lean_object* v___x_355_; lean_object* v___x_356_; uint8_t v___x_357_; 
v_arg_354_ = lean_ctor_get(v___x_352_, 1);
lean_inc_ref(v_arg_354_);
v___x_355_ = l_Lean_Expr_appFnCleanup___redArg(v___x_352_);
v___x_356_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__1));
v___x_357_ = l_Lean_Expr_isConstOf(v___x_355_, v___x_356_);
if (v___x_357_ == 0)
{
uint8_t v___x_358_; 
v___x_358_ = l_Lean_Expr_isApp(v___x_355_);
if (v___x_358_ == 0)
{
lean_dec_ref(v___x_355_);
lean_dec_ref(v_arg_354_);
goto v___jp_347_;
}
else
{
lean_object* v_arg_359_; lean_object* v___x_360_; lean_object* v___x_361_; uint8_t v___x_362_; 
v_arg_359_ = lean_ctor_get(v___x_355_, 1);
lean_inc_ref(v_arg_359_);
v___x_360_ = l_Lean_Expr_appFnCleanup___redArg(v___x_355_);
v___x_361_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__3));
v___x_362_ = l_Lean_Expr_isConstOf(v___x_360_, v___x_361_);
if (v___x_362_ == 0)
{
lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_363_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__5));
v___x_364_ = l_Lean_Expr_isConstOf(v___x_360_, v___x_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; uint8_t v___x_366_; 
v___x_365_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__7));
v___x_366_ = l_Lean_Expr_isConstOf(v___x_360_, v___x_365_);
if (v___x_366_ == 0)
{
lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_367_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__9));
v___x_368_ = l_Lean_Expr_isConstOf(v___x_360_, v___x_367_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; uint8_t v___x_370_; 
v___x_369_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__11));
v___x_370_ = l_Lean_Expr_isConstOf(v___x_360_, v___x_369_);
if (v___x_370_ == 0)
{
lean_object* v___x_371_; uint8_t v___x_372_; 
v___x_371_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__13));
v___x_372_ = l_Lean_Expr_isConstOf(v___x_360_, v___x_371_);
if (v___x_372_ == 0)
{
uint8_t v___x_373_; 
v___x_373_ = l_Lean_Expr_isApp(v___x_360_);
if (v___x_373_ == 0)
{
lean_dec_ref(v___x_360_);
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
goto v___jp_347_;
}
else
{
lean_object* v_arg_374_; lean_object* v___x_375_; lean_object* v___x_376_; uint8_t v___x_377_; 
v_arg_374_ = lean_ctor_get(v___x_360_, 1);
lean_inc_ref(v_arg_374_);
v___x_375_ = l_Lean_Expr_appFnCleanup___redArg(v___x_360_);
v___x_376_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__16));
v___x_377_ = l_Lean_Expr_isConstOf(v___x_375_, v___x_376_);
if (v___x_377_ == 0)
{
uint8_t v___x_378_; 
v___x_378_ = l_Lean_Expr_isApp(v___x_375_);
if (v___x_378_ == 0)
{
lean_dec_ref(v___x_375_);
lean_dec_ref(v_arg_374_);
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
goto v___jp_347_;
}
else
{
lean_object* v___x_379_; lean_object* v___x_380_; uint8_t v___x_381_; 
v___x_379_ = l_Lean_Expr_appFnCleanup___redArg(v___x_375_);
v___x_380_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__18));
v___x_381_ = l_Lean_Expr_isConstOf(v___x_379_, v___x_380_);
if (v___x_381_ == 0)
{
lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_382_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__20));
v___x_383_ = l_Lean_Expr_isConstOf(v___x_379_, v___x_382_);
if (v___x_383_ == 0)
{
lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_384_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__22));
v___x_385_ = l_Lean_Expr_isConstOf(v___x_379_, v___x_384_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; uint8_t v___x_387_; 
v___x_386_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__24));
v___x_387_ = l_Lean_Expr_isConstOf(v___x_379_, v___x_386_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_388_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__26));
v___x_389_ = l_Lean_Expr_isConstOf(v___x_379_, v___x_388_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_390_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__28));
v___x_391_ = l_Lean_Expr_isConstOf(v___x_379_, v___x_390_);
if (v___x_391_ == 0)
{
uint8_t v___x_392_; 
v___x_392_ = l_Lean_Expr_isApp(v___x_379_);
if (v___x_392_ == 0)
{
lean_dec_ref(v___x_379_);
lean_dec_ref(v_arg_374_);
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
goto v___jp_347_;
}
else
{
lean_object* v___x_393_; lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_393_ = l_Lean_Expr_appFnCleanup___redArg(v___x_379_);
v___x_394_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__30));
v___x_395_ = l_Lean_Expr_isConstOf(v___x_393_, v___x_394_);
if (v___x_395_ == 0)
{
uint8_t v___x_396_; 
v___x_396_ = l_Lean_Expr_isApp(v___x_393_);
if (v___x_396_ == 0)
{
lean_dec_ref(v___x_393_);
lean_dec_ref(v_arg_374_);
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
goto v___jp_347_;
}
else
{
lean_object* v___x_397_; lean_object* v___x_398_; uint8_t v___x_399_; 
v___x_397_ = l_Lean_Expr_appFnCleanup___redArg(v___x_393_);
v___x_398_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__33));
v___x_399_ = l_Lean_Expr_isConstOf(v___x_397_, v___x_398_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; uint8_t v___x_401_; 
v___x_400_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__36));
v___x_401_ = l_Lean_Expr_isConstOf(v___x_397_, v___x_400_);
if (v___x_401_ == 0)
{
lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_402_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__39));
v___x_403_ = l_Lean_Expr_isConstOf(v___x_397_, v___x_402_);
if (v___x_403_ == 0)
{
lean_object* v___x_404_; uint8_t v___x_405_; 
v___x_404_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__42));
v___x_405_ = l_Lean_Expr_isConstOf(v___x_397_, v___x_404_);
if (v___x_405_ == 0)
{
lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_406_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__45));
v___x_407_ = l_Lean_Expr_isConstOf(v___x_397_, v___x_406_);
if (v___x_407_ == 0)
{
lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_408_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__48));
v___x_409_ = l_Lean_Expr_isConstOf(v___x_397_, v___x_408_);
lean_dec_ref(v___x_397_);
if (v___x_409_ == 0)
{
lean_dec_ref(v_arg_374_);
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
goto v___jp_347_;
}
else
{
lean_object* v___x_410_; 
v___x_410_ = l_Lean_Meta_Structural_isInstHAddNat___redArg(v_arg_374_, v___y_343_);
if (lean_obj_tag(v___x_410_) == 0)
{
lean_object* v_a_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_442_; 
v_a_411_ = lean_ctor_get(v___x_410_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_410_);
if (v_isSharedCheck_442_ == 0)
{
v___x_413_ = v___x_410_;
v_isShared_414_ = v_isSharedCheck_442_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_a_411_);
lean_dec(v___x_410_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_442_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
uint8_t v___x_415_; 
v___x_415_ = lean_unbox(v_a_411_);
lean_dec(v_a_411_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; lean_object* v___x_418_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v___x_416_ = lean_box(0);
if (v_isShared_414_ == 0)
{
lean_ctor_set(v___x_413_, 0, v___x_416_);
v___x_418_ = v___x_413_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v___x_416_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
else
{
lean_object* v___x_420_; 
lean_del_object(v___x_413_);
v___x_420_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_420_) == 0)
{
lean_object* v_a_421_; 
v_a_421_ = lean_ctor_get(v___x_420_, 0);
lean_inc(v_a_421_);
if (lean_obj_tag(v_a_421_) == 0)
{
lean_dec_ref(v_arg_354_);
return v___x_420_;
}
else
{
lean_object* v_val_422_; lean_object* v___x_423_; 
lean_dec_ref_known(v___x_420_, 1);
v_val_422_ = lean_ctor_get(v_a_421_, 0);
lean_inc(v_val_422_);
lean_dec_ref_known(v_a_421_, 1);
v___x_423_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_423_) == 0)
{
lean_object* v_a_424_; 
v_a_424_ = lean_ctor_get(v___x_423_, 0);
lean_inc(v_a_424_);
if (lean_obj_tag(v_a_424_) == 0)
{
lean_dec(v_val_422_);
return v___x_423_;
}
else
{
lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_440_; 
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_440_ == 0)
{
lean_object* v_unused_441_; 
v_unused_441_ = lean_ctor_get(v___x_423_, 0);
lean_dec(v_unused_441_);
v___x_426_ = v___x_423_;
v_isShared_427_ = v_isSharedCheck_440_;
goto v_resetjp_425_;
}
else
{
lean_dec(v___x_423_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_440_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v_val_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_439_; 
v_val_428_ = lean_ctor_get(v_a_424_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v_a_424_);
if (v_isSharedCheck_439_ == 0)
{
v___x_430_ = v_a_424_;
v_isShared_431_ = v_isSharedCheck_439_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_val_428_);
lean_dec(v_a_424_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_439_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_432_; lean_object* v___x_434_; 
v___x_432_ = lean_nat_add(v_val_422_, v_val_428_);
lean_dec(v_val_428_);
lean_dec(v_val_422_);
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 0, v___x_432_);
v___x_434_ = v___x_430_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v___x_432_);
v___x_434_ = v_reuseFailAlloc_438_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
lean_object* v___x_436_; 
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 0, v___x_434_);
v___x_436_ = v___x_426_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_434_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
}
}
}
else
{
lean_dec(v_val_422_);
return v___x_423_;
}
}
}
else
{
lean_dec_ref(v_arg_354_);
return v___x_420_;
}
}
}
}
else
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v_a_443_ = lean_ctor_get(v___x_410_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_410_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v___x_410_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_410_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_a_443_);
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
}
else
{
lean_object* v___x_451_; 
lean_dec_ref(v___x_397_);
v___x_451_ = l_Lean_Meta_Structural_isInstHSubNat___redArg(v_arg_374_, v___y_343_);
if (lean_obj_tag(v___x_451_) == 0)
{
lean_object* v_a_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_483_; 
v_a_452_ = lean_ctor_get(v___x_451_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_451_);
if (v_isSharedCheck_483_ == 0)
{
v___x_454_ = v___x_451_;
v_isShared_455_ = v_isSharedCheck_483_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_a_452_);
lean_dec(v___x_451_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_483_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
uint8_t v___x_456_; 
v___x_456_ = lean_unbox(v_a_452_);
lean_dec(v_a_452_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; lean_object* v___x_459_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v___x_457_ = lean_box(0);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 0, v___x_457_);
v___x_459_ = v___x_454_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v___x_457_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
else
{
lean_object* v___x_461_; 
lean_del_object(v___x_454_);
v___x_461_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_462_; 
v_a_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc(v_a_462_);
if (lean_obj_tag(v_a_462_) == 0)
{
lean_dec_ref(v_arg_354_);
return v___x_461_;
}
else
{
lean_object* v_val_463_; lean_object* v___x_464_; 
lean_dec_ref_known(v___x_461_, 1);
v_val_463_ = lean_ctor_get(v_a_462_, 0);
lean_inc(v_val_463_);
lean_dec_ref_known(v_a_462_, 1);
v___x_464_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
lean_inc(v_a_465_);
if (lean_obj_tag(v_a_465_) == 0)
{
lean_dec(v_val_463_);
return v___x_464_;
}
else
{
lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_481_; 
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_481_ == 0)
{
lean_object* v_unused_482_; 
v_unused_482_ = lean_ctor_get(v___x_464_, 0);
lean_dec(v_unused_482_);
v___x_467_ = v___x_464_;
v_isShared_468_ = v_isSharedCheck_481_;
goto v_resetjp_466_;
}
else
{
lean_dec(v___x_464_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_481_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v_val_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_480_; 
v_val_469_ = lean_ctor_get(v_a_465_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v_a_465_);
if (v_isSharedCheck_480_ == 0)
{
v___x_471_ = v_a_465_;
v_isShared_472_ = v_isSharedCheck_480_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_val_469_);
lean_dec(v_a_465_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_480_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_473_; lean_object* v___x_475_; 
v___x_473_ = lean_nat_sub(v_val_463_, v_val_469_);
lean_dec(v_val_469_);
lean_dec(v_val_463_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 0, v___x_473_);
v___x_475_ = v___x_471_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_473_);
v___x_475_ = v_reuseFailAlloc_479_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
lean_object* v___x_477_; 
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 0, v___x_475_);
v___x_477_ = v___x_467_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v___x_475_);
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
}
}
else
{
lean_dec(v_val_463_);
return v___x_464_;
}
}
}
else
{
lean_dec_ref(v_arg_354_);
return v___x_461_;
}
}
}
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v_a_484_ = lean_ctor_get(v___x_451_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_451_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_451_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_451_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_484_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
}
else
{
lean_object* v___x_492_; 
lean_dec_ref(v___x_397_);
v___x_492_ = l_Lean_Meta_Structural_isInstHMulNat___redArg(v_arg_374_, v___y_343_);
if (lean_obj_tag(v___x_492_) == 0)
{
lean_object* v_a_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_524_; 
v_a_493_ = lean_ctor_get(v___x_492_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_492_);
if (v_isSharedCheck_524_ == 0)
{
v___x_495_ = v___x_492_;
v_isShared_496_ = v_isSharedCheck_524_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_a_493_);
lean_dec(v___x_492_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_524_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
uint8_t v___x_497_; 
v___x_497_ = lean_unbox(v_a_493_);
lean_dec(v_a_493_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; lean_object* v___x_500_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v___x_498_ = lean_box(0);
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 0, v___x_498_);
v___x_500_ = v___x_495_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v___x_498_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
else
{
lean_object* v___x_502_; 
lean_del_object(v___x_495_);
v___x_502_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; 
v_a_503_ = lean_ctor_get(v___x_502_, 0);
lean_inc(v_a_503_);
if (lean_obj_tag(v_a_503_) == 0)
{
lean_dec_ref(v_arg_354_);
return v___x_502_;
}
else
{
lean_object* v_val_504_; lean_object* v___x_505_; 
lean_dec_ref_known(v___x_502_, 1);
v_val_504_ = lean_ctor_get(v_a_503_, 0);
lean_inc(v_val_504_);
lean_dec_ref_known(v_a_503_, 1);
v___x_505_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_505_) == 0)
{
lean_object* v_a_506_; 
v_a_506_ = lean_ctor_get(v___x_505_, 0);
lean_inc(v_a_506_);
if (lean_obj_tag(v_a_506_) == 0)
{
lean_dec(v_val_504_);
return v___x_505_;
}
else
{
lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_522_; 
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_522_ == 0)
{
lean_object* v_unused_523_; 
v_unused_523_ = lean_ctor_get(v___x_505_, 0);
lean_dec(v_unused_523_);
v___x_508_ = v___x_505_;
v_isShared_509_ = v_isSharedCheck_522_;
goto v_resetjp_507_;
}
else
{
lean_dec(v___x_505_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_522_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v_val_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_521_; 
v_val_510_ = lean_ctor_get(v_a_506_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v_a_506_);
if (v_isSharedCheck_521_ == 0)
{
v___x_512_ = v_a_506_;
v_isShared_513_ = v_isSharedCheck_521_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_val_510_);
lean_dec(v_a_506_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_521_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_514_; lean_object* v___x_516_; 
v___x_514_ = lean_nat_mul(v_val_504_, v_val_510_);
lean_dec(v_val_510_);
lean_dec(v_val_504_);
if (v_isShared_513_ == 0)
{
lean_ctor_set(v___x_512_, 0, v___x_514_);
v___x_516_ = v___x_512_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v___x_514_);
v___x_516_ = v_reuseFailAlloc_520_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
lean_object* v___x_518_; 
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 0, v___x_516_);
v___x_518_ = v___x_508_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v___x_516_);
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
}
}
else
{
lean_dec(v_val_504_);
return v___x_505_;
}
}
}
else
{
lean_dec_ref(v_arg_354_);
return v___x_502_;
}
}
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_532_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v_a_525_ = lean_ctor_get(v___x_492_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_492_);
if (v_isSharedCheck_532_ == 0)
{
v___x_527_ = v___x_492_;
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_492_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_530_; 
if (v_isShared_528_ == 0)
{
v___x_530_ = v___x_527_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_525_);
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
}
else
{
lean_object* v___x_533_; 
lean_dec_ref(v___x_397_);
v___x_533_ = l_Lean_Meta_Structural_isInstHDivNat___redArg(v_arg_374_, v___y_343_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_565_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_565_ == 0)
{
v___x_536_ = v___x_533_;
v_isShared_537_ = v_isSharedCheck_565_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_533_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_565_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
uint8_t v___x_538_; 
v___x_538_ = lean_unbox(v_a_534_);
lean_dec(v_a_534_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; lean_object* v___x_541_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v___x_539_ = lean_box(0);
if (v_isShared_537_ == 0)
{
lean_ctor_set(v___x_536_, 0, v___x_539_);
v___x_541_ = v___x_536_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v___x_539_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
else
{
lean_object* v___x_543_; 
lean_del_object(v___x_536_);
v___x_543_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_543_) == 0)
{
lean_object* v_a_544_; 
v_a_544_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_a_544_);
if (lean_obj_tag(v_a_544_) == 0)
{
lean_dec_ref(v_arg_354_);
return v___x_543_;
}
else
{
lean_object* v_val_545_; lean_object* v___x_546_; 
lean_dec_ref_known(v___x_543_, 1);
v_val_545_ = lean_ctor_get(v_a_544_, 0);
lean_inc(v_val_545_);
lean_dec_ref_known(v_a_544_, 1);
v___x_546_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_546_) == 0)
{
lean_object* v_a_547_; 
v_a_547_ = lean_ctor_get(v___x_546_, 0);
lean_inc(v_a_547_);
if (lean_obj_tag(v_a_547_) == 0)
{
lean_dec(v_val_545_);
return v___x_546_;
}
else
{
lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_563_; 
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_563_ == 0)
{
lean_object* v_unused_564_; 
v_unused_564_ = lean_ctor_get(v___x_546_, 0);
lean_dec(v_unused_564_);
v___x_549_ = v___x_546_;
v_isShared_550_ = v_isSharedCheck_563_;
goto v_resetjp_548_;
}
else
{
lean_dec(v___x_546_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_563_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v_val_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_562_; 
v_val_551_ = lean_ctor_get(v_a_547_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v_a_547_);
if (v_isSharedCheck_562_ == 0)
{
v___x_553_ = v_a_547_;
v_isShared_554_ = v_isSharedCheck_562_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_val_551_);
lean_dec(v_a_547_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_562_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_555_; lean_object* v___x_557_; 
v___x_555_ = lean_nat_div(v_val_545_, v_val_551_);
lean_dec(v_val_551_);
lean_dec(v_val_545_);
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 0, v___x_555_);
v___x_557_ = v___x_553_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_555_);
v___x_557_ = v_reuseFailAlloc_561_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
lean_object* v___x_559_; 
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 0, v___x_557_);
v___x_559_ = v___x_549_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v___x_557_);
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
else
{
lean_dec(v_val_545_);
return v___x_546_;
}
}
}
else
{
lean_dec_ref(v_arg_354_);
return v___x_543_;
}
}
}
}
else
{
lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_573_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v_a_566_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_573_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_573_ == 0)
{
v___x_568_ = v___x_533_;
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_533_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_571_; 
if (v_isShared_569_ == 0)
{
v___x_571_ = v___x_568_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_a_566_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
}
}
}
else
{
lean_object* v___x_574_; 
lean_dec_ref(v___x_397_);
v___x_574_ = l_Lean_Meta_Structural_isInstHModNat___redArg(v_arg_374_, v___y_343_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_606_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_606_ == 0)
{
v___x_577_ = v___x_574_;
v_isShared_578_ = v_isSharedCheck_606_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_574_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_606_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
uint8_t v___x_579_; 
v___x_579_ = lean_unbox(v_a_575_);
lean_dec(v_a_575_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; lean_object* v___x_582_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v___x_580_ = lean_box(0);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v___x_580_);
v___x_582_ = v___x_577_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v___x_580_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
else
{
lean_object* v___x_584_; 
lean_del_object(v___x_577_);
v___x_584_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v_a_585_; 
v_a_585_ = lean_ctor_get(v___x_584_, 0);
lean_inc(v_a_585_);
if (lean_obj_tag(v_a_585_) == 0)
{
lean_dec_ref(v_arg_354_);
return v___x_584_;
}
else
{
lean_object* v_val_586_; lean_object* v___x_587_; 
lean_dec_ref_known(v___x_584_, 1);
v_val_586_ = lean_ctor_get(v_a_585_, 0);
lean_inc(v_val_586_);
lean_dec_ref_known(v_a_585_, 1);
v___x_587_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_a_588_);
if (lean_obj_tag(v_a_588_) == 0)
{
lean_dec(v_val_586_);
return v___x_587_;
}
else
{
lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_604_; 
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_604_ == 0)
{
lean_object* v_unused_605_; 
v_unused_605_ = lean_ctor_get(v___x_587_, 0);
lean_dec(v_unused_605_);
v___x_590_ = v___x_587_;
v_isShared_591_ = v_isSharedCheck_604_;
goto v_resetjp_589_;
}
else
{
lean_dec(v___x_587_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_604_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v_val_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_603_; 
v_val_592_ = lean_ctor_get(v_a_588_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v_a_588_);
if (v_isSharedCheck_603_ == 0)
{
v___x_594_ = v_a_588_;
v_isShared_595_ = v_isSharedCheck_603_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_val_592_);
lean_dec(v_a_588_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_603_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_596_; lean_object* v___x_598_; 
v___x_596_ = lean_nat_mod(v_val_586_, v_val_592_);
lean_dec(v_val_592_);
lean_dec(v_val_586_);
if (v_isShared_595_ == 0)
{
lean_ctor_set(v___x_594_, 0, v___x_596_);
v___x_598_ = v___x_594_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v___x_596_);
v___x_598_ = v_reuseFailAlloc_602_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
lean_object* v___x_600_; 
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 0, v___x_598_);
v___x_600_ = v___x_590_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v___x_598_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
}
}
}
}
else
{
lean_dec(v_val_586_);
return v___x_587_;
}
}
}
else
{
lean_dec_ref(v_arg_354_);
return v___x_584_;
}
}
}
}
else
{
lean_object* v_a_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_614_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v_a_607_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_614_ == 0)
{
v___x_609_ = v___x_574_;
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_a_607_);
lean_dec(v___x_574_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_612_; 
if (v_isShared_610_ == 0)
{
v___x_612_ = v___x_609_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_a_607_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
}
}
else
{
lean_object* v___x_615_; 
lean_dec_ref(v___x_397_);
v___x_615_ = l_Lean_Meta_Structural_isInstHPowNat___redArg(v_arg_374_, v___y_343_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_626_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_626_ == 0)
{
v___x_618_ = v___x_615_;
v_isShared_619_ = v_isSharedCheck_626_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_615_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_626_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
uint8_t v___x_620_; 
v___x_620_ = lean_unbox(v_a_616_);
lean_dec(v_a_616_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; lean_object* v___x_623_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v___x_621_ = lean_box(0);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_621_);
v___x_623_ = v___x_618_;
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
lean_object* v___x_625_; 
lean_del_object(v___x_618_);
v___x_625_ = l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_evalPow(v_arg_359_, v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
return v___x_625_;
}
}
}
else
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v_a_627_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_634_ == 0)
{
v___x_629_ = v___x_615_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_615_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_627_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
}
}
}
else
{
lean_object* v___x_635_; 
lean_dec_ref(v___x_393_);
v___x_635_ = l_Lean_Meta_Structural_isInstPowNat___redArg(v_arg_374_, v___y_343_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_646_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_646_ == 0)
{
v___x_638_ = v___x_635_;
v_isShared_639_ = v_isSharedCheck_646_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_635_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_646_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
uint8_t v___x_640_; 
v___x_640_ = lean_unbox(v_a_636_);
lean_dec(v_a_636_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; lean_object* v___x_643_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v___x_641_ = lean_box(0);
if (v_isShared_639_ == 0)
{
lean_ctor_set(v___x_638_, 0, v___x_641_);
v___x_643_ = v___x_638_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v___x_641_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
else
{
lean_object* v___x_645_; 
lean_del_object(v___x_638_);
v___x_645_ = l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_evalPow(v_arg_359_, v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
return v___x_645_;
}
}
}
else
{
lean_object* v_a_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_654_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v_a_647_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_654_ == 0)
{
v___x_649_ = v___x_635_;
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_a_647_);
lean_dec(v___x_635_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_652_; 
if (v_isShared_650_ == 0)
{
v___x_652_ = v___x_649_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_a_647_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
}
}
else
{
lean_object* v___x_655_; 
lean_dec_ref(v___x_379_);
v___x_655_ = l_Lean_Meta_Structural_isInstAddNat___redArg(v_arg_374_, v___y_343_);
if (lean_obj_tag(v___x_655_) == 0)
{
lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_687_; 
v_a_656_ = lean_ctor_get(v___x_655_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_687_ == 0)
{
v___x_658_ = v___x_655_;
v_isShared_659_ = v_isSharedCheck_687_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_dec(v___x_655_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_687_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
uint8_t v___x_660_; 
v___x_660_ = lean_unbox(v_a_656_);
lean_dec(v_a_656_);
if (v___x_660_ == 0)
{
lean_object* v___x_661_; lean_object* v___x_663_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v___x_661_ = lean_box(0);
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 0, v___x_661_);
v___x_663_ = v___x_658_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v___x_661_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
else
{
lean_object* v___x_665_; 
lean_del_object(v___x_658_);
v___x_665_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v_a_666_; 
v_a_666_ = lean_ctor_get(v___x_665_, 0);
lean_inc(v_a_666_);
if (lean_obj_tag(v_a_666_) == 0)
{
lean_dec_ref(v_arg_354_);
return v___x_665_;
}
else
{
lean_object* v_val_667_; lean_object* v___x_668_; 
lean_dec_ref_known(v___x_665_, 1);
v_val_667_ = lean_ctor_get(v_a_666_, 0);
lean_inc(v_val_667_);
lean_dec_ref_known(v_a_666_, 1);
v___x_668_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v_a_669_; 
v_a_669_ = lean_ctor_get(v___x_668_, 0);
lean_inc(v_a_669_);
if (lean_obj_tag(v_a_669_) == 0)
{
lean_dec(v_val_667_);
return v___x_668_;
}
else
{
lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_685_; 
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_685_ == 0)
{
lean_object* v_unused_686_; 
v_unused_686_ = lean_ctor_get(v___x_668_, 0);
lean_dec(v_unused_686_);
v___x_671_ = v___x_668_;
v_isShared_672_ = v_isSharedCheck_685_;
goto v_resetjp_670_;
}
else
{
lean_dec(v___x_668_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_685_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v_val_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_684_; 
v_val_673_ = lean_ctor_get(v_a_669_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v_a_669_);
if (v_isSharedCheck_684_ == 0)
{
v___x_675_ = v_a_669_;
v_isShared_676_ = v_isSharedCheck_684_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_val_673_);
lean_dec(v_a_669_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_684_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_677_ = lean_nat_add(v_val_667_, v_val_673_);
lean_dec(v_val_673_);
lean_dec(v_val_667_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_677_);
v___x_679_ = v___x_675_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v___x_677_);
v___x_679_ = v_reuseFailAlloc_683_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_681_; 
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 0, v___x_679_);
v___x_681_ = v___x_671_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v___x_679_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
}
}
}
else
{
lean_dec(v_val_667_);
return v___x_668_;
}
}
}
else
{
lean_dec_ref(v_arg_354_);
return v___x_665_;
}
}
}
}
else
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v_a_688_ = lean_ctor_get(v___x_655_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_655_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_655_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_a_688_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
}
else
{
lean_object* v___x_696_; 
lean_dec_ref(v___x_379_);
v___x_696_ = l_Lean_Meta_Structural_isInstSubNat___redArg(v_arg_374_, v___y_343_);
if (lean_obj_tag(v___x_696_) == 0)
{
lean_object* v_a_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_728_; 
v_a_697_ = lean_ctor_get(v___x_696_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_696_);
if (v_isSharedCheck_728_ == 0)
{
v___x_699_ = v___x_696_;
v_isShared_700_ = v_isSharedCheck_728_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_a_697_);
lean_dec(v___x_696_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_728_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
uint8_t v___x_701_; 
v___x_701_ = lean_unbox(v_a_697_);
lean_dec(v_a_697_);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; lean_object* v___x_704_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v___x_702_ = lean_box(0);
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 0, v___x_702_);
v___x_704_ = v___x_699_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v___x_702_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
else
{
lean_object* v___x_706_; 
lean_del_object(v___x_699_);
v___x_706_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v_a_707_; 
v_a_707_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_a_707_);
if (lean_obj_tag(v_a_707_) == 0)
{
lean_dec_ref(v_arg_354_);
return v___x_706_;
}
else
{
lean_object* v_val_708_; lean_object* v___x_709_; 
lean_dec_ref_known(v___x_706_, 1);
v_val_708_ = lean_ctor_get(v_a_707_, 0);
lean_inc(v_val_708_);
lean_dec_ref_known(v_a_707_, 1);
v___x_709_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v_a_710_; 
v_a_710_ = lean_ctor_get(v___x_709_, 0);
lean_inc(v_a_710_);
if (lean_obj_tag(v_a_710_) == 0)
{
lean_dec(v_val_708_);
return v___x_709_;
}
else
{
lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_726_; 
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_726_ == 0)
{
lean_object* v_unused_727_; 
v_unused_727_ = lean_ctor_get(v___x_709_, 0);
lean_dec(v_unused_727_);
v___x_712_ = v___x_709_;
v_isShared_713_ = v_isSharedCheck_726_;
goto v_resetjp_711_;
}
else
{
lean_dec(v___x_709_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_726_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v_val_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_725_; 
v_val_714_ = lean_ctor_get(v_a_710_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v_a_710_);
if (v_isSharedCheck_725_ == 0)
{
v___x_716_ = v_a_710_;
v_isShared_717_ = v_isSharedCheck_725_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_val_714_);
lean_dec(v_a_710_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_725_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_718_; lean_object* v___x_720_; 
v___x_718_ = lean_nat_sub(v_val_708_, v_val_714_);
lean_dec(v_val_714_);
lean_dec(v_val_708_);
if (v_isShared_717_ == 0)
{
lean_ctor_set(v___x_716_, 0, v___x_718_);
v___x_720_ = v___x_716_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_718_);
v___x_720_ = v_reuseFailAlloc_724_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
lean_object* v___x_722_; 
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 0, v___x_720_);
v___x_722_ = v___x_712_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_720_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
}
}
}
else
{
lean_dec(v_val_708_);
return v___x_709_;
}
}
}
else
{
lean_dec_ref(v_arg_354_);
return v___x_706_;
}
}
}
}
else
{
lean_object* v_a_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_736_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v_a_729_ = lean_ctor_get(v___x_696_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_696_);
if (v_isSharedCheck_736_ == 0)
{
v___x_731_ = v___x_696_;
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_a_729_);
lean_dec(v___x_696_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
if (v_isShared_732_ == 0)
{
v___x_734_ = v___x_731_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_729_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
}
}
else
{
lean_object* v___x_737_; 
lean_dec_ref(v___x_379_);
v___x_737_ = l_Lean_Meta_Structural_isInstMulNat___redArg(v_arg_374_, v___y_343_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_769_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_769_ == 0)
{
v___x_740_ = v___x_737_;
v_isShared_741_ = v_isSharedCheck_769_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_737_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_769_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
uint8_t v___x_742_; 
v___x_742_ = lean_unbox(v_a_738_);
lean_dec(v_a_738_);
if (v___x_742_ == 0)
{
lean_object* v___x_743_; lean_object* v___x_745_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v___x_743_ = lean_box(0);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 0, v___x_743_);
v___x_745_ = v___x_740_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v___x_743_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
else
{
lean_object* v___x_747_; 
lean_del_object(v___x_740_);
v___x_747_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v_a_748_; 
v_a_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_748_);
if (lean_obj_tag(v_a_748_) == 0)
{
lean_dec_ref(v_arg_354_);
return v___x_747_;
}
else
{
lean_object* v_val_749_; lean_object* v___x_750_; 
lean_dec_ref_known(v___x_747_, 1);
v_val_749_ = lean_ctor_get(v_a_748_, 0);
lean_inc(v_val_749_);
lean_dec_ref_known(v_a_748_, 1);
v___x_750_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v_a_751_; 
v_a_751_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_a_751_);
if (lean_obj_tag(v_a_751_) == 0)
{
lean_dec(v_val_749_);
return v___x_750_;
}
else
{
lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_767_; 
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_767_ == 0)
{
lean_object* v_unused_768_; 
v_unused_768_ = lean_ctor_get(v___x_750_, 0);
lean_dec(v_unused_768_);
v___x_753_ = v___x_750_;
v_isShared_754_ = v_isSharedCheck_767_;
goto v_resetjp_752_;
}
else
{
lean_dec(v___x_750_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_767_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v_val_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_766_; 
v_val_755_ = lean_ctor_get(v_a_751_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v_a_751_);
if (v_isSharedCheck_766_ == 0)
{
v___x_757_ = v_a_751_;
v_isShared_758_ = v_isSharedCheck_766_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_val_755_);
lean_dec(v_a_751_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_766_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_759_; lean_object* v___x_761_; 
v___x_759_ = lean_nat_mul(v_val_749_, v_val_755_);
lean_dec(v_val_755_);
lean_dec(v_val_749_);
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 0, v___x_759_);
v___x_761_ = v___x_757_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v___x_759_);
v___x_761_ = v_reuseFailAlloc_765_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
lean_object* v___x_763_; 
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 0, v___x_761_);
v___x_763_ = v___x_753_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v___x_761_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
}
}
else
{
lean_dec(v_val_749_);
return v___x_750_;
}
}
}
else
{
lean_dec_ref(v_arg_354_);
return v___x_747_;
}
}
}
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_777_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v_a_770_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_777_ == 0)
{
v___x_772_ = v___x_737_;
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v___x_737_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_775_; 
if (v_isShared_773_ == 0)
{
v___x_775_ = v___x_772_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_770_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
}
}
else
{
lean_object* v___x_778_; 
lean_dec_ref(v___x_379_);
v___x_778_ = l_Lean_Meta_Structural_isInstDivNat___redArg(v_arg_374_, v___y_343_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_810_; 
v_a_779_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_810_ == 0)
{
v___x_781_ = v___x_778_;
v_isShared_782_ = v_isSharedCheck_810_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_778_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_810_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
uint8_t v___x_783_; 
v___x_783_ = lean_unbox(v_a_779_);
lean_dec(v_a_779_);
if (v___x_783_ == 0)
{
lean_object* v___x_784_; lean_object* v___x_786_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v___x_784_ = lean_box(0);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v___x_784_);
v___x_786_ = v___x_781_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v___x_784_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
else
{
lean_object* v___x_788_; 
lean_del_object(v___x_781_);
v___x_788_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_788_) == 0)
{
lean_object* v_a_789_; 
v_a_789_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_a_789_);
if (lean_obj_tag(v_a_789_) == 0)
{
lean_dec_ref(v_arg_354_);
return v___x_788_;
}
else
{
lean_object* v_val_790_; lean_object* v___x_791_; 
lean_dec_ref_known(v___x_788_, 1);
v_val_790_ = lean_ctor_get(v_a_789_, 0);
lean_inc(v_val_790_);
lean_dec_ref_known(v_a_789_, 1);
v___x_791_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_791_) == 0)
{
lean_object* v_a_792_; 
v_a_792_ = lean_ctor_get(v___x_791_, 0);
lean_inc(v_a_792_);
if (lean_obj_tag(v_a_792_) == 0)
{
lean_dec(v_val_790_);
return v___x_791_;
}
else
{
lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_808_; 
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_808_ == 0)
{
lean_object* v_unused_809_; 
v_unused_809_ = lean_ctor_get(v___x_791_, 0);
lean_dec(v_unused_809_);
v___x_794_ = v___x_791_;
v_isShared_795_ = v_isSharedCheck_808_;
goto v_resetjp_793_;
}
else
{
lean_dec(v___x_791_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_808_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v_val_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_807_; 
v_val_796_ = lean_ctor_get(v_a_792_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v_a_792_);
if (v_isSharedCheck_807_ == 0)
{
v___x_798_ = v_a_792_;
v_isShared_799_ = v_isSharedCheck_807_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_val_796_);
lean_dec(v_a_792_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_807_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_800_; lean_object* v___x_802_; 
v___x_800_ = lean_nat_div(v_val_790_, v_val_796_);
lean_dec(v_val_796_);
lean_dec(v_val_790_);
if (v_isShared_799_ == 0)
{
lean_ctor_set(v___x_798_, 0, v___x_800_);
v___x_802_ = v___x_798_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v___x_800_);
v___x_802_ = v_reuseFailAlloc_806_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
lean_object* v___x_804_; 
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 0, v___x_802_);
v___x_804_ = v___x_794_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
}
}
else
{
lean_dec(v_val_790_);
return v___x_791_;
}
}
}
else
{
lean_dec_ref(v_arg_354_);
return v___x_788_;
}
}
}
}
else
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v_a_811_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v___x_778_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_778_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_a_811_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
}
else
{
lean_object* v___x_819_; 
lean_dec_ref(v___x_379_);
v___x_819_ = l_Lean_Meta_Structural_isInstModNat___redArg(v_arg_374_, v___y_343_);
if (lean_obj_tag(v___x_819_) == 0)
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_851_; 
v_a_820_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_851_ == 0)
{
v___x_822_ = v___x_819_;
v_isShared_823_ = v_isSharedCheck_851_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___x_819_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_851_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
uint8_t v___x_824_; 
v___x_824_ = lean_unbox(v_a_820_);
lean_dec(v_a_820_);
if (v___x_824_ == 0)
{
lean_object* v___x_825_; lean_object* v___x_827_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v___x_825_ = lean_box(0);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 0, v___x_825_);
v___x_827_ = v___x_822_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v___x_825_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
else
{
lean_object* v___x_829_; 
lean_del_object(v___x_822_);
v___x_829_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_829_) == 0)
{
lean_object* v_a_830_; 
v_a_830_ = lean_ctor_get(v___x_829_, 0);
lean_inc(v_a_830_);
if (lean_obj_tag(v_a_830_) == 0)
{
lean_dec_ref(v_arg_354_);
return v___x_829_;
}
else
{
lean_object* v_val_831_; lean_object* v___x_832_; 
lean_dec_ref_known(v___x_829_, 1);
v_val_831_ = lean_ctor_get(v_a_830_, 0);
lean_inc(v_val_831_);
lean_dec_ref_known(v_a_830_, 1);
v___x_832_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_object* v_a_833_; 
v_a_833_ = lean_ctor_get(v___x_832_, 0);
lean_inc(v_a_833_);
if (lean_obj_tag(v_a_833_) == 0)
{
lean_dec(v_val_831_);
return v___x_832_;
}
else
{
lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_849_; 
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_849_ == 0)
{
lean_object* v_unused_850_; 
v_unused_850_ = lean_ctor_get(v___x_832_, 0);
lean_dec(v_unused_850_);
v___x_835_ = v___x_832_;
v_isShared_836_ = v_isSharedCheck_849_;
goto v_resetjp_834_;
}
else
{
lean_dec(v___x_832_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_849_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v_val_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_848_; 
v_val_837_ = lean_ctor_get(v_a_833_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v_a_833_);
if (v_isSharedCheck_848_ == 0)
{
v___x_839_ = v_a_833_;
v_isShared_840_ = v_isSharedCheck_848_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_val_837_);
lean_dec(v_a_833_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_848_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_841_; lean_object* v___x_843_; 
v___x_841_ = lean_nat_mod(v_val_831_, v_val_837_);
lean_dec(v_val_837_);
lean_dec(v_val_831_);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 0, v___x_841_);
v___x_843_ = v___x_839_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_841_);
v___x_843_ = v_reuseFailAlloc_847_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
lean_object* v___x_845_; 
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 0, v___x_843_);
v___x_845_ = v___x_835_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_843_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
}
}
}
else
{
lean_dec(v_val_831_);
return v___x_832_;
}
}
}
else
{
lean_dec_ref(v_arg_354_);
return v___x_829_;
}
}
}
}
else
{
lean_object* v_a_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_859_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v_a_852_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_859_ == 0)
{
v___x_854_ = v___x_819_;
v_isShared_855_ = v_isSharedCheck_859_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_a_852_);
lean_dec(v___x_819_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_859_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
lean_object* v___x_857_; 
if (v_isShared_855_ == 0)
{
v___x_857_ = v___x_854_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_a_852_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
}
}
}
}
}
else
{
lean_object* v___x_860_; 
lean_dec_ref(v___x_379_);
v___x_860_ = l_Lean_Meta_Structural_isInstNatPowNat___redArg(v_arg_374_, v___y_343_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_871_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_871_ == 0)
{
v___x_863_ = v___x_860_;
v_isShared_864_ = v_isSharedCheck_871_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_a_861_);
lean_dec(v___x_860_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_871_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
uint8_t v___x_865_; 
v___x_865_ = lean_unbox(v_a_861_);
lean_dec(v_a_861_);
if (v___x_865_ == 0)
{
lean_object* v___x_866_; lean_object* v___x_868_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v___x_866_ = lean_box(0);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 0, v___x_866_);
v___x_868_ = v___x_863_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v___x_866_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
else
{
lean_object* v___x_870_; 
lean_del_object(v___x_863_);
v___x_870_ = l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_evalPow(v_arg_359_, v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
return v___x_870_;
}
}
}
else
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_879_; 
lean_dec_ref(v_arg_359_);
lean_dec_ref(v_arg_354_);
v_a_872_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_879_ == 0)
{
v___x_874_ = v___x_860_;
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v___x_860_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_877_; 
if (v_isShared_875_ == 0)
{
v___x_877_ = v___x_874_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_a_872_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
}
}
}
}
else
{
lean_object* v___x_880_; 
lean_dec_ref(v___x_375_);
lean_dec_ref(v_arg_374_);
v___x_880_ = l_Lean_Meta_Structural_isInstOfNatNat___redArg(v_arg_354_, v___y_343_);
if (lean_obj_tag(v___x_880_) == 0)
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_891_; 
v_a_881_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_891_ == 0)
{
v___x_883_ = v___x_880_;
v_isShared_884_ = v_isSharedCheck_891_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_880_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_891_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
uint8_t v___x_885_; 
v___x_885_ = lean_unbox(v_a_881_);
lean_dec(v_a_881_);
if (v___x_885_ == 0)
{
lean_object* v___x_886_; lean_object* v___x_888_; 
lean_dec_ref(v_arg_359_);
v___x_886_ = lean_box(0);
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 0, v___x_886_);
v___x_888_ = v___x_883_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_886_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
else
{
lean_object* v___x_890_; 
lean_del_object(v___x_883_);
v___x_890_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
return v___x_890_;
}
}
}
else
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_899_; 
lean_dec_ref(v_arg_359_);
v_a_892_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_899_ == 0)
{
v___x_894_ = v___x_880_;
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_880_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_897_; 
if (v_isShared_895_ == 0)
{
v___x_897_ = v___x_894_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_a_892_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
}
}
}
else
{
lean_object* v___x_900_; 
lean_dec_ref(v___x_360_);
v___x_900_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; 
v_a_901_ = lean_ctor_get(v___x_900_, 0);
lean_inc(v_a_901_);
if (lean_obj_tag(v_a_901_) == 0)
{
lean_dec_ref(v_arg_354_);
return v___x_900_;
}
else
{
lean_object* v_val_902_; lean_object* v___x_903_; 
lean_dec_ref_known(v___x_900_, 1);
v_val_902_ = lean_ctor_get(v_a_901_, 0);
lean_inc(v_val_902_);
lean_dec_ref_known(v_a_901_, 1);
v___x_903_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_903_) == 0)
{
lean_object* v_a_904_; 
v_a_904_ = lean_ctor_get(v___x_903_, 0);
lean_inc(v_a_904_);
if (lean_obj_tag(v_a_904_) == 0)
{
lean_dec(v_val_902_);
return v___x_903_;
}
else
{
lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_920_; 
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_920_ == 0)
{
lean_object* v_unused_921_; 
v_unused_921_ = lean_ctor_get(v___x_903_, 0);
lean_dec(v_unused_921_);
v___x_906_ = v___x_903_;
v_isShared_907_ = v_isSharedCheck_920_;
goto v_resetjp_905_;
}
else
{
lean_dec(v___x_903_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_920_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v_val_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_919_; 
v_val_908_ = lean_ctor_get(v_a_904_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v_a_904_);
if (v_isSharedCheck_919_ == 0)
{
v___x_910_ = v_a_904_;
v_isShared_911_ = v_isSharedCheck_919_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_val_908_);
lean_dec(v_a_904_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_919_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_912_; lean_object* v___x_914_; 
v___x_912_ = lean_nat_add(v_val_902_, v_val_908_);
lean_dec(v_val_908_);
lean_dec(v_val_902_);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 0, v___x_912_);
v___x_914_ = v___x_910_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v___x_912_);
v___x_914_ = v_reuseFailAlloc_918_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
lean_object* v___x_916_; 
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 0, v___x_914_);
v___x_916_ = v___x_906_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v___x_914_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
}
}
}
else
{
lean_dec(v_val_902_);
return v___x_903_;
}
}
}
else
{
lean_dec_ref(v_arg_354_);
return v___x_900_;
}
}
}
else
{
lean_object* v___x_922_; 
lean_dec_ref(v___x_360_);
v___x_922_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_923_);
if (lean_obj_tag(v_a_923_) == 0)
{
lean_dec_ref(v_arg_354_);
return v___x_922_;
}
else
{
lean_object* v_val_924_; lean_object* v___x_925_; 
lean_dec_ref_known(v___x_922_, 1);
v_val_924_ = lean_ctor_get(v_a_923_, 0);
lean_inc(v_val_924_);
lean_dec_ref_known(v_a_923_, 1);
v___x_925_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v_a_926_; 
v_a_926_ = lean_ctor_get(v___x_925_, 0);
lean_inc(v_a_926_);
if (lean_obj_tag(v_a_926_) == 0)
{
lean_dec(v_val_924_);
return v___x_925_;
}
else
{
lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_942_; 
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_942_ == 0)
{
lean_object* v_unused_943_; 
v_unused_943_ = lean_ctor_get(v___x_925_, 0);
lean_dec(v_unused_943_);
v___x_928_ = v___x_925_;
v_isShared_929_ = v_isSharedCheck_942_;
goto v_resetjp_927_;
}
else
{
lean_dec(v___x_925_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_942_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v_val_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_941_; 
v_val_930_ = lean_ctor_get(v_a_926_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v_a_926_);
if (v_isSharedCheck_941_ == 0)
{
v___x_932_ = v_a_926_;
v_isShared_933_ = v_isSharedCheck_941_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_val_930_);
lean_dec(v_a_926_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_941_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_934_; lean_object* v___x_936_; 
v___x_934_ = lean_nat_sub(v_val_924_, v_val_930_);
lean_dec(v_val_930_);
lean_dec(v_val_924_);
if (v_isShared_933_ == 0)
{
lean_ctor_set(v___x_932_, 0, v___x_934_);
v___x_936_ = v___x_932_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v___x_934_);
v___x_936_ = v_reuseFailAlloc_940_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
lean_object* v___x_938_; 
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 0, v___x_936_);
v___x_938_ = v___x_928_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v___x_936_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
return v___x_938_;
}
}
}
}
}
}
else
{
lean_dec(v_val_924_);
return v___x_925_;
}
}
}
else
{
lean_dec_ref(v_arg_354_);
return v___x_922_;
}
}
}
else
{
lean_object* v___x_944_; 
lean_dec_ref(v___x_360_);
v___x_944_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; 
v_a_945_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_a_945_);
if (lean_obj_tag(v_a_945_) == 0)
{
lean_dec_ref(v_arg_354_);
return v___x_944_;
}
else
{
lean_object* v_val_946_; lean_object* v___x_947_; 
lean_dec_ref_known(v___x_944_, 1);
v_val_946_ = lean_ctor_get(v_a_945_, 0);
lean_inc(v_val_946_);
lean_dec_ref_known(v_a_945_, 1);
v___x_947_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; 
v_a_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_a_948_);
if (lean_obj_tag(v_a_948_) == 0)
{
lean_dec(v_val_946_);
return v___x_947_;
}
else
{
lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_964_; 
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_947_);
if (v_isSharedCheck_964_ == 0)
{
lean_object* v_unused_965_; 
v_unused_965_ = lean_ctor_get(v___x_947_, 0);
lean_dec(v_unused_965_);
v___x_950_ = v___x_947_;
v_isShared_951_ = v_isSharedCheck_964_;
goto v_resetjp_949_;
}
else
{
lean_dec(v___x_947_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_964_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v_val_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_963_; 
v_val_952_ = lean_ctor_get(v_a_948_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v_a_948_);
if (v_isSharedCheck_963_ == 0)
{
v___x_954_ = v_a_948_;
v_isShared_955_ = v_isSharedCheck_963_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_val_952_);
lean_dec(v_a_948_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_963_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_956_ = lean_nat_mul(v_val_946_, v_val_952_);
lean_dec(v_val_952_);
lean_dec(v_val_946_);
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 0, v___x_956_);
v___x_958_ = v___x_954_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v___x_956_);
v___x_958_ = v_reuseFailAlloc_962_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
lean_object* v___x_960_; 
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 0, v___x_958_);
v___x_960_ = v___x_950_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_958_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
}
}
}
else
{
lean_dec(v_val_946_);
return v___x_947_;
}
}
}
else
{
lean_dec_ref(v_arg_354_);
return v___x_944_;
}
}
}
else
{
lean_object* v___x_966_; 
lean_dec_ref(v___x_360_);
v___x_966_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v_a_967_; 
v_a_967_ = lean_ctor_get(v___x_966_, 0);
lean_inc(v_a_967_);
if (lean_obj_tag(v_a_967_) == 0)
{
lean_dec_ref(v_arg_354_);
return v___x_966_;
}
else
{
lean_object* v_val_968_; lean_object* v___x_969_; 
lean_dec_ref_known(v___x_966_, 1);
v_val_968_ = lean_ctor_get(v_a_967_, 0);
lean_inc(v_val_968_);
lean_dec_ref_known(v_a_967_, 1);
v___x_969_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
if (lean_obj_tag(v_a_970_) == 0)
{
lean_dec(v_val_968_);
return v___x_969_;
}
else
{
lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_986_; 
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_986_ == 0)
{
lean_object* v_unused_987_; 
v_unused_987_ = lean_ctor_get(v___x_969_, 0);
lean_dec(v_unused_987_);
v___x_972_ = v___x_969_;
v_isShared_973_ = v_isSharedCheck_986_;
goto v_resetjp_971_;
}
else
{
lean_dec(v___x_969_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_986_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v_val_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_985_; 
v_val_974_ = lean_ctor_get(v_a_970_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v_a_970_);
if (v_isSharedCheck_985_ == 0)
{
v___x_976_ = v_a_970_;
v_isShared_977_ = v_isSharedCheck_985_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_val_974_);
lean_dec(v_a_970_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_985_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_978_; lean_object* v___x_980_; 
v___x_978_ = lean_nat_div(v_val_968_, v_val_974_);
lean_dec(v_val_974_);
lean_dec(v_val_968_);
if (v_isShared_977_ == 0)
{
lean_ctor_set(v___x_976_, 0, v___x_978_);
v___x_980_ = v___x_976_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v___x_978_);
v___x_980_ = v_reuseFailAlloc_984_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
lean_object* v___x_982_; 
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 0, v___x_980_);
v___x_982_ = v___x_972_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v___x_980_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
}
}
else
{
lean_dec(v_val_968_);
return v___x_969_;
}
}
}
else
{
lean_dec_ref(v_arg_354_);
return v___x_966_;
}
}
}
else
{
lean_object* v___x_988_; 
lean_dec_ref(v___x_360_);
v___x_988_ = l_Lean_Meta_evalNat(v_arg_359_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_object* v_a_989_; 
v_a_989_ = lean_ctor_get(v___x_988_, 0);
lean_inc(v_a_989_);
if (lean_obj_tag(v_a_989_) == 0)
{
lean_dec_ref(v_arg_354_);
return v___x_988_;
}
else
{
lean_object* v_val_990_; lean_object* v___x_991_; 
lean_dec_ref_known(v___x_988_, 1);
v_val_990_ = lean_ctor_get(v_a_989_, 0);
lean_inc(v_val_990_);
lean_dec_ref_known(v_a_989_, 1);
v___x_991_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
lean_inc(v_a_992_);
if (lean_obj_tag(v_a_992_) == 0)
{
lean_dec(v_val_990_);
return v___x_991_;
}
else
{
lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1008_; 
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1008_ == 0)
{
lean_object* v_unused_1009_; 
v_unused_1009_ = lean_ctor_get(v___x_991_, 0);
lean_dec(v_unused_1009_);
v___x_994_ = v___x_991_;
v_isShared_995_ = v_isSharedCheck_1008_;
goto v_resetjp_993_;
}
else
{
lean_dec(v___x_991_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1008_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v_val_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1007_; 
v_val_996_ = lean_ctor_get(v_a_992_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v_a_992_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_998_ = v_a_992_;
v_isShared_999_ = v_isSharedCheck_1007_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_val_996_);
lean_dec(v_a_992_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1007_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1000_; lean_object* v___x_1002_; 
v___x_1000_ = lean_nat_mod(v_val_990_, v_val_996_);
lean_dec(v_val_996_);
lean_dec(v_val_990_);
if (v_isShared_999_ == 0)
{
lean_ctor_set(v___x_998_, 0, v___x_1000_);
v___x_1002_ = v___x_998_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v___x_1000_);
v___x_1002_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
lean_object* v___x_1004_; 
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 0, v___x_1002_);
v___x_1004_ = v___x_994_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_1002_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
}
}
}
else
{
lean_dec(v_val_990_);
return v___x_991_;
}
}
}
else
{
lean_dec_ref(v_arg_354_);
return v___x_988_;
}
}
}
else
{
lean_object* v___x_1010_; 
lean_dec_ref(v___x_360_);
v___x_1010_ = l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_evalPow(v_arg_359_, v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
return v___x_1010_;
}
}
}
else
{
lean_object* v___x_1011_; 
lean_dec_ref(v___x_355_);
v___x_1011_ = l_Lean_Meta_evalNat(v_arg_354_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_1011_) == 0)
{
lean_object* v_a_1012_; 
v_a_1012_ = lean_ctor_get(v___x_1011_, 0);
lean_inc(v_a_1012_);
if (lean_obj_tag(v_a_1012_) == 0)
{
return v___x_1011_;
}
else
{
lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1029_; 
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_1011_);
if (v_isSharedCheck_1029_ == 0)
{
lean_object* v_unused_1030_; 
v_unused_1030_ = lean_ctor_get(v___x_1011_, 0);
lean_dec(v_unused_1030_);
v___x_1014_ = v___x_1011_;
v_isShared_1015_ = v_isSharedCheck_1029_;
goto v_resetjp_1013_;
}
else
{
lean_dec(v___x_1011_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1029_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v_val_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1028_; 
v_val_1016_ = lean_ctor_get(v_a_1012_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v_a_1012_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1018_ = v_a_1012_;
v_isShared_1019_ = v_isSharedCheck_1028_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_val_1016_);
lean_dec(v_a_1012_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1028_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1023_; 
v___x_1020_ = lean_unsigned_to_nat(1u);
v___x_1021_ = lean_nat_add(v_val_1016_, v___x_1020_);
lean_dec(v_val_1016_);
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 0, v___x_1021_);
v___x_1023_ = v___x_1018_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v___x_1021_);
v___x_1023_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
lean_object* v___x_1025_; 
if (v_isShared_1015_ == 0)
{
lean_ctor_set(v___x_1014_, 0, v___x_1023_);
v___x_1025_ = v___x_1014_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v___x_1023_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
}
}
}
else
{
return v___x_1011_;
}
}
}
}
else
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1038_; 
v_a_1031_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1033_ = v___x_350_;
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_350_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1036_; 
if (v_isShared_1034_ == 0)
{
v___x_1036_ = v___x_1033_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_a_1031_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
v___jp_347_:
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_box(0);
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
return v___x_349_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalNat(lean_object* v_e_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_){
_start:
{
switch(lean_obj_tag(v_e_1039_))
{
case 9:
{
lean_object* v_a_1048_; 
v_a_1048_ = lean_ctor_get(v_e_1039_, 0);
lean_inc_ref(v_a_1048_);
lean_dec_ref_known(v_e_1039_, 1);
if (lean_obj_tag(v_a_1048_) == 0)
{
lean_object* v_val_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1057_; 
v_val_1049_ = lean_ctor_get(v_a_1048_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v_a_1048_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1051_ = v_a_1048_;
v_isShared_1052_ = v_isSharedCheck_1057_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_val_1049_);
lean_dec(v_a_1048_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1057_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
lean_ctor_set_tag(v___x_1051_, 1);
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_val_1049_);
v___x_1054_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
lean_object* v___x_1055_; 
v___x_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
return v___x_1055_;
}
}
}
else
{
lean_dec_ref(v_a_1048_);
goto v___jp_1045_;
}
}
case 10:
{
lean_object* v_expr_1058_; 
v_expr_1058_ = lean_ctor_get(v_e_1039_, 1);
lean_inc_ref(v_expr_1058_);
lean_dec_ref_known(v_e_1039_, 2);
v_e_1039_ = v_expr_1058_;
goto _start;
}
case 4:
{
lean_object* v_declName_1060_; 
v_declName_1060_ = lean_ctor_get(v_e_1039_, 0);
lean_inc(v_declName_1060_);
lean_dec_ref_known(v_e_1039_, 2);
if (lean_obj_tag(v_declName_1060_) == 1)
{
lean_object* v_pre_1061_; 
v_pre_1061_ = lean_ctor_get(v_declName_1060_, 0);
lean_inc(v_pre_1061_);
if (lean_obj_tag(v_pre_1061_) == 1)
{
lean_object* v_pre_1062_; 
v_pre_1062_ = lean_ctor_get(v_pre_1061_, 0);
if (lean_obj_tag(v_pre_1062_) == 0)
{
lean_object* v_str_1063_; lean_object* v_str_1064_; lean_object* v___x_1065_; uint8_t v___x_1066_; 
v_str_1063_ = lean_ctor_get(v_declName_1060_, 1);
lean_inc_ref(v_str_1063_);
lean_dec_ref_known(v_declName_1060_, 2);
v_str_1064_ = lean_ctor_get(v_pre_1061_, 1);
lean_inc_ref(v_str_1064_);
lean_dec_ref_known(v_pre_1061_, 2);
v___x_1065_ = ((lean_object*)(l_Lean_Meta_evalNat___closed__0));
v___x_1066_ = lean_string_dec_eq(v_str_1064_, v___x_1065_);
lean_dec_ref(v_str_1064_);
if (v___x_1066_ == 0)
{
lean_dec_ref(v_str_1063_);
goto v___jp_1045_;
}
else
{
lean_object* v___x_1067_; uint8_t v___x_1068_; 
v___x_1067_ = ((lean_object*)(l_Lean_Meta_evalNat___closed__1));
v___x_1068_ = lean_string_dec_eq(v_str_1063_, v___x_1067_);
lean_dec_ref(v_str_1063_);
if (v___x_1068_ == 0)
{
goto v___jp_1045_;
}
else
{
lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1069_ = ((lean_object*)(l_Lean_Meta_evalNat___closed__2));
v___x_1070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1069_);
return v___x_1070_;
}
}
}
else
{
lean_dec_ref_known(v_pre_1061_, 2);
lean_dec_ref_known(v_declName_1060_, 2);
goto v___jp_1045_;
}
}
else
{
lean_dec(v_pre_1061_);
lean_dec_ref_known(v_declName_1060_, 2);
goto v___jp_1045_;
}
}
else
{
lean_dec(v_declName_1060_);
goto v___jp_1045_;
}
}
case 5:
{
lean_object* v___x_1071_; 
v___x_1071_ = l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit(v_e_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_);
return v___x_1071_;
}
case 2:
{
lean_object* v___x_1072_; 
v___x_1072_ = l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit(v_e_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_);
return v___x_1072_;
}
default: 
{
lean_dec_ref(v_e_1039_);
goto v___jp_1045_;
}
}
v___jp_1045_:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = lean_box(0);
v___x_1047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
return v___x_1047_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_evalPow(lean_object* v_b_1073_, lean_object* v_n_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_){
_start:
{
lean_object* v___x_1080_; 
v___x_1080_ = l_Lean_Meta_evalNat(v_n_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
lean_inc(v_a_1081_);
if (lean_obj_tag(v_a_1081_) == 0)
{
lean_dec_ref(v_b_1073_);
return v___x_1080_;
}
else
{
lean_object* v_val_1082_; uint8_t v___x_1083_; lean_object* v___x_1084_; 
lean_dec_ref_known(v___x_1080_, 1);
v_val_1082_ = lean_ctor_get(v_a_1081_, 0);
lean_inc_n(v_val_1082_, 2);
lean_dec_ref_known(v_a_1081_, 1);
v___x_1083_ = 1;
v___x_1084_ = l_Lean_checkExponent(v_val_1082_, v___x_1083_, v___y_1077_, v___y_1078_);
if (lean_obj_tag(v___x_1084_) == 0)
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1113_; 
v_a_1085_ = lean_ctor_get(v___x_1084_, 0);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___x_1084_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1087_ = v___x_1084_;
v_isShared_1088_ = v_isSharedCheck_1113_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___x_1084_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1113_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
uint8_t v___x_1089_; 
v___x_1089_ = lean_unbox(v_a_1085_);
lean_dec(v_a_1085_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; lean_object* v___x_1092_; 
lean_dec(v_val_1082_);
lean_dec_ref(v_b_1073_);
v___x_1090_ = lean_box(0);
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 0, v___x_1090_);
v___x_1092_ = v___x_1087_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v___x_1090_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
else
{
lean_object* v___x_1094_; 
lean_del_object(v___x_1087_);
v___x_1094_ = l_Lean_Meta_evalNat(v_b_1073_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
if (lean_obj_tag(v___x_1094_) == 0)
{
lean_object* v_a_1095_; 
v_a_1095_ = lean_ctor_get(v___x_1094_, 0);
lean_inc(v_a_1095_);
if (lean_obj_tag(v_a_1095_) == 0)
{
lean_dec(v_val_1082_);
return v___x_1094_;
}
else
{
lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1111_; 
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1111_ == 0)
{
lean_object* v_unused_1112_; 
v_unused_1112_ = lean_ctor_get(v___x_1094_, 0);
lean_dec(v_unused_1112_);
v___x_1097_ = v___x_1094_;
v_isShared_1098_ = v_isSharedCheck_1111_;
goto v_resetjp_1096_;
}
else
{
lean_dec(v___x_1094_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1111_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v_val_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1110_; 
v_val_1099_ = lean_ctor_get(v_a_1095_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v_a_1095_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1101_ = v_a_1095_;
v_isShared_1102_ = v_isSharedCheck_1110_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_val_1099_);
lean_dec(v_a_1095_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1110_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1103_; lean_object* v___x_1105_; 
v___x_1103_ = lean_nat_pow(v_val_1099_, v_val_1082_);
lean_dec(v_val_1082_);
lean_dec(v_val_1099_);
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 0, v___x_1103_);
v___x_1105_ = v___x_1101_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v___x_1103_);
v___x_1105_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
lean_object* v___x_1107_; 
if (v_isShared_1098_ == 0)
{
lean_ctor_set(v___x_1097_, 0, v___x_1105_);
v___x_1107_ = v___x_1097_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v___x_1105_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
}
}
}
else
{
lean_dec(v_val_1082_);
return v___x_1094_;
}
}
}
}
else
{
lean_object* v_a_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1121_; 
lean_dec(v_val_1082_);
lean_dec_ref(v_b_1073_);
v_a_1114_ = lean_ctor_get(v___x_1084_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1084_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1116_ = v___x_1084_;
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_a_1114_);
lean_dec(v___x_1084_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1119_; 
if (v_isShared_1117_ == 0)
{
v___x_1119_ = v___x_1116_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_a_1114_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
}
}
else
{
lean_dec_ref(v_b_1073_);
return v___x_1080_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_evalPow___boxed(lean_object* v_b_1122_, lean_object* v_n_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_evalPow(v_b_1122_, v_n_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_);
lean_dec(v___y_1127_);
lean_dec_ref(v___y_1126_);
lean_dec(v___y_1125_);
lean_dec_ref(v___y_1124_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalNat___boxed(lean_object* v_e_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_){
_start:
{
lean_object* v_res_1136_; 
v_res_1136_ = l_Lean_Meta_evalNat(v_e_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
lean_dec(v___y_1134_);
lean_dec_ref(v___y_1133_);
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1131_);
return v_res_1136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___boxed(lean_object* v_e_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit(v_e_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_matchesInstance_spec__0___redArg(lean_object* v_k_1144_, uint8_t v_allowLevelAssignments_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v___x_1151_; 
v___x_1151_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1145_, v_k_1144_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1159_; 
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1154_ = v___x_1151_;
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v___x_1151_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_a_1152_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
else
{
lean_object* v_a_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1167_; 
v_a_1160_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1162_ = v___x_1151_;
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_a_1160_);
lean_dec(v___x_1151_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1165_; 
if (v_isShared_1163_ == 0)
{
v___x_1165_ = v___x_1162_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_a_1160_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_matchesInstance_spec__0___redArg___boxed(lean_object* v_k_1168_, lean_object* v_allowLevelAssignments_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1175_; lean_object* v_res_1176_; 
v_allowLevelAssignments_boxed_1175_ = lean_unbox(v_allowLevelAssignments_1169_);
v_res_1176_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_matchesInstance_spec__0___redArg(v_k_1168_, v_allowLevelAssignments_boxed_1175_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
lean_dec(v___y_1173_);
lean_dec_ref(v___y_1172_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_matchesInstance_spec__0(lean_object* v_00_u03b1_1177_, lean_object* v_k_1178_, uint8_t v_allowLevelAssignments_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_){
_start:
{
lean_object* v___x_1185_; 
v___x_1185_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_matchesInstance_spec__0___redArg(v_k_1178_, v_allowLevelAssignments_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_matchesInstance_spec__0___boxed(lean_object* v_00_u03b1_1186_, lean_object* v_k_1187_, lean_object* v_allowLevelAssignments_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1194_; lean_object* v_res_1195_; 
v_allowLevelAssignments_boxed_1194_ = lean_unbox(v_allowLevelAssignments_1188_);
v_res_1195_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_matchesInstance_spec__0(v_00_u03b1_1186_, v_k_1187_, v_allowLevelAssignments_boxed_1194_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchesInstance___lam__0(uint8_t v___x_1196_, lean_object* v_e_1197_, lean_object* v_inst_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
lean_object* v___y_1205_; lean_object* v___x_1222_; uint8_t v_transparency_1223_; uint8_t v___x_1224_; 
v___x_1222_ = l_Lean_Meta_Context_config(v___y_1199_);
v_transparency_1223_ = lean_ctor_get_uint8(v___x_1222_, 9);
lean_dec_ref(v___x_1222_);
v___x_1224_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1223_, v___x_1196_);
if (v___x_1224_ == 0)
{
lean_object* v_keyedConfig_1225_; uint8_t v_trackZetaDelta_1226_; lean_object* v_zetaDeltaSet_1227_; lean_object* v_lctx_1228_; lean_object* v_localInstances_1229_; lean_object* v_defEqCtx_x3f_1230_; lean_object* v_synthPendingDepth_1231_; lean_object* v_customCanUnfoldPredicate_x3f_1232_; uint8_t v_univApprox_1233_; uint8_t v_inTypeClassResolution_1234_; uint8_t v_cacheInferType_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1244_; 
v_keyedConfig_1225_ = lean_ctor_get(v___y_1199_, 0);
v_trackZetaDelta_1226_ = lean_ctor_get_uint8(v___y_1199_, sizeof(void*)*7);
v_zetaDeltaSet_1227_ = lean_ctor_get(v___y_1199_, 1);
v_lctx_1228_ = lean_ctor_get(v___y_1199_, 2);
v_localInstances_1229_ = lean_ctor_get(v___y_1199_, 3);
v_defEqCtx_x3f_1230_ = lean_ctor_get(v___y_1199_, 4);
v_synthPendingDepth_1231_ = lean_ctor_get(v___y_1199_, 5);
v_customCanUnfoldPredicate_x3f_1232_ = lean_ctor_get(v___y_1199_, 6);
v_univApprox_1233_ = lean_ctor_get_uint8(v___y_1199_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1234_ = lean_ctor_get_uint8(v___y_1199_, sizeof(void*)*7 + 2);
v_cacheInferType_1235_ = lean_ctor_get_uint8(v___y_1199_, sizeof(void*)*7 + 3);
v_isSharedCheck_1244_ = !lean_is_exclusive(v___y_1199_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1237_ = v___y_1199_;
v_isShared_1238_ = v_isSharedCheck_1244_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_1232_);
lean_inc(v_synthPendingDepth_1231_);
lean_inc(v_defEqCtx_x3f_1230_);
lean_inc(v_localInstances_1229_);
lean_inc(v_lctx_1228_);
lean_inc(v_zetaDeltaSet_1227_);
lean_inc(v_keyedConfig_1225_);
lean_dec(v___y_1199_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1244_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v___x_1239_; lean_object* v___x_1241_; 
v___x_1239_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1196_, v_keyedConfig_1225_);
if (v_isShared_1238_ == 0)
{
lean_ctor_set(v___x_1237_, 0, v___x_1239_);
v___x_1241_ = v___x_1237_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v___x_1239_);
lean_ctor_set(v_reuseFailAlloc_1243_, 1, v_zetaDeltaSet_1227_);
lean_ctor_set(v_reuseFailAlloc_1243_, 2, v_lctx_1228_);
lean_ctor_set(v_reuseFailAlloc_1243_, 3, v_localInstances_1229_);
lean_ctor_set(v_reuseFailAlloc_1243_, 4, v_defEqCtx_x3f_1230_);
lean_ctor_set(v_reuseFailAlloc_1243_, 5, v_synthPendingDepth_1231_);
lean_ctor_set(v_reuseFailAlloc_1243_, 6, v_customCanUnfoldPredicate_x3f_1232_);
lean_ctor_set_uint8(v_reuseFailAlloc_1243_, sizeof(void*)*7, v_trackZetaDelta_1226_);
lean_ctor_set_uint8(v_reuseFailAlloc_1243_, sizeof(void*)*7 + 1, v_univApprox_1233_);
lean_ctor_set_uint8(v_reuseFailAlloc_1243_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1234_);
lean_ctor_set_uint8(v_reuseFailAlloc_1243_, sizeof(void*)*7 + 3, v_cacheInferType_1235_);
v___x_1241_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
lean_object* v___x_1242_; 
v___x_1242_ = l_Lean_Meta_isExprDefEq(v_e_1197_, v_inst_1198_, v___x_1241_, v___y_1200_, v___y_1201_, v___y_1202_);
lean_dec_ref(v___x_1241_);
v___y_1205_ = v___x_1242_;
goto v___jp_1204_;
}
}
}
else
{
lean_object* v___x_1245_; 
v___x_1245_ = l_Lean_Meta_isExprDefEq(v_e_1197_, v_inst_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_);
lean_dec_ref(v___y_1199_);
v___y_1205_ = v___x_1245_;
goto v___jp_1204_;
}
v___jp_1204_:
{
if (lean_obj_tag(v___y_1205_) == 0)
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1213_; 
v_a_1206_ = lean_ctor_get(v___y_1205_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___y_1205_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1208_ = v___y_1205_;
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___y_1205_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1206_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
else
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
v_a_1214_ = lean_ctor_get(v___y_1205_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___y_1205_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1216_ = v___y_1205_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___y_1205_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1219_; 
if (v_isShared_1217_ == 0)
{
v___x_1219_ = v___x_1216_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1214_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchesInstance___lam__0___boxed(lean_object* v___x_1246_, lean_object* v_e_1247_, lean_object* v_inst_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
uint8_t v___x_737__boxed_1254_; lean_object* v_res_1255_; 
v___x_737__boxed_1254_ = lean_unbox(v___x_1246_);
v_res_1255_ = l_Lean_Meta_matchesInstance___lam__0(v___x_737__boxed_1254_, v_e_1247_, v_inst_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
return v_res_1255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchesInstance(lean_object* v_e_1256_, lean_object* v_inst_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
uint8_t v___x_1263_; lean_object* v___x_1264_; lean_object* v___f_1265_; uint8_t v___x_1266_; lean_object* v___x_1267_; 
v___x_1263_ = 3;
v___x_1264_ = lean_box(v___x_1263_);
v___f_1265_ = lean_alloc_closure((void*)(l_Lean_Meta_matchesInstance___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1265_, 0, v___x_1264_);
lean_closure_set(v___f_1265_, 1, v_e_1256_);
lean_closure_set(v___f_1265_, 2, v_inst_1257_);
v___x_1266_ = 0;
v___x_1267_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_matchesInstance_spec__0___redArg(v___f_1265_, v___x_1266_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchesInstance___boxed(lean_object* v_e_1268_, lean_object* v_inst_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_){
_start:
{
lean_object* v_res_1275_; 
v_res_1275_ = l_Lean_Meta_matchesInstance(v_e_1268_, v_inst_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
lean_dec(v___y_1273_);
lean_dec_ref(v___y_1272_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isOffset_x3f(lean_object* v_e_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v_a_1283_; lean_object* v_b_1284_; lean_object* v___y_1285_; lean_object* v___y_1286_; lean_object* v___y_1287_; lean_object* v___y_1288_; lean_object* v___x_1345_; 
v___x_1345_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1276_, v___y_1278_);
if (lean_obj_tag(v___x_1345_) == 0)
{
lean_object* v_a_1346_; lean_object* v___x_1347_; uint8_t v___x_1348_; 
v_a_1346_ = lean_ctor_get(v___x_1345_, 0);
lean_inc(v_a_1346_);
lean_dec_ref_known(v___x_1345_, 1);
v___x_1347_ = l_Lean_Expr_cleanupAnnotations(v_a_1346_);
v___x_1348_ = l_Lean_Expr_isApp(v___x_1347_);
if (v___x_1348_ == 0)
{
lean_dec_ref(v___x_1347_);
goto v___jp_1342_;
}
else
{
lean_object* v_arg_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; uint8_t v___x_1352_; 
v_arg_1349_ = lean_ctor_get(v___x_1347_, 1);
lean_inc_ref(v_arg_1349_);
v___x_1350_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1347_);
v___x_1351_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__1));
v___x_1352_ = l_Lean_Expr_isConstOf(v___x_1350_, v___x_1351_);
if (v___x_1352_ == 0)
{
uint8_t v___x_1353_; 
v___x_1353_ = l_Lean_Expr_isApp(v___x_1350_);
if (v___x_1353_ == 0)
{
lean_dec_ref(v___x_1350_);
lean_dec_ref(v_arg_1349_);
goto v___jp_1342_;
}
else
{
lean_object* v_arg_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; uint8_t v___x_1357_; 
v_arg_1354_ = lean_ctor_get(v___x_1350_, 1);
lean_inc_ref(v_arg_1354_);
v___x_1355_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1350_);
v___x_1356_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__13));
v___x_1357_ = l_Lean_Expr_isConstOf(v___x_1355_, v___x_1356_);
if (v___x_1357_ == 0)
{
uint8_t v___x_1358_; 
v___x_1358_ = l_Lean_Expr_isApp(v___x_1355_);
if (v___x_1358_ == 0)
{
lean_dec_ref(v___x_1355_);
lean_dec_ref(v_arg_1354_);
lean_dec_ref(v_arg_1349_);
goto v___jp_1342_;
}
else
{
lean_object* v_arg_1359_; lean_object* v___x_1360_; uint8_t v___x_1361_; 
v_arg_1359_ = lean_ctor_get(v___x_1355_, 1);
lean_inc_ref(v_arg_1359_);
v___x_1360_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1355_);
v___x_1361_ = l_Lean_Expr_isApp(v___x_1360_);
if (v___x_1361_ == 0)
{
lean_dec_ref(v___x_1360_);
lean_dec_ref(v_arg_1359_);
lean_dec_ref(v_arg_1354_);
lean_dec_ref(v_arg_1349_);
goto v___jp_1342_;
}
else
{
lean_object* v___x_1362_; lean_object* v___x_1363_; uint8_t v___x_1364_; 
v___x_1362_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1360_);
v___x_1363_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__28));
v___x_1364_ = l_Lean_Expr_isConstOf(v___x_1362_, v___x_1363_);
if (v___x_1364_ == 0)
{
uint8_t v___x_1365_; 
v___x_1365_ = l_Lean_Expr_isApp(v___x_1362_);
if (v___x_1365_ == 0)
{
lean_dec_ref(v___x_1362_);
lean_dec_ref(v_arg_1359_);
lean_dec_ref(v_arg_1354_);
lean_dec_ref(v_arg_1349_);
goto v___jp_1342_;
}
else
{
lean_object* v___x_1366_; uint8_t v___x_1367_; 
v___x_1366_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1362_);
v___x_1367_ = l_Lean_Expr_isApp(v___x_1366_);
if (v___x_1367_ == 0)
{
lean_dec_ref(v___x_1366_);
lean_dec_ref(v_arg_1359_);
lean_dec_ref(v_arg_1354_);
lean_dec_ref(v_arg_1349_);
goto v___jp_1342_;
}
else
{
lean_object* v___x_1368_; lean_object* v___x_1369_; uint8_t v___x_1370_; 
v___x_1368_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1366_);
v___x_1369_ = ((lean_object*)(l___private_Lean_Meta_Offset_0__Lean_Meta_evalNat_visit___closed__48));
v___x_1370_ = l_Lean_Expr_isConstOf(v___x_1368_, v___x_1369_);
lean_dec_ref(v___x_1368_);
if (v___x_1370_ == 0)
{
lean_dec_ref(v_arg_1359_);
lean_dec_ref(v_arg_1354_);
lean_dec_ref(v_arg_1349_);
goto v___jp_1342_;
}
else
{
lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1371_ = l_Lean_Nat_mkInstHAdd;
v___x_1372_ = l_Lean_Meta_matchesInstance(v_arg_1359_, v___x_1371_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1382_; 
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1375_ = v___x_1372_;
v_isShared_1376_ = v_isSharedCheck_1382_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1372_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1382_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
uint8_t v___x_1377_; 
v___x_1377_ = lean_unbox(v_a_1373_);
lean_dec(v_a_1373_);
if (v___x_1377_ == 0)
{
lean_object* v___x_1378_; lean_object* v___x_1380_; 
lean_dec_ref(v_arg_1354_);
lean_dec_ref(v_arg_1349_);
v___x_1378_ = lean_box(0);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v___x_1378_);
v___x_1380_ = v___x_1375_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v___x_1378_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
else
{
lean_del_object(v___x_1375_);
v_a_1283_ = v_arg_1354_;
v_b_1284_ = v_arg_1349_;
v___y_1285_ = v___y_1277_;
v___y_1286_ = v___y_1278_;
v___y_1287_ = v___y_1279_;
v___y_1288_ = v___y_1280_;
goto v___jp_1282_;
}
}
}
else
{
lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1390_; 
lean_dec_ref(v_arg_1354_);
lean_dec_ref(v_arg_1349_);
v_a_1383_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1385_ = v___x_1372_;
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_dec(v___x_1372_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1388_; 
if (v_isShared_1386_ == 0)
{
v___x_1388_ = v___x_1385_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_a_1383_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1391_; lean_object* v___x_1392_; 
lean_dec_ref(v___x_1362_);
v___x_1391_ = l_Lean_Nat_mkInstAdd;
v___x_1392_ = l_Lean_Meta_matchesInstance(v_arg_1359_, v___x_1391_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_);
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1402_; 
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1402_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1395_ = v___x_1392_;
v_isShared_1396_ = v_isSharedCheck_1402_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v___x_1392_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1402_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
uint8_t v___x_1397_; 
v___x_1397_ = lean_unbox(v_a_1393_);
lean_dec(v_a_1393_);
if (v___x_1397_ == 0)
{
lean_object* v___x_1398_; lean_object* v___x_1400_; 
lean_dec_ref(v_arg_1354_);
lean_dec_ref(v_arg_1349_);
v___x_1398_ = lean_box(0);
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 0, v___x_1398_);
v___x_1400_ = v___x_1395_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v___x_1398_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
else
{
lean_del_object(v___x_1395_);
v_a_1283_ = v_arg_1354_;
v_b_1284_ = v_arg_1349_;
v___y_1285_ = v___y_1277_;
v___y_1286_ = v___y_1278_;
v___y_1287_ = v___y_1279_;
v___y_1288_ = v___y_1280_;
goto v___jp_1282_;
}
}
}
else
{
lean_object* v_a_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1410_; 
lean_dec_ref(v_arg_1354_);
lean_dec_ref(v_arg_1349_);
v_a_1403_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1410_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1410_ == 0)
{
v___x_1405_ = v___x_1392_;
v_isShared_1406_ = v_isSharedCheck_1410_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_a_1403_);
lean_dec(v___x_1392_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1410_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1408_; 
if (v_isShared_1406_ == 0)
{
v___x_1408_ = v___x_1405_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v_a_1403_);
v___x_1408_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
return v___x_1408_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_1355_);
v_a_1283_ = v_arg_1354_;
v_b_1284_ = v_arg_1349_;
v___y_1285_ = v___y_1277_;
v___y_1286_ = v___y_1278_;
v___y_1287_ = v___y_1279_;
v___y_1288_ = v___y_1280_;
goto v___jp_1282_;
}
}
}
else
{
lean_object* v___x_1411_; 
lean_dec_ref(v___x_1350_);
v___x_1411_ = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffset(v_arg_1349_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_);
if (lean_obj_tag(v___x_1411_) == 0)
{
lean_object* v_a_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1431_; 
v_a_1412_ = lean_ctor_get(v___x_1411_, 0);
v_isSharedCheck_1431_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1431_ == 0)
{
v___x_1414_ = v___x_1411_;
v_isShared_1415_ = v_isSharedCheck_1431_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_a_1412_);
lean_dec(v___x_1411_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1431_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v_fst_1416_; lean_object* v_snd_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1430_; 
v_fst_1416_ = lean_ctor_get(v_a_1412_, 0);
v_snd_1417_ = lean_ctor_get(v_a_1412_, 1);
v_isSharedCheck_1430_ = !lean_is_exclusive(v_a_1412_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1419_ = v_a_1412_;
v_isShared_1420_ = v_isSharedCheck_1430_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_snd_1417_);
lean_inc(v_fst_1416_);
lean_dec(v_a_1412_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1430_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1424_; 
v___x_1421_ = lean_unsigned_to_nat(1u);
v___x_1422_ = lean_nat_add(v_snd_1417_, v___x_1421_);
lean_dec(v_snd_1417_);
if (v_isShared_1420_ == 0)
{
lean_ctor_set(v___x_1419_, 1, v___x_1422_);
v___x_1424_ = v___x_1419_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_fst_1416_);
lean_ctor_set(v_reuseFailAlloc_1429_, 1, v___x_1422_);
v___x_1424_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
lean_object* v___x_1425_; lean_object* v___x_1427_; 
v___x_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1424_);
if (v_isShared_1415_ == 0)
{
lean_ctor_set(v___x_1414_, 0, v___x_1425_);
v___x_1427_ = v___x_1414_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v___x_1425_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
}
else
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1439_; 
v_a_1432_ = lean_ctor_get(v___x_1411_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1434_ = v___x_1411_;
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v___x_1411_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1437_; 
if (v_isShared_1435_ == 0)
{
v___x_1437_ = v___x_1434_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_a_1432_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
}
}
else
{
lean_object* v_a_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1447_; 
v_a_1440_ = lean_ctor_get(v___x_1345_, 0);
v_isSharedCheck_1447_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1442_ = v___x_1345_;
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_a_1440_);
lean_dec(v___x_1345_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1445_; 
if (v_isShared_1443_ == 0)
{
v___x_1445_ = v___x_1442_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v_a_1440_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
v___jp_1282_:
{
lean_object* v___x_1289_; 
v___x_1289_ = l_Lean_Meta_evalNat(v_b_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1333_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1292_ = v___x_1289_;
v_isShared_1293_ = v_isSharedCheck_1333_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1289_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1333_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
if (lean_obj_tag(v_a_1290_) == 0)
{
lean_object* v___x_1294_; lean_object* v___x_1296_; 
lean_dec_ref(v_a_1283_);
v___x_1294_ = lean_box(0);
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 0, v___x_1294_);
v___x_1296_ = v___x_1292_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v___x_1294_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
else
{
lean_object* v_val_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1332_; 
lean_del_object(v___x_1292_);
v_val_1298_ = lean_ctor_get(v_a_1290_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v_a_1290_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1300_ = v_a_1290_;
v_isShared_1301_ = v_isSharedCheck_1332_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_val_1298_);
lean_dec(v_a_1290_);
v___x_1300_ = lean_box(0);
v_isShared_1301_ = v_isSharedCheck_1332_;
goto v_resetjp_1299_;
}
v_resetjp_1299_:
{
lean_object* v___x_1302_; 
v___x_1302_ = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffset(v_a_1283_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_);
if (lean_obj_tag(v___x_1302_) == 0)
{
lean_object* v_a_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1323_; 
v_a_1303_ = lean_ctor_get(v___x_1302_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1302_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1305_ = v___x_1302_;
v_isShared_1306_ = v_isSharedCheck_1323_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_a_1303_);
lean_dec(v___x_1302_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1323_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v_fst_1307_; lean_object* v_snd_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1322_; 
v_fst_1307_ = lean_ctor_get(v_a_1303_, 0);
v_snd_1308_ = lean_ctor_get(v_a_1303_, 1);
v_isSharedCheck_1322_ = !lean_is_exclusive(v_a_1303_);
if (v_isSharedCheck_1322_ == 0)
{
v___x_1310_ = v_a_1303_;
v_isShared_1311_ = v_isSharedCheck_1322_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_snd_1308_);
lean_inc(v_fst_1307_);
lean_dec(v_a_1303_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1322_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
lean_object* v___x_1312_; lean_object* v___x_1314_; 
v___x_1312_ = lean_nat_add(v_snd_1308_, v_val_1298_);
lean_dec(v_val_1298_);
lean_dec(v_snd_1308_);
if (v_isShared_1311_ == 0)
{
lean_ctor_set(v___x_1310_, 1, v___x_1312_);
v___x_1314_ = v___x_1310_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v_fst_1307_);
lean_ctor_set(v_reuseFailAlloc_1321_, 1, v___x_1312_);
v___x_1314_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
lean_object* v___x_1316_; 
if (v_isShared_1301_ == 0)
{
lean_ctor_set(v___x_1300_, 0, v___x_1314_);
v___x_1316_ = v___x_1300_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v___x_1314_);
v___x_1316_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
lean_object* v___x_1318_; 
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 0, v___x_1316_);
v___x_1318_ = v___x_1305_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v___x_1316_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
}
}
}
}
else
{
lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1331_; 
lean_del_object(v___x_1300_);
lean_dec(v_val_1298_);
v_a_1324_ = lean_ctor_get(v___x_1302_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v___x_1302_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1326_ = v___x_1302_;
v_isShared_1327_ = v_isSharedCheck_1331_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v___x_1302_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1331_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1329_; 
if (v_isShared_1327_ == 0)
{
v___x_1329_ = v___x_1326_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v_a_1324_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1341_; 
lean_dec_ref(v_a_1283_);
v_a_1334_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1336_ = v___x_1289_;
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_a_1334_);
lean_dec(v___x_1289_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1339_; 
if (v_isShared_1337_ == 0)
{
v___x_1339_ = v___x_1336_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_a_1334_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
}
}
v___jp_1342_:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1343_ = lean_box(0);
v___x_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1343_);
return v___x_1344_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffset(lean_object* v_e_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v___x_1454_; 
lean_inc_ref(v_e_1448_);
v___x_1454_ = l_Lean_Meta_isOffset_x3f(v_e_1448_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_);
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1468_; 
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1454_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1457_ = v___x_1454_;
v_isShared_1458_ = v_isSharedCheck_1468_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1454_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1468_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
if (lean_obj_tag(v_a_1455_) == 0)
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1462_; 
v___x_1459_ = lean_unsigned_to_nat(0u);
v___x_1460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1460_, 0, v_e_1448_);
lean_ctor_set(v___x_1460_, 1, v___x_1459_);
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 0, v___x_1460_);
v___x_1462_ = v___x_1457_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v___x_1460_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
else
{
lean_object* v_val_1464_; lean_object* v___x_1466_; 
lean_dec_ref(v_e_1448_);
v_val_1464_ = lean_ctor_get(v_a_1455_, 0);
lean_inc(v_val_1464_);
lean_dec_ref_known(v_a_1455_, 1);
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 0, v_val_1464_);
v___x_1466_ = v___x_1457_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_val_1464_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
}
else
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1476_; 
lean_dec_ref(v_e_1448_);
v_a_1469_ = lean_ctor_get(v___x_1454_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1454_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1471_ = v___x_1454_;
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1454_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1474_; 
if (v_isShared_1472_ == 0)
{
v___x_1474_ = v___x_1471_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_a_1469_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffset___boxed(lean_object* v_e_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_){
_start:
{
lean_object* v_res_1483_; 
v_res_1483_ = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffset(v_e_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_);
lean_dec(v___y_1481_);
lean_dec_ref(v___y_1480_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isOffset_x3f___boxed(lean_object* v_e_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_){
_start:
{
lean_object* v_res_1490_; 
v_res_1490_ = l_Lean_Meta_isOffset_x3f(v_e_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
lean_dec(v___y_1488_);
lean_dec_ref(v___y_1487_);
lean_dec(v___y_1486_);
lean_dec_ref(v___y_1485_);
return v_res_1490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero(lean_object* v_e_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v___x_1497_; 
v___x_1497_ = l_Lean_Meta_evalNat(v_e_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_);
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v_a_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1514_; 
v_a_1498_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1500_ = v___x_1497_;
v_isShared_1501_ = v_isSharedCheck_1514_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_a_1498_);
lean_dec(v___x_1497_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1514_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
if (lean_obj_tag(v_a_1498_) == 1)
{
lean_object* v_val_1502_; lean_object* v___x_1503_; uint8_t v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1507_; 
v_val_1502_ = lean_ctor_get(v_a_1498_, 0);
lean_inc(v_val_1502_);
lean_dec_ref_known(v_a_1498_, 1);
v___x_1503_ = lean_unsigned_to_nat(0u);
v___x_1504_ = lean_nat_dec_eq(v_val_1502_, v___x_1503_);
lean_dec(v_val_1502_);
v___x_1505_ = lean_box(v___x_1504_);
if (v_isShared_1501_ == 0)
{
lean_ctor_set(v___x_1500_, 0, v___x_1505_);
v___x_1507_ = v___x_1500_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v___x_1505_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
else
{
uint8_t v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1512_; 
lean_dec(v_a_1498_);
v___x_1509_ = 0;
v___x_1510_ = lean_box(v___x_1509_);
if (v_isShared_1501_ == 0)
{
lean_ctor_set(v___x_1500_, 0, v___x_1510_);
v___x_1512_ = v___x_1500_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1510_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
else
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1522_; 
v_a_1515_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1517_ = v___x_1497_;
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1497_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1520_; 
if (v_isShared_1518_ == 0)
{
v___x_1520_ = v___x_1517_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_a_1515_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero___boxed(lean_object* v_e_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_){
_start:
{
lean_object* v_res_1529_; 
v_res_1529_ = l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero(v_e_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
lean_dec(v___y_1525_);
lean_dec_ref(v___y_1524_);
return v_res_1529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkOffset(lean_object* v_e_1530_, lean_object* v_offset_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v___x_1537_; uint8_t v___x_1538_; 
v___x_1537_ = lean_unsigned_to_nat(0u);
v___x_1538_ = lean_nat_dec_eq(v_offset_1531_, v___x_1537_);
if (v___x_1538_ == 0)
{
lean_object* v___x_1539_; 
lean_inc_ref(v_e_1530_);
v___x_1539_ = l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero(v_e_1530_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_);
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_object* v_a_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1554_; 
v_a_1540_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1554_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1554_ == 0)
{
v___x_1542_ = v___x_1539_;
v_isShared_1543_ = v_isSharedCheck_1554_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_a_1540_);
lean_dec(v___x_1539_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1554_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
uint8_t v___x_1544_; 
v___x_1544_ = lean_unbox(v_a_1540_);
lean_dec(v_a_1540_);
if (v___x_1544_ == 0)
{
lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1548_; 
v___x_1545_ = l_Lean_mkNatLit(v_offset_1531_);
v___x_1546_ = l_Lean_mkNatAdd(v_e_1530_, v___x_1545_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 0, v___x_1546_);
v___x_1548_ = v___x_1542_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v___x_1546_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
else
{
lean_object* v___x_1550_; lean_object* v___x_1552_; 
lean_dec_ref(v_e_1530_);
v___x_1550_ = l_Lean_mkNatLit(v_offset_1531_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 0, v___x_1550_);
v___x_1552_ = v___x_1542_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v___x_1550_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
}
}
else
{
lean_object* v_a_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1562_; 
lean_dec(v_offset_1531_);
lean_dec_ref(v_e_1530_);
v_a_1555_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1557_ = v___x_1539_;
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_a_1555_);
lean_dec(v___x_1539_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v___x_1560_; 
if (v_isShared_1558_ == 0)
{
v___x_1560_ = v___x_1557_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v_a_1555_);
v___x_1560_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
return v___x_1560_;
}
}
}
}
else
{
lean_object* v___x_1563_; 
lean_dec(v_offset_1531_);
v___x_1563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1563_, 0, v_e_1530_);
return v___x_1563_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkOffset___boxed(lean_object* v_e_1564_, lean_object* v_offset_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_){
_start:
{
lean_object* v_res_1571_; 
v_res_1571_ = l_Lean_Meta_mkOffset(v_e_1564_, v_offset_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_);
lean_dec(v___y_1569_);
lean_dec_ref(v___y_1568_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
return v_res_1571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isDefEqOffset___lam__0(lean_object* v_s_1572_, lean_object* v_t_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_){
_start:
{
lean_object* v___x_1579_; 
v___x_1579_ = lean_is_expr_def_eq(v_s_1572_, v_t_1573_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_);
if (lean_obj_tag(v___x_1579_) == 0)
{
lean_object* v_a_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1590_; 
v_a_1580_ = lean_ctor_get(v___x_1579_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1579_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1582_ = v___x_1579_;
v_isShared_1583_ = v_isSharedCheck_1590_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_a_1580_);
lean_dec(v___x_1579_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1590_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
uint8_t v___x_1584_; uint8_t v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1588_; 
v___x_1584_ = lean_unbox(v_a_1580_);
lean_dec(v_a_1580_);
v___x_1585_ = l_Lean_Bool_toLBool(v___x_1584_);
v___x_1586_ = lean_box(v___x_1585_);
if (v_isShared_1583_ == 0)
{
lean_ctor_set(v___x_1582_, 0, v___x_1586_);
v___x_1588_ = v___x_1582_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1586_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
else
{
lean_object* v_a_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1598_; 
v_a_1591_ = lean_ctor_get(v___x_1579_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1579_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1593_ = v___x_1579_;
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_a_1591_);
lean_dec(v___x_1579_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
lean_object* v___x_1596_; 
if (v_isShared_1594_ == 0)
{
v___x_1596_ = v___x_1593_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_a_1591_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
return v___x_1596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isDefEqOffset___lam__0___boxed(lean_object* v_s_1599_, lean_object* v_t_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
lean_object* v_res_1606_; 
v_res_1606_ = l_Lean_Meta_isDefEqOffset___lam__0(v_s_1599_, v_t_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isDefEqOffset___lam__1(uint8_t v___x_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_){
_start:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1613_ = lean_box(v___x_1607_);
v___x_1614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1613_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isDefEqOffset___lam__1___boxed(lean_object* v___x_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_){
_start:
{
uint8_t v___x_3617__boxed_1621_; lean_object* v_res_1622_; 
v___x_3617__boxed_1621_ = lean_unbox(v___x_1615_);
v_res_1622_ = l_Lean_Meta_isDefEqOffset___lam__1(v___x_3617__boxed_1621_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
lean_dec(v___y_1617_);
lean_dec_ref(v___y_1616_);
return v_res_1622_;
}
}
static lean_object* _init_l_Lean_Meta_isDefEqOffset___closed__1(void){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1625_ = lean_box(0);
v___x_1626_ = ((lean_object*)(l_Lean_Meta_isDefEqOffset___closed__0));
v___x_1627_ = l_Lean_mkConst(v___x_1626_, v___x_1625_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isDefEqOffset(lean_object* v_s_1631_, lean_object* v_t_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
lean_object* v_x_1639_; lean_object* v___y_1640_; lean_object* v___y_1641_; lean_object* v___y_1642_; lean_object* v___y_1643_; lean_object* v_s_1679_; lean_object* v_t_1680_; lean_object* v___y_1681_; lean_object* v___y_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___x_1686_; uint8_t v_offsetCnstrs_1687_; 
v___x_1686_ = l_Lean_Meta_Context_config(v___y_1633_);
v_offsetCnstrs_1687_ = lean_ctor_get_uint8(v___x_1686_, 8);
lean_dec_ref(v___x_1686_);
if (v_offsetCnstrs_1687_ == 0)
{
uint8_t v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
lean_dec_ref(v_t_1632_);
lean_dec_ref(v_s_1631_);
v___x_1688_ = 2;
v___x_1689_ = lean_box(v___x_1688_);
v___x_1690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1689_);
return v___x_1690_;
}
else
{
lean_object* v___x_1691_; 
lean_inc_ref(v_s_1631_);
v___x_1691_ = l_Lean_Meta_isOffset_x3f(v_s_1631_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v_a_1692_; 
v_a_1692_ = lean_ctor_get(v___x_1691_, 0);
lean_inc(v_a_1692_);
lean_dec_ref_known(v___x_1691_, 1);
if (lean_obj_tag(v_a_1692_) == 0)
{
lean_object* v___x_1693_; 
lean_inc_ref(v_s_1631_);
v___x_1693_ = l_Lean_Meta_evalNat(v_s_1631_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v_a_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1745_; 
v_a_1694_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1696_ = v___x_1693_;
v_isShared_1697_ = v_isSharedCheck_1745_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_a_1694_);
lean_dec(v___x_1693_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1745_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
if (lean_obj_tag(v_a_1694_) == 0)
{
uint8_t v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1701_; 
lean_dec_ref(v_t_1632_);
lean_dec_ref(v_s_1631_);
v___x_1698_ = 2;
v___x_1699_ = lean_box(v___x_1698_);
if (v_isShared_1697_ == 0)
{
lean_ctor_set(v___x_1696_, 0, v___x_1699_);
v___x_1701_ = v___x_1696_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v___x_1699_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
else
{
lean_object* v_val_1703_; lean_object* v___x_1704_; 
lean_del_object(v___x_1696_);
v_val_1703_ = lean_ctor_get(v_a_1694_, 0);
lean_inc(v_val_1703_);
lean_dec_ref_known(v_a_1694_, 1);
lean_inc_ref(v_t_1632_);
v___x_1704_ = l_Lean_Meta_isOffset_x3f(v_t_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1704_) == 0)
{
lean_object* v_a_1705_; 
v_a_1705_ = lean_ctor_get(v___x_1704_, 0);
lean_inc(v_a_1705_);
lean_dec_ref_known(v___x_1704_, 1);
if (lean_obj_tag(v_a_1705_) == 0)
{
lean_object* v___x_1706_; 
v___x_1706_ = l_Lean_Meta_evalNat(v_t_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1721_; 
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1709_ = v___x_1706_;
v_isShared_1710_ = v_isSharedCheck_1721_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1706_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1721_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
if (lean_obj_tag(v_a_1707_) == 0)
{
uint8_t v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1714_; 
lean_dec(v_val_1703_);
lean_dec_ref(v_s_1631_);
v___x_1711_ = 2;
v___x_1712_ = lean_box(v___x_1711_);
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 0, v___x_1712_);
v___x_1714_ = v___x_1709_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v___x_1712_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
else
{
lean_object* v_val_1716_; uint8_t v___x_1717_; uint8_t v___x_1718_; lean_object* v___x_1719_; lean_object* v___f_1720_; 
lean_del_object(v___x_1709_);
v_val_1716_ = lean_ctor_get(v_a_1707_, 0);
lean_inc(v_val_1716_);
lean_dec_ref_known(v_a_1707_, 1);
v___x_1717_ = lean_nat_dec_eq(v_val_1703_, v_val_1716_);
lean_dec(v_val_1716_);
lean_dec(v_val_1703_);
v___x_1718_ = l_Lean_Bool_toLBool(v___x_1717_);
v___x_1719_ = lean_box(v___x_1718_);
v___f_1720_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEqOffset___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1720_, 0, v___x_1719_);
v_x_1639_ = v___f_1720_;
v___y_1640_ = v___y_1633_;
v___y_1641_ = v___y_1634_;
v___y_1642_ = v___y_1635_;
v___y_1643_ = v___y_1636_;
goto v___jp_1638_;
}
}
}
else
{
lean_object* v_a_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1729_; 
lean_dec(v_val_1703_);
lean_dec_ref(v_s_1631_);
v_a_1722_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1724_ = v___x_1706_;
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_dec(v___x_1706_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1727_; 
if (v_isShared_1725_ == 0)
{
v___x_1727_ = v___x_1724_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_a_1722_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
}
else
{
lean_object* v_val_1730_; lean_object* v_fst_1731_; lean_object* v_snd_1732_; uint8_t v___x_1733_; 
lean_dec_ref(v_t_1632_);
v_val_1730_ = lean_ctor_get(v_a_1705_, 0);
lean_inc(v_val_1730_);
lean_dec_ref_known(v_a_1705_, 1);
v_fst_1731_ = lean_ctor_get(v_val_1730_, 0);
lean_inc(v_fst_1731_);
v_snd_1732_ = lean_ctor_get(v_val_1730_, 1);
lean_inc(v_snd_1732_);
lean_dec(v_val_1730_);
v___x_1733_ = lean_nat_dec_le(v_snd_1732_, v_val_1703_);
if (v___x_1733_ == 0)
{
lean_object* v___f_1734_; 
lean_dec(v_snd_1732_);
lean_dec(v_fst_1731_);
lean_dec(v_val_1703_);
v___f_1734_ = ((lean_object*)(l_Lean_Meta_isDefEqOffset___closed__2));
v_x_1639_ = v___f_1734_;
v___y_1640_ = v___y_1633_;
v___y_1641_ = v___y_1634_;
v___y_1642_ = v___y_1635_;
v___y_1643_ = v___y_1636_;
goto v___jp_1638_;
}
else
{
lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1735_ = lean_nat_sub(v_val_1703_, v_snd_1732_);
lean_dec(v_snd_1732_);
lean_dec(v_val_1703_);
v___x_1736_ = l_Lean_mkNatLit(v___x_1735_);
v_s_1679_ = v___x_1736_;
v_t_1680_ = v_fst_1731_;
v___y_1681_ = v___y_1633_;
v___y_1682_ = v___y_1634_;
v___y_1683_ = v___y_1635_;
v___y_1684_ = v___y_1636_;
goto v___jp_1678_;
}
}
}
else
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1744_; 
lean_dec(v_val_1703_);
lean_dec_ref(v_t_1632_);
lean_dec_ref(v_s_1631_);
v_a_1737_ = lean_ctor_get(v___x_1704_, 0);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1704_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1739_ = v___x_1704_;
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v___x_1704_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1742_; 
if (v_isShared_1740_ == 0)
{
v___x_1742_ = v___x_1739_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_a_1737_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
}
}
}
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1753_; 
lean_dec_ref(v_t_1632_);
lean_dec_ref(v_s_1631_);
v_a_1746_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1748_ = v___x_1693_;
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1693_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1751_; 
if (v_isShared_1749_ == 0)
{
v___x_1751_ = v___x_1748_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1746_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
return v___x_1751_;
}
}
}
}
else
{
lean_object* v_val_1754_; lean_object* v_fst_1755_; lean_object* v_snd_1756_; lean_object* v___x_1757_; 
v_val_1754_ = lean_ctor_get(v_a_1692_, 0);
lean_inc(v_val_1754_);
lean_dec_ref_known(v_a_1692_, 1);
v_fst_1755_ = lean_ctor_get(v_val_1754_, 0);
lean_inc(v_fst_1755_);
v_snd_1756_ = lean_ctor_get(v_val_1754_, 1);
lean_inc(v_snd_1756_);
lean_dec(v_val_1754_);
lean_inc_ref(v_t_1632_);
v___x_1757_ = l_Lean_Meta_isOffset_x3f(v_t_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1757_) == 0)
{
lean_object* v_a_1758_; 
v_a_1758_ = lean_ctor_get(v___x_1757_, 0);
lean_inc(v_a_1758_);
lean_dec_ref_known(v___x_1757_, 1);
if (lean_obj_tag(v_a_1758_) == 0)
{
lean_object* v___x_1759_; 
v___x_1759_ = l_Lean_Meta_evalNat(v_t_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v_a_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1774_; 
v_a_1760_ = lean_ctor_get(v___x_1759_, 0);
v_isSharedCheck_1774_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1762_ = v___x_1759_;
v_isShared_1763_ = v_isSharedCheck_1774_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_a_1760_);
lean_dec(v___x_1759_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1774_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
if (lean_obj_tag(v_a_1760_) == 0)
{
uint8_t v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1767_; 
lean_dec(v_snd_1756_);
lean_dec(v_fst_1755_);
lean_dec_ref(v_s_1631_);
v___x_1764_ = 2;
v___x_1765_ = lean_box(v___x_1764_);
if (v_isShared_1763_ == 0)
{
lean_ctor_set(v___x_1762_, 0, v___x_1765_);
v___x_1767_ = v___x_1762_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v___x_1765_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
else
{
lean_object* v_val_1769_; uint8_t v___x_1770_; 
lean_del_object(v___x_1762_);
v_val_1769_ = lean_ctor_get(v_a_1760_, 0);
lean_inc(v_val_1769_);
lean_dec_ref_known(v_a_1760_, 1);
v___x_1770_ = lean_nat_dec_le(v_snd_1756_, v_val_1769_);
if (v___x_1770_ == 0)
{
lean_object* v___f_1771_; 
lean_dec(v_val_1769_);
lean_dec(v_snd_1756_);
lean_dec(v_fst_1755_);
v___f_1771_ = ((lean_object*)(l_Lean_Meta_isDefEqOffset___closed__2));
v_x_1639_ = v___f_1771_;
v___y_1640_ = v___y_1633_;
v___y_1641_ = v___y_1634_;
v___y_1642_ = v___y_1635_;
v___y_1643_ = v___y_1636_;
goto v___jp_1638_;
}
else
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1772_ = lean_nat_sub(v_val_1769_, v_snd_1756_);
lean_dec(v_snd_1756_);
lean_dec(v_val_1769_);
v___x_1773_ = l_Lean_mkNatLit(v___x_1772_);
v_s_1679_ = v_fst_1755_;
v_t_1680_ = v___x_1773_;
v___y_1681_ = v___y_1633_;
v___y_1682_ = v___y_1634_;
v___y_1683_ = v___y_1635_;
v___y_1684_ = v___y_1636_;
goto v___jp_1678_;
}
}
}
}
else
{
lean_object* v_a_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1782_; 
lean_dec(v_snd_1756_);
lean_dec(v_fst_1755_);
lean_dec_ref(v_s_1631_);
v_a_1775_ = lean_ctor_get(v___x_1759_, 0);
v_isSharedCheck_1782_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1777_ = v___x_1759_;
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_a_1775_);
lean_dec(v___x_1759_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___x_1780_; 
if (v_isShared_1778_ == 0)
{
v___x_1780_ = v___x_1777_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v_a_1775_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
}
}
else
{
lean_object* v_val_1783_; lean_object* v_fst_1784_; lean_object* v_snd_1785_; uint8_t v___x_1786_; 
lean_dec_ref(v_t_1632_);
v_val_1783_ = lean_ctor_get(v_a_1758_, 0);
lean_inc(v_val_1783_);
lean_dec_ref_known(v_a_1758_, 1);
v_fst_1784_ = lean_ctor_get(v_val_1783_, 0);
lean_inc(v_fst_1784_);
v_snd_1785_ = lean_ctor_get(v_val_1783_, 1);
lean_inc(v_snd_1785_);
lean_dec(v_val_1783_);
v___x_1786_ = lean_nat_dec_eq(v_snd_1756_, v_snd_1785_);
if (v___x_1786_ == 0)
{
uint8_t v___x_1787_; 
v___x_1787_ = lean_nat_dec_lt(v_snd_1756_, v_snd_1785_);
if (v___x_1787_ == 0)
{
lean_object* v___x_1788_; lean_object* v___x_1789_; 
v___x_1788_ = lean_nat_sub(v_snd_1756_, v_snd_1785_);
lean_dec(v_snd_1785_);
lean_dec(v_snd_1756_);
v___x_1789_ = l_Lean_Meta_mkOffset(v_fst_1755_, v___x_1788_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1789_) == 0)
{
lean_object* v_a_1790_; 
v_a_1790_ = lean_ctor_get(v___x_1789_, 0);
lean_inc(v_a_1790_);
lean_dec_ref_known(v___x_1789_, 1);
v_s_1679_ = v_a_1790_;
v_t_1680_ = v_fst_1784_;
v___y_1681_ = v___y_1633_;
v___y_1682_ = v___y_1634_;
v___y_1683_ = v___y_1635_;
v___y_1684_ = v___y_1636_;
goto v___jp_1678_;
}
else
{
lean_object* v_a_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1798_; 
lean_dec(v_fst_1784_);
lean_dec_ref(v_s_1631_);
v_a_1791_ = lean_ctor_get(v___x_1789_, 0);
v_isSharedCheck_1798_ = !lean_is_exclusive(v___x_1789_);
if (v_isSharedCheck_1798_ == 0)
{
v___x_1793_ = v___x_1789_;
v_isShared_1794_ = v_isSharedCheck_1798_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_a_1791_);
lean_dec(v___x_1789_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1798_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v___x_1796_; 
if (v_isShared_1794_ == 0)
{
v___x_1796_ = v___x_1793_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v_a_1791_);
v___x_1796_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
return v___x_1796_;
}
}
}
}
else
{
lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1799_ = lean_nat_sub(v_snd_1785_, v_snd_1756_);
lean_dec(v_snd_1756_);
lean_dec(v_snd_1785_);
v___x_1800_ = l_Lean_Meta_mkOffset(v_fst_1784_, v___x_1799_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1800_) == 0)
{
lean_object* v_a_1801_; 
v_a_1801_ = lean_ctor_get(v___x_1800_, 0);
lean_inc(v_a_1801_);
lean_dec_ref_known(v___x_1800_, 1);
v_s_1679_ = v_fst_1755_;
v_t_1680_ = v_a_1801_;
v___y_1681_ = v___y_1633_;
v___y_1682_ = v___y_1634_;
v___y_1683_ = v___y_1635_;
v___y_1684_ = v___y_1636_;
goto v___jp_1678_;
}
else
{
lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1809_; 
lean_dec(v_fst_1755_);
lean_dec_ref(v_s_1631_);
v_a_1802_ = lean_ctor_get(v___x_1800_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v___x_1800_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1804_ = v___x_1800_;
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v___x_1800_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1805_ == 0)
{
v___x_1807_ = v___x_1804_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
return v___x_1807_;
}
}
}
}
}
else
{
lean_dec(v_snd_1785_);
lean_dec(v_snd_1756_);
v_s_1679_ = v_fst_1755_;
v_t_1680_ = v_fst_1784_;
v___y_1681_ = v___y_1633_;
v___y_1682_ = v___y_1634_;
v___y_1683_ = v___y_1635_;
v___y_1684_ = v___y_1636_;
goto v___jp_1678_;
}
}
}
else
{
lean_object* v_a_1810_; lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1817_; 
lean_dec(v_snd_1756_);
lean_dec(v_fst_1755_);
lean_dec_ref(v_t_1632_);
lean_dec_ref(v_s_1631_);
v_a_1810_ = lean_ctor_get(v___x_1757_, 0);
v_isSharedCheck_1817_ = !lean_is_exclusive(v___x_1757_);
if (v_isSharedCheck_1817_ == 0)
{
v___x_1812_ = v___x_1757_;
v_isShared_1813_ = v_isSharedCheck_1817_;
goto v_resetjp_1811_;
}
else
{
lean_inc(v_a_1810_);
lean_dec(v___x_1757_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1817_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___x_1815_; 
if (v_isShared_1813_ == 0)
{
v___x_1815_ = v___x_1812_;
goto v_reusejp_1814_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v_a_1810_);
v___x_1815_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1814_;
}
v_reusejp_1814_:
{
return v___x_1815_;
}
}
}
}
}
else
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1825_; 
lean_dec_ref(v_t_1632_);
lean_dec_ref(v_s_1631_);
v_a_1818_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1820_ = v___x_1691_;
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_dec(v___x_1691_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1823_; 
if (v_isShared_1821_ == 0)
{
v___x_1823_ = v___x_1820_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_a_1818_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
}
v___jp_1638_:
{
lean_object* v___x_1644_; 
lean_inc(v___y_1643_);
lean_inc_ref(v___y_1642_);
lean_inc(v___y_1641_);
lean_inc_ref(v___y_1640_);
v___x_1644_ = lean_infer_type(v_s_1631_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_);
if (lean_obj_tag(v___x_1644_) == 0)
{
lean_object* v_a_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; uint8_t v___x_1648_; lean_object* v___x_1649_; 
v_a_1645_ = lean_ctor_get(v___x_1644_, 0);
lean_inc(v_a_1645_);
lean_dec_ref_known(v___x_1644_, 1);
v___x_1646_ = lean_obj_once(&l_Lean_Meta_isDefEqOffset___closed__1, &l_Lean_Meta_isDefEqOffset___closed__1_once, _init_l_Lean_Meta_isDefEqOffset___closed__1);
v___x_1647_ = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEqAux___boxed), 7, 2);
lean_closure_set(v___x_1647_, 0, v_a_1645_);
lean_closure_set(v___x_1647_, 1, v___x_1646_);
v___x_1648_ = 0;
v___x_1649_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_matchesInstance_spec__0___redArg(v___x_1647_, v___x_1648_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_);
if (lean_obj_tag(v___x_1649_) == 0)
{
lean_object* v_a_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1661_; 
v_a_1650_ = lean_ctor_get(v___x_1649_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1649_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1652_ = v___x_1649_;
v_isShared_1653_ = v_isSharedCheck_1661_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_a_1650_);
lean_dec(v___x_1649_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1661_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
uint8_t v___x_1654_; 
v___x_1654_ = lean_unbox(v_a_1650_);
lean_dec(v_a_1650_);
if (v___x_1654_ == 0)
{
uint8_t v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1658_; 
lean_dec_ref(v_x_1639_);
v___x_1655_ = 2;
v___x_1656_ = lean_box(v___x_1655_);
if (v_isShared_1653_ == 0)
{
lean_ctor_set(v___x_1652_, 0, v___x_1656_);
v___x_1658_ = v___x_1652_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v___x_1656_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
else
{
lean_object* v___x_1660_; 
lean_del_object(v___x_1652_);
lean_inc(v___y_1643_);
lean_inc_ref(v___y_1642_);
lean_inc(v___y_1641_);
lean_inc_ref(v___y_1640_);
v___x_1660_ = lean_apply_5(v_x_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_, lean_box(0));
return v___x_1660_;
}
}
}
else
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_dec_ref(v_x_1639_);
v_a_1662_ = lean_ctor_get(v___x_1649_, 0);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1649_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1664_ = v___x_1649_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1649_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_a_1662_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
}
else
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1677_; 
lean_dec_ref(v_x_1639_);
v_a_1670_ = lean_ctor_get(v___x_1644_, 0);
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1677_ == 0)
{
v___x_1672_ = v___x_1644_;
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v___x_1644_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1677_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___x_1675_; 
if (v_isShared_1673_ == 0)
{
v___x_1675_ = v___x_1672_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_a_1670_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
return v___x_1675_;
}
}
}
}
v___jp_1678_:
{
lean_object* v___f_1685_; 
v___f_1685_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEqOffset___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1685_, 0, v_s_1679_);
lean_closure_set(v___f_1685_, 1, v_t_1680_);
v_x_1639_ = v___f_1685_;
v___y_1640_ = v___y_1681_;
v___y_1641_ = v___y_1682_;
v___y_1642_ = v___y_1683_;
v___y_1643_ = v___y_1684_;
goto v___jp_1638_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isDefEqOffset___boxed(lean_object* v_s_1826_, lean_object* v_t_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l_Lean_Meta_isDefEqOffset(v_s_1826_, v_t_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_);
lean_dec(v___y_1831_);
lean_dec_ref(v___y_1830_);
lean_dec(v___y_1829_);
lean_dec_ref(v___y_1828_);
return v_res_1833_;
}
}
lean_object* runtime_initialize_Lean_Data_LBool(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_SafeExponentiation(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Offset(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_LBool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_SafeExponentiation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Offset(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_LBool(uint8_t builtin);
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* initialize_Lean_Util_SafeExponentiation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Offset(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_LBool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_SafeExponentiation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Offset(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Offset(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Offset(builtin);
}
#ifdef __cplusplus
}
#endif
