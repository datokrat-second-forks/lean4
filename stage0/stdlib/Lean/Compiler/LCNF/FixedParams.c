// Lean compiler output
// Module: Lean.Compiler.LCNF.FixedParams
// Imports: public import Lean.Compiler.LCNF.Basic
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(uint8_t, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalCode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFixedParamsMap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx(v_x_5_);
lean_dec(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 2)
{
lean_object* v_i_9_; lean_object* v___x_10_; 
v_i_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_i_9_);
lean_dec_ref_known(v_t_7_, 1);
v___x_10_ = lean_apply_1(v_k_8_, v_i_9_);
return v___x_10_;
}
else
{
lean_dec(v_t_7_);
return v_k_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, lean_object* v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_13_, v_k_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_19_, v_h_20_, v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim___redArg(lean_object* v_t_23_, lean_object* v_top_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_23_, v_top_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim(lean_object* v_motive_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_top_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_27_, v_top_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim___redArg(lean_object* v_t_31_, lean_object* v_erased_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_31_, v_erased_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_erased_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_35_, v_erased_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim___redArg(lean_object* v_t_39_, lean_object* v_val_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_39_, v_val_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_val_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_43_, v_val_45_);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_box(0);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_box(0);
return v___x_48_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(lean_object* v_x_49_, lean_object* v_x_50_){
_start:
{
switch(lean_obj_tag(v_x_49_))
{
case 0:
{
if (lean_obj_tag(v_x_50_) == 0)
{
uint8_t v___x_51_; 
v___x_51_ = 1;
return v___x_51_;
}
else
{
uint8_t v___x_52_; 
v___x_52_ = 0;
return v___x_52_;
}
}
case 1:
{
if (lean_obj_tag(v_x_50_) == 1)
{
uint8_t v___x_53_; 
v___x_53_ = 1;
return v___x_53_;
}
else
{
uint8_t v___x_54_; 
v___x_54_ = 0;
return v___x_54_;
}
}
default: 
{
if (lean_obj_tag(v_x_50_) == 2)
{
lean_object* v_i_55_; lean_object* v_i_56_; uint8_t v___x_57_; 
v_i_55_ = lean_ctor_get(v_x_49_, 0);
v_i_56_ = lean_ctor_get(v_x_50_, 0);
v___x_57_ = lean_nat_dec_eq(v_i_55_, v_i_56_);
return v___x_57_;
}
else
{
uint8_t v___x_58_; 
v___x_58_ = 0;
return v___x_58_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq___boxed(lean_object* v_x_59_, lean_object* v_x_60_){
_start:
{
uint8_t v_res_61_; lean_object* v_r_62_; 
v_res_61_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v_x_59_, v_x_60_);
lean_dec(v_x_60_);
lean_dec(v_x_59_);
v_r_62_ = lean_box(v_res_61_);
return v_r_62_;
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(lean_object* v_x_65_){
_start:
{
switch(lean_obj_tag(v_x_65_))
{
case 0:
{
uint64_t v___x_66_; 
v___x_66_ = 0ULL;
return v___x_66_;
}
case 1:
{
uint64_t v___x_67_; 
v___x_67_ = 1ULL;
return v___x_67_;
}
default: 
{
lean_object* v_i_68_; uint64_t v___x_69_; uint64_t v___x_70_; uint64_t v___x_71_; 
v_i_68_ = lean_ctor_get(v_x_65_, 0);
v___x_69_ = 2ULL;
v___x_70_ = lean_uint64_of_nat(v_i_68_);
v___x_71_ = lean_uint64_mix_hash(v___x_69_, v___x_70_);
return v___x_71_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash___boxed(lean_object* v_x_72_){
_start:
{
uint64_t v_res_73_; lean_object* v_r_74_; 
v_res_73_ = l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(v_x_72_);
lean_dec(v_x_72_);
v_r_74_ = lean_box_uint64(v_res_73_);
return v_r_74_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0(uint8_t v_x_77_){
_start:
{
uint8_t v___x_78_; 
v___x_78_ = 0;
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0___boxed(lean_object* v_x_79_){
_start:
{
uint8_t v_x_277__boxed_80_; uint8_t v_res_81_; lean_object* v_r_82_; 
v_x_277__boxed_80_ = lean_unbox(v_x_79_);
v_res_81_ = l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0(v_x_277__boxed_80_);
v_r_82_ = lean_box(v_res_81_);
return v_r_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg(lean_object* v___y_103_){
_start:
{
lean_object* v_visited_104_; lean_object* v_fixed_105_; lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_119_; 
v_visited_104_ = lean_ctor_get(v___y_103_, 0);
v_fixed_105_ = lean_ctor_get(v___y_103_, 1);
v_isSharedCheck_119_ = !lean_is_exclusive(v___y_103_);
if (v_isSharedCheck_119_ == 0)
{
v___x_107_ = v___y_103_;
v_isShared_108_ = v_isSharedCheck_119_;
goto v_resetjp_106_;
}
else
{
lean_inc(v_fixed_105_);
lean_inc(v_visited_104_);
lean_dec(v___y_103_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_119_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v___f_109_; lean_object* v___x_110_; size_t v_sz_111_; size_t v___x_112_; lean_object* v___x_113_; lean_object* v___x_115_; 
v___f_109_ = ((lean_object*)(l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0));
v___x_110_ = ((lean_object*)(l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10));
v_sz_111_ = lean_array_size(v_fixed_105_);
v___x_112_ = ((size_t)0ULL);
v___x_113_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_110_, v___f_109_, v_sz_111_, v___x_112_, v_fixed_105_);
if (v_isShared_108_ == 0)
{
lean_ctor_set(v___x_107_, 1, v___x_113_);
v___x_115_ = v___x_107_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_visited_104_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v___x_113_);
v___x_115_ = v_reuseFailAlloc_118_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = lean_box(0);
v___x_117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v___x_115_);
return v___x_117_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort(lean_object* v_00_u03b1_120_, lean_object* v___y_121_, lean_object* v___y_122_){
_start:
{
lean_object* v_visited_123_; lean_object* v_fixed_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_138_; 
v_visited_123_ = lean_ctor_get(v___y_122_, 0);
v_fixed_124_ = lean_ctor_get(v___y_122_, 1);
v_isSharedCheck_138_ = !lean_is_exclusive(v___y_122_);
if (v_isSharedCheck_138_ == 0)
{
v___x_126_ = v___y_122_;
v_isShared_127_ = v_isSharedCheck_138_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_fixed_124_);
lean_inc(v_visited_123_);
lean_dec(v___y_122_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_138_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___f_128_; lean_object* v___x_129_; size_t v_sz_130_; size_t v___x_131_; lean_object* v___x_132_; lean_object* v___x_134_; 
v___f_128_ = ((lean_object*)(l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0));
v___x_129_ = ((lean_object*)(l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10));
v_sz_130_ = lean_array_size(v_fixed_124_);
v___x_131_ = ((size_t)0ULL);
v___x_132_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_129_, v___f_128_, v_sz_130_, v___x_131_, v_fixed_124_);
if (v_isShared_127_ == 0)
{
lean_ctor_set(v___x_126_, 1, v___x_132_);
v___x_134_ = v___x_126_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_visited_123_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v___x_132_);
v___x_134_ = v_reuseFailAlloc_137_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lean_box(0);
v___x_136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v___x_134_);
return v___x_136_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___boxed(lean_object* v_00_u03b1_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_Compiler_LCNF_FixedParams_abort(v_00_u03b1_139_, v___y_140_, v___y_141_);
lean_dec_ref(v___y_140_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar(lean_object* v_fvarId_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v_assignment_146_; lean_object* v___x_147_; 
v_assignment_146_ = lean_ctor_get(v___y_144_, 2);
v___x_147_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_assignment_146_, v_fvarId_143_);
if (lean_obj_tag(v___x_147_) == 1)
{
lean_object* v_val_148_; lean_object* v___x_149_; 
v_val_148_ = lean_ctor_get(v___x_147_, 0);
lean_inc(v_val_148_);
lean_dec_ref_known(v___x_147_, 1);
v___x_149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_149_, 0, v_val_148_);
lean_ctor_set(v___x_149_, 1, v___y_145_);
return v___x_149_;
}
else
{
lean_object* v___x_150_; lean_object* v___x_151_; 
lean_dec(v___x_147_);
v___x_150_ = lean_box(0);
v___x_151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v___y_145_);
return v___x_151_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar___boxed(lean_object* v_fvarId_152_, lean_object* v___y_153_, lean_object* v___y_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_Compiler_LCNF_FixedParams_evalFVar(v_fvarId_152_, v___y_153_, v___y_154_);
lean_dec_ref(v___y_153_);
lean_dec(v_fvarId_152_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg(lean_object* v_arg_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
switch(lean_obj_tag(v_arg_156_))
{
case 0:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_box(1);
v___x_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
lean_ctor_set(v___x_160_, 1, v___y_158_);
return v___x_160_;
}
case 1:
{
lean_object* v_fvarId_161_; lean_object* v___x_162_; 
v_fvarId_161_ = lean_ctor_get(v_arg_156_, 0);
v___x_162_ = l_Lean_Compiler_LCNF_FixedParams_evalFVar(v_fvarId_161_, v___y_157_, v___y_158_);
return v___x_162_;
}
default: 
{
lean_object* v_expr_163_; 
v_expr_163_ = lean_ctor_get(v_arg_156_, 0);
if (lean_obj_tag(v_expr_163_) == 1)
{
lean_object* v_fvarId_164_; lean_object* v___x_165_; 
v_fvarId_164_ = lean_ctor_get(v_expr_163_, 0);
v___x_165_ = l_Lean_Compiler_LCNF_FixedParams_evalFVar(v_fvarId_164_, v___y_157_, v___y_158_);
return v___x_165_;
}
else
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = lean_box(0);
v___x_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
lean_ctor_set(v___x_167_, 1, v___y_158_);
return v___x_167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg___boxed(lean_object* v_arg_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_Compiler_LCNF_FixedParams_evalArg(v_arg_168_, v___y_169_, v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec(v_arg_168_);
return v_res_171_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(lean_object* v_declName_172_, lean_object* v_as_173_, size_t v_i_174_, size_t v_stop_175_){
_start:
{
uint8_t v___x_176_; 
v___x_176_ = lean_usize_dec_eq(v_i_174_, v_stop_175_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; lean_object* v_toSignature_178_; lean_object* v_name_179_; uint8_t v___x_180_; 
v___x_177_ = lean_array_uget_borrowed(v_as_173_, v_i_174_);
v_toSignature_178_ = lean_ctor_get(v___x_177_, 0);
v_name_179_ = lean_ctor_get(v_toSignature_178_, 0);
v___x_180_ = lean_name_eq(v_name_179_, v_declName_172_);
if (v___x_180_ == 0)
{
size_t v___x_181_; size_t v___x_182_; 
v___x_181_ = ((size_t)1ULL);
v___x_182_ = lean_usize_add(v_i_174_, v___x_181_);
v_i_174_ = v___x_182_;
goto _start;
}
else
{
return v___x_180_;
}
}
else
{
uint8_t v___x_184_; 
v___x_184_ = 0;
return v___x_184_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0___boxed(lean_object* v_declName_185_, lean_object* v_as_186_, lean_object* v_i_187_, lean_object* v_stop_188_){
_start:
{
size_t v_i_boxed_189_; size_t v_stop_boxed_190_; uint8_t v_res_191_; lean_object* v_r_192_; 
v_i_boxed_189_ = lean_unbox_usize(v_i_187_);
lean_dec(v_i_187_);
v_stop_boxed_190_ = lean_unbox_usize(v_stop_188_);
lean_dec(v_stop_188_);
v_res_191_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(v_declName_185_, v_as_186_, v_i_boxed_189_, v_stop_boxed_190_);
lean_dec_ref(v_as_186_);
lean_dec(v_declName_185_);
v_r_192_ = lean_box(v_res_191_);
return v_r_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock(lean_object* v_declName_193_, lean_object* v___y_194_, lean_object* v___y_195_){
_start:
{
lean_object* v_decls_196_; lean_object* v___x_197_; lean_object* v___x_198_; uint8_t v___x_199_; 
v_decls_196_ = lean_ctor_get(v___y_194_, 0);
v___x_197_ = lean_unsigned_to_nat(0u);
v___x_198_ = lean_array_get_size(v_decls_196_);
v___x_199_ = lean_nat_dec_lt(v___x_197_, v___x_198_);
if (v___x_199_ == 0)
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = lean_box(v___x_199_);
v___x_201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
lean_ctor_set(v___x_201_, 1, v___y_195_);
return v___x_201_;
}
else
{
if (v___x_199_ == 0)
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_box(v___x_199_);
v___x_203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set(v___x_203_, 1, v___y_195_);
return v___x_203_;
}
else
{
size_t v___x_204_; size_t v___x_205_; uint8_t v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_204_ = ((size_t)0ULL);
v___x_205_ = lean_usize_of_nat(v___x_198_);
v___x_206_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(v_declName_193_, v_decls_196_, v___x_204_, v___x_205_);
v___x_207_ = lean_box(v___x_206_);
v___x_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
lean_ctor_set(v___x_208_, 1, v___y_195_);
return v___x_208_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock___boxed(lean_object* v_declName_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Lean_Compiler_LCNF_FixedParams_inMutualBlock(v_declName_209_, v___y_210_, v___y_211_);
lean_dec_ref(v___y_210_);
lean_dec(v_declName_209_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(lean_object* v_as_213_, size_t v_sz_214_, size_t v_i_215_, lean_object* v_b_216_){
_start:
{
uint8_t v___x_217_; 
v___x_217_ = lean_usize_dec_lt(v_i_215_, v_sz_214_);
if (v___x_217_ == 0)
{
return v_b_216_;
}
else
{
lean_object* v_snd_218_; lean_object* v_fst_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_252_; 
v_snd_218_ = lean_ctor_get(v_b_216_, 1);
v_fst_219_ = lean_ctor_get(v_b_216_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v_b_216_);
if (v_isSharedCheck_252_ == 0)
{
v___x_221_ = v_b_216_;
v_isShared_222_ = v_isSharedCheck_252_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_snd_218_);
lean_inc(v_fst_219_);
lean_dec(v_b_216_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_252_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v_array_223_; lean_object* v_start_224_; lean_object* v_stop_225_; uint8_t v___x_226_; 
v_array_223_ = lean_ctor_get(v_snd_218_, 0);
v_start_224_ = lean_ctor_get(v_snd_218_, 1);
v_stop_225_ = lean_ctor_get(v_snd_218_, 2);
v___x_226_ = lean_nat_dec_lt(v_start_224_, v_stop_225_);
if (v___x_226_ == 0)
{
lean_object* v___x_228_; 
if (v_isShared_222_ == 0)
{
v___x_228_ = v___x_221_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v_fst_219_);
lean_ctor_set(v_reuseFailAlloc_229_, 1, v_snd_218_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
else
{
lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_248_; 
lean_inc(v_stop_225_);
lean_inc(v_start_224_);
lean_inc_ref(v_array_223_);
v_isSharedCheck_248_ = !lean_is_exclusive(v_snd_218_);
if (v_isSharedCheck_248_ == 0)
{
lean_object* v_unused_249_; lean_object* v_unused_250_; lean_object* v_unused_251_; 
v_unused_249_ = lean_ctor_get(v_snd_218_, 2);
lean_dec(v_unused_249_);
v_unused_250_ = lean_ctor_get(v_snd_218_, 1);
lean_dec(v_unused_250_);
v_unused_251_ = lean_ctor_get(v_snd_218_, 0);
lean_dec(v_unused_251_);
v___x_231_ = v_snd_218_;
v_isShared_232_ = v_isSharedCheck_248_;
goto v_resetjp_230_;
}
else
{
lean_dec(v_snd_218_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_248_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v_a_233_; lean_object* v_fvarId_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_239_; 
v_a_233_ = lean_array_uget_borrowed(v_as_213_, v_i_215_);
v_fvarId_234_ = lean_ctor_get(v_a_233_, 0);
v___x_235_ = lean_array_fget(v_array_223_, v_start_224_);
v___x_236_ = lean_unsigned_to_nat(1u);
v___x_237_ = lean_nat_add(v_start_224_, v___x_236_);
lean_dec(v_start_224_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 1, v___x_237_);
v___x_239_ = v___x_231_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_array_223_);
lean_ctor_set(v_reuseFailAlloc_247_, 1, v___x_237_);
lean_ctor_set(v_reuseFailAlloc_247_, 2, v_stop_225_);
v___x_239_ = v_reuseFailAlloc_247_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
lean_object* v___x_240_; lean_object* v___x_242_; 
lean_inc(v_fvarId_234_);
v___x_240_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_234_, v___x_235_, v_fst_219_);
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 1, v___x_239_);
lean_ctor_set(v___x_221_, 0, v___x_240_);
v___x_242_ = v___x_221_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_240_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v___x_239_);
v___x_242_ = v_reuseFailAlloc_246_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
size_t v___x_243_; size_t v___x_244_; 
v___x_243_ = ((size_t)1ULL);
v___x_244_ = lean_usize_add(v_i_215_, v___x_243_);
v_i_215_ = v___x_244_;
v_b_216_ = v___x_242_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0___boxed(lean_object* v_as_253_, lean_object* v_sz_254_, lean_object* v_i_255_, lean_object* v_b_256_){
_start:
{
size_t v_sz_boxed_257_; size_t v_i_boxed_258_; lean_object* v_res_259_; 
v_sz_boxed_257_ = lean_unbox_usize(v_sz_254_);
lean_dec(v_sz_254_);
v_i_boxed_258_ = lean_unbox_usize(v_i_255_);
lean_dec(v_i_255_);
v_res_259_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(v_as_253_, v_sz_boxed_257_, v_i_boxed_258_, v_b_256_);
lean_dec_ref(v_as_253_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment(lean_object* v_decl_260_, lean_object* v_values_261_){
_start:
{
lean_object* v_toSignature_262_; lean_object* v_params_263_; lean_object* v___x_264_; lean_object* v_assignment_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; size_t v_sz_269_; size_t v___x_270_; lean_object* v___x_271_; lean_object* v_fst_272_; 
v_toSignature_262_ = lean_ctor_get(v_decl_260_, 0);
v_params_263_ = lean_ctor_get(v_toSignature_262_, 3);
v___x_264_ = lean_array_get_size(v_values_261_);
v_assignment_265_ = lean_box(1);
v___x_266_ = lean_unsigned_to_nat(0u);
v___x_267_ = l_Array_toSubarray___redArg(v_values_261_, v___x_266_, v___x_264_);
v___x_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_268_, 0, v_assignment_265_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
v_sz_269_ = lean_array_size(v_params_263_);
v___x_270_ = ((size_t)0ULL);
v___x_271_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(v_params_263_, v_sz_269_, v___x_270_, v___x_268_);
v_fst_272_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_fst_272_);
lean_dec_ref(v___x_271_);
return v_fst_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment___boxed(lean_object* v_decl_273_, lean_object* v_values_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Lean_Compiler_LCNF_FixedParams_mkAssignment(v_decl_273_, v_values_274_);
lean_dec_ref(v_decl_273_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(lean_object* v_params_284_, lean_object* v_args_285_, uint8_t v___x_286_, lean_object* v_range_287_, lean_object* v_b_288_, lean_object* v_i_289_, lean_object* v___y_290_){
_start:
{
lean_object* v_stop_291_; lean_object* v_step_292_; uint8_t v___x_293_; 
v_stop_291_ = lean_ctor_get(v_range_287_, 1);
v_step_292_ = lean_ctor_get(v_range_287_, 2);
v___x_293_ = lean_nat_dec_lt(v_i_289_, v_stop_291_);
if (v___x_293_ == 0)
{
lean_object* v___x_294_; 
lean_dec(v_i_289_);
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v_b_288_);
lean_ctor_set(v___x_294_, 1, v___y_290_);
return v___x_294_;
}
else
{
lean_object* v___x_295_; lean_object* v_fvarId_296_; lean_object* v___x_297_; lean_object* v_a_299_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; uint8_t v___x_305_; 
lean_dec_ref(v_b_288_);
v___x_295_ = lean_array_fget_borrowed(v_params_284_, v_i_289_);
v_fvarId_296_ = lean_ctor_get(v___x_295_, 0);
v___x_297_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0));
v___x_302_ = lean_box(0);
v___x_303_ = lean_array_get_borrowed(v___x_302_, v_args_285_, v_i_289_);
lean_inc(v_fvarId_296_);
v___x_304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_304_, 0, v_fvarId_296_);
v___x_305_ = l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(v___x_303_, v___x_304_);
lean_dec_ref_known(v___x_304_, 1);
if (v___x_305_ == 0)
{
if (v___x_286_ == 0)
{
v_a_299_ = v___y_290_;
goto v___jp_298_;
}
else
{
uint8_t v___x_306_; 
v___x_306_ = l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(v___x_303_, v___x_302_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; lean_object* v___x_308_; 
lean_dec(v_i_289_);
v___x_307_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2));
v___x_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
lean_ctor_set(v___x_308_, 1, v___y_290_);
return v___x_308_;
}
else
{
v_a_299_ = v___y_290_;
goto v___jp_298_;
}
}
}
else
{
v_a_299_ = v___y_290_;
goto v___jp_298_;
}
v___jp_298_:
{
lean_object* v___x_300_; 
v___x_300_ = lean_nat_add(v_i_289_, v_step_292_);
lean_dec(v_i_289_);
v_b_288_ = v___x_297_;
v_i_289_ = v___x_300_;
v___y_290_ = v_a_299_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___boxed(lean_object* v_params_309_, lean_object* v_args_310_, lean_object* v___x_311_, lean_object* v_range_312_, lean_object* v_b_313_, lean_object* v_i_314_, lean_object* v___y_315_){
_start:
{
uint8_t v___x_3146__boxed_316_; lean_object* v_res_317_; 
v___x_3146__boxed_316_ = lean_unbox(v___x_311_);
v_res_317_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(v_params_309_, v_args_310_, v___x_3146__boxed_316_, v_range_312_, v_b_313_, v_i_314_, v___y_315_);
lean_dec_ref(v_range_312_);
lean_dec_ref(v_args_310_);
lean_dec_ref(v_params_309_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(lean_object* v_decl_318_, lean_object* v___y_319_, lean_object* v___y_320_){
_start:
{
lean_object* v___y_322_; lean_object* v___y_326_; lean_object* v_value_329_; 
v_value_329_ = lean_ctor_get(v_decl_318_, 4);
lean_inc_ref(v_value_329_);
if (lean_obj_tag(v_value_329_) == 0)
{
lean_object* v_decl_330_; lean_object* v_value_331_; 
v_decl_330_ = lean_ctor_get(v_value_329_, 0);
lean_inc_ref(v_decl_330_);
v_value_331_ = lean_ctor_get(v_decl_330_, 3);
lean_inc(v_value_331_);
if (lean_obj_tag(v_value_331_) == 4)
{
lean_object* v_params_332_; lean_object* v_k_333_; lean_object* v_fvarId_334_; lean_object* v_fvarId_335_; lean_object* v_args_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_394_; 
v_params_332_ = lean_ctor_get(v_decl_318_, 2);
lean_inc_ref(v_params_332_);
lean_dec_ref(v_decl_318_);
v_k_333_ = lean_ctor_get(v_value_329_, 1);
lean_inc_ref(v_k_333_);
lean_dec_ref_known(v_value_329_, 2);
v_fvarId_334_ = lean_ctor_get(v_decl_330_, 0);
lean_inc(v_fvarId_334_);
lean_dec_ref(v_decl_330_);
v_fvarId_335_ = lean_ctor_get(v_value_331_, 0);
v_args_336_ = lean_ctor_get(v_value_331_, 1);
v_isSharedCheck_394_ = !lean_is_exclusive(v_value_331_);
if (v_isSharedCheck_394_ == 0)
{
v___x_338_ = v_value_331_;
v_isShared_339_ = v_isSharedCheck_394_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_args_336_);
lean_inc(v_fvarId_335_);
lean_dec(v_value_331_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_394_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_340_; lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_340_ = lean_array_get_size(v_args_336_);
v___x_341_ = lean_array_get_size(v_params_332_);
v___x_342_ = lean_nat_dec_eq(v___x_340_, v___x_341_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; lean_object* v___x_345_; 
lean_dec_ref(v_args_336_);
lean_dec(v_fvarId_335_);
lean_dec(v_fvarId_334_);
lean_dec_ref(v_k_333_);
lean_dec_ref(v_params_332_);
v___x_343_ = lean_box(0);
if (v_isShared_339_ == 0)
{
lean_ctor_set_tag(v___x_338_, 0);
lean_ctor_set(v___x_338_, 1, v___y_320_);
lean_ctor_set(v___x_338_, 0, v___x_343_);
v___x_345_ = v___x_338_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v___x_343_);
lean_ctor_set(v_reuseFailAlloc_346_, 1, v___y_320_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
else
{
if (lean_obj_tag(v_k_333_) == 5)
{
lean_object* v_fvarId_347_; uint8_t v___x_348_; 
v_fvarId_347_ = lean_ctor_get(v_k_333_, 0);
lean_inc(v_fvarId_347_);
lean_dec_ref_known(v_k_333_, 1);
v___x_348_ = l_Lean_instBEqFVarId_beq(v_fvarId_347_, v_fvarId_334_);
lean_dec(v_fvarId_334_);
lean_dec(v_fvarId_347_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; lean_object* v___x_351_; 
lean_dec_ref(v_args_336_);
lean_dec(v_fvarId_335_);
lean_dec_ref(v_params_332_);
v___x_349_ = lean_box(0);
if (v_isShared_339_ == 0)
{
lean_ctor_set_tag(v___x_338_, 0);
lean_ctor_set(v___x_338_, 1, v___y_320_);
lean_ctor_set(v___x_338_, 0, v___x_349_);
v___x_351_ = v___x_338_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v___x_349_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v___y_320_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
else
{
lean_object* v_assignment_353_; lean_object* v___x_354_; 
lean_del_object(v___x_338_);
v_assignment_353_ = lean_ctor_get(v___y_319_, 2);
v___x_354_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_assignment_353_, v_fvarId_335_);
lean_dec(v_fvarId_335_);
if (lean_obj_tag(v___x_354_) == 1)
{
lean_object* v_val_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_389_; 
v_val_355_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_389_ == 0)
{
v___x_357_ = v___x_354_;
v_isShared_358_ = v_isSharedCheck_389_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_val_355_);
lean_dec(v___x_354_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_389_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
if (lean_obj_tag(v_val_355_) == 2)
{
lean_object* v_i_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v_a_365_; lean_object* v_fst_366_; 
v_i_359_ = lean_ctor_get(v_val_355_, 0);
lean_inc(v_i_359_);
lean_dec_ref_known(v_val_355_, 1);
v___x_360_ = lean_unsigned_to_nat(0u);
v___x_361_ = lean_unsigned_to_nat(1u);
v___x_362_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_362_, 0, v___x_360_);
lean_ctor_set(v___x_362_, 1, v___x_341_);
lean_ctor_set(v___x_362_, 2, v___x_361_);
v___x_363_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0));
v___x_364_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(v_params_332_, v_args_336_, v___x_348_, v___x_362_, v___x_363_, v___x_360_, v___y_320_);
lean_dec_ref_known(v___x_362_, 3);
lean_dec_ref(v_args_336_);
lean_dec_ref(v_params_332_);
v_a_365_ = lean_ctor_get(v___x_364_, 0);
lean_inc(v_a_365_);
v_fst_366_ = lean_ctor_get(v_a_365_, 0);
lean_inc(v_fst_366_);
lean_dec(v_a_365_);
if (lean_obj_tag(v_fst_366_) == 0)
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_377_; 
v_a_367_ = lean_ctor_get(v___x_364_, 1);
v_isSharedCheck_377_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_377_ == 0)
{
lean_object* v_unused_378_; 
v_unused_378_ = lean_ctor_get(v___x_364_, 0);
lean_dec(v_unused_378_);
v___x_369_ = v___x_364_;
v_isShared_370_ = v_isSharedCheck_377_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_364_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_377_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_372_; 
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 0, v_i_359_);
v___x_372_ = v___x_357_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_i_359_);
v___x_372_ = v_reuseFailAlloc_376_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
lean_object* v___x_374_; 
if (v_isShared_370_ == 0)
{
lean_ctor_set(v___x_369_, 0, v___x_372_);
v___x_374_ = v___x_369_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_372_);
lean_ctor_set(v_reuseFailAlloc_375_, 1, v_a_367_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
else
{
lean_object* v_a_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_387_; 
lean_dec(v_i_359_);
lean_del_object(v___x_357_);
v_a_379_ = lean_ctor_get(v___x_364_, 1);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_387_ == 0)
{
lean_object* v_unused_388_; 
v_unused_388_ = lean_ctor_get(v___x_364_, 0);
lean_dec(v_unused_388_);
v___x_381_ = v___x_364_;
v_isShared_382_ = v_isSharedCheck_387_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_a_379_);
lean_dec(v___x_364_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_387_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v_val_383_; lean_object* v___x_385_; 
v_val_383_ = lean_ctor_get(v_fst_366_, 0);
lean_inc(v_val_383_);
lean_dec_ref_known(v_fst_366_, 1);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 0, v_val_383_);
v___x_385_ = v___x_381_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_val_383_);
lean_ctor_set(v_reuseFailAlloc_386_, 1, v_a_379_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
}
else
{
lean_del_object(v___x_357_);
lean_dec(v_val_355_);
lean_dec_ref(v_args_336_);
lean_dec_ref(v_params_332_);
v___y_326_ = v___y_320_;
goto v___jp_325_;
}
}
}
else
{
lean_dec(v___x_354_);
lean_dec_ref(v_args_336_);
lean_dec_ref(v_params_332_);
v___y_326_ = v___y_320_;
goto v___jp_325_;
}
}
}
else
{
lean_object* v___x_390_; lean_object* v___x_392_; 
lean_dec_ref(v_args_336_);
lean_dec(v_fvarId_335_);
lean_dec(v_fvarId_334_);
lean_dec_ref(v_k_333_);
lean_dec_ref(v_params_332_);
v___x_390_ = lean_box(0);
if (v_isShared_339_ == 0)
{
lean_ctor_set_tag(v___x_338_, 0);
lean_ctor_set(v___x_338_, 1, v___y_320_);
lean_ctor_set(v___x_338_, 0, v___x_390_);
v___x_392_ = v___x_338_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v___x_390_);
lean_ctor_set(v_reuseFailAlloc_393_, 1, v___y_320_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
}
}
}
else
{
lean_dec(v_value_331_);
lean_dec_ref_known(v_value_329_, 2);
lean_dec_ref(v_decl_330_);
lean_dec_ref(v_decl_318_);
v___y_322_ = v___y_320_;
goto v___jp_321_;
}
}
else
{
lean_dec_ref(v_value_329_);
lean_dec_ref(v_decl_318_);
v___y_322_ = v___y_320_;
goto v___jp_321_;
}
v___jp_321_:
{
lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_323_ = lean_box(0);
v___x_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
lean_ctor_set(v___x_324_, 1, v___y_322_);
return v___x_324_;
}
v___jp_325_:
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = lean_box(0);
v___x_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
lean_ctor_set(v___x_328_, 1, v___y_326_);
return v___x_328_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f___boxed(lean_object* v_decl_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(v_decl_395_, v___y_396_, v___y_397_);
lean_dec_ref(v___y_396_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0(lean_object* v_params_399_, lean_object* v_args_400_, uint8_t v___x_401_, lean_object* v_range_402_, lean_object* v_b_403_, lean_object* v_i_404_, lean_object* v_hs_405_, lean_object* v_hl_406_, lean_object* v___y_407_, lean_object* v___y_408_){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(v_params_399_, v_args_400_, v___x_401_, v_range_402_, v_b_403_, v_i_404_, v___y_408_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___boxed(lean_object* v_params_410_, lean_object* v_args_411_, lean_object* v___x_412_, lean_object* v_range_413_, lean_object* v_b_414_, lean_object* v_i_415_, lean_object* v_hs_416_, lean_object* v_hl_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
uint8_t v___x_3353__boxed_420_; lean_object* v_res_421_; 
v___x_3353__boxed_420_ = lean_unbox(v___x_412_);
v_res_421_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0(v_params_410_, v_args_411_, v___x_3353__boxed_420_, v_range_413_, v_b_414_, v_i_415_, v_hs_416_, v_hl_417_, v___y_418_, v___y_419_);
lean_dec_ref(v___y_418_);
lean_dec_ref(v_range_413_);
lean_dec_ref(v_args_411_);
lean_dec_ref(v_params_410_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(lean_object* v_upperBound_422_, lean_object* v_args_423_, lean_object* v_a_424_, lean_object* v_b_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_a_429_; lean_object* v_a_430_; uint8_t v___x_434_; 
v___x_434_ = lean_nat_dec_lt(v_a_424_, v_upperBound_422_);
if (v___x_434_ == 0)
{
lean_object* v___x_435_; 
lean_dec(v_a_424_);
v___x_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_435_, 0, v_b_425_);
lean_ctor_set(v___x_435_, 1, v___y_427_);
return v___x_435_;
}
else
{
lean_object* v___x_436_; lean_object* v___x_437_; uint8_t v___x_438_; 
v___x_436_ = lean_box(0);
v___x_437_ = lean_array_get_size(v_args_423_);
v___x_438_ = lean_nat_dec_lt(v_a_424_, v___x_437_);
if (v___x_438_ == 0)
{
lean_object* v_visited_439_; lean_object* v_fixed_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_449_; 
v_visited_439_ = lean_ctor_get(v___y_427_, 0);
v_fixed_440_ = lean_ctor_get(v___y_427_, 1);
v_isSharedCheck_449_ = !lean_is_exclusive(v___y_427_);
if (v_isSharedCheck_449_ == 0)
{
v___x_442_ = v___y_427_;
v_isShared_443_ = v_isSharedCheck_449_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_fixed_440_);
lean_inc(v_visited_439_);
lean_dec(v___y_427_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_449_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_447_; 
v___x_444_ = lean_box(v___x_438_);
v___x_445_ = lean_array_set(v_fixed_440_, v_a_424_, v___x_444_);
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 1, v___x_445_);
v___x_447_ = v___x_442_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v_visited_439_);
lean_ctor_set(v_reuseFailAlloc_448_, 1, v___x_445_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
v_a_429_ = v___x_436_;
v_a_430_ = v___x_447_;
goto v___jp_428_;
}
}
}
else
{
lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_450_ = lean_array_fget_borrowed(v_args_423_, v_a_424_);
v___x_451_ = l_Lean_Compiler_LCNF_FixedParams_evalArg(v___x_450_, v___y_426_, v___y_427_);
if (lean_obj_tag(v___x_451_) == 0)
{
lean_object* v_a_452_; lean_object* v_a_453_; lean_object* v___x_454_; uint8_t v___x_455_; 
v_a_452_ = lean_ctor_get(v___x_451_, 0);
lean_inc(v_a_452_);
v_a_453_ = lean_ctor_get(v___x_451_, 1);
lean_inc(v_a_453_);
lean_dec_ref_known(v___x_451_, 2);
lean_inc(v_a_424_);
v___x_454_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_454_, 0, v_a_424_);
v___x_455_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v_a_452_, v___x_454_);
lean_dec_ref_known(v___x_454_, 1);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_456_ = lean_box(1);
v___x_457_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v_a_452_, v___x_456_);
lean_dec(v_a_452_);
if (v___x_457_ == 0)
{
lean_object* v_visited_458_; lean_object* v_fixed_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_468_; 
v_visited_458_ = lean_ctor_get(v_a_453_, 0);
v_fixed_459_ = lean_ctor_get(v_a_453_, 1);
v_isSharedCheck_468_ = !lean_is_exclusive(v_a_453_);
if (v_isSharedCheck_468_ == 0)
{
v___x_461_ = v_a_453_;
v_isShared_462_ = v_isSharedCheck_468_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_fixed_459_);
lean_inc(v_visited_458_);
lean_dec(v_a_453_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_468_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_466_; 
v___x_463_ = lean_box(v___x_457_);
v___x_464_ = lean_array_set(v_fixed_459_, v_a_424_, v___x_463_);
if (v_isShared_462_ == 0)
{
lean_ctor_set(v___x_461_, 1, v___x_464_);
v___x_466_ = v___x_461_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_visited_458_);
lean_ctor_set(v_reuseFailAlloc_467_, 1, v___x_464_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
v_a_429_ = v___x_436_;
v_a_430_ = v___x_466_;
goto v___jp_428_;
}
}
}
else
{
v_a_429_ = v___x_436_;
v_a_430_ = v_a_453_;
goto v___jp_428_;
}
}
else
{
lean_dec(v_a_452_);
v_a_429_ = v___x_436_;
v_a_430_ = v_a_453_;
goto v___jp_428_;
}
}
else
{
lean_object* v_a_469_; lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_477_; 
lean_dec(v_a_424_);
v_a_469_ = lean_ctor_get(v___x_451_, 0);
v_a_470_ = lean_ctor_get(v___x_451_, 1);
v_isSharedCheck_477_ = !lean_is_exclusive(v___x_451_);
if (v_isSharedCheck_477_ == 0)
{
v___x_472_ = v___x_451_;
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_inc(v_a_469_);
lean_dec(v___x_451_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_475_; 
if (v_isShared_473_ == 0)
{
v___x_475_ = v___x_472_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_a_469_);
lean_ctor_set(v_reuseFailAlloc_476_, 1, v_a_470_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
}
v___jp_428_:
{
lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_431_ = lean_unsigned_to_nat(1u);
v___x_432_ = lean_nat_add(v_a_424_, v___x_431_);
lean_dec(v_a_424_);
v_a_424_ = v___x_432_;
v_b_425_ = v_a_429_;
v___y_427_ = v_a_430_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg___boxed(lean_object* v_upperBound_478_, lean_object* v_args_479_, lean_object* v_a_480_, lean_object* v_b_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(v_upperBound_478_, v_args_479_, v_a_480_, v_b_481_, v___y_482_, v___y_483_);
lean_dec_ref(v___y_482_);
lean_dec_ref(v_args_479_);
lean_dec(v_upperBound_478_);
return v_res_484_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(lean_object* v_xs_485_, lean_object* v_ys_486_, lean_object* v_x_487_){
_start:
{
lean_object* v_zero_488_; uint8_t v_isZero_489_; 
v_zero_488_ = lean_unsigned_to_nat(0u);
v_isZero_489_ = lean_nat_dec_eq(v_x_487_, v_zero_488_);
if (v_isZero_489_ == 1)
{
lean_dec(v_x_487_);
return v_isZero_489_;
}
else
{
lean_object* v_one_490_; lean_object* v_n_491_; lean_object* v___x_492_; lean_object* v___x_493_; uint8_t v___x_494_; 
v_one_490_ = lean_unsigned_to_nat(1u);
v_n_491_ = lean_nat_sub(v_x_487_, v_one_490_);
lean_dec(v_x_487_);
v___x_492_ = lean_array_fget_borrowed(v_xs_485_, v_n_491_);
v___x_493_ = lean_array_fget_borrowed(v_ys_486_, v_n_491_);
v___x_494_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v___x_492_, v___x_493_);
if (v___x_494_ == 0)
{
lean_dec(v_n_491_);
return v___x_494_;
}
else
{
v_x_487_ = v_n_491_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_xs_496_, lean_object* v_ys_497_, lean_object* v_x_498_){
_start:
{
uint8_t v_res_499_; lean_object* v_r_500_; 
v_res_499_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(v_xs_496_, v_ys_497_, v_x_498_);
lean_dec_ref(v_ys_497_);
lean_dec_ref(v_xs_496_);
v_r_500_ = lean_box(v_res_499_);
return v_r_500_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(lean_object* v_a_501_, lean_object* v_x_502_){
_start:
{
if (lean_obj_tag(v_x_502_) == 0)
{
uint8_t v___x_503_; 
v___x_503_ = 0;
return v___x_503_;
}
else
{
lean_object* v_key_504_; lean_object* v_tail_505_; uint8_t v___y_507_; lean_object* v_fst_509_; lean_object* v_snd_510_; lean_object* v_fst_511_; lean_object* v_snd_512_; uint8_t v___x_513_; 
v_key_504_ = lean_ctor_get(v_x_502_, 0);
v_tail_505_ = lean_ctor_get(v_x_502_, 2);
v_fst_509_ = lean_ctor_get(v_key_504_, 0);
v_snd_510_ = lean_ctor_get(v_key_504_, 1);
v_fst_511_ = lean_ctor_get(v_a_501_, 0);
v_snd_512_ = lean_ctor_get(v_a_501_, 1);
v___x_513_ = lean_name_eq(v_fst_509_, v_fst_511_);
if (v___x_513_ == 0)
{
v___y_507_ = v___x_513_;
goto v___jp_506_;
}
else
{
lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; 
v___x_514_ = lean_array_get_size(v_snd_510_);
v___x_515_ = lean_array_get_size(v_snd_512_);
v___x_516_ = lean_nat_dec_eq(v___x_514_, v___x_515_);
if (v___x_516_ == 0)
{
v_x_502_ = v_tail_505_;
goto _start;
}
else
{
uint8_t v___x_518_; 
v___x_518_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(v_snd_510_, v_snd_512_, v___x_514_);
v___y_507_ = v___x_518_;
goto v___jp_506_;
}
}
v___jp_506_:
{
if (v___y_507_ == 0)
{
v_x_502_ = v_tail_505_;
goto _start;
}
else
{
return v___y_507_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg___boxed(lean_object* v_a_519_, lean_object* v_x_520_){
_start:
{
uint8_t v_res_521_; lean_object* v_r_522_; 
v_res_521_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_519_, v_x_520_);
lean_dec(v_x_520_);
lean_dec_ref(v_a_519_);
v_r_522_ = lean_box(v_res_521_);
return v_r_522_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(lean_object* v_as_523_, size_t v_i_524_, size_t v_stop_525_, uint64_t v_b_526_){
_start:
{
uint8_t v___x_527_; 
v___x_527_ = lean_usize_dec_eq(v_i_524_, v_stop_525_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; uint64_t v___x_529_; uint64_t v___x_530_; size_t v___x_531_; size_t v___x_532_; 
v___x_528_ = lean_array_uget_borrowed(v_as_523_, v_i_524_);
v___x_529_ = l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(v___x_528_);
v___x_530_ = lean_uint64_mix_hash(v_b_526_, v___x_529_);
v___x_531_ = ((size_t)1ULL);
v___x_532_ = lean_usize_add(v_i_524_, v___x_531_);
v_i_524_ = v___x_532_;
v_b_526_ = v___x_530_;
goto _start;
}
else
{
return v_b_526_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2___boxed(lean_object* v_as_534_, lean_object* v_i_535_, lean_object* v_stop_536_, lean_object* v_b_537_){
_start:
{
size_t v_i_boxed_538_; size_t v_stop_boxed_539_; uint64_t v_b_boxed_540_; uint64_t v_res_541_; lean_object* v_r_542_; 
v_i_boxed_538_ = lean_unbox_usize(v_i_535_);
lean_dec(v_i_535_);
v_stop_boxed_539_ = lean_unbox_usize(v_stop_536_);
lean_dec(v_stop_536_);
v_b_boxed_540_ = lean_unbox_uint64(v_b_537_);
lean_dec_ref(v_b_537_);
v_res_541_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_as_534_, v_i_boxed_538_, v_stop_boxed_539_, v_b_boxed_540_);
lean_dec_ref(v_as_534_);
v_r_542_ = lean_box_uint64(v_res_541_);
return v_r_542_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(lean_object* v_x_543_, lean_object* v_x_544_){
_start:
{
if (lean_obj_tag(v_x_544_) == 0)
{
return v_x_543_;
}
else
{
lean_object* v_key_545_; lean_object* v_value_546_; lean_object* v_tail_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_586_; 
v_key_545_ = lean_ctor_get(v_x_544_, 0);
v_value_546_ = lean_ctor_get(v_x_544_, 1);
v_tail_547_ = lean_ctor_get(v_x_544_, 2);
v_isSharedCheck_586_ = !lean_is_exclusive(v_x_544_);
if (v_isSharedCheck_586_ == 0)
{
v___x_549_ = v_x_544_;
v_isShared_550_ = v_isSharedCheck_586_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_tail_547_);
lean_inc(v_value_546_);
lean_inc(v_key_545_);
lean_dec(v_x_544_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_586_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v_fst_551_; lean_object* v_snd_552_; lean_object* v___x_553_; uint64_t v___y_555_; uint64_t v___y_556_; uint64_t v___y_576_; 
v_fst_551_ = lean_ctor_get(v_key_545_, 0);
v_snd_552_ = lean_ctor_get(v_key_545_, 1);
v___x_553_ = lean_array_get_size(v_x_543_);
if (lean_obj_tag(v_fst_551_) == 0)
{
uint64_t v___x_584_; 
v___x_584_ = 1723ULL;
v___y_576_ = v___x_584_;
goto v___jp_575_;
}
else
{
uint64_t v_hash_585_; 
v_hash_585_ = lean_ctor_get_uint64(v_fst_551_, sizeof(void*)*2);
v___y_576_ = v_hash_585_;
goto v___jp_575_;
}
v___jp_554_:
{
uint64_t v___x_557_; uint64_t v___x_558_; uint64_t v___x_559_; uint64_t v_fold_560_; uint64_t v___x_561_; uint64_t v___x_562_; uint64_t v___x_563_; size_t v___x_564_; size_t v___x_565_; size_t v___x_566_; size_t v___x_567_; size_t v___x_568_; lean_object* v___x_569_; lean_object* v___x_571_; 
v___x_557_ = lean_uint64_mix_hash(v___y_555_, v___y_556_);
v___x_558_ = 32ULL;
v___x_559_ = lean_uint64_shift_right(v___x_557_, v___x_558_);
v_fold_560_ = lean_uint64_xor(v___x_557_, v___x_559_);
v___x_561_ = 16ULL;
v___x_562_ = lean_uint64_shift_right(v_fold_560_, v___x_561_);
v___x_563_ = lean_uint64_xor(v_fold_560_, v___x_562_);
v___x_564_ = lean_uint64_to_usize(v___x_563_);
v___x_565_ = lean_usize_of_nat(v___x_553_);
v___x_566_ = ((size_t)1ULL);
v___x_567_ = lean_usize_sub(v___x_565_, v___x_566_);
v___x_568_ = lean_usize_land(v___x_564_, v___x_567_);
v___x_569_ = lean_array_uget_borrowed(v_x_543_, v___x_568_);
lean_inc(v___x_569_);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 2, v___x_569_);
v___x_571_ = v___x_549_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_key_545_);
lean_ctor_set(v_reuseFailAlloc_574_, 1, v_value_546_);
lean_ctor_set(v_reuseFailAlloc_574_, 2, v___x_569_);
v___x_571_ = v_reuseFailAlloc_574_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
lean_object* v___x_572_; 
v___x_572_ = lean_array_uset(v_x_543_, v___x_568_, v___x_571_);
v_x_543_ = v___x_572_;
v_x_544_ = v_tail_547_;
goto _start;
}
}
v___jp_575_:
{
uint64_t v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_577_ = 7ULL;
v___x_578_ = lean_unsigned_to_nat(0u);
v___x_579_ = lean_array_get_size(v_snd_552_);
v___x_580_ = lean_nat_dec_lt(v___x_578_, v___x_579_);
if (v___x_580_ == 0)
{
v___y_555_ = v___y_576_;
v___y_556_ = v___x_577_;
goto v___jp_554_;
}
else
{
size_t v___x_581_; size_t v___x_582_; uint64_t v___x_583_; 
v___x_581_ = ((size_t)0ULL);
v___x_582_ = lean_usize_of_nat(v___x_579_);
v___x_583_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_snd_552_, v___x_581_, v___x_582_, v___x_577_);
v___y_555_ = v___y_576_;
v___y_556_ = v___x_583_;
goto v___jp_554_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(lean_object* v_i_587_, lean_object* v_source_588_, lean_object* v_target_589_){
_start:
{
lean_object* v___x_590_; uint8_t v___x_591_; 
v___x_590_ = lean_array_get_size(v_source_588_);
v___x_591_ = lean_nat_dec_lt(v_i_587_, v___x_590_);
if (v___x_591_ == 0)
{
lean_dec_ref(v_source_588_);
lean_dec(v_i_587_);
return v_target_589_;
}
else
{
lean_object* v_es_592_; lean_object* v___x_593_; lean_object* v_source_594_; lean_object* v_target_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v_es_592_ = lean_array_fget(v_source_588_, v_i_587_);
v___x_593_ = lean_box(0);
v_source_594_ = lean_array_fset(v_source_588_, v_i_587_, v___x_593_);
v_target_595_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(v_target_589_, v_es_592_);
v___x_596_ = lean_unsigned_to_nat(1u);
v___x_597_ = lean_nat_add(v_i_587_, v___x_596_);
lean_dec(v_i_587_);
v_i_587_ = v___x_597_;
v_source_588_ = v_source_594_;
v_target_589_ = v_target_595_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(lean_object* v_data_599_){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v_nbuckets_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_600_ = lean_array_get_size(v_data_599_);
v___x_601_ = lean_unsigned_to_nat(2u);
v_nbuckets_602_ = lean_nat_mul(v___x_600_, v___x_601_);
v___x_603_ = lean_unsigned_to_nat(0u);
v___x_604_ = lean_box(0);
v___x_605_ = lean_mk_array(v_nbuckets_602_, v___x_604_);
v___x_606_ = lean_array_propagate_mark(v_data_599_, v___x_605_);
v___x_607_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(v___x_603_, v_data_599_, v___x_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(lean_object* v_m_608_, lean_object* v_a_609_, lean_object* v_b_610_){
_start:
{
lean_object* v_size_611_; lean_object* v_buckets_612_; lean_object* v_fst_613_; lean_object* v_snd_614_; lean_object* v___x_615_; uint64_t v___y_617_; uint64_t v___y_618_; uint64_t v___y_657_; 
v_size_611_ = lean_ctor_get(v_m_608_, 0);
v_buckets_612_ = lean_ctor_get(v_m_608_, 1);
v_fst_613_ = lean_ctor_get(v_a_609_, 0);
v_snd_614_ = lean_ctor_get(v_a_609_, 1);
v___x_615_ = lean_array_get_size(v_buckets_612_);
if (lean_obj_tag(v_fst_613_) == 0)
{
uint64_t v___x_665_; 
v___x_665_ = 1723ULL;
v___y_657_ = v___x_665_;
goto v___jp_656_;
}
else
{
uint64_t v_hash_666_; 
v_hash_666_ = lean_ctor_get_uint64(v_fst_613_, sizeof(void*)*2);
v___y_657_ = v_hash_666_;
goto v___jp_656_;
}
v___jp_616_:
{
uint64_t v___x_619_; uint64_t v___x_620_; uint64_t v___x_621_; uint64_t v_fold_622_; uint64_t v___x_623_; uint64_t v___x_624_; uint64_t v___x_625_; size_t v___x_626_; size_t v___x_627_; size_t v___x_628_; size_t v___x_629_; size_t v___x_630_; lean_object* v_bkt_631_; uint8_t v___x_632_; 
v___x_619_ = lean_uint64_mix_hash(v___y_617_, v___y_618_);
v___x_620_ = 32ULL;
v___x_621_ = lean_uint64_shift_right(v___x_619_, v___x_620_);
v_fold_622_ = lean_uint64_xor(v___x_619_, v___x_621_);
v___x_623_ = 16ULL;
v___x_624_ = lean_uint64_shift_right(v_fold_622_, v___x_623_);
v___x_625_ = lean_uint64_xor(v_fold_622_, v___x_624_);
v___x_626_ = lean_uint64_to_usize(v___x_625_);
v___x_627_ = lean_usize_of_nat(v___x_615_);
v___x_628_ = ((size_t)1ULL);
v___x_629_ = lean_usize_sub(v___x_627_, v___x_628_);
v___x_630_ = lean_usize_land(v___x_626_, v___x_629_);
v_bkt_631_ = lean_array_uget_borrowed(v_buckets_612_, v___x_630_);
v___x_632_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_609_, v_bkt_631_);
if (v___x_632_ == 0)
{
lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_653_; 
lean_inc_ref(v_buckets_612_);
lean_inc(v_size_611_);
v_isSharedCheck_653_ = !lean_is_exclusive(v_m_608_);
if (v_isSharedCheck_653_ == 0)
{
lean_object* v_unused_654_; lean_object* v_unused_655_; 
v_unused_654_ = lean_ctor_get(v_m_608_, 1);
lean_dec(v_unused_654_);
v_unused_655_ = lean_ctor_get(v_m_608_, 0);
lean_dec(v_unused_655_);
v___x_634_ = v_m_608_;
v_isShared_635_ = v_isSharedCheck_653_;
goto v_resetjp_633_;
}
else
{
lean_dec(v_m_608_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_653_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; lean_object* v_size_x27_637_; lean_object* v___x_638_; lean_object* v_buckets_x27_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; uint8_t v___x_645_; 
v___x_636_ = lean_unsigned_to_nat(1u);
v_size_x27_637_ = lean_nat_add(v_size_611_, v___x_636_);
lean_dec(v_size_611_);
lean_inc(v_bkt_631_);
v___x_638_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_638_, 0, v_a_609_);
lean_ctor_set(v___x_638_, 1, v_b_610_);
lean_ctor_set(v___x_638_, 2, v_bkt_631_);
v_buckets_x27_639_ = lean_array_uset(v_buckets_612_, v___x_630_, v___x_638_);
v___x_640_ = lean_unsigned_to_nat(4u);
v___x_641_ = lean_nat_mul(v_size_x27_637_, v___x_640_);
v___x_642_ = lean_unsigned_to_nat(3u);
v___x_643_ = lean_nat_div(v___x_641_, v___x_642_);
lean_dec(v___x_641_);
v___x_644_ = lean_array_get_size(v_buckets_x27_639_);
v___x_645_ = lean_nat_dec_le(v___x_643_, v___x_644_);
lean_dec(v___x_643_);
if (v___x_645_ == 0)
{
lean_object* v_val_646_; lean_object* v___x_648_; 
v_val_646_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(v_buckets_x27_639_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 1, v_val_646_);
lean_ctor_set(v___x_634_, 0, v_size_x27_637_);
v___x_648_ = v___x_634_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_size_x27_637_);
lean_ctor_set(v_reuseFailAlloc_649_, 1, v_val_646_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
else
{
lean_object* v___x_651_; 
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 1, v_buckets_x27_639_);
lean_ctor_set(v___x_634_, 0, v_size_x27_637_);
v___x_651_ = v___x_634_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_size_x27_637_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v_buckets_x27_639_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
else
{
lean_dec(v_b_610_);
lean_dec_ref(v_a_609_);
return v_m_608_;
}
}
v___jp_656_:
{
uint64_t v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; uint8_t v___x_661_; 
v___x_658_ = 7ULL;
v___x_659_ = lean_unsigned_to_nat(0u);
v___x_660_ = lean_array_get_size(v_snd_614_);
v___x_661_ = lean_nat_dec_lt(v___x_659_, v___x_660_);
if (v___x_661_ == 0)
{
v___y_617_ = v___y_657_;
v___y_618_ = v___x_658_;
goto v___jp_616_;
}
else
{
size_t v___x_662_; size_t v___x_663_; uint64_t v___x_664_; 
v___x_662_ = ((size_t)0ULL);
v___x_663_ = lean_usize_of_nat(v___x_660_);
v___x_664_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_snd_614_, v___x_662_, v___x_663_, v___x_658_);
v___y_617_ = v___y_657_;
v___y_618_ = v___x_664_;
goto v___jp_616_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(lean_object* v_f_667_, lean_object* v_v_668_, lean_object* v___y_669_, lean_object* v___y_670_){
_start:
{
if (lean_obj_tag(v_v_668_) == 0)
{
lean_object* v_code_671_; lean_object* v___x_672_; 
v_code_671_ = lean_ctor_get(v_v_668_, 0);
lean_inc_ref(v_code_671_);
lean_dec_ref_known(v_v_668_, 1);
lean_inc_ref(v___y_669_);
v___x_672_ = lean_apply_3(v_f_667_, v_code_671_, v___y_669_, v___y_670_);
return v___x_672_;
}
else
{
lean_object* v___x_673_; lean_object* v___x_674_; 
lean_dec_ref_known(v_v_668_, 1);
lean_dec_ref(v_f_667_);
v___x_673_ = lean_box(0);
v___x_674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
lean_ctor_set(v___x_674_, 1, v___y_670_);
return v___x_674_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg___boxed(lean_object* v_f_675_, lean_object* v_v_676_, lean_object* v___y_677_, lean_object* v___y_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(v_f_675_, v_v_676_, v___y_677_, v___y_678_);
lean_dec_ref(v___y_677_);
return v_res_679_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(lean_object* v_m_680_, lean_object* v_a_681_){
_start:
{
lean_object* v_buckets_682_; lean_object* v_fst_683_; lean_object* v_snd_684_; lean_object* v___x_685_; uint64_t v___y_687_; uint64_t v___y_688_; uint64_t v___y_704_; 
v_buckets_682_ = lean_ctor_get(v_m_680_, 1);
v_fst_683_ = lean_ctor_get(v_a_681_, 0);
v_snd_684_ = lean_ctor_get(v_a_681_, 1);
v___x_685_ = lean_array_get_size(v_buckets_682_);
if (lean_obj_tag(v_fst_683_) == 0)
{
uint64_t v___x_712_; 
v___x_712_ = 1723ULL;
v___y_704_ = v___x_712_;
goto v___jp_703_;
}
else
{
uint64_t v_hash_713_; 
v_hash_713_ = lean_ctor_get_uint64(v_fst_683_, sizeof(void*)*2);
v___y_704_ = v_hash_713_;
goto v___jp_703_;
}
v___jp_686_:
{
uint64_t v___x_689_; uint64_t v___x_690_; uint64_t v___x_691_; uint64_t v_fold_692_; uint64_t v___x_693_; uint64_t v___x_694_; uint64_t v___x_695_; size_t v___x_696_; size_t v___x_697_; size_t v___x_698_; size_t v___x_699_; size_t v___x_700_; lean_object* v___x_701_; uint8_t v___x_702_; 
v___x_689_ = lean_uint64_mix_hash(v___y_687_, v___y_688_);
v___x_690_ = 32ULL;
v___x_691_ = lean_uint64_shift_right(v___x_689_, v___x_690_);
v_fold_692_ = lean_uint64_xor(v___x_689_, v___x_691_);
v___x_693_ = 16ULL;
v___x_694_ = lean_uint64_shift_right(v_fold_692_, v___x_693_);
v___x_695_ = lean_uint64_xor(v_fold_692_, v___x_694_);
v___x_696_ = lean_uint64_to_usize(v___x_695_);
v___x_697_ = lean_usize_of_nat(v___x_685_);
v___x_698_ = ((size_t)1ULL);
v___x_699_ = lean_usize_sub(v___x_697_, v___x_698_);
v___x_700_ = lean_usize_land(v___x_696_, v___x_699_);
v___x_701_ = lean_array_uget_borrowed(v_buckets_682_, v___x_700_);
v___x_702_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_681_, v___x_701_);
return v___x_702_;
}
v___jp_703_:
{
uint64_t v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; uint8_t v___x_708_; 
v___x_705_ = 7ULL;
v___x_706_ = lean_unsigned_to_nat(0u);
v___x_707_ = lean_array_get_size(v_snd_684_);
v___x_708_ = lean_nat_dec_lt(v___x_706_, v___x_707_);
if (v___x_708_ == 0)
{
v___y_687_ = v___y_704_;
v___y_688_ = v___x_705_;
goto v___jp_686_;
}
else
{
size_t v___x_709_; size_t v___x_710_; uint64_t v___x_711_; 
v___x_709_ = ((size_t)0ULL);
v___x_710_ = lean_usize_of_nat(v___x_707_);
v___x_711_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_snd_684_, v___x_709_, v___x_710_, v___x_705_);
v___y_687_ = v___y_704_;
v___y_688_ = v___x_711_;
goto v___jp_686_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___boxed(lean_object* v_m_714_, lean_object* v_a_715_){
_start:
{
uint8_t v_res_716_; lean_object* v_r_717_; 
v_res_716_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(v_m_714_, v_a_715_);
lean_dec_ref(v_a_715_);
lean_dec_ref(v_m_714_);
v_r_717_ = lean_box(v_res_716_);
return v_r_717_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(lean_object* v_upperBound_718_, lean_object* v_args_719_, lean_object* v_a_720_, lean_object* v_b_721_, lean_object* v___y_722_, lean_object* v___y_723_){
_start:
{
lean_object* v_a_725_; lean_object* v_a_726_; uint8_t v___x_730_; 
v___x_730_ = lean_nat_dec_lt(v_a_720_, v_upperBound_718_);
if (v___x_730_ == 0)
{
lean_object* v___x_731_; 
lean_dec(v_a_720_);
v___x_731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_731_, 0, v_b_721_);
lean_ctor_set(v___x_731_, 1, v___y_723_);
return v___x_731_;
}
else
{
lean_object* v___x_732_; uint8_t v___x_733_; 
v___x_732_ = lean_array_get_size(v_args_719_);
v___x_733_ = lean_nat_dec_lt(v_a_720_, v___x_732_);
if (v___x_733_ == 0)
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = lean_box(0);
v___x_735_ = lean_array_push(v_b_721_, v___x_734_);
v_a_725_ = v___x_735_;
v_a_726_ = v___y_723_;
goto v___jp_724_;
}
else
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = lean_array_fget_borrowed(v_args_719_, v_a_720_);
v___x_737_ = l_Lean_Compiler_LCNF_FixedParams_evalArg(v___x_736_, v___y_722_, v___y_723_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; lean_object* v_a_739_; lean_object* v___x_740_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_738_);
v_a_739_ = lean_ctor_get(v___x_737_, 1);
lean_inc(v_a_739_);
lean_dec_ref_known(v___x_737_, 2);
v___x_740_ = lean_array_push(v_b_721_, v_a_738_);
v_a_725_ = v___x_740_;
v_a_726_ = v_a_739_;
goto v___jp_724_;
}
else
{
lean_object* v_a_741_; lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
lean_dec_ref(v_b_721_);
lean_dec(v_a_720_);
v_a_741_ = lean_ctor_get(v___x_737_, 0);
v_a_742_ = lean_ctor_get(v___x_737_, 1);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_749_ == 0)
{
v___x_744_ = v___x_737_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_inc(v_a_741_);
lean_dec(v___x_737_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_741_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_a_742_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
}
v___jp_724_:
{
lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_727_ = lean_unsigned_to_nat(1u);
v___x_728_ = lean_nat_add(v_a_720_, v___x_727_);
lean_dec(v_a_720_);
v_a_720_ = v___x_728_;
v_b_721_ = v_a_725_;
v___y_723_ = v_a_726_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg___boxed(lean_object* v_upperBound_750_, lean_object* v_args_751_, lean_object* v_a_752_, lean_object* v_b_753_, lean_object* v___y_754_, lean_object* v___y_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(v_upperBound_750_, v_args_751_, v_a_752_, v_b_753_, v___y_754_, v___y_755_);
lean_dec_ref(v___y_754_);
lean_dec_ref(v_args_751_);
lean_dec(v_upperBound_750_);
return v_res_756_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(uint8_t v_a_757_, uint8_t v___x_758_, lean_object* v_as_759_, size_t v_i_760_, size_t v_stop_761_){
_start:
{
uint8_t v___x_762_; 
v___x_762_ = lean_usize_dec_eq(v_i_760_, v_stop_761_);
if (v___x_762_ == 0)
{
uint8_t v___x_763_; uint8_t v___y_765_; lean_object* v___x_769_; uint8_t v___x_770_; 
v___x_763_ = 1;
v___x_769_ = lean_array_uget_borrowed(v_as_759_, v_i_760_);
v___x_770_ = lean_unbox(v___x_769_);
if (v___x_770_ == 0)
{
if (v_a_757_ == 0)
{
v___y_765_ = v___x_758_;
goto v___jp_764_;
}
else
{
uint8_t v___x_771_; 
v___x_771_ = lean_unbox(v___x_769_);
v___y_765_ = v___x_771_;
goto v___jp_764_;
}
}
else
{
v___y_765_ = v_a_757_;
goto v___jp_764_;
}
v___jp_764_:
{
if (v___y_765_ == 0)
{
size_t v___x_766_; size_t v___x_767_; 
v___x_766_ = ((size_t)1ULL);
v___x_767_ = lean_usize_add(v_i_760_, v___x_766_);
v_i_760_ = v___x_767_;
goto _start;
}
else
{
return v___x_763_;
}
}
}
else
{
uint8_t v___x_772_; 
v___x_772_ = 0;
return v___x_772_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9___boxed(lean_object* v_a_773_, lean_object* v___x_774_, lean_object* v_as_775_, lean_object* v_i_776_, lean_object* v_stop_777_){
_start:
{
uint8_t v_a_boxed_778_; uint8_t v___x_13277__boxed_779_; size_t v_i_boxed_780_; size_t v_stop_boxed_781_; uint8_t v_res_782_; lean_object* v_r_783_; 
v_a_boxed_778_ = lean_unbox(v_a_773_);
v___x_13277__boxed_779_ = lean_unbox(v___x_774_);
v_i_boxed_780_ = lean_unbox_usize(v_i_776_);
lean_dec(v_i_776_);
v_stop_boxed_781_ = lean_unbox_usize(v_stop_777_);
lean_dec(v_stop_777_);
v_res_782_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(v_a_boxed_778_, v___x_13277__boxed_779_, v_as_775_, v_i_boxed_780_, v_stop_boxed_781_);
lean_dec_ref(v_as_775_);
v_r_783_ = lean_box(v_res_782_);
return v_r_783_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(uint8_t v___x_784_, lean_object* v_as_785_, uint8_t v_a_786_){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; uint8_t v___x_789_; 
v___x_787_ = lean_unsigned_to_nat(0u);
v___x_788_ = lean_array_get_size(v_as_785_);
v___x_789_ = lean_nat_dec_lt(v___x_787_, v___x_788_);
if (v___x_789_ == 0)
{
return v___x_789_;
}
else
{
if (v___x_789_ == 0)
{
return v___x_789_;
}
else
{
size_t v___x_790_; size_t v___x_791_; uint8_t v___x_792_; 
v___x_790_ = ((size_t)0ULL);
v___x_791_ = lean_usize_of_nat(v___x_788_);
v___x_792_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(v_a_786_, v___x_784_, v_as_785_, v___x_790_, v___x_791_);
return v___x_792_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6___boxed(lean_object* v___x_793_, lean_object* v_as_794_, lean_object* v_a_795_){
_start:
{
uint8_t v___x_13302__boxed_796_; uint8_t v_a_boxed_797_; uint8_t v_res_798_; lean_object* v_r_799_; 
v___x_13302__boxed_796_ = lean_unbox(v___x_793_);
v_a_boxed_797_ = lean_unbox(v_a_795_);
v_res_798_ = l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(v___x_13302__boxed_796_, v_as_794_, v_a_boxed_797_);
lean_dec_ref(v_as_794_);
v_r_799_ = lean_box(v_res_798_);
return v_r_799_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0___boxed(lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_c_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0(v_a_802_, v_a_803_, v_c_804_, v___y_805_, v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec_ref(v_a_802_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(lean_object* v_declName_808_, lean_object* v_args_809_, lean_object* v_as_810_, size_t v_sz_811_, size_t v_i_812_, lean_object* v_b_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
lean_object* v_a_817_; lean_object* v_a_818_; uint8_t v___x_822_; 
v___x_822_ = lean_usize_dec_lt(v_i_812_, v_sz_811_);
if (v___x_822_ == 0)
{
lean_object* v___x_823_; 
lean_dec(v_declName_808_);
v___x_823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_823_, 0, v_b_813_);
lean_ctor_set(v___x_823_, 1, v___y_815_);
return v___x_823_;
}
else
{
lean_object* v_a_824_; lean_object* v_toSignature_825_; lean_object* v_value_826_; lean_object* v_name_827_; lean_object* v_params_828_; lean_object* v___x_829_; uint8_t v___x_830_; 
v_a_824_ = lean_array_uget_borrowed(v_as_810_, v_i_812_);
v_toSignature_825_ = lean_ctor_get(v_a_824_, 0);
v_value_826_ = lean_ctor_get(v_a_824_, 1);
v_name_827_ = lean_ctor_get(v_toSignature_825_, 0);
v_params_828_ = lean_ctor_get(v_toSignature_825_, 3);
v___x_829_ = lean_box(0);
v___x_830_ = lean_name_eq(v_declName_808_, v_name_827_);
if (v___x_830_ == 0)
{
v_a_817_ = v___x_829_;
v_a_818_ = v___y_815_;
goto v___jp_816_;
}
else
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_831_ = lean_array_get_size(v_params_828_);
v___x_832_ = lean_unsigned_to_nat(0u);
v___x_833_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0));
v___x_834_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(v___x_831_, v_args_809_, v___x_832_, v___x_833_, v___y_814_, v___y_815_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_835_; lean_object* v_a_836_; lean_object* v_visited_837_; lean_object* v_fixed_838_; lean_object* v___x_839_; uint8_t v___x_840_; 
v_a_835_ = lean_ctor_get(v___x_834_, 1);
lean_inc(v_a_835_);
v_a_836_ = lean_ctor_get(v___x_834_, 0);
lean_inc_n(v_a_836_, 2);
lean_dec_ref_known(v___x_834_, 2);
v_visited_837_ = lean_ctor_get(v_a_835_, 0);
v_fixed_838_ = lean_ctor_get(v_a_835_, 1);
lean_inc(v_declName_808_);
v___x_839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_839_, 0, v_declName_808_);
lean_ctor_set(v___x_839_, 1, v_a_836_);
v___x_840_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(v_visited_837_, v___x_839_);
if (v___x_840_ == 0)
{
lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_851_; 
lean_inc_ref(v_fixed_838_);
lean_inc_ref(v_visited_837_);
v_isSharedCheck_851_ = !lean_is_exclusive(v_a_835_);
if (v_isSharedCheck_851_ == 0)
{
lean_object* v_unused_852_; lean_object* v_unused_853_; 
v_unused_852_ = lean_ctor_get(v_a_835_, 1);
lean_dec(v_unused_852_);
v_unused_853_ = lean_ctor_get(v_a_835_, 0);
lean_dec(v_unused_853_);
v___x_842_ = v_a_835_;
v_isShared_843_ = v_isSharedCheck_851_;
goto v_resetjp_841_;
}
else
{
lean_dec(v_a_835_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_851_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___f_844_; lean_object* v___x_845_; lean_object* v___x_847_; 
lean_inc(v_a_824_);
v___f_844_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0___boxed), 5, 2);
lean_closure_set(v___f_844_, 0, v_a_824_);
lean_closure_set(v___f_844_, 1, v_a_836_);
v___x_845_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(v_visited_837_, v___x_839_, v___x_829_);
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 0, v___x_845_);
v___x_847_ = v___x_842_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v___x_845_);
lean_ctor_set(v_reuseFailAlloc_850_, 1, v_fixed_838_);
v___x_847_ = v_reuseFailAlloc_850_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
lean_object* v___x_848_; 
lean_inc_ref(v_value_826_);
v___x_848_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(v___f_844_, v_value_826_, v___y_814_, v___x_847_);
if (lean_obj_tag(v___x_848_) == 0)
{
lean_object* v_a_849_; 
v_a_849_ = lean_ctor_get(v___x_848_, 1);
lean_inc(v_a_849_);
lean_dec_ref_known(v___x_848_, 2);
v_a_817_ = v___x_829_;
v_a_818_ = v_a_849_;
goto v___jp_816_;
}
else
{
lean_dec(v_declName_808_);
return v___x_848_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_839_, 2);
lean_dec(v_a_836_);
v_a_817_ = v___x_829_;
v_a_818_ = v_a_835_;
goto v___jp_816_;
}
}
else
{
lean_object* v_a_854_; lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_862_; 
lean_dec(v_declName_808_);
v_a_854_ = lean_ctor_get(v___x_834_, 0);
v_a_855_ = lean_ctor_get(v___x_834_, 1);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_862_ == 0)
{
v___x_857_ = v___x_834_;
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_inc(v_a_854_);
lean_dec(v___x_834_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_860_; 
if (v_isShared_858_ == 0)
{
v___x_860_ = v___x_857_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_a_854_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v_a_855_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
}
}
v___jp_816_:
{
size_t v___x_819_; size_t v___x_820_; 
v___x_819_ = ((size_t)1ULL);
v___x_820_ = lean_usize_add(v_i_812_, v___x_819_);
v_i_812_ = v___x_820_;
v_b_813_ = v_a_817_;
v___y_815_ = v_a_818_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp(lean_object* v_declName_863_, lean_object* v_args_864_, lean_object* v___y_865_, lean_object* v___y_866_){
_start:
{
lean_object* v___y_868_; lean_object* v_decls_869_; lean_object* v___y_870_; lean_object* v_main_884_; lean_object* v_toSignature_885_; lean_object* v_decls_886_; lean_object* v_name_887_; lean_object* v_params_888_; uint8_t v___x_889_; 
v_main_884_ = lean_ctor_get(v___y_865_, 1);
v_toSignature_885_ = lean_ctor_get(v_main_884_, 0);
v_decls_886_ = lean_ctor_get(v___y_865_, 0);
v_name_887_ = lean_ctor_get(v_toSignature_885_, 0);
v_params_888_ = lean_ctor_get(v_toSignature_885_, 3);
v___x_889_ = lean_name_eq(v_declName_863_, v_name_887_);
if (v___x_889_ == 0)
{
v___y_868_ = v___y_865_;
v_decls_869_ = v_decls_886_;
v___y_870_ = v___y_866_;
goto v___jp_867_;
}
else
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_890_ = lean_array_get_size(v_params_888_);
v___x_891_ = lean_unsigned_to_nat(0u);
v___x_892_ = lean_box(0);
v___x_893_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(v___x_890_, v_args_864_, v___x_891_, v___x_892_, v___y_865_, v___y_866_);
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_903_; 
v_a_894_ = lean_ctor_get(v___x_893_, 1);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_903_ == 0)
{
lean_object* v_unused_904_; 
v_unused_904_ = lean_ctor_get(v___x_893_, 0);
lean_dec(v_unused_904_);
v___x_896_ = v___x_893_;
v_isShared_897_ = v_isSharedCheck_903_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_893_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_903_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v_fixed_898_; uint8_t v___x_899_; 
v_fixed_898_ = lean_ctor_get(v_a_894_, 1);
v___x_899_ = l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(v___x_889_, v_fixed_898_, v___x_889_);
if (v___x_899_ == 0)
{
lean_object* v___x_901_; 
lean_dec(v_declName_863_);
if (v_isShared_897_ == 0)
{
lean_ctor_set_tag(v___x_896_, 1);
lean_ctor_set(v___x_896_, 0, v___x_892_);
v___x_901_ = v___x_896_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_892_);
lean_ctor_set(v_reuseFailAlloc_902_, 1, v_a_894_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
else
{
lean_del_object(v___x_896_);
v___y_868_ = v___y_865_;
v_decls_869_ = v_decls_886_;
v___y_870_ = v_a_894_;
goto v___jp_867_;
}
}
}
else
{
lean_dec(v_declName_863_);
return v___x_893_;
}
}
v___jp_867_:
{
lean_object* v___x_871_; size_t v_sz_872_; size_t v___x_873_; lean_object* v___x_874_; 
v___x_871_ = lean_box(0);
v_sz_872_ = lean_array_size(v_decls_869_);
v___x_873_ = ((size_t)0ULL);
v___x_874_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(v_declName_863_, v_args_864_, v_decls_869_, v_sz_872_, v___x_873_, v___x_871_, v___y_868_, v___y_870_);
if (lean_obj_tag(v___x_874_) == 0)
{
lean_object* v_a_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_882_; 
v_a_875_ = lean_ctor_get(v___x_874_, 1);
v_isSharedCheck_882_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_882_ == 0)
{
lean_object* v_unused_883_; 
v_unused_883_ = lean_ctor_get(v___x_874_, 0);
lean_dec(v_unused_883_);
v___x_877_ = v___x_874_;
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_a_875_);
lean_dec(v___x_874_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_880_; 
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 0, v___x_871_);
v___x_880_ = v___x_877_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v___x_871_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v_a_875_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
else
{
return v___x_874_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue(lean_object* v_e_905_, lean_object* v___y_906_, lean_object* v___y_907_){
_start:
{
if (lean_obj_tag(v_e_905_) == 3)
{
lean_object* v_declName_908_; lean_object* v_args_909_; lean_object* v___x_910_; 
v_declName_908_ = lean_ctor_get(v_e_905_, 0);
lean_inc(v_declName_908_);
v_args_909_ = lean_ctor_get(v_e_905_, 2);
lean_inc_ref(v_args_909_);
lean_dec_ref_known(v_e_905_, 3);
v___x_910_ = l_Lean_Compiler_LCNF_FixedParams_evalApp(v_declName_908_, v_args_909_, v___y_906_, v___y_907_);
lean_dec_ref(v_args_909_);
return v___x_910_;
}
else
{
lean_object* v___x_911_; lean_object* v___x_912_; 
lean_dec(v_e_905_);
v___x_911_ = lean_box(0);
v___x_912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_911_);
lean_ctor_set(v___x_912_, 1, v___y_907_);
return v___x_912_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(lean_object* v_as_913_, size_t v_i_914_, size_t v_stop_915_, lean_object* v_b_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
lean_object* v___y_920_; uint8_t v___x_927_; 
v___x_927_ = lean_usize_dec_eq(v_i_914_, v_stop_915_);
if (v___x_927_ == 0)
{
lean_object* v___x_928_; 
v___x_928_ = lean_array_uget_borrowed(v_as_913_, v_i_914_);
switch(lean_obj_tag(v___x_928_))
{
case 0:
{
lean_object* v_code_929_; 
v_code_929_ = lean_ctor_get(v___x_928_, 2);
lean_inc_ref(v_code_929_);
v___y_920_ = v_code_929_;
goto v___jp_919_;
}
case 1:
{
lean_object* v_code_930_; 
v_code_930_ = lean_ctor_get(v___x_928_, 1);
lean_inc_ref(v_code_930_);
v___y_920_ = v_code_930_;
goto v___jp_919_;
}
default: 
{
lean_object* v_code_931_; 
v_code_931_ = lean_ctor_get(v___x_928_, 0);
lean_inc_ref(v_code_931_);
v___y_920_ = v_code_931_;
goto v___jp_919_;
}
}
}
else
{
lean_object* v___x_932_; 
v___x_932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_932_, 0, v_b_916_);
lean_ctor_set(v___x_932_, 1, v___y_918_);
return v___x_932_;
}
v___jp_919_:
{
lean_object* v___x_921_; 
lean_inc_ref(v___y_917_);
v___x_921_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v___y_920_, v___y_917_, v___y_918_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; lean_object* v_a_923_; size_t v___x_924_; size_t v___x_925_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_a_922_);
v_a_923_ = lean_ctor_get(v___x_921_, 1);
lean_inc(v_a_923_);
lean_dec_ref_known(v___x_921_, 2);
v___x_924_ = ((size_t)1ULL);
v___x_925_ = lean_usize_add(v_i_914_, v___x_924_);
v_i_914_ = v___x_925_;
v_b_916_ = v_a_922_;
v___y_918_ = v_a_923_;
goto _start;
}
else
{
return v___x_921_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalCode(lean_object* v_code_933_, lean_object* v___y_934_, lean_object* v___y_935_){
_start:
{
switch(lean_obj_tag(v_code_933_))
{
case 0:
{
lean_object* v_decl_936_; lean_object* v_k_937_; lean_object* v_value_938_; lean_object* v___x_939_; 
v_decl_936_ = lean_ctor_get(v_code_933_, 0);
lean_inc_ref(v_decl_936_);
v_k_937_ = lean_ctor_get(v_code_933_, 1);
lean_inc_ref(v_k_937_);
lean_dec_ref_known(v_code_933_, 2);
v_value_938_ = lean_ctor_get(v_decl_936_, 3);
lean_inc(v_value_938_);
lean_dec_ref(v_decl_936_);
v___x_939_ = l_Lean_Compiler_LCNF_FixedParams_evalLetValue(v_value_938_, v___y_934_, v___y_935_);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_a_940_; 
v_a_940_ = lean_ctor_get(v___x_939_, 1);
lean_inc(v_a_940_);
lean_dec_ref_known(v___x_939_, 2);
v_code_933_ = v_k_937_;
v___y_935_ = v_a_940_;
goto _start;
}
else
{
lean_dec_ref(v_k_937_);
lean_dec_ref(v___y_934_);
return v___x_939_;
}
}
case 1:
{
lean_object* v_decl_942_; lean_object* v_k_943_; lean_object* v___x_944_; 
v_decl_942_ = lean_ctor_get(v_code_933_, 0);
lean_inc_ref_n(v_decl_942_, 2);
v_k_943_ = lean_ctor_get(v_code_933_, 1);
lean_inc_ref(v_k_943_);
lean_dec_ref_known(v_code_933_, 2);
v___x_944_ = l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(v_decl_942_, v___y_934_, v___y_935_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; 
v_a_945_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_a_945_);
if (lean_obj_tag(v_a_945_) == 1)
{
lean_object* v_a_946_; lean_object* v_val_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_961_; 
v_a_946_ = lean_ctor_get(v___x_944_, 1);
lean_inc(v_a_946_);
lean_dec_ref_known(v___x_944_, 2);
v_val_947_ = lean_ctor_get(v_a_945_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v_a_945_);
if (v_isSharedCheck_961_ == 0)
{
v___x_949_ = v_a_945_;
v_isShared_950_ = v_isSharedCheck_961_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_val_947_);
lean_dec(v_a_945_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_961_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v_fvarId_951_; lean_object* v_decls_952_; lean_object* v_main_953_; lean_object* v_assignment_954_; lean_object* v___x_956_; 
v_fvarId_951_ = lean_ctor_get(v_decl_942_, 0);
lean_inc(v_fvarId_951_);
lean_dec_ref(v_decl_942_);
v_decls_952_ = lean_ctor_get(v___y_934_, 0);
lean_inc_ref(v_decls_952_);
v_main_953_ = lean_ctor_get(v___y_934_, 1);
lean_inc_ref(v_main_953_);
v_assignment_954_ = lean_ctor_get(v___y_934_, 2);
lean_inc(v_assignment_954_);
lean_dec_ref(v___y_934_);
if (v_isShared_950_ == 0)
{
lean_ctor_set_tag(v___x_949_, 2);
v___x_956_ = v___x_949_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_val_947_);
v___x_956_ = v_reuseFailAlloc_960_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_951_, v___x_956_, v_assignment_954_);
v___x_958_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_958_, 0, v_decls_952_);
lean_ctor_set(v___x_958_, 1, v_main_953_);
lean_ctor_set(v___x_958_, 2, v___x_957_);
v_code_933_ = v_k_943_;
v___y_934_ = v___x_958_;
v___y_935_ = v_a_946_;
goto _start;
}
}
}
else
{
lean_object* v_a_962_; lean_object* v_value_963_; lean_object* v___x_964_; 
lean_dec(v_a_945_);
v_a_962_ = lean_ctor_get(v___x_944_, 1);
lean_inc(v_a_962_);
lean_dec_ref_known(v___x_944_, 2);
v_value_963_ = lean_ctor_get(v_decl_942_, 4);
lean_inc_ref(v_value_963_);
lean_dec_ref(v_decl_942_);
lean_inc_ref(v___y_934_);
v___x_964_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_value_963_, v___y_934_, v_a_962_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_a_965_; 
v_a_965_ = lean_ctor_get(v___x_964_, 1);
lean_inc(v_a_965_);
lean_dec_ref_known(v___x_964_, 2);
v_code_933_ = v_k_943_;
v___y_935_ = v_a_965_;
goto _start;
}
else
{
lean_dec_ref(v_k_943_);
lean_dec_ref(v___y_934_);
return v___x_964_;
}
}
}
else
{
lean_object* v_a_967_; lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_975_; 
lean_dec_ref(v_k_943_);
lean_dec_ref(v_decl_942_);
lean_dec_ref(v___y_934_);
v_a_967_ = lean_ctor_get(v___x_944_, 0);
v_a_968_ = lean_ctor_get(v___x_944_, 1);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_975_ == 0)
{
v___x_970_ = v___x_944_;
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_inc(v_a_967_);
lean_dec(v___x_944_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_967_);
lean_ctor_set(v_reuseFailAlloc_974_, 1, v_a_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
case 2:
{
lean_object* v_decl_976_; lean_object* v_k_977_; lean_object* v_value_978_; lean_object* v___x_979_; 
v_decl_976_ = lean_ctor_get(v_code_933_, 0);
lean_inc_ref(v_decl_976_);
v_k_977_ = lean_ctor_get(v_code_933_, 1);
lean_inc_ref(v_k_977_);
lean_dec_ref_known(v_code_933_, 2);
v_value_978_ = lean_ctor_get(v_decl_976_, 4);
lean_inc_ref(v_value_978_);
lean_dec_ref(v_decl_976_);
lean_inc_ref(v___y_934_);
v___x_979_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_value_978_, v___y_934_, v___y_935_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v_a_980_; 
v_a_980_ = lean_ctor_get(v___x_979_, 1);
lean_inc(v_a_980_);
lean_dec_ref_known(v___x_979_, 2);
v_code_933_ = v_k_977_;
v___y_935_ = v_a_980_;
goto _start;
}
else
{
lean_dec_ref(v_k_977_);
lean_dec_ref(v___y_934_);
return v___x_979_;
}
}
case 3:
{
lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_989_; 
lean_dec_ref(v___y_934_);
v_isSharedCheck_989_ = !lean_is_exclusive(v_code_933_);
if (v_isSharedCheck_989_ == 0)
{
lean_object* v_unused_990_; lean_object* v_unused_991_; 
v_unused_990_ = lean_ctor_get(v_code_933_, 1);
lean_dec(v_unused_990_);
v_unused_991_ = lean_ctor_get(v_code_933_, 0);
lean_dec(v_unused_991_);
v___x_983_ = v_code_933_;
v_isShared_984_ = v_isSharedCheck_989_;
goto v_resetjp_982_;
}
else
{
lean_dec(v_code_933_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_989_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_985_; lean_object* v___x_987_; 
v___x_985_ = lean_box(0);
if (v_isShared_984_ == 0)
{
lean_ctor_set_tag(v___x_983_, 0);
lean_ctor_set(v___x_983_, 1, v___y_935_);
lean_ctor_set(v___x_983_, 0, v___x_985_);
v___x_987_ = v___x_983_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v___x_985_);
lean_ctor_set(v_reuseFailAlloc_988_, 1, v___y_935_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
case 4:
{
lean_object* v_cases_992_; lean_object* v_alts_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; uint8_t v___x_997_; 
v_cases_992_ = lean_ctor_get(v_code_933_, 0);
lean_inc_ref(v_cases_992_);
lean_dec_ref_known(v_code_933_, 1);
v_alts_993_ = lean_ctor_get(v_cases_992_, 3);
lean_inc_ref(v_alts_993_);
lean_dec_ref(v_cases_992_);
v___x_994_ = lean_unsigned_to_nat(0u);
v___x_995_ = lean_array_get_size(v_alts_993_);
v___x_996_ = lean_box(0);
v___x_997_ = lean_nat_dec_lt(v___x_994_, v___x_995_);
if (v___x_997_ == 0)
{
lean_object* v___x_998_; 
lean_dec_ref(v_alts_993_);
lean_dec_ref(v___y_934_);
v___x_998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_998_, 0, v___x_996_);
lean_ctor_set(v___x_998_, 1, v___y_935_);
return v___x_998_;
}
else
{
uint8_t v___x_999_; 
v___x_999_ = lean_nat_dec_le(v___x_995_, v___x_995_);
if (v___x_999_ == 0)
{
if (v___x_997_ == 0)
{
lean_object* v___x_1000_; 
lean_dec_ref(v_alts_993_);
lean_dec_ref(v___y_934_);
v___x_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_996_);
lean_ctor_set(v___x_1000_, 1, v___y_935_);
return v___x_1000_;
}
else
{
size_t v___x_1001_; size_t v___x_1002_; lean_object* v___x_1003_; 
v___x_1001_ = ((size_t)0ULL);
v___x_1002_ = lean_usize_of_nat(v___x_995_);
v___x_1003_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(v_alts_993_, v___x_1001_, v___x_1002_, v___x_996_, v___y_934_, v___y_935_);
lean_dec_ref(v___y_934_);
lean_dec_ref(v_alts_993_);
return v___x_1003_;
}
}
else
{
size_t v___x_1004_; size_t v___x_1005_; lean_object* v___x_1006_; 
v___x_1004_ = ((size_t)0ULL);
v___x_1005_ = lean_usize_of_nat(v___x_995_);
v___x_1006_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(v_alts_993_, v___x_1004_, v___x_1005_, v___x_996_, v___y_934_, v___y_935_);
lean_dec_ref(v___y_934_);
lean_dec_ref(v_alts_993_);
return v___x_1006_;
}
}
}
default: 
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
lean_dec_ref(v___y_934_);
lean_dec_ref(v_code_933_);
v___x_1007_ = lean_box(0);
v___x_1008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
lean_ctor_set(v___x_1008_, 1, v___y_935_);
return v___x_1008_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0(lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_c_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v_decls_1014_; lean_object* v_main_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v_decls_1014_ = lean_ctor_get(v___y_1012_, 0);
v_main_1015_ = lean_ctor_get(v___y_1012_, 1);
v___x_1016_ = l_Lean_Compiler_LCNF_FixedParams_mkAssignment(v_a_1009_, v_a_1010_);
lean_inc_ref(v_main_1015_);
lean_inc_ref(v_decls_1014_);
v___x_1017_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1017_, 0, v_decls_1014_);
lean_ctor_set(v___x_1017_, 1, v_main_1015_);
lean_ctor_set(v___x_1017_, 2, v___x_1016_);
v___x_1018_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_c_1011_, v___x_1017_, v___y_1013_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue___boxed(lean_object* v_e_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_){
_start:
{
lean_object* v_res_1022_; 
v_res_1022_ = l_Lean_Compiler_LCNF_FixedParams_evalLetValue(v_e_1019_, v___y_1020_, v___y_1021_);
lean_dec_ref(v___y_1020_);
return v_res_1022_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9___boxed(lean_object* v_as_1023_, lean_object* v_i_1024_, lean_object* v_stop_1025_, lean_object* v_b_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
size_t v_i_boxed_1029_; size_t v_stop_boxed_1030_; lean_object* v_res_1031_; 
v_i_boxed_1029_ = lean_unbox_usize(v_i_1024_);
lean_dec(v_i_1024_);
v_stop_boxed_1030_ = lean_unbox_usize(v_stop_1025_);
lean_dec(v_stop_1025_);
v_res_1031_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(v_as_1023_, v_i_boxed_1029_, v_stop_boxed_1030_, v_b_1026_, v___y_1027_, v___y_1028_);
lean_dec_ref(v___y_1027_);
lean_dec_ref(v_as_1023_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp___boxed(lean_object* v_declName_1032_, lean_object* v_args_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_Lean_Compiler_LCNF_FixedParams_evalApp(v_declName_1032_, v_args_1033_, v___y_1034_, v___y_1035_);
lean_dec_ref(v___y_1034_);
lean_dec_ref(v_args_1033_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___boxed(lean_object* v_declName_1037_, lean_object* v_args_1038_, lean_object* v_as_1039_, lean_object* v_sz_1040_, lean_object* v_i_1041_, lean_object* v_b_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
size_t v_sz_boxed_1045_; size_t v_i_boxed_1046_; lean_object* v_res_1047_; 
v_sz_boxed_1045_ = lean_unbox_usize(v_sz_1040_);
lean_dec(v_sz_1040_);
v_i_boxed_1046_ = lean_unbox_usize(v_i_1041_);
lean_dec(v_i_1041_);
v_res_1047_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(v_declName_1037_, v_args_1038_, v_as_1039_, v_sz_boxed_1045_, v_i_boxed_1046_, v_b_1042_, v___y_1043_, v___y_1044_);
lean_dec_ref(v___y_1043_);
lean_dec_ref(v_as_1039_);
lean_dec_ref(v_args_1038_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3(uint8_t v_pu_1048_, lean_object* v_f_1049_, lean_object* v_v_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(v_f_1049_, v_v_1050_, v___y_1051_, v___y_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___boxed(lean_object* v_pu_1054_, lean_object* v_f_1055_, lean_object* v_v_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
uint8_t v_pu_boxed_1059_; lean_object* v_res_1060_; 
v_pu_boxed_1059_ = lean_unbox(v_pu_1054_);
v_res_1060_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3(v_pu_boxed_1059_, v_f_1055_, v_v_1056_, v___y_1057_, v___y_1058_);
lean_dec_ref(v___y_1057_);
return v_res_1060_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1(lean_object* v_00_u03b2_1061_, lean_object* v_m_1062_, lean_object* v_a_1063_){
_start:
{
uint8_t v___x_1064_; 
v___x_1064_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(v_m_1062_, v_a_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___boxed(lean_object* v_00_u03b2_1065_, lean_object* v_m_1066_, lean_object* v_a_1067_){
_start:
{
uint8_t v_res_1068_; lean_object* v_r_1069_; 
v_res_1068_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1(v_00_u03b2_1065_, v_m_1066_, v_a_1067_);
lean_dec_ref(v_a_1067_);
lean_dec_ref(v_m_1066_);
v_r_1069_ = lean_box(v_res_1068_);
return v_r_1069_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2(lean_object* v_00_u03b2_1070_, lean_object* v_m_1071_, lean_object* v_a_1072_, lean_object* v_b_1073_){
_start:
{
lean_object* v___x_1074_; 
v___x_1074_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(v_m_1071_, v_a_1072_, v_b_1073_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4(lean_object* v_upperBound_1075_, lean_object* v_args_1076_, lean_object* v_inst_1077_, lean_object* v_R_1078_, lean_object* v_a_1079_, lean_object* v_b_1080_, lean_object* v_c_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_){
_start:
{
lean_object* v___x_1084_; 
v___x_1084_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(v_upperBound_1075_, v_args_1076_, v_a_1079_, v_b_1080_, v___y_1082_, v___y_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___boxed(lean_object* v_upperBound_1085_, lean_object* v_args_1086_, lean_object* v_inst_1087_, lean_object* v_R_1088_, lean_object* v_a_1089_, lean_object* v_b_1090_, lean_object* v_c_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4(v_upperBound_1085_, v_args_1086_, v_inst_1087_, v_R_1088_, v_a_1089_, v_b_1090_, v_c_1091_, v___y_1092_, v___y_1093_);
lean_dec_ref(v___y_1092_);
lean_dec_ref(v_args_1086_);
lean_dec(v_upperBound_1085_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7(lean_object* v_upperBound_1095_, lean_object* v_args_1096_, lean_object* v_inst_1097_, lean_object* v_R_1098_, lean_object* v_a_1099_, lean_object* v_b_1100_, lean_object* v_c_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
lean_object* v___x_1104_; 
v___x_1104_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(v_upperBound_1095_, v_args_1096_, v_a_1099_, v_b_1100_, v___y_1102_, v___y_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___boxed(lean_object* v_upperBound_1105_, lean_object* v_args_1106_, lean_object* v_inst_1107_, lean_object* v_R_1108_, lean_object* v_a_1109_, lean_object* v_b_1110_, lean_object* v_c_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_){
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7(v_upperBound_1105_, v_args_1106_, v_inst_1107_, v_R_1108_, v_a_1109_, v_b_1110_, v_c_1111_, v___y_1112_, v___y_1113_);
lean_dec_ref(v___y_1112_);
lean_dec_ref(v_args_1106_);
lean_dec(v_upperBound_1105_);
return v_res_1114_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1(lean_object* v_00_u03b2_1115_, lean_object* v_a_1116_, lean_object* v_x_1117_){
_start:
{
uint8_t v___x_1118_; 
v___x_1118_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_1116_, v_x_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___boxed(lean_object* v_00_u03b2_1119_, lean_object* v_a_1120_, lean_object* v_x_1121_){
_start:
{
uint8_t v_res_1122_; lean_object* v_r_1123_; 
v_res_1122_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1(v_00_u03b2_1119_, v_a_1120_, v_x_1121_);
lean_dec(v_x_1121_);
lean_dec_ref(v_a_1120_);
v_r_1123_ = lean_box(v_res_1122_);
return v_r_1123_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4(lean_object* v_00_u03b2_1124_, lean_object* v_data_1125_){
_start:
{
lean_object* v___x_1126_; 
v___x_1126_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(v_data_1125_);
return v___x_1126_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4(lean_object* v_xs_1127_, lean_object* v_ys_1128_, lean_object* v_hsz_1129_, lean_object* v_x_1130_, lean_object* v_x_1131_){
_start:
{
uint8_t v___x_1132_; 
v___x_1132_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(v_xs_1127_, v_ys_1128_, v_x_1130_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___boxed(lean_object* v_xs_1133_, lean_object* v_ys_1134_, lean_object* v_hsz_1135_, lean_object* v_x_1136_, lean_object* v_x_1137_){
_start:
{
uint8_t v_res_1138_; lean_object* v_r_1139_; 
v_res_1138_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4(v_xs_1133_, v_ys_1134_, v_hsz_1135_, v_x_1136_, v_x_1137_);
lean_dec_ref(v_ys_1134_);
lean_dec_ref(v_xs_1133_);
v_r_1139_ = lean_box(v_res_1138_);
return v_r_1139_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_1140_, lean_object* v_i_1141_, lean_object* v_source_1142_, lean_object* v_target_1143_){
_start:
{
lean_object* v___x_1144_; 
v___x_1144_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(v_i_1141_, v_source_1142_, v_target_1143_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14(lean_object* v_00_u03b2_1145_, lean_object* v_x_1146_, lean_object* v_x_1147_){
_start:
{
lean_object* v___x_1148_; 
v___x_1148_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(v_x_1146_, v_x_1147_);
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(lean_object* v_upperBound_1149_, lean_object* v_a_1150_, lean_object* v_b_1151_){
_start:
{
uint8_t v___x_1152_; 
v___x_1152_ = lean_nat_dec_lt(v_a_1150_, v_upperBound_1149_);
if (v___x_1152_ == 0)
{
lean_dec(v_a_1150_);
return v_b_1151_;
}
else
{
lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
lean_inc(v_a_1150_);
v___x_1153_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1153_, 0, v_a_1150_);
v___x_1154_ = lean_array_push(v_b_1151_, v___x_1153_);
v___x_1155_ = lean_unsigned_to_nat(1u);
v___x_1156_ = lean_nat_add(v_a_1150_, v___x_1155_);
lean_dec(v_a_1150_);
v_a_1150_ = v___x_1156_;
v_b_1151_ = v___x_1154_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg___boxed(lean_object* v_upperBound_1158_, lean_object* v_a_1159_, lean_object* v_b_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(v_upperBound_1158_, v_a_1159_, v_b_1160_);
lean_dec(v_upperBound_1158_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(lean_object* v_numParams_1162_){
_start:
{
lean_object* v___x_1163_; lean_object* v_values_1164_; lean_object* v___x_1165_; 
v___x_1163_ = lean_unsigned_to_nat(0u);
v_values_1164_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0));
v___x_1165_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(v_numParams_1162_, v___x_1163_, v_values_1164_);
return v___x_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues___boxed(lean_object* v_numParams_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(v_numParams_1166_);
lean_dec(v_numParams_1166_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0(lean_object* v_upperBound_1168_, lean_object* v_inst_1169_, lean_object* v_R_1170_, lean_object* v_a_1171_, lean_object* v_b_1172_, lean_object* v_c_1173_){
_start:
{
lean_object* v___x_1174_; 
v___x_1174_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(v_upperBound_1168_, v_a_1171_, v_b_1172_);
return v___x_1174_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___boxed(lean_object* v_upperBound_1175_, lean_object* v_inst_1176_, lean_object* v_R_1177_, lean_object* v_a_1178_, lean_object* v_b_1179_, lean_object* v_c_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0(v_upperBound_1175_, v_inst_1176_, v_R_1177_, v_a_1178_, v_b_1179_, v_c_1180_);
lean_dec(v_upperBound_1175_);
return v_res_1181_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1182_ = lean_box(0);
v___x_1183_ = lean_unsigned_to_nat(16u);
v___x_1184_ = lean_mk_array(v___x_1183_, v___x_1182_);
return v___x_1184_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1185_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0);
v___x_1186_ = lean_unsigned_to_nat(0u);
v___x_1187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1186_);
lean_ctor_set(v___x_1187_, 1, v___x_1185_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(lean_object* v_decls_1188_, lean_object* v_as_1189_, size_t v_sz_1190_, size_t v_i_1191_, lean_object* v_b_1192_){
_start:
{
lean_object* v_a_1194_; uint8_t v___x_1198_; 
v___x_1198_ = lean_usize_dec_lt(v_i_1191_, v_sz_1190_);
if (v___x_1198_ == 0)
{
lean_dec_ref(v_decls_1188_);
return v_b_1192_;
}
else
{
lean_object* v_a_1199_; lean_object* v_toSignature_1200_; lean_object* v_value_1201_; lean_object* v_name_1202_; lean_object* v_params_1203_; lean_object* v_s_1205_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v_a_1199_ = lean_array_uget_borrowed(v_as_1189_, v_i_1191_);
v_toSignature_1200_ = lean_ctor_get(v_a_1199_, 0);
v_value_1201_ = lean_ctor_get(v_a_1199_, 1);
v_name_1202_ = lean_ctor_get(v_toSignature_1200_, 0);
v_params_1203_ = lean_ctor_get(v_toSignature_1200_, 3);
v___x_1208_ = lean_array_get_size(v_params_1203_);
v___x_1209_ = l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(v___x_1208_);
v___x_1210_ = lean_box(v___x_1198_);
v___x_1211_ = lean_mk_array(v___x_1208_, v___x_1210_);
if (lean_obj_tag(v_value_1201_) == 0)
{
lean_object* v_code_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v_a_1218_; 
v_code_1212_ = lean_ctor_get(v_value_1201_, 0);
v___x_1213_ = l_Lean_Compiler_LCNF_FixedParams_mkAssignment(v_a_1199_, v___x_1209_);
lean_inc(v_a_1199_);
lean_inc_ref(v_decls_1188_);
v___x_1214_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1214_, 0, v_decls_1188_);
lean_ctor_set(v___x_1214_, 1, v_a_1199_);
lean_ctor_set(v___x_1214_, 2, v___x_1213_);
v___x_1215_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1);
v___x_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1215_);
lean_ctor_set(v___x_1216_, 1, v___x_1211_);
lean_inc_ref(v_code_1212_);
v___x_1217_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_code_1212_, v___x_1214_, v___x_1216_);
v_a_1218_ = lean_ctor_get(v___x_1217_, 1);
lean_inc(v_a_1218_);
lean_dec_ref(v___x_1217_);
v_s_1205_ = v_a_1218_;
goto v___jp_1204_;
}
else
{
lean_object* v___x_1219_; 
lean_dec_ref(v___x_1209_);
lean_inc(v_name_1202_);
v___x_1219_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1202_, v___x_1211_, v_b_1192_);
v_a_1194_ = v___x_1219_;
goto v___jp_1193_;
}
v___jp_1204_:
{
lean_object* v_fixed_1206_; lean_object* v___x_1207_; 
v_fixed_1206_ = lean_ctor_get(v_s_1205_, 1);
lean_inc_ref(v_fixed_1206_);
lean_dec_ref(v_s_1205_);
lean_inc(v_name_1202_);
v___x_1207_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1202_, v_fixed_1206_, v_b_1192_);
v_a_1194_ = v___x_1207_;
goto v___jp_1193_;
}
}
v___jp_1193_:
{
size_t v___x_1195_; size_t v___x_1196_; 
v___x_1195_ = ((size_t)1ULL);
v___x_1196_ = lean_usize_add(v_i_1191_, v___x_1195_);
v_i_1191_ = v___x_1196_;
v_b_1192_ = v_a_1194_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___boxed(lean_object* v_decls_1220_, lean_object* v_as_1221_, lean_object* v_sz_1222_, lean_object* v_i_1223_, lean_object* v_b_1224_){
_start:
{
size_t v_sz_boxed_1225_; size_t v_i_boxed_1226_; lean_object* v_res_1227_; 
v_sz_boxed_1225_ = lean_unbox_usize(v_sz_1222_);
lean_dec(v_sz_1222_);
v_i_boxed_1226_ = lean_unbox_usize(v_i_1223_);
lean_dec(v_i_1223_);
v_res_1227_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(v_decls_1220_, v_as_1221_, v_sz_boxed_1225_, v_i_boxed_1226_, v_b_1224_);
lean_dec_ref(v_as_1221_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFixedParamsMap(lean_object* v_decls_1228_){
_start:
{
lean_object* v_result_1229_; size_t v_sz_1230_; size_t v___x_1231_; lean_object* v___x_1232_; 
v_result_1229_ = lean_box(1);
v_sz_1230_ = lean_array_size(v_decls_1228_);
v___x_1231_ = ((size_t)0ULL);
lean_inc_ref(v_decls_1228_);
v___x_1232_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(v_decls_1228_, v_decls_1228_, v_sz_1230_, v___x_1231_, v_result_1229_);
lean_dec_ref(v_decls_1228_);
return v___x_1232_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default = _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default);
l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue = _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue();
lean_mark_persistent(l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_FixedParams(builtin);
}
#ifdef __cplusplus
}
#endif
