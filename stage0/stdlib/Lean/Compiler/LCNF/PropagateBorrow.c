// Lean compiler output
// Module: Lean.Compiler.LCNF.PropagateBorrow
// Imports: public import Lean.Compiler.LCNF.CompilerM public import Lean.Compiler.LCNF.PassManager import Lean.Compiler.LCNF.PhaseExt
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
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_CtorInfo_isScalar(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg(uint8_t, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_ptr_addr(lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* l_instInhabitedReaderT___redArg(lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_bot_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_bot_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_bot_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_bot_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_borrow_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_borrow_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_borrow_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_borrow_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_own_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_own_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_own_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_own_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_top_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_top_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_top_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_top_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_instInhabitedOwnedness_default;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_instInhabitedOwnedness;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_instBEqOwnedness_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instBEqOwnedness_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instBEqOwnedness___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instBEqOwnedness_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instBEqOwnedness___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instBEqOwnedness___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_instBEqOwnedness = (const lean_object*)&l_Lean_Compiler_LCNF_instBEqOwnedness___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedState_default___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedState_default___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedState_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedState_default;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_instInhabitedState;
static const lean_closure_object l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqFVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableFVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_join___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_join___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_join(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_join___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__6_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__7 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__7_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__8 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__8_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__9 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__9_value;
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__10;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Compiler.LCNF.PropagateBorrow"};
static const lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 105, .m_capacity = 105, .m_length = 104, .m_data = "_private.Lean.Compiler.LCNF.PropagateBorrow.0.Lean.Compiler.LCNF.Decl.analyzePropagatedBorrows.getParams"};
static const lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "getInternal"};
static const lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "get!Internal"};
static const lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "uget"};
static const lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 111, .m_capacity = 111, .m_length = 110, .m_data = "_private.Lean.Compiler.LCNF.PropagateBorrow.0.Lean.Compiler.LCNF.Decl.analyzePropagatedBorrows.collectLetValue"};
static const lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__4_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 107, .m_capacity = 107, .m_length = 106, .m_data = "_private.Lean.Compiler.LCNF.PropagateBorrow.0.Lean.Compiler.LCNF.Decl.analyzePropagatedBorrows.collectCode"};
static const lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__1;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_toBorrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_toBorrow___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_toBorrow___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_toBorrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_toBorrow___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_toBorrow___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_toBorrow(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_toBorrow___boxed(lean_object*);
LEAN_EXPORT uint8_t l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0_spec__1___boxed(lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Data.DHashMap.Internal.AssocList.Basic"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DHashMap.Internal.AssocList.get!"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "key is not present in hash table"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__3;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "_private.Lean.Compiler.LCNF.PropagateBorrow.0.Lean.Compiler.LCNF.Decl.applyOwnedness.goCode"};
static const lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyOwnedness(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyOwnedness___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
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
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
default: 
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_ctorIdx___boxed(lean_object* v_x_6_){
_start:
{
uint8_t v_x_boxed_7_; lean_object* v_res_8_; 
v_x_boxed_7_ = lean_unbox(v_x_6_);
v_res_8_ = l_Lean_Compiler_LCNF_Ownedness_ctorIdx(v_x_boxed_7_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_ctorElim___redArg(lean_object* v_k_9_){
_start:
{
lean_inc(v_k_9_);
return v_k_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_ctorElim___redArg___boxed(lean_object* v_k_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_Compiler_LCNF_Ownedness_ctorElim___redArg(v_k_10_);
lean_dec(v_k_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_ctorElim(lean_object* v_motive_12_, lean_object* v_ctorIdx_13_, uint8_t v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_inc(v_k_16_);
return v_k_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
uint8_t v_t_boxed_22_; lean_object* v_res_23_; 
v_t_boxed_22_ = lean_unbox(v_t_19_);
v_res_23_ = l_Lean_Compiler_LCNF_Ownedness_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_boxed_22_, v_h_20_, v_k_21_);
lean_dec(v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_bot_elim___redArg(lean_object* v_bot_24_){
_start:
{
lean_inc(v_bot_24_);
return v_bot_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_bot_elim___redArg___boxed(lean_object* v_bot_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lean_Compiler_LCNF_Ownedness_bot_elim___redArg(v_bot_25_);
lean_dec(v_bot_25_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_bot_elim(lean_object* v_motive_27_, uint8_t v_t_28_, lean_object* v_h_29_, lean_object* v_bot_30_){
_start:
{
lean_inc(v_bot_30_);
return v_bot_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_bot_elim___boxed(lean_object* v_motive_31_, lean_object* v_t_32_, lean_object* v_h_33_, lean_object* v_bot_34_){
_start:
{
uint8_t v_t_boxed_35_; lean_object* v_res_36_; 
v_t_boxed_35_ = lean_unbox(v_t_32_);
v_res_36_ = l_Lean_Compiler_LCNF_Ownedness_bot_elim(v_motive_31_, v_t_boxed_35_, v_h_33_, v_bot_34_);
lean_dec(v_bot_34_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_borrow_elim___redArg(lean_object* v_borrow_37_){
_start:
{
lean_inc(v_borrow_37_);
return v_borrow_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_borrow_elim___redArg___boxed(lean_object* v_borrow_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_Lean_Compiler_LCNF_Ownedness_borrow_elim___redArg(v_borrow_38_);
lean_dec(v_borrow_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_borrow_elim(lean_object* v_motive_40_, uint8_t v_t_41_, lean_object* v_h_42_, lean_object* v_borrow_43_){
_start:
{
lean_inc(v_borrow_43_);
return v_borrow_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_borrow_elim___boxed(lean_object* v_motive_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_borrow_47_){
_start:
{
uint8_t v_t_boxed_48_; lean_object* v_res_49_; 
v_t_boxed_48_ = lean_unbox(v_t_45_);
v_res_49_ = l_Lean_Compiler_LCNF_Ownedness_borrow_elim(v_motive_44_, v_t_boxed_48_, v_h_46_, v_borrow_47_);
lean_dec(v_borrow_47_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_own_elim___redArg(lean_object* v_own_50_){
_start:
{
lean_inc(v_own_50_);
return v_own_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_own_elim___redArg___boxed(lean_object* v_own_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Lean_Compiler_LCNF_Ownedness_own_elim___redArg(v_own_51_);
lean_dec(v_own_51_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_own_elim(lean_object* v_motive_53_, uint8_t v_t_54_, lean_object* v_h_55_, lean_object* v_own_56_){
_start:
{
lean_inc(v_own_56_);
return v_own_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_own_elim___boxed(lean_object* v_motive_57_, lean_object* v_t_58_, lean_object* v_h_59_, lean_object* v_own_60_){
_start:
{
uint8_t v_t_boxed_61_; lean_object* v_res_62_; 
v_t_boxed_61_ = lean_unbox(v_t_58_);
v_res_62_ = l_Lean_Compiler_LCNF_Ownedness_own_elim(v_motive_57_, v_t_boxed_61_, v_h_59_, v_own_60_);
lean_dec(v_own_60_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_top_elim___redArg(lean_object* v_top_63_){
_start:
{
lean_inc(v_top_63_);
return v_top_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_top_elim___redArg___boxed(lean_object* v_top_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lean_Compiler_LCNF_Ownedness_top_elim___redArg(v_top_64_);
lean_dec(v_top_64_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_top_elim(lean_object* v_motive_66_, uint8_t v_t_67_, lean_object* v_h_68_, lean_object* v_top_69_){
_start:
{
lean_inc(v_top_69_);
return v_top_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Ownedness_top_elim___boxed(lean_object* v_motive_70_, lean_object* v_t_71_, lean_object* v_h_72_, lean_object* v_top_73_){
_start:
{
uint8_t v_t_boxed_74_; lean_object* v_res_75_; 
v_t_boxed_74_ = lean_unbox(v_t_71_);
v_res_75_ = l_Lean_Compiler_LCNF_Ownedness_top_elim(v_motive_70_, v_t_boxed_74_, v_h_72_, v_top_73_);
lean_dec(v_top_73_);
return v_res_75_;
}
}
static uint8_t _init_l_Lean_Compiler_LCNF_instInhabitedOwnedness_default(void){
_start:
{
uint8_t v___x_76_; 
v___x_76_ = 0;
return v___x_76_;
}
}
static uint8_t _init_l_Lean_Compiler_LCNF_instInhabitedOwnedness(void){
_start:
{
uint8_t v___x_77_; 
v___x_77_ = 0;
return v___x_77_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_instBEqOwnedness_beq(uint8_t v_x_78_, uint8_t v_y_79_){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_80_ = l_Lean_Compiler_LCNF_Ownedness_ctorIdx(v_x_78_);
v___x_81_ = l_Lean_Compiler_LCNF_Ownedness_ctorIdx(v_y_79_);
v___x_82_ = lean_nat_dec_eq(v___x_80_, v___x_81_);
lean_dec(v___x_81_);
lean_dec(v___x_80_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instBEqOwnedness_beq___boxed(lean_object* v_x_83_, lean_object* v_y_84_){
_start:
{
uint8_t v_x_21__boxed_85_; uint8_t v_y_22__boxed_86_; uint8_t v_res_87_; lean_object* v_r_88_; 
v_x_21__boxed_85_ = lean_unbox(v_x_83_);
v_y_22__boxed_86_ = lean_unbox(v_y_84_);
v_res_87_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v_x_21__boxed_85_, v_y_22__boxed_86_);
v_r_88_ = lean_box(v_res_87_);
return v_r_88_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(uint8_t v_x_91_, uint8_t v_x_92_){
_start:
{
switch(v_x_91_)
{
case 0:
{
return v_x_92_;
}
case 1:
{
if (v_x_92_ == 1)
{
return v_x_92_;
}
else
{
uint8_t v___x_93_; 
v___x_93_ = 3;
return v___x_93_;
}
}
case 2:
{
if (v_x_92_ == 2)
{
return v_x_92_;
}
else
{
uint8_t v___x_94_; 
v___x_94_ = 3;
return v___x_94_;
}
}
default: 
{
uint8_t v___x_95_; 
v___x_95_ = 3;
return v___x_95_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join___boxed(lean_object* v_x_96_, lean_object* v_x_97_){
_start:
{
uint8_t v_x_37__boxed_98_; uint8_t v_x_38__boxed_99_; uint8_t v_res_100_; lean_object* v_r_101_; 
v_x_37__boxed_98_ = lean_unbox(v_x_96_);
v_x_38__boxed_99_ = lean_unbox(v_x_97_);
v_res_100_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v_x_37__boxed_98_, v_x_38__boxed_99_);
v_r_101_ = lean_box(v_res_100_);
return v_r_101_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedState_default___closed__0(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_102_ = lean_box(0);
v___x_103_ = lean_unsigned_to_nat(16u);
v___x_104_ = lean_mk_array(v___x_103_, v___x_102_);
return v___x_104_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedState_default___closed__1(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_105_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedState_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedState_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedState_default___closed__0);
v___x_106_ = lean_unsigned_to_nat(0u);
v___x_107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
lean_ctor_set(v___x_107_, 1, v___x_105_);
return v___x_107_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedState_default___closed__2(void){
_start:
{
uint8_t v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = 0;
v___x_109_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedState_default___closed__1, &l_Lean_Compiler_LCNF_instInhabitedState_default___closed__1_once, _init_l_Lean_Compiler_LCNF_instInhabitedState_default___closed__1);
v___x_110_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set_uint8(v___x_110_, sizeof(void*)*1, v___x_108_);
return v___x_110_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedState_default(void){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedState_default___closed__2, &l_Lean_Compiler_LCNF_instInhabitedState_default___closed__2_once, _init_l_Lean_Compiler_LCNF_instInhabitedState_default___closed__2);
return v___x_111_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_instInhabitedState(void){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = l_Lean_Compiler_LCNF_instInhabitedState_default;
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg(lean_object* v_fvarId_115_, lean_object* v___y_116_){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v_values_121_; uint8_t v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_118_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___closed__0));
v___x_119_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___closed__1));
v___x_120_ = lean_st_ref_get(v___y_116_);
v_values_121_ = lean_ctor_get(v___x_120_, 0);
lean_inc_ref(v_values_121_);
lean_dec(v___x_120_);
v___x_122_ = 0;
v___x_123_ = lean_box(v___x_122_);
v___x_124_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(v___x_118_, v___x_119_, v_values_121_, v_fvarId_115_, v___x_123_);
lean_dec(v___x_123_);
lean_dec_ref(v_values_121_);
v___x_125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___boxed(lean_object* v_fvarId_126_, lean_object* v___y_127_, lean_object* v___y_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg(v_fvarId_126_, v___y_127_);
lean_dec(v___y_127_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness(lean_object* v_fvarId_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v_values_140_; uint8_t v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_137_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___closed__0));
v___x_138_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___closed__1));
v___x_139_ = lean_st_ref_get(v___y_131_);
v_values_140_ = lean_ctor_get(v___x_139_, 0);
lean_inc_ref(v_values_140_);
lean_dec(v___x_139_);
v___x_141_ = 0;
v___x_142_ = lean_box(v___x_141_);
v___x_143_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(v___x_137_, v___x_138_, v_values_140_, v_fvarId_130_, v___x_142_);
lean_dec(v___x_142_);
lean_dec_ref(v_values_140_);
v___x_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___boxed(lean_object* v_fvarId_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness(v_fvarId_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_);
lean_dec(v___y_150_);
lean_dec_ref(v___y_149_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
lean_dec(v___y_146_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_join___redArg(lean_object* v_fvarId_153_, uint8_t v_v_154_, lean_object* v___y_155_){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v_fst_161_; lean_object* v_snd_162_; lean_object* v_values_165_; lean_object* v___x_166_; uint8_t v___x_167_; lean_object* v___x_168_; lean_object* v_old_169_; uint8_t v___x_170_; uint8_t v_new_171_; uint8_t v___x_172_; uint8_t v___x_173_; 
v___x_157_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___closed__0));
v___x_158_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___closed__1));
v___x_159_ = lean_st_ref_take(v___y_155_);
v_values_165_ = lean_ctor_get(v___x_159_, 0);
lean_inc_ref(v_values_165_);
v___x_166_ = lean_box(0);
v___x_167_ = 0;
v___x_168_ = lean_box(v___x_167_);
lean_inc(v_fvarId_153_);
v_old_169_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(v___x_157_, v___x_158_, v_values_165_, v_fvarId_153_, v___x_168_);
lean_dec(v___x_168_);
v___x_170_ = lean_unbox(v_old_169_);
v_new_171_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v___x_170_, v_v_154_);
v___x_172_ = lean_unbox(v_old_169_);
lean_dec(v_old_169_);
v___x_173_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_172_, v_new_171_);
if (v___x_173_ == 0)
{
lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_183_; 
v_isSharedCheck_183_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_183_ == 0)
{
lean_object* v_unused_184_; 
v_unused_184_ = lean_ctor_get(v___x_159_, 0);
lean_dec(v_unused_184_);
v___x_175_ = v___x_159_;
v_isShared_176_ = v_isSharedCheck_183_;
goto v_resetjp_174_;
}
else
{
lean_dec(v___x_159_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_183_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
uint8_t v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_181_; 
v___x_177_ = 1;
v___x_178_ = lean_box(v_new_171_);
v___x_179_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_157_, v___x_158_, v_values_165_, v_fvarId_153_, v___x_178_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 0, v___x_179_);
v___x_181_ = v___x_175_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v___x_179_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
lean_ctor_set_uint8(v___x_181_, sizeof(void*)*1, v___x_177_);
v_fst_161_ = v___x_166_;
v_snd_162_ = v___x_181_;
goto v___jp_160_;
}
}
}
else
{
lean_dec_ref(v_values_165_);
lean_dec(v_fvarId_153_);
v_fst_161_ = v___x_166_;
v_snd_162_ = v___x_159_;
goto v___jp_160_;
}
v___jp_160_:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = lean_st_ref_put(v___y_155_, v_snd_162_);
v___x_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_164_, 0, v_fst_161_);
return v___x_164_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_join___redArg___boxed(lean_object* v_fvarId_185_, lean_object* v_v_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
uint8_t v_v_boxed_189_; lean_object* v_res_190_; 
v_v_boxed_189_ = lean_unbox(v_v_186_);
v_res_190_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_join___redArg(v_fvarId_185_, v_v_boxed_189_, v___y_187_);
lean_dec(v___y_187_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_join(lean_object* v_fvarId_191_, uint8_t v_v_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v_fst_203_; lean_object* v_snd_204_; lean_object* v_values_207_; lean_object* v___x_208_; uint8_t v___x_209_; lean_object* v___x_210_; lean_object* v_old_211_; uint8_t v___x_212_; uint8_t v_new_213_; uint8_t v___x_214_; uint8_t v___x_215_; 
v___x_199_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___closed__0));
v___x_200_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getOwnedness___redArg___closed__1));
v___x_201_ = lean_st_ref_take(v___y_193_);
v_values_207_ = lean_ctor_get(v___x_201_, 0);
lean_inc_ref(v_values_207_);
v___x_208_ = lean_box(0);
v___x_209_ = 0;
v___x_210_ = lean_box(v___x_209_);
lean_inc(v_fvarId_191_);
v_old_211_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(v___x_199_, v___x_200_, v_values_207_, v_fvarId_191_, v___x_210_);
lean_dec(v___x_210_);
v___x_212_ = lean_unbox(v_old_211_);
v_new_213_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v___x_212_, v_v_192_);
v___x_214_ = lean_unbox(v_old_211_);
lean_dec(v_old_211_);
v___x_215_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_214_, v_new_213_);
if (v___x_215_ == 0)
{
lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_225_; 
v_isSharedCheck_225_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_225_ == 0)
{
lean_object* v_unused_226_; 
v_unused_226_ = lean_ctor_get(v___x_201_, 0);
lean_dec(v_unused_226_);
v___x_217_ = v___x_201_;
v_isShared_218_ = v_isSharedCheck_225_;
goto v_resetjp_216_;
}
else
{
lean_dec(v___x_201_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_225_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
uint8_t v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_223_; 
v___x_219_ = 1;
v___x_220_ = lean_box(v_new_213_);
v___x_221_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_199_, v___x_200_, v_values_207_, v_fvarId_191_, v___x_220_);
if (v_isShared_218_ == 0)
{
lean_ctor_set(v___x_217_, 0, v___x_221_);
v___x_223_ = v___x_217_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v___x_221_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
lean_ctor_set_uint8(v___x_223_, sizeof(void*)*1, v___x_219_);
v_fst_203_ = v___x_208_;
v_snd_204_ = v___x_223_;
goto v___jp_202_;
}
}
}
else
{
lean_dec_ref(v_values_207_);
lean_dec(v_fvarId_191_);
v_fst_203_ = v___x_208_;
v_snd_204_ = v___x_201_;
goto v___jp_202_;
}
v___jp_202_:
{
lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_205_ = lean_st_ref_put(v___y_193_, v_snd_204_);
v___x_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_206_, 0, v_fst_203_);
return v___x_206_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_join___boxed(lean_object* v_fvarId_227_, lean_object* v_v_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
uint8_t v_v_boxed_235_; lean_object* v_res_236_; 
v_v_boxed_235_ = lean_unbox(v_v_228_);
v_res_236_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_join(v_fvarId_227_, v_v_boxed_235_, v___y_229_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
lean_dec(v___y_233_);
lean_dec_ref(v___y_232_);
lean_dec(v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec(v___y_229_);
return v_res_236_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__10(void){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = l_Array_instInhabited___redArg();
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0(lean_object* v_msg_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_){
_start:
{
lean_object* v___f_255_; lean_object* v___f_256_; lean_object* v___f_257_; lean_object* v___f_258_; lean_object* v___f_259_; lean_object* v___f_260_; lean_object* v___f_261_; lean_object* v___f_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v_toApplicative_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_329_; 
v___f_255_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__0));
v___f_256_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__1));
v___f_257_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__2));
v___f_258_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__3));
v___f_259_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__4));
v___f_260_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_260_, 0, v___f_259_);
lean_closure_set(v___f_260_, 1, v___f_258_);
v___f_261_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_261_, 0, v___f_258_);
v___f_262_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__5));
v___x_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_263_, 0, v___f_255_);
lean_ctor_set(v___x_263_, 1, v___f_256_);
v___x_264_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
lean_ctor_set(v___x_264_, 1, v___f_257_);
lean_ctor_set(v___x_264_, 2, v___f_260_);
lean_ctor_set(v___x_264_, 3, v___f_261_);
lean_ctor_set(v___x_264_, 4, v___f_262_);
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
lean_ctor_set(v___x_265_, 1, v___f_258_);
v___x_266_ = l_StateRefT_x27_instMonad___redArg(v___x_265_);
v_toApplicative_267_ = lean_ctor_get(v___x_266_, 0);
v_isSharedCheck_329_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_329_ == 0)
{
lean_object* v_unused_330_; 
v_unused_330_ = lean_ctor_get(v___x_266_, 1);
lean_dec(v_unused_330_);
v___x_269_ = v___x_266_;
v_isShared_270_ = v_isSharedCheck_329_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_toApplicative_267_);
lean_dec(v___x_266_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_329_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v_toFunctor_271_; lean_object* v_toSeq_272_; lean_object* v_toSeqLeft_273_; lean_object* v_toSeqRight_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_327_; 
v_toFunctor_271_ = lean_ctor_get(v_toApplicative_267_, 0);
v_toSeq_272_ = lean_ctor_get(v_toApplicative_267_, 2);
v_toSeqLeft_273_ = lean_ctor_get(v_toApplicative_267_, 3);
v_toSeqRight_274_ = lean_ctor_get(v_toApplicative_267_, 4);
v_isSharedCheck_327_ = !lean_is_exclusive(v_toApplicative_267_);
if (v_isSharedCheck_327_ == 0)
{
lean_object* v_unused_328_; 
v_unused_328_ = lean_ctor_get(v_toApplicative_267_, 1);
lean_dec(v_unused_328_);
v___x_276_ = v_toApplicative_267_;
v_isShared_277_ = v_isSharedCheck_327_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_toSeqRight_274_);
lean_inc(v_toSeqLeft_273_);
lean_inc(v_toSeq_272_);
lean_inc(v_toFunctor_271_);
lean_dec(v_toApplicative_267_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_327_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___f_278_; lean_object* v___f_279_; lean_object* v___f_280_; lean_object* v___f_281_; lean_object* v___x_282_; lean_object* v___f_283_; lean_object* v___f_284_; lean_object* v___f_285_; lean_object* v___x_287_; 
v___f_278_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__6));
v___f_279_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__7));
lean_inc_ref(v_toFunctor_271_);
v___f_280_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_280_, 0, v_toFunctor_271_);
v___f_281_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_281_, 0, v_toFunctor_271_);
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v___f_280_);
lean_ctor_set(v___x_282_, 1, v___f_281_);
v___f_283_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_283_, 0, v_toSeqRight_274_);
v___f_284_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_284_, 0, v_toSeqLeft_273_);
v___f_285_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_285_, 0, v_toSeq_272_);
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 4, v___f_283_);
lean_ctor_set(v___x_276_, 3, v___f_284_);
lean_ctor_set(v___x_276_, 2, v___f_285_);
lean_ctor_set(v___x_276_, 1, v___f_278_);
lean_ctor_set(v___x_276_, 0, v___x_282_);
v___x_287_ = v___x_276_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v___x_282_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v___f_278_);
lean_ctor_set(v_reuseFailAlloc_326_, 2, v___f_285_);
lean_ctor_set(v_reuseFailAlloc_326_, 3, v___f_284_);
lean_ctor_set(v_reuseFailAlloc_326_, 4, v___f_283_);
v___x_287_ = v_reuseFailAlloc_326_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
lean_object* v___x_289_; 
if (v_isShared_270_ == 0)
{
lean_ctor_set(v___x_269_, 1, v___f_279_);
lean_ctor_set(v___x_269_, 0, v___x_287_);
v___x_289_ = v___x_269_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_287_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v___f_279_);
v___x_289_ = v_reuseFailAlloc_325_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
lean_object* v___x_290_; lean_object* v_toApplicative_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_323_; 
v___x_290_ = l_StateRefT_x27_instMonad___redArg(v___x_289_);
v_toApplicative_291_ = lean_ctor_get(v___x_290_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_290_);
if (v_isSharedCheck_323_ == 0)
{
lean_object* v_unused_324_; 
v_unused_324_ = lean_ctor_get(v___x_290_, 1);
lean_dec(v_unused_324_);
v___x_293_ = v___x_290_;
v_isShared_294_ = v_isSharedCheck_323_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_toApplicative_291_);
lean_dec(v___x_290_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_323_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v_toFunctor_295_; lean_object* v_toSeq_296_; lean_object* v_toSeqLeft_297_; lean_object* v_toSeqRight_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_321_; 
v_toFunctor_295_ = lean_ctor_get(v_toApplicative_291_, 0);
v_toSeq_296_ = lean_ctor_get(v_toApplicative_291_, 2);
v_toSeqLeft_297_ = lean_ctor_get(v_toApplicative_291_, 3);
v_toSeqRight_298_ = lean_ctor_get(v_toApplicative_291_, 4);
v_isSharedCheck_321_ = !lean_is_exclusive(v_toApplicative_291_);
if (v_isSharedCheck_321_ == 0)
{
lean_object* v_unused_322_; 
v_unused_322_ = lean_ctor_get(v_toApplicative_291_, 1);
lean_dec(v_unused_322_);
v___x_300_ = v_toApplicative_291_;
v_isShared_301_ = v_isSharedCheck_321_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_toSeqRight_298_);
lean_inc(v_toSeqLeft_297_);
lean_inc(v_toSeq_296_);
lean_inc(v_toFunctor_295_);
lean_dec(v_toApplicative_291_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_321_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___f_302_; lean_object* v___f_303_; lean_object* v___f_304_; lean_object* v___f_305_; lean_object* v___x_306_; lean_object* v___f_307_; lean_object* v___f_308_; lean_object* v___f_309_; lean_object* v___x_311_; 
v___f_302_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__8));
v___f_303_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__9));
lean_inc_ref(v_toFunctor_295_);
v___f_304_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_304_, 0, v_toFunctor_295_);
v___f_305_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_305_, 0, v_toFunctor_295_);
v___x_306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_306_, 0, v___f_304_);
lean_ctor_set(v___x_306_, 1, v___f_305_);
v___f_307_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_307_, 0, v_toSeqRight_298_);
v___f_308_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_308_, 0, v_toSeqLeft_297_);
v___f_309_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_309_, 0, v_toSeq_296_);
if (v_isShared_301_ == 0)
{
lean_ctor_set(v___x_300_, 4, v___f_307_);
lean_ctor_set(v___x_300_, 3, v___f_308_);
lean_ctor_set(v___x_300_, 2, v___f_309_);
lean_ctor_set(v___x_300_, 1, v___f_302_);
lean_ctor_set(v___x_300_, 0, v___x_306_);
v___x_311_ = v___x_300_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_306_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v___f_302_);
lean_ctor_set(v_reuseFailAlloc_320_, 2, v___f_309_);
lean_ctor_set(v_reuseFailAlloc_320_, 3, v___f_308_);
lean_ctor_set(v_reuseFailAlloc_320_, 4, v___f_307_);
v___x_311_ = v_reuseFailAlloc_320_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
lean_object* v___x_313_; 
if (v_isShared_294_ == 0)
{
lean_ctor_set(v___x_293_, 1, v___f_303_);
lean_ctor_set(v___x_293_, 0, v___x_311_);
v___x_313_ = v___x_293_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_311_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v___f_303_);
v___x_313_ = v_reuseFailAlloc_319_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_483__overap_317_; lean_object* v___x_318_; 
v___x_314_ = l_StateRefT_x27_instMonad___redArg(v___x_313_);
v___x_315_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__10, &l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__10_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__10);
v___x_316_ = l_instInhabitedOfMonad___redArg(v___x_314_, v___x_315_);
v___x_483__overap_317_ = lean_panic_fn_borrowed(v___x_316_, v_msg_248_);
lean_dec(v___x_316_);
lean_inc(v___y_253_);
lean_inc_ref(v___y_252_);
lean_inc(v___y_251_);
lean_inc_ref(v___y_250_);
lean_inc(v___y_249_);
v___x_318_ = lean_apply_6(v___x_483__overap_317_, v___y_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, lean_box(0));
return v___x_318_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___boxed(lean_object* v_msg_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0(v_msg_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec(v___y_334_);
lean_dec_ref(v___y_333_);
lean_dec(v___y_332_);
return v_res_338_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__3(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_342_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__2));
v___x_343_ = lean_unsigned_to_nat(43u);
v___x_344_ = lean_unsigned_to_nat(61u);
v___x_345_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__1));
v___x_346_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__0));
v___x_347_ = l_mkPanicMessageWithDecl(v___x_346_, v___x_345_, v___x_344_, v___x_343_, v___x_342_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams(lean_object* v_f_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_){
_start:
{
lean_object* v___x_355_; 
v___x_355_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_f_348_, v___y_353_);
if (lean_obj_tag(v___x_355_) == 0)
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_367_; 
v_a_356_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_367_ == 0)
{
v___x_358_ = v___x_355_;
v_isShared_359_ = v_isSharedCheck_367_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_355_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_367_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
if (lean_obj_tag(v_a_356_) == 1)
{
lean_object* v_val_360_; lean_object* v_params_361_; lean_object* v___x_363_; 
v_val_360_ = lean_ctor_get(v_a_356_, 0);
lean_inc(v_val_360_);
lean_dec_ref_known(v_a_356_, 1);
v_params_361_ = lean_ctor_get(v_val_360_, 3);
lean_inc_ref(v_params_361_);
lean_dec(v_val_360_);
if (v_isShared_359_ == 0)
{
lean_ctor_set(v___x_358_, 0, v_params_361_);
v___x_363_ = v___x_358_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v_params_361_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
else
{
lean_object* v___x_365_; lean_object* v___x_366_; 
lean_del_object(v___x_358_);
lean_dec(v_a_356_);
v___x_365_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__3, &l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__3_once, _init_l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__3);
v___x_366_ = l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0(v___x_365_, v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_);
return v___x_366_;
}
}
}
else
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_375_; 
v_a_368_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_375_ == 0)
{
v___x_370_ = v___x_355_;
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_355_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_a_368_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___boxed(lean_object* v_f_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams(v_f_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__2(lean_object* v_msg_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
lean_object* v___f_391_; lean_object* v___f_392_; lean_object* v___f_393_; lean_object* v___f_394_; lean_object* v___f_395_; lean_object* v___f_396_; lean_object* v___f_397_; lean_object* v___f_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v_toApplicative_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_465_; 
v___f_391_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__0));
v___f_392_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__1));
v___f_393_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__2));
v___f_394_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__3));
v___f_395_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__4));
v___f_396_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_396_, 0, v___f_395_);
lean_closure_set(v___f_396_, 1, v___f_394_);
v___f_397_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_397_, 0, v___f_394_);
v___f_398_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__5));
v___x_399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_399_, 0, v___f_391_);
lean_ctor_set(v___x_399_, 1, v___f_392_);
v___x_400_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
lean_ctor_set(v___x_400_, 1, v___f_393_);
lean_ctor_set(v___x_400_, 2, v___f_396_);
lean_ctor_set(v___x_400_, 3, v___f_397_);
lean_ctor_set(v___x_400_, 4, v___f_398_);
v___x_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
lean_ctor_set(v___x_401_, 1, v___f_394_);
v___x_402_ = l_StateRefT_x27_instMonad___redArg(v___x_401_);
v_toApplicative_403_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_465_ == 0)
{
lean_object* v_unused_466_; 
v_unused_466_ = lean_ctor_get(v___x_402_, 1);
lean_dec(v_unused_466_);
v___x_405_ = v___x_402_;
v_isShared_406_ = v_isSharedCheck_465_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_toApplicative_403_);
lean_dec(v___x_402_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_465_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v_toFunctor_407_; lean_object* v_toSeq_408_; lean_object* v_toSeqLeft_409_; lean_object* v_toSeqRight_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_463_; 
v_toFunctor_407_ = lean_ctor_get(v_toApplicative_403_, 0);
v_toSeq_408_ = lean_ctor_get(v_toApplicative_403_, 2);
v_toSeqLeft_409_ = lean_ctor_get(v_toApplicative_403_, 3);
v_toSeqRight_410_ = lean_ctor_get(v_toApplicative_403_, 4);
v_isSharedCheck_463_ = !lean_is_exclusive(v_toApplicative_403_);
if (v_isSharedCheck_463_ == 0)
{
lean_object* v_unused_464_; 
v_unused_464_ = lean_ctor_get(v_toApplicative_403_, 1);
lean_dec(v_unused_464_);
v___x_412_ = v_toApplicative_403_;
v_isShared_413_ = v_isSharedCheck_463_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_toSeqRight_410_);
lean_inc(v_toSeqLeft_409_);
lean_inc(v_toSeq_408_);
lean_inc(v_toFunctor_407_);
lean_dec(v_toApplicative_403_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_463_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___f_414_; lean_object* v___f_415_; lean_object* v___f_416_; lean_object* v___f_417_; lean_object* v___x_418_; lean_object* v___f_419_; lean_object* v___f_420_; lean_object* v___f_421_; lean_object* v___x_423_; 
v___f_414_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__6));
v___f_415_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__7));
lean_inc_ref(v_toFunctor_407_);
v___f_416_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_416_, 0, v_toFunctor_407_);
v___f_417_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_417_, 0, v_toFunctor_407_);
v___x_418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_418_, 0, v___f_416_);
lean_ctor_set(v___x_418_, 1, v___f_417_);
v___f_419_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_419_, 0, v_toSeqRight_410_);
v___f_420_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_420_, 0, v_toSeqLeft_409_);
v___f_421_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_421_, 0, v_toSeq_408_);
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 4, v___f_419_);
lean_ctor_set(v___x_412_, 3, v___f_420_);
lean_ctor_set(v___x_412_, 2, v___f_421_);
lean_ctor_set(v___x_412_, 1, v___f_414_);
lean_ctor_set(v___x_412_, 0, v___x_418_);
v___x_423_ = v___x_412_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_418_);
lean_ctor_set(v_reuseFailAlloc_462_, 1, v___f_414_);
lean_ctor_set(v_reuseFailAlloc_462_, 2, v___f_421_);
lean_ctor_set(v_reuseFailAlloc_462_, 3, v___f_420_);
lean_ctor_set(v_reuseFailAlloc_462_, 4, v___f_419_);
v___x_423_ = v_reuseFailAlloc_462_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
lean_object* v___x_425_; 
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 1, v___f_415_);
lean_ctor_set(v___x_405_, 0, v___x_423_);
v___x_425_ = v___x_405_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_423_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v___f_415_);
v___x_425_ = v_reuseFailAlloc_461_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
lean_object* v___x_426_; lean_object* v_toApplicative_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_459_; 
v___x_426_ = l_StateRefT_x27_instMonad___redArg(v___x_425_);
v_toApplicative_427_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_459_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_459_ == 0)
{
lean_object* v_unused_460_; 
v_unused_460_ = lean_ctor_get(v___x_426_, 1);
lean_dec(v_unused_460_);
v___x_429_ = v___x_426_;
v_isShared_430_ = v_isSharedCheck_459_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_toApplicative_427_);
lean_dec(v___x_426_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_459_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v_toFunctor_431_; lean_object* v_toSeq_432_; lean_object* v_toSeqLeft_433_; lean_object* v_toSeqRight_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_457_; 
v_toFunctor_431_ = lean_ctor_get(v_toApplicative_427_, 0);
v_toSeq_432_ = lean_ctor_get(v_toApplicative_427_, 2);
v_toSeqLeft_433_ = lean_ctor_get(v_toApplicative_427_, 3);
v_toSeqRight_434_ = lean_ctor_get(v_toApplicative_427_, 4);
v_isSharedCheck_457_ = !lean_is_exclusive(v_toApplicative_427_);
if (v_isSharedCheck_457_ == 0)
{
lean_object* v_unused_458_; 
v_unused_458_ = lean_ctor_get(v_toApplicative_427_, 1);
lean_dec(v_unused_458_);
v___x_436_ = v_toApplicative_427_;
v_isShared_437_ = v_isSharedCheck_457_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_toSeqRight_434_);
lean_inc(v_toSeqLeft_433_);
lean_inc(v_toSeq_432_);
lean_inc(v_toFunctor_431_);
lean_dec(v_toApplicative_427_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_457_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___f_438_; lean_object* v___f_439_; lean_object* v___f_440_; lean_object* v___f_441_; lean_object* v___x_442_; lean_object* v___f_443_; lean_object* v___f_444_; lean_object* v___f_445_; lean_object* v___x_447_; 
v___f_438_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__8));
v___f_439_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__9));
lean_inc_ref(v_toFunctor_431_);
v___f_440_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_440_, 0, v_toFunctor_431_);
v___f_441_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_441_, 0, v_toFunctor_431_);
v___x_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_442_, 0, v___f_440_);
lean_ctor_set(v___x_442_, 1, v___f_441_);
v___f_443_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_443_, 0, v_toSeqRight_434_);
v___f_444_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_444_, 0, v_toSeqLeft_433_);
v___f_445_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_445_, 0, v_toSeq_432_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 4, v___f_443_);
lean_ctor_set(v___x_436_, 3, v___f_444_);
lean_ctor_set(v___x_436_, 2, v___f_445_);
lean_ctor_set(v___x_436_, 1, v___f_438_);
lean_ctor_set(v___x_436_, 0, v___x_442_);
v___x_447_ = v___x_436_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v___x_442_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v___f_438_);
lean_ctor_set(v_reuseFailAlloc_456_, 2, v___f_445_);
lean_ctor_set(v_reuseFailAlloc_456_, 3, v___f_444_);
lean_ctor_set(v_reuseFailAlloc_456_, 4, v___f_443_);
v___x_447_ = v_reuseFailAlloc_456_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
lean_object* v___x_449_; 
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 1, v___f_439_);
lean_ctor_set(v___x_429_, 0, v___x_447_);
v___x_449_ = v___x_429_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_447_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v___f_439_);
v___x_449_ = v_reuseFailAlloc_455_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_2908__overap_453_; lean_object* v___x_454_; 
v___x_450_ = l_StateRefT_x27_instMonad___redArg(v___x_449_);
v___x_451_ = lean_box(0);
v___x_452_ = l_instInhabitedOfMonad___redArg(v___x_450_, v___x_451_);
v___x_2908__overap_453_ = lean_panic_fn_borrowed(v___x_452_, v_msg_384_);
lean_dec(v___x_452_);
lean_inc(v___y_389_);
lean_inc_ref(v___y_388_);
lean_inc(v___y_387_);
lean_inc_ref(v___y_386_);
lean_inc(v___y_385_);
v___x_454_ = lean_apply_6(v___x_2908__overap_453_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, lean_box(0));
return v___x_454_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__2___boxed(lean_object* v_msg_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__2(v_msg_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
lean_dec(v___y_470_);
lean_dec_ref(v___y_469_);
lean_dec(v___y_468_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__4___redArg(lean_object* v_a_475_, lean_object* v_b_476_, lean_object* v_x_477_){
_start:
{
if (lean_obj_tag(v_x_477_) == 0)
{
lean_dec(v_b_476_);
lean_dec(v_a_475_);
return v_x_477_;
}
else
{
lean_object* v_key_478_; lean_object* v_value_479_; lean_object* v_tail_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_492_; 
v_key_478_ = lean_ctor_get(v_x_477_, 0);
v_value_479_ = lean_ctor_get(v_x_477_, 1);
v_tail_480_ = lean_ctor_get(v_x_477_, 2);
v_isSharedCheck_492_ = !lean_is_exclusive(v_x_477_);
if (v_isSharedCheck_492_ == 0)
{
v___x_482_ = v_x_477_;
v_isShared_483_ = v_isSharedCheck_492_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_tail_480_);
lean_inc(v_value_479_);
lean_inc(v_key_478_);
lean_dec(v_x_477_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_492_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
uint8_t v___x_484_; 
v___x_484_ = l_Lean_instBEqFVarId_beq(v_key_478_, v_a_475_);
if (v___x_484_ == 0)
{
lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_485_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__4___redArg(v_a_475_, v_b_476_, v_tail_480_);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 2, v___x_485_);
v___x_487_ = v___x_482_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_key_478_);
lean_ctor_set(v_reuseFailAlloc_488_, 1, v_value_479_);
lean_ctor_set(v_reuseFailAlloc_488_, 2, v___x_485_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
else
{
lean_object* v___x_490_; 
lean_dec(v_value_479_);
lean_dec(v_key_478_);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 1, v_b_476_);
lean_ctor_set(v___x_482_, 0, v_a_475_);
v___x_490_ = v___x_482_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_a_475_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v_b_476_);
lean_ctor_set(v_reuseFailAlloc_491_, 2, v_tail_480_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3_spec__5_spec__6___redArg(lean_object* v_x_493_, lean_object* v_x_494_){
_start:
{
if (lean_obj_tag(v_x_494_) == 0)
{
return v_x_493_;
}
else
{
lean_object* v_key_495_; lean_object* v_value_496_; lean_object* v_tail_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_520_; 
v_key_495_ = lean_ctor_get(v_x_494_, 0);
v_value_496_ = lean_ctor_get(v_x_494_, 1);
v_tail_497_ = lean_ctor_get(v_x_494_, 2);
v_isSharedCheck_520_ = !lean_is_exclusive(v_x_494_);
if (v_isSharedCheck_520_ == 0)
{
v___x_499_ = v_x_494_;
v_isShared_500_ = v_isSharedCheck_520_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_tail_497_);
lean_inc(v_value_496_);
lean_inc(v_key_495_);
lean_dec(v_x_494_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_520_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; uint64_t v___x_502_; uint64_t v___x_503_; uint64_t v___x_504_; uint64_t v_fold_505_; uint64_t v___x_506_; uint64_t v___x_507_; uint64_t v___x_508_; size_t v___x_509_; size_t v___x_510_; size_t v___x_511_; size_t v___x_512_; size_t v___x_513_; lean_object* v___x_514_; lean_object* v___x_516_; 
v___x_501_ = lean_array_get_size(v_x_493_);
v___x_502_ = l_Lean_instHashableFVarId_hash(v_key_495_);
v___x_503_ = 32ULL;
v___x_504_ = lean_uint64_shift_right(v___x_502_, v___x_503_);
v_fold_505_ = lean_uint64_xor(v___x_502_, v___x_504_);
v___x_506_ = 16ULL;
v___x_507_ = lean_uint64_shift_right(v_fold_505_, v___x_506_);
v___x_508_ = lean_uint64_xor(v_fold_505_, v___x_507_);
v___x_509_ = lean_uint64_to_usize(v___x_508_);
v___x_510_ = lean_usize_of_nat(v___x_501_);
v___x_511_ = ((size_t)1ULL);
v___x_512_ = lean_usize_sub(v___x_510_, v___x_511_);
v___x_513_ = lean_usize_land(v___x_509_, v___x_512_);
v___x_514_ = lean_array_uget_borrowed(v_x_493_, v___x_513_);
lean_inc(v___x_514_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 2, v___x_514_);
v___x_516_ = v___x_499_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_key_495_);
lean_ctor_set(v_reuseFailAlloc_519_, 1, v_value_496_);
lean_ctor_set(v_reuseFailAlloc_519_, 2, v___x_514_);
v___x_516_ = v_reuseFailAlloc_519_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
lean_object* v___x_517_; 
v___x_517_ = lean_array_uset(v_x_493_, v___x_513_, v___x_516_);
v_x_493_ = v___x_517_;
v_x_494_ = v_tail_497_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3_spec__5___redArg(lean_object* v_i_521_, lean_object* v_source_522_, lean_object* v_target_523_){
_start:
{
lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_524_ = lean_array_get_size(v_source_522_);
v___x_525_ = lean_nat_dec_lt(v_i_521_, v___x_524_);
if (v___x_525_ == 0)
{
lean_dec_ref(v_source_522_);
lean_dec(v_i_521_);
return v_target_523_;
}
else
{
lean_object* v_es_526_; lean_object* v___x_527_; lean_object* v_source_528_; lean_object* v_target_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v_es_526_ = lean_array_fget(v_source_522_, v_i_521_);
v___x_527_ = lean_box(0);
v_source_528_ = lean_array_fset(v_source_522_, v_i_521_, v___x_527_);
v_target_529_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3_spec__5_spec__6___redArg(v_target_523_, v_es_526_);
v___x_530_ = lean_unsigned_to_nat(1u);
v___x_531_ = lean_nat_add(v_i_521_, v___x_530_);
lean_dec(v_i_521_);
v_i_521_ = v___x_531_;
v_source_522_ = v_source_528_;
v_target_523_ = v_target_529_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3___redArg(lean_object* v_data_533_){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v_nbuckets_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_534_ = lean_array_get_size(v_data_533_);
v___x_535_ = lean_unsigned_to_nat(2u);
v_nbuckets_536_ = lean_nat_mul(v___x_534_, v___x_535_);
v___x_537_ = lean_unsigned_to_nat(0u);
v___x_538_ = lean_box(0);
v___x_539_ = lean_mk_array(v_nbuckets_536_, v___x_538_);
v___x_540_ = lean_array_propagate_mark(v_data_533_, v___x_539_);
v___x_541_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3_spec__5___redArg(v___x_537_, v_data_533_, v___x_540_);
return v___x_541_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__2___redArg(lean_object* v_a_542_, lean_object* v_x_543_){
_start:
{
if (lean_obj_tag(v_x_543_) == 0)
{
uint8_t v___x_544_; 
v___x_544_ = 0;
return v___x_544_;
}
else
{
lean_object* v_key_545_; lean_object* v_tail_546_; uint8_t v___x_547_; 
v_key_545_ = lean_ctor_get(v_x_543_, 0);
v_tail_546_ = lean_ctor_get(v_x_543_, 2);
v___x_547_ = l_Lean_instBEqFVarId_beq(v_key_545_, v_a_542_);
if (v___x_547_ == 0)
{
v_x_543_ = v_tail_546_;
goto _start;
}
else
{
return v___x_547_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__2___redArg___boxed(lean_object* v_a_549_, lean_object* v_x_550_){
_start:
{
uint8_t v_res_551_; lean_object* v_r_552_; 
v_res_551_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__2___redArg(v_a_549_, v_x_550_);
lean_dec(v_x_550_);
lean_dec(v_a_549_);
v_r_552_ = lean_box(v_res_551_);
return v_r_552_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(lean_object* v_m_553_, lean_object* v_a_554_, lean_object* v_b_555_){
_start:
{
lean_object* v_size_556_; lean_object* v_buckets_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_600_; 
v_size_556_ = lean_ctor_get(v_m_553_, 0);
v_buckets_557_ = lean_ctor_get(v_m_553_, 1);
v_isSharedCheck_600_ = !lean_is_exclusive(v_m_553_);
if (v_isSharedCheck_600_ == 0)
{
v___x_559_ = v_m_553_;
v_isShared_560_ = v_isSharedCheck_600_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_buckets_557_);
lean_inc(v_size_556_);
lean_dec(v_m_553_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_600_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_561_; uint64_t v___x_562_; uint64_t v___x_563_; uint64_t v___x_564_; uint64_t v_fold_565_; uint64_t v___x_566_; uint64_t v___x_567_; uint64_t v___x_568_; size_t v___x_569_; size_t v___x_570_; size_t v___x_571_; size_t v___x_572_; size_t v___x_573_; lean_object* v_bkt_574_; uint8_t v___x_575_; 
v___x_561_ = lean_array_get_size(v_buckets_557_);
v___x_562_ = l_Lean_instHashableFVarId_hash(v_a_554_);
v___x_563_ = 32ULL;
v___x_564_ = lean_uint64_shift_right(v___x_562_, v___x_563_);
v_fold_565_ = lean_uint64_xor(v___x_562_, v___x_564_);
v___x_566_ = 16ULL;
v___x_567_ = lean_uint64_shift_right(v_fold_565_, v___x_566_);
v___x_568_ = lean_uint64_xor(v_fold_565_, v___x_567_);
v___x_569_ = lean_uint64_to_usize(v___x_568_);
v___x_570_ = lean_usize_of_nat(v___x_561_);
v___x_571_ = ((size_t)1ULL);
v___x_572_ = lean_usize_sub(v___x_570_, v___x_571_);
v___x_573_ = lean_usize_land(v___x_569_, v___x_572_);
v_bkt_574_ = lean_array_uget_borrowed(v_buckets_557_, v___x_573_);
v___x_575_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__2___redArg(v_a_554_, v_bkt_574_);
if (v___x_575_ == 0)
{
lean_object* v___x_576_; lean_object* v_size_x27_577_; lean_object* v___x_578_; lean_object* v_buckets_x27_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; uint8_t v___x_585_; 
v___x_576_ = lean_unsigned_to_nat(1u);
v_size_x27_577_ = lean_nat_add(v_size_556_, v___x_576_);
lean_dec(v_size_556_);
lean_inc(v_bkt_574_);
v___x_578_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_578_, 0, v_a_554_);
lean_ctor_set(v___x_578_, 1, v_b_555_);
lean_ctor_set(v___x_578_, 2, v_bkt_574_);
v_buckets_x27_579_ = lean_array_uset(v_buckets_557_, v___x_573_, v___x_578_);
v___x_580_ = lean_unsigned_to_nat(4u);
v___x_581_ = lean_nat_mul(v_size_x27_577_, v___x_580_);
v___x_582_ = lean_unsigned_to_nat(3u);
v___x_583_ = lean_nat_div(v___x_581_, v___x_582_);
lean_dec(v___x_581_);
v___x_584_ = lean_array_get_size(v_buckets_x27_579_);
v___x_585_ = lean_nat_dec_le(v___x_583_, v___x_584_);
lean_dec(v___x_583_);
if (v___x_585_ == 0)
{
lean_object* v_val_586_; lean_object* v___x_588_; 
v_val_586_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3___redArg(v_buckets_x27_579_);
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 1, v_val_586_);
lean_ctor_set(v___x_559_, 0, v_size_x27_577_);
v___x_588_ = v___x_559_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_size_x27_577_);
lean_ctor_set(v_reuseFailAlloc_589_, 1, v_val_586_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
else
{
lean_object* v___x_591_; 
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 1, v_buckets_x27_579_);
lean_ctor_set(v___x_559_, 0, v_size_x27_577_);
v___x_591_ = v___x_559_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_size_x27_577_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_buckets_x27_579_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
else
{
lean_object* v___x_593_; lean_object* v_buckets_x27_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_598_; 
lean_inc(v_bkt_574_);
v___x_593_ = lean_box(0);
v_buckets_x27_594_ = lean_array_uset(v_buckets_557_, v___x_573_, v___x_593_);
v___x_595_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__4___redArg(v_a_554_, v_b_555_, v_bkt_574_);
v___x_596_ = lean_array_uset(v_buckets_x27_594_, v___x_573_, v___x_595_);
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 1, v___x_596_);
v___x_598_ = v___x_559_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_size_556_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v___x_596_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0_spec__0___redArg(lean_object* v_a_601_, lean_object* v_fallback_602_, lean_object* v_x_603_){
_start:
{
if (lean_obj_tag(v_x_603_) == 0)
{
lean_inc(v_fallback_602_);
return v_fallback_602_;
}
else
{
lean_object* v_key_604_; lean_object* v_value_605_; lean_object* v_tail_606_; uint8_t v___x_607_; 
v_key_604_ = lean_ctor_get(v_x_603_, 0);
v_value_605_ = lean_ctor_get(v_x_603_, 1);
v_tail_606_ = lean_ctor_get(v_x_603_, 2);
v___x_607_ = l_Lean_instBEqFVarId_beq(v_key_604_, v_a_601_);
if (v___x_607_ == 0)
{
v_x_603_ = v_tail_606_;
goto _start;
}
else
{
lean_inc(v_value_605_);
return v_value_605_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0_spec__0___redArg___boxed(lean_object* v_a_609_, lean_object* v_fallback_610_, lean_object* v_x_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0_spec__0___redArg(v_a_609_, v_fallback_610_, v_x_611_);
lean_dec(v_x_611_);
lean_dec(v_fallback_610_);
lean_dec(v_a_609_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(lean_object* v_m_613_, lean_object* v_a_614_, lean_object* v_fallback_615_){
_start:
{
lean_object* v_buckets_616_; lean_object* v___x_617_; uint64_t v___x_618_; uint64_t v___x_619_; uint64_t v___x_620_; uint64_t v_fold_621_; uint64_t v___x_622_; uint64_t v___x_623_; uint64_t v___x_624_; size_t v___x_625_; size_t v___x_626_; size_t v___x_627_; size_t v___x_628_; size_t v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
v_buckets_616_ = lean_ctor_get(v_m_613_, 1);
v___x_617_ = lean_array_get_size(v_buckets_616_);
v___x_618_ = l_Lean_instHashableFVarId_hash(v_a_614_);
v___x_619_ = 32ULL;
v___x_620_ = lean_uint64_shift_right(v___x_618_, v___x_619_);
v_fold_621_ = lean_uint64_xor(v___x_618_, v___x_620_);
v___x_622_ = 16ULL;
v___x_623_ = lean_uint64_shift_right(v_fold_621_, v___x_622_);
v___x_624_ = lean_uint64_xor(v_fold_621_, v___x_623_);
v___x_625_ = lean_uint64_to_usize(v___x_624_);
v___x_626_ = lean_usize_of_nat(v___x_617_);
v___x_627_ = ((size_t)1ULL);
v___x_628_ = lean_usize_sub(v___x_626_, v___x_627_);
v___x_629_ = lean_usize_land(v___x_625_, v___x_628_);
v___x_630_ = lean_array_uget_borrowed(v_buckets_616_, v___x_629_);
v___x_631_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0_spec__0___redArg(v_a_614_, v_fallback_615_, v___x_630_);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg___boxed(lean_object* v_m_632_, lean_object* v_a_633_, lean_object* v_fallback_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_m_632_, v_a_633_, v_fallback_634_);
lean_dec(v_fallback_634_);
lean_dec(v_a_633_);
lean_dec_ref(v_m_632_);
return v_res_635_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__5(void){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_641_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__2));
v___x_642_ = lean_unsigned_to_nat(11u);
v___x_643_ = lean_unsigned_to_nat(135u);
v___x_644_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__4));
v___x_645_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__0));
v___x_646_ = l_mkPanicMessageWithDecl(v___x_645_, v___x_644_, v___x_643_, v___x_642_, v___x_641_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue(lean_object* v_z_647_, lean_object* v_v_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v___y_656_; lean_object* v_fst_657_; lean_object* v_snd_658_; lean_object* v___y_662_; uint8_t v___y_663_; lean_object* v___y_686_; lean_object* v_fst_687_; lean_object* v_snd_688_; lean_object* v___y_692_; lean_object* v_fst_693_; lean_object* v_snd_694_; lean_object* v_fst_698_; lean_object* v_snd_699_; uint8_t v___y_703_; 
switch(lean_obj_tag(v_v_648_))
{
case 6:
{
lean_object* v_var_725_; lean_object* v___x_726_; lean_object* v_values_727_; uint8_t v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v_fst_733_; lean_object* v_snd_734_; lean_object* v_values_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v_old_740_; uint8_t v___x_741_; uint8_t v___x_742_; uint8_t v_new_743_; uint8_t v___x_744_; uint8_t v___x_745_; 
v_var_725_ = lean_ctor_get(v_v_648_, 1);
lean_inc(v_var_725_);
lean_dec_ref_known(v_v_648_, 2);
v___x_726_ = lean_st_ref_get(v___y_649_);
v_values_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc_ref(v_values_727_);
lean_dec(v___x_726_);
v___x_728_ = 0;
v___x_729_ = lean_box(v___x_728_);
v___x_730_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_727_, v_var_725_, v___x_729_);
lean_dec(v___x_729_);
lean_dec(v_var_725_);
lean_dec_ref(v_values_727_);
v___x_731_ = lean_st_ref_take(v___y_649_);
v_values_737_ = lean_ctor_get(v___x_731_, 0);
lean_inc_ref(v_values_737_);
v___x_738_ = lean_box(0);
v___x_739_ = lean_box(v___x_728_);
v_old_740_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_737_, v_z_647_, v___x_739_);
lean_dec(v___x_739_);
v___x_741_ = lean_unbox(v_old_740_);
v___x_742_ = lean_unbox(v___x_730_);
lean_dec(v___x_730_);
v_new_743_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v___x_741_, v___x_742_);
v___x_744_ = lean_unbox(v_old_740_);
lean_dec(v_old_740_);
v___x_745_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_744_, v_new_743_);
if (v___x_745_ == 0)
{
lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_755_; 
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_755_ == 0)
{
lean_object* v_unused_756_; 
v_unused_756_ = lean_ctor_get(v___x_731_, 0);
lean_dec(v_unused_756_);
v___x_747_ = v___x_731_;
v_isShared_748_ = v_isSharedCheck_755_;
goto v_resetjp_746_;
}
else
{
lean_dec(v___x_731_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_755_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
uint8_t v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_753_; 
v___x_749_ = 1;
v___x_750_ = lean_box(v_new_743_);
v___x_751_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_values_737_, v_z_647_, v___x_750_);
if (v_isShared_748_ == 0)
{
lean_ctor_set(v___x_747_, 0, v___x_751_);
v___x_753_ = v___x_747_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v___x_751_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
lean_ctor_set_uint8(v___x_753_, sizeof(void*)*1, v___x_749_);
v_fst_733_ = v___x_738_;
v_snd_734_ = v___x_753_;
goto v___jp_732_;
}
}
}
else
{
lean_dec_ref(v_values_737_);
lean_dec(v_z_647_);
v_fst_733_ = v___x_738_;
v_snd_734_ = v___x_731_;
goto v___jp_732_;
}
v___jp_732_:
{
lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_735_ = lean_st_ref_put(v___y_649_, v_snd_734_);
v___x_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_736_, 0, v_fst_733_);
return v___x_736_;
}
}
case 9:
{
lean_object* v_fn_757_; lean_object* v_args_758_; lean_object* v___y_760_; 
v_fn_757_ = lean_ctor_get(v_v_648_, 0);
lean_inc(v_fn_757_);
v_args_758_ = lean_ctor_get(v_v_648_, 1);
lean_inc_ref(v_args_758_);
lean_dec_ref_known(v_v_648_, 2);
if (lean_obj_tag(v_fn_757_) == 1)
{
lean_object* v_pre_766_; 
v_pre_766_ = lean_ctor_get(v_fn_757_, 0);
lean_inc(v_pre_766_);
if (lean_obj_tag(v_pre_766_) == 1)
{
lean_object* v_pre_767_; 
v_pre_767_ = lean_ctor_get(v_pre_766_, 0);
if (lean_obj_tag(v_pre_767_) == 0)
{
lean_object* v_str_768_; lean_object* v_str_769_; lean_object* v___x_770_; uint8_t v___x_771_; lean_object* v_args_773_; lean_object* v___y_774_; 
v_str_768_ = lean_ctor_get(v_fn_757_, 1);
lean_inc_ref(v_str_768_);
lean_dec_ref_known(v_fn_757_, 2);
v_str_769_ = lean_ctor_get(v_pre_766_, 1);
lean_inc_ref(v_str_769_);
lean_dec_ref_known(v_pre_766_, 2);
v___x_770_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__0));
v___x_771_ = lean_string_dec_eq(v_str_769_, v___x_770_);
lean_dec_ref(v_str_769_);
if (v___x_771_ == 0)
{
lean_dec_ref(v_str_768_);
v___y_760_ = v___y_649_;
goto v___jp_759_;
}
else
{
lean_object* v___x_806_; uint8_t v___x_807_; 
v___x_806_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__1));
v___x_807_ = lean_string_dec_eq(v_str_768_, v___x_806_);
if (v___x_807_ == 0)
{
lean_object* v___x_808_; uint8_t v___x_809_; lean_object* v___y_811_; 
v___x_808_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__2));
v___x_809_ = lean_string_dec_eq(v_str_768_, v___x_808_);
if (v___x_809_ == 0)
{
lean_object* v___x_843_; uint8_t v___x_844_; 
v___x_843_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__3));
v___x_844_ = lean_string_dec_eq(v_str_768_, v___x_843_);
lean_dec_ref(v_str_768_);
if (v___x_844_ == 0)
{
v___y_760_ = v___y_649_;
goto v___jp_759_;
}
else
{
v_args_773_ = v_args_758_;
v___y_774_ = v___y_649_;
goto v___jp_772_;
}
}
else
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
lean_dec_ref(v_str_768_);
v___x_845_ = lean_box(0);
v___x_846_ = lean_unsigned_to_nat(1u);
v___x_847_ = lean_array_get_borrowed(v___x_845_, v_args_758_, v___x_846_);
if (lean_obj_tag(v___x_847_) == 1)
{
lean_object* v_fvarId_848_; lean_object* v___x_849_; lean_object* v_values_850_; uint8_t v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v_snd_856_; lean_object* v_values_858_; lean_object* v___x_859_; lean_object* v_old_860_; uint8_t v___x_861_; uint8_t v___x_862_; uint8_t v_new_863_; uint8_t v___x_864_; uint8_t v___x_865_; 
v_fvarId_848_ = lean_ctor_get(v___x_847_, 0);
v___x_849_ = lean_st_ref_get(v___y_649_);
v_values_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc_ref(v_values_850_);
lean_dec(v___x_849_);
v___x_851_ = 0;
v___x_852_ = lean_box(v___x_851_);
v___x_853_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_850_, v_fvarId_848_, v___x_852_);
lean_dec(v___x_852_);
lean_dec_ref(v_values_850_);
v___x_854_ = lean_st_ref_take(v___y_649_);
v_values_858_ = lean_ctor_get(v___x_854_, 0);
lean_inc_ref(v_values_858_);
v___x_859_ = lean_box(v___x_851_);
v_old_860_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_858_, v_z_647_, v___x_859_);
lean_dec(v___x_859_);
v___x_861_ = lean_unbox(v_old_860_);
v___x_862_ = lean_unbox(v___x_853_);
lean_dec(v___x_853_);
v_new_863_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v___x_861_, v___x_862_);
v___x_864_ = lean_unbox(v_old_860_);
lean_dec(v_old_860_);
v___x_865_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_864_, v_new_863_);
if (v___x_865_ == 0)
{
lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_874_; 
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_874_ == 0)
{
lean_object* v_unused_875_; 
v_unused_875_ = lean_ctor_get(v___x_854_, 0);
lean_dec(v_unused_875_);
v___x_867_ = v___x_854_;
v_isShared_868_ = v_isSharedCheck_874_;
goto v_resetjp_866_;
}
else
{
lean_dec(v___x_854_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_874_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_872_; 
v___x_869_ = lean_box(v_new_863_);
lean_inc(v_z_647_);
v___x_870_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_values_858_, v_z_647_, v___x_869_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 0, v___x_870_);
v___x_872_ = v___x_867_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v___x_870_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
lean_ctor_set_uint8(v___x_872_, sizeof(void*)*1, v___x_809_);
v_snd_856_ = v___x_872_;
goto v___jp_855_;
}
}
}
else
{
lean_dec_ref(v_values_858_);
v_snd_856_ = v___x_854_;
goto v___jp_855_;
}
v___jp_855_:
{
lean_object* v___x_857_; 
v___x_857_ = lean_st_ref_put(v___y_649_, v_snd_856_);
v___y_811_ = v___y_649_;
goto v___jp_810_;
}
}
else
{
v___y_811_ = v___y_649_;
goto v___jp_810_;
}
}
v___jp_810_:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_812_ = lean_box(0);
v___x_813_ = lean_unsigned_to_nat(2u);
v___x_814_ = lean_array_get(v___x_812_, v_args_758_, v___x_813_);
lean_dec_ref(v_args_758_);
if (lean_obj_tag(v___x_814_) == 1)
{
lean_object* v_fvarId_815_; lean_object* v___x_816_; lean_object* v_values_817_; uint8_t v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v_values_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v_old_825_; uint8_t v___x_826_; uint8_t v___x_827_; uint8_t v_new_828_; uint8_t v___x_829_; uint8_t v___x_830_; 
v_fvarId_815_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_fvarId_815_);
lean_dec_ref_known(v___x_814_, 1);
v___x_816_ = lean_st_ref_get(v___y_811_);
v_values_817_ = lean_ctor_get(v___x_816_, 0);
lean_inc_ref(v_values_817_);
lean_dec(v___x_816_);
v___x_818_ = 0;
v___x_819_ = lean_box(v___x_818_);
v___x_820_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_817_, v_fvarId_815_, v___x_819_);
lean_dec(v___x_819_);
lean_dec(v_fvarId_815_);
lean_dec_ref(v_values_817_);
v___x_821_ = lean_st_ref_take(v___y_811_);
v_values_822_ = lean_ctor_get(v___x_821_, 0);
lean_inc_ref(v_values_822_);
v___x_823_ = lean_box(0);
v___x_824_ = lean_box(v___x_818_);
v_old_825_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_822_, v_z_647_, v___x_824_);
lean_dec(v___x_824_);
v___x_826_ = lean_unbox(v_old_825_);
v___x_827_ = lean_unbox(v___x_820_);
lean_dec(v___x_820_);
v_new_828_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v___x_826_, v___x_827_);
v___x_829_ = lean_unbox(v_old_825_);
lean_dec(v_old_825_);
v___x_830_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_829_, v_new_828_);
if (v___x_830_ == 0)
{
lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_839_; 
v_isSharedCheck_839_ = !lean_is_exclusive(v___x_821_);
if (v_isSharedCheck_839_ == 0)
{
lean_object* v_unused_840_; 
v_unused_840_ = lean_ctor_get(v___x_821_, 0);
lean_dec(v_unused_840_);
v___x_832_ = v___x_821_;
v_isShared_833_ = v_isSharedCheck_839_;
goto v_resetjp_831_;
}
else
{
lean_dec(v___x_821_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_839_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_837_; 
v___x_834_ = lean_box(v_new_828_);
v___x_835_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_values_822_, v_z_647_, v___x_834_);
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 0, v___x_835_);
v___x_837_ = v___x_832_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_835_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
lean_ctor_set_uint8(v___x_837_, sizeof(void*)*1, v___x_809_);
v___y_692_ = v___y_811_;
v_fst_693_ = v___x_823_;
v_snd_694_ = v___x_837_;
goto v___jp_691_;
}
}
}
else
{
lean_dec_ref(v_values_822_);
lean_dec(v_z_647_);
v___y_692_ = v___y_811_;
v_fst_693_ = v___x_823_;
v_snd_694_ = v___x_821_;
goto v___jp_691_;
}
}
else
{
lean_object* v___x_841_; lean_object* v___x_842_; 
lean_dec(v___x_814_);
lean_dec(v_z_647_);
v___x_841_ = lean_box(0);
v___x_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_842_, 0, v___x_841_);
return v___x_842_;
}
}
}
else
{
lean_dec_ref(v_str_768_);
v_args_773_ = v_args_758_;
v___y_774_ = v___y_649_;
goto v___jp_772_;
}
}
v___jp_772_:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_775_ = lean_box(0);
v___x_776_ = lean_unsigned_to_nat(1u);
v___x_777_ = lean_array_get(v___x_775_, v_args_773_, v___x_776_);
lean_dec_ref(v_args_773_);
if (lean_obj_tag(v___x_777_) == 1)
{
lean_object* v_fvarId_778_; lean_object* v___x_779_; lean_object* v_values_780_; uint8_t v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v_values_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v_old_788_; uint8_t v___x_789_; uint8_t v___x_790_; uint8_t v_new_791_; uint8_t v___x_792_; uint8_t v___x_793_; 
v_fvarId_778_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_fvarId_778_);
lean_dec_ref_known(v___x_777_, 1);
v___x_779_ = lean_st_ref_get(v___y_774_);
v_values_780_ = lean_ctor_get(v___x_779_, 0);
lean_inc_ref(v_values_780_);
lean_dec(v___x_779_);
v___x_781_ = 0;
v___x_782_ = lean_box(v___x_781_);
v___x_783_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_780_, v_fvarId_778_, v___x_782_);
lean_dec(v___x_782_);
lean_dec(v_fvarId_778_);
lean_dec_ref(v_values_780_);
v___x_784_ = lean_st_ref_take(v___y_774_);
v_values_785_ = lean_ctor_get(v___x_784_, 0);
lean_inc_ref(v_values_785_);
v___x_786_ = lean_box(0);
v___x_787_ = lean_box(v___x_781_);
v_old_788_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_785_, v_z_647_, v___x_787_);
lean_dec(v___x_787_);
v___x_789_ = lean_unbox(v_old_788_);
v___x_790_ = lean_unbox(v___x_783_);
lean_dec(v___x_783_);
v_new_791_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v___x_789_, v___x_790_);
v___x_792_ = lean_unbox(v_old_788_);
lean_dec(v_old_788_);
v___x_793_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_792_, v_new_791_);
if (v___x_793_ == 0)
{
lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_802_; 
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_802_ == 0)
{
lean_object* v_unused_803_; 
v_unused_803_ = lean_ctor_get(v___x_784_, 0);
lean_dec(v_unused_803_);
v___x_795_ = v___x_784_;
v_isShared_796_ = v_isSharedCheck_802_;
goto v_resetjp_794_;
}
else
{
lean_dec(v___x_784_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_802_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_800_; 
v___x_797_ = lean_box(v_new_791_);
v___x_798_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_values_785_, v_z_647_, v___x_797_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_798_);
v___x_800_ = v___x_795_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v___x_798_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
lean_ctor_set_uint8(v___x_800_, sizeof(void*)*1, v___x_771_);
v___y_686_ = v___y_774_;
v_fst_687_ = v___x_786_;
v_snd_688_ = v___x_800_;
goto v___jp_685_;
}
}
}
else
{
lean_dec_ref(v_values_785_);
lean_dec(v_z_647_);
v___y_686_ = v___y_774_;
v_fst_687_ = v___x_786_;
v_snd_688_ = v___x_784_;
goto v___jp_685_;
}
}
else
{
lean_object* v___x_804_; lean_object* v___x_805_; 
lean_dec(v___x_777_);
lean_dec(v_z_647_);
v___x_804_ = lean_box(0);
v___x_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
return v___x_805_;
}
}
}
else
{
lean_dec_ref_known(v_pre_766_, 2);
lean_dec_ref_known(v_fn_757_, 2);
v___y_760_ = v___y_649_;
goto v___jp_759_;
}
}
else
{
lean_dec_ref_known(v_fn_757_, 2);
lean_dec(v_pre_766_);
v___y_760_ = v___y_649_;
goto v___jp_759_;
}
}
else
{
lean_dec(v_fn_757_);
v___y_760_ = v___y_649_;
goto v___jp_759_;
}
v___jp_759_:
{
lean_object* v___x_761_; lean_object* v___x_762_; uint8_t v___x_763_; 
v___x_761_ = lean_array_get_size(v_args_758_);
lean_dec_ref(v_args_758_);
v___x_762_ = lean_unsigned_to_nat(0u);
v___x_763_ = lean_nat_dec_eq(v___x_761_, v___x_762_);
if (v___x_763_ == 0)
{
uint8_t v___x_764_; 
v___x_764_ = 2;
v___y_662_ = v___y_760_;
v___y_663_ = v___x_764_;
goto v___jp_661_;
}
else
{
uint8_t v___x_765_; 
v___x_765_ = 1;
v___y_662_ = v___y_760_;
v___y_663_ = v___x_765_;
goto v___jp_661_;
}
}
}
case 5:
{
lean_object* v_i_876_; uint8_t v___x_877_; 
v_i_876_ = lean_ctor_get(v_v_648_, 0);
lean_inc_ref(v_i_876_);
lean_dec_ref_known(v_v_648_, 2);
v___x_877_ = l_Lean_Compiler_LCNF_CtorInfo_isScalar(v_i_876_);
lean_dec_ref(v_i_876_);
if (v___x_877_ == 0)
{
uint8_t v___x_878_; 
v___x_878_ = 2;
v___y_703_ = v___x_878_;
goto v___jp_702_;
}
else
{
uint8_t v___x_879_; 
v___x_879_ = 1;
v___y_703_ = v___x_879_;
goto v___jp_702_;
}
}
case 4:
{
uint8_t v___x_880_; lean_object* v___x_881_; lean_object* v_fst_883_; lean_object* v_snd_884_; lean_object* v_values_887_; lean_object* v___x_888_; uint8_t v___x_889_; lean_object* v___x_890_; lean_object* v_old_891_; uint8_t v___x_892_; uint8_t v_new_893_; uint8_t v___x_894_; uint8_t v___x_895_; 
lean_dec_ref_known(v_v_648_, 2);
v___x_880_ = 2;
v___x_881_ = lean_st_ref_take(v___y_649_);
v_values_887_ = lean_ctor_get(v___x_881_, 0);
lean_inc_ref(v_values_887_);
v___x_888_ = lean_box(0);
v___x_889_ = 0;
v___x_890_ = lean_box(v___x_889_);
v_old_891_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_887_, v_z_647_, v___x_890_);
lean_dec(v___x_890_);
v___x_892_ = lean_unbox(v_old_891_);
v_new_893_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v___x_892_, v___x_880_);
v___x_894_ = lean_unbox(v_old_891_);
lean_dec(v_old_891_);
v___x_895_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_894_, v_new_893_);
if (v___x_895_ == 0)
{
lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_905_; 
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_905_ == 0)
{
lean_object* v_unused_906_; 
v_unused_906_ = lean_ctor_get(v___x_881_, 0);
lean_dec(v_unused_906_);
v___x_897_ = v___x_881_;
v_isShared_898_ = v_isSharedCheck_905_;
goto v_resetjp_896_;
}
else
{
lean_dec(v___x_881_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_905_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
uint8_t v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_903_; 
v___x_899_ = 1;
v___x_900_ = lean_box(v_new_893_);
v___x_901_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_values_887_, v_z_647_, v___x_900_);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 0, v___x_901_);
v___x_903_ = v___x_897_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v___x_901_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
lean_ctor_set_uint8(v___x_903_, sizeof(void*)*1, v___x_899_);
v_fst_883_ = v___x_888_;
v_snd_884_ = v___x_903_;
goto v___jp_882_;
}
}
}
else
{
lean_dec_ref(v_values_887_);
lean_dec(v_z_647_);
v_fst_883_ = v___x_888_;
v_snd_884_ = v___x_881_;
goto v___jp_882_;
}
v___jp_882_:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = lean_st_ref_put(v___y_649_, v_snd_884_);
v___x_886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_886_, 0, v_fst_883_);
return v___x_886_;
}
}
case 10:
{
uint8_t v___x_907_; lean_object* v___x_908_; lean_object* v_fst_910_; lean_object* v_snd_911_; lean_object* v_values_914_; lean_object* v___x_915_; uint8_t v___x_916_; lean_object* v___x_917_; lean_object* v_old_918_; uint8_t v___x_919_; uint8_t v_new_920_; uint8_t v___x_921_; uint8_t v___x_922_; 
lean_dec_ref_known(v_v_648_, 2);
v___x_907_ = 2;
v___x_908_ = lean_st_ref_take(v___y_649_);
v_values_914_ = lean_ctor_get(v___x_908_, 0);
lean_inc_ref(v_values_914_);
v___x_915_ = lean_box(0);
v___x_916_ = 0;
v___x_917_ = lean_box(v___x_916_);
v_old_918_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_914_, v_z_647_, v___x_917_);
lean_dec(v___x_917_);
v___x_919_ = lean_unbox(v_old_918_);
v_new_920_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v___x_919_, v___x_907_);
v___x_921_ = lean_unbox(v_old_918_);
lean_dec(v_old_918_);
v___x_922_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_921_, v_new_920_);
if (v___x_922_ == 0)
{
lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_932_; 
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_932_ == 0)
{
lean_object* v_unused_933_; 
v_unused_933_ = lean_ctor_get(v___x_908_, 0);
lean_dec(v_unused_933_);
v___x_924_ = v___x_908_;
v_isShared_925_ = v_isSharedCheck_932_;
goto v_resetjp_923_;
}
else
{
lean_dec(v___x_908_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_932_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
uint8_t v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_930_; 
v___x_926_ = 1;
v___x_927_ = lean_box(v_new_920_);
v___x_928_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_values_914_, v_z_647_, v___x_927_);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 0, v___x_928_);
v___x_930_ = v___x_924_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v___x_928_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*1, v___x_926_);
v_fst_910_ = v___x_915_;
v_snd_911_ = v___x_930_;
goto v___jp_909_;
}
}
}
else
{
lean_dec_ref(v_values_914_);
lean_dec(v_z_647_);
v_fst_910_ = v___x_915_;
v_snd_911_ = v___x_908_;
goto v___jp_909_;
}
v___jp_909_:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = lean_st_ref_put(v___y_649_, v_snd_911_);
v___x_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_913_, 0, v_fst_910_);
return v___x_913_;
}
}
case 8:
{
uint8_t v___x_934_; lean_object* v___x_935_; lean_object* v_fst_937_; lean_object* v_snd_938_; lean_object* v_values_941_; lean_object* v___x_942_; uint8_t v___x_943_; lean_object* v___x_944_; lean_object* v_old_945_; uint8_t v___x_946_; uint8_t v_new_947_; uint8_t v___x_948_; uint8_t v___x_949_; 
lean_dec_ref_known(v_v_648_, 3);
v___x_934_ = 2;
v___x_935_ = lean_st_ref_take(v___y_649_);
v_values_941_ = lean_ctor_get(v___x_935_, 0);
lean_inc_ref(v_values_941_);
v___x_942_ = lean_box(0);
v___x_943_ = 0;
v___x_944_ = lean_box(v___x_943_);
v_old_945_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_941_, v_z_647_, v___x_944_);
lean_dec(v___x_944_);
v___x_946_ = lean_unbox(v_old_945_);
v_new_947_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v___x_946_, v___x_934_);
v___x_948_ = lean_unbox(v_old_945_);
lean_dec(v_old_945_);
v___x_949_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_948_, v_new_947_);
if (v___x_949_ == 0)
{
lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_959_; 
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_959_ == 0)
{
lean_object* v_unused_960_; 
v_unused_960_ = lean_ctor_get(v___x_935_, 0);
lean_dec(v_unused_960_);
v___x_951_ = v___x_935_;
v_isShared_952_ = v_isSharedCheck_959_;
goto v_resetjp_950_;
}
else
{
lean_dec(v___x_935_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_959_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
uint8_t v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_957_; 
v___x_953_ = 1;
v___x_954_ = lean_box(v_new_947_);
v___x_955_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_values_941_, v_z_647_, v___x_954_);
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v___x_955_);
v___x_957_ = v___x_951_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_955_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
lean_ctor_set_uint8(v___x_957_, sizeof(void*)*1, v___x_953_);
v_fst_937_ = v___x_942_;
v_snd_938_ = v___x_957_;
goto v___jp_936_;
}
}
}
else
{
lean_dec_ref(v_values_941_);
lean_dec(v_z_647_);
v_fst_937_ = v___x_942_;
v_snd_938_ = v___x_935_;
goto v___jp_936_;
}
v___jp_936_:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = lean_st_ref_put(v___y_649_, v_snd_938_);
v___x_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_940_, 0, v_fst_937_);
return v___x_940_;
}
}
case 7:
{
uint8_t v___x_961_; lean_object* v___x_962_; lean_object* v_fst_964_; lean_object* v_snd_965_; lean_object* v_values_968_; lean_object* v___x_969_; uint8_t v___x_970_; lean_object* v___x_971_; lean_object* v_old_972_; uint8_t v___x_973_; uint8_t v_new_974_; uint8_t v___x_975_; uint8_t v___x_976_; 
lean_dec_ref_known(v_v_648_, 2);
v___x_961_ = 2;
v___x_962_ = lean_st_ref_take(v___y_649_);
v_values_968_ = lean_ctor_get(v___x_962_, 0);
lean_inc_ref(v_values_968_);
v___x_969_ = lean_box(0);
v___x_970_ = 0;
v___x_971_ = lean_box(v___x_970_);
v_old_972_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_968_, v_z_647_, v___x_971_);
lean_dec(v___x_971_);
v___x_973_ = lean_unbox(v_old_972_);
v_new_974_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v___x_973_, v___x_961_);
v___x_975_ = lean_unbox(v_old_972_);
lean_dec(v_old_972_);
v___x_976_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_975_, v_new_974_);
if (v___x_976_ == 0)
{
lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_986_; 
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_986_ == 0)
{
lean_object* v_unused_987_; 
v_unused_987_ = lean_ctor_get(v___x_962_, 0);
lean_dec(v_unused_987_);
v___x_978_ = v___x_962_;
v_isShared_979_ = v_isSharedCheck_986_;
goto v_resetjp_977_;
}
else
{
lean_dec(v___x_962_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_986_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
uint8_t v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_984_; 
v___x_980_ = 1;
v___x_981_ = lean_box(v_new_974_);
v___x_982_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_values_968_, v_z_647_, v___x_981_);
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 0, v___x_982_);
v___x_984_ = v___x_978_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v___x_982_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
lean_ctor_set_uint8(v___x_984_, sizeof(void*)*1, v___x_980_);
v_fst_964_ = v___x_969_;
v_snd_965_ = v___x_984_;
goto v___jp_963_;
}
}
}
else
{
lean_dec_ref(v_values_968_);
lean_dec(v_z_647_);
v_fst_964_ = v___x_969_;
v_snd_965_ = v___x_962_;
goto v___jp_963_;
}
v___jp_963_:
{
lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_966_ = lean_st_ref_put(v___y_649_, v_snd_965_);
v___x_967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_967_, 0, v_fst_964_);
return v___x_967_;
}
}
case 1:
{
uint8_t v___x_988_; lean_object* v___x_989_; lean_object* v_fst_991_; lean_object* v_snd_992_; lean_object* v_values_995_; lean_object* v___x_996_; uint8_t v___x_997_; lean_object* v___x_998_; lean_object* v_old_999_; uint8_t v___x_1000_; uint8_t v_new_1001_; uint8_t v___x_1002_; uint8_t v___x_1003_; 
v___x_988_ = 2;
v___x_989_ = lean_st_ref_take(v___y_649_);
v_values_995_ = lean_ctor_get(v___x_989_, 0);
lean_inc_ref(v_values_995_);
v___x_996_ = lean_box(0);
v___x_997_ = 0;
v___x_998_ = lean_box(v___x_997_);
v_old_999_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_995_, v_z_647_, v___x_998_);
lean_dec(v___x_998_);
v___x_1000_ = lean_unbox(v_old_999_);
v_new_1001_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v___x_1000_, v___x_988_);
v___x_1002_ = lean_unbox(v_old_999_);
lean_dec(v_old_999_);
v___x_1003_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_1002_, v_new_1001_);
if (v___x_1003_ == 0)
{
lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1013_; 
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1013_ == 0)
{
lean_object* v_unused_1014_; 
v_unused_1014_ = lean_ctor_get(v___x_989_, 0);
lean_dec(v_unused_1014_);
v___x_1005_ = v___x_989_;
v_isShared_1006_ = v_isSharedCheck_1013_;
goto v_resetjp_1004_;
}
else
{
lean_dec(v___x_989_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1013_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
uint8_t v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1011_; 
v___x_1007_ = 1;
v___x_1008_ = lean_box(v_new_1001_);
v___x_1009_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_values_995_, v_z_647_, v___x_1008_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 0, v___x_1009_);
v___x_1011_ = v___x_1005_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v___x_1009_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
lean_ctor_set_uint8(v___x_1011_, sizeof(void*)*1, v___x_1007_);
v_fst_991_ = v___x_996_;
v_snd_992_ = v___x_1011_;
goto v___jp_990_;
}
}
}
else
{
lean_dec_ref(v_values_995_);
lean_dec(v_z_647_);
v_fst_991_ = v___x_996_;
v_snd_992_ = v___x_989_;
goto v___jp_990_;
}
v___jp_990_:
{
lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_993_ = lean_st_ref_put(v___y_649_, v_snd_992_);
v___x_994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_994_, 0, v_fst_991_);
return v___x_994_;
}
}
case 0:
{
lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1047_; 
v_isSharedCheck_1047_ = !lean_is_exclusive(v_v_648_);
if (v_isSharedCheck_1047_ == 0)
{
lean_object* v_unused_1048_; 
v_unused_1048_ = lean_ctor_get(v_v_648_, 0);
lean_dec(v_unused_1048_);
v___x_1016_ = v_v_648_;
v_isShared_1017_ = v_isSharedCheck_1047_;
goto v_resetjp_1015_;
}
else
{
lean_dec(v_v_648_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1047_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
uint8_t v___x_1018_; lean_object* v___x_1019_; lean_object* v_fst_1021_; lean_object* v_snd_1022_; lean_object* v_values_1027_; lean_object* v___x_1028_; uint8_t v___x_1029_; lean_object* v___x_1030_; lean_object* v_old_1031_; uint8_t v___x_1032_; uint8_t v_new_1033_; uint8_t v___x_1034_; uint8_t v___x_1035_; 
v___x_1018_ = 2;
v___x_1019_ = lean_st_ref_take(v___y_649_);
v_values_1027_ = lean_ctor_get(v___x_1019_, 0);
lean_inc_ref(v_values_1027_);
v___x_1028_ = lean_box(0);
v___x_1029_ = 0;
v___x_1030_ = lean_box(v___x_1029_);
v_old_1031_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_1027_, v_z_647_, v___x_1030_);
lean_dec(v___x_1030_);
v___x_1032_ = lean_unbox(v_old_1031_);
v_new_1033_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v___x_1032_, v___x_1018_);
v___x_1034_ = lean_unbox(v_old_1031_);
lean_dec(v_old_1031_);
v___x_1035_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_1034_, v_new_1033_);
if (v___x_1035_ == 0)
{
lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1045_; 
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1045_ == 0)
{
lean_object* v_unused_1046_; 
v_unused_1046_ = lean_ctor_get(v___x_1019_, 0);
lean_dec(v_unused_1046_);
v___x_1037_ = v___x_1019_;
v_isShared_1038_ = v_isSharedCheck_1045_;
goto v_resetjp_1036_;
}
else
{
lean_dec(v___x_1019_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1045_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
uint8_t v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1043_; 
v___x_1039_ = 1;
v___x_1040_ = lean_box(v_new_1033_);
v___x_1041_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_values_1027_, v_z_647_, v___x_1040_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v___x_1041_);
v___x_1043_ = v___x_1037_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1041_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
lean_ctor_set_uint8(v___x_1043_, sizeof(void*)*1, v___x_1039_);
v_fst_1021_ = v___x_1028_;
v_snd_1022_ = v___x_1043_;
goto v___jp_1020_;
}
}
}
else
{
lean_dec_ref(v_values_1027_);
lean_dec(v_z_647_);
v_fst_1021_ = v___x_1028_;
v_snd_1022_ = v___x_1019_;
goto v___jp_1020_;
}
v___jp_1020_:
{
lean_object* v___x_1023_; lean_object* v___x_1025_; 
v___x_1023_ = lean_st_ref_put(v___y_649_, v_snd_1022_);
if (v_isShared_1017_ == 0)
{
lean_ctor_set(v___x_1016_, 0, v_fst_1021_);
v___x_1025_ = v___x_1016_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_fst_1021_);
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
default: 
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
lean_dec(v_v_648_);
lean_dec(v_z_647_);
v___x_1049_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__5, &l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__5_once, _init_l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___closed__5);
v___x_1050_ = l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__2(v___x_1049_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
return v___x_1050_;
}
}
v___jp_655_:
{
lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_659_ = lean_st_ref_put(v___y_656_, v_snd_658_);
v___x_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_660_, 0, v_fst_657_);
return v___x_660_;
}
v___jp_661_:
{
lean_object* v___x_664_; lean_object* v_values_665_; lean_object* v___x_666_; uint8_t v___x_667_; lean_object* v___x_668_; lean_object* v_old_669_; uint8_t v___x_670_; uint8_t v_new_671_; uint8_t v___x_672_; uint8_t v___x_673_; 
v___x_664_ = lean_st_ref_take(v___y_662_);
v_values_665_ = lean_ctor_get(v___x_664_, 0);
lean_inc_ref(v_values_665_);
v___x_666_ = lean_box(0);
v___x_667_ = 0;
v___x_668_ = lean_box(v___x_667_);
v_old_669_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_665_, v_z_647_, v___x_668_);
lean_dec(v___x_668_);
v___x_670_ = lean_unbox(v_old_669_);
v_new_671_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v___x_670_, v___y_663_);
v___x_672_ = lean_unbox(v_old_669_);
lean_dec(v_old_669_);
v___x_673_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_672_, v_new_671_);
if (v___x_673_ == 0)
{
lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_683_; 
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_683_ == 0)
{
lean_object* v_unused_684_; 
v_unused_684_ = lean_ctor_get(v___x_664_, 0);
lean_dec(v_unused_684_);
v___x_675_ = v___x_664_;
v_isShared_676_ = v_isSharedCheck_683_;
goto v_resetjp_674_;
}
else
{
lean_dec(v___x_664_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_683_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
uint8_t v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_681_; 
v___x_677_ = 1;
v___x_678_ = lean_box(v_new_671_);
v___x_679_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_values_665_, v_z_647_, v___x_678_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_679_);
v___x_681_ = v___x_675_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v___x_679_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_ctor_set_uint8(v___x_681_, sizeof(void*)*1, v___x_677_);
v___y_656_ = v___y_662_;
v_fst_657_ = v___x_666_;
v_snd_658_ = v___x_681_;
goto v___jp_655_;
}
}
}
else
{
lean_dec_ref(v_values_665_);
lean_dec(v_z_647_);
v___y_656_ = v___y_662_;
v_fst_657_ = v___x_666_;
v_snd_658_ = v___x_664_;
goto v___jp_655_;
}
}
v___jp_685_:
{
lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_689_ = lean_st_ref_put(v___y_686_, v_snd_688_);
v___x_690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_690_, 0, v_fst_687_);
return v___x_690_;
}
v___jp_691_:
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = lean_st_ref_put(v___y_692_, v_snd_694_);
v___x_696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_696_, 0, v_fst_693_);
return v___x_696_;
}
v___jp_697_:
{
lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_700_ = lean_st_ref_put(v___y_649_, v_snd_699_);
v___x_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_701_, 0, v_fst_698_);
return v___x_701_;
}
v___jp_702_:
{
lean_object* v___x_704_; lean_object* v_values_705_; lean_object* v___x_706_; uint8_t v___x_707_; lean_object* v___x_708_; lean_object* v_old_709_; uint8_t v___x_710_; uint8_t v_new_711_; uint8_t v___x_712_; uint8_t v___x_713_; 
v___x_704_ = lean_st_ref_take(v___y_649_);
v_values_705_ = lean_ctor_get(v___x_704_, 0);
lean_inc_ref(v_values_705_);
v___x_706_ = lean_box(0);
v___x_707_ = 0;
v___x_708_ = lean_box(v___x_707_);
v_old_709_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_705_, v_z_647_, v___x_708_);
lean_dec(v___x_708_);
v___x_710_ = lean_unbox(v_old_709_);
v_new_711_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v___x_710_, v___y_703_);
v___x_712_ = lean_unbox(v_old_709_);
lean_dec(v_old_709_);
v___x_713_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_712_, v_new_711_);
if (v___x_713_ == 0)
{
lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_723_; 
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_723_ == 0)
{
lean_object* v_unused_724_; 
v_unused_724_ = lean_ctor_get(v___x_704_, 0);
lean_dec(v_unused_724_);
v___x_715_ = v___x_704_;
v_isShared_716_ = v_isSharedCheck_723_;
goto v_resetjp_714_;
}
else
{
lean_dec(v___x_704_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_723_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
uint8_t v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_721_; 
v___x_717_ = 1;
v___x_718_ = lean_box(v_new_711_);
v___x_719_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_values_705_, v_z_647_, v___x_718_);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 0, v___x_719_);
v___x_721_ = v___x_715_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v___x_719_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
lean_ctor_set_uint8(v___x_721_, sizeof(void*)*1, v___x_717_);
v_fst_698_ = v___x_706_;
v_snd_699_ = v___x_721_;
goto v___jp_697_;
}
}
}
else
{
lean_dec_ref(v_values_705_);
lean_dec(v_z_647_);
v_fst_698_ = v___x_706_;
v_snd_699_ = v___x_704_;
goto v___jp_697_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue___boxed(lean_object* v_z_1051_, lean_object* v_v_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue(v_z_1051_, v_v_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
lean_dec(v___y_1057_);
lean_dec_ref(v___y_1056_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
lean_dec(v___y_1053_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0(lean_object* v_00_u03b2_1060_, lean_object* v_m_1061_, lean_object* v_a_1062_, lean_object* v_fallback_1063_){
_start:
{
lean_object* v___x_1064_; 
v___x_1064_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_m_1061_, v_a_1062_, v_fallback_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___boxed(lean_object* v_00_u03b2_1065_, lean_object* v_m_1066_, lean_object* v_a_1067_, lean_object* v_fallback_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0(v_00_u03b2_1065_, v_m_1066_, v_a_1067_, v_fallback_1068_);
lean_dec(v_fallback_1068_);
lean_dec(v_a_1067_);
lean_dec_ref(v_m_1066_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1(lean_object* v_00_u03b2_1070_, lean_object* v_m_1071_, lean_object* v_a_1072_, lean_object* v_b_1073_){
_start:
{
lean_object* v___x_1074_; 
v___x_1074_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_m_1071_, v_a_1072_, v_b_1073_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0_spec__0(lean_object* v_00_u03b2_1075_, lean_object* v_a_1076_, lean_object* v_fallback_1077_, lean_object* v_x_1078_){
_start:
{
lean_object* v___x_1079_; 
v___x_1079_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0_spec__0___redArg(v_a_1076_, v_fallback_1077_, v_x_1078_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1080_, lean_object* v_a_1081_, lean_object* v_fallback_1082_, lean_object* v_x_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0_spec__0(v_00_u03b2_1080_, v_a_1081_, v_fallback_1082_, v_x_1083_);
lean_dec(v_x_1083_);
lean_dec(v_fallback_1082_);
lean_dec(v_a_1081_);
return v_res_1084_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__2(lean_object* v_00_u03b2_1085_, lean_object* v_a_1086_, lean_object* v_x_1087_){
_start:
{
uint8_t v___x_1088_; 
v___x_1088_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__2___redArg(v_a_1086_, v_x_1087_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1089_, lean_object* v_a_1090_, lean_object* v_x_1091_){
_start:
{
uint8_t v_res_1092_; lean_object* v_r_1093_; 
v_res_1092_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__2(v_00_u03b2_1089_, v_a_1090_, v_x_1091_);
lean_dec(v_x_1091_);
lean_dec(v_a_1090_);
v_r_1093_ = lean_box(v_res_1092_);
return v_r_1093_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3(lean_object* v_00_u03b2_1094_, lean_object* v_data_1095_){
_start:
{
lean_object* v___x_1096_; 
v___x_1096_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3___redArg(v_data_1095_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__4(lean_object* v_00_u03b2_1097_, lean_object* v_a_1098_, lean_object* v_b_1099_, lean_object* v_x_1100_){
_start:
{
lean_object* v___x_1101_; 
v___x_1101_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__4___redArg(v_a_1098_, v_b_1099_, v_x_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_1102_, lean_object* v_i_1103_, lean_object* v_source_1104_, lean_object* v_target_1105_){
_start:
{
lean_object* v___x_1106_; 
v___x_1106_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3_spec__5___redArg(v_i_1103_, v_source_1104_, v_target_1105_);
return v___x_1106_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3_spec__5_spec__6(lean_object* v_00_u03b2_1107_, lean_object* v_x_1108_, lean_object* v_x_1109_){
_start:
{
lean_object* v___x_1110_; 
v___x_1110_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__3_spec__5_spec__6___redArg(v_x_1108_, v_x_1109_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__0___redArg(lean_object* v_alt_1111_, lean_object* v_f_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_){
_start:
{
switch(lean_obj_tag(v_alt_1111_))
{
case 0:
{
lean_object* v_code_1119_; lean_object* v___x_1120_; 
v_code_1119_ = lean_ctor_get(v_alt_1111_, 2);
lean_inc_ref(v_code_1119_);
lean_dec_ref_known(v_alt_1111_, 3);
lean_inc(v___y_1117_);
lean_inc_ref(v___y_1116_);
lean_inc(v___y_1115_);
lean_inc_ref(v___y_1114_);
lean_inc(v___y_1113_);
v___x_1120_ = lean_apply_7(v_f_1112_, v_code_1119_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, lean_box(0));
return v___x_1120_;
}
case 1:
{
lean_object* v_code_1121_; lean_object* v___x_1122_; 
v_code_1121_ = lean_ctor_get(v_alt_1111_, 1);
lean_inc_ref(v_code_1121_);
lean_dec_ref_known(v_alt_1111_, 2);
lean_inc(v___y_1117_);
lean_inc_ref(v___y_1116_);
lean_inc(v___y_1115_);
lean_inc_ref(v___y_1114_);
lean_inc(v___y_1113_);
v___x_1122_ = lean_apply_7(v_f_1112_, v_code_1121_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, lean_box(0));
return v___x_1122_;
}
default: 
{
lean_object* v_code_1123_; lean_object* v___x_1124_; 
v_code_1123_ = lean_ctor_get(v_alt_1111_, 0);
lean_inc_ref(v_code_1123_);
lean_dec_ref_known(v_alt_1111_, 1);
lean_inc(v___y_1117_);
lean_inc_ref(v___y_1116_);
lean_inc(v___y_1115_);
lean_inc_ref(v___y_1114_);
lean_inc(v___y_1113_);
v___x_1124_ = lean_apply_7(v_f_1112_, v_code_1123_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, lean_box(0));
return v___x_1124_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__0___redArg___boxed(lean_object* v_alt_1125_, lean_object* v_f_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__0___redArg(v_alt_1125_, v_f_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
lean_dec(v___y_1127_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__0(uint8_t v_pu_1134_, lean_object* v_alt_1135_, lean_object* v_f_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__0___redArg(v_alt_1135_, v_f_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__0___boxed(lean_object* v_pu_1144_, lean_object* v_alt_1145_, lean_object* v_f_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
uint8_t v_pu_boxed_1153_; lean_object* v_res_1154_; 
v_pu_boxed_1153_ = lean_unbox(v_pu_1144_);
v_res_1154_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__0(v_pu_boxed_1153_, v_alt_1145_, v_f_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
lean_dec(v___y_1149_);
lean_dec_ref(v___y_1148_);
lean_dec(v___y_1147_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__3___redArg(lean_object* v_as_1155_, size_t v_sz_1156_, size_t v_i_1157_, lean_object* v_b_1158_, lean_object* v___y_1159_){
_start:
{
lean_object* v_a_1162_; uint8_t v___x_1166_; 
v___x_1166_ = lean_usize_dec_lt(v_i_1157_, v_sz_1156_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; 
v___x_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1167_, 0, v_b_1158_);
return v___x_1167_;
}
else
{
lean_object* v_array_1168_; lean_object* v_start_1169_; lean_object* v_stop_1170_; uint8_t v___x_1171_; 
v_array_1168_ = lean_ctor_get(v_b_1158_, 0);
v_start_1169_ = lean_ctor_get(v_b_1158_, 1);
v_stop_1170_ = lean_ctor_get(v_b_1158_, 2);
v___x_1171_ = lean_nat_dec_lt(v_start_1169_, v_stop_1170_);
if (v___x_1171_ == 0)
{
lean_object* v___x_1172_; 
v___x_1172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1172_, 0, v_b_1158_);
return v___x_1172_;
}
else
{
lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1212_; 
lean_inc(v_stop_1170_);
lean_inc(v_start_1169_);
lean_inc_ref(v_array_1168_);
v_isSharedCheck_1212_ = !lean_is_exclusive(v_b_1158_);
if (v_isSharedCheck_1212_ == 0)
{
lean_object* v_unused_1213_; lean_object* v_unused_1214_; lean_object* v_unused_1215_; 
v_unused_1213_ = lean_ctor_get(v_b_1158_, 2);
lean_dec(v_unused_1213_);
v_unused_1214_ = lean_ctor_get(v_b_1158_, 1);
lean_dec(v_unused_1214_);
v_unused_1215_ = lean_ctor_get(v_b_1158_, 0);
lean_dec(v_unused_1215_);
v___x_1174_ = v_b_1158_;
v_isShared_1175_ = v_isSharedCheck_1212_;
goto v_resetjp_1173_;
}
else
{
lean_dec(v_b_1158_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1212_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v_a_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1181_; 
v_a_1176_ = lean_array_uget_borrowed(v_as_1155_, v_i_1157_);
v___x_1177_ = lean_array_fget(v_array_1168_, v_start_1169_);
v___x_1178_ = lean_unsigned_to_nat(1u);
v___x_1179_ = lean_nat_add(v_start_1169_, v___x_1178_);
lean_dec(v_start_1169_);
if (v_isShared_1175_ == 0)
{
lean_ctor_set(v___x_1174_, 1, v___x_1179_);
v___x_1181_ = v___x_1174_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_array_1168_);
lean_ctor_set(v_reuseFailAlloc_1211_, 1, v___x_1179_);
lean_ctor_set(v_reuseFailAlloc_1211_, 2, v_stop_1170_);
v___x_1181_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
if (lean_obj_tag(v_a_1176_) == 1)
{
lean_object* v_fvarId_1182_; lean_object* v___x_1183_; lean_object* v_values_1184_; lean_object* v_fvarId_1185_; uint8_t v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v_snd_1191_; lean_object* v_values_1193_; lean_object* v___x_1194_; lean_object* v_old_1195_; uint8_t v___x_1196_; uint8_t v___x_1197_; uint8_t v_new_1198_; uint8_t v___x_1199_; uint8_t v___x_1200_; 
v_fvarId_1182_ = lean_ctor_get(v_a_1176_, 0);
v___x_1183_ = lean_st_ref_get(v___y_1159_);
v_values_1184_ = lean_ctor_get(v___x_1183_, 0);
lean_inc_ref(v_values_1184_);
lean_dec(v___x_1183_);
v_fvarId_1185_ = lean_ctor_get(v___x_1177_, 0);
lean_inc(v_fvarId_1185_);
lean_dec(v___x_1177_);
v___x_1186_ = 0;
v___x_1187_ = lean_box(v___x_1186_);
v___x_1188_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_1184_, v_fvarId_1182_, v___x_1187_);
lean_dec(v___x_1187_);
lean_dec_ref(v_values_1184_);
v___x_1189_ = lean_st_ref_take(v___y_1159_);
v_values_1193_ = lean_ctor_get(v___x_1189_, 0);
lean_inc_ref(v_values_1193_);
v___x_1194_ = lean_box(v___x_1186_);
v_old_1195_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__0___redArg(v_values_1193_, v_fvarId_1185_, v___x_1194_);
lean_dec(v___x_1194_);
v___x_1196_ = lean_unbox(v_old_1195_);
v___x_1197_ = lean_unbox(v___x_1188_);
lean_dec(v___x_1188_);
v_new_1198_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_join(v___x_1196_, v___x_1197_);
v___x_1199_ = lean_unbox(v_old_1195_);
lean_dec(v_old_1195_);
v___x_1200_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_1199_, v_new_1198_);
if (v___x_1200_ == 0)
{
lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1209_; 
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1209_ == 0)
{
lean_object* v_unused_1210_; 
v_unused_1210_ = lean_ctor_get(v___x_1189_, 0);
lean_dec(v_unused_1210_);
v___x_1202_ = v___x_1189_;
v_isShared_1203_ = v_isSharedCheck_1209_;
goto v_resetjp_1201_;
}
else
{
lean_dec(v___x_1189_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1209_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1207_; 
v___x_1204_ = lean_box(v_new_1198_);
v___x_1205_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_values_1193_, v_fvarId_1185_, v___x_1204_);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v___x_1205_);
v___x_1207_ = v___x_1202_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v___x_1205_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
lean_ctor_set_uint8(v___x_1207_, sizeof(void*)*1, v___x_1171_);
v_snd_1191_ = v___x_1207_;
goto v___jp_1190_;
}
}
}
else
{
lean_dec_ref(v_values_1193_);
lean_dec(v_fvarId_1185_);
v_snd_1191_ = v___x_1189_;
goto v___jp_1190_;
}
v___jp_1190_:
{
lean_object* v___x_1192_; 
v___x_1192_ = lean_st_ref_put(v___y_1159_, v_snd_1191_);
v_a_1162_ = v___x_1181_;
goto v___jp_1161_;
}
}
else
{
lean_dec(v___x_1177_);
v_a_1162_ = v___x_1181_;
goto v___jp_1161_;
}
}
}
}
}
v___jp_1161_:
{
size_t v___x_1163_; size_t v___x_1164_; 
v___x_1163_ = ((size_t)1ULL);
v___x_1164_ = lean_usize_add(v_i_1157_, v___x_1163_);
v_i_1157_ = v___x_1164_;
v_b_1158_ = v_a_1162_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__3___redArg___boxed(lean_object* v_as_1216_, lean_object* v_sz_1217_, lean_object* v_i_1218_, lean_object* v_b_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_){
_start:
{
size_t v_sz_boxed_1222_; size_t v_i_boxed_1223_; lean_object* v_res_1224_; 
v_sz_boxed_1222_ = lean_unbox_usize(v_sz_1217_);
lean_dec(v_sz_1217_);
v_i_boxed_1223_ = lean_unbox_usize(v_i_1218_);
lean_dec(v_i_1218_);
v_res_1224_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__3___redArg(v_as_1216_, v_sz_boxed_1222_, v_i_boxed_1223_, v_b_1219_, v___y_1220_);
lean_dec(v___y_1220_);
lean_dec_ref(v_as_1216_);
return v_res_1224_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__1___redArg(lean_object* v_m_1225_, lean_object* v_a_1226_){
_start:
{
lean_object* v_buckets_1227_; lean_object* v___x_1228_; uint64_t v___x_1229_; uint64_t v___x_1230_; uint64_t v___x_1231_; uint64_t v_fold_1232_; uint64_t v___x_1233_; uint64_t v___x_1234_; uint64_t v___x_1235_; size_t v___x_1236_; size_t v___x_1237_; size_t v___x_1238_; size_t v___x_1239_; size_t v___x_1240_; lean_object* v___x_1241_; uint8_t v___x_1242_; 
v_buckets_1227_ = lean_ctor_get(v_m_1225_, 1);
v___x_1228_ = lean_array_get_size(v_buckets_1227_);
v___x_1229_ = l_Lean_instHashableFVarId_hash(v_a_1226_);
v___x_1230_ = 32ULL;
v___x_1231_ = lean_uint64_shift_right(v___x_1229_, v___x_1230_);
v_fold_1232_ = lean_uint64_xor(v___x_1229_, v___x_1231_);
v___x_1233_ = 16ULL;
v___x_1234_ = lean_uint64_shift_right(v_fold_1232_, v___x_1233_);
v___x_1235_ = lean_uint64_xor(v_fold_1232_, v___x_1234_);
v___x_1236_ = lean_uint64_to_usize(v___x_1235_);
v___x_1237_ = lean_usize_of_nat(v___x_1228_);
v___x_1238_ = ((size_t)1ULL);
v___x_1239_ = lean_usize_sub(v___x_1237_, v___x_1238_);
v___x_1240_ = lean_usize_land(v___x_1236_, v___x_1239_);
v___x_1241_ = lean_array_uget_borrowed(v_buckets_1227_, v___x_1240_);
v___x_1242_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1_spec__2___redArg(v_a_1226_, v___x_1241_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__1___redArg___boxed(lean_object* v_m_1243_, lean_object* v_a_1244_){
_start:
{
uint8_t v_res_1245_; lean_object* v_r_1246_; 
v_res_1245_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__1___redArg(v_m_1243_, v_a_1244_);
lean_dec(v_a_1244_);
lean_dec_ref(v_m_1243_);
v_r_1246_ = lean_box(v_res_1245_);
return v_r_1246_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__2___redArg(lean_object* v_as_1247_, size_t v_sz_1248_, size_t v_i_1249_, lean_object* v_b_1250_, lean_object* v___y_1251_){
_start:
{
lean_object* v_a_1254_; uint8_t v___x_1258_; 
v___x_1258_ = lean_usize_dec_lt(v_i_1249_, v_sz_1248_);
if (v___x_1258_ == 0)
{
lean_object* v___x_1259_; 
v___x_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1259_, 0, v_b_1250_);
return v___x_1259_;
}
else
{
lean_object* v___x_1260_; lean_object* v_a_1261_; lean_object* v___x_1262_; lean_object* v_values_1263_; lean_object* v_fvarId_1264_; uint8_t v_borrow_1265_; uint8_t v___y_1267_; uint8_t v___x_1281_; 
v___x_1260_ = lean_box(0);
v_a_1261_ = lean_array_uget_borrowed(v_as_1247_, v_i_1249_);
v___x_1262_ = lean_st_ref_get(v___y_1251_);
v_values_1263_ = lean_ctor_get(v___x_1262_, 0);
lean_inc_ref(v_values_1263_);
lean_dec(v___x_1262_);
v_fvarId_1264_ = lean_ctor_get(v_a_1261_, 0);
v_borrow_1265_ = lean_ctor_get_uint8(v_a_1261_, sizeof(void*)*3);
v___x_1281_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__1___redArg(v_values_1263_, v_fvarId_1264_);
lean_dec_ref(v_values_1263_);
if (v___x_1281_ == 0)
{
if (v_borrow_1265_ == 0)
{
uint8_t v___x_1282_; 
v___x_1282_ = 0;
v___y_1267_ = v___x_1282_;
goto v___jp_1266_;
}
else
{
uint8_t v___x_1283_; 
v___x_1283_ = 1;
v___y_1267_ = v___x_1283_;
goto v___jp_1266_;
}
}
else
{
v_a_1254_ = v___x_1260_;
goto v___jp_1253_;
}
v___jp_1266_:
{
lean_object* v___x_1268_; lean_object* v_values_1269_; uint8_t v_modified_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1280_; 
v___x_1268_ = lean_st_ref_take(v___y_1251_);
v_values_1269_ = lean_ctor_get(v___x_1268_, 0);
v_modified_1270_ = lean_ctor_get_uint8(v___x_1268_, sizeof(void*)*1);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1272_ = v___x_1268_;
v_isShared_1273_ = v_isSharedCheck_1280_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_values_1269_);
lean_dec(v___x_1268_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1280_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1277_; 
v___x_1274_ = lean_box(v___y_1267_);
lean_inc(v_fvarId_1264_);
v___x_1275_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_values_1269_, v_fvarId_1264_, v___x_1274_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___x_1275_);
v___x_1277_ = v___x_1272_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v___x_1275_);
lean_ctor_set_uint8(v_reuseFailAlloc_1279_, sizeof(void*)*1, v_modified_1270_);
v___x_1277_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
lean_object* v___x_1278_; 
v___x_1278_ = lean_st_ref_put(v___y_1251_, v___x_1277_);
v_a_1254_ = v___x_1260_;
goto v___jp_1253_;
}
}
}
}
v___jp_1253_:
{
size_t v___x_1255_; size_t v___x_1256_; 
v___x_1255_ = ((size_t)1ULL);
v___x_1256_ = lean_usize_add(v_i_1249_, v___x_1255_);
v_i_1249_ = v___x_1256_;
v_b_1250_ = v_a_1254_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__2___redArg___boxed(lean_object* v_as_1284_, lean_object* v_sz_1285_, lean_object* v_i_1286_, lean_object* v_b_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_){
_start:
{
size_t v_sz_boxed_1290_; size_t v_i_boxed_1291_; lean_object* v_res_1292_; 
v_sz_boxed_1290_ = lean_unbox_usize(v_sz_1285_);
lean_dec(v_sz_1285_);
v_i_boxed_1291_ = lean_unbox_usize(v_i_1286_);
lean_dec(v_i_1286_);
v_res_1292_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__2___redArg(v_as_1284_, v_sz_boxed_1290_, v_i_boxed_1291_, v_b_1287_, v___y_1288_);
lean_dec(v___y_1288_);
lean_dec_ref(v_as_1284_);
return v_res_1292_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__1(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1294_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__2));
v___x_1295_ = lean_unsigned_to_nat(58u);
v___x_1296_ = lean_unsigned_to_nat(96u);
v___x_1297_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__0));
v___x_1298_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__0));
v___x_1299_ = l_mkPanicMessageWithDecl(v___x_1298_, v___x_1297_, v___x_1296_, v___x_1295_, v___x_1294_);
return v___x_1299_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__2(void){
_start:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1300_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__2));
v___x_1301_ = lean_unsigned_to_nat(61u);
v___x_1302_ = lean_unsigned_to_nat(104u);
v___x_1303_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__0));
v___x_1304_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__0));
v___x_1305_ = l_mkPanicMessageWithDecl(v___x_1304_, v___x_1303_, v___x_1302_, v___x_1301_, v___x_1300_);
return v___x_1305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode(lean_object* v_code_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_){
_start:
{
switch(lean_obj_tag(v_code_1306_))
{
case 0:
{
lean_object* v_decl_1313_; lean_object* v_k_1314_; lean_object* v_fvarId_1315_; lean_object* v_value_1316_; lean_object* v___x_1317_; 
v_decl_1313_ = lean_ctor_get(v_code_1306_, 0);
lean_inc_ref(v_decl_1313_);
v_k_1314_ = lean_ctor_get(v_code_1306_, 1);
lean_inc_ref(v_k_1314_);
lean_dec_ref_known(v_code_1306_, 2);
v_fvarId_1315_ = lean_ctor_get(v_decl_1313_, 0);
lean_inc(v_fvarId_1315_);
v_value_1316_ = lean_ctor_get(v_decl_1313_, 3);
lean_inc(v_value_1316_);
lean_dec_ref(v_decl_1313_);
v___x_1317_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue(v_fvarId_1315_, v_value_1316_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_dec_ref_known(v___x_1317_, 1);
v_code_1306_ = v_k_1314_;
goto _start;
}
else
{
lean_dec_ref(v_k_1314_);
return v___x_1317_;
}
}
case 2:
{
lean_object* v_decl_1319_; lean_object* v_k_1320_; lean_object* v_params_1321_; lean_object* v_value_1322_; lean_object* v___x_1323_; size_t v_sz_1324_; size_t v___x_1325_; lean_object* v___x_1326_; 
v_decl_1319_ = lean_ctor_get(v_code_1306_, 0);
lean_inc_ref(v_decl_1319_);
v_k_1320_ = lean_ctor_get(v_code_1306_, 1);
lean_inc_ref(v_k_1320_);
lean_dec_ref_known(v_code_1306_, 2);
v_params_1321_ = lean_ctor_get(v_decl_1319_, 2);
lean_inc_ref(v_params_1321_);
v_value_1322_ = lean_ctor_get(v_decl_1319_, 4);
lean_inc_ref(v_value_1322_);
lean_dec_ref(v_decl_1319_);
v___x_1323_ = lean_box(0);
v_sz_1324_ = lean_array_size(v_params_1321_);
v___x_1325_ = ((size_t)0ULL);
v___x_1326_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__2___redArg(v_params_1321_, v_sz_1324_, v___x_1325_, v___x_1323_, v___y_1307_);
lean_dec_ref(v_params_1321_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v___x_1327_; 
lean_dec_ref_known(v___x_1326_, 1);
v___x_1327_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode(v_k_1320_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
if (lean_obj_tag(v___x_1327_) == 0)
{
lean_dec_ref_known(v___x_1327_, 1);
v_code_1306_ = v_value_1322_;
goto _start;
}
else
{
lean_dec_ref(v_value_1322_);
return v___x_1327_;
}
}
else
{
lean_dec_ref(v_value_1322_);
lean_dec_ref(v_k_1320_);
return v___x_1326_;
}
}
case 3:
{
lean_object* v_fvarId_1329_; lean_object* v_args_1330_; uint8_t v___x_1331_; lean_object* v___x_1332_; 
v_fvarId_1329_ = lean_ctor_get(v_code_1306_, 0);
lean_inc(v_fvarId_1329_);
v_args_1330_ = lean_ctor_get(v_code_1306_, 1);
lean_inc_ref(v_args_1330_);
lean_dec_ref_known(v_code_1306_, 2);
v___x_1331_ = 1;
v___x_1332_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_1331_, v_fvarId_1329_, v___y_1309_);
lean_dec(v_fvarId_1329_);
if (lean_obj_tag(v___x_1332_) == 0)
{
lean_object* v_a_1333_; 
v_a_1333_ = lean_ctor_get(v___x_1332_, 0);
lean_inc(v_a_1333_);
lean_dec_ref_known(v___x_1332_, 1);
if (lean_obj_tag(v_a_1333_) == 1)
{
lean_object* v_val_1334_; lean_object* v_params_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; size_t v_sz_1339_; size_t v___x_1340_; lean_object* v___x_1341_; 
v_val_1334_ = lean_ctor_get(v_a_1333_, 0);
lean_inc(v_val_1334_);
lean_dec_ref_known(v_a_1333_, 1);
v_params_1335_ = lean_ctor_get(v_val_1334_, 2);
lean_inc_ref(v_params_1335_);
lean_dec(v_val_1334_);
v___x_1336_ = lean_unsigned_to_nat(0u);
v___x_1337_ = lean_array_get_size(v_params_1335_);
v___x_1338_ = l_Array_toSubarray___redArg(v_params_1335_, v___x_1336_, v___x_1337_);
v_sz_1339_ = lean_array_size(v_args_1330_);
v___x_1340_ = ((size_t)0ULL);
v___x_1341_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__3___redArg(v_args_1330_, v_sz_1339_, v___x_1340_, v___x_1338_, v___y_1307_);
lean_dec_ref(v_args_1330_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1349_; 
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1349_ == 0)
{
lean_object* v_unused_1350_; 
v_unused_1350_ = lean_ctor_get(v___x_1341_, 0);
lean_dec(v_unused_1350_);
v___x_1343_ = v___x_1341_;
v_isShared_1344_ = v_isSharedCheck_1349_;
goto v_resetjp_1342_;
}
else
{
lean_dec(v___x_1341_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1349_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1345_; lean_object* v___x_1347_; 
v___x_1345_ = lean_box(0);
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 0, v___x_1345_);
v___x_1347_ = v___x_1343_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v___x_1345_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
v_a_1351_ = lean_ctor_get(v___x_1341_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1341_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1341_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
else
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
lean_dec(v_a_1333_);
lean_dec_ref(v_args_1330_);
v___x_1359_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__1, &l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__1_once, _init_l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__1);
v___x_1360_ = l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__2(v___x_1359_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
return v___x_1360_;
}
}
else
{
lean_object* v_a_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1368_; 
lean_dec_ref(v_args_1330_);
v_a_1361_ = lean_ctor_get(v___x_1332_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1332_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1363_ = v___x_1332_;
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_a_1361_);
lean_dec(v___x_1332_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1366_; 
if (v_isShared_1364_ == 0)
{
v___x_1366_ = v___x_1363_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v_a_1361_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
return v___x_1366_;
}
}
}
}
case 4:
{
lean_object* v_cases_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1391_; 
v_cases_1369_ = lean_ctor_get(v_code_1306_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v_code_1306_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1371_ = v_code_1306_;
v_isShared_1372_ = v_isSharedCheck_1391_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_cases_1369_);
lean_dec(v_code_1306_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1391_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v_alts_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; uint8_t v___x_1377_; 
v_alts_1373_ = lean_ctor_get(v_cases_1369_, 3);
lean_inc_ref(v_alts_1373_);
lean_dec_ref(v_cases_1369_);
v___x_1374_ = lean_unsigned_to_nat(0u);
v___x_1375_ = lean_array_get_size(v_alts_1373_);
v___x_1376_ = lean_box(0);
v___x_1377_ = lean_nat_dec_lt(v___x_1374_, v___x_1375_);
if (v___x_1377_ == 0)
{
lean_object* v___x_1379_; 
lean_dec_ref(v_alts_1373_);
if (v_isShared_1372_ == 0)
{
lean_ctor_set_tag(v___x_1371_, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1376_);
v___x_1379_ = v___x_1371_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v___x_1376_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
return v___x_1379_;
}
}
else
{
uint8_t v___x_1381_; 
v___x_1381_ = lean_nat_dec_le(v___x_1375_, v___x_1375_);
if (v___x_1381_ == 0)
{
if (v___x_1377_ == 0)
{
lean_object* v___x_1383_; 
lean_dec_ref(v_alts_1373_);
if (v_isShared_1372_ == 0)
{
lean_ctor_set_tag(v___x_1371_, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1376_);
v___x_1383_ = v___x_1371_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1376_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
else
{
size_t v___x_1385_; size_t v___x_1386_; lean_object* v___x_1387_; 
lean_del_object(v___x_1371_);
v___x_1385_ = ((size_t)0ULL);
v___x_1386_ = lean_usize_of_nat(v___x_1375_);
v___x_1387_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__4(v_alts_1373_, v___x_1385_, v___x_1386_, v___x_1376_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
lean_dec_ref(v_alts_1373_);
return v___x_1387_;
}
}
else
{
size_t v___x_1388_; size_t v___x_1389_; lean_object* v___x_1390_; 
lean_del_object(v___x_1371_);
v___x_1388_ = ((size_t)0ULL);
v___x_1389_ = lean_usize_of_nat(v___x_1375_);
v___x_1390_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__4(v_alts_1373_, v___x_1388_, v___x_1389_, v___x_1376_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
lean_dec_ref(v_alts_1373_);
return v___x_1390_;
}
}
}
}
case 5:
{
lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1399_; 
v_isSharedCheck_1399_ = !lean_is_exclusive(v_code_1306_);
if (v_isSharedCheck_1399_ == 0)
{
lean_object* v_unused_1400_; 
v_unused_1400_ = lean_ctor_get(v_code_1306_, 0);
lean_dec(v_unused_1400_);
v___x_1393_ = v_code_1306_;
v_isShared_1394_ = v_isSharedCheck_1399_;
goto v_resetjp_1392_;
}
else
{
lean_dec(v_code_1306_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1399_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1395_; lean_object* v___x_1397_; 
v___x_1395_ = lean_box(0);
if (v_isShared_1394_ == 0)
{
lean_ctor_set_tag(v___x_1393_, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1395_);
v___x_1397_ = v___x_1393_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1398_; 
v_reuseFailAlloc_1398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1398_, 0, v___x_1395_);
v___x_1397_ = v_reuseFailAlloc_1398_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
return v___x_1397_;
}
}
}
case 6:
{
lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1408_; 
v_isSharedCheck_1408_ = !lean_is_exclusive(v_code_1306_);
if (v_isSharedCheck_1408_ == 0)
{
lean_object* v_unused_1409_; 
v_unused_1409_ = lean_ctor_get(v_code_1306_, 0);
lean_dec(v_unused_1409_);
v___x_1402_ = v_code_1306_;
v_isShared_1403_ = v_isSharedCheck_1408_;
goto v_resetjp_1401_;
}
else
{
lean_dec(v_code_1306_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1408_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v___x_1404_; lean_object* v___x_1406_; 
v___x_1404_ = lean_box(0);
if (v_isShared_1403_ == 0)
{
lean_ctor_set_tag(v___x_1402_, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1404_);
v___x_1406_ = v___x_1402_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v___x_1404_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
}
case 8:
{
lean_object* v_k_1410_; 
v_k_1410_ = lean_ctor_get(v_code_1306_, 3);
lean_inc_ref(v_k_1410_);
lean_dec_ref_known(v_code_1306_, 4);
v_code_1306_ = v_k_1410_;
goto _start;
}
case 9:
{
lean_object* v_k_1412_; 
v_k_1412_ = lean_ctor_get(v_code_1306_, 5);
lean_inc_ref(v_k_1412_);
lean_dec_ref_known(v_code_1306_, 6);
v_code_1306_ = v_k_1412_;
goto _start;
}
default: 
{
lean_object* v___x_1414_; lean_object* v___x_1415_; 
lean_dec_ref(v_code_1306_);
v___x_1414_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__2, &l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__2_once, _init_l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___closed__2);
v___x_1415_ = l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__2(v___x_1414_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
return v___x_1415_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___boxed(lean_object* v_code_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_){
_start:
{
lean_object* v_res_1423_; 
v_res_1423_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode(v_code_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_);
lean_dec(v___y_1421_);
lean_dec_ref(v___y_1420_);
lean_dec(v___y_1419_);
lean_dec_ref(v___y_1418_);
lean_dec(v___y_1417_);
return v_res_1423_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__4(lean_object* v_as_1424_, size_t v_i_1425_, size_t v_stop_1426_, lean_object* v_b_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_){
_start:
{
uint8_t v___x_1434_; 
v___x_1434_ = lean_usize_dec_eq(v_i_1425_, v_stop_1426_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1435_ = lean_array_uget_borrowed(v_as_1424_, v_i_1425_);
v___x_1436_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode___boxed), 7, 0);
lean_inc(v___x_1435_);
v___x_1437_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__0___redArg(v___x_1435_, v___x_1436_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; size_t v___x_1439_; size_t v___x_1440_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
lean_inc(v_a_1438_);
lean_dec_ref_known(v___x_1437_, 1);
v___x_1439_ = ((size_t)1ULL);
v___x_1440_ = lean_usize_add(v_i_1425_, v___x_1439_);
v_i_1425_ = v___x_1440_;
v_b_1427_ = v_a_1438_;
goto _start;
}
else
{
return v___x_1437_;
}
}
else
{
lean_object* v___x_1442_; 
v___x_1442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1442_, 0, v_b_1427_);
return v___x_1442_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__4___boxed(lean_object* v_as_1443_, lean_object* v_i_1444_, lean_object* v_stop_1445_, lean_object* v_b_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
size_t v_i_boxed_1453_; size_t v_stop_boxed_1454_; lean_object* v_res_1455_; 
v_i_boxed_1453_ = lean_unbox_usize(v_i_1444_);
lean_dec(v_i_1444_);
v_stop_boxed_1454_ = lean_unbox_usize(v_stop_1445_);
lean_dec(v_stop_1445_);
v_res_1455_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__4(v_as_1443_, v_i_boxed_1453_, v_stop_boxed_1454_, v_b_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec(v___y_1449_);
lean_dec_ref(v___y_1448_);
lean_dec(v___y_1447_);
lean_dec_ref(v_as_1443_);
return v_res_1455_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__1(lean_object* v_00_u03b2_1456_, lean_object* v_m_1457_, lean_object* v_a_1458_){
_start:
{
uint8_t v___x_1459_; 
v___x_1459_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__1___redArg(v_m_1457_, v_a_1458_);
return v___x_1459_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__1___boxed(lean_object* v_00_u03b2_1460_, lean_object* v_m_1461_, lean_object* v_a_1462_){
_start:
{
uint8_t v_res_1463_; lean_object* v_r_1464_; 
v_res_1463_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__1(v_00_u03b2_1460_, v_m_1461_, v_a_1462_);
lean_dec(v_a_1462_);
lean_dec_ref(v_m_1461_);
v_r_1464_ = lean_box(v_res_1463_);
return v_r_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__2(lean_object* v_as_1465_, size_t v_sz_1466_, size_t v_i_1467_, lean_object* v_b_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_){
_start:
{
lean_object* v___x_1475_; 
v___x_1475_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__2___redArg(v_as_1465_, v_sz_1466_, v_i_1467_, v_b_1468_, v___y_1469_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__2___boxed(lean_object* v_as_1476_, lean_object* v_sz_1477_, lean_object* v_i_1478_, lean_object* v_b_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_){
_start:
{
size_t v_sz_boxed_1486_; size_t v_i_boxed_1487_; lean_object* v_res_1488_; 
v_sz_boxed_1486_ = lean_unbox_usize(v_sz_1477_);
lean_dec(v_sz_1477_);
v_i_boxed_1487_ = lean_unbox_usize(v_i_1478_);
lean_dec(v_i_1478_);
v_res_1488_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__2(v_as_1476_, v_sz_boxed_1486_, v_i_boxed_1487_, v_b_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_);
lean_dec(v___y_1484_);
lean_dec_ref(v___y_1483_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec(v___y_1480_);
lean_dec_ref(v_as_1476_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__3(lean_object* v_as_1489_, size_t v_sz_1490_, size_t v_i_1491_, lean_object* v_b_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_){
_start:
{
lean_object* v___x_1499_; 
v___x_1499_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__3___redArg(v_as_1489_, v_sz_1490_, v_i_1491_, v_b_1492_, v___y_1493_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__3___boxed(lean_object* v_as_1500_, lean_object* v_sz_1501_, lean_object* v_i_1502_, lean_object* v_b_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_){
_start:
{
size_t v_sz_boxed_1510_; size_t v_i_boxed_1511_; lean_object* v_res_1512_; 
v_sz_boxed_1510_ = lean_unbox_usize(v_sz_1501_);
lean_dec(v_sz_1501_);
v_i_boxed_1511_ = lean_unbox_usize(v_i_1502_);
lean_dec(v_i_1502_);
v_res_1512_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode_spec__3(v_as_1500_, v_sz_boxed_1510_, v_i_boxed_1511_, v_b_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_);
lean_dec(v___y_1508_);
lean_dec_ref(v___y_1507_);
lean_dec(v___y_1506_);
lean_dec_ref(v___y_1505_);
lean_dec(v___y_1504_);
lean_dec_ref(v_as_1500_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_loop(lean_object* v_decl_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_){
_start:
{
lean_object* v___y_1521_; lean_object* v___y_1522_; lean_object* v___y_1523_; lean_object* v___y_1524_; lean_object* v___y_1525_; lean_object* v___x_1531_; lean_object* v_values_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1544_; 
v___x_1531_ = lean_st_ref_take(v___y_1514_);
v_values_1532_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1534_ = v___x_1531_;
v_isShared_1535_ = v_isSharedCheck_1544_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_values_1532_);
lean_dec(v___x_1531_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1544_;
goto v_resetjp_1533_;
}
v___jp_1520_:
{
lean_object* v___x_1526_; uint8_t v_modified_1527_; 
v___x_1526_ = lean_st_ref_get(v___y_1521_);
v_modified_1527_ = lean_ctor_get_uint8(v___x_1526_, sizeof(void*)*1);
lean_dec(v___x_1526_);
if (v_modified_1527_ == 0)
{
lean_object* v___x_1528_; lean_object* v___x_1529_; 
lean_dec_ref(v_decl_1513_);
v___x_1528_ = lean_box(0);
v___x_1529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1529_, 0, v___x_1528_);
return v___x_1529_;
}
else
{
v___y_1514_ = v___y_1521_;
v___y_1515_ = v___y_1522_;
v___y_1516_ = v___y_1523_;
v___y_1517_ = v___y_1524_;
v___y_1518_ = v___y_1525_;
goto _start;
}
}
v_resetjp_1533_:
{
uint8_t v___x_1536_; lean_object* v___x_1538_; 
v___x_1536_ = 0;
if (v_isShared_1535_ == 0)
{
v___x_1538_ = v___x_1534_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_values_1532_);
v___x_1538_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
lean_object* v___x_1539_; lean_object* v_value_1540_; 
lean_ctor_set_uint8(v___x_1538_, sizeof(void*)*1, v___x_1536_);
v___x_1539_ = lean_st_ref_put(v___y_1514_, v___x_1538_);
v_value_1540_ = lean_ctor_get(v_decl_1513_, 1);
if (lean_obj_tag(v_value_1540_) == 0)
{
lean_object* v_code_1541_; lean_object* v___x_1542_; 
v_code_1541_ = lean_ctor_get(v_value_1540_, 0);
lean_inc_ref(v_code_1541_);
v___x_1542_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectCode(v_code_1541_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
if (lean_obj_tag(v___x_1542_) == 0)
{
lean_dec_ref_known(v___x_1542_, 1);
v___y_1521_ = v___y_1514_;
v___y_1522_ = v___y_1515_;
v___y_1523_ = v___y_1516_;
v___y_1524_ = v___y_1517_;
v___y_1525_ = v___y_1518_;
goto v___jp_1520_;
}
else
{
lean_dec_ref(v_decl_1513_);
return v___x_1542_;
}
}
else
{
v___y_1521_ = v___y_1514_;
v___y_1522_ = v___y_1515_;
v___y_1523_ = v___y_1516_;
v___y_1524_ = v___y_1517_;
v___y_1525_ = v___y_1518_;
goto v___jp_1520_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_loop___boxed(lean_object* v_decl_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_loop(v_decl_1545_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
lean_dec(v___y_1548_);
lean_dec_ref(v___y_1547_);
lean_dec(v___y_1546_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl_spec__0___redArg(lean_object* v_as_1553_, size_t v_sz_1554_, size_t v_i_1555_, lean_object* v_b_1556_, lean_object* v___y_1557_){
_start:
{
uint8_t v___x_1559_; 
v___x_1559_ = lean_usize_dec_lt(v_i_1555_, v_sz_1554_);
if (v___x_1559_ == 0)
{
lean_object* v___x_1560_; 
v___x_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1560_, 0, v_b_1556_);
return v___x_1560_;
}
else
{
lean_object* v_a_1561_; uint8_t v_borrow_1562_; lean_object* v___x_1563_; uint8_t v___y_1565_; 
v_a_1561_ = lean_array_uget_borrowed(v_as_1553_, v_i_1555_);
v_borrow_1562_ = lean_ctor_get_uint8(v_a_1561_, sizeof(void*)*3);
v___x_1563_ = lean_box(0);
if (v_borrow_1562_ == 0)
{
uint8_t v___x_1583_; 
v___x_1583_ = 3;
v___y_1565_ = v___x_1583_;
goto v___jp_1564_;
}
else
{
uint8_t v___x_1584_; 
v___x_1584_ = 1;
v___y_1565_ = v___x_1584_;
goto v___jp_1564_;
}
v___jp_1564_:
{
lean_object* v___x_1566_; lean_object* v_values_1567_; uint8_t v_modified_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1582_; 
v___x_1566_ = lean_st_ref_take(v___y_1557_);
v_values_1567_ = lean_ctor_get(v___x_1566_, 0);
v_modified_1568_ = lean_ctor_get_uint8(v___x_1566_, sizeof(void*)*1);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1566_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1570_ = v___x_1566_;
v_isShared_1571_ = v_isSharedCheck_1582_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_values_1567_);
lean_dec(v___x_1566_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1582_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v_fvarId_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1576_; 
v_fvarId_1572_ = lean_ctor_get(v_a_1561_, 0);
v___x_1573_ = lean_box(v___y_1565_);
lean_inc(v_fvarId_1572_);
v___x_1574_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_collectLetValue_spec__1___redArg(v_values_1567_, v_fvarId_1572_, v___x_1573_);
if (v_isShared_1571_ == 0)
{
lean_ctor_set(v___x_1570_, 0, v___x_1574_);
v___x_1576_ = v___x_1570_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v___x_1574_);
lean_ctor_set_uint8(v_reuseFailAlloc_1581_, sizeof(void*)*1, v_modified_1568_);
v___x_1576_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
lean_object* v___x_1577_; size_t v___x_1578_; size_t v___x_1579_; 
v___x_1577_ = lean_st_ref_put(v___y_1557_, v___x_1576_);
v___x_1578_ = ((size_t)1ULL);
v___x_1579_ = lean_usize_add(v_i_1555_, v___x_1578_);
v_i_1555_ = v___x_1579_;
v_b_1556_ = v___x_1563_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl_spec__0___redArg___boxed(lean_object* v_as_1585_, lean_object* v_sz_1586_, lean_object* v_i_1587_, lean_object* v_b_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
size_t v_sz_boxed_1591_; size_t v_i_boxed_1592_; lean_object* v_res_1593_; 
v_sz_boxed_1591_ = lean_unbox_usize(v_sz_1586_);
lean_dec(v_sz_1586_);
v_i_boxed_1592_ = lean_unbox_usize(v_i_1587_);
lean_dec(v_i_1587_);
v_res_1593_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl_spec__0___redArg(v_as_1585_, v_sz_boxed_1591_, v_i_boxed_1592_, v_b_1588_, v___y_1589_);
lean_dec(v___y_1589_);
lean_dec_ref(v_as_1585_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl(lean_object* v_decl_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v_value_1601_; 
v_value_1601_ = lean_ctor_get(v_decl_1594_, 1);
if (lean_obj_tag(v_value_1601_) == 0)
{
lean_object* v_toSignature_1602_; lean_object* v_params_1603_; lean_object* v___x_1604_; size_t v_sz_1605_; size_t v___x_1606_; lean_object* v___x_1607_; 
v_toSignature_1602_ = lean_ctor_get(v_decl_1594_, 0);
v_params_1603_ = lean_ctor_get(v_toSignature_1602_, 3);
v___x_1604_ = lean_box(0);
v_sz_1605_ = lean_array_size(v_params_1603_);
v___x_1606_ = ((size_t)0ULL);
v___x_1607_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl_spec__0___redArg(v_params_1603_, v_sz_1605_, v___x_1606_, v___x_1604_, v___y_1595_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1614_ == 0)
{
lean_object* v_unused_1615_; 
v_unused_1615_ = lean_ctor_get(v___x_1607_, 0);
lean_dec(v_unused_1615_);
v___x_1609_ = v___x_1607_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_dec(v___x_1607_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 0, v___x_1604_);
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1604_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
else
{
return v___x_1607_;
}
}
else
{
lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1616_ = lean_box(0);
v___x_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1616_);
return v___x_1617_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl___boxed(lean_object* v_decl_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl(v_decl_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_);
lean_dec(v___y_1623_);
lean_dec_ref(v___y_1622_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
lean_dec(v___y_1619_);
lean_dec_ref(v_decl_1618_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl_spec__0(lean_object* v_as_1626_, size_t v_sz_1627_, size_t v_i_1628_, lean_object* v_b_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_){
_start:
{
lean_object* v___x_1636_; 
v___x_1636_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl_spec__0___redArg(v_as_1626_, v_sz_1627_, v_i_1628_, v_b_1629_, v___y_1630_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl_spec__0___boxed(lean_object* v_as_1637_, lean_object* v_sz_1638_, lean_object* v_i_1639_, lean_object* v_b_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_){
_start:
{
size_t v_sz_boxed_1647_; size_t v_i_boxed_1648_; lean_object* v_res_1649_; 
v_sz_boxed_1647_ = lean_unbox_usize(v_sz_1638_);
lean_dec(v_sz_1638_);
v_i_boxed_1648_ = lean_unbox_usize(v_i_1639_);
lean_dec(v_i_1639_);
v_res_1649_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl_spec__0(v_as_1637_, v_sz_boxed_1647_, v_i_boxed_1648_, v_b_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec(v___y_1641_);
lean_dec_ref(v_as_1637_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_go(lean_object* v_decl_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_){
_start:
{
lean_object* v___x_1657_; 
v___x_1657_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_initializeDecl(v_decl_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_);
if (lean_obj_tag(v___x_1657_) == 0)
{
lean_object* v___x_1658_; 
lean_dec_ref_known(v___x_1657_, 1);
v___x_1658_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_loop(v_decl_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_);
return v___x_1658_;
}
else
{
lean_dec_ref(v_decl_1650_);
return v___x_1657_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_go___boxed(lean_object* v_decl_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_){
_start:
{
lean_object* v_res_1666_; 
v_res_1666_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_go(v_decl_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_);
lean_dec(v___y_1664_);
lean_dec_ref(v___y_1663_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
lean_dec(v___y_1660_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows(lean_object* v_decl_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_){
_start:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1673_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedState_default___closed__2, &l_Lean_Compiler_LCNF_instInhabitedState_default___closed__2_once, _init_l_Lean_Compiler_LCNF_instInhabitedState_default___closed__2);
v___x_1674_ = lean_st_mk_ref(v___x_1673_);
v___x_1675_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_go(v_decl_1667_, v___x_1674_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_);
if (lean_obj_tag(v___x_1675_) == 0)
{
lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1684_; 
v_isSharedCheck_1684_ = !lean_is_exclusive(v___x_1675_);
if (v_isSharedCheck_1684_ == 0)
{
lean_object* v_unused_1685_; 
v_unused_1685_ = lean_ctor_get(v___x_1675_, 0);
lean_dec(v_unused_1685_);
v___x_1677_ = v___x_1675_;
v_isShared_1678_ = v_isSharedCheck_1684_;
goto v_resetjp_1676_;
}
else
{
lean_dec(v___x_1675_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1684_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1679_; lean_object* v_values_1680_; lean_object* v___x_1682_; 
v___x_1679_ = lean_st_ref_get(v___x_1674_);
lean_dec(v___x_1674_);
v_values_1680_ = lean_ctor_get(v___x_1679_, 0);
lean_inc_ref(v_values_1680_);
lean_dec(v___x_1679_);
if (v_isShared_1678_ == 0)
{
lean_ctor_set(v___x_1677_, 0, v_values_1680_);
v___x_1682_ = v___x_1677_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_values_1680_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
else
{
lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1693_; 
lean_dec(v___x_1674_);
v_a_1686_ = lean_ctor_get(v___x_1675_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1675_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1688_ = v___x_1675_;
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_dec(v___x_1675_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1691_; 
if (v_isShared_1689_ == 0)
{
v___x_1691_ = v___x_1688_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_a_1686_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows___boxed(lean_object* v_decl_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l_Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows(v_decl_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_);
lean_dec(v___y_1698_);
lean_dec_ref(v___y_1697_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_toBorrow(uint8_t v_x_1707_){
_start:
{
switch(v_x_1707_)
{
case 0:
{
lean_object* v___x_1708_; 
v___x_1708_ = lean_box(0);
return v___x_1708_;
}
case 1:
{
lean_object* v___x_1709_; 
v___x_1709_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_toBorrow___closed__0));
return v___x_1709_;
}
default: 
{
lean_object* v___x_1710_; 
v___x_1710_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_toBorrow___closed__1));
return v___x_1710_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_toBorrow___boxed(lean_object* v_x_1711_){
_start:
{
uint8_t v_x_41__boxed_1712_; lean_object* v_res_1713_; 
v_x_41__boxed_1712_ = lean_unbox(v_x_1711_);
v_res_1713_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_toBorrow(v_x_41__boxed_1712_);
return v_res_1713_;
}
}
LEAN_EXPORT uint8_t l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0_spec__1(lean_object* v_msg_1714_){
_start:
{
uint8_t v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; uint8_t v___x_1718_; 
v___x_1715_ = 0;
v___x_1716_ = lean_box(v___x_1715_);
v___x_1717_ = lean_panic_fn_borrowed(v___x_1716_, v_msg_1714_);
lean_dec(v___x_1716_);
v___x_1718_ = lean_unbox(v___x_1717_);
lean_dec(v___x_1717_);
return v___x_1718_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0_spec__1___boxed(lean_object* v_msg_1719_){
_start:
{
uint8_t v_res_1720_; lean_object* v_r_1721_; 
v_res_1720_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0_spec__1(v_msg_1719_);
v_r_1721_ = lean_box(v_res_1720_);
return v_r_1721_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1725_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__2));
v___x_1726_ = lean_unsigned_to_nat(11u);
v___x_1727_ = lean_unsigned_to_nat(163u);
v___x_1728_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__1));
v___x_1729_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__0));
v___x_1730_ = l_mkPanicMessageWithDecl(v___x_1729_, v___x_1728_, v___x_1727_, v___x_1726_, v___x_1725_);
return v___x_1730_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0(lean_object* v_a_1731_, lean_object* v_x_1732_){
_start:
{
if (lean_obj_tag(v_x_1732_) == 0)
{
lean_object* v___x_1733_; uint8_t v___x_1734_; 
v___x_1733_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___closed__3);
v___x_1734_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0_spec__1(v___x_1733_);
return v___x_1734_;
}
else
{
lean_object* v_key_1735_; lean_object* v_value_1736_; lean_object* v_tail_1737_; uint8_t v___x_1738_; 
v_key_1735_ = lean_ctor_get(v_x_1732_, 0);
v_value_1736_ = lean_ctor_get(v_x_1732_, 1);
v_tail_1737_ = lean_ctor_get(v_x_1732_, 2);
v___x_1738_ = l_Lean_instBEqFVarId_beq(v_key_1735_, v_a_1731_);
if (v___x_1738_ == 0)
{
v_x_1732_ = v_tail_1737_;
goto _start;
}
else
{
uint8_t v___x_1740_; 
v___x_1740_ = lean_unbox(v_value_1736_);
return v___x_1740_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0___boxed(lean_object* v_a_1741_, lean_object* v_x_1742_){
_start:
{
uint8_t v_res_1743_; lean_object* v_r_1744_; 
v_res_1743_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0(v_a_1741_, v_x_1742_);
lean_dec(v_x_1742_);
lean_dec(v_a_1741_);
v_r_1744_ = lean_box(v_res_1743_);
return v_r_1744_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0(lean_object* v_m_1745_, lean_object* v_a_1746_){
_start:
{
lean_object* v_buckets_1747_; lean_object* v___x_1748_; uint64_t v___x_1749_; uint64_t v___x_1750_; uint64_t v___x_1751_; uint64_t v_fold_1752_; uint64_t v___x_1753_; uint64_t v___x_1754_; uint64_t v___x_1755_; size_t v___x_1756_; size_t v___x_1757_; size_t v___x_1758_; size_t v___x_1759_; size_t v___x_1760_; lean_object* v___x_1761_; uint8_t v___x_1762_; 
v_buckets_1747_ = lean_ctor_get(v_m_1745_, 1);
v___x_1748_ = lean_array_get_size(v_buckets_1747_);
v___x_1749_ = l_Lean_instHashableFVarId_hash(v_a_1746_);
v___x_1750_ = 32ULL;
v___x_1751_ = lean_uint64_shift_right(v___x_1749_, v___x_1750_);
v_fold_1752_ = lean_uint64_xor(v___x_1749_, v___x_1751_);
v___x_1753_ = 16ULL;
v___x_1754_ = lean_uint64_shift_right(v_fold_1752_, v___x_1753_);
v___x_1755_ = lean_uint64_xor(v_fold_1752_, v___x_1754_);
v___x_1756_ = lean_uint64_to_usize(v___x_1755_);
v___x_1757_ = lean_usize_of_nat(v___x_1748_);
v___x_1758_ = ((size_t)1ULL);
v___x_1759_ = lean_usize_sub(v___x_1757_, v___x_1758_);
v___x_1760_ = lean_usize_land(v___x_1756_, v___x_1759_);
v___x_1761_ = lean_array_uget_borrowed(v_buckets_1747_, v___x_1760_);
v___x_1762_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0_spec__0(v_a_1746_, v___x_1761_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0___boxed(lean_object* v_m_1763_, lean_object* v_a_1764_){
_start:
{
uint8_t v_res_1765_; lean_object* v_r_1766_; 
v_res_1765_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0(v_m_1763_, v_a_1764_);
lean_dec(v_a_1764_);
lean_dec_ref(v_m_1763_);
v_r_1766_ = lean_box(v_res_1765_);
return v_r_1766_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__1___redArg(lean_object* v_values_1767_, size_t v_sz_1768_, size_t v_i_1769_, lean_object* v_bs_1770_, lean_object* v___y_1771_){
_start:
{
uint8_t v___x_1773_; 
v___x_1773_ = lean_usize_dec_lt(v_i_1769_, v_sz_1768_);
if (v___x_1773_ == 0)
{
lean_object* v___x_1774_; 
v___x_1774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1774_, 0, v_bs_1770_);
return v___x_1774_;
}
else
{
lean_object* v_v_1775_; lean_object* v_fvarId_1776_; lean_object* v___x_1777_; lean_object* v_bs_x27_1778_; lean_object* v_a_1780_; uint8_t v___x_1785_; lean_object* v___x_1786_; 
v_v_1775_ = lean_array_uget(v_bs_1770_, v_i_1769_);
v_fvarId_1776_ = lean_ctor_get(v_v_1775_, 0);
v___x_1777_ = lean_unsigned_to_nat(0u);
v_bs_x27_1778_ = lean_array_uset(v_bs_1770_, v_i_1769_, v___x_1777_);
v___x_1785_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__0(v_values_1767_, v_fvarId_1776_);
v___x_1786_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Ownedness_toBorrow(v___x_1785_);
if (lean_obj_tag(v___x_1786_) == 0)
{
v_a_1780_ = v_v_1775_;
goto v___jp_1779_;
}
else
{
lean_object* v_val_1787_; uint8_t v___x_1788_; uint8_t v___x_1789_; lean_object* v___x_1790_; 
v_val_1787_ = lean_ctor_get(v___x_1786_, 0);
lean_inc(v_val_1787_);
lean_dec_ref_known(v___x_1786_, 1);
v___x_1788_ = 1;
v___x_1789_ = lean_unbox(v_val_1787_);
lean_dec(v_val_1787_);
v___x_1790_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg(v___x_1788_, v_v_1775_, v___x_1789_, v___y_1771_);
if (lean_obj_tag(v___x_1790_) == 0)
{
lean_object* v_a_1791_; 
v_a_1791_ = lean_ctor_get(v___x_1790_, 0);
lean_inc(v_a_1791_);
lean_dec_ref_known(v___x_1790_, 1);
v_a_1780_ = v_a_1791_;
goto v___jp_1779_;
}
else
{
lean_object* v_a_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1799_; 
lean_dec_ref(v_bs_x27_1778_);
v_a_1792_ = lean_ctor_get(v___x_1790_, 0);
v_isSharedCheck_1799_ = !lean_is_exclusive(v___x_1790_);
if (v_isSharedCheck_1799_ == 0)
{
v___x_1794_ = v___x_1790_;
v_isShared_1795_ = v_isSharedCheck_1799_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_a_1792_);
lean_dec(v___x_1790_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1799_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1797_; 
if (v_isShared_1795_ == 0)
{
v___x_1797_ = v___x_1794_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v_a_1792_);
v___x_1797_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
return v___x_1797_;
}
}
}
}
v___jp_1779_:
{
size_t v___x_1781_; size_t v___x_1782_; lean_object* v___x_1783_; 
v___x_1781_ = ((size_t)1ULL);
v___x_1782_ = lean_usize_add(v_i_1769_, v___x_1781_);
v___x_1783_ = lean_array_uset(v_bs_x27_1778_, v_i_1769_, v_a_1780_);
v_i_1769_ = v___x_1782_;
v_bs_1770_ = v___x_1783_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__1___redArg___boxed(lean_object* v_values_1800_, lean_object* v_sz_1801_, lean_object* v_i_1802_, lean_object* v_bs_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_){
_start:
{
size_t v_sz_boxed_1806_; size_t v_i_boxed_1807_; lean_object* v_res_1808_; 
v_sz_boxed_1806_ = lean_unbox_usize(v_sz_1801_);
lean_dec(v_sz_1801_);
v_i_boxed_1807_ = lean_unbox_usize(v_i_1802_);
lean_dec(v_i_1802_);
v_res_1808_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__1___redArg(v_values_1800_, v_sz_boxed_1806_, v_i_boxed_1807_, v_bs_1803_, v___y_1804_);
lean_dec(v___y_1804_);
lean_dec_ref(v_values_1800_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams(lean_object* v_values_1809_, lean_object* v_ps_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_){
_start:
{
size_t v_sz_1816_; size_t v___x_1817_; lean_object* v___x_1818_; 
v_sz_1816_ = lean_array_size(v_ps_1810_);
v___x_1817_ = ((size_t)0ULL);
v___x_1818_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__1___redArg(v_values_1809_, v_sz_1816_, v___x_1817_, v_ps_1810_, v___y_1812_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams___boxed(lean_object* v_values_1819_, lean_object* v_ps_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_){
_start:
{
lean_object* v_res_1826_; 
v_res_1826_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams(v_values_1819_, v_ps_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_);
lean_dec(v___y_1824_);
lean_dec_ref(v___y_1823_);
lean_dec(v___y_1822_);
lean_dec_ref(v___y_1821_);
lean_dec_ref(v_values_1819_);
return v_res_1826_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__1(lean_object* v_values_1827_, size_t v_sz_1828_, size_t v_i_1829_, lean_object* v_bs_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_){
_start:
{
lean_object* v___x_1836_; 
v___x_1836_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__1___redArg(v_values_1827_, v_sz_1828_, v_i_1829_, v_bs_1830_, v___y_1832_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__1___boxed(lean_object* v_values_1837_, lean_object* v_sz_1838_, lean_object* v_i_1839_, lean_object* v_bs_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_){
_start:
{
size_t v_sz_boxed_1846_; size_t v_i_boxed_1847_; lean_object* v_res_1848_; 
v_sz_boxed_1846_ = lean_unbox_usize(v_sz_1838_);
lean_dec(v_sz_1838_);
v_i_boxed_1847_ = lean_unbox_usize(v_i_1839_);
lean_dec(v_i_1839_);
v_res_1848_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams_spec__1(v_values_1837_, v_sz_boxed_1846_, v_i_boxed_1847_, v_bs_1840_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_);
lean_dec(v___y_1844_);
lean_dec_ref(v___y_1843_);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
lean_dec_ref(v_values_1837_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__0___redArg(lean_object* v_alt_1849_, lean_object* v_f_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_){
_start:
{
lean_object* v___y_1857_; 
switch(lean_obj_tag(v_alt_1849_))
{
case 0:
{
lean_object* v_code_1876_; 
v_code_1876_ = lean_ctor_get(v_alt_1849_, 2);
lean_inc_ref(v_code_1876_);
v___y_1857_ = v_code_1876_;
goto v___jp_1856_;
}
case 1:
{
lean_object* v_code_1877_; 
v_code_1877_ = lean_ctor_get(v_alt_1849_, 1);
lean_inc_ref(v_code_1877_);
v___y_1857_ = v_code_1877_;
goto v___jp_1856_;
}
default: 
{
lean_object* v_code_1878_; 
v_code_1878_ = lean_ctor_get(v_alt_1849_, 0);
lean_inc_ref(v_code_1878_);
v___y_1857_ = v_code_1878_;
goto v___jp_1856_;
}
}
v___jp_1856_:
{
lean_object* v___x_1858_; 
lean_inc(v___y_1854_);
lean_inc_ref(v___y_1853_);
lean_inc(v___y_1852_);
lean_inc_ref(v___y_1851_);
v___x_1858_ = lean_apply_6(v_f_1850_, v___y_1857_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, lean_box(0));
if (lean_obj_tag(v___x_1858_) == 0)
{
lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1867_; 
v_a_1859_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1867_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1861_ = v___x_1858_;
v_isShared_1862_ = v_isSharedCheck_1867_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_dec(v___x_1858_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1867_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1863_; lean_object* v___x_1865_; 
v___x_1863_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_1849_, v_a_1859_);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 0, v___x_1863_);
v___x_1865_ = v___x_1861_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v___x_1863_);
v___x_1865_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
return v___x_1865_;
}
}
}
else
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1875_; 
lean_dec_ref(v_alt_1849_);
v_a_1868_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1870_ = v___x_1858_;
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1858_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1873_; 
if (v_isShared_1871_ == 0)
{
v___x_1873_ = v___x_1870_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_a_1868_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__0___redArg___boxed(lean_object* v_alt_1879_, lean_object* v_f_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_){
_start:
{
lean_object* v_res_1886_; 
v_res_1886_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__0___redArg(v_alt_1879_, v_f_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_);
lean_dec(v___y_1884_);
lean_dec_ref(v___y_1883_);
lean_dec(v___y_1882_);
lean_dec_ref(v___y_1881_);
return v_res_1886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__0(uint8_t v_pu_1887_, lean_object* v_alt_1888_, lean_object* v_f_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
lean_object* v___x_1895_; 
v___x_1895_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__0___redArg(v_alt_1888_, v_f_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__0___boxed(lean_object* v_pu_1896_, lean_object* v_alt_1897_, lean_object* v_f_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_){
_start:
{
uint8_t v_pu_boxed_1904_; lean_object* v_res_1905_; 
v_pu_boxed_1904_ = lean_unbox(v_pu_1896_);
v_res_1905_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__0(v_pu_boxed_1904_, v_alt_1897_, v_f_1898_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_);
lean_dec(v___y_1902_);
lean_dec_ref(v___y_1901_);
lean_dec(v___y_1900_);
lean_dec_ref(v___y_1899_);
return v_res_1905_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1906_; 
v___x_1906_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_1906_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__2(lean_object* v_msg_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_){
_start:
{
lean_object* v___f_1913_; lean_object* v___f_1914_; lean_object* v___f_1915_; lean_object* v___f_1916_; lean_object* v___f_1917_; lean_object* v___f_1918_; lean_object* v___f_1919_; lean_object* v___f_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v_toApplicative_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1958_; 
v___f_1913_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__0));
v___f_1914_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__1));
v___f_1915_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__2));
v___f_1916_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__3));
v___f_1917_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__4));
v___f_1918_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1918_, 0, v___f_1917_);
lean_closure_set(v___f_1918_, 1, v___f_1916_);
v___f_1919_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1919_, 0, v___f_1916_);
v___f_1920_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__5));
v___x_1921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1921_, 0, v___f_1913_);
lean_ctor_set(v___x_1921_, 1, v___f_1914_);
v___x_1922_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1921_);
lean_ctor_set(v___x_1922_, 1, v___f_1915_);
lean_ctor_set(v___x_1922_, 2, v___f_1918_);
lean_ctor_set(v___x_1922_, 3, v___f_1919_);
lean_ctor_set(v___x_1922_, 4, v___f_1920_);
v___x_1923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1923_, 0, v___x_1922_);
lean_ctor_set(v___x_1923_, 1, v___f_1916_);
v___x_1924_ = l_StateRefT_x27_instMonad___redArg(v___x_1923_);
v_toApplicative_1925_ = lean_ctor_get(v___x_1924_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1958_ == 0)
{
lean_object* v_unused_1959_; 
v_unused_1959_ = lean_ctor_get(v___x_1924_, 1);
lean_dec(v_unused_1959_);
v___x_1927_ = v___x_1924_;
v_isShared_1928_ = v_isSharedCheck_1958_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_toApplicative_1925_);
lean_dec(v___x_1924_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1958_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v_toFunctor_1929_; lean_object* v_toSeq_1930_; lean_object* v_toSeqLeft_1931_; lean_object* v_toSeqRight_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1956_; 
v_toFunctor_1929_ = lean_ctor_get(v_toApplicative_1925_, 0);
v_toSeq_1930_ = lean_ctor_get(v_toApplicative_1925_, 2);
v_toSeqLeft_1931_ = lean_ctor_get(v_toApplicative_1925_, 3);
v_toSeqRight_1932_ = lean_ctor_get(v_toApplicative_1925_, 4);
v_isSharedCheck_1956_ = !lean_is_exclusive(v_toApplicative_1925_);
if (v_isSharedCheck_1956_ == 0)
{
lean_object* v_unused_1957_; 
v_unused_1957_ = lean_ctor_get(v_toApplicative_1925_, 1);
lean_dec(v_unused_1957_);
v___x_1934_ = v_toApplicative_1925_;
v_isShared_1935_ = v_isSharedCheck_1956_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_toSeqRight_1932_);
lean_inc(v_toSeqLeft_1931_);
lean_inc(v_toSeq_1930_);
lean_inc(v_toFunctor_1929_);
lean_dec(v_toApplicative_1925_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1956_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___f_1936_; lean_object* v___f_1937_; lean_object* v___f_1938_; lean_object* v___f_1939_; lean_object* v___x_1940_; lean_object* v___f_1941_; lean_object* v___f_1942_; lean_object* v___f_1943_; lean_object* v___x_1945_; 
v___f_1936_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__6));
v___f_1937_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams_spec__0___closed__7));
lean_inc_ref(v_toFunctor_1929_);
v___f_1938_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1938_, 0, v_toFunctor_1929_);
v___f_1939_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1939_, 0, v_toFunctor_1929_);
v___x_1940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1940_, 0, v___f_1938_);
lean_ctor_set(v___x_1940_, 1, v___f_1939_);
v___f_1941_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1941_, 0, v_toSeqRight_1932_);
v___f_1942_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1942_, 0, v_toSeqLeft_1931_);
v___f_1943_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1943_, 0, v_toSeq_1930_);
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 4, v___f_1941_);
lean_ctor_set(v___x_1934_, 3, v___f_1942_);
lean_ctor_set(v___x_1934_, 2, v___f_1943_);
lean_ctor_set(v___x_1934_, 1, v___f_1936_);
lean_ctor_set(v___x_1934_, 0, v___x_1940_);
v___x_1945_ = v___x_1934_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v___x_1940_);
lean_ctor_set(v_reuseFailAlloc_1955_, 1, v___f_1936_);
lean_ctor_set(v_reuseFailAlloc_1955_, 2, v___f_1943_);
lean_ctor_set(v_reuseFailAlloc_1955_, 3, v___f_1942_);
lean_ctor_set(v_reuseFailAlloc_1955_, 4, v___f_1941_);
v___x_1945_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
lean_object* v___x_1947_; 
if (v_isShared_1928_ == 0)
{
lean_ctor_set(v___x_1927_, 1, v___f_1937_);
lean_ctor_set(v___x_1927_, 0, v___x_1945_);
v___x_1947_ = v___x_1927_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v___x_1945_);
lean_ctor_set(v_reuseFailAlloc_1954_, 1, v___f_1937_);
v___x_1947_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_3236__overap_1952_; lean_object* v___x_1953_; 
v___x_1948_ = l_StateRefT_x27_instMonad___redArg(v___x_1947_);
v___x_1949_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__2___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__2___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__2___closed__0);
v___x_1950_ = l_instInhabitedOfMonad___redArg(v___x_1948_, v___x_1949_);
v___x_1951_ = l_instInhabitedReaderT___redArg(v___x_1950_);
v___x_3236__overap_1952_ = lean_panic_fn_borrowed(v___x_1951_, v_msg_1907_);
lean_dec(v___x_1951_);
lean_inc(v___y_1911_);
lean_inc_ref(v___y_1910_);
lean_inc(v___y_1909_);
lean_inc_ref(v___y_1908_);
v___x_1953_ = lean_apply_5(v___x_3236__overap_1952_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_, lean_box(0));
return v___x_1953_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__2___boxed(lean_object* v_msg_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_){
_start:
{
lean_object* v_res_1966_; 
v_res_1966_ = l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__2(v_msg_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_);
lean_dec(v___y_1964_);
lean_dec_ref(v___y_1963_);
lean_dec(v___y_1962_);
lean_dec_ref(v___y_1961_);
return v_res_1966_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode___closed__1(void){
_start:
{
lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___x_1968_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__2));
v___x_1969_ = lean_unsigned_to_nat(61u);
v___x_1970_ = lean_unsigned_to_nat(167u);
v___x_1971_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode___closed__0));
v___x_1972_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows_getParams___closed__0));
v___x_1973_ = l_mkPanicMessageWithDecl(v___x_1972_, v___x_1971_, v___x_1970_, v___x_1969_, v___x_1968_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode(lean_object* v_values_1974_, lean_object* v_code_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_){
_start:
{
switch(lean_obj_tag(v_code_1975_))
{
case 0:
{
lean_object* v_decl_1981_; lean_object* v_k_1982_; lean_object* v___x_1983_; 
v_decl_1981_ = lean_ctor_get(v_code_1975_, 0);
v_k_1982_ = lean_ctor_get(v_code_1975_, 1);
lean_inc_ref(v_k_1982_);
v___x_1983_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode(v_values_1974_, v_k_1982_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_);
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_object* v_a_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_2006_; 
v_a_1984_ = lean_ctor_get(v___x_1983_, 0);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_1986_ = v___x_1983_;
v_isShared_1987_ = v_isSharedCheck_2006_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_a_1984_);
lean_dec(v___x_1983_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_2006_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
size_t v___x_1988_; size_t v___x_1989_; uint8_t v___x_1990_; 
v___x_1988_ = lean_ptr_addr(v_k_1982_);
v___x_1989_ = lean_ptr_addr(v_a_1984_);
v___x_1990_ = lean_usize_dec_eq(v___x_1988_, v___x_1989_);
if (v___x_1990_ == 0)
{
lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_2000_; 
lean_inc_ref(v_decl_1981_);
v_isSharedCheck_2000_ = !lean_is_exclusive(v_code_1975_);
if (v_isSharedCheck_2000_ == 0)
{
lean_object* v_unused_2001_; lean_object* v_unused_2002_; 
v_unused_2001_ = lean_ctor_get(v_code_1975_, 1);
lean_dec(v_unused_2001_);
v_unused_2002_ = lean_ctor_get(v_code_1975_, 0);
lean_dec(v_unused_2002_);
v___x_1992_ = v_code_1975_;
v_isShared_1993_ = v_isSharedCheck_2000_;
goto v_resetjp_1991_;
}
else
{
lean_dec(v_code_1975_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_2000_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1995_; 
if (v_isShared_1993_ == 0)
{
lean_ctor_set(v___x_1992_, 1, v_a_1984_);
v___x_1995_ = v___x_1992_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v_decl_1981_);
lean_ctor_set(v_reuseFailAlloc_1999_, 1, v_a_1984_);
v___x_1995_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
lean_object* v___x_1997_; 
if (v_isShared_1987_ == 0)
{
lean_ctor_set(v___x_1986_, 0, v___x_1995_);
v___x_1997_ = v___x_1986_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v___x_1995_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
return v___x_1997_;
}
}
}
}
else
{
lean_object* v___x_2004_; 
lean_dec(v_a_1984_);
if (v_isShared_1987_ == 0)
{
lean_ctor_set(v___x_1986_, 0, v_code_1975_);
v___x_2004_ = v___x_1986_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_code_1975_);
v___x_2004_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
return v___x_2004_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1975_, 2);
return v___x_1983_;
}
}
case 2:
{
lean_object* v_decl_2007_; lean_object* v_k_2008_; lean_object* v_params_2009_; lean_object* v_type_2010_; lean_object* v_value_2011_; uint8_t v___x_2012_; lean_object* v___x_2013_; 
v_decl_2007_ = lean_ctor_get(v_code_1975_, 0);
v_k_2008_ = lean_ctor_get(v_code_1975_, 1);
v_params_2009_ = lean_ctor_get(v_decl_2007_, 2);
v_type_2010_ = lean_ctor_get(v_decl_2007_, 3);
v_value_2011_ = lean_ctor_get(v_decl_2007_, 4);
v___x_2012_ = 1;
lean_inc_ref(v_params_2009_);
v___x_2013_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams(v_values_1974_, v_params_2009_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_);
if (lean_obj_tag(v___x_2013_) == 0)
{
lean_object* v_a_2014_; lean_object* v___x_2015_; 
v_a_2014_ = lean_ctor_get(v___x_2013_, 0);
lean_inc(v_a_2014_);
lean_dec_ref_known(v___x_2013_, 1);
lean_inc_ref(v_value_2011_);
lean_inc_ref(v_values_1974_);
v___x_2015_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode(v_values_1974_, v_value_2011_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; lean_object* v___x_2017_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2016_);
lean_dec_ref_known(v___x_2015_, 1);
lean_inc_ref(v_type_2010_);
lean_inc_ref(v_decl_2007_);
v___x_2017_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_2012_, v_decl_2007_, v_type_2010_, v_a_2014_, v_a_2016_, v___y_1977_);
if (lean_obj_tag(v___x_2017_) == 0)
{
lean_object* v_a_2018_; lean_object* v___x_2019_; 
v_a_2018_ = lean_ctor_get(v___x_2017_, 0);
lean_inc(v_a_2018_);
lean_dec_ref_known(v___x_2017_, 1);
lean_inc_ref(v_k_2008_);
v___x_2019_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode(v_values_1974_, v_k_2008_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_);
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2057_; 
v_a_2020_ = lean_ctor_get(v___x_2019_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v___x_2019_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2022_ = v___x_2019_;
v_isShared_2023_ = v_isSharedCheck_2057_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___x_2019_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2057_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
size_t v___x_2024_; size_t v___x_2025_; uint8_t v___x_2026_; 
v___x_2024_ = lean_ptr_addr(v_k_2008_);
v___x_2025_ = lean_ptr_addr(v_a_2020_);
v___x_2026_ = lean_usize_dec_eq(v___x_2024_, v___x_2025_);
if (v___x_2026_ == 0)
{
lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2036_; 
v_isSharedCheck_2036_ = !lean_is_exclusive(v_code_1975_);
if (v_isSharedCheck_2036_ == 0)
{
lean_object* v_unused_2037_; lean_object* v_unused_2038_; 
v_unused_2037_ = lean_ctor_get(v_code_1975_, 1);
lean_dec(v_unused_2037_);
v_unused_2038_ = lean_ctor_get(v_code_1975_, 0);
lean_dec(v_unused_2038_);
v___x_2028_ = v_code_1975_;
v_isShared_2029_ = v_isSharedCheck_2036_;
goto v_resetjp_2027_;
}
else
{
lean_dec(v_code_1975_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2036_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___x_2031_; 
if (v_isShared_2029_ == 0)
{
lean_ctor_set(v___x_2028_, 1, v_a_2020_);
lean_ctor_set(v___x_2028_, 0, v_a_2018_);
v___x_2031_ = v___x_2028_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v_a_2018_);
lean_ctor_set(v_reuseFailAlloc_2035_, 1, v_a_2020_);
v___x_2031_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
lean_object* v___x_2033_; 
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 0, v___x_2031_);
v___x_2033_ = v___x_2022_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2034_; 
v_reuseFailAlloc_2034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2034_, 0, v___x_2031_);
v___x_2033_ = v_reuseFailAlloc_2034_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
return v___x_2033_;
}
}
}
}
else
{
size_t v___x_2039_; size_t v___x_2040_; uint8_t v___x_2041_; 
v___x_2039_ = lean_ptr_addr(v_decl_2007_);
v___x_2040_ = lean_ptr_addr(v_a_2018_);
v___x_2041_ = lean_usize_dec_eq(v___x_2039_, v___x_2040_);
if (v___x_2041_ == 0)
{
lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2051_; 
v_isSharedCheck_2051_ = !lean_is_exclusive(v_code_1975_);
if (v_isSharedCheck_2051_ == 0)
{
lean_object* v_unused_2052_; lean_object* v_unused_2053_; 
v_unused_2052_ = lean_ctor_get(v_code_1975_, 1);
lean_dec(v_unused_2052_);
v_unused_2053_ = lean_ctor_get(v_code_1975_, 0);
lean_dec(v_unused_2053_);
v___x_2043_ = v_code_1975_;
v_isShared_2044_ = v_isSharedCheck_2051_;
goto v_resetjp_2042_;
}
else
{
lean_dec(v_code_1975_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2051_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2046_; 
if (v_isShared_2044_ == 0)
{
lean_ctor_set(v___x_2043_, 1, v_a_2020_);
lean_ctor_set(v___x_2043_, 0, v_a_2018_);
v___x_2046_ = v___x_2043_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v_a_2018_);
lean_ctor_set(v_reuseFailAlloc_2050_, 1, v_a_2020_);
v___x_2046_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
lean_object* v___x_2048_; 
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 0, v___x_2046_);
v___x_2048_ = v___x_2022_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v___x_2046_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
}
else
{
lean_object* v___x_2055_; 
lean_dec(v_a_2020_);
lean_dec(v_a_2018_);
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 0, v_code_1975_);
v___x_2055_ = v___x_2022_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v_code_1975_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
return v___x_2055_;
}
}
}
}
}
else
{
lean_dec(v_a_2018_);
lean_dec_ref_known(v_code_1975_, 2);
return v___x_2019_;
}
}
else
{
lean_object* v_a_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2065_; 
lean_dec_ref_known(v_code_1975_, 2);
lean_dec_ref(v_values_1974_);
v_a_2058_ = lean_ctor_get(v___x_2017_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2017_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2060_ = v___x_2017_;
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_a_2058_);
lean_dec(v___x_2017_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2063_; 
if (v_isShared_2061_ == 0)
{
v___x_2063_ = v___x_2060_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2058_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
}
}
else
{
lean_dec(v_a_2014_);
lean_dec_ref_known(v_code_1975_, 2);
lean_dec_ref(v_values_1974_);
return v___x_2015_;
}
}
else
{
lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2073_; 
lean_dec_ref_known(v_code_1975_, 2);
lean_dec_ref(v_values_1974_);
v_a_2066_ = lean_ctor_get(v___x_2013_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2013_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2068_ = v___x_2013_;
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_dec(v___x_2013_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2071_; 
if (v_isShared_2069_ == 0)
{
v___x_2071_ = v___x_2068_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2066_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
}
}
case 3:
{
lean_object* v___x_2074_; 
lean_dec_ref(v_values_1974_);
v___x_2074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2074_, 0, v_code_1975_);
return v___x_2074_;
}
case 4:
{
lean_object* v_cases_2075_; lean_object* v_typeName_2076_; lean_object* v_resultType_2077_; lean_object* v_discr_2078_; lean_object* v_alts_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2118_; 
v_cases_2075_ = lean_ctor_get(v_code_1975_, 0);
lean_inc_ref(v_cases_2075_);
v_typeName_2076_ = lean_ctor_get(v_cases_2075_, 0);
v_resultType_2077_ = lean_ctor_get(v_cases_2075_, 1);
v_discr_2078_ = lean_ctor_get(v_cases_2075_, 2);
v_alts_2079_ = lean_ctor_get(v_cases_2075_, 3);
v_isSharedCheck_2118_ = !lean_is_exclusive(v_cases_2075_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2081_ = v_cases_2075_;
v_isShared_2082_ = v_isSharedCheck_2118_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_alts_2079_);
lean_inc(v_discr_2078_);
lean_inc(v_resultType_2077_);
lean_inc(v_typeName_2076_);
lean_dec(v_cases_2075_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2118_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2083_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_2079_);
v___x_2084_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__1(v_values_1974_, v___x_2083_, v_alts_2079_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_);
if (lean_obj_tag(v___x_2084_) == 0)
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2109_; 
v_a_2085_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2087_ = v___x_2084_;
v_isShared_2088_ = v_isSharedCheck_2109_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2084_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2109_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
size_t v___x_2089_; size_t v___x_2090_; uint8_t v___x_2091_; 
v___x_2089_ = lean_ptr_addr(v_alts_2079_);
lean_dec_ref(v_alts_2079_);
v___x_2090_ = lean_ptr_addr(v_a_2085_);
v___x_2091_ = lean_usize_dec_eq(v___x_2089_, v___x_2090_);
if (v___x_2091_ == 0)
{
lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2104_; 
v_isSharedCheck_2104_ = !lean_is_exclusive(v_code_1975_);
if (v_isSharedCheck_2104_ == 0)
{
lean_object* v_unused_2105_; 
v_unused_2105_ = lean_ctor_get(v_code_1975_, 0);
lean_dec(v_unused_2105_);
v___x_2093_ = v_code_1975_;
v_isShared_2094_ = v_isSharedCheck_2104_;
goto v_resetjp_2092_;
}
else
{
lean_dec(v_code_1975_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2104_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2096_; 
if (v_isShared_2082_ == 0)
{
lean_ctor_set(v___x_2081_, 3, v_a_2085_);
v___x_2096_ = v___x_2081_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v_typeName_2076_);
lean_ctor_set(v_reuseFailAlloc_2103_, 1, v_resultType_2077_);
lean_ctor_set(v_reuseFailAlloc_2103_, 2, v_discr_2078_);
lean_ctor_set(v_reuseFailAlloc_2103_, 3, v_a_2085_);
v___x_2096_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
lean_object* v___x_2098_; 
if (v_isShared_2094_ == 0)
{
lean_ctor_set(v___x_2093_, 0, v___x_2096_);
v___x_2098_ = v___x_2093_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v___x_2096_);
v___x_2098_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
lean_object* v___x_2100_; 
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 0, v___x_2098_);
v___x_2100_ = v___x_2087_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2098_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
}
}
}
else
{
lean_object* v___x_2107_; 
lean_dec(v_a_2085_);
lean_del_object(v___x_2081_);
lean_dec(v_discr_2078_);
lean_dec_ref(v_resultType_2077_);
lean_dec(v_typeName_2076_);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 0, v_code_1975_);
v___x_2107_ = v___x_2087_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v_code_1975_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
}
else
{
lean_object* v_a_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2117_; 
lean_del_object(v___x_2081_);
lean_dec_ref(v_alts_2079_);
lean_dec(v_discr_2078_);
lean_dec_ref(v_resultType_2077_);
lean_dec(v_typeName_2076_);
lean_dec_ref_known(v_code_1975_, 1);
v_a_2110_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2112_ = v___x_2084_;
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_a_2110_);
lean_dec(v___x_2084_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2115_; 
if (v_isShared_2113_ == 0)
{
v___x_2115_ = v___x_2112_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_a_2110_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
}
}
case 5:
{
lean_object* v___x_2119_; 
lean_dec_ref(v_values_1974_);
v___x_2119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2119_, 0, v_code_1975_);
return v___x_2119_;
}
case 6:
{
lean_object* v___x_2120_; 
lean_dec_ref(v_values_1974_);
v___x_2120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2120_, 0, v_code_1975_);
return v___x_2120_;
}
case 8:
{
lean_object* v_fvarId_2121_; lean_object* v_i_2122_; lean_object* v_y_2123_; lean_object* v_k_2124_; lean_object* v___x_2125_; 
v_fvarId_2121_ = lean_ctor_get(v_code_1975_, 0);
v_i_2122_ = lean_ctor_get(v_code_1975_, 1);
v_y_2123_ = lean_ctor_get(v_code_1975_, 2);
v_k_2124_ = lean_ctor_get(v_code_1975_, 3);
lean_inc_ref(v_k_2124_);
v___x_2125_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode(v_values_1974_, v_k_2124_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_);
if (lean_obj_tag(v___x_2125_) == 0)
{
lean_object* v_a_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2150_; 
v_a_2126_ = lean_ctor_get(v___x_2125_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2125_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2128_ = v___x_2125_;
v_isShared_2129_ = v_isSharedCheck_2150_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_a_2126_);
lean_dec(v___x_2125_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2150_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
size_t v___x_2130_; size_t v___x_2131_; uint8_t v___x_2132_; 
v___x_2130_ = lean_ptr_addr(v_k_2124_);
v___x_2131_ = lean_ptr_addr(v_a_2126_);
v___x_2132_ = lean_usize_dec_eq(v___x_2130_, v___x_2131_);
if (v___x_2132_ == 0)
{
lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2142_; 
lean_inc(v_y_2123_);
lean_inc(v_i_2122_);
lean_inc(v_fvarId_2121_);
v_isSharedCheck_2142_ = !lean_is_exclusive(v_code_1975_);
if (v_isSharedCheck_2142_ == 0)
{
lean_object* v_unused_2143_; lean_object* v_unused_2144_; lean_object* v_unused_2145_; lean_object* v_unused_2146_; 
v_unused_2143_ = lean_ctor_get(v_code_1975_, 3);
lean_dec(v_unused_2143_);
v_unused_2144_ = lean_ctor_get(v_code_1975_, 2);
lean_dec(v_unused_2144_);
v_unused_2145_ = lean_ctor_get(v_code_1975_, 1);
lean_dec(v_unused_2145_);
v_unused_2146_ = lean_ctor_get(v_code_1975_, 0);
lean_dec(v_unused_2146_);
v___x_2134_ = v_code_1975_;
v_isShared_2135_ = v_isSharedCheck_2142_;
goto v_resetjp_2133_;
}
else
{
lean_dec(v_code_1975_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2142_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2135_ == 0)
{
lean_ctor_set(v___x_2134_, 3, v_a_2126_);
v___x_2137_ = v___x_2134_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v_fvarId_2121_);
lean_ctor_set(v_reuseFailAlloc_2141_, 1, v_i_2122_);
lean_ctor_set(v_reuseFailAlloc_2141_, 2, v_y_2123_);
lean_ctor_set(v_reuseFailAlloc_2141_, 3, v_a_2126_);
v___x_2137_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
lean_object* v___x_2139_; 
if (v_isShared_2129_ == 0)
{
lean_ctor_set(v___x_2128_, 0, v___x_2137_);
v___x_2139_ = v___x_2128_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v___x_2137_);
v___x_2139_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
return v___x_2139_;
}
}
}
}
else
{
lean_object* v___x_2148_; 
lean_dec(v_a_2126_);
if (v_isShared_2129_ == 0)
{
lean_ctor_set(v___x_2128_, 0, v_code_1975_);
v___x_2148_ = v___x_2128_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_code_1975_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1975_, 4);
return v___x_2125_;
}
}
case 9:
{
lean_object* v_fvarId_2151_; lean_object* v_i_2152_; lean_object* v_offset_2153_; lean_object* v_y_2154_; lean_object* v_ty_2155_; lean_object* v_k_2156_; lean_object* v___x_2157_; 
v_fvarId_2151_ = lean_ctor_get(v_code_1975_, 0);
v_i_2152_ = lean_ctor_get(v_code_1975_, 1);
v_offset_2153_ = lean_ctor_get(v_code_1975_, 2);
v_y_2154_ = lean_ctor_get(v_code_1975_, 3);
v_ty_2155_ = lean_ctor_get(v_code_1975_, 4);
v_k_2156_ = lean_ctor_get(v_code_1975_, 5);
lean_inc_ref(v_k_2156_);
v___x_2157_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode(v_values_1974_, v_k_2156_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v_a_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2184_; 
v_a_2158_ = lean_ctor_get(v___x_2157_, 0);
v_isSharedCheck_2184_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2160_ = v___x_2157_;
v_isShared_2161_ = v_isSharedCheck_2184_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_a_2158_);
lean_dec(v___x_2157_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2184_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
size_t v___x_2162_; size_t v___x_2163_; uint8_t v___x_2164_; 
v___x_2162_ = lean_ptr_addr(v_k_2156_);
v___x_2163_ = lean_ptr_addr(v_a_2158_);
v___x_2164_ = lean_usize_dec_eq(v___x_2162_, v___x_2163_);
if (v___x_2164_ == 0)
{
lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2174_; 
lean_inc_ref(v_ty_2155_);
lean_inc(v_y_2154_);
lean_inc(v_offset_2153_);
lean_inc(v_i_2152_);
lean_inc(v_fvarId_2151_);
v_isSharedCheck_2174_ = !lean_is_exclusive(v_code_1975_);
if (v_isSharedCheck_2174_ == 0)
{
lean_object* v_unused_2175_; lean_object* v_unused_2176_; lean_object* v_unused_2177_; lean_object* v_unused_2178_; lean_object* v_unused_2179_; lean_object* v_unused_2180_; 
v_unused_2175_ = lean_ctor_get(v_code_1975_, 5);
lean_dec(v_unused_2175_);
v_unused_2176_ = lean_ctor_get(v_code_1975_, 4);
lean_dec(v_unused_2176_);
v_unused_2177_ = lean_ctor_get(v_code_1975_, 3);
lean_dec(v_unused_2177_);
v_unused_2178_ = lean_ctor_get(v_code_1975_, 2);
lean_dec(v_unused_2178_);
v_unused_2179_ = lean_ctor_get(v_code_1975_, 1);
lean_dec(v_unused_2179_);
v_unused_2180_ = lean_ctor_get(v_code_1975_, 0);
lean_dec(v_unused_2180_);
v___x_2166_ = v_code_1975_;
v_isShared_2167_ = v_isSharedCheck_2174_;
goto v_resetjp_2165_;
}
else
{
lean_dec(v_code_1975_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2174_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2169_; 
if (v_isShared_2167_ == 0)
{
lean_ctor_set(v___x_2166_, 5, v_a_2158_);
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_fvarId_2151_);
lean_ctor_set(v_reuseFailAlloc_2173_, 1, v_i_2152_);
lean_ctor_set(v_reuseFailAlloc_2173_, 2, v_offset_2153_);
lean_ctor_set(v_reuseFailAlloc_2173_, 3, v_y_2154_);
lean_ctor_set(v_reuseFailAlloc_2173_, 4, v_ty_2155_);
lean_ctor_set(v_reuseFailAlloc_2173_, 5, v_a_2158_);
v___x_2169_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
lean_object* v___x_2171_; 
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 0, v___x_2169_);
v___x_2171_ = v___x_2160_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v___x_2169_);
v___x_2171_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
return v___x_2171_;
}
}
}
}
else
{
lean_object* v___x_2182_; 
lean_dec(v_a_2158_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 0, v_code_1975_);
v___x_2182_ = v___x_2160_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v_code_1975_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1975_, 6);
return v___x_2157_;
}
}
default: 
{
lean_object* v___x_2185_; lean_object* v___x_2186_; 
lean_dec_ref(v_code_1975_);
lean_dec_ref(v_values_1974_);
v___x_2185_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode___closed__1, &l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode___closed__1_once, _init_l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode___closed__1);
v___x_2186_ = l_panic___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__2(v___x_2185_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_);
return v___x_2186_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode___boxed(lean_object* v_values_2187_, lean_object* v_code_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_){
_start:
{
lean_object* v_res_2194_; 
v_res_2194_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode(v_values_2187_, v_code_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_);
lean_dec(v___y_2192_);
lean_dec_ref(v___y_2191_);
lean_dec(v___y_2190_);
lean_dec_ref(v___y_2189_);
return v_res_2194_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__1(lean_object* v_values_2195_, lean_object* v_i_2196_, lean_object* v_as_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_){
_start:
{
lean_object* v___x_2203_; uint8_t v___x_2204_; 
v___x_2203_ = lean_array_get_size(v_as_2197_);
v___x_2204_ = lean_nat_dec_lt(v_i_2196_, v___x_2203_);
if (v___x_2204_ == 0)
{
lean_object* v___x_2205_; 
lean_dec(v_i_2196_);
lean_dec_ref(v_values_2195_);
v___x_2205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2205_, 0, v_as_2197_);
return v___x_2205_;
}
else
{
lean_object* v_a_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v_a_2206_ = lean_array_fget_borrowed(v_as_2197_, v_i_2196_);
lean_inc_ref(v_values_2195_);
v___x_2207_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode___boxed), 7, 1);
lean_closure_set(v___x_2207_, 0, v_values_2195_);
lean_inc(v_a_2206_);
v___x_2208_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__0___redArg(v_a_2206_, v___x_2207_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_);
if (lean_obj_tag(v___x_2208_) == 0)
{
lean_object* v_a_2209_; size_t v___x_2210_; size_t v___x_2211_; uint8_t v___x_2212_; 
v_a_2209_ = lean_ctor_get(v___x_2208_, 0);
lean_inc(v_a_2209_);
lean_dec_ref_known(v___x_2208_, 1);
v___x_2210_ = lean_ptr_addr(v_a_2206_);
v___x_2211_ = lean_ptr_addr(v_a_2209_);
v___x_2212_ = lean_usize_dec_eq(v___x_2210_, v___x_2211_);
if (v___x_2212_ == 0)
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
v___x_2213_ = lean_unsigned_to_nat(1u);
v___x_2214_ = lean_nat_add(v_i_2196_, v___x_2213_);
v___x_2215_ = lean_array_fset(v_as_2197_, v_i_2196_, v_a_2209_);
lean_dec(v_i_2196_);
v_i_2196_ = v___x_2214_;
v_as_2197_ = v___x_2215_;
goto _start;
}
else
{
lean_object* v___x_2217_; lean_object* v___x_2218_; 
lean_dec(v_a_2209_);
v___x_2217_ = lean_unsigned_to_nat(1u);
v___x_2218_ = lean_nat_add(v_i_2196_, v___x_2217_);
lean_dec(v_i_2196_);
v_i_2196_ = v___x_2218_;
goto _start;
}
}
else
{
lean_object* v_a_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2227_; 
lean_dec_ref(v_as_2197_);
lean_dec(v_i_2196_);
lean_dec_ref(v_values_2195_);
v_a_2220_ = lean_ctor_get(v___x_2208_, 0);
v_isSharedCheck_2227_ = !lean_is_exclusive(v___x_2208_);
if (v_isSharedCheck_2227_ == 0)
{
v___x_2222_ = v___x_2208_;
v_isShared_2223_ = v_isSharedCheck_2227_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_a_2220_);
lean_dec(v___x_2208_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2227_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2225_; 
if (v_isShared_2223_ == 0)
{
v___x_2225_ = v___x_2222_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v_a_2220_);
v___x_2225_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
return v___x_2225_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__1___boxed(lean_object* v_values_2228_, lean_object* v_i_2229_, lean_object* v_as_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_){
_start:
{
lean_object* v_res_2236_; 
v_res_2236_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode_spec__1(v_values_2228_, v_i_2229_, v_as_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyOwnedness(lean_object* v_decl_2237_, lean_object* v_values_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_){
_start:
{
lean_object* v_value_2244_; 
v_value_2244_ = lean_ctor_get(v_decl_2237_, 1);
lean_inc_ref(v_value_2244_);
if (lean_obj_tag(v_value_2244_) == 0)
{
lean_object* v_toSignature_2245_; uint8_t v_recursive_2246_; lean_object* v_inlineAttr_x3f_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2301_; 
v_toSignature_2245_ = lean_ctor_get(v_decl_2237_, 0);
v_recursive_2246_ = lean_ctor_get_uint8(v_decl_2237_, sizeof(void*)*3);
v_inlineAttr_x3f_2247_ = lean_ctor_get(v_decl_2237_, 2);
v_isSharedCheck_2301_ = !lean_is_exclusive(v_decl_2237_);
if (v_isSharedCheck_2301_ == 0)
{
lean_object* v_unused_2302_; 
v_unused_2302_ = lean_ctor_get(v_decl_2237_, 1);
lean_dec(v_unused_2302_);
v___x_2249_ = v_decl_2237_;
v_isShared_2250_ = v_isSharedCheck_2301_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_inlineAttr_x3f_2247_);
lean_inc(v_toSignature_2245_);
lean_dec(v_decl_2237_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2301_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v_code_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2300_; 
v_code_2251_ = lean_ctor_get(v_value_2244_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v_value_2244_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2253_ = v_value_2244_;
v_isShared_2254_ = v_isSharedCheck_2300_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_code_2251_);
lean_dec(v_value_2244_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2300_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v_name_2255_; lean_object* v_levelParams_2256_; lean_object* v_type_2257_; lean_object* v_params_2258_; uint8_t v_safe_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2299_; 
v_name_2255_ = lean_ctor_get(v_toSignature_2245_, 0);
v_levelParams_2256_ = lean_ctor_get(v_toSignature_2245_, 1);
v_type_2257_ = lean_ctor_get(v_toSignature_2245_, 2);
v_params_2258_ = lean_ctor_get(v_toSignature_2245_, 3);
v_safe_2259_ = lean_ctor_get_uint8(v_toSignature_2245_, sizeof(void*)*4);
v_isSharedCheck_2299_ = !lean_is_exclusive(v_toSignature_2245_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2261_ = v_toSignature_2245_;
v_isShared_2262_ = v_isSharedCheck_2299_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_params_2258_);
lean_inc(v_type_2257_);
lean_inc(v_levelParams_2256_);
lean_inc(v_name_2255_);
lean_dec(v_toSignature_2245_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2299_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2263_; 
v___x_2263_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_updateParams(v_values_2238_, v_params_2258_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_);
if (lean_obj_tag(v___x_2263_) == 0)
{
lean_object* v_a_2264_; lean_object* v___x_2265_; 
v_a_2264_ = lean_ctor_get(v___x_2263_, 0);
lean_inc(v_a_2264_);
lean_dec_ref_known(v___x_2263_, 1);
v___x_2265_ = l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_Decl_applyOwnedness_goCode(v_values_2238_, v_code_2251_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_);
if (lean_obj_tag(v___x_2265_) == 0)
{
lean_object* v_a_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2282_; 
v_a_2266_ = lean_ctor_get(v___x_2265_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2265_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2268_ = v___x_2265_;
v_isShared_2269_ = v_isSharedCheck_2282_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_a_2266_);
lean_dec(v___x_2265_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2282_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2271_; 
if (v_isShared_2262_ == 0)
{
lean_ctor_set(v___x_2261_, 3, v_a_2264_);
v___x_2271_ = v___x_2261_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v_name_2255_);
lean_ctor_set(v_reuseFailAlloc_2281_, 1, v_levelParams_2256_);
lean_ctor_set(v_reuseFailAlloc_2281_, 2, v_type_2257_);
lean_ctor_set(v_reuseFailAlloc_2281_, 3, v_a_2264_);
lean_ctor_set_uint8(v_reuseFailAlloc_2281_, sizeof(void*)*4, v_safe_2259_);
v___x_2271_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
lean_object* v___x_2273_; 
if (v_isShared_2254_ == 0)
{
lean_ctor_set(v___x_2253_, 0, v_a_2266_);
v___x_2273_ = v___x_2253_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v_a_2266_);
v___x_2273_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
lean_object* v___x_2275_; 
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 1, v___x_2273_);
lean_ctor_set(v___x_2249_, 0, v___x_2271_);
v___x_2275_ = v___x_2249_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v___x_2271_);
lean_ctor_set(v_reuseFailAlloc_2279_, 1, v___x_2273_);
lean_ctor_set(v_reuseFailAlloc_2279_, 2, v_inlineAttr_x3f_2247_);
lean_ctor_set_uint8(v_reuseFailAlloc_2279_, sizeof(void*)*3, v_recursive_2246_);
v___x_2275_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
lean_object* v___x_2277_; 
if (v_isShared_2269_ == 0)
{
lean_ctor_set(v___x_2268_, 0, v___x_2275_);
v___x_2277_ = v___x_2268_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v___x_2275_);
v___x_2277_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
return v___x_2277_;
}
}
}
}
}
}
else
{
lean_object* v_a_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2290_; 
lean_dec(v_a_2264_);
lean_del_object(v___x_2261_);
lean_dec_ref(v_type_2257_);
lean_dec(v_levelParams_2256_);
lean_dec(v_name_2255_);
lean_del_object(v___x_2253_);
lean_del_object(v___x_2249_);
lean_dec(v_inlineAttr_x3f_2247_);
v_a_2283_ = lean_ctor_get(v___x_2265_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v___x_2265_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2285_ = v___x_2265_;
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_a_2283_);
lean_dec(v___x_2265_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2288_; 
if (v_isShared_2286_ == 0)
{
v___x_2288_ = v___x_2285_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_a_2283_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
return v___x_2288_;
}
}
}
}
else
{
lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2298_; 
lean_del_object(v___x_2261_);
lean_dec_ref(v_type_2257_);
lean_dec(v_levelParams_2256_);
lean_dec(v_name_2255_);
lean_del_object(v___x_2253_);
lean_dec_ref(v_code_2251_);
lean_del_object(v___x_2249_);
lean_dec(v_inlineAttr_x3f_2247_);
lean_dec_ref(v_values_2238_);
v_a_2291_ = lean_ctor_get(v___x_2263_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2293_ = v___x_2263_;
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v___x_2263_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
if (v_isShared_2294_ == 0)
{
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_a_2291_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
return v___x_2296_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2303_; 
lean_dec_ref(v_value_2244_);
lean_dec_ref(v_values_2238_);
v___x_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2303_, 0, v_decl_2237_);
return v___x_2303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_applyOwnedness___boxed(lean_object* v_decl_2304_, lean_object* v_values_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_){
_start:
{
lean_object* v_res_2311_; 
v_res_2311_ = l_Lean_Compiler_LCNF_Decl_applyOwnedness(v_decl_2304_, v_values_2305_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_);
lean_dec(v___y_2309_);
lean_dec_ref(v___y_2308_);
lean_dec(v___y_2307_);
lean_dec_ref(v___y_2306_);
return v_res_2311_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_PropagateBorrow(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_instInhabitedOwnedness_default = _init_l_Lean_Compiler_LCNF_instInhabitedOwnedness_default();
l_Lean_Compiler_LCNF_instInhabitedOwnedness = _init_l_Lean_Compiler_LCNF_instInhabitedOwnedness();
l_Lean_Compiler_LCNF_instInhabitedState_default = _init_l_Lean_Compiler_LCNF_instInhabitedState_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_instInhabitedState_default);
l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_instInhabitedState = _init_l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_instInhabitedState();
lean_mark_persistent(l___private_Lean_Compiler_LCNF_PropagateBorrow_0__Lean_Compiler_LCNF_instInhabitedState);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_PropagateBorrow(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_PropagateBorrow(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PropagateBorrow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_PropagateBorrow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_PropagateBorrow(builtin);
}
#ifdef __cplusplus
}
#endif
